/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "effect3d/atmosphere.h"
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
			namespace Effect3D
			{
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_WeatherControlPoint_get_1mTime_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CWeatherControlPoint *pObjectX = (EarthView::World::Spatial::Effect3D::CWeatherControlPoint*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mTime);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_WeatherControlPoint_set_1mTime_1CCoreTime(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial::Effect3D::CWeatherControlPoint *pObjectX = (EarthView::World::Spatial::Effect3D::CWeatherControlPoint*)pObjXXXX;
					pObjectX->mTime = *(EarthView::World::Core::CCoreTime*) __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_effect3d_WeatherControlPoint_get_1mWeatherType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CWeatherControlPoint *pObjectX = (EarthView::World::Spatial::Effect3D::CWeatherControlPoint*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mWeatherType);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_WeatherControlPoint_set_1mWeatherType_1EVWeatherType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial::Effect3D::CWeatherControlPoint *pObjectX = (EarthView::World::Spatial::Effect3D::CWeatherControlPoint*)pObjXXXX;
					pObjectX->mWeatherType = (EarthView::World::Spatial::Effect3D::EVWeatherType)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_effect3d_WeatherTransformation_addControlPoint_1CWeatherControlPoint(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong controlpoint_j)
				{
					const EarthView::World::Spatial::Effect3D::CWeatherControlPoint &controlpoint = *(EarthView::World::Spatial::Effect3D::CWeatherControlPoint*) controlpoint_j;
					EarthView::World::Spatial::Effect3D::CWeatherTransformation *pObjectX = (EarthView::World::Spatial::Effect3D::CWeatherTransformation*) pObjXXXX;
					ev_int32 __values1 = pObjectX->addControlPoint(controlpoint);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_WeatherTransformation_getControlPoint_1ev_1uint32_1CWeatherControlPoint(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jlong controlpoint_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::Effect3D::CWeatherControlPoint &controlpoint = *(EarthView::World::Spatial::Effect3D::CWeatherControlPoint*) controlpoint_j;
					EarthView::World::Spatial::Effect3D::CWeatherTransformation *pObjectX = (EarthView::World::Spatial::Effect3D::CWeatherTransformation*) pObjXXXX;
					ev_bool __values1 = pObjectX->getControlPoint(index, controlpoint);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_WeatherTransformation_removeControlPoint_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::Effect3D::CWeatherTransformation *pObjectX = (EarthView::World::Spatial::Effect3D::CWeatherTransformation*) pObjXXXX;
					ev_bool __values1 = pObjectX->removeControlPoint(index);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_WeatherTransformation_getControlPointCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CWeatherTransformation *pObjectX = (EarthView::World::Spatial::Effect3D::CWeatherTransformation*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getControlPointCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_WeatherTransformation_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CWeatherTransformation *pObjectX = (EarthView::World::Spatial::Effect3D::CWeatherTransformation*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_WeatherTransformation_transformWeather_1CRegionAtmosphere_1CCoreTime_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong atmosphere_j, jlong time_j, jdouble alt_j)
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *atmosphere = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) atmosphere_j;
					const EarthView::World::Core::CCoreTime &time = *(EarthView::World::Core::CCoreTime*) time_j;
					Real alt = (Real) alt_j;
					EarthView::World::Spatial::Effect3D::CWeatherTransformation *pObjectX = (EarthView::World::Spatial::Effect3D::CWeatherTransformation*) pObjXXXX;
					ev_bool __values1 = pObjectX->transformWeather(atmosphere, time, alt);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_WeatherTransformation_setDefaultWeather_1EVWeatherType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::Effect3D::EVWeatherType type = (EarthView::World::Spatial::Effect3D::EVWeatherType) type_j;
					EarthView::World::Spatial::Effect3D::CWeatherTransformation *pObjectX = (EarthView::World::Spatial::Effect3D::CWeatherTransformation*) pObjXXXX;
					pObjectX->setDefaultWeather(type);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_WeatherTransformation_setStartEndTransitionTime_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong seconds_j)
				{
					ev_uint32 seconds = (ev_uint32) seconds_j;
					EarthView::World::Spatial::Effect3D::CWeatherTransformation *pObjectX = (EarthView::World::Spatial::Effect3D::CWeatherTransformation*) pObjXXXX;
					pObjectX->setStartEndTransitionTime(seconds);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_WeatherTransformation_setNeedRestoreToDefault_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean restore_j)
				{
					ev_bool restore = (ev_bool) restore_j;
					EarthView::World::Spatial::Effect3D::CWeatherTransformation *pObjectX = (EarthView::World::Spatial::Effect3D::CWeatherTransformation*) pObjXXXX;
					pObjectX->setNeedRestoreToDefault(restore);
				}
				class JCGlobeAtmosphereProxy : public EarthView::World::Spatial::Effect3D::CGlobeAtmosphere
				{
				 private:
					EarthView::World::Core::ev_string m_getStringInterfacePtr_void_callback;
					EarthView::World::Core::ev_string m_setWeather_EVWeatherType_callback;
					EarthView::World::Core::ev_string m_create_CViewport_callback;
					EarthView::World::Core::ev_string m_destroy_void_callback;
					EarthView::World::Core::ev_string m_setAerosphereThickness_Real_callback;
					EarthView::World::Core::ev_string m_setRealCloudHeight_Real_callback;
					EarthView::World::Core::ev_string m_update_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool_callback;
					EarthView::World::Core::ev_string m_onChildAtmosphereCloudLayerAdded_CCloudLayer_callback;
					EarthView::World::Core::ev_string m_onChildAtmosphereCloudLayerRemoved_CCloudLayer_callback;
					EarthView::World::Core::ev_string m_calcAmbientLightMultiplier_void_callback;
					EarthView::World::Core::ev_string m_getName_void_callback;
					EarthView::World::Core::ev_string m_setName_EVString_callback;
					EarthView::World::Core::ev_string m_fromXmlElement_CXmlElement_callback;
					EarthView::World::Core::ev_string m_toXmlElement_CXmlElement_callback;
					EarthView::World::Core::ev_string m_fromXML_CXmlElement_callback;
					EarthView::World::Core::ev_string m_toXML_void_callback;
					EarthView::World::Core::ev_string m_preUpdateSceneGraph_CSceneManager_CCamera_callback;
					EarthView::World::Core::ev_string m_postUpdateSceneGraph_CSceneManager_CCamera_callback;
					EarthView::World::Core::ev_string m_preFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback;
					EarthView::World::Core::ev_string m_postFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback;
					EarthView::World::Core::ev_string m_shadowTexturesUpdated_ev_size_t_callback;
					EarthView::World::Core::ev_string m_shadowTextureCasterPreViewProj_CLight_CCamera_ev_size_t_callback;
					EarthView::World::Core::ev_string m_shadowTextureReceiverPreViewProj_CLight_CFrustum_callback;
					EarthView::World::Core::ev_string m_sortLightsAffectingFrustum_LightList_callback;
					EarthView::World::Core::ev_string m_sceneManagerDestroyed_CSceneManager_callback;
				public:
					JCGlobeAtmosphereProxy(EarthView::World::Core::CNameValuePairList *pList) : CGlobeAtmosphere(pList)
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
					void register_getStringInterfacePtr_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getStringInterfacePtr_void_callback = __method;
					}
					void register_setWeather_EVWeatherType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setWeather_EVWeatherType_callback = __method;
					}
					void register_create_CViewport_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_create_CViewport_callback = __method;
					}
					void register_destroy_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_destroy_void_callback = __method;
					}
					void register_setAerosphereThickness_Real_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setAerosphereThickness_Real_callback = __method;
					}
					void register_setRealCloudHeight_Real_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setRealCloudHeight_Real_callback = __method;
					}
					void register_update_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_update_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool_callback = __method;
					}
					void register_onChildAtmosphereCloudLayerAdded_CCloudLayer_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onChildAtmosphereCloudLayerAdded_CCloudLayer_callback = __method;
					}
					void register_onChildAtmosphereCloudLayerRemoved_CCloudLayer_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onChildAtmosphereCloudLayerRemoved_CCloudLayer_callback = __method;
					}
					void register_calcAmbientLightMultiplier_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_calcAmbientLightMultiplier_void_callback = __method;
					}
					void register_getName_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getName_void_callback = __method;
					}
					void register_setName_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setName_EVString_callback = __method;
					}
					void register_fromXmlElement_CXmlElement_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_fromXmlElement_CXmlElement_callback = __method;
					}
					void register_toXmlElement_CXmlElement_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toXmlElement_CXmlElement_callback = __method;
					}
					void register_fromXML_CXmlElement_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_fromXML_CXmlElement_callback = __method;
					}
					void register_toXML_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toXML_void_callback = __method;
					}
					void register_preUpdateSceneGraph_CSceneManager_CCamera_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_preUpdateSceneGraph_CSceneManager_CCamera_callback = __method;
					}
					void register_postUpdateSceneGraph_CSceneManager_CCamera_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_postUpdateSceneGraph_CSceneManager_CCamera_callback = __method;
					}
					void register_preFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_preFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback = __method;
					}
					void register_postFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_postFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback = __method;
					}
					void register_shadowTexturesUpdated_ev_size_t_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_shadowTexturesUpdated_ev_size_t_callback = __method;
					}
					void register_shadowTextureCasterPreViewProj_CLight_CCamera_ev_size_t_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_shadowTextureCasterPreViewProj_CLight_CCamera_ev_size_t_callback = __method;
					}
					void register_shadowTextureReceiverPreViewProj_CLight_CFrustum_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_shadowTextureReceiverPreViewProj_CLight_CFrustum_callback = __method;
					}
					void register_sortLightsAffectingFrustum_LightList_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_sortLightsAffectingFrustum_LightList_callback = __method;
					}
					void register_sceneManagerDestroyed_CSceneManager_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_sceneManagerDestroyed_CSceneManager_callback = __method;
					}
					virtual void postUpdateSceneGraph(EarthView::World::Graphic::CSceneManager* source, EarthView::World::Graphic::CCamera* camera)
					{
						if (this->_gRef != NULL && this->m_postUpdateSceneGraph_CSceneManager_CCamera_callback != "" && this->isCustomExtend())
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
							jlong source_j = (jlong) source;
							jlong camera_j = (jlong) camera;
							jmethodID __method = __gr->getMethod("postUpdateSceneGraph_CSceneManager_CCamera_callback");
							__env->CallVoidMethod(__obj, __method , source_j, camera_j);
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
							return this->CGlobeAtmosphere::postUpdateSceneGraph(source, camera);
						}
					}
					virtual void setAerosphereThickness(Real thickness)
					{
						if (this->_gRef != NULL && this->m_setAerosphereThickness_Real_callback != "" && this->isCustomExtend())
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
							jdouble thickness_j = (jdouble) thickness;
							jmethodID __method = __gr->getMethod("setAerosphereThickness_Real_callback");
							__env->CallVoidMethod(__obj, __method , thickness_j);
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
							return this->CGlobeAtmosphere::setAerosphereThickness(thickness);
						}
					}
					virtual void fromXML(EarthView::World::Core::CXmlElement& element)
					{
						if (this->_gRef != NULL && this->m_fromXML_CXmlElement_callback != "" && this->isCustomExtend())
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
							jlong element_j = (jlong) &element;
							jmethodID __method = __gr->getMethod("fromXML_CXmlElement_callback");
							__env->CallVoidMethod(__obj, __method , element_j);
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
							return this->CGlobeAtmosphere::fromXML(element);
						}
					}
					virtual EVString toXML() const
					{
						if (this->_gRef != NULL && this->m_toXML_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("toXML_void_callback");
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
							return this->CGlobeAtmosphere::toXML();
						}
					}
					virtual void destroy()
					{
						if (this->_gRef != NULL && this->m_destroy_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("destroy_void_callback");
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
							return this->CGlobeAtmosphere::destroy();
						}
					}
					virtual void setWeather(EarthView::World::Spatial::Effect3D::EVWeatherType type)
					{
						if (this->_gRef != NULL && this->m_setWeather_EVWeatherType_callback != "" && this->isCustomExtend())
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
							jint type_j = (jint) type;
							jmethodID __method = __gr->getMethod("setWeather_EVWeatherType_callback");
							__env->CallVoidMethod(__obj, __method , type_j);
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
							return this->CGlobeAtmosphere::setWeather(type);
						}
					}
					virtual void update(EarthView::World::Spatial::Math::CDegree lon, EarthView::World::Spatial::Math::CDegree lat, ev_real64 alt, EarthView::World::Spatial::Math::CVector3 cameraLookDir, EarthView::World::Spatial::Math::CVector3 cameraPos, ev_real32 timeSinceLastFrame, EarthView::World::Graphic::CViewport* viewPort, ev_bool mainCamera)
					{
						if (this->_gRef != NULL && this->m_update_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool_callback != "" && this->isCustomExtend())
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
							jlong lon_j = (jlong) &lon;
							jlong lat_j = (jlong) &lat;
							jdouble alt_j = (jdouble) alt;
							jlong cameraLookDir_j = (jlong) &cameraLookDir;
							jlong cameraPos_j = (jlong) &cameraPos;
							jfloat timeSinceLastFrame_j = (jfloat) timeSinceLastFrame;
							jlong viewPort_j = (jlong) viewPort;
							jboolean mainCamera_j = (jboolean) mainCamera;
							jmethodID __method = __gr->getMethod("update_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , lon_j, lat_j, alt_j, cameraLookDir_j, cameraPos_j, timeSinceLastFrame_j, viewPort_j, mainCamera_j);
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
							return this->CGlobeAtmosphere::update(lon, lat, alt, cameraLookDir, cameraPos, timeSinceLastFrame, viewPort, mainCamera);
						}
					}
					virtual void onChildAtmosphereCloudLayerAdded(EarthView::World::Spatial::Effect3D::CCloudLayer* layer)
					{
						if (this->_gRef != NULL && this->m_onChildAtmosphereCloudLayerAdded_CCloudLayer_callback != "" && this->isCustomExtend())
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
							jlong layer_j = (jlong) layer;
							jmethodID __method = __gr->getMethod("onChildAtmosphereCloudLayerAdded_CCloudLayer_callback");
							__env->CallVoidMethod(__obj, __method , layer_j);
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
							return this->CGlobeAtmosphere::onChildAtmosphereCloudLayerAdded(layer);
						}
					}
					virtual void onChildAtmosphereCloudLayerRemoved(EarthView::World::Spatial::Effect3D::CCloudLayer* layer)
					{
						if (this->_gRef != NULL && this->m_onChildAtmosphereCloudLayerRemoved_CCloudLayer_callback != "" && this->isCustomExtend())
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
							jlong layer_j = (jlong) layer;
							jmethodID __method = __gr->getMethod("onChildAtmosphereCloudLayerRemoved_CCloudLayer_callback");
							__env->CallVoidMethod(__obj, __method , layer_j);
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
							return this->CGlobeAtmosphere::onChildAtmosphereCloudLayerRemoved(layer);
						}
					}
					virtual EarthView::World::Core::CStringInterface* getStringInterfacePtr()
					{
						if (this->_gRef != NULL && this->m_getStringInterfacePtr_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getStringInterfacePtr_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Core::CStringInterface *__values1 = (EarthView::World::Core::CStringInterface*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CGlobeAtmosphere::getStringInterfacePtr();
						}
					}
					virtual void setName(const EVString& name)
					{
						if (this->_gRef != NULL && this->m_setName_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring name_wch = name;
							jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
							jmethodID __method = __gr->getMethod("setName_EVString_callback");
							__env->CallVoidMethod(__obj, __method , name_j);
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
							return this->CGlobeAtmosphere::setName(name);
						}
					}
					virtual EVString getName() const
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
							return this->CGlobeAtmosphere::getName();
						}
					}
					virtual void create(EarthView::World::Graphic::CViewport* ref_viewport)
					{
						if (this->_gRef != NULL && this->m_create_CViewport_callback != "" && this->isCustomExtend())
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
							jlong ref_viewport_j = (jlong) ref_viewport;
							jmethodID __method = __gr->getMethod("create_CViewport_callback");
							__env->CallVoidMethod(__obj, __method , ref_viewport_j);
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
							return this->CGlobeAtmosphere::create(ref_viewport);
						}
					}
					virtual void setRealCloudHeight(Real height)
					{
						if (this->_gRef != NULL && this->m_setRealCloudHeight_Real_callback != "" && this->isCustomExtend())
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
							jdouble height_j = (jdouble) height;
							jmethodID __method = __gr->getMethod("setRealCloudHeight_Real_callback");
							__env->CallVoidMethod(__obj, __method , height_j);
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
							return this->CGlobeAtmosphere::setRealCloudHeight(height);
						}
					}
					virtual void fromXmlElement(EarthView::World::Core::CXmlElement& element)
					{
						if (this->_gRef != NULL && this->m_fromXmlElement_CXmlElement_callback != "" && this->isCustomExtend())
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
							jlong element_j = (jlong) &element;
							jmethodID __method = __gr->getMethod("fromXmlElement_CXmlElement_callback");
							__env->CallVoidMethod(__obj, __method , element_j);
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
							return this->CGlobeAtmosphere::fromXmlElement(element);
						}
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement(EarthView::World::Core::CXmlElement& element)
					{
						if (this->_gRef != NULL && this->m_toXmlElement_CXmlElement_callback != "" && this->isCustomExtend())
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
							jlong element_j = (jlong) &element;
							jmethodID __method = __gr->getMethod("toXmlElement_CXmlElement_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , element_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Core::CXmlElement __values1 = *(EarthView::World::Core::CXmlElement*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CGlobeAtmosphere::toXmlElement(element);
						}
					}
					virtual EarthView::World::Graphic::CColourValue calcAmbientLightMultiplier()
					{
						if (this->_gRef != NULL && this->m_calcAmbientLightMultiplier_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("calcAmbientLightMultiplier_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Graphic::CColourValue __values1 = *(EarthView::World::Graphic::CColourValue*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CGlobeAtmosphere::calcAmbientLightMultiplier();
						}
					}
					virtual void preUpdateSceneGraph(EarthView::World::Graphic::CSceneManager* source, EarthView::World::Graphic::CCamera* camera)
					{
						if (this->_gRef != NULL && this->m_preUpdateSceneGraph_CSceneManager_CCamera_callback != "" && this->isCustomExtend())
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
							jlong source_j = (jlong) source;
							jlong camera_j = (jlong) camera;
							jmethodID __method = __gr->getMethod("preUpdateSceneGraph_CSceneManager_CCamera_callback");
							__env->CallVoidMethod(__obj, __method , source_j, camera_j);
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
							return this->CGlobeAtmosphere::preUpdateSceneGraph(source, camera);
						}
					}
					virtual void preFindVisibleObjects(EarthView::World::Graphic::CSceneManager* source, EarthView::World::Graphic::CSceneManager::IlluminationRenderStage irs, EarthView::World::Graphic::CViewport* v)
					{
						if (this->_gRef != NULL && this->m_preFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback != "" && this->isCustomExtend())
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
							jlong source_j = (jlong) source;
							jint irs_j = (jint) irs;
							jlong v_j = (jlong) v;
							jmethodID __method = __gr->getMethod("preFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback");
							__env->CallVoidMethod(__obj, __method , source_j, irs_j, v_j);
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
							return this->CGlobeAtmosphere::preFindVisibleObjects(source, irs, v);
						}
					}
					virtual void postFindVisibleObjects(EarthView::World::Graphic::CSceneManager* source, EarthView::World::Graphic::CSceneManager::IlluminationRenderStage irs, EarthView::World::Graphic::CViewport* v)
					{
						if (this->_gRef != NULL && this->m_postFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback != "" && this->isCustomExtend())
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
							jlong source_j = (jlong) source;
							jint irs_j = (jint) irs;
							jlong v_j = (jlong) v;
							jmethodID __method = __gr->getMethod("postFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback");
							__env->CallVoidMethod(__obj, __method , source_j, irs_j, v_j);
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
							return this->CGlobeAtmosphere::postFindVisibleObjects(source, irs, v);
						}
					}
					virtual void shadowTexturesUpdated(ev_size_t numberOfShadowTextures)
					{
						if (this->_gRef != NULL && this->m_shadowTexturesUpdated_ev_size_t_callback != "" && this->isCustomExtend())
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
							jlong numberOfShadowTextures_j = (jlong) numberOfShadowTextures;
							jmethodID __method = __gr->getMethod("shadowTexturesUpdated_ev_size_t_callback");
							__env->CallVoidMethod(__obj, __method , numberOfShadowTextures_j);
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
							return this->CGlobeAtmosphere::shadowTexturesUpdated(numberOfShadowTextures);
						}
					}
					virtual void shadowTextureCasterPreViewProj(EarthView::World::Graphic::CLight* light, EarthView::World::Graphic::CCamera* camera, ev_size_t iteration)
					{
						if (this->_gRef != NULL && this->m_shadowTextureCasterPreViewProj_CLight_CCamera_ev_size_t_callback != "" && this->isCustomExtend())
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
							jlong light_j = (jlong) light;
							jlong camera_j = (jlong) camera;
							jlong iteration_j = (jlong) iteration;
							jmethodID __method = __gr->getMethod("shadowTextureCasterPreViewProj_CLight_CCamera_ev_size_t_callback");
							__env->CallVoidMethod(__obj, __method , light_j, camera_j, iteration_j);
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
							return this->CGlobeAtmosphere::shadowTextureCasterPreViewProj(light, camera, iteration);
						}
					}
					virtual void shadowTextureReceiverPreViewProj(EarthView::World::Graphic::CLight* light, EarthView::World::Graphic::CFrustum* frustum)
					{
						if (this->_gRef != NULL && this->m_shadowTextureReceiverPreViewProj_CLight_CFrustum_callback != "" && this->isCustomExtend())
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
							jlong light_j = (jlong) light;
							jlong frustum_j = (jlong) frustum;
							jmethodID __method = __gr->getMethod("shadowTextureReceiverPreViewProj_CLight_CFrustum_callback");
							__env->CallVoidMethod(__obj, __method , light_j, frustum_j);
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
							return this->CGlobeAtmosphere::shadowTextureReceiverPreViewProj(light, frustum);
						}
					}
					virtual ev_bool sortLightsAffectingFrustum(EarthView::World::Graphic::LightList& lightList)
					{
						if (this->_gRef != NULL && this->m_sortLightsAffectingFrustum_LightList_callback != "" && this->isCustomExtend())
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
							jlong lightList_j = (jlong) &lightList;
							jmethodID __method = __gr->getMethod("sortLightsAffectingFrustum_LightList_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , lightList_j);
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
							return this->CGlobeAtmosphere::sortLightsAffectingFrustum(lightList);
						}
					}
					virtual void sceneManagerDestroyed(EarthView::World::Graphic::CSceneManager* source)
					{
						if (this->_gRef != NULL && this->m_sceneManagerDestroyed_CSceneManager_callback != "" && this->isCustomExtend())
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
							jlong source_j = (jlong) source;
							jmethodID __method = __gr->getMethod("sceneManagerDestroyed_CSceneManager_callback");
							__env->CallVoidMethod(__obj, __method , source_j);
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
							return this->CGlobeAtmosphere::sceneManagerDestroyed(source);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCGlobeAtmosphereProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_setOriginLonLat_1CDegree_1CDegree(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong lon_j, jlong lat_j)
				{
					const EarthView::World::Spatial::Math::CDegree &lon = *(EarthView::World::Spatial::Math::CDegree*) lon_j;
					const EarthView::World::Spatial::Math::CDegree &lat = *(EarthView::World::Spatial::Math::CDegree*) lat_j;
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjXXXX;
					pObjectX->setOriginLonLat(lon, lat);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_frameStarted_1FrameEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
				{
					const EarthView::World::Graphic::FrameEvent &evt = *(EarthView::World::Graphic::FrameEvent*) evt_j;
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->frameStarted(evt);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_postUpdateSceneGraph_1CSceneManager_1CCamera(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong source_j, jlong camera_j)
				{
					EarthView::World::Graphic::CSceneManager *source = (EarthView::World::Graphic::CSceneManager*) source_j;
					EarthView::World::Graphic::CCamera *camera = (EarthView::World::Graphic::CCamera*) camera_j;
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeAtmosphereProxy))
					{
						pObjectX->EarthView::World::Spatial::Effect3D::CGlobeAtmosphere::postUpdateSceneGraph(source, camera);
					}
					else
					{
						pObjectX->postUpdateSceneGraph(source, camera);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_register_1postUpdateSceneGraph_1CSceneManager_1CCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeAtmosphereProxy *pObjectX = (JCGlobeAtmosphereProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_postUpdateSceneGraph_CSceneManager_CCamera_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"postUpdateSceneGraph_CSceneManager_CCamera_callback", "(JJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_postUpdateSceneGraph_1CSceneManager_1CCamera_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong source_j, jlong camera_j)
				{
					EarthView::World::Graphic::CSceneManager *source = (EarthView::World::Graphic::CSceneManager*) source_j;
					EarthView::World::Graphic::CCamera *camera = (EarthView::World::Graphic::CCamera*) camera_j;
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Effect3D::CGlobeAtmosphere::postUpdateSceneGraph(source, camera);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_createRegionAtmosphere_1CEnvelope_1EVWeatherType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong envelope_j, jint type_j)
				{
					EarthView::World::Spatial::Geometry::CEnvelope envelope = *(EarthView::World::Spatial::Geometry::CEnvelope*) envelope_j;
					EarthView::World::Spatial::Effect3D::EVWeatherType type = (EarthView::World::Spatial::Effect3D::EVWeatherType) type_j;
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjXXXX;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* __values1 = pObjectX->createRegionAtmosphere(envelope, type);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_destroyRegionAtmosphere_1CRegionAtmosphere(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong regionatmosphere_j)
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *regionatmosphere = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) regionatmosphere_j;
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjXXXX;
					pObjectX->destroyRegionAtmosphere(regionatmosphere);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_getRegionAtmospheresCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjXXXX;
					ev_size_t __values1 = pObjectX->getRegionAtmospheresCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_getRegionAtmosphere_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjXXXX;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* __values1 = pObjectX->getRegionAtmosphere(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_setAerosphereThickness_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble thickness_j)
				{
					Real thickness = (Real) thickness_j;
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeAtmosphereProxy))
					{
						pObjectX->EarthView::World::Spatial::Effect3D::CGlobeAtmosphere::setAerosphereThickness(thickness);
					}
					else
					{
						pObjectX->setAerosphereThickness(thickness);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_register_1setAerosphereThickness_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeAtmosphereProxy *pObjectX = (JCGlobeAtmosphereProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setAerosphereThickness_Real_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setAerosphereThickness_Real_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_setAerosphereThickness_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble thickness_j)
				{
					Real thickness = (Real) thickness_j;
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Effect3D::CGlobeAtmosphere::setAerosphereThickness(thickness);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_fromXML_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeAtmosphereProxy))
					{
						pObjectX->EarthView::World::Spatial::Effect3D::CGlobeAtmosphere::fromXML(element);
					}
					else
					{
						pObjectX->fromXML(element);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_register_1fromXML_1CXmlElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeAtmosphereProxy *pObjectX = (JCGlobeAtmosphereProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_fromXML_CXmlElement_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"fromXML_CXmlElement_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_fromXML_1CXmlElement_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Effect3D::CGlobeAtmosphere::fromXML(element);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_toXML_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeAtmosphereProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::Effect3D::CGlobeAtmosphere::toXML();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->toXML();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_register_1toXML_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeAtmosphereProxy *pObjectX = (JCGlobeAtmosphereProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_toXML_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"toXML_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_toXML_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::Effect3D::CGlobeAtmosphere::toXML();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_setRealCloudMap_1CImage(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong img_j)
				{
					const EarthView::World::Graphic::CImage &img = *(EarthView::World::Graphic::CImage*) img_j;
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjXXXX;
					pObjectX->setRealCloudMap(img);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_setRealCloudMapAlpha_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat alpha_j)
				{
					ev_real32 alpha = (ev_real32) alpha_j;
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjXXXX;
					pObjectX->setRealCloudMapAlpha(alpha);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_setRegionCloudMapAlpha_1EVString_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jfloat alpha_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
					#else
					const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
					#endif
					ev_real32 alpha = (ev_real32) alpha_j;
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjXXXX;
					pObjectX->setRegionCloudMapAlpha(name, alpha);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_addRegionCloudMap_1EVString_1CImage_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong img_j, jdouble north_j, jdouble west_j, jdouble south_j, jdouble east_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
					#else
					const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
					#endif
					const EarthView::World::Graphic::CImage &img = *(EarthView::World::Graphic::CImage*) img_j;
					ev_real64 north = (ev_real64) north_j;
					ev_real64 west = (ev_real64) west_j;
					ev_real64 south = (ev_real64) south_j;
					ev_real64 east = (ev_real64) east_j;
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjXXXX;
					pObjectX->addRegionCloudMap(name, img, north, west, south, east);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_addRegionCloudMap_1EVString_1CImage_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong img_j, jdouble north_j, jdouble west_j, jdouble south_j, jdouble east_j, jdouble height_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
					#else
					const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
					#endif
					const EarthView::World::Graphic::CImage &img = *(EarthView::World::Graphic::CImage*) img_j;
					ev_real64 north = (ev_real64) north_j;
					ev_real64 west = (ev_real64) west_j;
					ev_real64 south = (ev_real64) south_j;
					ev_real64 east = (ev_real64) east_j;
					ev_real64 height = (ev_real64) height_j;
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjXXXX;
					pObjectX->addRegionCloudMap(name, img, north, west, south, east, height);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_removeRegionCloudMap_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
					#else
					const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
					#endif
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjXXXX;
					pObjectX->removeRegionCloudMap(name);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_setRegionCloudMapVisible_1EVString_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean visible_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
					#else
					const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
					#endif
					bool visible = (bool) visible_j;
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjXXXX;
					pObjectX->setRegionCloudMapVisible(name, visible);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_getRegionCloudMapVisible_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
					#else
					const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
					#endif
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->getRegionCloudMapVisible(name);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_enableGetCloudColorFromImage_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
				{
					ev_bool enable = (ev_bool) enable_j;
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjXXXX;
					pObjectX->enableGetCloudColorFromImage(enable);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_setWindSpeedForRealCloudMap_1CVector2(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong speed_j)
				{
					const EarthView::World::Spatial::Math::CVector2 &speed = *(EarthView::World::Spatial::Math::CVector2*) speed_j;
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjXXXX;
					pObjectX->setWindSpeedForRealCloudMap(speed);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_setRegionCloudRotationInfomation_1EVString_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jdouble centerLat_j, jdouble centerLon_j, jdouble rotationAngleVelocity_j, jdouble rotationRegionRadius_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
					#else
					const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
					#endif
					ev_real64 centerLat = (ev_real64) centerLat_j;
					ev_real64 centerLon = (ev_real64) centerLon_j;
					ev_real64 rotationAngleVelocity = (ev_real64) rotationAngleVelocity_j;
					ev_real64 rotationRegionRadius = (ev_real64) rotationRegionRadius_j;
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjXXXX;
					pObjectX->setRegionCloudRotationInfomation(name, centerLat, centerLon, rotationAngleVelocity, rotationRegionRadius);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_enableRotateRegionCloud_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
					#else
					const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
					#endif
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjXXXX;
					pObjectX->enableRotateRegionCloud(name);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_disableRotateRegionCloud_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
					#else
					const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
					#endif
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjXXXX;
					pObjectX->disableRotateRegionCloud(name);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_destroy_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeAtmosphereProxy))
					{
						pObjectX->EarthView::World::Spatial::Effect3D::CGlobeAtmosphere::destroy();
					}
					else
					{
						pObjectX->destroy();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_register_1destroy_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeAtmosphereProxy *pObjectX = (JCGlobeAtmosphereProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_destroy_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"destroy_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_destroy_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Effect3D::CGlobeAtmosphere::destroy();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_getWeatherTransformer_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjXXXX;
					EarthView::World::Spatial::Effect3D::CWeatherTransformation* __values1 = pObjectX->getWeatherTransformer();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_startWeatherTransform_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjXXXX;
					pObjectX->startWeatherTransform();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_stopWeatherTransform_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjXXXX;
					pObjectX->stopWeatherTransform();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_setWeather_1EVWeatherType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::Effect3D::EVWeatherType type = (EarthView::World::Spatial::Effect3D::EVWeatherType) type_j;
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeAtmosphereProxy))
					{
						pObjectX->EarthView::World::Spatial::Effect3D::CGlobeAtmosphere::setWeather(type);
					}
					else
					{
						pObjectX->setWeather(type);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_register_1setWeather_1EVWeatherType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeAtmosphereProxy *pObjectX = (JCGlobeAtmosphereProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setWeather_EVWeatherType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setWeather_EVWeatherType_callback", "(I)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_setWeather_1EVWeatherType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::Effect3D::EVWeatherType type = (EarthView::World::Spatial::Effect3D::EVWeatherType) type_j;
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Effect3D::CGlobeAtmosphere::setWeather(type);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_setWeatherTransitionTime_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong seconds_j)
				{
					ev_uint32 seconds = (ev_uint32) seconds_j;
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjXXXX;
					pObjectX->setWeatherTransitionTime(seconds);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_update_1CDegree_1CDegree_1ev_1real64_1CVector3_1CVector3_1ev_1real32_1CViewport_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong lon_j, jlong lat_j, jdouble alt_j, jlong cameraLookDir_j, jlong cameraPos_j, jfloat timeSinceLastFrame_j, jlong viewPort_j, jboolean mainCamera_j)
				{
					EarthView::World::Spatial::Math::CDegree lon = *(EarthView::World::Spatial::Math::CDegree*) lon_j;
					EarthView::World::Spatial::Math::CDegree lat = *(EarthView::World::Spatial::Math::CDegree*) lat_j;
					ev_real64 alt = (ev_real64) alt_j;
					EarthView::World::Spatial::Math::CVector3 cameraLookDir = *(EarthView::World::Spatial::Math::CVector3*) cameraLookDir_j;
					EarthView::World::Spatial::Math::CVector3 cameraPos = *(EarthView::World::Spatial::Math::CVector3*) cameraPos_j;
					ev_real32 timeSinceLastFrame = (ev_real32) timeSinceLastFrame_j;
					EarthView::World::Graphic::CViewport *viewPort = (EarthView::World::Graphic::CViewport*) viewPort_j;
					ev_bool mainCamera = (ev_bool) mainCamera_j;
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeAtmosphereProxy))
					{
						pObjectX->EarthView::World::Spatial::Effect3D::CGlobeAtmosphere::update(lon, lat, alt, cameraLookDir, cameraPos, timeSinceLastFrame, viewPort, mainCamera);
					}
					else
					{
						pObjectX->update(lon, lat, alt, cameraLookDir, cameraPos, timeSinceLastFrame, viewPort, mainCamera);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_register_1update_1CDegree_1CDegree_1ev_1real64_1CVector3_1CVector3_1ev_1real32_1CViewport_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeAtmosphereProxy *pObjectX = (JCGlobeAtmosphereProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_update_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"update_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool_callback", "(JJDJJFJZ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_update_1CDegree_1CDegree_1ev_1real64_1CVector3_1CVector3_1ev_1real32_1CViewport_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong lon_j, jlong lat_j, jdouble alt_j, jlong cameraLookDir_j, jlong cameraPos_j, jfloat timeSinceLastFrame_j, jlong viewPort_j, jboolean mainCamera_j)
				{
					EarthView::World::Spatial::Math::CDegree lon = *(EarthView::World::Spatial::Math::CDegree*) lon_j;
					EarthView::World::Spatial::Math::CDegree lat = *(EarthView::World::Spatial::Math::CDegree*) lat_j;
					ev_real64 alt = (ev_real64) alt_j;
					EarthView::World::Spatial::Math::CVector3 cameraLookDir = *(EarthView::World::Spatial::Math::CVector3*) cameraLookDir_j;
					EarthView::World::Spatial::Math::CVector3 cameraPos = *(EarthView::World::Spatial::Math::CVector3*) cameraPos_j;
					ev_real32 timeSinceLastFrame = (ev_real32) timeSinceLastFrame_j;
					EarthView::World::Graphic::CViewport *viewPort = (EarthView::World::Graphic::CViewport*) viewPort_j;
					ev_bool mainCamera = (ev_bool) mainCamera_j;
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Effect3D::CGlobeAtmosphere::update(lon, lat, alt, cameraLookDir, cameraPos, timeSinceLastFrame, viewPort, mainCamera);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_onChildAtmosphereCloudLayerAdded_1CCloudLayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j)
				{
					EarthView::World::Spatial::Effect3D::CCloudLayer *layer = (EarthView::World::Spatial::Effect3D::CCloudLayer*) layer_j;
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeAtmosphereProxy))
					{
						pObjectX->EarthView::World::Spatial::Effect3D::CGlobeAtmosphere::onChildAtmosphereCloudLayerAdded(layer);
					}
					else
					{
						pObjectX->onChildAtmosphereCloudLayerAdded(layer);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_register_1onChildAtmosphereCloudLayerAdded_1CCloudLayer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeAtmosphereProxy *pObjectX = (JCGlobeAtmosphereProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onChildAtmosphereCloudLayerAdded_CCloudLayer_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onChildAtmosphereCloudLayerAdded_CCloudLayer_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_onChildAtmosphereCloudLayerAdded_1CCloudLayer_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j)
				{
					EarthView::World::Spatial::Effect3D::CCloudLayer *layer = (EarthView::World::Spatial::Effect3D::CCloudLayer*) layer_j;
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Effect3D::CGlobeAtmosphere::onChildAtmosphereCloudLayerAdded(layer);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_onChildAtmosphereCloudLayerRemoved_1CCloudLayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j)
				{
					EarthView::World::Spatial::Effect3D::CCloudLayer *layer = (EarthView::World::Spatial::Effect3D::CCloudLayer*) layer_j;
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeAtmosphereProxy))
					{
						pObjectX->EarthView::World::Spatial::Effect3D::CGlobeAtmosphere::onChildAtmosphereCloudLayerRemoved(layer);
					}
					else
					{
						pObjectX->onChildAtmosphereCloudLayerRemoved(layer);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_register_1onChildAtmosphereCloudLayerRemoved_1CCloudLayer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeAtmosphereProxy *pObjectX = (JCGlobeAtmosphereProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onChildAtmosphereCloudLayerRemoved_CCloudLayer_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onChildAtmosphereCloudLayerRemoved_CCloudLayer_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_onChildAtmosphereCloudLayerRemoved_1CCloudLayer_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j)
				{
					EarthView::World::Spatial::Effect3D::CCloudLayer *layer = (EarthView::World::Spatial::Effect3D::CCloudLayer*) layer_j;
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Effect3D::CGlobeAtmosphere::onChildAtmosphereCloudLayerRemoved(layer);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_register_1getStringInterfacePtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeAtmosphereProxy *pObjectX = (JCGlobeAtmosphereProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getStringInterfacePtr_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getStringInterfacePtr_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_register_1create_1CViewport(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeAtmosphereProxy *pObjectX = (JCGlobeAtmosphereProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_create_CViewport_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"create_CViewport_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_register_1setRealCloudHeight_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeAtmosphereProxy *pObjectX = (JCGlobeAtmosphereProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setRealCloudHeight_Real_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setRealCloudHeight_Real_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_register_1calcAmbientLightMultiplier_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeAtmosphereProxy *pObjectX = (JCGlobeAtmosphereProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_calcAmbientLightMultiplier_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"calcAmbientLightMultiplier_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeAtmosphereProxy *pObjectX = (JCGlobeAtmosphereProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_register_1setName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeAtmosphereProxy *pObjectX = (JCGlobeAtmosphereProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setName_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setName_EVString_callback", "(Ljava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_register_1fromXmlElement_1CXmlElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeAtmosphereProxy *pObjectX = (JCGlobeAtmosphereProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_fromXmlElement_CXmlElement_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"fromXmlElement_CXmlElement_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_register_1toXmlElement_1CXmlElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeAtmosphereProxy *pObjectX = (JCGlobeAtmosphereProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_toXmlElement_CXmlElement_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"toXmlElement_CXmlElement_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_register_1preUpdateSceneGraph_1CSceneManager_1CCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeAtmosphereProxy *pObjectX = (JCGlobeAtmosphereProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_preUpdateSceneGraph_CSceneManager_CCamera_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"preUpdateSceneGraph_CSceneManager_CCamera_callback", "(JJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_register_1preFindVisibleObjects_1CSceneManager_1IlluminationRenderStage_1CViewport(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeAtmosphereProxy *pObjectX = (JCGlobeAtmosphereProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_preFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"preFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback", "(JIJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_register_1postFindVisibleObjects_1CSceneManager_1IlluminationRenderStage_1CViewport(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeAtmosphereProxy *pObjectX = (JCGlobeAtmosphereProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_postFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"postFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback", "(JIJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_register_1shadowTexturesUpdated_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeAtmosphereProxy *pObjectX = (JCGlobeAtmosphereProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_shadowTexturesUpdated_ev_size_t_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"shadowTexturesUpdated_ev_size_t_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_register_1shadowTextureCasterPreViewProj_1CLight_1CCamera_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeAtmosphereProxy *pObjectX = (JCGlobeAtmosphereProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_shadowTextureCasterPreViewProj_CLight_CCamera_ev_size_t_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"shadowTextureCasterPreViewProj_CLight_CCamera_ev_size_t_callback", "(JJJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_register_1shadowTextureReceiverPreViewProj_1CLight_1CFrustum(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeAtmosphereProxy *pObjectX = (JCGlobeAtmosphereProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_shadowTextureReceiverPreViewProj_CLight_CFrustum_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"shadowTextureReceiverPreViewProj_CLight_CFrustum_callback", "(JJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_register_1sortLightsAffectingFrustum_1LightList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeAtmosphereProxy *pObjectX = (JCGlobeAtmosphereProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_sortLightsAffectingFrustum_LightList_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"sortLightsAffectingFrustum_LightList_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GlobeAtmosphere_register_1sceneManagerDestroyed_1CSceneManager(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeAtmosphereProxy *pObjectX = (JCGlobeAtmosphereProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_sceneManagerDestroyed_CSceneManager_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"sceneManagerDestroyed_CSceneManager_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				class JCAtmosphereFactoryProxy : public EarthView::World::Spatial::Effect3D::CAtmosphereFactory
				{
				 private:
					EarthView::World::Core::ev_string m_createInstance_CSceneManager_callback;
					EarthView::World::Core::ev_string m_createInstance_EVString_CSceneManager_callback;
					EarthView::World::Core::ev_string m_createInstance_CXmlElement_CSceneManager_callback;
					EarthView::World::Core::ev_string m_destroyInstance_IAtmosphere_callback;
				public:
					JCAtmosphereFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CAtmosphereFactory(pList)
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
					void register_createInstance_CSceneManager_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createInstance_CSceneManager_callback = __method;
					}
					void register_createInstance_EVString_CSceneManager_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createInstance_EVString_CSceneManager_callback = __method;
					}
					void register_createInstance_CXmlElement_CSceneManager_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createInstance_CXmlElement_CSceneManager_callback = __method;
					}
					void register_destroyInstance_IAtmosphere_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_destroyInstance_IAtmosphere_callback = __method;
					}
					virtual EarthView::World::Spatial::Spatial3D::IAtmosphere* createInstance(EarthView::World::Graphic::CSceneManager* pScene)
					{
						if (this->_gRef != NULL && this->m_createInstance_CSceneManager_callback != "" && this->isCustomExtend())
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
							jlong pScene_j = (jlong) pScene;
							jmethodID __method = __gr->getMethod("createInstance_CSceneManager_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , pScene_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Spatial3D::IAtmosphere *__values1 = (EarthView::World::Spatial::Spatial3D::IAtmosphere*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CAtmosphereFactory::createInstance(pScene);
						}
					}
					virtual EarthView::World::Spatial::Spatial3D::IAtmosphere* createInstance(const EVString& strXml, EarthView::World::Graphic::CSceneManager* pScene)
					{
						if (this->_gRef != NULL && this->m_createInstance_EVString_CSceneManager_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring strXml_wch = strXml;
							jstring strXml_j = __env->NewString((const jchar*)strXml_wch.getString(), strXml_wch.size());
							jlong pScene_j = (jlong) pScene;
							jmethodID __method = __gr->getMethod("createInstance_EVString_CSceneManager_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , strXml_j, pScene_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Spatial3D::IAtmosphere *__values1 = (EarthView::World::Spatial::Spatial3D::IAtmosphere*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CAtmosphereFactory::createInstance(strXml, pScene);
						}
					}
					virtual EarthView::World::Spatial::Spatial3D::IAtmosphere* createInstance(EarthView::World::Core::CXmlElement& element, EarthView::World::Graphic::CSceneManager* pScene)
					{
						if (this->_gRef != NULL && this->m_createInstance_CXmlElement_CSceneManager_callback != "" && this->isCustomExtend())
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
							jlong element_j = (jlong) &element;
							jlong pScene_j = (jlong) pScene;
							jmethodID __method = __gr->getMethod("createInstance_CXmlElement_CSceneManager_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , element_j, pScene_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Spatial3D::IAtmosphere *__values1 = (EarthView::World::Spatial::Spatial3D::IAtmosphere*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CAtmosphereFactory::createInstance(element, pScene);
						}
					}
					virtual void destroyInstance(EarthView::World::Spatial::Spatial3D::IAtmosphere* environment)
					{
						if (this->_gRef != NULL && this->m_destroyInstance_IAtmosphere_callback != "" && this->isCustomExtend())
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
							jlong environment_j = (jlong) environment;
							jmethodID __method = __gr->getMethod("destroyInstance_IAtmosphere_callback");
							__env->CallVoidMethod(__obj, __method , environment_j);
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
							return this->CAtmosphereFactory::destroyInstance(environment);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCAtmosphereFactoryProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_AtmosphereFactory_createInstance_1CSceneManager(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pScene_j)
				{
					EarthView::World::Graphic::CSceneManager *pScene = (EarthView::World::Graphic::CSceneManager*) pScene_j;
					EarthView::World::Spatial::Effect3D::CAtmosphereFactory *pObjectX = (EarthView::World::Spatial::Effect3D::CAtmosphereFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAtmosphereFactoryProxy))
					{
						EarthView::World::Spatial::Spatial3D::IAtmosphere* __values1 = pObjectX->EarthView::World::Spatial::Effect3D::CAtmosphereFactory::createInstance(pScene);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Spatial3D::IAtmosphere* __values1 = pObjectX->createInstance(pScene);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_AtmosphereFactory_register_1createInstance_1CSceneManager(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAtmosphereFactoryProxy *pObjectX = (JCAtmosphereFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createInstance_CSceneManager_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createInstance_CSceneManager_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_AtmosphereFactory_createInstance_1CSceneManager_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pScene_j)
				{
					EarthView::World::Graphic::CSceneManager *pScene = (EarthView::World::Graphic::CSceneManager*) pScene_j;
					EarthView::World::Spatial::Effect3D::CAtmosphereFactory *pObjectX = (EarthView::World::Spatial::Effect3D::CAtmosphereFactory*) pObjXXXX;
					EarthView::World::Spatial::Spatial3D::IAtmosphere* __values1 = pObjectX->EarthView::World::Spatial::Effect3D::CAtmosphereFactory::createInstance(pScene);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_AtmosphereFactory_createInstance_1EVString_1CSceneManager(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strXml_j, jlong pScene_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strXml_ch = (const ev_char*)__env->GetStringUTFChars(strXml_j,JNI_FALSE);
					const EVString strXml = strXml_ch;
					__env->ReleaseStringUTFChars(strXml_j, (const char *)strXml_ch);
					#else
					const ev_wchar* strXml_ch = (const ev_wchar*)__env->GetStringChars(strXml_j,JNI_FALSE);
					const EVString strXml = strXml_ch;
					__env->ReleaseStringChars(strXml_j, (const jchar *)strXml_ch);
					#endif
					EarthView::World::Graphic::CSceneManager *pScene = (EarthView::World::Graphic::CSceneManager*) pScene_j;
					EarthView::World::Spatial::Effect3D::CAtmosphereFactory *pObjectX = (EarthView::World::Spatial::Effect3D::CAtmosphereFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAtmosphereFactoryProxy))
					{
						EarthView::World::Spatial::Spatial3D::IAtmosphere* __values1 = pObjectX->EarthView::World::Spatial::Effect3D::CAtmosphereFactory::createInstance(strXml, pScene);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Spatial3D::IAtmosphere* __values1 = pObjectX->createInstance(strXml, pScene);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_AtmosphereFactory_register_1createInstance_1EVString_1CSceneManager(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAtmosphereFactoryProxy *pObjectX = (JCAtmosphereFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createInstance_EVString_CSceneManager_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createInstance_EVString_CSceneManager_callback", "(Ljava/lang/String;J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_AtmosphereFactory_createInstance_1EVString_1CSceneManager_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strXml_j, jlong pScene_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strXml_ch = (const ev_char*)__env->GetStringUTFChars(strXml_j,JNI_FALSE);
					const EVString strXml = strXml_ch;
					__env->ReleaseStringUTFChars(strXml_j, (const char *)strXml_ch);
					#else
					const ev_wchar* strXml_ch = (const ev_wchar*)__env->GetStringChars(strXml_j,JNI_FALSE);
					const EVString strXml = strXml_ch;
					__env->ReleaseStringChars(strXml_j, (const jchar *)strXml_ch);
					#endif
					EarthView::World::Graphic::CSceneManager *pScene = (EarthView::World::Graphic::CSceneManager*) pScene_j;
					EarthView::World::Spatial::Effect3D::CAtmosphereFactory *pObjectX = (EarthView::World::Spatial::Effect3D::CAtmosphereFactory*) pObjXXXX;
					EarthView::World::Spatial::Spatial3D::IAtmosphere* __values1 = pObjectX->EarthView::World::Spatial::Effect3D::CAtmosphereFactory::createInstance(strXml, pScene);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_AtmosphereFactory_createInstance_1CXmlElement_1CSceneManager(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j, jlong pScene_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Graphic::CSceneManager *pScene = (EarthView::World::Graphic::CSceneManager*) pScene_j;
					EarthView::World::Spatial::Effect3D::CAtmosphereFactory *pObjectX = (EarthView::World::Spatial::Effect3D::CAtmosphereFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAtmosphereFactoryProxy))
					{
						EarthView::World::Spatial::Spatial3D::IAtmosphere* __values1 = pObjectX->EarthView::World::Spatial::Effect3D::CAtmosphereFactory::createInstance(element, pScene);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Spatial3D::IAtmosphere* __values1 = pObjectX->createInstance(element, pScene);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_AtmosphereFactory_register_1createInstance_1CXmlElement_1CSceneManager(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAtmosphereFactoryProxy *pObjectX = (JCAtmosphereFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createInstance_CXmlElement_CSceneManager_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createInstance_CXmlElement_CSceneManager_callback", "(JJ)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_AtmosphereFactory_createInstance_1CXmlElement_1CSceneManager_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j, jlong pScene_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Graphic::CSceneManager *pScene = (EarthView::World::Graphic::CSceneManager*) pScene_j;
					EarthView::World::Spatial::Effect3D::CAtmosphereFactory *pObjectX = (EarthView::World::Spatial::Effect3D::CAtmosphereFactory*) pObjXXXX;
					EarthView::World::Spatial::Spatial3D::IAtmosphere* __values1 = pObjectX->EarthView::World::Spatial::Effect3D::CAtmosphereFactory::createInstance(element, pScene);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_AtmosphereFactory_destroyInstance_1IAtmosphere(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong environment_j)
				{
					EarthView::World::Spatial::Spatial3D::IAtmosphere *environment = (EarthView::World::Spatial::Spatial3D::IAtmosphere*) environment_j;
					EarthView::World::Spatial::Effect3D::CAtmosphereFactory *pObjectX = (EarthView::World::Spatial::Effect3D::CAtmosphereFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAtmosphereFactoryProxy))
					{
						pObjectX->EarthView::World::Spatial::Effect3D::CAtmosphereFactory::destroyInstance(environment);
					}
					else
					{
						pObjectX->destroyInstance(environment);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_AtmosphereFactory_register_1destroyInstance_1IAtmosphere(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAtmosphereFactoryProxy *pObjectX = (JCAtmosphereFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_destroyInstance_IAtmosphere_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"destroyInstance_IAtmosphere_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_AtmosphereFactory_destroyInstance_1IAtmosphere_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong environment_j)
				{
					EarthView::World::Spatial::Spatial3D::IAtmosphere *environment = (EarthView::World::Spatial::Spatial3D::IAtmosphere*) environment_j;
					EarthView::World::Spatial::Effect3D::CAtmosphereFactory *pObjectX = (EarthView::World::Spatial::Effect3D::CAtmosphereFactory*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Effect3D::CAtmosphereFactory::destroyInstance(environment);
				}
			}
		}
	}
}
