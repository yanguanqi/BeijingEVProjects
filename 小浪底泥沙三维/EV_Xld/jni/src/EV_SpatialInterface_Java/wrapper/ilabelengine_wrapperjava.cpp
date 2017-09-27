/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/ilabelengine.h"
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
			namespace Display
			{
				class JILabelEngineProxy : public EarthView::World::Spatial::Display::ILabelEngine
				{
				 private:
					EarthView::World::Core::ev_string m_addFeature_ev_int32_ILabelProperty_IGeometry_EVString_ev_int32_callback;
					EarthView::World::Core::ev_string m_addFeature_ev_int32_ILabelProperty_IGeometry_EVString_EVString_ev_int32_callback;
					EarthView::World::Core::ev_string m_getLabelElements_void_callback;
					EarthView::World::Core::ev_string m_initialize_ISpatialDisplay_IEnvelope_callback;
					EarthView::World::Core::ev_string m_isInitialized_void_callback;
					EarthView::World::Core::ev_string m_releaseResources_void_callback;
					EarthView::World::Core::ev_string m_getEngineName_void_callback;
					EarthView::World::Core::ev_string m_addBarriers_IGeometry_callback;
				public:
					JILabelEngineProxy(EarthView::World::Core::CNameValuePairList *pList) : ILabelEngine(pList)
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
					void register_addFeature_ev_int32_ILabelProperty_IGeometry_EVString_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_addFeature_ev_int32_ILabelProperty_IGeometry_EVString_ev_int32_callback = __method;
					}
					void register_addFeature_ev_int32_ILabelProperty_IGeometry_EVString_EVString_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_addFeature_ev_int32_ILabelProperty_IGeometry_EVString_EVString_ev_int32_callback = __method;
					}
					void register_getLabelElements_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getLabelElements_void_callback = __method;
					}
					void register_initialize_ISpatialDisplay_IEnvelope_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_initialize_ISpatialDisplay_IEnvelope_callback = __method;
					}
					void register_isInitialized_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isInitialized_void_callback = __method;
					}
					void register_releaseResources_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_releaseResources_void_callback = __method;
					}
					void register_getEngineName_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getEngineName_void_callback = __method;
					}
					void register_addBarriers_IGeometry_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_addBarriers_IGeometry_callback = __method;
					}
					virtual void addFeature(ev_int32 classID, EarthView::World::Spatial::Display::ILabelProperty* labelProperty, const EarthView::World::Spatial::Geometry::IGeometry* geo, EVString& label, ev_int32 featureID)
					{
						if (this->_gRef != NULL && this->m_addFeature_ev_int32_ILabelProperty_IGeometry_EVString_ev_int32_callback != "" && this->isCustomExtend())
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
							jint classID_j = (jint) classID;
							jlong labelProperty_j = (jlong) labelProperty;
							jlong geo_j = (jlong) geo;
							jlong label_j = (jlong) &label;
							jint featureID_j = (jint) featureID;
							jmethodID __method = __gr->getMethod("addFeature_ev_int32_ILabelProperty_IGeometry_EVString_ev_int32_callback");
							__env->CallVoidMethod(__obj, __method , classID_j, labelProperty_j, geo_j, label_j, featureID_j);
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
							return this->ILabelEngine::addFeature(classID, labelProperty, geo, label, featureID);
						}
					}
					virtual void addFeature(ev_int32 classID, EarthView::World::Spatial::Display::ILabelProperty* labelProperty, const EarthView::World::Spatial::Geometry::IGeometry* geo, EVString& label_numerator, EVString& label_denominator, ev_int32 featureID)
					{
						if (this->_gRef != NULL && this->m_addFeature_ev_int32_ILabelProperty_IGeometry_EVString_EVString_ev_int32_callback != "" && this->isCustomExtend())
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
							jint classID_j = (jint) classID;
							jlong labelProperty_j = (jlong) labelProperty;
							jlong geo_j = (jlong) geo;
							jlong label_numerator_j = (jlong) &label_numerator;
							jlong label_denominator_j = (jlong) &label_denominator;
							jint featureID_j = (jint) featureID;
							jmethodID __method = __gr->getMethod("addFeature_ev_int32_ILabelProperty_IGeometry_EVString_EVString_ev_int32_callback");
							__env->CallVoidMethod(__obj, __method , classID_j, labelProperty_j, geo_j, label_numerator_j, label_denominator_j, featureID_j);
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
							return this->ILabelEngine::addFeature(classID, labelProperty, geo, label_numerator, label_denominator, featureID);
						}
					}
					virtual EarthView::World::Spatial::Display::CLabelElements* getLabelElements()
					{
						if (this->_gRef != NULL && this->m_getLabelElements_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getLabelElements_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Display::CLabelElements *__values1 = (EarthView::World::Spatial::Display::CLabelElements*) __values1_j;
							return __values1;
						}
						else
						{
							return this->ILabelEngine::getLabelElements();
						}
					}
					virtual void initialize(const EarthView::World::Spatial::Display::ISpatialDisplay* display, const EarthView::World::Spatial::Geometry::IEnvelope* extent)
					{
						if (this->_gRef != NULL && this->m_initialize_ISpatialDisplay_IEnvelope_callback != "" && this->isCustomExtend())
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
							jlong display_j = (jlong) display;
							jlong extent_j = (jlong) extent;
							jmethodID __method = __gr->getMethod("initialize_ISpatialDisplay_IEnvelope_callback");
							__env->CallVoidMethod(__obj, __method , display_j, extent_j);
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
							return this->ILabelEngine::initialize(display, extent);
						}
					}
					virtual ev_bool isInitialized()
					{
						if (this->_gRef != NULL && this->m_isInitialized_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isInitialized_void_callback");
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
							return this->ILabelEngine::isInitialized();
						}
					}
					virtual void releaseResources()
					{
						if (this->_gRef != NULL && this->m_releaseResources_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("releaseResources_void_callback");
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
							return this->ILabelEngine::releaseResources();
						}
					}
					virtual const EVString getEngineName()
					{
						if (this->_gRef != NULL && this->m_getEngineName_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getEngineName_void_callback");
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
							const EVString __values1 = values_ch;
							__env->ReleaseStringUTFChars(__values1_j,values_ch);
							#else
							const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
							const EVString __values1 = values_ch;
							__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
							#endif
							return __values1;
						}
						else
						{
							return this->ILabelEngine::getEngineName();
						}
					}
					virtual void addBarriers(const EarthView::World::Spatial::Geometry::IGeometry* geo)
					{
						if (this->_gRef != NULL && this->m_addBarriers_IGeometry_callback != "" && this->isCustomExtend())
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
							jlong geo_j = (jlong) geo;
							jmethodID __method = __gr->getMethod("addBarriers_IGeometry_callback");
							__env->CallVoidMethod(__obj, __method , geo_j);
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
							return this->ILabelEngine::addBarriers(geo);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JILabelEngineProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ilabelengine_addFeature_1ev_1int32_1ILabelProperty_1IGeometry_1EVString_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint classID_j, jlong labelProperty_j, jlong geo_j, jlong label_j, jint featureID_j)
				{
					ev_int32 classID = (ev_int32) classID_j;
					EarthView::World::Spatial::Display::ILabelProperty *labelProperty = (EarthView::World::Spatial::Display::ILabelProperty*) labelProperty_j;
					const EarthView::World::Spatial::Geometry::IGeometry *geo = (const EarthView::World::Spatial::Geometry::IGeometry*) geo_j;
					EVString &label = *(EVString*) label_j;
					ev_int32 featureID = (ev_int32) featureID_j;
					EarthView::World::Spatial::Display::ILabelEngine *pObjectX = (EarthView::World::Spatial::Display::ILabelEngine*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILabelEngineProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::ILabelEngine::addFeature(classID, labelProperty, geo, label, featureID);
					}
					else
					{
						pObjectX->addFeature(classID, labelProperty, geo, label, featureID);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ilabelengine_register_1addFeature_1ev_1int32_1ILabelProperty_1IGeometry_1EVString_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILabelEngineProxy *pObjectX = (JILabelEngineProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_addFeature_ev_int32_ILabelProperty_IGeometry_EVString_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"addFeature_ev_int32_ILabelProperty_IGeometry_EVString_ev_int32_callback", "(IJJJI)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ilabelengine_addFeature_1ev_1int32_1ILabelProperty_1IGeometry_1EVString_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint classID_j, jlong labelProperty_j, jlong geo_j, jlong label_j, jint featureID_j)
				{
					ev_int32 classID = (ev_int32) classID_j;
					EarthView::World::Spatial::Display::ILabelProperty *labelProperty = (EarthView::World::Spatial::Display::ILabelProperty*) labelProperty_j;
					const EarthView::World::Spatial::Geometry::IGeometry *geo = (const EarthView::World::Spatial::Geometry::IGeometry*) geo_j;
					EVString &label = *(EVString*) label_j;
					ev_int32 featureID = (ev_int32) featureID_j;
					EarthView::World::Spatial::Display::ILabelEngine *pObjectX = (EarthView::World::Spatial::Display::ILabelEngine*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::ILabelEngine::addFeature(classID, labelProperty, geo, label, featureID);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ilabelengine_addFeature_1ev_1int32_1ILabelProperty_1IGeometry_1EVString_1EVString_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint classID_j, jlong labelProperty_j, jlong geo_j, jlong label_numerator_j, jlong label_denominator_j, jint featureID_j)
				{
					ev_int32 classID = (ev_int32) classID_j;
					EarthView::World::Spatial::Display::ILabelProperty *labelProperty = (EarthView::World::Spatial::Display::ILabelProperty*) labelProperty_j;
					const EarthView::World::Spatial::Geometry::IGeometry *geo = (const EarthView::World::Spatial::Geometry::IGeometry*) geo_j;
					EVString &label_numerator = *(EVString*) label_numerator_j;
					EVString &label_denominator = *(EVString*) label_denominator_j;
					ev_int32 featureID = (ev_int32) featureID_j;
					EarthView::World::Spatial::Display::ILabelEngine *pObjectX = (EarthView::World::Spatial::Display::ILabelEngine*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILabelEngineProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::ILabelEngine::addFeature(classID, labelProperty, geo, label_numerator, label_denominator, featureID);
					}
					else
					{
						pObjectX->addFeature(classID, labelProperty, geo, label_numerator, label_denominator, featureID);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ilabelengine_register_1addFeature_1ev_1int32_1ILabelProperty_1IGeometry_1EVString_1EVString_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILabelEngineProxy *pObjectX = (JILabelEngineProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_addFeature_ev_int32_ILabelProperty_IGeometry_EVString_EVString_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"addFeature_ev_int32_ILabelProperty_IGeometry_EVString_EVString_ev_int32_callback", "(IJJJJI)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ilabelengine_addFeature_1ev_1int32_1ILabelProperty_1IGeometry_1EVString_1EVString_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint classID_j, jlong labelProperty_j, jlong geo_j, jlong label_numerator_j, jlong label_denominator_j, jint featureID_j)
				{
					ev_int32 classID = (ev_int32) classID_j;
					EarthView::World::Spatial::Display::ILabelProperty *labelProperty = (EarthView::World::Spatial::Display::ILabelProperty*) labelProperty_j;
					const EarthView::World::Spatial::Geometry::IGeometry *geo = (const EarthView::World::Spatial::Geometry::IGeometry*) geo_j;
					EVString &label_numerator = *(EVString*) label_numerator_j;
					EVString &label_denominator = *(EVString*) label_denominator_j;
					ev_int32 featureID = (ev_int32) featureID_j;
					EarthView::World::Spatial::Display::ILabelEngine *pObjectX = (EarthView::World::Spatial::Display::ILabelEngine*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::ILabelEngine::addFeature(classID, labelProperty, geo, label_numerator, label_denominator, featureID);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Ilabelengine_getLabelElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::ILabelEngine *pObjectX = (EarthView::World::Spatial::Display::ILabelEngine*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILabelEngineProxy))
					{
						EarthView::World::Spatial::Display::CLabelElements* __values1 = pObjectX->EarthView::World::Spatial::Display::ILabelEngine::getLabelElements();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::CLabelElements* __values1 = pObjectX->getLabelElements();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ilabelengine_register_1getLabelElements_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILabelEngineProxy *pObjectX = (JILabelEngineProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getLabelElements_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getLabelElements_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Ilabelengine_getLabelElements_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::ILabelEngine *pObjectX = (EarthView::World::Spatial::Display::ILabelEngine*) pObjXXXX;
					EarthView::World::Spatial::Display::CLabelElements* __values1 = pObjectX->EarthView::World::Spatial::Display::ILabelEngine::getLabelElements();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ilabelengine_initialize_1ISpatialDisplay_1IEnvelope(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong display_j, jlong extent_j)
				{
					const EarthView::World::Spatial::Display::ISpatialDisplay *display = (const EarthView::World::Spatial::Display::ISpatialDisplay*) display_j;
					const EarthView::World::Spatial::Geometry::IEnvelope *extent = (const EarthView::World::Spatial::Geometry::IEnvelope*) extent_j;
					EarthView::World::Spatial::Display::ILabelEngine *pObjectX = (EarthView::World::Spatial::Display::ILabelEngine*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILabelEngineProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::ILabelEngine::initialize(display, extent);
					}
					else
					{
						pObjectX->initialize(display, extent);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ilabelengine_register_1initialize_1ISpatialDisplay_1IEnvelope(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILabelEngineProxy *pObjectX = (JILabelEngineProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_initialize_ISpatialDisplay_IEnvelope_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"initialize_ISpatialDisplay_IEnvelope_callback", "(JJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ilabelengine_initialize_1ISpatialDisplay_1IEnvelope_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong display_j, jlong extent_j)
				{
					const EarthView::World::Spatial::Display::ISpatialDisplay *display = (const EarthView::World::Spatial::Display::ISpatialDisplay*) display_j;
					const EarthView::World::Spatial::Geometry::IEnvelope *extent = (const EarthView::World::Spatial::Geometry::IEnvelope*) extent_j;
					EarthView::World::Spatial::Display::ILabelEngine *pObjectX = (EarthView::World::Spatial::Display::ILabelEngine*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::ILabelEngine::initialize(display, extent);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_Ilabelengine_isInitialized_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::ILabelEngine *pObjectX = (EarthView::World::Spatial::Display::ILabelEngine*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILabelEngineProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::ILabelEngine::isInitialized();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isInitialized();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ilabelengine_register_1isInitialized_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILabelEngineProxy *pObjectX = (JILabelEngineProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isInitialized_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isInitialized_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_Ilabelengine_isInitialized_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::ILabelEngine *pObjectX = (EarthView::World::Spatial::Display::ILabelEngine*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::ILabelEngine::isInitialized();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ilabelengine_releaseResources_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::ILabelEngine *pObjectX = (EarthView::World::Spatial::Display::ILabelEngine*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILabelEngineProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::ILabelEngine::releaseResources();
					}
					else
					{
						pObjectX->releaseResources();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ilabelengine_register_1releaseResources_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILabelEngineProxy *pObjectX = (JILabelEngineProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_releaseResources_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"releaseResources_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ilabelengine_releaseResources_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::ILabelEngine *pObjectX = (EarthView::World::Spatial::Display::ILabelEngine*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::ILabelEngine::releaseResources();
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_display_Ilabelengine_getEngineName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::ILabelEngine *pObjectX = (EarthView::World::Spatial::Display::ILabelEngine*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILabelEngineProxy))
					{
						const EVString __values1 = pObjectX->EarthView::World::Spatial::Display::ILabelEngine::getEngineName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						const EVString __values1 = pObjectX->getEngineName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ilabelengine_register_1getEngineName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILabelEngineProxy *pObjectX = (JILabelEngineProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getEngineName_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getEngineName_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_display_Ilabelengine_getEngineName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::ILabelEngine *pObjectX = (EarthView::World::Spatial::Display::ILabelEngine*) pObjXXXX;
					const EVString __values1 = pObjectX->EarthView::World::Spatial::Display::ILabelEngine::getEngineName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ilabelengine_addBarriers_1IGeometry(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong geo_j)
				{
					const EarthView::World::Spatial::Geometry::IGeometry *geo = (const EarthView::World::Spatial::Geometry::IGeometry*) geo_j;
					EarthView::World::Spatial::Display::ILabelEngine *pObjectX = (EarthView::World::Spatial::Display::ILabelEngine*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILabelEngineProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::ILabelEngine::addBarriers(geo);
					}
					else
					{
						pObjectX->addBarriers(geo);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ilabelengine_register_1addBarriers_1IGeometry(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILabelEngineProxy *pObjectX = (JILabelEngineProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_addBarriers_IGeometry_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"addBarriers_IGeometry_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ilabelengine_addBarriers_1IGeometry_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong geo_j)
				{
					const EarthView::World::Spatial::Geometry::IGeometry *geo = (const EarthView::World::Spatial::Geometry::IGeometry*) geo_j;
					EarthView::World::Spatial::Display::ILabelEngine *pObjectX = (EarthView::World::Spatial::Display::ILabelEngine*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::ILabelEngine::addBarriers(geo);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_SubLabelElement_getRatateAngle_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSubLabelElement *pObjectX = (EarthView::World::Spatial::Display::CSubLabelElement*) pObjXXXX;
					const ev_real64 __values1 = pObjectX->getRatateAngle();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_SubLabelElement_getLabelText_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSubLabelElement *pObjectX = (EarthView::World::Spatial::Display::CSubLabelElement*) pObjXXXX;
					const EVString& __values1 = pObjectX->getLabelText();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_SubLabelElement_getLocation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSubLabelElement *pObjectX = (EarthView::World::Spatial::Display::CSubLabelElement*) pObjXXXX;
					const EarthView::World::Spatial::Geometry::IGeometry* __values1 = pObjectX->getLocation();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SubLabelElement_setRotateAngle_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble angle_j)
				{
					ev_real64 angle = (ev_real64) angle_j;
					EarthView::World::Spatial::Display::CSubLabelElement *pObjectX = (EarthView::World::Spatial::Display::CSubLabelElement*) pObjXXXX;
					pObjectX->setRotateAngle(angle);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SubLabelElement_setLabelText_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring label_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* label_ch = (const ev_char*)__env->GetStringUTFChars(label_j,JNI_FALSE);
					EVString label = label_ch;
					__env->ReleaseStringUTFChars(label_j, (const char *)label_ch);
					#else
					const ev_wchar* label_ch = (const ev_wchar*)__env->GetStringChars(label_j,JNI_FALSE);
					EVString label = label_ch;
					__env->ReleaseStringChars(label_j, (const jchar *)label_ch);
					#endif
					EarthView::World::Spatial::Display::CSubLabelElement *pObjectX = (EarthView::World::Spatial::Display::CSubLabelElement*) pObjXXXX;
					pObjectX->setLabelText(label);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SubLabelElement_setLocation_1IGeometry(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong location_j)
				{
					EarthView::World::Spatial::Geometry::IGeometry *location = (EarthView::World::Spatial::Geometry::IGeometry*) location_j;
					EarthView::World::Spatial::Display::CSubLabelElement *pObjectX = (EarthView::World::Spatial::Display::CSubLabelElement*) pObjXXXX;
					pObjectX->setLocation(location);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_LabelElement_getSubElementCounts_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CLabelElement *pObjectX = (EarthView::World::Spatial::Display::CLabelElement*) pObjXXXX;
					const ev_int32 __values1 = pObjectX->getSubElementCounts();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_LabelElement_addSubElement_1CSubLabelElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_subElement_j)
				{
					EarthView::World::Spatial::Display::CSubLabelElement *ref_subElement = (EarthView::World::Spatial::Display::CSubLabelElement*) ref_subElement_j;
					EarthView::World::Spatial::Display::CLabelElement *pObjectX = (EarthView::World::Spatial::Display::CLabelElement*) pObjXXXX;
					pObjectX->addSubElement(ref_subElement);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_LabelElement_getSubElement_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
				{
					ev_int32 index = (ev_int32) index_j;
					const 					EarthView::World::Spatial::Display::CLabelElement *pObjectX = (EarthView::World::Spatial::Display::CLabelElement*) pObjXXXX;
					const EarthView::World::Spatial::Display::CSubLabelElement* __values1 = pObjectX->getSubElement(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_LabelElement_getPlaced_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CLabelElement *pObjectX = (EarthView::World::Spatial::Display::CLabelElement*) pObjXXXX;
					const ev_bool __values1 = pObjectX->getPlaced();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_LabelElement_getFeatureID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CLabelElement *pObjectX = (EarthView::World::Spatial::Display::CLabelElement*) pObjXXXX;
					const ev_int32 __values1 = pObjectX->getFeatureID();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_LabelElement_getClassID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CLabelElement *pObjectX = (EarthView::World::Spatial::Display::CLabelElement*) pObjXXXX;
					const ev_int32 __values1 = pObjectX->getClassID();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_LabelElement_getLabel_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CLabelElement *pObjectX = (EarthView::World::Spatial::Display::CLabelElement*) pObjXXXX;
					const EVString& __values1 = pObjectX->getLabel();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_LabelElement_setPlaced_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean placed_j)
				{
					ev_bool placed = (ev_bool) placed_j;
					EarthView::World::Spatial::Display::CLabelElement *pObjectX = (EarthView::World::Spatial::Display::CLabelElement*) pObjXXXX;
					pObjectX->setPlaced(placed);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_LabelElement_setFeatureID_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint id_j)
				{
					ev_int32 id = (ev_int32) id_j;
					EarthView::World::Spatial::Display::CLabelElement *pObjectX = (EarthView::World::Spatial::Display::CLabelElement*) pObjXXXX;
					pObjectX->setFeatureID(id);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_LabelElement_setClassID_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint id_j)
				{
					ev_int32 id = (ev_int32) id_j;
					EarthView::World::Spatial::Display::CLabelElement *pObjectX = (EarthView::World::Spatial::Display::CLabelElement*) pObjXXXX;
					pObjectX->setClassID(id);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_LabelElement_setLabel_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring label_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* label_ch = (const ev_char*)__env->GetStringUTFChars(label_j,JNI_FALSE);
					EVString label = label_ch;
					__env->ReleaseStringUTFChars(label_j, (const char *)label_ch);
					#else
					const ev_wchar* label_ch = (const ev_wchar*)__env->GetStringChars(label_j,JNI_FALSE);
					EVString label = label_ch;
					__env->ReleaseStringChars(label_j, (const jchar *)label_ch);
					#endif
					EarthView::World::Spatial::Display::CLabelElement *pObjectX = (EarthView::World::Spatial::Display::CLabelElement*) pObjXXXX;
					pObjectX->setLabel(label);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_LabelElements_getElementCounts_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CLabelElements *pObjectX = (EarthView::World::Spatial::Display::CLabelElements*) pObjXXXX;
					const ev_int32 __values1 = pObjectX->getElementCounts();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_LabelElements_addElement_1CLabelElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_element_j)
				{
					EarthView::World::Spatial::Display::CLabelElement *ref_element = (EarthView::World::Spatial::Display::CLabelElement*) ref_element_j;
					EarthView::World::Spatial::Display::CLabelElements *pObjectX = (EarthView::World::Spatial::Display::CLabelElements*) pObjXXXX;
					pObjectX->addElement(ref_element);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_LabelElements_getElement_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
				{
					ev_int32 index = (ev_int32) index_j;
					const 					EarthView::World::Spatial::Display::CLabelElements *pObjectX = (EarthView::World::Spatial::Display::CLabelElements*) pObjXXXX;
					EarthView::World::Spatial::Display::CLabelElement* __values1 = pObjectX->getElement(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_LabelElements_releaseResources_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CLabelElements *pObjectX = (EarthView::World::Spatial::Display::CLabelElements*) pObjXXXX;
					pObjectX->releaseResources();
				}
			}
		}
	}
}
