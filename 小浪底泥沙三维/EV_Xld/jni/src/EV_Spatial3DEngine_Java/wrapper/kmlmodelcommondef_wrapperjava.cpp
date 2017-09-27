/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/kmlmodelcommondef.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Kml
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace ModelManager
			{
			}
			namespace KmlManager
			{
				class JCKmlModelProxy : public EarthView::World::Spatial3D::KmlManager::CKmlModel
				{
				 private:
					EarthView::World::Core::ev_string m_getNode_void_callback;
					EarthView::World::Core::ev_string m_isLoaded_void_callback;
					EarthView::World::Core::ev_string m_isAttached_void_callback;
					EarthView::World::Core::ev_string m_load_void_callback;
					EarthView::World::Core::ev_string m_unload_void_callback;
					EarthView::World::Core::ev_string m_attachToNode_CNode_callback;
					EarthView::World::Core::ev_string m_detachFromNode_void_callback;
					EarthView::World::Core::ev_string m_attachToScene_void_callback;
					EarthView::World::Core::ev_string m_detachFromScene_void_callback;
					EarthView::World::Core::ev_string m_setUserData_CFeatureUserData_callback;
					EarthView::World::Core::ev_string m_setSelectable_ev_bool_callback;
					EarthView::World::Core::ev_string m_getSelectable_void_callback;
					EarthView::World::Core::ev_string m_update_void_callback;
					EarthView::World::Core::ev_string m_getLayer_void_callback;
					EarthView::World::Core::ev_string m_getDataset_void_callback;
					EarthView::World::Core::ev_string m_getID_void_callback;
					EarthView::World::Core::ev_string m_getName_void_callback;
					EarthView::World::Core::ev_string m_setMatrix_CMatrix4_callback;
					EarthView::World::Core::ev_string m_getMatrix_void_callback;
					EarthView::World::Core::ev_string m_setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback;
					EarthView::World::Core::ev_string m_getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback;
				public:
					JCKmlModelProxy(EarthView::World::Core::CNameValuePairList *pList) : CKmlModel(pList)
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
					void register_getNode_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getNode_void_callback = __method;
					}
					void register_isLoaded_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isLoaded_void_callback = __method;
					}
					void register_isAttached_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isAttached_void_callback = __method;
					}
					void register_load_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_load_void_callback = __method;
					}
					void register_unload_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_unload_void_callback = __method;
					}
					void register_attachToNode_CNode_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_attachToNode_CNode_callback = __method;
					}
					void register_detachFromNode_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_detachFromNode_void_callback = __method;
					}
					void register_attachToScene_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_attachToScene_void_callback = __method;
					}
					void register_detachFromScene_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_detachFromScene_void_callback = __method;
					}
					void register_setUserData_CFeatureUserData_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setUserData_CFeatureUserData_callback = __method;
					}
					void register_setSelectable_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSelectable_ev_bool_callback = __method;
					}
					void register_getSelectable_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSelectable_void_callback = __method;
					}
					void register_update_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_update_void_callback = __method;
					}
					void register_getLayer_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getLayer_void_callback = __method;
					}
					void register_getDataset_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDataset_void_callback = __method;
					}
					void register_getID_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getID_void_callback = __method;
					}
					void register_getName_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getName_void_callback = __method;
					}
					void register_setMatrix_CMatrix4_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setMatrix_CMatrix4_callback = __method;
					}
					void register_getMatrix_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getMatrix_void_callback = __method;
					}
					void register_setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback = __method;
					}
					void register_getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback = __method;
					}
					virtual void setSelectable(ev_bool selectable)
					{
						if (this->_gRef != NULL && this->m_setSelectable_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean selectable_j = (jboolean) selectable;
							jmethodID __method = __gr->getMethod("setSelectable_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , selectable_j);
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
							return this->CKmlModel::setSelectable(selectable);
						}
					}
					virtual ev_bool isLoaded()
					{
						if (this->_gRef != NULL && this->m_isLoaded_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isLoaded_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
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
							return this->CKmlModel::isLoaded();
						}
					}
					virtual ev_bool update()
					{
						if (this->_gRef != NULL && this->m_update_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("update_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
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
							return this->CKmlModel::update();
						}
					}
					virtual ev_bool isAttached()
					{
						if (this->_gRef != NULL && this->m_isAttached_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isAttached_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
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
							return this->CKmlModel::isAttached();
						}
					}
					virtual ev_bool load()
					{
						if (this->_gRef != NULL && this->m_load_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("load_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
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
							return this->CKmlModel::load();
						}
					}
					virtual ev_bool unload()
					{
						if (this->_gRef != NULL && this->m_unload_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("unload_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
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
							return this->CKmlModel::unload();
						}
					}
					virtual ev_bool attachToNode(EarthView::World::Graphic::CNode* n)
					{
						if (this->_gRef != NULL && this->m_attachToNode_CNode_callback != "" && this->isCustomExtend())
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
							jlong n_j = (jlong) n;
							jmethodID __method = __gr->getMethod("attachToNode_CNode_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , n_j);
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
							return this->CKmlModel::attachToNode(n);
						}
					}
					virtual EarthView::World::Graphic::CNode* detachFromNode()
					{
						if (this->_gRef != NULL && this->m_detachFromNode_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("detachFromNode_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Graphic::CNode *__values1 = (EarthView::World::Graphic::CNode*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CKmlModel::detachFromNode();
						}
					}
					virtual ev_bool attachToScene()
					{
						if (this->_gRef != NULL && this->m_attachToScene_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("attachToScene_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
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
							return this->CKmlModel::attachToScene();
						}
					}
					virtual ev_bool detachFromScene()
					{
						if (this->_gRef != NULL && this->m_detachFromScene_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("detachFromScene_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
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
							return this->CKmlModel::detachFromScene();
						}
					}
					virtual void setUserData(EarthView::World::Spatial3D::CFeatureUserData& userData)
					{
						if (this->_gRef != NULL && this->m_setUserData_CFeatureUserData_callback != "" && this->isCustomExtend())
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
							jlong userData_j = (jlong) &userData;
							jmethodID __method = __gr->getMethod("setUserData_CFeatureUserData_callback");
							__env->CallVoidMethod(__obj, __method , userData_j);
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
							return this->CKmlModel::setUserData(userData);
						}
					}
					virtual EarthView::World::Graphic::CNode* getNode()
					{
						if (this->_gRef != NULL && this->m_getNode_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getNode_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Graphic::CNode *__values1 = (EarthView::World::Graphic::CNode*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CKmlModel::getNode();
						}
					}
					virtual ev_bool getSelectable()
					{
						if (this->_gRef != NULL && this->m_getSelectable_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getSelectable_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
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
							return this->CKmlModel::getSelectable();
						}
					}
					virtual EarthView::World::Spatial3D::Atlas::IGlobeLayer* getLayer()
					{
						if (this->_gRef != NULL && this->m_getLayer_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getLayer_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial3D::Atlas::IGlobeLayer *__values1 = (EarthView::World::Spatial3D::Atlas::IGlobeLayer*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CKmlModel::getLayer();
						}
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
					{
						if (this->_gRef != NULL && this->m_getDataset_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getDataset_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::GeoDataset::IDataset *__values1 = (EarthView::World::Spatial::GeoDataset::IDataset*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CKmlModel::getDataset();
						}
					}
					virtual ev_uint32 getID()
					{
						if (this->_gRef != NULL && this->m_getID_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getID_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_uint32 __values1 = (ev_uint32) __values1_j;
							return __values1;
						}
						else
						{
							return this->CKmlModel::getID();
						}
					}
					virtual EVString getName()
					{
						if (this->_gRef != NULL && this->m_getName_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getName_void_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringUTFChars(__values1_j,values_ch);
							#else
							const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
							#endif
							return __values1;
						}
						else
						{
							return this->CKmlModel::getName();
						}
					}
					virtual void setMatrix(const EarthView::World::Spatial::Math::CMatrix4& m)
					{
						if (this->_gRef != NULL && this->m_setMatrix_CMatrix4_callback != "" && this->isCustomExtend())
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
							jlong m_j = (jlong) &m;
							jmethodID __method = __gr->getMethod("setMatrix_CMatrix4_callback");
							__env->CallVoidMethod(__obj, __method , m_j);
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
							return this->CKmlModel::setMatrix(m);
						}
					}
					virtual EarthView::World::Spatial::Math::CMatrix4 getMatrix()
					{
						if (this->_gRef != NULL && this->m_getMatrix_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getMatrix_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Math::CMatrix4 __values1 = *(EarthView::World::Spatial::Math::CMatrix4*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CKmlModel::getMatrix();
						}
					}
					virtual void setPosition(ev_real64 latitude, ev_real64 longitude, ev_real64 altitude, const EarthView::World::Spatial::Math::CVector3& scale, const EarthView::World::Spatial::Math::CQuaternion& qua)
					{
						if (this->_gRef != NULL && this->m_setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback != "" && this->isCustomExtend())
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
							jdouble latitude_j = (jdouble) latitude;
							jdouble longitude_j = (jdouble) longitude;
							jdouble altitude_j = (jdouble) altitude;
							jlong scale_j = (jlong) &scale;
							jlong qua_j = (jlong) &qua;
							jmethodID __method = __gr->getMethod("setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback");
							__env->CallVoidMethod(__obj, __method , latitude_j, longitude_j, altitude_j, scale_j, qua_j);
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
							return this->CKmlModel::setPosition(latitude, longitude, altitude, scale, qua);
						}
					}
					virtual void getPosition(ev_real64& latitude, ev_real64& longitude, ev_real64& altitude, EarthView::World::Spatial::Math::CVector3& scale, EarthView::World::Spatial::Math::CQuaternion& qua)
					{
						if (this->_gRef != NULL && this->m_getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback != "" && this->isCustomExtend())
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
							jlong latitude_j = (jlong) &latitude;
							jlong longitude_j = (jlong) &longitude;
							jlong altitude_j = (jlong) &altitude;
							jlong scale_j = (jlong) &scale;
							jlong qua_j = (jlong) &qua;
							jmethodID __method = __gr->getMethod("getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback");
							__env->CallVoidMethod(__obj, __method , latitude_j, longitude_j, altitude_j, scale_j, qua_j);
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
							return this->CKmlModel::getPosition(latitude, longitude, altitude, scale, qua);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCKmlModelProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_setSelectable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean selectable_j)
				{
					ev_bool selectable = (ev_bool) selectable_j;
					EarthView::World::Spatial3D::KmlManager::CKmlModel *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlModelProxy))
					{
						pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlModel::setSelectable(selectable);
					}
					else
					{
						pObjectX->setSelectable(selectable);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_register_1setSelectable_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlModelProxy *pObjectX = (JCKmlModelProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setSelectable_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setSelectable_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_setSelectable_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean selectable_j)
				{
					ev_bool selectable = (ev_bool) selectable_j;
					EarthView::World::Spatial3D::KmlManager::CKmlModel *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlModel::setSelectable(selectable);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_getIsInit_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::KmlManager::CKmlModel *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjXXXX;
					ev_bool __values1 = pObjectX->getIsInit();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_isLoaded_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlModelProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlModel::isLoaded();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isLoaded();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_register_1isLoaded_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlModelProxy *pObjectX = (JCKmlModelProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isLoaded_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isLoaded_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_isLoaded_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlModel::isLoaded();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_update_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlModelProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlModel::update();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->update();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_register_1update_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlModelProxy *pObjectX = (JCKmlModelProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_update_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"update_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_update_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlModel::update();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_isAttached_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlModelProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlModel::isAttached();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isAttached();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_register_1isAttached_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlModelProxy *pObjectX = (JCKmlModelProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isAttached_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isAttached_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_isAttached_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlModel::isAttached();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_load_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlModelProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlModel::load();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->load();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_register_1load_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlModelProxy *pObjectX = (JCKmlModelProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_load_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"load_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_load_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlModel::load();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_unload_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlModelProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlModel::unload();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->unload();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_register_1unload_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlModelProxy *pObjectX = (JCKmlModelProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_unload_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"unload_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_unload_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlModel::unload();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_attachToNode_1CNode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					EarthView::World::Graphic::CNode *n = (EarthView::World::Graphic::CNode*) n_j;
					EarthView::World::Spatial3D::KmlManager::CKmlModel *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlModelProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlModel::attachToNode(n);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->attachToNode(n);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_register_1attachToNode_1CNode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlModelProxy *pObjectX = (JCKmlModelProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_attachToNode_CNode_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"attachToNode_CNode_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_attachToNode_1CNode_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					EarthView::World::Graphic::CNode *n = (EarthView::World::Graphic::CNode*) n_j;
					EarthView::World::Spatial3D::KmlManager::CKmlModel *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlModel::attachToNode(n);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_detachFromNode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlModelProxy))
					{
						EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlModel::detachFromNode();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Graphic::CNode* __values1 = pObjectX->detachFromNode();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_register_1detachFromNode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlModelProxy *pObjectX = (JCKmlModelProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_detachFromNode_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"detachFromNode_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_detachFromNode_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjXXXX;
					EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlModel::detachFromNode();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_attachToScene_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlModelProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlModel::attachToScene();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->attachToScene();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_register_1attachToScene_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlModelProxy *pObjectX = (JCKmlModelProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_attachToScene_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"attachToScene_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_attachToScene_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlModel::attachToScene();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_detachFromScene_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlModelProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlModel::detachFromScene();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->detachFromScene();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_register_1detachFromScene_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlModelProxy *pObjectX = (JCKmlModelProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_detachFromScene_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"detachFromScene_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_detachFromScene_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlModel::detachFromScene();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_setUserData_1CFeatureUserData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong userData_j)
				{
					EarthView::World::Spatial3D::CFeatureUserData &userData = *(EarthView::World::Spatial3D::CFeatureUserData*) userData_j;
					EarthView::World::Spatial3D::KmlManager::CKmlModel *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlModelProxy))
					{
						pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlModel::setUserData(userData);
					}
					else
					{
						pObjectX->setUserData(userData);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_register_1setUserData_1CFeatureUserData(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlModelProxy *pObjectX = (JCKmlModelProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setUserData_CFeatureUserData_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setUserData_CFeatureUserData_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_setUserData_1CFeatureUserData_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong userData_j)
				{
					EarthView::World::Spatial3D::CFeatureUserData &userData = *(EarthView::World::Spatial3D::CFeatureUserData*) userData_j;
					EarthView::World::Spatial3D::KmlManager::CKmlModel *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlModel::setUserData(userData);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_getUserData_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::KmlManager::CKmlModel *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjXXXX;
					const EarthView::World::Spatial3D::CFeatureUserData& __values1 = pObjectX->getUserData();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_startEdit_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjXXXX;
					pObjectX->startEdit();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_endEdit_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjXXXX;
					pObjectX->endEdit();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_addListener_1CMovableObjectListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pListener_j)
				{
					EarthView::World::Graphic::CMovableObject::CMovableObjectListener *pListener = (EarthView::World::Graphic::CMovableObject::CMovableObjectListener*) pListener_j;
					EarthView::World::Spatial3D::KmlManager::CKmlModel *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjXXXX;
					pObjectX->addListener(pListener);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_removeListener_1CMovableObjectListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pListener_j)
				{
					EarthView::World::Graphic::CMovableObject::CMovableObjectListener *pListener = (EarthView::World::Graphic::CMovableObject::CMovableObjectListener*) pListener_j;
					EarthView::World::Spatial3D::KmlManager::CKmlModel *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjXXXX;
					pObjectX->removeListener(pListener);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_bandEditTool_1CSceneManager(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSceneMgr_j)
				{
					EarthView::World::Graphic::CSceneManager *pSceneMgr = (EarthView::World::Graphic::CSceneManager*) pSceneMgr_j;
					EarthView::World::Spatial3D::KmlManager::CKmlModel *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjXXXX;
					pObjectX->bandEditTool(pSceneMgr);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_getModelObj_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjXXXX;
					EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->getModelObj();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_getBoundingBox_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::KmlManager::CKmlModel *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjXXXX;
					const EarthView::World::Spatial::Math::CAxisAlignedBox& __values1 = pObjectX->getBoundingBox();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_getWorldBoundingBox_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::KmlManager::CKmlModel *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjXXXX;
					const EarthView::World::Spatial::Math::CAxisAlignedBox& __values1 = pObjectX->getWorldBoundingBox();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_getMaxnum_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getMaxnum();
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_getMinnum_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getMinnum();
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_getCenter_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getCenter();
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_setVisible_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean b_j)
				{
					ev_bool b = (ev_bool) b_j;
					EarthView::World::Spatial3D::KmlManager::CKmlModel *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjXXXX;
					pObjectX->setVisible(b);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_getVisible_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::KmlManager::CKmlModel *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjXXXX;
					ev_bool __values1 = pObjectX->getVisible();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_register_1getNode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlModelProxy *pObjectX = (JCKmlModelProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getNode_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getNode_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_register_1getSelectable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlModelProxy *pObjectX = (JCKmlModelProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSelectable_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSelectable_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_register_1getLayer_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlModelProxy *pObjectX = (JCKmlModelProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getLayer_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getLayer_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_register_1getDataset_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlModelProxy *pObjectX = (JCKmlModelProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDataset_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDataset_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_register_1getID_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlModelProxy *pObjectX = (JCKmlModelProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getID_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getID_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlModelProxy *pObjectX = (JCKmlModelProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getName_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getName_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_register_1setMatrix_1CMatrix4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlModelProxy *pObjectX = (JCKmlModelProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setMatrix_CMatrix4_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setMatrix_CMatrix4_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_register_1getMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlModelProxy *pObjectX = (JCKmlModelProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getMatrix_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getMatrix_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_register_1setPosition_1ev_1real64_1ev_1real64_1ev_1real64_1CVector3_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlModelProxy *pObjectX = (JCKmlModelProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback", "(DDDJJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModel_register_1getPosition_1ev_1real64_1ev_1real64_1ev_1real64_1CVector3_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlModelProxy *pObjectX = (JCKmlModelProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback", "(JJJJJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				class JCKmlModelFactoryProxy : public EarthView::World::Spatial3D::KmlManager::CKmlModelFactory
				{
				 private:
					EarthView::World::Core::ev_string m_getFactoryType_void_callback;
					EarthView::World::Core::ev_string m_createRenderable_CGeoObjectExtension_CSceneManager_callback;
					EarthView::World::Core::ev_string m_destoryRenderable_CVisibleObject_callback;
					EarthView::World::Core::ev_string m_appendGeoObject_CVisibleObject_CGeoObject_callback;
					EarthView::World::Core::ev_string m_removeGeoObject_CVisibleObject_CGeoObject_callback;
					EarthView::World::Core::ev_string m_removeAllGeoObjects_CVisibleObject_callback;
					EarthView::World::Core::ev_string m_getGeoObject_CVisibleObject_ev_uint32_callback;
					EarthView::World::Core::ev_string m_getGeoObjectCount_CVisibleObject_callback;
				public:
					JCKmlModelFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CKmlModelFactory(pList)
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
					void register_getFactoryType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getFactoryType_void_callback = __method;
					}
					void register_createRenderable_CGeoObjectExtension_CSceneManager_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createRenderable_CGeoObjectExtension_CSceneManager_callback = __method;
					}
					void register_destoryRenderable_CVisibleObject_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_destoryRenderable_CVisibleObject_callback = __method;
					}
					void register_appendGeoObject_CVisibleObject_CGeoObject_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_appendGeoObject_CVisibleObject_CGeoObject_callback = __method;
					}
					void register_removeGeoObject_CVisibleObject_CGeoObject_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_removeGeoObject_CVisibleObject_CGeoObject_callback = __method;
					}
					void register_removeAllGeoObjects_CVisibleObject_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_removeAllGeoObjects_CVisibleObject_callback = __method;
					}
					void register_getGeoObject_CVisibleObject_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getGeoObject_CVisibleObject_ev_uint32_callback = __method;
					}
					void register_getGeoObjectCount_CVisibleObject_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getGeoObjectCount_CVisibleObject_callback = __method;
					}
					virtual ev_uint16 getFactoryType()
					{
						if (this->_gRef != NULL && this->m_getFactoryType_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getFactoryType_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_uint16 __values1 = (ev_uint16) __values1_j;
							return __values1;
						}
						else
						{
							return this->CKmlModelFactory::getFactoryType();
						}
					}
					virtual EarthView::World::Geometry3D::VisibleObjects createRenderable(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, EarthView::World::Graphic::CSceneManager* scenemanager)
					{
						if (this->_gRef != NULL && this->m_createRenderable_CGeoObjectExtension_CSceneManager_callback != "" && this->isCustomExtend())
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
							jlong geoObj_j = (jlong) geoObj;
							jlong scenemanager_j = (jlong) scenemanager;
							jmethodID __method = __gr->getMethod("createRenderable_CGeoObjectExtension_CSceneManager_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , geoObj_j, scenemanager_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Geometry3D::VisibleObjects __values1 = *(EarthView::World::Geometry3D::VisibleObjects*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CKmlModelFactory::createRenderable(geoObj, scenemanager);
						}
					}
					virtual void destoryRenderable(EarthView::World::Geometry3D::CVisibleObject* visitObj)
					{
						if (this->_gRef != NULL && this->m_destoryRenderable_CVisibleObject_callback != "" && this->isCustomExtend())
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
							jlong visitObj_j = (jlong) visitObj;
							jmethodID __method = __gr->getMethod("destoryRenderable_CVisibleObject_callback");
							__env->CallVoidMethod(__obj, __method , visitObj_j);
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
							return this->CKmlModelFactory::destoryRenderable(visitObj);
						}
					}
					virtual ev_bool appendGeoObject(EarthView::World::Geometry3D::CVisibleObject* visibleObj, EarthView::World::Spatial::CGeoObject* ref_geoObject)
					{
						if (this->_gRef != NULL && this->m_appendGeoObject_CVisibleObject_CGeoObject_callback != "" && this->isCustomExtend())
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
							jlong visibleObj_j = (jlong) visibleObj;
							jlong ref_geoObject_j = (jlong) ref_geoObject;
							jmethodID __method = __gr->getMethod("appendGeoObject_CVisibleObject_CGeoObject_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , visibleObj_j, ref_geoObject_j);
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
							return this->CKmlModelFactory::appendGeoObject(visibleObj, ref_geoObject);
						}
					}
					virtual ev_bool removeGeoObject(EarthView::World::Geometry3D::CVisibleObject* visibleObj, EarthView::World::Spatial::CGeoObject* geoObject)
					{
						if (this->_gRef != NULL && this->m_removeGeoObject_CVisibleObject_CGeoObject_callback != "" && this->isCustomExtend())
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
							jlong visibleObj_j = (jlong) visibleObj;
							jlong geoObject_j = (jlong) geoObject;
							jmethodID __method = __gr->getMethod("removeGeoObject_CVisibleObject_CGeoObject_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , visibleObj_j, geoObject_j);
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
							return this->CKmlModelFactory::removeGeoObject(visibleObj, geoObject);
						}
					}
					virtual void removeAllGeoObjects(EarthView::World::Geometry3D::CVisibleObject* visibleObj)
					{
						if (this->_gRef != NULL && this->m_removeAllGeoObjects_CVisibleObject_callback != "" && this->isCustomExtend())
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
							jlong visibleObj_j = (jlong) visibleObj;
							jmethodID __method = __gr->getMethod("removeAllGeoObjects_CVisibleObject_callback");
							__env->CallVoidMethod(__obj, __method , visibleObj_j);
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
							return this->CKmlModelFactory::removeAllGeoObjects(visibleObj);
						}
					}
					virtual EarthView::World::Spatial::CGeoObject* getGeoObject(EarthView::World::Geometry3D::CVisibleObject* visibleObj, ev_uint32 index) const
					{
						if (this->_gRef != NULL && this->m_getGeoObject_CVisibleObject_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong visibleObj_j = (jlong) visibleObj;
							jlong index_j = (jlong) index;
							jmethodID __method = __gr->getMethod("getGeoObject_CVisibleObject_ev_uint32_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , visibleObj_j, index_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::CGeoObject *__values1 = (EarthView::World::Spatial::CGeoObject*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CKmlModelFactory::getGeoObject(visibleObj, index);
						}
					}
					virtual ev_uint64 getGeoObjectCount(EarthView::World::Geometry3D::CVisibleObject* visibleObj) const
					{
						if (this->_gRef != NULL && this->m_getGeoObjectCount_CVisibleObject_callback != "" && this->isCustomExtend())
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
							jlong visibleObj_j = (jlong) visibleObj;
							jmethodID __method = __gr->getMethod("getGeoObjectCount_CVisibleObject_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , visibleObj_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
							EVString __values1_s = values_ch;
							__env->ReleaseStringUTFChars(__values1_j,values_ch);
							ev_uint64 __values1 = __values1_s.getUint64();
							return __values1;
						}
						else
						{
							return this->CKmlModelFactory::getGeoObjectCount(visibleObj);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCKmlModelFactoryProxy);
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModelFactory_getFactoryType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModelFactory *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlModelFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlModelFactoryProxy))
					{
						ev_uint16 __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlModelFactory::getFactoryType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						ev_uint16 __values1 = pObjectX->getFactoryType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModelFactory_register_1getFactoryType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlModelFactoryProxy *pObjectX = (JCKmlModelFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getFactoryType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getFactoryType_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModelFactory_getFactoryType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModelFactory *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlModelFactory*) pObjXXXX;
					ev_uint16 __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlModelFactory::getFactoryType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModelFactory_createRenderable_1CGeoObjectExtension_1CSceneManager(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong geoObj_j, jlong scenemanager_j)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtension *geoObj = (EarthView::World::Spatial::Kml::CGeoObjectExtension*) geoObj_j;
					EarthView::World::Graphic::CSceneManager *scenemanager = (EarthView::World::Graphic::CSceneManager*) scenemanager_j;
					EarthView::World::Spatial3D::KmlManager::CKmlModelFactory *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlModelFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlModelFactoryProxy))
					{
						EarthView::World::Geometry3D::VisibleObjects __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlModelFactory::createRenderable(geoObj, scenemanager);
						EarthView::World::Geometry3D::VisibleObjects *returnvalues = new EarthView::World::Geometry3D::VisibleObjects(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						EarthView::World::Geometry3D::VisibleObjects __values1 = pObjectX->createRenderable(geoObj, scenemanager);
						EarthView::World::Geometry3D::VisibleObjects *returnvalues = new EarthView::World::Geometry3D::VisibleObjects(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModelFactory_register_1createRenderable_1CGeoObjectExtension_1CSceneManager(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlModelFactoryProxy *pObjectX = (JCKmlModelFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createRenderable_CGeoObjectExtension_CSceneManager_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createRenderable_CGeoObjectExtension_CSceneManager_callback", "(JJ)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModelFactory_createRenderable_1CGeoObjectExtension_1CSceneManager_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong geoObj_j, jlong scenemanager_j)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtension *geoObj = (EarthView::World::Spatial::Kml::CGeoObjectExtension*) geoObj_j;
					EarthView::World::Graphic::CSceneManager *scenemanager = (EarthView::World::Graphic::CSceneManager*) scenemanager_j;
					EarthView::World::Spatial3D::KmlManager::CKmlModelFactory *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlModelFactory*) pObjXXXX;
					EarthView::World::Geometry3D::VisibleObjects __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlModelFactory::createRenderable(geoObj, scenemanager);
					EarthView::World::Geometry3D::VisibleObjects *returnvalues = new EarthView::World::Geometry3D::VisibleObjects(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModelFactory_destoryRenderable_1CVisibleObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong visitObj_j)
				{
					EarthView::World::Geometry3D::CVisibleObject *visitObj = (EarthView::World::Geometry3D::CVisibleObject*) visitObj_j;
					EarthView::World::Spatial3D::KmlManager::CKmlModelFactory *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlModelFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlModelFactoryProxy))
					{
						pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlModelFactory::destoryRenderable(visitObj);
					}
					else
					{
						pObjectX->destoryRenderable(visitObj);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModelFactory_register_1destoryRenderable_1CVisibleObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlModelFactoryProxy *pObjectX = (JCKmlModelFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_destoryRenderable_CVisibleObject_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"destoryRenderable_CVisibleObject_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModelFactory_destoryRenderable_1CVisibleObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong visitObj_j)
				{
					EarthView::World::Geometry3D::CVisibleObject *visitObj = (EarthView::World::Geometry3D::CVisibleObject*) visitObj_j;
					EarthView::World::Spatial3D::KmlManager::CKmlModelFactory *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlModelFactory*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlModelFactory::destoryRenderable(visitObj);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModelFactory_register_1appendGeoObject_1CVisibleObject_1CGeoObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlModelFactoryProxy *pObjectX = (JCKmlModelFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_appendGeoObject_CVisibleObject_CGeoObject_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"appendGeoObject_CVisibleObject_CGeoObject_callback", "(JJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModelFactory_register_1removeGeoObject_1CVisibleObject_1CGeoObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlModelFactoryProxy *pObjectX = (JCKmlModelFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_removeGeoObject_CVisibleObject_CGeoObject_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"removeGeoObject_CVisibleObject_CGeoObject_callback", "(JJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModelFactory_register_1removeAllGeoObjects_1CVisibleObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlModelFactoryProxy *pObjectX = (JCKmlModelFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_removeAllGeoObjects_CVisibleObject_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"removeAllGeoObjects_CVisibleObject_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModelFactory_register_1getGeoObject_1CVisibleObject_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlModelFactoryProxy *pObjectX = (JCKmlModelFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getGeoObject_CVisibleObject_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getGeoObject_CVisibleObject_ev_uint32_callback", "(JJ)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlModelFactory_register_1getGeoObjectCount_1CVisibleObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlModelFactoryProxy *pObjectX = (JCKmlModelFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getGeoObjectCount_CVisibleObject_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getGeoObjectCount_CVisibleObject_callback", "(J)Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
			}
		}
	}
}
