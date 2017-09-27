/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/lodlistener.h"
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MovableObjectLodChangedEvent_get_1movableObject_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::MovableObjectLodChangedEvent *pObjectX = (EarthView::World::Graphic::MovableObjectLodChangedEvent*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->movableObject);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MovableObjectLodChangedEvent_set_1movableObject_1CMovableObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::MovableObjectLodChangedEvent *pObjectX = (EarthView::World::Graphic::MovableObjectLodChangedEvent*)pObjXXXX;
				pObjectX->movableObject = (EarthView::World::Graphic::CMovableObject*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MovableObjectLodChangedEvent_get_1camera_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::MovableObjectLodChangedEvent *pObjectX = (EarthView::World::Graphic::MovableObjectLodChangedEvent*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->camera);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MovableObjectLodChangedEvent_set_1camera_1CCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::MovableObjectLodChangedEvent *pObjectX = (EarthView::World::Graphic::MovableObjectLodChangedEvent*)pObjXXXX;
				pObjectX->camera = (EarthView::World::Graphic::CCamera*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_EntityMeshLodChangedEvent_get_1entity_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::EntityMeshLodChangedEvent *pObjectX = (EarthView::World::Graphic::EntityMeshLodChangedEvent*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->entity);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EntityMeshLodChangedEvent_set_1entity_1CEntity(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::EntityMeshLodChangedEvent *pObjectX = (EarthView::World::Graphic::EntityMeshLodChangedEvent*)pObjXXXX;
				pObjectX->entity = (EarthView::World::Graphic::CEntity*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_EntityMeshLodChangedEvent_get_1camera_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::EntityMeshLodChangedEvent *pObjectX = (EarthView::World::Graphic::EntityMeshLodChangedEvent*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->camera);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EntityMeshLodChangedEvent_set_1camera_1CCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::EntityMeshLodChangedEvent *pObjectX = (EarthView::World::Graphic::EntityMeshLodChangedEvent*)pObjXXXX;
				pObjectX->camera = (EarthView::World::Graphic::CCamera*) __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_EntityMeshLodChangedEvent_get_1lodValue_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::EntityMeshLodChangedEvent *pObjectX = (EarthView::World::Graphic::EntityMeshLodChangedEvent*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->lodValue);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EntityMeshLodChangedEvent_set_1lodValue_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Graphic::EntityMeshLodChangedEvent *pObjectX = (EarthView::World::Graphic::EntityMeshLodChangedEvent*)pObjXXXX;
				pObjectX->lodValue = (Real)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_EntityMeshLodChangedEvent_get_1previousLodIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::EntityMeshLodChangedEvent *pObjectX = (EarthView::World::Graphic::EntityMeshLodChangedEvent*)pObjXXXX;
				jint __values1_j = (jint) (pObjectX->previousLodIndex);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EntityMeshLodChangedEvent_set_1previousLodIndex_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::EntityMeshLodChangedEvent *pObjectX = (EarthView::World::Graphic::EntityMeshLodChangedEvent*)pObjXXXX;
				pObjectX->previousLodIndex = (ev_uint16)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_EntityMeshLodChangedEvent_get_1newLodIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::EntityMeshLodChangedEvent *pObjectX = (EarthView::World::Graphic::EntityMeshLodChangedEvent*)pObjXXXX;
				jint __values1_j = (jint) (pObjectX->newLodIndex);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EntityMeshLodChangedEvent_set_1newLodIndex_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::EntityMeshLodChangedEvent *pObjectX = (EarthView::World::Graphic::EntityMeshLodChangedEvent*)pObjXXXX;
				pObjectX->newLodIndex = (ev_uint16)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_EntityMaterialLodChangedEvent_get_1subEntity_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::EntityMaterialLodChangedEvent *pObjectX = (EarthView::World::Graphic::EntityMaterialLodChangedEvent*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->subEntity);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EntityMaterialLodChangedEvent_set_1subEntity_1CSubEntity(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::EntityMaterialLodChangedEvent *pObjectX = (EarthView::World::Graphic::EntityMaterialLodChangedEvent*)pObjXXXX;
				pObjectX->subEntity = (EarthView::World::Graphic::CSubEntity*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_EntityMaterialLodChangedEvent_get_1camera_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::EntityMaterialLodChangedEvent *pObjectX = (EarthView::World::Graphic::EntityMaterialLodChangedEvent*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->camera);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EntityMaterialLodChangedEvent_set_1camera_1CCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::EntityMaterialLodChangedEvent *pObjectX = (EarthView::World::Graphic::EntityMaterialLodChangedEvent*)pObjXXXX;
				pObjectX->camera = (EarthView::World::Graphic::CCamera*) __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_EntityMaterialLodChangedEvent_get_1lodValue_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::EntityMaterialLodChangedEvent *pObjectX = (EarthView::World::Graphic::EntityMaterialLodChangedEvent*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->lodValue);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EntityMaterialLodChangedEvent_set_1lodValue_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Graphic::EntityMaterialLodChangedEvent *pObjectX = (EarthView::World::Graphic::EntityMaterialLodChangedEvent*)pObjXXXX;
				pObjectX->lodValue = (Real)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_EntityMaterialLodChangedEvent_get_1previousLodIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::EntityMaterialLodChangedEvent *pObjectX = (EarthView::World::Graphic::EntityMaterialLodChangedEvent*)pObjXXXX;
				jint __values1_j = (jint) (pObjectX->previousLodIndex);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EntityMaterialLodChangedEvent_set_1previousLodIndex_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::EntityMaterialLodChangedEvent *pObjectX = (EarthView::World::Graphic::EntityMaterialLodChangedEvent*)pObjXXXX;
				pObjectX->previousLodIndex = (ev_uint16)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_EntityMaterialLodChangedEvent_get_1newLodIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::EntityMaterialLodChangedEvent *pObjectX = (EarthView::World::Graphic::EntityMaterialLodChangedEvent*)pObjXXXX;
				jint __values1_j = (jint) (pObjectX->newLodIndex);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EntityMaterialLodChangedEvent_set_1newLodIndex_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::EntityMaterialLodChangedEvent *pObjectX = (EarthView::World::Graphic::EntityMaterialLodChangedEvent*)pObjXXXX;
				pObjectX->newLodIndex = (ev_uint16)__values1_j;
			}
			class JCLodListenerProxy : public EarthView::World::Graphic::CLodListener
			{
			 private:
				EarthView::World::Core::ev_string m_prequeueMovableObjectLodChanged_MovableObjectLodChangedEvent_callback;
				EarthView::World::Core::ev_string m_postqueueMovableObjectLodChanged_MovableObjectLodChangedEvent_callback;
				EarthView::World::Core::ev_string m_prequeueEntityMeshLodChanged_EntityMeshLodChangedEvent_callback;
				EarthView::World::Core::ev_string m_postqueueEntityMeshLodChanged_EntityMeshLodChangedEvent_callback;
				EarthView::World::Core::ev_string m_prequeueEntityMaterialLodChanged_EntityMaterialLodChangedEvent_callback;
				EarthView::World::Core::ev_string m_postqueueEntityMaterialLodChanged_EntityMaterialLodChangedEvent_callback;
			public:
				JCLodListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CLodListener(pList)
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
				void register_prequeueMovableObjectLodChanged_MovableObjectLodChangedEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_prequeueMovableObjectLodChanged_MovableObjectLodChangedEvent_callback = __method;
				}
				void register_postqueueMovableObjectLodChanged_MovableObjectLodChangedEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_postqueueMovableObjectLodChanged_MovableObjectLodChangedEvent_callback = __method;
				}
				void register_prequeueEntityMeshLodChanged_EntityMeshLodChangedEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_prequeueEntityMeshLodChanged_EntityMeshLodChangedEvent_callback = __method;
				}
				void register_postqueueEntityMeshLodChanged_EntityMeshLodChangedEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_postqueueEntityMeshLodChanged_EntityMeshLodChangedEvent_callback = __method;
				}
				void register_prequeueEntityMaterialLodChanged_EntityMaterialLodChangedEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_prequeueEntityMaterialLodChanged_EntityMaterialLodChangedEvent_callback = __method;
				}
				void register_postqueueEntityMaterialLodChanged_EntityMaterialLodChangedEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_postqueueEntityMaterialLodChanged_EntityMaterialLodChangedEvent_callback = __method;
				}
				virtual ev_bool prequeueMovableObjectLodChanged(const EarthView::World::Graphic::MovableObjectLodChangedEvent& evt)
				{
					if (this->_gRef != NULL && this->m_prequeueMovableObjectLodChanged_MovableObjectLodChangedEvent_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("prequeueMovableObjectLodChanged_MovableObjectLodChangedEvent_callback");
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
						return this->CLodListener::prequeueMovableObjectLodChanged(evt);
					}
				}
				virtual void postqueueMovableObjectLodChanged(const EarthView::World::Graphic::MovableObjectLodChangedEvent& evt)
				{
					if (this->_gRef != NULL && this->m_postqueueMovableObjectLodChanged_MovableObjectLodChangedEvent_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("postqueueMovableObjectLodChanged_MovableObjectLodChangedEvent_callback");
						__env->CallVoidMethod(__obj, __method , evt_j);
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
						return this->CLodListener::postqueueMovableObjectLodChanged(evt);
					}
				}
				virtual ev_bool prequeueEntityMeshLodChanged(EarthView::World::Graphic::EntityMeshLodChangedEvent& evt)
				{
					if (this->_gRef != NULL && this->m_prequeueEntityMeshLodChanged_EntityMeshLodChangedEvent_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("prequeueEntityMeshLodChanged_EntityMeshLodChangedEvent_callback");
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
						return this->CLodListener::prequeueEntityMeshLodChanged(evt);
					}
				}
				virtual void postqueueEntityMeshLodChanged(const EarthView::World::Graphic::EntityMeshLodChangedEvent& evt)
				{
					if (this->_gRef != NULL && this->m_postqueueEntityMeshLodChanged_EntityMeshLodChangedEvent_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("postqueueEntityMeshLodChanged_EntityMeshLodChangedEvent_callback");
						__env->CallVoidMethod(__obj, __method , evt_j);
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
						return this->CLodListener::postqueueEntityMeshLodChanged(evt);
					}
				}
				virtual ev_bool prequeueEntityMaterialLodChanged(EarthView::World::Graphic::EntityMaterialLodChangedEvent& evt)
				{
					if (this->_gRef != NULL && this->m_prequeueEntityMaterialLodChanged_EntityMaterialLodChangedEvent_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("prequeueEntityMaterialLodChanged_EntityMaterialLodChangedEvent_callback");
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
						return this->CLodListener::prequeueEntityMaterialLodChanged(evt);
					}
				}
				virtual void postqueueEntityMaterialLodChanged(const EarthView::World::Graphic::EntityMaterialLodChangedEvent& evt)
				{
					if (this->_gRef != NULL && this->m_postqueueEntityMaterialLodChanged_EntityMaterialLodChangedEvent_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("postqueueEntityMaterialLodChanged_EntityMaterialLodChangedEvent_callback");
						__env->CallVoidMethod(__obj, __method , evt_j);
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
						return this->CLodListener::postqueueEntityMaterialLodChanged(evt);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCLodListenerProxy);
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_LodListener_prequeueMovableObjectLodChanged_1MovableObjectLodChangedEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::MovableObjectLodChangedEvent &evt = *(EarthView::World::Graphic::MovableObjectLodChangedEvent*) evt_j;
				EarthView::World::Graphic::CLodListener *pObjectX = (EarthView::World::Graphic::CLodListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCLodListenerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CLodListener::prequeueMovableObjectLodChanged(evt);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->prequeueMovableObjectLodChanged(evt);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LodListener_register_1prequeueMovableObjectLodChanged_1MovableObjectLodChangedEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLodListenerProxy *pObjectX = (JCLodListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_prequeueMovableObjectLodChanged_MovableObjectLodChangedEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"prequeueMovableObjectLodChanged_MovableObjectLodChangedEvent_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_LodListener_prequeueMovableObjectLodChanged_1MovableObjectLodChangedEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::MovableObjectLodChangedEvent &evt = *(EarthView::World::Graphic::MovableObjectLodChangedEvent*) evt_j;
				EarthView::World::Graphic::CLodListener *pObjectX = (EarthView::World::Graphic::CLodListener*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CLodListener::prequeueMovableObjectLodChanged(evt);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LodListener_postqueueMovableObjectLodChanged_1MovableObjectLodChangedEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::MovableObjectLodChangedEvent &evt = *(EarthView::World::Graphic::MovableObjectLodChangedEvent*) evt_j;
				EarthView::World::Graphic::CLodListener *pObjectX = (EarthView::World::Graphic::CLodListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCLodListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CLodListener::postqueueMovableObjectLodChanged(evt);
				}
				else
				{
					pObjectX->postqueueMovableObjectLodChanged(evt);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LodListener_register_1postqueueMovableObjectLodChanged_1MovableObjectLodChangedEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLodListenerProxy *pObjectX = (JCLodListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_postqueueMovableObjectLodChanged_MovableObjectLodChangedEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"postqueueMovableObjectLodChanged_MovableObjectLodChangedEvent_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LodListener_postqueueMovableObjectLodChanged_1MovableObjectLodChangedEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::MovableObjectLodChangedEvent &evt = *(EarthView::World::Graphic::MovableObjectLodChangedEvent*) evt_j;
				EarthView::World::Graphic::CLodListener *pObjectX = (EarthView::World::Graphic::CLodListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CLodListener::postqueueMovableObjectLodChanged(evt);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_LodListener_prequeueEntityMeshLodChanged_1EntityMeshLodChangedEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				EarthView::World::Graphic::EntityMeshLodChangedEvent &evt = *(EarthView::World::Graphic::EntityMeshLodChangedEvent*) evt_j;
				EarthView::World::Graphic::CLodListener *pObjectX = (EarthView::World::Graphic::CLodListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCLodListenerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CLodListener::prequeueEntityMeshLodChanged(evt);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->prequeueEntityMeshLodChanged(evt);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LodListener_register_1prequeueEntityMeshLodChanged_1EntityMeshLodChangedEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLodListenerProxy *pObjectX = (JCLodListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_prequeueEntityMeshLodChanged_EntityMeshLodChangedEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"prequeueEntityMeshLodChanged_EntityMeshLodChangedEvent_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_LodListener_prequeueEntityMeshLodChanged_1EntityMeshLodChangedEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				EarthView::World::Graphic::EntityMeshLodChangedEvent &evt = *(EarthView::World::Graphic::EntityMeshLodChangedEvent*) evt_j;
				EarthView::World::Graphic::CLodListener *pObjectX = (EarthView::World::Graphic::CLodListener*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CLodListener::prequeueEntityMeshLodChanged(evt);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LodListener_postqueueEntityMeshLodChanged_1EntityMeshLodChangedEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::EntityMeshLodChangedEvent &evt = *(EarthView::World::Graphic::EntityMeshLodChangedEvent*) evt_j;
				EarthView::World::Graphic::CLodListener *pObjectX = (EarthView::World::Graphic::CLodListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCLodListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CLodListener::postqueueEntityMeshLodChanged(evt);
				}
				else
				{
					pObjectX->postqueueEntityMeshLodChanged(evt);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LodListener_register_1postqueueEntityMeshLodChanged_1EntityMeshLodChangedEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLodListenerProxy *pObjectX = (JCLodListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_postqueueEntityMeshLodChanged_EntityMeshLodChangedEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"postqueueEntityMeshLodChanged_EntityMeshLodChangedEvent_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LodListener_postqueueEntityMeshLodChanged_1EntityMeshLodChangedEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::EntityMeshLodChangedEvent &evt = *(EarthView::World::Graphic::EntityMeshLodChangedEvent*) evt_j;
				EarthView::World::Graphic::CLodListener *pObjectX = (EarthView::World::Graphic::CLodListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CLodListener::postqueueEntityMeshLodChanged(evt);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_LodListener_prequeueEntityMaterialLodChanged_1EntityMaterialLodChangedEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				EarthView::World::Graphic::EntityMaterialLodChangedEvent &evt = *(EarthView::World::Graphic::EntityMaterialLodChangedEvent*) evt_j;
				EarthView::World::Graphic::CLodListener *pObjectX = (EarthView::World::Graphic::CLodListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCLodListenerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CLodListener::prequeueEntityMaterialLodChanged(evt);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->prequeueEntityMaterialLodChanged(evt);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LodListener_register_1prequeueEntityMaterialLodChanged_1EntityMaterialLodChangedEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLodListenerProxy *pObjectX = (JCLodListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_prequeueEntityMaterialLodChanged_EntityMaterialLodChangedEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"prequeueEntityMaterialLodChanged_EntityMaterialLodChangedEvent_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_LodListener_prequeueEntityMaterialLodChanged_1EntityMaterialLodChangedEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				EarthView::World::Graphic::EntityMaterialLodChangedEvent &evt = *(EarthView::World::Graphic::EntityMaterialLodChangedEvent*) evt_j;
				EarthView::World::Graphic::CLodListener *pObjectX = (EarthView::World::Graphic::CLodListener*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CLodListener::prequeueEntityMaterialLodChanged(evt);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LodListener_postqueueEntityMaterialLodChanged_1EntityMaterialLodChangedEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::EntityMaterialLodChangedEvent &evt = *(EarthView::World::Graphic::EntityMaterialLodChangedEvent*) evt_j;
				EarthView::World::Graphic::CLodListener *pObjectX = (EarthView::World::Graphic::CLodListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCLodListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CLodListener::postqueueEntityMaterialLodChanged(evt);
				}
				else
				{
					pObjectX->postqueueEntityMaterialLodChanged(evt);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LodListener_register_1postqueueEntityMaterialLodChanged_1EntityMaterialLodChangedEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLodListenerProxy *pObjectX = (JCLodListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_postqueueEntityMaterialLodChanged_EntityMaterialLodChangedEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"postqueueEntityMaterialLodChanged_EntityMaterialLodChangedEvent_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LodListener_postqueueEntityMaterialLodChanged_1EntityMaterialLodChangedEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::EntityMaterialLodChangedEvent &evt = *(EarthView::World::Graphic::EntityMaterialLodChangedEvent*) evt_j;
				EarthView::World::Graphic::CLodListener *pObjectX = (EarthView::World::Graphic::CLodListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CLodListener::postqueueEntityMaterialLodChanged(evt);
			}
		}
	}
}
