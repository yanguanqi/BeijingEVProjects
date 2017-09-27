/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/militaryengine/radarlibrary/msradarobject.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace MilitaryEngine
		{
			namespace RadarLibrary
			{
				class JCMSRadarObjectProxy : public EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject
				{
				 private:
					EarthView::World::Core::ev_string m_ev_clone_EVString_callback;
					EarthView::World::Core::ev_string m_appendToNode_void_callback;
					EarthView::World::Core::ev_string m_appendToNodeWithNorthAngle_Real_Real_Real_CVector3_CDegree_callback;
					EarthView::World::Core::ev_string m_getParentNode_void_callback;
					EarthView::World::Core::ev_string m_detachFromParentNode_void_callback;
					EarthView::World::Core::ev_string m_isIntersected_CRadarObject_callback;
					EarthView::World::Core::ev_string m_isIntersected_CCurve_callback;
					EarthView::World::Core::ev_string m_containsVertex_CPoint_callback;
					EarthView::World::Core::ev_string m_build_void_callback;
					EarthView::World::Core::ev_string m_setVisible_ev_bool_callback;
					EarthView::World::Core::ev_string m_getVisible_void_callback;
					EarthView::World::Core::ev_string m_setEnvelopSolidVisible_ev_bool_callback;
					EarthView::World::Core::ev_string m_getEnvelopSolidVisible_void_callback;
					EarthView::World::Core::ev_string m_setEnvelopFrameVisible_ev_bool_callback;
					EarthView::World::Core::ev_string m_getEnvelopFrameVisible_void_callback;
					EarthView::World::Core::ev_string m_setScannerSolidVisible_ev_bool_callback;
					EarthView::World::Core::ev_string m_getScannerSolidVisible_void_callback;
					EarthView::World::Core::ev_string m_setScannerFrameVisible_ev_bool_callback;
					EarthView::World::Core::ev_string m_getScannerFrameVisible_void_callback;
					EarthView::World::Core::ev_string m_fromFile_EVString_callback;
					EarthView::World::Core::ev_string m_toFile_EVString_callback;
					EarthView::World::Core::ev_string m_getRadarAlertResult_void_callback;
					EarthView::World::Core::ev_string m_setEnvelopSolidMaterial_EVString_EVString_callback;
					EarthView::World::Core::ev_string m_setEnvelopFrameMaterial_EVString_EVString_callback;
					EarthView::World::Core::ev_string m_setScannerSolidMaterial_EVString_EVString_callback;
					EarthView::World::Core::ev_string m_setScannerFrameMaterial_EVString_EVString_callback;
					EarthView::World::Core::ev_string m_getRadarMaterialResourceGroup_void_callback;
					EarthView::World::Core::ev_string m_getEnvelopSolidMaterial_void_callback;
					EarthView::World::Core::ev_string m_getEnvelopFrameMaterial_void_callback;
					EarthView::World::Core::ev_string m_getScannerSolidMaterial_void_callback;
					EarthView::World::Core::ev_string m_getScannerFrameMaterial_void_callback;
					EarthView::World::Core::ev_string m_computeTerrainShade_EVString_EVString_callback;
				public:
					JCMSRadarObjectProxy(EarthView::World::Core::CNameValuePairList *pList) : CMSRadarObject(pList)
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
					void register_ev_clone_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_ev_clone_EVString_callback = __method;
					}
					void register_appendToNode_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_appendToNode_void_callback = __method;
					}
					void register_appendToNodeWithNorthAngle_Real_Real_Real_CVector3_CDegree_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_appendToNodeWithNorthAngle_Real_Real_Real_CVector3_CDegree_callback = __method;
					}
					void register_getParentNode_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getParentNode_void_callback = __method;
					}
					void register_detachFromParentNode_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_detachFromParentNode_void_callback = __method;
					}
					void register_isIntersected_CRadarObject_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isIntersected_CRadarObject_callback = __method;
					}
					void register_isIntersected_CCurve_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isIntersected_CCurve_callback = __method;
					}
					void register_containsVertex_CPoint_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_containsVertex_CPoint_callback = __method;
					}
					void register_build_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_build_void_callback = __method;
					}
					void register_setVisible_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setVisible_ev_bool_callback = __method;
					}
					void register_getVisible_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getVisible_void_callback = __method;
					}
					void register_setEnvelopSolidVisible_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setEnvelopSolidVisible_ev_bool_callback = __method;
					}
					void register_getEnvelopSolidVisible_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getEnvelopSolidVisible_void_callback = __method;
					}
					void register_setEnvelopFrameVisible_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setEnvelopFrameVisible_ev_bool_callback = __method;
					}
					void register_getEnvelopFrameVisible_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getEnvelopFrameVisible_void_callback = __method;
					}
					void register_setScannerSolidVisible_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setScannerSolidVisible_ev_bool_callback = __method;
					}
					void register_getScannerSolidVisible_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getScannerSolidVisible_void_callback = __method;
					}
					void register_setScannerFrameVisible_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setScannerFrameVisible_ev_bool_callback = __method;
					}
					void register_getScannerFrameVisible_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getScannerFrameVisible_void_callback = __method;
					}
					void register_fromFile_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_fromFile_EVString_callback = __method;
					}
					void register_toFile_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toFile_EVString_callback = __method;
					}
					void register_getRadarAlertResult_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getRadarAlertResult_void_callback = __method;
					}
					void register_setEnvelopSolidMaterial_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setEnvelopSolidMaterial_EVString_EVString_callback = __method;
					}
					void register_setEnvelopFrameMaterial_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setEnvelopFrameMaterial_EVString_EVString_callback = __method;
					}
					void register_setScannerSolidMaterial_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setScannerSolidMaterial_EVString_EVString_callback = __method;
					}
					void register_setScannerFrameMaterial_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setScannerFrameMaterial_EVString_EVString_callback = __method;
					}
					void register_getRadarMaterialResourceGroup_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getRadarMaterialResourceGroup_void_callback = __method;
					}
					void register_getEnvelopSolidMaterial_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getEnvelopSolidMaterial_void_callback = __method;
					}
					void register_getEnvelopFrameMaterial_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getEnvelopFrameMaterial_void_callback = __method;
					}
					void register_getScannerSolidMaterial_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getScannerSolidMaterial_void_callback = __method;
					}
					void register_getScannerFrameMaterial_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getScannerFrameMaterial_void_callback = __method;
					}
					void register_computeTerrainShade_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_computeTerrainShade_EVString_EVString_callback = __method;
					}
					virtual EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* clone(const EVString& name)
					{
						if (this->_gRef != NULL && this->m_ev_clone_EVString_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("ev_clone_EVString_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject *__values1 = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) __values1_j;
							if(__values1 != NULL) {
								((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
							}
							return __values1;
						}
						else
						{
							return this->CMSRadarObject::clone(name);
						}
					}
					virtual ev_bool getRadarAlertResult()
					{
						if (this->_gRef != NULL && this->m_getRadarAlertResult_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getRadarAlertResult_void_callback");
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
							return this->CMSRadarObject::getRadarAlertResult();
						}
					}
					virtual EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* computeTerrainShade(const EVString& name, const EVString& nodeName)
					{
						if (this->_gRef != NULL && this->m_computeTerrainShade_EVString_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring nodeName_wch = nodeName;
							jstring nodeName_j = __env->NewString((const jchar*)nodeName_wch.getString(), nodeName_wch.size());
							jmethodID __method = __gr->getMethod("computeTerrainShade_EVString_EVString_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, nodeName_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject *__values1 = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) __values1_j;
							if(__values1 != NULL) {
								((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
							}
							return __values1;
						}
						else
						{
							return this->CMSRadarObject::computeTerrainShade(name, nodeName);
						}
					}
					virtual EarthView::World::Graphic::CSceneNode* appendToNode()
					{
						if (this->_gRef != NULL && this->m_appendToNode_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("appendToNode_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Graphic::CSceneNode *__values1 = (EarthView::World::Graphic::CSceneNode*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CMSRadarObject::appendToNode();
						}
					}
					virtual void appendToNodeWithNorthAngle(const Real& lat, const Real& lon, const Real& alt, const EarthView::World::Spatial::Math::CVector3& localScale, const EarthView::World::Spatial::Math::CDegree& northAngle)
					{
						if (this->_gRef != NULL && this->m_appendToNodeWithNorthAngle_Real_Real_Real_CVector3_CDegree_callback != "" && this->isCustomExtend())
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
							jdouble lat_j = (jdouble) lat;
							jdouble lon_j = (jdouble) lon;
							jdouble alt_j = (jdouble) alt;
							jlong localScale_j = (jlong) &localScale;
							jlong northAngle_j = (jlong) &northAngle;
							jmethodID __method = __gr->getMethod("appendToNodeWithNorthAngle_Real_Real_Real_CVector3_CDegree_callback");
							__env->CallVoidMethod(__obj, __method , lat_j, lon_j, alt_j, localScale_j, northAngle_j);
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
							return this->CMSRadarObject::appendToNodeWithNorthAngle(lat, lon, alt, localScale, northAngle);
						}
					}
					virtual EarthView::World::Graphic::CSceneNode* getParentNode()
					{
						if (this->_gRef != NULL && this->m_getParentNode_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getParentNode_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Graphic::CSceneNode *__values1 = (EarthView::World::Graphic::CSceneNode*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CMSRadarObject::getParentNode();
						}
					}
					virtual void detachFromParentNode()
					{
						if (this->_gRef != NULL && this->m_detachFromParentNode_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("detachFromParentNode_void_callback");
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
							return this->CMSRadarObject::detachFromParentNode();
						}
					}
					virtual bool isIntersected(EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* another)
					{
						if (this->_gRef != NULL && this->m_isIntersected_CRadarObject_callback != "" && this->isCustomExtend())
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
							jlong another_j = (jlong) another;
							jmethodID __method = __gr->getMethod("isIntersected_CRadarObject_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , another_j);
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
							return this->CMSRadarObject::isIntersected(another);
						}
					}
					virtual bool isIntersected(EarthView::World::Spatial::Geometry::CCurve* curve)
					{
						if (this->_gRef != NULL && this->m_isIntersected_CCurve_callback != "" && this->isCustomExtend())
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
							jlong curve_j = (jlong) curve;
							jmethodID __method = __gr->getMethod("isIntersected_CCurve_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , curve_j);
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
							return this->CMSRadarObject::isIntersected(curve);
						}
					}
					virtual EarthView::World::Geometry3D::EVPointWithinType containsVertex(const EarthView::World::Spatial::Geometry::CPoint& point)
					{
						if (this->_gRef != NULL && this->m_containsVertex_CPoint_callback != "" && this->isCustomExtend())
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
							jlong point_j = (jlong) &point;
							jmethodID __method = __gr->getMethod("containsVertex_CPoint_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , point_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Geometry3D::EVPointWithinType __values1 = (EarthView::World::Geometry3D::EVPointWithinType) __values1_j;
							return __values1;
						}
						else
						{
							return this->CMSRadarObject::containsVertex(point);
						}
					}
					virtual void build()
					{
						if (this->_gRef != NULL && this->m_build_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("build_void_callback");
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
							return this->CMSRadarObject::build();
						}
					}
					virtual void setVisible(const ev_bool& value)
					{
						if (this->_gRef != NULL && this->m_setVisible_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean value_j = (jboolean) value;
							jmethodID __method = __gr->getMethod("setVisible_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , value_j);
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
							return this->CMSRadarObject::setVisible(value);
						}
					}
					virtual ev_bool getVisible() const
					{
						if (this->_gRef != NULL && this->m_getVisible_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getVisible_void_callback");
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
							return this->CMSRadarObject::getVisible();
						}
					}
					virtual void setEnvelopSolidVisible(const ev_bool& value)
					{
						if (this->_gRef != NULL && this->m_setEnvelopSolidVisible_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean value_j = (jboolean) value;
							jmethodID __method = __gr->getMethod("setEnvelopSolidVisible_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , value_j);
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
							return this->CMSRadarObject::setEnvelopSolidVisible(value);
						}
					}
					virtual ev_bool getEnvelopSolidVisible() const
					{
						if (this->_gRef != NULL && this->m_getEnvelopSolidVisible_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getEnvelopSolidVisible_void_callback");
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
							return this->CMSRadarObject::getEnvelopSolidVisible();
						}
					}
					virtual void setEnvelopFrameVisible(const ev_bool& value)
					{
						if (this->_gRef != NULL && this->m_setEnvelopFrameVisible_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean value_j = (jboolean) value;
							jmethodID __method = __gr->getMethod("setEnvelopFrameVisible_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , value_j);
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
							return this->CMSRadarObject::setEnvelopFrameVisible(value);
						}
					}
					virtual ev_bool getEnvelopFrameVisible() const
					{
						if (this->_gRef != NULL && this->m_getEnvelopFrameVisible_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getEnvelopFrameVisible_void_callback");
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
							return this->CMSRadarObject::getEnvelopFrameVisible();
						}
					}
					virtual void setScannerSolidVisible(const ev_bool& value)
					{
						if (this->_gRef != NULL && this->m_setScannerSolidVisible_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean value_j = (jboolean) value;
							jmethodID __method = __gr->getMethod("setScannerSolidVisible_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , value_j);
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
							return this->CMSRadarObject::setScannerSolidVisible(value);
						}
					}
					virtual ev_bool getScannerSolidVisible() const
					{
						if (this->_gRef != NULL && this->m_getScannerSolidVisible_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getScannerSolidVisible_void_callback");
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
							return this->CMSRadarObject::getScannerSolidVisible();
						}
					}
					virtual void setScannerFrameVisible(const ev_bool& value)
					{
						if (this->_gRef != NULL && this->m_setScannerFrameVisible_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean value_j = (jboolean) value;
							jmethodID __method = __gr->getMethod("setScannerFrameVisible_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , value_j);
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
							return this->CMSRadarObject::setScannerFrameVisible(value);
						}
					}
					virtual ev_bool getScannerFrameVisible() const
					{
						if (this->_gRef != NULL && this->m_getScannerFrameVisible_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getScannerFrameVisible_void_callback");
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
							return this->CMSRadarObject::getScannerFrameVisible();
						}
					}
					virtual void fromFile(const EVString& fileName)
					{
						if (this->_gRef != NULL && this->m_fromFile_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring fileName_wch = fileName;
							jstring fileName_j = __env->NewString((const jchar*)fileName_wch.getString(), fileName_wch.size());
							jmethodID __method = __gr->getMethod("fromFile_EVString_callback");
							__env->CallVoidMethod(__obj, __method , fileName_j);
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
							return this->CMSRadarObject::fromFile(fileName);
						}
					}
					virtual void toFile(const EVString& fileName)
					{
						if (this->_gRef != NULL && this->m_toFile_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring fileName_wch = fileName;
							jstring fileName_j = __env->NewString((const jchar*)fileName_wch.getString(), fileName_wch.size());
							jmethodID __method = __gr->getMethod("toFile_EVString_callback");
							__env->CallVoidMethod(__obj, __method , fileName_j);
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
							return this->CMSRadarObject::toFile(fileName);
						}
					}
					virtual void setEnvelopSolidMaterial(const EVString& materialName, const EVString& groupName)
					{
						if (this->_gRef != NULL && this->m_setEnvelopSolidMaterial_EVString_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring materialName_wch = materialName;
							jstring materialName_j = __env->NewString((const jchar*)materialName_wch.getString(), materialName_wch.size());
							EarthView::World::Core::ev_wstring groupName_wch = groupName;
							jstring groupName_j = __env->NewString((const jchar*)groupName_wch.getString(), groupName_wch.size());
							jmethodID __method = __gr->getMethod("setEnvelopSolidMaterial_EVString_EVString_callback");
							__env->CallVoidMethod(__obj, __method , materialName_j, groupName_j);
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
							return this->CMSRadarObject::setEnvelopSolidMaterial(materialName, groupName);
						}
					}
					virtual void setEnvelopFrameMaterial(const EVString& materialName, const EVString& groupName)
					{
						if (this->_gRef != NULL && this->m_setEnvelopFrameMaterial_EVString_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring materialName_wch = materialName;
							jstring materialName_j = __env->NewString((const jchar*)materialName_wch.getString(), materialName_wch.size());
							EarthView::World::Core::ev_wstring groupName_wch = groupName;
							jstring groupName_j = __env->NewString((const jchar*)groupName_wch.getString(), groupName_wch.size());
							jmethodID __method = __gr->getMethod("setEnvelopFrameMaterial_EVString_EVString_callback");
							__env->CallVoidMethod(__obj, __method , materialName_j, groupName_j);
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
							return this->CMSRadarObject::setEnvelopFrameMaterial(materialName, groupName);
						}
					}
					virtual void setScannerSolidMaterial(const EVString& materialName, const EVString& groupName)
					{
						if (this->_gRef != NULL && this->m_setScannerSolidMaterial_EVString_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring materialName_wch = materialName;
							jstring materialName_j = __env->NewString((const jchar*)materialName_wch.getString(), materialName_wch.size());
							EarthView::World::Core::ev_wstring groupName_wch = groupName;
							jstring groupName_j = __env->NewString((const jchar*)groupName_wch.getString(), groupName_wch.size());
							jmethodID __method = __gr->getMethod("setScannerSolidMaterial_EVString_EVString_callback");
							__env->CallVoidMethod(__obj, __method , materialName_j, groupName_j);
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
							return this->CMSRadarObject::setScannerSolidMaterial(materialName, groupName);
						}
					}
					virtual void setScannerFrameMaterial(const EVString& materialName, const EVString& groupName)
					{
						if (this->_gRef != NULL && this->m_setScannerFrameMaterial_EVString_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring materialName_wch = materialName;
							jstring materialName_j = __env->NewString((const jchar*)materialName_wch.getString(), materialName_wch.size());
							EarthView::World::Core::ev_wstring groupName_wch = groupName;
							jstring groupName_j = __env->NewString((const jchar*)groupName_wch.getString(), groupName_wch.size());
							jmethodID __method = __gr->getMethod("setScannerFrameMaterial_EVString_EVString_callback");
							__env->CallVoidMethod(__obj, __method , materialName_j, groupName_j);
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
							return this->CMSRadarObject::setScannerFrameMaterial(materialName, groupName);
						}
					}
					virtual EVString getRadarMaterialResourceGroup() const
					{
						if (this->_gRef != NULL && this->m_getRadarMaterialResourceGroup_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getRadarMaterialResourceGroup_void_callback");
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
							return this->CMSRadarObject::getRadarMaterialResourceGroup();
						}
					}
					virtual EVString getEnvelopSolidMaterial() const
					{
						if (this->_gRef != NULL && this->m_getEnvelopSolidMaterial_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getEnvelopSolidMaterial_void_callback");
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
							return this->CMSRadarObject::getEnvelopSolidMaterial();
						}
					}
					virtual EVString getEnvelopFrameMaterial() const
					{
						if (this->_gRef != NULL && this->m_getEnvelopFrameMaterial_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getEnvelopFrameMaterial_void_callback");
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
							return this->CMSRadarObject::getEnvelopFrameMaterial();
						}
					}
					virtual EVString getScannerSolidMaterial() const
					{
						if (this->_gRef != NULL && this->m_getScannerSolidMaterial_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getScannerSolidMaterial_void_callback");
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
							return this->CMSRadarObject::getScannerSolidMaterial();
						}
					}
					virtual EVString getScannerFrameMaterial() const
					{
						if (this->_gRef != NULL && this->m_getScannerFrameMaterial_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getScannerFrameMaterial_void_callback");
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
							return this->CMSRadarObject::getScannerFrameMaterial();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCMSRadarObjectProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Msradarobject_ev_1clone_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMSRadarObjectProxy))
					{
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* __values1 = pObjectX->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject::clone(name);
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* __values1 = pObjectX->clone(name);
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Msradarobject_register_1ev_1clone_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMSRadarObjectProxy *pObjectX = (JCMSRadarObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_ev_clone_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"ev_clone_EVString_callback", "(Ljava/lang/String;)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Msradarobject_ev_1clone_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject*) pObjXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* __values1 = pObjectX->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject::clone(name);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Msradarobject_getRadarAlertResult_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMSRadarObjectProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject::getRadarAlertResult();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->getRadarAlertResult();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Msradarobject_register_1getRadarAlertResult_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMSRadarObjectProxy *pObjectX = (JCMSRadarObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getRadarAlertResult_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getRadarAlertResult_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Msradarobject_getRadarAlertResult_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject::getRadarAlertResult();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Msradarobject_computeTerrainShade_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring nodeName_j)
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
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* nodeName_ch = (const ev_char*)__env->GetStringUTFChars(nodeName_j,JNI_FALSE);
					const EVString nodeName = nodeName_ch;
					__env->ReleaseStringUTFChars(nodeName_j, (const char *)nodeName_ch);
					#else
					const ev_wchar* nodeName_ch = (const ev_wchar*)__env->GetStringChars(nodeName_j,JNI_FALSE);
					const EVString nodeName = nodeName_ch;
					__env->ReleaseStringChars(nodeName_j, (const jchar *)nodeName_ch);
					#endif
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMSRadarObjectProxy))
					{
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* __values1 = pObjectX->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject::computeTerrainShade(name, nodeName);
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* __values1 = pObjectX->computeTerrainShade(name, nodeName);
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Msradarobject_register_1computeTerrainShade_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMSRadarObjectProxy *pObjectX = (JCMSRadarObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_computeTerrainShade_EVString_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"computeTerrainShade_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Msradarobject_computeTerrainShade_1EVString_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring nodeName_j)
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
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* nodeName_ch = (const ev_char*)__env->GetStringUTFChars(nodeName_j,JNI_FALSE);
					const EVString nodeName = nodeName_ch;
					__env->ReleaseStringUTFChars(nodeName_j, (const char *)nodeName_ch);
					#else
					const ev_wchar* nodeName_ch = (const ev_wchar*)__env->GetStringChars(nodeName_j,JNI_FALSE);
					const EVString nodeName = nodeName_ch;
					__env->ReleaseStringChars(nodeName_j, (const jchar *)nodeName_ch);
					#endif
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject*) pObjXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* __values1 = pObjectX->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject::computeTerrainShade(name, nodeName);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Msradarobject_register_1appendToNode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMSRadarObjectProxy *pObjectX = (JCMSRadarObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_appendToNode_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"appendToNode_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Msradarobject_register_1appendToNodeWithNorthAngle_1Real_1Real_1Real_1CVector3_1CDegree(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMSRadarObjectProxy *pObjectX = (JCMSRadarObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_appendToNodeWithNorthAngle_Real_Real_Real_CVector3_CDegree_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"appendToNodeWithNorthAngle_Real_Real_Real_CVector3_CDegree_callback", "(DDDJJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Msradarobject_register_1getParentNode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMSRadarObjectProxy *pObjectX = (JCMSRadarObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getParentNode_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getParentNode_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Msradarobject_register_1detachFromParentNode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMSRadarObjectProxy *pObjectX = (JCMSRadarObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_detachFromParentNode_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"detachFromParentNode_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Msradarobject_register_1isIntersected_1CRadarObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMSRadarObjectProxy *pObjectX = (JCMSRadarObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isIntersected_CRadarObject_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isIntersected_CRadarObject_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Msradarobject_register_1isIntersected_1CCurve(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMSRadarObjectProxy *pObjectX = (JCMSRadarObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isIntersected_CCurve_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isIntersected_CCurve_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Msradarobject_register_1containsVertex_1CPoint(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMSRadarObjectProxy *pObjectX = (JCMSRadarObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_containsVertex_CPoint_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"containsVertex_CPoint_callback", "(J)I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Msradarobject_register_1build_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMSRadarObjectProxy *pObjectX = (JCMSRadarObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_build_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"build_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Msradarobject_register_1setVisible_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMSRadarObjectProxy *pObjectX = (JCMSRadarObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setVisible_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setVisible_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Msradarobject_register_1getVisible_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMSRadarObjectProxy *pObjectX = (JCMSRadarObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getVisible_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getVisible_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Msradarobject_register_1setEnvelopSolidVisible_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMSRadarObjectProxy *pObjectX = (JCMSRadarObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setEnvelopSolidVisible_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setEnvelopSolidVisible_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Msradarobject_register_1getEnvelopSolidVisible_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMSRadarObjectProxy *pObjectX = (JCMSRadarObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getEnvelopSolidVisible_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getEnvelopSolidVisible_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Msradarobject_register_1setEnvelopFrameVisible_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMSRadarObjectProxy *pObjectX = (JCMSRadarObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setEnvelopFrameVisible_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setEnvelopFrameVisible_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Msradarobject_register_1getEnvelopFrameVisible_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMSRadarObjectProxy *pObjectX = (JCMSRadarObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getEnvelopFrameVisible_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getEnvelopFrameVisible_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Msradarobject_register_1setScannerSolidVisible_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMSRadarObjectProxy *pObjectX = (JCMSRadarObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setScannerSolidVisible_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setScannerSolidVisible_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Msradarobject_register_1getScannerSolidVisible_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMSRadarObjectProxy *pObjectX = (JCMSRadarObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getScannerSolidVisible_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getScannerSolidVisible_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Msradarobject_register_1setScannerFrameVisible_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMSRadarObjectProxy *pObjectX = (JCMSRadarObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setScannerFrameVisible_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setScannerFrameVisible_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Msradarobject_register_1getScannerFrameVisible_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMSRadarObjectProxy *pObjectX = (JCMSRadarObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getScannerFrameVisible_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getScannerFrameVisible_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Msradarobject_register_1fromFile_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMSRadarObjectProxy *pObjectX = (JCMSRadarObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_fromFile_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"fromFile_EVString_callback", "(Ljava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Msradarobject_register_1toFile_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMSRadarObjectProxy *pObjectX = (JCMSRadarObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_toFile_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"toFile_EVString_callback", "(Ljava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Msradarobject_register_1setEnvelopSolidMaterial_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMSRadarObjectProxy *pObjectX = (JCMSRadarObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setEnvelopSolidMaterial_EVString_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setEnvelopSolidMaterial_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Msradarobject_register_1setEnvelopFrameMaterial_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMSRadarObjectProxy *pObjectX = (JCMSRadarObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setEnvelopFrameMaterial_EVString_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setEnvelopFrameMaterial_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Msradarobject_register_1setScannerSolidMaterial_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMSRadarObjectProxy *pObjectX = (JCMSRadarObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setScannerSolidMaterial_EVString_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setScannerSolidMaterial_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Msradarobject_register_1setScannerFrameMaterial_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMSRadarObjectProxy *pObjectX = (JCMSRadarObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setScannerFrameMaterial_EVString_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setScannerFrameMaterial_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Msradarobject_register_1getRadarMaterialResourceGroup_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMSRadarObjectProxy *pObjectX = (JCMSRadarObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getRadarMaterialResourceGroup_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getRadarMaterialResourceGroup_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Msradarobject_register_1getEnvelopSolidMaterial_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMSRadarObjectProxy *pObjectX = (JCMSRadarObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getEnvelopSolidMaterial_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getEnvelopSolidMaterial_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Msradarobject_register_1getEnvelopFrameMaterial_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMSRadarObjectProxy *pObjectX = (JCMSRadarObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getEnvelopFrameMaterial_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getEnvelopFrameMaterial_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Msradarobject_register_1getScannerSolidMaterial_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMSRadarObjectProxy *pObjectX = (JCMSRadarObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getScannerSolidMaterial_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getScannerSolidMaterial_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Msradarobject_register_1getScannerFrameMaterial_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMSRadarObjectProxy *pObjectX = (JCMSRadarObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getScannerFrameMaterial_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getScannerFrameMaterial_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
			}
		}
	}
}
