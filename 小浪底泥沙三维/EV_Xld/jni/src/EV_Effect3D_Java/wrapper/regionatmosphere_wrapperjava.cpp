/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "effect3d/regionatmosphere.h"
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
			namespace Effect3D
			{
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_effect3d_EVWeatherTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						WT_CUSTOM,
						WT_CLEARNESS,
						WT_CLOUDY,
						WT_LOWERY,
						WT_DRIZZLE,
						WT_RAIN,
						WT_DRENCHER,
						WT_RAINSTORM,
						WT_SLEET,
						WT_FLURRY,
						WT_SNOW,
						WT_HEAVYSNOW,
						WT_SNOWSTORM,
						WT_ICECRYSTALS,
						WT_ICEPELLETS,
						WT_SMALLHAIL,
						WT_HAIL
					};
					jintArray array = __env->NewIntArray(17);
					__env->SetIntArrayRegion(array, 0, 17, enum_values);
					return array;
				}
				class JCRegionAtmosphereProxy : public EarthView::World::Spatial::Effect3D::CRegionAtmosphere
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
					JCRegionAtmosphereProxy(EarthView::World::Core::CNameValuePairList *pList) : CRegionAtmosphere(pList)
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
							return this->CRegionAtmosphere::getStringInterfacePtr();
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
							return this->CRegionAtmosphere::setWeather(type);
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
							return this->CRegionAtmosphere::setName(name);
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
							return this->CRegionAtmosphere::getName();
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
							return this->CRegionAtmosphere::create(ref_viewport);
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
							return this->CRegionAtmosphere::destroy();
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
							return this->CRegionAtmosphere::setAerosphereThickness(thickness);
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
							return this->CRegionAtmosphere::setRealCloudHeight(height);
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
							return this->CRegionAtmosphere::fromXmlElement(element);
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
							return this->CRegionAtmosphere::toXmlElement(element);
						}
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
							return this->CRegionAtmosphere::postUpdateSceneGraph(source, camera);
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
							return this->CRegionAtmosphere::update(lon, lat, alt, cameraLookDir, cameraPos, timeSinceLastFrame, viewPort, mainCamera);
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
							return this->CRegionAtmosphere::onChildAtmosphereCloudLayerAdded(layer);
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
							return this->CRegionAtmosphere::onChildAtmosphereCloudLayerRemoved(layer);
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
							return this->CRegionAtmosphere::calcAmbientLightMultiplier();
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
							return this->CRegionAtmosphere::fromXML(element);
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
							return this->CRegionAtmosphere::toXML();
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
							return this->CRegionAtmosphere::preUpdateSceneGraph(source, camera);
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
							return this->CRegionAtmosphere::preFindVisibleObjects(source, irs, v);
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
							return this->CRegionAtmosphere::postFindVisibleObjects(source, irs, v);
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
							return this->CRegionAtmosphere::shadowTexturesUpdated(numberOfShadowTextures);
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
							return this->CRegionAtmosphere::shadowTextureCasterPreViewProj(light, camera, iteration);
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
							return this->CRegionAtmosphere::shadowTextureReceiverPreViewProj(light, frustum);
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
							return this->CRegionAtmosphere::sortLightsAffectingFrustum(lightList);
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
							return this->CRegionAtmosphere::sceneManagerDestroyed(source);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCRegionAtmosphereProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_getStringInterfacePtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRegionAtmosphereProxy))
					{
						EarthView::World::Core::CStringInterface* __values1 = pObjectX->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::getStringInterfacePtr();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Core::CStringInterface* __values1 = pObjectX->getStringInterfacePtr();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_register_1getStringInterfacePtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAtmosphereProxy *pObjectX = (JCRegionAtmosphereProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_getStringInterfacePtr_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					EarthView::World::Core::CStringInterface* __values1 = pObjectX->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::getStringInterfacePtr();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_getSceneManager_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					EarthView::World::Graphic::CSceneManager* __values1 = pObjectX->getSceneManager();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_frameStarted_1FrameEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
				{
					const EarthView::World::Graphic::FrameEvent &evt = *(EarthView::World::Graphic::FrameEvent*) evt_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->frameStarted(evt);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_setEnvelope_1CEnvelope(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong envelope_j)
				{
					EarthView::World::Spatial::Geometry::CEnvelope &envelope = *(EarthView::World::Spatial::Geometry::CEnvelope*) envelope_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					pObjectX->setEnvelope(envelope);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_getEnvelope_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CEnvelope __values1 = pObjectX->getEnvelope();
					EarthView::World::Spatial::Geometry::CEnvelope *returnvalues = new EarthView::World::Spatial::Geometry::CEnvelope(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_setWeather_1EVWeatherType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::Effect3D::EVWeatherType type = (EarthView::World::Spatial::Effect3D::EVWeatherType) type_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRegionAtmosphereProxy))
					{
						pObjectX->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::setWeather(type);
					}
					else
					{
						pObjectX->setWeather(type);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_register_1setWeather_1EVWeatherType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAtmosphereProxy *pObjectX = (JCRegionAtmosphereProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_setWeather_1EVWeatherType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::Effect3D::EVWeatherType type = (EarthView::World::Spatial::Effect3D::EVWeatherType) type_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::setWeather(type);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_getWeather_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					EarthView::World::Spatial::Effect3D::EVWeatherType __values1 = pObjectX->getWeather();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_setMinimumAmbientLight_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong colour_j)
				{
					const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					pObjectX->setMinimumAmbientLight(colour);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_getMinimumAmbientLight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->getMinimumAmbientLight();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_setManageAmbientLight_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean manage_j)
				{
					ev_bool manage = (ev_bool) manage_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					pObjectX->setManageAmbientLight(manage);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_getManageAmbientLight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->getManageAmbientLight();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_setAmbientMultiplier_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong colour_j)
				{
					const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					pObjectX->setAmbientMultiplier(colour);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_getAmbientMultiplier_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->getAmbientMultiplier();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_createCloudLayer_1EVCloudType_1CHeightRange(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j, jlong height_j)
				{
					EarthView::World::Spatial::Effect3D::EVCloudType type = (EarthView::World::Spatial::Effect3D::EVCloudType) type_j;
					const EarthView::World::Spatial::Effect3D::CHeightRange &height = *(EarthView::World::Spatial::Effect3D::CHeightRange*) height_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					EarthView::World::Spatial::Effect3D::CCloudLayer* __values1 = pObjectX->createCloudLayer(type, height);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_destroyCloudLayer_1CCloudLayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cloudlayer_j)
				{
					EarthView::World::Spatial::Effect3D::CCloudLayer *cloudlayer = (EarthView::World::Spatial::Effect3D::CCloudLayer*) cloudlayer_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					pObjectX->destroyCloudLayer(cloudlayer);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_createWind_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					EarthView::World::Spatial::Effect3D::CWind* __values1 = pObjectX->createWind();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_destroyWind_1CWind(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong wind_j)
				{
					EarthView::World::Spatial::Effect3D::CWind *wind = (EarthView::World::Spatial::Effect3D::CWind*) wind_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					pObjectX->destroyWind(wind);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_createLightningManager_1CHeightRange(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong range_j)
				{
					const EarthView::World::Spatial::Effect3D::CHeightRange &range = *(EarthView::World::Spatial::Effect3D::CHeightRange*) range_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					EarthView::World::Spatial::Effect3D::CLightningManager* __values1 = pObjectX->createLightningManager(range);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_destroyLightningManager_1CLightningManager(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong lightning_j)
				{
					EarthView::World::Spatial::Effect3D::CLightningManager *lightning = (EarthView::World::Spatial::Effect3D::CLightningManager*) lightning_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					pObjectX->destroyLightningManager(lightning);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_getCloudLayersCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_size_t __values1 = pObjectX->getCloudLayersCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_getCloudLayer_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					EarthView::World::Spatial::Effect3D::CCloudLayer* __values1 = pObjectX->getCloudLayer(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_setGroundFog_1CGroundFog(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_fog_j)
				{
					EarthView::World::Spatial::Effect3D::CGroundFog *ref_fog = (EarthView::World::Spatial::Effect3D::CGroundFog*) ref_fog_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					pObjectX->setGroundFog(ref_fog);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_getGroundFog_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					EarthView::World::Spatial::Effect3D::CGroundFog* __values1 = pObjectX->getGroundFog();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_getWindsCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_size_t __values1 = pObjectX->getWindsCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_getWind_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					EarthView::World::Spatial::Effect3D::CWind* __values1 = pObjectX->getWind(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_getLightningManagersCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_size_t __values1 = pObjectX->getLightningManagersCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_getLightningManager_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					EarthView::World::Spatial::Effect3D::CLightningManager* __values1 = pObjectX->getLightningManager(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_setSun_1CSun(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_sun_j)
				{
					EarthView::World::Spatial::Effect3D::CSun *ref_sun = (EarthView::World::Spatial::Effect3D::CSun*) ref_sun_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					pObjectX->setSun(ref_sun);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_getSun_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					EarthView::World::Spatial::Effect3D::CSun* __values1 = pObjectX->getSun();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_setMoon_1CMoon(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_moon_j)
				{
					EarthView::World::Spatial::Effect3D::CMoon *ref_moon = (EarthView::World::Spatial::Effect3D::CMoon*) ref_moon_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					pObjectX->setMoon(ref_moon);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_getMoon_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					EarthView::World::Spatial::Effect3D::CMoon* __values1 = pObjectX->getMoon();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_setStars_1CStars(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stars_j)
				{
					EarthView::World::Spatial::Effect3D::CStars *stars = (EarthView::World::Spatial::Effect3D::CStars*) stars_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					pObjectX->setStars(stars);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_getStars_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					EarthView::World::Spatial::Effect3D::CStars* __values1 = pObjectX->getStars();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_setPrecipitation_1CPrecipitation(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_precipitation_j)
				{
					EarthView::World::Spatial::Effect3D::CPrecipitation *ref_precipitation = (EarthView::World::Spatial::Effect3D::CPrecipitation*) ref_precipitation_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					pObjectX->setPrecipitation(ref_precipitation);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_getPrecipitation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					EarthView::World::Spatial::Effect3D::CPrecipitation* __values1 = pObjectX->getPrecipitation();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_shutdown_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere::shutdown();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_setRainSnowSystem_1CRainSnowSystem(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_rainSnowSystem_j)
				{
					EarthView::World::Spatial::Effect3D::CRainSnowSystem *ref_rainSnowSystem = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) ref_rainSnowSystem_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					pObjectX->setRainSnowSystem(ref_rainSnowSystem);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_getRainSnowSystem_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					EarthView::World::Spatial::Effect3D::CRainSnowSystem* __values1 = pObjectX->getRainSnowSystem();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_removeRainSnowSystem_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					pObjectX->removeRainSnowSystem();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_setName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRegionAtmosphereProxy))
					{
						pObjectX->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::setName(name);
					}
					else
					{
						pObjectX->setName(name);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_register_1setName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAtmosphereProxy *pObjectX = (JCRegionAtmosphereProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_setName_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::setName(name);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRegionAtmosphereProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::getName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAtmosphereProxy *pObjectX = (JCRegionAtmosphereProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_getName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_setObserverParam_1CDegree_1CDegree_1ev_1real64_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong lon_j, jlong lat_j, jdouble alt_j, jlong cameraLookDir_j)
				{
					EarthView::World::Spatial::Math::CDegree lon = *(EarthView::World::Spatial::Math::CDegree*) lon_j;
					EarthView::World::Spatial::Math::CDegree lat = *(EarthView::World::Spatial::Math::CDegree*) lat_j;
					ev_real64 alt = (ev_real64) alt_j;
					EarthView::World::Spatial::Math::CVector3 cameraLookDir = *(EarthView::World::Spatial::Math::CVector3*) cameraLookDir_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					pObjectX->setObserverParam(lon, lat, alt, cameraLookDir);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_setDateTime_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1real64_1ev_1int8(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint year_j, jint month_j, jint day_j, jint hour_j, jint minute_j, jdouble second_j, jbyte time_zone_j)
				{
					ev_int32 year = (ev_int32) year_j;
					ev_int32 month = (ev_int32) month_j;
					ev_int32 day = (ev_int32) day_j;
					ev_int32 hour = (ev_int32) hour_j;
					ev_int32 minute = (ev_int32) minute_j;
					ev_real64 second = (ev_real64) second_j;
					ev_int8 time_zone = (ev_int8) time_zone_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					pObjectX->setDateTime(year, month, day, hour, minute, second, time_zone);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_setUseSystemTime_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean system_time_j)
				{
					ev_bool system_time = (ev_bool) system_time_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					pObjectX->setUseSystemTime(system_time);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_getUseSystemTime_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->getUseSystemTime();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_getDateTime_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					EarthView::World::Core::CCoreTime __values1 = pObjectX->getDateTime();
					EarthView::World::Core::CCoreTime *returnvalues = new EarthView::World::Core::CCoreTime(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jbyte JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_getTimeZone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_int8 __values1 = pObjectX->getTimeZone();
					jbyte __values1_j = (jbyte)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_setTimeScale_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble scale_j)
				{
					const Real scale = (Real) scale_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					pObjectX->setTimeScale(scale);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_getTimeScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					Real __values1 = pObjectX->getTimeScale();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_create_1CViewport(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_viewport_j)
				{
					EarthView::World::Graphic::CViewport *ref_viewport = (EarthView::World::Graphic::CViewport*) ref_viewport_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRegionAtmosphereProxy))
					{
						pObjectX->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::create(ref_viewport);
					}
					else
					{
						pObjectX->create(ref_viewport);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_register_1create_1CViewport(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAtmosphereProxy *pObjectX = (JCRegionAtmosphereProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_create_1CViewport_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_viewport_j)
				{
					EarthView::World::Graphic::CViewport *ref_viewport = (EarthView::World::Graphic::CViewport*) ref_viewport_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::create(ref_viewport);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_destroy_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRegionAtmosphereProxy))
					{
						pObjectX->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::destroy();
					}
					else
					{
						pObjectX->destroy();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_register_1destroy_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAtmosphereProxy *pObjectX = (JCRegionAtmosphereProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_destroy_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::destroy();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_pause_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					pObjectX->pause();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_resume_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					pObjectX->resume();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_setAerosphereThickness_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble thickness_j)
				{
					Real thickness = (Real) thickness_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRegionAtmosphereProxy))
					{
						pObjectX->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::setAerosphereThickness(thickness);
					}
					else
					{
						pObjectX->setAerosphereThickness(thickness);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_register_1setAerosphereThickness_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAtmosphereProxy *pObjectX = (JCRegionAtmosphereProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_setAerosphereThickness_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble thickness_j)
				{
					Real thickness = (Real) thickness_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::setAerosphereThickness(thickness);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_getAerosphereThickness_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					Real __values1 = pObjectX->getAerosphereThickness();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_setRealCloudHeight_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble height_j)
				{
					Real height = (Real) height_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRegionAtmosphereProxy))
					{
						pObjectX->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::setRealCloudHeight(height);
					}
					else
					{
						pObjectX->setRealCloudHeight(height);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_register_1setRealCloudHeight_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAtmosphereProxy *pObjectX = (JCRegionAtmosphereProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_setRealCloudHeight_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble height_j)
				{
					Real height = (Real) height_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::setRealCloudHeight(height);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_getRealCloudHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					Real __values1 = pObjectX->getRealCloudHeight();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_EVWeatherTypeToString_1EVWeatherType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::Effect3D::EVWeatherType type = (EarthView::World::Spatial::Effect3D::EVWeatherType) type_j;
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					EVString __values1 = pObjectX->EVWeatherTypeToString(type);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_EVWeatherTypeToStringCHS_1EVWeatherType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::Effect3D::EVWeatherType type = (EarthView::World::Spatial::Effect3D::EVWeatherType) type_j;
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					EVString __values1 = pObjectX->EVWeatherTypeToStringCHS(type);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_toEVWeatherType_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring type_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* type_ch = (const ev_char*)__env->GetStringUTFChars(type_j,JNI_FALSE);
					const EVString type = type_ch;
					__env->ReleaseStringUTFChars(type_j, (const char *)type_ch);
					#else
					const ev_wchar* type_ch = (const ev_wchar*)__env->GetStringChars(type_j,JNI_FALSE);
					const EVString type = type_ch;
					__env->ReleaseStringChars(type_j, (const jchar *)type_ch);
					#endif
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					EarthView::World::Spatial::Effect3D::EVWeatherType __values1 = pObjectX->toEVWeatherType(type);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_toEVWeatherTypeCHS_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring type_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* type_ch = (const ev_char*)__env->GetStringUTFChars(type_j,JNI_FALSE);
					const EVString type = type_ch;
					__env->ReleaseStringUTFChars(type_j, (const char *)type_ch);
					#else
					const ev_wchar* type_ch = (const ev_wchar*)__env->GetStringChars(type_j,JNI_FALSE);
					const EVString type = type_ch;
					__env->ReleaseStringChars(type_j, (const jchar *)type_ch);
					#endif
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					EarthView::World::Spatial::Effect3D::EVWeatherType __values1 = pObjectX->toEVWeatherTypeCHS(type);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_enableSkyDome_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
				{
					ev_bool enable = (ev_bool) enable_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->enableSkyDome(enable);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_isSkyDomeEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->isSkyDomeEnabled();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_enableSkyDomeRefractable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
				{
					ev_bool enable = (ev_bool) enable_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->enableSkyDomeRefractable(enable);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_isSkyDomeRefractable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->isSkyDomeRefractable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_enableSkyDomeReflectable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
				{
					ev_bool enable = (ev_bool) enable_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->enableSkyDomeReflectable(enable);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_isSkyDomeReflectable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->isSkyDomeReflectable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_setRealCloudVisible_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j)
				{
					ev_bool visible = (ev_bool) visible_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					pObjectX->setRealCloudVisible(visible);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_isRealCloudVisible_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->isRealCloudVisible();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_enableRealCloud_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
				{
					ev_bool enable = (ev_bool) enable_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->enableRealCloud(enable);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_isRealCloudEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->isRealCloudEnabled();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_enableRealCloudFlow_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
				{
					ev_bool enable = (ev_bool) enable_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->enableRealCloudFlow(enable);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_isRealCloudFlowEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->isRealCloudFlowEnabled();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_enableFlatCloud_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
				{
					ev_bool enable = (ev_bool) enable_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->enableFlatCloud(enable);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_isFlatCloudEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->isFlatCloudEnabled();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_enableVolumeCloud_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
				{
					ev_bool enable = (ev_bool) enable_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->enableVolumeCloud(enable);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_isVolumeCloudEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->isVolumeCloudEnabled();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_enableSun_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
				{
					ev_bool enable = (ev_bool) enable_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->enableSun(enable);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_isSunEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->isSunEnabled();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_enableSunLight_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
				{
					ev_bool enable = (ev_bool) enable_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->enableSunLight(enable);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_isSunLightEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->isSunLightEnabled();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_enableMoon_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
				{
					ev_bool enable = (ev_bool) enable_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->enableMoon(enable);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_isMoonEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->isMoonEnabled();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_enableMoonLight_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
				{
					ev_bool enable = (ev_bool) enable_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->enableMoonLight(enable);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_isMoonLightEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->isMoonLightEnabled();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_enableStars_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
				{
					ev_bool enable = (ev_bool) enable_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->enableStars(enable);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_isStarsEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->isStarsEnabled();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_enableLightning_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
				{
					ev_bool enable = (ev_bool) enable_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->enableLightning(enable);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_isLightningEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->isLightningEnabled();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_enablePrecipitation_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
				{
					ev_bool enable = (ev_bool) enable_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->enablePrecipitation(enable);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_isPrecipitationEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->isPrecipitationEnabled();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_setVisible_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j)
				{
					ev_bool visible = (ev_bool) visible_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					pObjectX->setVisible(visible);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_isVisible_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->isVisible();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_enableSunReflectable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
				{
					ev_bool enable = (ev_bool) enable_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->enableSunReflectable(enable);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_isSunReflectable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->isSunReflectable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_enableSunRefractable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
				{
					ev_bool enable = (ev_bool) enable_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->enableSunRefractable(enable);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_isSunRefractable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->isSunRefractable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_enableMoonReflectable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
				{
					ev_bool enable = (ev_bool) enable_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->enableMoonReflectable(enable);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_isMoonReflectable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->isMoonReflectable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_enableMoonRefractable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
				{
					ev_bool enable = (ev_bool) enable_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->enableMoonRefractable(enable);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_isMoonRefractable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->isMoonRefractable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_enableLightningReflectable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
				{
					ev_bool enable = (ev_bool) enable_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->enableLightningReflectable(enable);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_isLightningReflectable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->isLightningReflectable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_enableLightningRefractable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
				{
					ev_bool enable = (ev_bool) enable_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->enableLightningRefractable(enable);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_isLightningRefractable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->isLightningRefractable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_enableCloudReflectable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
				{
					ev_bool enable = (ev_bool) enable_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->enableCloudReflectable(enable);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_isCloudReflectable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->isCloudReflectable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_enableCloudRefractable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
				{
					ev_bool enable = (ev_bool) enable_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->enableCloudRefractable(enable);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_isCloudRefractable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->isCloudRefractable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_enableStarsReflectable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
				{
					ev_bool enable = (ev_bool) enable_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->enableStarsReflectable(enable);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_isStarsReflectable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->isStarsReflectable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_enableStarsRefractable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
				{
					ev_bool enable = (ev_bool) enable_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->enableStarsRefractable(enable);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_isStarsRefractable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->isStarsRefractable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_fromXmlElement_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRegionAtmosphereProxy))
					{
						pObjectX->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::fromXmlElement(element);
					}
					else
					{
						pObjectX->fromXmlElement(element);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_register_1fromXmlElement_1CXmlElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAtmosphereProxy *pObjectX = (JCRegionAtmosphereProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_fromXmlElement_1CXmlElement_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::fromXmlElement(element);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_toXmlElement_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRegionAtmosphereProxy))
					{
						EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::toXmlElement(element);
						EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						EarthView::World::Core::CXmlElement __values1 = pObjectX->toXmlElement(element);
						EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_register_1toXmlElement_1CXmlElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAtmosphereProxy *pObjectX = (JCRegionAtmosphereProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_toXmlElement_1CXmlElement_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::toXmlElement(element);
					EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_clear_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean completely_j)
				{
					ev_bool completely = (ev_bool) completely_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					pObjectX->clear(completely);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_setDefaultWindSpeed_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble speed_j)
				{
					Real speed = (Real) speed_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					pObjectX->setDefaultWindSpeed(speed);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_getDefaultWindSpeed_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					Real __values1 = pObjectX->getDefaultWindSpeed();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_getSunPosition_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getSunPosition();
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_getMoonPosition_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getMoonPosition();
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_setRadius_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint radius_j)
				{
					int radius = (int) radius_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					pObjectX->setRadius(radius);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_getRadius_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getRadius();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_isCloudLayerExist_1CCloudLayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j)
				{
					const EarthView::World::Spatial::Effect3D::CCloudLayer *layer = (const EarthView::World::Spatial::Effect3D::CCloudLayer*) layer_j;
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->isCloudLayerExist(layer);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_clearLightning_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					pObjectX->clearLightning();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_updateToRender_1CBaseObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_obj_j)
				{
					EarthView::World::Core::CBaseObject *ref_obj = (EarthView::World::Core::CBaseObject*) ref_obj_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					pObjectX->updateToRender(ref_obj);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_setFogParameters_1FogMode_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint fogmode_j, jdouble density_j)
				{
					EarthView::World::Graphic::FogMode fogmode = (EarthView::World::Graphic::FogMode) fogmode_j;
					Real density = (Real) density_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					pObjectX->setFogParameters(fogmode, density);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_getFogMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					EarthView::World::Graphic::FogMode __values1 = pObjectX->getFogMode();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_getFogDensity_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					Real __values1 = pObjectX->getFogDensity();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_setStarsBrightness_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat brightness_j)
				{
					ev_real32 brightness = (ev_real32) brightness_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					pObjectX->setStarsBrightness(brightness);
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_getStarsBrightness_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getStarsBrightness();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_setAerosphereTransRate_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat rate_j)
				{
					ev_real32 rate = (ev_real32) rate_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					pObjectX->setAerosphereTransRate(rate);
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_getAerophereTransRate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getAerophereTransRate();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_setIsUseCameraLightMode_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isUse_j)
				{
					ev_bool isUse = (ev_bool) isUse_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					pObjectX->setIsUseCameraLightMode(isUse);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_getIsUseCameraLightMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->getIsUseCameraLightMode();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_postUpdateSceneGraph_1CSceneManager_1CCamera(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong source_j, jlong camera_j)
				{
					EarthView::World::Graphic::CSceneManager *source = (EarthView::World::Graphic::CSceneManager*) source_j;
					EarthView::World::Graphic::CCamera *camera = (EarthView::World::Graphic::CCamera*) camera_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRegionAtmosphereProxy))
					{
						pObjectX->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::postUpdateSceneGraph(source, camera);
					}
					else
					{
						pObjectX->postUpdateSceneGraph(source, camera);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_register_1postUpdateSceneGraph_1CSceneManager_1CCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAtmosphereProxy *pObjectX = (JCRegionAtmosphereProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_postUpdateSceneGraph_1CSceneManager_1CCamera_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong source_j, jlong camera_j)
				{
					EarthView::World::Graphic::CSceneManager *source = (EarthView::World::Graphic::CSceneManager*) source_j;
					EarthView::World::Graphic::CCamera *camera = (EarthView::World::Graphic::CCamera*) camera_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::postUpdateSceneGraph(source, camera);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_update_1CDegree_1CDegree_1ev_1real64_1CVector3_1CVector3_1ev_1real32_1CViewport_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong lon_j, jlong lat_j, jdouble alt_j, jlong cameraLookDir_j, jlong cameraPos_j, jfloat timeSinceLastFrame_j, jlong viewPort_j, jboolean mainCamera_j)
				{
					EarthView::World::Spatial::Math::CDegree lon = *(EarthView::World::Spatial::Math::CDegree*) lon_j;
					EarthView::World::Spatial::Math::CDegree lat = *(EarthView::World::Spatial::Math::CDegree*) lat_j;
					ev_real64 alt = (ev_real64) alt_j;
					EarthView::World::Spatial::Math::CVector3 cameraLookDir = *(EarthView::World::Spatial::Math::CVector3*) cameraLookDir_j;
					EarthView::World::Spatial::Math::CVector3 cameraPos = *(EarthView::World::Spatial::Math::CVector3*) cameraPos_j;
					ev_real32 timeSinceLastFrame = (ev_real32) timeSinceLastFrame_j;
					EarthView::World::Graphic::CViewport *viewPort = (EarthView::World::Graphic::CViewport*) viewPort_j;
					ev_bool mainCamera = (ev_bool) mainCamera_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRegionAtmosphereProxy))
					{
						pObjectX->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::update(lon, lat, alt, cameraLookDir, cameraPos, timeSinceLastFrame, viewPort, mainCamera);
					}
					else
					{
						pObjectX->update(lon, lat, alt, cameraLookDir, cameraPos, timeSinceLastFrame, viewPort, mainCamera);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_register_1update_1CDegree_1CDegree_1ev_1real64_1CVector3_1CVector3_1ev_1real32_1CViewport_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAtmosphereProxy *pObjectX = (JCRegionAtmosphereProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_update_1CDegree_1CDegree_1ev_1real64_1CVector3_1CVector3_1ev_1real32_1CViewport_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong lon_j, jlong lat_j, jdouble alt_j, jlong cameraLookDir_j, jlong cameraPos_j, jfloat timeSinceLastFrame_j, jlong viewPort_j, jboolean mainCamera_j)
				{
					EarthView::World::Spatial::Math::CDegree lon = *(EarthView::World::Spatial::Math::CDegree*) lon_j;
					EarthView::World::Spatial::Math::CDegree lat = *(EarthView::World::Spatial::Math::CDegree*) lat_j;
					ev_real64 alt = (ev_real64) alt_j;
					EarthView::World::Spatial::Math::CVector3 cameraLookDir = *(EarthView::World::Spatial::Math::CVector3*) cameraLookDir_j;
					EarthView::World::Spatial::Math::CVector3 cameraPos = *(EarthView::World::Spatial::Math::CVector3*) cameraPos_j;
					ev_real32 timeSinceLastFrame = (ev_real32) timeSinceLastFrame_j;
					EarthView::World::Graphic::CViewport *viewPort = (EarthView::World::Graphic::CViewport*) viewPort_j;
					ev_bool mainCamera = (ev_bool) mainCamera_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::update(lon, lat, alt, cameraLookDir, cameraPos, timeSinceLastFrame, viewPort, mainCamera);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_onChildAtmosphereCloudLayerAdded_1CCloudLayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j)
				{
					EarthView::World::Spatial::Effect3D::CCloudLayer *layer = (EarthView::World::Spatial::Effect3D::CCloudLayer*) layer_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRegionAtmosphereProxy))
					{
						pObjectX->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::onChildAtmosphereCloudLayerAdded(layer);
					}
					else
					{
						pObjectX->onChildAtmosphereCloudLayerAdded(layer);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_register_1onChildAtmosphereCloudLayerAdded_1CCloudLayer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAtmosphereProxy *pObjectX = (JCRegionAtmosphereProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_onChildAtmosphereCloudLayerAdded_1CCloudLayer_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j)
				{
					EarthView::World::Spatial::Effect3D::CCloudLayer *layer = (EarthView::World::Spatial::Effect3D::CCloudLayer*) layer_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::onChildAtmosphereCloudLayerAdded(layer);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_onChildAtmosphereCloudLayerRemoved_1CCloudLayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j)
				{
					EarthView::World::Spatial::Effect3D::CCloudLayer *layer = (EarthView::World::Spatial::Effect3D::CCloudLayer*) layer_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRegionAtmosphereProxy))
					{
						pObjectX->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::onChildAtmosphereCloudLayerRemoved(layer);
					}
					else
					{
						pObjectX->onChildAtmosphereCloudLayerRemoved(layer);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_register_1onChildAtmosphereCloudLayerRemoved_1CCloudLayer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAtmosphereProxy *pObjectX = (JCRegionAtmosphereProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_onChildAtmosphereCloudLayerRemoved_1CCloudLayer_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j)
				{
					EarthView::World::Spatial::Effect3D::CCloudLayer *layer = (EarthView::World::Spatial::Effect3D::CCloudLayer*) layer_j;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::onChildAtmosphereCloudLayerRemoved(layer);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_calcAmbientLightMultiplier_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRegionAtmosphereProxy))
					{
						EarthView::World::Graphic::CColourValue __values1 = pObjectX->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::calcAmbientLightMultiplier();
						EarthView::World::Graphic::CColourValue *returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						EarthView::World::Graphic::CColourValue __values1 = pObjectX->calcAmbientLightMultiplier();
						EarthView::World::Graphic::CColourValue *returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_register_1calcAmbientLightMultiplier_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAtmosphereProxy *pObjectX = (JCRegionAtmosphereProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_calcAmbientLightMultiplier_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					EarthView::World::Graphic::CColourValue __values1 = pObjectX->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::calcAmbientLightMultiplier();
					EarthView::World::Graphic::CColourValue *returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_getRealCloudLayer_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *pObjectX = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjXXXX;
					EarthView::World::Spatial::Effect3D::CRealCloudLayer* __values1 = pObjectX->getRealCloudLayer();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_register_1fromXML_1CXmlElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAtmosphereProxy *pObjectX = (JCRegionAtmosphereProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_register_1toXML_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAtmosphereProxy *pObjectX = (JCRegionAtmosphereProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_register_1preUpdateSceneGraph_1CSceneManager_1CCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAtmosphereProxy *pObjectX = (JCRegionAtmosphereProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_register_1preFindVisibleObjects_1CSceneManager_1IlluminationRenderStage_1CViewport(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAtmosphereProxy *pObjectX = (JCRegionAtmosphereProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_register_1postFindVisibleObjects_1CSceneManager_1IlluminationRenderStage_1CViewport(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAtmosphereProxy *pObjectX = (JCRegionAtmosphereProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_register_1shadowTexturesUpdated_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAtmosphereProxy *pObjectX = (JCRegionAtmosphereProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_register_1shadowTextureCasterPreViewProj_1CLight_1CCamera_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAtmosphereProxy *pObjectX = (JCRegionAtmosphereProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_register_1shadowTextureReceiverPreViewProj_1CLight_1CFrustum(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAtmosphereProxy *pObjectX = (JCRegionAtmosphereProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_register_1sortLightsAffectingFrustum_1LightList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAtmosphereProxy *pObjectX = (JCRegionAtmosphereProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RegionAtmosphere_register_1sceneManagerDestroyed_1CSceneManager(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAtmosphereProxy *pObjectX = (JCRegionAtmosphereProxy*) pObjXXXX;
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
			}
		}
	}
}
