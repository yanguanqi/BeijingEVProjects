/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/effectobject.h"
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
			namespace Dataset
			{
			}
			namespace EffectManager
			{
				class JCEffectObjectProxy : public EarthView::World::Spatial3D::EffectManager::CEffectObject
				{
				 private:
					EarthView::World::Core::ev_string m_getFeature_void_callback;
					EarthView::World::Core::ev_string m_getBound_void_callback;
					EarthView::World::Core::ev_string m_setPos_CVector3_callback;
					EarthView::World::Core::ev_string m_getPos_void_callback;
					EarthView::World::Core::ev_string m_setScale_CVector3_callback;
					EarthView::World::Core::ev_string m_getScale_void_callback;
					EarthView::World::Core::ev_string m_setQua_CQuaternion_callback;
					EarthView::World::Core::ev_string m_getQua_void_callback;
					EarthView::World::Core::ev_string m_setVisiable_ev_bool_callback;
					EarthView::World::Core::ev_string m_getVisiable_void_callback;
					EarthView::World::Core::ev_string m_attachObject_void_callback;
					EarthView::World::Core::ev_string m_detachObject_void_callback;
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
					JCEffectObjectProxy(EarthView::World::Core::CNameValuePairList *pList) : CEffectObject(pList)
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
					void register_getFeature_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getFeature_void_callback = __method;
					}
					void register_getBound_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getBound_void_callback = __method;
					}
					void register_setPos_CVector3_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setPos_CVector3_callback = __method;
					}
					void register_getPos_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getPos_void_callback = __method;
					}
					void register_setScale_CVector3_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setScale_CVector3_callback = __method;
					}
					void register_getScale_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getScale_void_callback = __method;
					}
					void register_setQua_CQuaternion_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setQua_CQuaternion_callback = __method;
					}
					void register_getQua_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getQua_void_callback = __method;
					}
					void register_setVisiable_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setVisiable_ev_bool_callback = __method;
					}
					void register_getVisiable_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getVisiable_void_callback = __method;
					}
					void register_attachObject_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_attachObject_void_callback = __method;
					}
					void register_detachObject_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_detachObject_void_callback = __method;
					}
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
							return this->CEffectObject::load();
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
							return this->CEffectObject::unload();
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
							return this->CEffectObject::isLoaded();
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
							return this->CEffectObject::attachToNode(n);
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
							return this->CEffectObject::detachFromNode();
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
							return this->CEffectObject::setPosition(latitude, longitude, altitude, scale, qua);
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
							return this->CEffectObject::getPosition(latitude, longitude, altitude, scale, qua);
						}
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeature* getFeature()
					{
						if (this->_gRef != NULL && this->m_getFeature_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getFeature_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::GeoDataset::IFeature *__values1 = (EarthView::World::Spatial::GeoDataset::IFeature*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CEffectObject::getFeature();
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
							return this->CEffectObject::getLayer();
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
							return this->CEffectObject::getID();
						}
					}
					virtual EarthView::World::Spatial::Math::CAxisAlignedBox getBound()
					{
						if (this->_gRef != NULL && this->m_getBound_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getBound_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Math::CAxisAlignedBox __values1 = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CEffectObject::getBound();
						}
					}
					virtual void setPos(const EarthView::World::Spatial::Math::CVector3& pos)
					{
						if (this->_gRef != NULL && this->m_setPos_CVector3_callback != "" && this->isCustomExtend())
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
							jlong pos_j = (jlong) &pos;
							jmethodID __method = __gr->getMethod("setPos_CVector3_callback");
							__env->CallVoidMethod(__obj, __method , pos_j);
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
							return this->CEffectObject::setPos(pos);
						}
					}
					virtual EarthView::World::Spatial::Math::CVector3 getPos()
					{
						if (this->_gRef != NULL && this->m_getPos_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getPos_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Math::CVector3 __values1 = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CEffectObject::getPos();
						}
					}
					virtual void setScale(const EarthView::World::Spatial::Math::CVector3& scale)
					{
						if (this->_gRef != NULL && this->m_setScale_CVector3_callback != "" && this->isCustomExtend())
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
							jlong scale_j = (jlong) &scale;
							jmethodID __method = __gr->getMethod("setScale_CVector3_callback");
							__env->CallVoidMethod(__obj, __method , scale_j);
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
							return this->CEffectObject::setScale(scale);
						}
					}
					virtual EarthView::World::Spatial::Math::CVector3 getScale()
					{
						if (this->_gRef != NULL && this->m_getScale_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getScale_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Math::CVector3 __values1 = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CEffectObject::getScale();
						}
					}
					virtual void setQua(const EarthView::World::Spatial::Math::CQuaternion& qua)
					{
						if (this->_gRef != NULL && this->m_setQua_CQuaternion_callback != "" && this->isCustomExtend())
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
							jlong qua_j = (jlong) &qua;
							jmethodID __method = __gr->getMethod("setQua_CQuaternion_callback");
							__env->CallVoidMethod(__obj, __method , qua_j);
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
							return this->CEffectObject::setQua(qua);
						}
					}
					virtual EarthView::World::Spatial::Math::CQuaternion getQua()
					{
						if (this->_gRef != NULL && this->m_getQua_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getQua_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Math::CQuaternion __values1 = *(EarthView::World::Spatial::Math::CQuaternion*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CEffectObject::getQua();
						}
					}
					virtual void setVisiable(ev_bool isVisiable)
					{
						if (this->_gRef != NULL && this->m_setVisiable_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean isVisiable_j = (jboolean) isVisiable;
							jmethodID __method = __gr->getMethod("setVisiable_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , isVisiable_j);
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
							return this->CEffectObject::setVisiable(isVisiable);
						}
					}
					virtual ev_bool getVisiable()
					{
						if (this->_gRef != NULL && this->m_getVisiable_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getVisiable_void_callback");
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
							return this->CEffectObject::getVisiable();
						}
					}
					virtual ev_bool attachObject()
					{
						if (this->_gRef != NULL && this->m_attachObject_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("attachObject_void_callback");
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
							return this->CEffectObject::attachObject();
						}
					}
					virtual ev_bool detachObject()
					{
						if (this->_gRef != NULL && this->m_detachObject_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("detachObject_void_callback");
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
							return this->CEffectObject::detachObject();
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
							return this->CEffectObject::isAttached();
						}
					}
					virtual void setMatrix(const EarthView::World::Spatial::Math::CMatrix4& matrix)
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
							jlong matrix_j = (jlong) &matrix;
							jmethodID __method = __gr->getMethod("setMatrix_CMatrix4_callback");
							__env->CallVoidMethod(__obj, __method , matrix_j);
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
							return this->CEffectObject::setMatrix(matrix);
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
							return this->CEffectObject::getMatrix();
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
							return this->CEffectObject::getNode();
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
							return this->CEffectObject::attachToScene();
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
							return this->CEffectObject::detachFromScene();
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
							return this->CEffectObject::setUserData(userData);
						}
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
							return this->CEffectObject::setSelectable(selectable);
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
							return this->CEffectObject::getSelectable();
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
							return this->CEffectObject::update();
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
							return this->CEffectObject::getDataset();
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
							return this->CEffectObject::getName();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCEffectObjectProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_getEffect_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					EarthView::World::Spatial3D::EffectManager::CEffect* __values1 = pObjectX->getEffect();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_load_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEffectObjectProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::load();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_register_1load_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEffectObjectProxy *pObjectX = (JCEffectObjectProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_load_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::load();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_unload_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEffectObjectProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::unload();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_register_1unload_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEffectObjectProxy *pObjectX = (JCEffectObjectProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_unload_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::unload();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_isLoaded_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEffectObjectProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::isLoaded();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_register_1isLoaded_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEffectObjectProxy *pObjectX = (JCEffectObjectProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_isLoaded_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::isLoaded();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_attachToNode_1CNode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					EarthView::World::Graphic::CNode *n = (EarthView::World::Graphic::CNode*) n_j;
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEffectObjectProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::attachToNode(n);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_register_1attachToNode_1CNode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEffectObjectProxy *pObjectX = (JCEffectObjectProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_attachToNode_1CNode_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					EarthView::World::Graphic::CNode *n = (EarthView::World::Graphic::CNode*) n_j;
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::attachToNode(n);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_detachFromNode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEffectObjectProxy))
					{
						EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::detachFromNode();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_register_1detachFromNode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEffectObjectProxy *pObjectX = (JCEffectObjectProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_detachFromNode_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::detachFromNode();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_setPosition_1CVector3_1CVector3_1CQuaternion(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong scale_j, jlong qua_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &pos = *(EarthView::World::Spatial::Math::CVector3*) pos_j;
					const EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
					const EarthView::World::Spatial::Math::CQuaternion &qua = *(EarthView::World::Spatial::Math::CQuaternion*) qua_j;
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					pObjectX->setPosition(pos, scale, qua);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_getPosition_1CVector3_1CVector3_1CQuaternion(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong scale_j, jlong qua_j)
				{
					EarthView::World::Spatial::Math::CVector3 &pos = *(EarthView::World::Spatial::Math::CVector3*) pos_j;
					EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
					EarthView::World::Spatial::Math::CQuaternion &qua = *(EarthView::World::Spatial::Math::CQuaternion*) qua_j;
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					pObjectX->getPosition(pos, scale, qua);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_setPosition_1ev_1real64_1ev_1real64_1ev_1real64_1CVector3_1CQuaternion(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble latitude_j, jdouble longitude_j, jdouble altitude_j, jlong scale_j, jlong qua_j)
				{
					ev_real64 latitude = (ev_real64) latitude_j;
					ev_real64 longitude = (ev_real64) longitude_j;
					ev_real64 altitude = (ev_real64) altitude_j;
					const EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
					const EarthView::World::Spatial::Math::CQuaternion &qua = *(EarthView::World::Spatial::Math::CQuaternion*) qua_j;
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEffectObjectProxy))
					{
						pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::setPosition(latitude, longitude, altitude, scale, qua);
					}
					else
					{
						pObjectX->setPosition(latitude, longitude, altitude, scale, qua);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_register_1setPosition_1ev_1real64_1ev_1real64_1ev_1real64_1CVector3_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEffectObjectProxy *pObjectX = (JCEffectObjectProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_setPosition_1ev_1real64_1ev_1real64_1ev_1real64_1CVector3_1CQuaternion_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble latitude_j, jdouble longitude_j, jdouble altitude_j, jlong scale_j, jlong qua_j)
				{
					ev_real64 latitude = (ev_real64) latitude_j;
					ev_real64 longitude = (ev_real64) longitude_j;
					ev_real64 altitude = (ev_real64) altitude_j;
					const EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
					const EarthView::World::Spatial::Math::CQuaternion &qua = *(EarthView::World::Spatial::Math::CQuaternion*) qua_j;
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::setPosition(latitude, longitude, altitude, scale, qua);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_getPosition_1ev_1real64_1ev_1real64_1ev_1real64_1CVector3_1CQuaternion(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong latitude_j, jlong longitude_j, jlong altitude_j, jlong scale_j, jlong qua_j)
				{
					ev_real64 &latitude = *(ev_real64*) latitude_j;
					ev_real64 &longitude = *(ev_real64*) longitude_j;
					ev_real64 &altitude = *(ev_real64*) altitude_j;
					EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
					EarthView::World::Spatial::Math::CQuaternion &qua = *(EarthView::World::Spatial::Math::CQuaternion*) qua_j;
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEffectObjectProxy))
					{
						pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::getPosition(latitude, longitude, altitude, scale, qua);
					}
					else
					{
						pObjectX->getPosition(latitude, longitude, altitude, scale, qua);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_register_1getPosition_1ev_1real64_1ev_1real64_1ev_1real64_1CVector3_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEffectObjectProxy *pObjectX = (JCEffectObjectProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_getPosition_1ev_1real64_1ev_1real64_1ev_1real64_1CVector3_1CQuaternion_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong latitude_j, jlong longitude_j, jlong altitude_j, jlong scale_j, jlong qua_j)
				{
					ev_real64 &latitude = *(ev_real64*) latitude_j;
					ev_real64 &longitude = *(ev_real64*) longitude_j;
					ev_real64 &altitude = *(ev_real64*) altitude_j;
					EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
					EarthView::World::Spatial::Math::CQuaternion &qua = *(EarthView::World::Spatial::Math::CQuaternion*) qua_j;
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::getPosition(latitude, longitude, altitude, scale, qua);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_setAlt_1EVAltitudeMode_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint altMode_j, jdouble altValue_j)
				{
					EarthView::World::Spatial::Utility::EVAltitudeMode altMode = (EarthView::World::Spatial::Utility::EVAltitudeMode) altMode_j;
					ev_real64 altValue = (ev_real64) altValue_j;
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					pObjectX->setAlt(altMode, altValue);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_getAlt_1EVAltitudeMode_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong altMode_j, jlong altValue_j)
				{
					EarthView::World::Spatial::Utility::EVAltitudeMode &altMode = *(EarthView::World::Spatial::Utility::EVAltitudeMode*) altMode_j;
					ev_real64 &altValue = *(ev_real64*) altValue_j;
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					pObjectX->getAlt(altMode, altValue);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_getFeature_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEffectObjectProxy))
					{
						EarthView::World::Spatial::GeoDataset::IFeature* __values1 = pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::getFeature();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeature* __values1 = pObjectX->getFeature();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_register_1getFeature_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEffectObjectProxy *pObjectX = (JCEffectObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getFeature_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getFeature_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_getFeature_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IFeature* __values1 = pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::getFeature();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_getLayer_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEffectObjectProxy))
					{
						EarthView::World::Spatial3D::Atlas::IGlobeLayer* __values1 = pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::getLayer();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial3D::Atlas::IGlobeLayer* __values1 = pObjectX->getLayer();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_register_1getLayer_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEffectObjectProxy *pObjectX = (JCEffectObjectProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_getLayer_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					EarthView::World::Spatial3D::Atlas::IGlobeLayer* __values1 = pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::getLayer();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_getID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEffectObjectProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::getID();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						ev_uint32 __values1 = pObjectX->getID();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_register_1getID_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEffectObjectProxy *pObjectX = (JCEffectObjectProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_getID_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::getID();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_getBound_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEffectObjectProxy))
					{
						EarthView::World::Spatial::Math::CAxisAlignedBox __values1 = pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::getBound();
						EarthView::World::Spatial::Math::CAxisAlignedBox *returnvalues = new EarthView::World::Spatial::Math::CAxisAlignedBox(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Math::CAxisAlignedBox __values1 = pObjectX->getBound();
						EarthView::World::Spatial::Math::CAxisAlignedBox *returnvalues = new EarthView::World::Spatial::Math::CAxisAlignedBox(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_register_1getBound_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEffectObjectProxy *pObjectX = (JCEffectObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getBound_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getBound_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_getBound_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					EarthView::World::Spatial::Math::CAxisAlignedBox __values1 = pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::getBound();
					EarthView::World::Spatial::Math::CAxisAlignedBox *returnvalues = new EarthView::World::Spatial::Math::CAxisAlignedBox(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_setPos_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &pos = *(EarthView::World::Spatial::Math::CVector3*) pos_j;
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEffectObjectProxy))
					{
						pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::setPos(pos);
					}
					else
					{
						pObjectX->setPos(pos);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_register_1setPos_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEffectObjectProxy *pObjectX = (JCEffectObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setPos_CVector3_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setPos_CVector3_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_setPos_1CVector3_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &pos = *(EarthView::World::Spatial::Math::CVector3*) pos_j;
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::setPos(pos);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_getPos_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEffectObjectProxy))
					{
						EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::getPos();
						EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getPos();
						EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_register_1getPos_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEffectObjectProxy *pObjectX = (JCEffectObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getPos_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getPos_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_getPos_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::getPos();
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_setScale_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong scale_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEffectObjectProxy))
					{
						pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::setScale(scale);
					}
					else
					{
						pObjectX->setScale(scale);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_register_1setScale_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEffectObjectProxy *pObjectX = (JCEffectObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setScale_CVector3_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setScale_CVector3_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_setScale_1CVector3_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong scale_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::setScale(scale);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_getScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEffectObjectProxy))
					{
						EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::getScale();
						EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getScale();
						EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_register_1getScale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEffectObjectProxy *pObjectX = (JCEffectObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getScale_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getScale_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_getScale_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::getScale();
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_setQua_1CQuaternion(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong qua_j)
				{
					const EarthView::World::Spatial::Math::CQuaternion &qua = *(EarthView::World::Spatial::Math::CQuaternion*) qua_j;
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEffectObjectProxy))
					{
						pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::setQua(qua);
					}
					else
					{
						pObjectX->setQua(qua);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_register_1setQua_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEffectObjectProxy *pObjectX = (JCEffectObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setQua_CQuaternion_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setQua_CQuaternion_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_setQua_1CQuaternion_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong qua_j)
				{
					const EarthView::World::Spatial::Math::CQuaternion &qua = *(EarthView::World::Spatial::Math::CQuaternion*) qua_j;
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::setQua(qua);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_getQua_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEffectObjectProxy))
					{
						EarthView::World::Spatial::Math::CQuaternion __values1 = pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::getQua();
						EarthView::World::Spatial::Math::CQuaternion *returnvalues = new EarthView::World::Spatial::Math::CQuaternion(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Math::CQuaternion __values1 = pObjectX->getQua();
						EarthView::World::Spatial::Math::CQuaternion *returnvalues = new EarthView::World::Spatial::Math::CQuaternion(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_register_1getQua_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEffectObjectProxy *pObjectX = (JCEffectObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getQua_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getQua_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_getQua_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					EarthView::World::Spatial::Math::CQuaternion __values1 = pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::getQua();
					EarthView::World::Spatial::Math::CQuaternion *returnvalues = new EarthView::World::Spatial::Math::CQuaternion(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_setVisiable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isVisiable_j)
				{
					ev_bool isVisiable = (ev_bool) isVisiable_j;
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEffectObjectProxy))
					{
						pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::setVisiable(isVisiable);
					}
					else
					{
						pObjectX->setVisiable(isVisiable);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_register_1setVisiable_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEffectObjectProxy *pObjectX = (JCEffectObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setVisiable_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setVisiable_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_setVisiable_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isVisiable_j)
				{
					ev_bool isVisiable = (ev_bool) isVisiable_j;
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::setVisiable(isVisiable);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_getVisiable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEffectObjectProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::getVisiable();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->getVisiable();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_register_1getVisiable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEffectObjectProxy *pObjectX = (JCEffectObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getVisiable_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getVisiable_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_getVisiable_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::getVisiable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_attachObject_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEffectObjectProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::attachObject();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->attachObject();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_register_1attachObject_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEffectObjectProxy *pObjectX = (JCEffectObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_attachObject_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"attachObject_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_attachObject_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::attachObject();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_detachObject_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEffectObjectProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::detachObject();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->detachObject();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_register_1detachObject_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEffectObjectProxy *pObjectX = (JCEffectObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_detachObject_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"detachObject_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_detachObject_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::detachObject();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_isAttached_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEffectObjectProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::isAttached();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_register_1isAttached_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEffectObjectProxy *pObjectX = (JCEffectObjectProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_isAttached_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::isAttached();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_setMatrix_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong matrix_j)
				{
					const EarthView::World::Spatial::Math::CMatrix4 &matrix = *(EarthView::World::Spatial::Math::CMatrix4*) matrix_j;
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEffectObjectProxy))
					{
						pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::setMatrix(matrix);
					}
					else
					{
						pObjectX->setMatrix(matrix);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_register_1setMatrix_1CMatrix4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEffectObjectProxy *pObjectX = (JCEffectObjectProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_setMatrix_1CMatrix4_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong matrix_j)
				{
					const EarthView::World::Spatial::Math::CMatrix4 &matrix = *(EarthView::World::Spatial::Math::CMatrix4*) matrix_j;
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::setMatrix(matrix);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_getMatrix_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEffectObjectProxy))
					{
						EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::getMatrix();
						EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->getMatrix();
						EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_register_1getMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEffectObjectProxy *pObjectX = (JCEffectObjectProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_getMatrix_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjXXXX;
					EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->EarthView::World::Spatial3D::EffectManager::CEffectObject::getMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_register_1getNode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEffectObjectProxy *pObjectX = (JCEffectObjectProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_register_1attachToScene_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEffectObjectProxy *pObjectX = (JCEffectObjectProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_register_1detachFromScene_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEffectObjectProxy *pObjectX = (JCEffectObjectProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_register_1setUserData_1CFeatureUserData(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEffectObjectProxy *pObjectX = (JCEffectObjectProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_register_1setSelectable_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEffectObjectProxy *pObjectX = (JCEffectObjectProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_register_1getSelectable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEffectObjectProxy *pObjectX = (JCEffectObjectProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_register_1update_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEffectObjectProxy *pObjectX = (JCEffectObjectProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_register_1getDataset_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEffectObjectProxy *pObjectX = (JCEffectObjectProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObject_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEffectObjectProxy *pObjectX = (JCEffectObjectProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObjectVector_push_1back_1CEffectObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject *&t = *(EarthView::World::Spatial3D::EffectManager::CEffectObject**) t_j;
					EarthView::World::Spatial3D::EffectManager::CEffectObjectVector *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObjectVector*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObjectVector_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObjectVector *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObjectVector*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObjectVector_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObjectVector *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObjectVector*) pObjXXXX;
					EarthView::World::Spatial3D::EffectManager::CEffectObject*& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObjectVector_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObjectVector *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObjectVector*) pObjXXXX;
					EarthView::World::Spatial3D::EffectManager::CEffectObject*& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObjectVector_insert_1ev_1uint32_1CEffectObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial3D::EffectManager::CEffectObject *&t = *(EarthView::World::Spatial3D::EffectManager::CEffectObject**) t_j;
					EarthView::World::Spatial3D::EffectManager::CEffectObjectVector *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObjectVector*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObjectVector_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::Spatial3D::EffectManager::CEffectObjectVector *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObjectVector*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObjectVector_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::EffectManager::CEffectObjectVector *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObjectVector*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObjectVector_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObjectVector& pObjectX = *(EarthView::World::Spatial3D::EffectManager::CEffectObjectVector*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial3D::EffectManager::CEffectObject*& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObjectVector_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial3D::EffectManager::CEffectObjectVector *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObjectVector*) pObjXXXX;
					EarthView::World::Spatial3D::EffectManager::CEffectObject*& __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObjectVector_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::EffectManager::CEffectObjectVector *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObjectVector*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObjectVector_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Spatial3D::EffectManager::CEffectObjectVector *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObjectVector*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObjectVector_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Spatial3D::EffectManager::CEffectObjectVector *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObjectVector*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectObjectVector_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObjectVector *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectObjectVector*) pObjXXXX;
					pObjectX->clear();
				}
			}
		}
	}
}
