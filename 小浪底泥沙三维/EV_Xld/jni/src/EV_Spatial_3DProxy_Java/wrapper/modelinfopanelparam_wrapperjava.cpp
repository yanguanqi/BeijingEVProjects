/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dproxy/modelinfopanelparam.h"
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
			namespace Atlas
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3DProxy
		{
			namespace ModelDB
			{
				class JCModelInfoPanelParamProxy : public EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam
				{
				 private:
					EarthView::World::Core::ev_string m_setParameter_EVString_EVString_callback;
					EarthView::World::Core::ev_string m_setParameter_EVString_ev_bool_ev_bool_callback;
					EarthView::World::Core::ev_string m_setParameterList_CommonStringPairList_callback;
					EarthView::World::Core::ev_string m_getParameter_EVString_callback;
					EarthView::World::Core::ev_string m_copyParametersTo_CStringInterface_callback;
				public:
					JCModelInfoPanelParamProxy(EarthView::World::Core::CNameValuePairList *pList) : CModelInfoPanelParam(pList)
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
					void register_setParameter_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setParameter_EVString_EVString_callback = __method;
					}
					void register_setParameter_EVString_ev_bool_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setParameter_EVString_ev_bool_ev_bool_callback = __method;
					}
					void register_setParameterList_CommonStringPairList_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setParameterList_CommonStringPairList_callback = __method;
					}
					void register_getParameter_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getParameter_EVString_callback = __method;
					}
					void register_copyParametersTo_CStringInterface_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_copyParametersTo_CStringInterface_callback = __method;
					}
					virtual ev_bool setParameter(const EVString& name, const EVString& value)
					{
						if (this->_gRef != NULL && this->m_setParameter_EVString_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring value_wch = value;
							jstring value_j = __env->NewString((const jchar*)value_wch.getString(), value_wch.size());
							jmethodID __method = __gr->getMethod("setParameter_EVString_EVString_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , name_j, value_j);
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
							return this->CModelInfoPanelParam::setParameter(name, value);
						}
					}
					virtual ev_bool setParameter(const EVString& name, ev_bool readOnly, ev_bool enable)
					{
						if (this->_gRef != NULL && this->m_setParameter_EVString_ev_bool_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean readOnly_j = (jboolean) readOnly;
							jboolean enable_j = (jboolean) enable;
							jmethodID __method = __gr->getMethod("setParameter_EVString_ev_bool_ev_bool_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , name_j, readOnly_j, enable_j);
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
							return this->CModelInfoPanelParam::setParameter(name, readOnly, enable);
						}
					}
					virtual void setParameterList(const EarthView::World::Core::CommonStringPairList& paramList)
					{
						if (this->_gRef != NULL && this->m_setParameterList_CommonStringPairList_callback != "" && this->isCustomExtend())
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
							jlong paramList_j = (jlong) &paramList;
							jmethodID __method = __gr->getMethod("setParameterList_CommonStringPairList_callback");
							__env->CallVoidMethod(__obj, __method , paramList_j);
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
							return this->CModelInfoPanelParam::setParameterList(paramList);
						}
					}
					virtual EVString getParameter(const EVString& name) const
					{
						if (this->_gRef != NULL && this->m_getParameter_EVString_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getParameter_EVString_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , name_j);
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
							return this->CModelInfoPanelParam::getParameter(name);
						}
					}
					virtual void copyParametersTo(EarthView::World::Core::CStringInterface* dest) const
					{
						if (this->_gRef != NULL && this->m_copyParametersTo_CStringInterface_callback != "" && this->isCustomExtend())
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
							jlong dest_j = (jlong) dest;
							jmethodID __method = __gr->getMethod("copyParametersTo_CStringInterface_callback");
							__env->CallVoidMethod(__obj, __method , dest_j);
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
							return this->CModelInfoPanelParam::copyParametersTo(dest);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCModelInfoPanelParamProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_modeldb_ModelInfoPanelParam_setName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
					EVString name = name_ch;
					__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
					#else
					const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					EVString name = name_ch;
					__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
					#endif
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam *pObjectX = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjXXXX;
					pObjectX->setName(name);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3dproxy_modeldb_ModelInfoPanelParam_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam *pObjectX = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjXXXX;
					EVString __values1 = pObjectX->getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_modeldb_ModelInfoPanelParam_setModelLongitude_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble longdegree_j)
				{
					ev_real64 longdegree = (ev_real64) longdegree_j;
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam *pObjectX = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjXXXX;
					pObjectX->setModelLongitude(longdegree);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3dproxy_modeldb_ModelInfoPanelParam_getModelLongitude_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam *pObjectX = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getModelLongitude();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_modeldb_ModelInfoPanelParam_setModelLatitude_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble ladegree_j)
				{
					ev_real64 ladegree = (ev_real64) ladegree_j;
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam *pObjectX = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjXXXX;
					pObjectX->setModelLatitude(ladegree);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3dproxy_modeldb_ModelInfoPanelParam_getModelLatitude_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam *pObjectX = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getModelLatitude();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_modeldb_ModelInfoPanelParam_setAltitude_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble altitude_j)
				{
					ev_real64 altitude = (ev_real64) altitude_j;
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam *pObjectX = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjXXXX;
					pObjectX->setAltitude(altitude);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3dproxy_modeldb_ModelInfoPanelParam_getAltitude_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam *pObjectX = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getAltitude();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_modeldb_ModelInfoPanelParam_setAltitudeMode_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j)
				{
					ev_int32 mode = (ev_int32) mode_j;
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam *pObjectX = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjXXXX;
					pObjectX->setAltitudeMode(mode);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3dproxy_modeldb_ModelInfoPanelParam_getAltitudeMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam *pObjectX = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getAltitudeMode();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_modeldb_ModelInfoPanelParam_setAltitudeValue_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble alvalue_j)
				{
					ev_real64 alvalue = (ev_real64) alvalue_j;
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam *pObjectX = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjXXXX;
					pObjectX->setAltitudeValue(alvalue);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3dproxy_modeldb_ModelInfoPanelParam_getAltitudeValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam *pObjectX = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getAltitudeValue();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_modeldb_ModelInfoPanelParam_setAngleX_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble angleX_j)
				{
					ev_real64 angleX = (ev_real64) angleX_j;
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam *pObjectX = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjXXXX;
					pObjectX->setAngleX(angleX);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3dproxy_modeldb_ModelInfoPanelParam_getAngleX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam *pObjectX = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getAngleX();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_modeldb_ModelInfoPanelParam_setAngleY_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble angleY_j)
				{
					ev_real64 angleY = (ev_real64) angleY_j;
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam *pObjectX = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjXXXX;
					pObjectX->setAngleY(angleY);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3dproxy_modeldb_ModelInfoPanelParam_getAngleY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam *pObjectX = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getAngleY();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_modeldb_ModelInfoPanelParam_setAngleZ_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble angleZ_j)
				{
					ev_real64 angleZ = (ev_real64) angleZ_j;
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam *pObjectX = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjXXXX;
					pObjectX->setAngleZ(angleZ);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3dproxy_modeldb_ModelInfoPanelParam_getAngleZ_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam *pObjectX = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getAngleZ();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_modeldb_ModelInfoPanelParam_setZoomX_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble zoomX_j)
				{
					ev_real64 zoomX = (ev_real64) zoomX_j;
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam *pObjectX = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjXXXX;
					pObjectX->setZoomX(zoomX);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3dproxy_modeldb_ModelInfoPanelParam_getZoomX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam *pObjectX = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getZoomX();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_modeldb_ModelInfoPanelParam_setZoomY_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble zoomY_j)
				{
					ev_real64 zoomY = (ev_real64) zoomY_j;
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam *pObjectX = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjXXXX;
					pObjectX->setZoomY(zoomY);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3dproxy_modeldb_ModelInfoPanelParam_getZoomY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam *pObjectX = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getZoomY();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_modeldb_ModelInfoPanelParam_setZoomZ_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble zoomZ_j)
				{
					ev_real64 zoomZ = (ev_real64) zoomZ_j;
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam *pObjectX = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjXXXX;
					pObjectX->setZoomZ(zoomZ);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3dproxy_modeldb_ModelInfoPanelParam_getZoomZ_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam *pObjectX = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getZoomZ();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_modeldb_ModelInfoPanelParam_setID_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam *pObjectX = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjXXXX;
					pObjectX->setID(id);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_modeldb_ModelInfoPanelParam_getID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam *pObjectX = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getID();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_modeldb_ModelInfoPanelParam_setComponentID_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring id_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* id_ch = (const ev_char*)__env->GetStringUTFChars(id_j,JNI_FALSE);
					const EVString id = id_ch;
					__env->ReleaseStringUTFChars(id_j, (const char *)id_ch);
					#else
					const ev_wchar* id_ch = (const ev_wchar*)__env->GetStringChars(id_j,JNI_FALSE);
					const EVString id = id_ch;
					__env->ReleaseStringChars(id_j, (const jchar *)id_ch);
					#endif
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam *pObjectX = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjXXXX;
					pObjectX->setComponentID(id);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3dproxy_modeldb_ModelInfoPanelParam_getComponentID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam *pObjectX = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjXXXX;
					EVString __values1 = pObjectX->getComponentID();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_modeldb_ModelInfoPanelParam_setLayer_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_layer_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *ref_layer = (EarthView::World::Spatial::Atlas::ILayer*) ref_layer_j;
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam *pObjectX = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjXXXX;
					pObjectX->setLayer(ref_layer);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_modeldb_ModelInfoPanelParam_getLayer_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam *pObjectX = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->getLayer();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_modeldb_ModelInfoPanelParam_register_1setParameter_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCModelInfoPanelParamProxy *pObjectX = (JCModelInfoPanelParamProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setParameter_EVString_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setParameter_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_modeldb_ModelInfoPanelParam_register_1setParameter_1EVString_1ev_1bool_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCModelInfoPanelParamProxy *pObjectX = (JCModelInfoPanelParamProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setParameter_EVString_ev_bool_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setParameter_EVString_ev_bool_ev_bool_callback", "(Ljava/lang/String;ZZ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_modeldb_ModelInfoPanelParam_register_1setParameterList_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCModelInfoPanelParamProxy *pObjectX = (JCModelInfoPanelParamProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setParameterList_CommonStringPairList_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setParameterList_CommonStringPairList_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_modeldb_ModelInfoPanelParam_register_1getParameter_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCModelInfoPanelParamProxy *pObjectX = (JCModelInfoPanelParamProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getParameter_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getParameter_EVString_callback", "(Ljava/lang/String;)Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_modeldb_ModelInfoPanelParam_register_1copyParametersTo_1CStringInterface(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCModelInfoPanelParamProxy *pObjectX = (JCModelInfoPanelParamProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_copyParametersTo_CStringInterface_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"copyParametersTo_CStringInterface_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
			}
		}
	}
}
