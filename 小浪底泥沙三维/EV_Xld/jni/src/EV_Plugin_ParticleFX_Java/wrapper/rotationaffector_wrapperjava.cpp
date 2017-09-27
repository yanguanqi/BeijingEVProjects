/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "plugin_particlefx/rotationaffector.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Plugin
		{
			namespace ParticleFX
			{
				class JCRotationAffectorProxy : public EarthView::World::Plugin::ParticleFX::CRotationAffector
				{
				 private:
					EarthView::World::Core::ev_string m__initParticle_CParticle_callback;
					EarthView::World::Core::ev_string m__affectParticles_CParticleSystem_Real_callback;
					EarthView::World::Core::ev_string m_setParameter_EVString_EVString_callback;
					EarthView::World::Core::ev_string m_setParameter_EVString_ev_bool_ev_bool_callback;
					EarthView::World::Core::ev_string m_setParameterList_CommonStringPairList_callback;
					EarthView::World::Core::ev_string m_getParameter_EVString_callback;
					EarthView::World::Core::ev_string m_copyParametersTo_CStringInterface_callback;
				public:
					JCRotationAffectorProxy(EarthView::World::Core::CNameValuePairList *pList) : CRotationAffector(pList)
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
					void register__initParticle_CParticle_callback(EarthView::World::Core::ev_string __method)
					{
						this->m__initParticle_CParticle_callback = __method;
					}
					void register__affectParticles_CParticleSystem_Real_callback(EarthView::World::Core::ev_string __method)
					{
						this->m__affectParticles_CParticleSystem_Real_callback = __method;
					}
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
					virtual void _initParticle(EarthView::World::Graphic::CParticle* pParticle)
					{
						if (this->_gRef != NULL && this->m__initParticle_CParticle_callback != "" && this->isCustomExtend())
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
							jlong pParticle_j = (jlong) pParticle;
							jmethodID __method = __gr->getMethod("_initParticle_CParticle_callback");
							__env->CallVoidMethod(__obj, __method , pParticle_j);
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
							return this->CRotationAffector::_initParticle(pParticle);
						}
					}
					virtual void _affectParticles(EarthView::World::Graphic::CParticleSystem* pSystem, Real timeElapsed)
					{
						if (this->_gRef != NULL && this->m__affectParticles_CParticleSystem_Real_callback != "" && this->isCustomExtend())
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
							jlong pSystem_j = (jlong) pSystem;
							jdouble timeElapsed_j = (jdouble) timeElapsed;
							jmethodID __method = __gr->getMethod("_affectParticles_CParticleSystem_Real_callback");
							__env->CallVoidMethod(__obj, __method , pSystem_j, timeElapsed_j);
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
							return this->CRotationAffector::_affectParticles(pSystem, timeElapsed);
						}
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
							return this->CRotationAffector::setParameter(name, value);
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
							return this->CRotationAffector::setParameter(name, readOnly, enable);
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
							return this->CRotationAffector::setParameterList(paramList);
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
							return this->CRotationAffector::getParameter(name);
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
							return this->CRotationAffector::copyParametersTo(dest);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCRotationAffectorProxy);
				class JCCmdRotationSpeedRangeStartProxy : public EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeStart
				{
				 private:
					EarthView::World::Core::ev_string m_doGet_void_callback;
					EarthView::World::Core::ev_string m_doSet_void_EVString_callback;
					EarthView::World::Core::ev_string m_trySet_void_EVString_EVString_callback;
				public:
					JCCmdRotationSpeedRangeStartProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdRotationSpeedRangeStart(pList)
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
					void register_doGet_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_doGet_void_callback = __method;
					}
					void register_doSet_void_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_doSet_void_EVString_callback = __method;
					}
					void register_trySet_void_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_trySet_void_EVString_EVString_callback = __method;
					}
					virtual EVString doGet(const void* target) const
					{
						if (this->_gRef != NULL && this->m_doGet_void_callback != "" && this->isCustomExtend())
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
							jlong target_j = (jlong) target;
							jmethodID __method = __gr->getMethod("doGet_void_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , target_j);
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
							return this->CCmdRotationSpeedRangeStart::doGet(target);
						}
					}
					virtual void doSet(void* target, const EVString& val)
					{
						if (this->_gRef != NULL && this->m_doSet_void_EVString_callback != "" && this->isCustomExtend())
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
							jlong target_j = (jlong) target;
							EarthView::World::Core::ev_wstring val_wch = val;
							jstring val_j = __env->NewString((const jchar*)val_wch.getString(), val_wch.size());
							jmethodID __method = __gr->getMethod("doSet_void_EVString_callback");
							__env->CallVoidMethod(__obj, __method , target_j, val_j);
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
							return this->CCmdRotationSpeedRangeStart::doSet(target, val);
						}
					}
					virtual ev_bool trySet(void* target, const EVString& val, EVString& reason)
					{
						if (this->_gRef != NULL && this->m_trySet_void_EVString_EVString_callback != "" && this->isCustomExtend())
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
							jlong target_j = (jlong) target;
							EarthView::World::Core::ev_wstring val_wch = val;
							jstring val_j = __env->NewString((const jchar*)val_wch.getString(), val_wch.size());
							jlong reason_j = (jlong) &reason;
							jmethodID __method = __gr->getMethod("trySet_void_EVString_EVString_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , target_j, val_j, reason_j);
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
							return this->CCmdRotationSpeedRangeStart::trySet(target, val, reason);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCCmdRotationSpeedRangeStartProxy);
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_00024CmdRotationSpeedRangeStart_doGet_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
				{
					const void *target = (const void*) target_j;
					const 					EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeStart *pObjectX = (EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeStart*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCmdRotationSpeedRangeStartProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeStart::doGet(target);
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->doGet(target);
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_00024CmdRotationSpeedRangeStart_register_1doGet_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCmdRotationSpeedRangeStartProxy *pObjectX = (JCCmdRotationSpeedRangeStartProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_doGet_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"doGet_void_callback", "(J)Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_00024CmdRotationSpeedRangeStart_doGet_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
				{
					const void *target = (const void*) target_j;
					const 					EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeStart *pObjectX = (EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeStart*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeStart::doGet(target);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_00024CmdRotationSpeedRangeStart_doSet_1void_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jstring val_j)
				{
					void *target = (void*) target_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* val_ch = (const ev_char*)__env->GetStringUTFChars(val_j,JNI_FALSE);
					const EVString val = val_ch;
					__env->ReleaseStringUTFChars(val_j, (const char *)val_ch);
					#else
					const ev_wchar* val_ch = (const ev_wchar*)__env->GetStringChars(val_j,JNI_FALSE);
					const EVString val = val_ch;
					__env->ReleaseStringChars(val_j, (const jchar *)val_ch);
					#endif
					EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeStart *pObjectX = (EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeStart*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCmdRotationSpeedRangeStartProxy))
					{
						pObjectX->EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeStart::doSet(target, val);
					}
					else
					{
						pObjectX->doSet(target, val);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_00024CmdRotationSpeedRangeStart_register_1doSet_1void_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCmdRotationSpeedRangeStartProxy *pObjectX = (JCCmdRotationSpeedRangeStartProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_doSet_void_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"doSet_void_EVString_callback", "(JLjava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_00024CmdRotationSpeedRangeStart_doSet_1void_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jstring val_j)
				{
					void *target = (void*) target_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* val_ch = (const ev_char*)__env->GetStringUTFChars(val_j,JNI_FALSE);
					const EVString val = val_ch;
					__env->ReleaseStringUTFChars(val_j, (const char *)val_ch);
					#else
					const ev_wchar* val_ch = (const ev_wchar*)__env->GetStringChars(val_j,JNI_FALSE);
					const EVString val = val_ch;
					__env->ReleaseStringChars(val_j, (const jchar *)val_ch);
					#endif
					EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeStart *pObjectX = (EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeStart*) pObjXXXX;
					pObjectX->EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeStart::doSet(target, val);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_00024CmdRotationSpeedRangeStart_register_1trySet_1void_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCmdRotationSpeedRangeStartProxy *pObjectX = (JCCmdRotationSpeedRangeStartProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_trySet_void_EVString_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"trySet_void_EVString_EVString_callback", "(JLjava/lang/String;J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				class JCCmdRotationSpeedRangeEndProxy : public EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeEnd
				{
				 private:
					EarthView::World::Core::ev_string m_doGet_void_callback;
					EarthView::World::Core::ev_string m_doSet_void_EVString_callback;
					EarthView::World::Core::ev_string m_trySet_void_EVString_EVString_callback;
				public:
					JCCmdRotationSpeedRangeEndProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdRotationSpeedRangeEnd(pList)
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
					void register_doGet_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_doGet_void_callback = __method;
					}
					void register_doSet_void_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_doSet_void_EVString_callback = __method;
					}
					void register_trySet_void_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_trySet_void_EVString_EVString_callback = __method;
					}
					virtual EVString doGet(const void* target) const
					{
						if (this->_gRef != NULL && this->m_doGet_void_callback != "" && this->isCustomExtend())
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
							jlong target_j = (jlong) target;
							jmethodID __method = __gr->getMethod("doGet_void_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , target_j);
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
							return this->CCmdRotationSpeedRangeEnd::doGet(target);
						}
					}
					virtual void doSet(void* target, const EVString& val)
					{
						if (this->_gRef != NULL && this->m_doSet_void_EVString_callback != "" && this->isCustomExtend())
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
							jlong target_j = (jlong) target;
							EarthView::World::Core::ev_wstring val_wch = val;
							jstring val_j = __env->NewString((const jchar*)val_wch.getString(), val_wch.size());
							jmethodID __method = __gr->getMethod("doSet_void_EVString_callback");
							__env->CallVoidMethod(__obj, __method , target_j, val_j);
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
							return this->CCmdRotationSpeedRangeEnd::doSet(target, val);
						}
					}
					virtual ev_bool trySet(void* target, const EVString& val, EVString& reason)
					{
						if (this->_gRef != NULL && this->m_trySet_void_EVString_EVString_callback != "" && this->isCustomExtend())
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
							jlong target_j = (jlong) target;
							EarthView::World::Core::ev_wstring val_wch = val;
							jstring val_j = __env->NewString((const jchar*)val_wch.getString(), val_wch.size());
							jlong reason_j = (jlong) &reason;
							jmethodID __method = __gr->getMethod("trySet_void_EVString_EVString_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , target_j, val_j, reason_j);
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
							return this->CCmdRotationSpeedRangeEnd::trySet(target, val, reason);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCCmdRotationSpeedRangeEndProxy);
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_00024CmdRotationSpeedRangeEnd_doGet_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
				{
					const void *target = (const void*) target_j;
					const 					EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeEnd *pObjectX = (EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeEnd*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCmdRotationSpeedRangeEndProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeEnd::doGet(target);
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->doGet(target);
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_00024CmdRotationSpeedRangeEnd_register_1doGet_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCmdRotationSpeedRangeEndProxy *pObjectX = (JCCmdRotationSpeedRangeEndProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_doGet_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"doGet_void_callback", "(J)Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_00024CmdRotationSpeedRangeEnd_doGet_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
				{
					const void *target = (const void*) target_j;
					const 					EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeEnd *pObjectX = (EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeEnd*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeEnd::doGet(target);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_00024CmdRotationSpeedRangeEnd_doSet_1void_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jstring val_j)
				{
					void *target = (void*) target_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* val_ch = (const ev_char*)__env->GetStringUTFChars(val_j,JNI_FALSE);
					const EVString val = val_ch;
					__env->ReleaseStringUTFChars(val_j, (const char *)val_ch);
					#else
					const ev_wchar* val_ch = (const ev_wchar*)__env->GetStringChars(val_j,JNI_FALSE);
					const EVString val = val_ch;
					__env->ReleaseStringChars(val_j, (const jchar *)val_ch);
					#endif
					EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeEnd *pObjectX = (EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeEnd*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCmdRotationSpeedRangeEndProxy))
					{
						pObjectX->EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeEnd::doSet(target, val);
					}
					else
					{
						pObjectX->doSet(target, val);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_00024CmdRotationSpeedRangeEnd_register_1doSet_1void_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCmdRotationSpeedRangeEndProxy *pObjectX = (JCCmdRotationSpeedRangeEndProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_doSet_void_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"doSet_void_EVString_callback", "(JLjava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_00024CmdRotationSpeedRangeEnd_doSet_1void_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jstring val_j)
				{
					void *target = (void*) target_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* val_ch = (const ev_char*)__env->GetStringUTFChars(val_j,JNI_FALSE);
					const EVString val = val_ch;
					__env->ReleaseStringUTFChars(val_j, (const char *)val_ch);
					#else
					const ev_wchar* val_ch = (const ev_wchar*)__env->GetStringChars(val_j,JNI_FALSE);
					const EVString val = val_ch;
					__env->ReleaseStringChars(val_j, (const jchar *)val_ch);
					#endif
					EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeEnd *pObjectX = (EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeEnd*) pObjXXXX;
					pObjectX->EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeEnd::doSet(target, val);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_00024CmdRotationSpeedRangeEnd_register_1trySet_1void_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCmdRotationSpeedRangeEndProxy *pObjectX = (JCCmdRotationSpeedRangeEndProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_trySet_void_EVString_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"trySet_void_EVString_EVString_callback", "(JLjava/lang/String;J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				class JCCmdRotationRangeStartProxy : public EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeStart
				{
				 private:
					EarthView::World::Core::ev_string m_doGet_void_callback;
					EarthView::World::Core::ev_string m_doSet_void_EVString_callback;
					EarthView::World::Core::ev_string m_trySet_void_EVString_EVString_callback;
				public:
					JCCmdRotationRangeStartProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdRotationRangeStart(pList)
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
					void register_doGet_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_doGet_void_callback = __method;
					}
					void register_doSet_void_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_doSet_void_EVString_callback = __method;
					}
					void register_trySet_void_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_trySet_void_EVString_EVString_callback = __method;
					}
					virtual EVString doGet(const void* target) const
					{
						if (this->_gRef != NULL && this->m_doGet_void_callback != "" && this->isCustomExtend())
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
							jlong target_j = (jlong) target;
							jmethodID __method = __gr->getMethod("doGet_void_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , target_j);
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
							return this->CCmdRotationRangeStart::doGet(target);
						}
					}
					virtual void doSet(void* target, const EVString& val)
					{
						if (this->_gRef != NULL && this->m_doSet_void_EVString_callback != "" && this->isCustomExtend())
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
							jlong target_j = (jlong) target;
							EarthView::World::Core::ev_wstring val_wch = val;
							jstring val_j = __env->NewString((const jchar*)val_wch.getString(), val_wch.size());
							jmethodID __method = __gr->getMethod("doSet_void_EVString_callback");
							__env->CallVoidMethod(__obj, __method , target_j, val_j);
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
							return this->CCmdRotationRangeStart::doSet(target, val);
						}
					}
					virtual ev_bool trySet(void* target, const EVString& val, EVString& reason)
					{
						if (this->_gRef != NULL && this->m_trySet_void_EVString_EVString_callback != "" && this->isCustomExtend())
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
							jlong target_j = (jlong) target;
							EarthView::World::Core::ev_wstring val_wch = val;
							jstring val_j = __env->NewString((const jchar*)val_wch.getString(), val_wch.size());
							jlong reason_j = (jlong) &reason;
							jmethodID __method = __gr->getMethod("trySet_void_EVString_EVString_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , target_j, val_j, reason_j);
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
							return this->CCmdRotationRangeStart::trySet(target, val, reason);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCCmdRotationRangeStartProxy);
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_00024CmdRotationRangeStart_doGet_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
				{
					const void *target = (const void*) target_j;
					const 					EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeStart *pObjectX = (EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeStart*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCmdRotationRangeStartProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeStart::doGet(target);
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->doGet(target);
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_00024CmdRotationRangeStart_register_1doGet_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCmdRotationRangeStartProxy *pObjectX = (JCCmdRotationRangeStartProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_doGet_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"doGet_void_callback", "(J)Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_00024CmdRotationRangeStart_doGet_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
				{
					const void *target = (const void*) target_j;
					const 					EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeStart *pObjectX = (EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeStart*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeStart::doGet(target);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_00024CmdRotationRangeStart_doSet_1void_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jstring val_j)
				{
					void *target = (void*) target_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* val_ch = (const ev_char*)__env->GetStringUTFChars(val_j,JNI_FALSE);
					const EVString val = val_ch;
					__env->ReleaseStringUTFChars(val_j, (const char *)val_ch);
					#else
					const ev_wchar* val_ch = (const ev_wchar*)__env->GetStringChars(val_j,JNI_FALSE);
					const EVString val = val_ch;
					__env->ReleaseStringChars(val_j, (const jchar *)val_ch);
					#endif
					EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeStart *pObjectX = (EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeStart*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCmdRotationRangeStartProxy))
					{
						pObjectX->EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeStart::doSet(target, val);
					}
					else
					{
						pObjectX->doSet(target, val);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_00024CmdRotationRangeStart_register_1doSet_1void_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCmdRotationRangeStartProxy *pObjectX = (JCCmdRotationRangeStartProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_doSet_void_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"doSet_void_EVString_callback", "(JLjava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_00024CmdRotationRangeStart_doSet_1void_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jstring val_j)
				{
					void *target = (void*) target_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* val_ch = (const ev_char*)__env->GetStringUTFChars(val_j,JNI_FALSE);
					const EVString val = val_ch;
					__env->ReleaseStringUTFChars(val_j, (const char *)val_ch);
					#else
					const ev_wchar* val_ch = (const ev_wchar*)__env->GetStringChars(val_j,JNI_FALSE);
					const EVString val = val_ch;
					__env->ReleaseStringChars(val_j, (const jchar *)val_ch);
					#endif
					EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeStart *pObjectX = (EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeStart*) pObjXXXX;
					pObjectX->EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeStart::doSet(target, val);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_00024CmdRotationRangeStart_register_1trySet_1void_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCmdRotationRangeStartProxy *pObjectX = (JCCmdRotationRangeStartProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_trySet_void_EVString_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"trySet_void_EVString_EVString_callback", "(JLjava/lang/String;J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				class JCCmdRotationRangeEndProxy : public EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeEnd
				{
				 private:
					EarthView::World::Core::ev_string m_doGet_void_callback;
					EarthView::World::Core::ev_string m_doSet_void_EVString_callback;
					EarthView::World::Core::ev_string m_trySet_void_EVString_EVString_callback;
				public:
					JCCmdRotationRangeEndProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdRotationRangeEnd(pList)
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
					void register_doGet_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_doGet_void_callback = __method;
					}
					void register_doSet_void_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_doSet_void_EVString_callback = __method;
					}
					void register_trySet_void_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_trySet_void_EVString_EVString_callback = __method;
					}
					virtual EVString doGet(const void* target) const
					{
						if (this->_gRef != NULL && this->m_doGet_void_callback != "" && this->isCustomExtend())
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
							jlong target_j = (jlong) target;
							jmethodID __method = __gr->getMethod("doGet_void_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , target_j);
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
							return this->CCmdRotationRangeEnd::doGet(target);
						}
					}
					virtual void doSet(void* target, const EVString& val)
					{
						if (this->_gRef != NULL && this->m_doSet_void_EVString_callback != "" && this->isCustomExtend())
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
							jlong target_j = (jlong) target;
							EarthView::World::Core::ev_wstring val_wch = val;
							jstring val_j = __env->NewString((const jchar*)val_wch.getString(), val_wch.size());
							jmethodID __method = __gr->getMethod("doSet_void_EVString_callback");
							__env->CallVoidMethod(__obj, __method , target_j, val_j);
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
							return this->CCmdRotationRangeEnd::doSet(target, val);
						}
					}
					virtual ev_bool trySet(void* target, const EVString& val, EVString& reason)
					{
						if (this->_gRef != NULL && this->m_trySet_void_EVString_EVString_callback != "" && this->isCustomExtend())
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
							jlong target_j = (jlong) target;
							EarthView::World::Core::ev_wstring val_wch = val;
							jstring val_j = __env->NewString((const jchar*)val_wch.getString(), val_wch.size());
							jlong reason_j = (jlong) &reason;
							jmethodID __method = __gr->getMethod("trySet_void_EVString_EVString_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , target_j, val_j, reason_j);
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
							return this->CCmdRotationRangeEnd::trySet(target, val, reason);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCCmdRotationRangeEndProxy);
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_00024CmdRotationRangeEnd_doGet_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
				{
					const void *target = (const void*) target_j;
					const 					EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeEnd *pObjectX = (EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeEnd*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCmdRotationRangeEndProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeEnd::doGet(target);
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->doGet(target);
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_00024CmdRotationRangeEnd_register_1doGet_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCmdRotationRangeEndProxy *pObjectX = (JCCmdRotationRangeEndProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_doGet_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"doGet_void_callback", "(J)Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_00024CmdRotationRangeEnd_doGet_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
				{
					const void *target = (const void*) target_j;
					const 					EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeEnd *pObjectX = (EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeEnd*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeEnd::doGet(target);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_00024CmdRotationRangeEnd_doSet_1void_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jstring val_j)
				{
					void *target = (void*) target_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* val_ch = (const ev_char*)__env->GetStringUTFChars(val_j,JNI_FALSE);
					const EVString val = val_ch;
					__env->ReleaseStringUTFChars(val_j, (const char *)val_ch);
					#else
					const ev_wchar* val_ch = (const ev_wchar*)__env->GetStringChars(val_j,JNI_FALSE);
					const EVString val = val_ch;
					__env->ReleaseStringChars(val_j, (const jchar *)val_ch);
					#endif
					EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeEnd *pObjectX = (EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeEnd*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCmdRotationRangeEndProxy))
					{
						pObjectX->EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeEnd::doSet(target, val);
					}
					else
					{
						pObjectX->doSet(target, val);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_00024CmdRotationRangeEnd_register_1doSet_1void_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCmdRotationRangeEndProxy *pObjectX = (JCCmdRotationRangeEndProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_doSet_void_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"doSet_void_EVString_callback", "(JLjava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_00024CmdRotationRangeEnd_doSet_1void_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jstring val_j)
				{
					void *target = (void*) target_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* val_ch = (const ev_char*)__env->GetStringUTFChars(val_j,JNI_FALSE);
					const EVString val = val_ch;
					__env->ReleaseStringUTFChars(val_j, (const char *)val_ch);
					#else
					const ev_wchar* val_ch = (const ev_wchar*)__env->GetStringChars(val_j,JNI_FALSE);
					const EVString val = val_ch;
					__env->ReleaseStringChars(val_j, (const jchar *)val_ch);
					#endif
					EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeEnd *pObjectX = (EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeEnd*) pObjXXXX;
					pObjectX->EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeEnd::doSet(target, val);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_00024CmdRotationRangeEnd_register_1trySet_1void_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCmdRotationRangeEndProxy *pObjectX = (JCCmdRotationRangeEndProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_trySet_void_EVString_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"trySet_void_EVString_EVString_callback", "(JLjava/lang/String;J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector__1initParticle_1CParticle(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pParticle_j)
				{
					EarthView::World::Graphic::CParticle *pParticle = (EarthView::World::Graphic::CParticle*) pParticle_j;
					EarthView::World::Plugin::ParticleFX::CRotationAffector *pObjectX = (EarthView::World::Plugin::ParticleFX::CRotationAffector*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRotationAffectorProxy))
					{
						pObjectX->EarthView::World::Plugin::ParticleFX::CRotationAffector::_initParticle(pParticle);
					}
					else
					{
						pObjectX->_initParticle(pParticle);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_register_1_1initParticle_1CParticle(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRotationAffectorProxy *pObjectX = (JCRotationAffectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register__initParticle_CParticle_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"_initParticle_CParticle_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector__1initParticle_1CParticle_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pParticle_j)
				{
					EarthView::World::Graphic::CParticle *pParticle = (EarthView::World::Graphic::CParticle*) pParticle_j;
					EarthView::World::Plugin::ParticleFX::CRotationAffector *pObjectX = (EarthView::World::Plugin::ParticleFX::CRotationAffector*) pObjXXXX;
					pObjectX->EarthView::World::Plugin::ParticleFX::CRotationAffector::_initParticle(pParticle);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector__1affectParticles_1CParticleSystem_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSystem_j, jdouble timeElapsed_j)
				{
					EarthView::World::Graphic::CParticleSystem *pSystem = (EarthView::World::Graphic::CParticleSystem*) pSystem_j;
					Real timeElapsed = (Real) timeElapsed_j;
					EarthView::World::Plugin::ParticleFX::CRotationAffector *pObjectX = (EarthView::World::Plugin::ParticleFX::CRotationAffector*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRotationAffectorProxy))
					{
						pObjectX->EarthView::World::Plugin::ParticleFX::CRotationAffector::_affectParticles(pSystem, timeElapsed);
					}
					else
					{
						pObjectX->_affectParticles(pSystem, timeElapsed);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_register_1_1affectParticles_1CParticleSystem_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRotationAffectorProxy *pObjectX = (JCRotationAffectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register__affectParticles_CParticleSystem_Real_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"_affectParticles_CParticleSystem_Real_callback", "(JD)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector__1affectParticles_1CParticleSystem_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSystem_j, jdouble timeElapsed_j)
				{
					EarthView::World::Graphic::CParticleSystem *pSystem = (EarthView::World::Graphic::CParticleSystem*) pSystem_j;
					Real timeElapsed = (Real) timeElapsed_j;
					EarthView::World::Plugin::ParticleFX::CRotationAffector *pObjectX = (EarthView::World::Plugin::ParticleFX::CRotationAffector*) pObjXXXX;
					pObjectX->EarthView::World::Plugin::ParticleFX::CRotationAffector::_affectParticles(pSystem, timeElapsed);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_setRotationSpeedRangeStart_1CRadian(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong angle_j)
				{
					const EarthView::World::Spatial::Math::CRadian &angle = *(EarthView::World::Spatial::Math::CRadian*) angle_j;
					EarthView::World::Plugin::ParticleFX::CRotationAffector *pObjectX = (EarthView::World::Plugin::ParticleFX::CRotationAffector*) pObjXXXX;
					pObjectX->setRotationSpeedRangeStart(angle);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_setRotationSpeedRangeEnd_1CRadian(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong angle_j)
				{
					const EarthView::World::Spatial::Math::CRadian &angle = *(EarthView::World::Spatial::Math::CRadian*) angle_j;
					EarthView::World::Plugin::ParticleFX::CRotationAffector *pObjectX = (EarthView::World::Plugin::ParticleFX::CRotationAffector*) pObjXXXX;
					pObjectX->setRotationSpeedRangeEnd(angle);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_getRotationSpeedRangeStart_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Plugin::ParticleFX::CRotationAffector *pObjectX = (EarthView::World::Plugin::ParticleFX::CRotationAffector*) pObjXXXX;
					const EarthView::World::Spatial::Math::CRadian& __values1 = pObjectX->getRotationSpeedRangeStart();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_getRotationSpeedRangeEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Plugin::ParticleFX::CRotationAffector *pObjectX = (EarthView::World::Plugin::ParticleFX::CRotationAffector*) pObjXXXX;
					const EarthView::World::Spatial::Math::CRadian& __values1 = pObjectX->getRotationSpeedRangeEnd();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_setRotationRangeStart_1CRadian(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong angle_j)
				{
					const EarthView::World::Spatial::Math::CRadian &angle = *(EarthView::World::Spatial::Math::CRadian*) angle_j;
					EarthView::World::Plugin::ParticleFX::CRotationAffector *pObjectX = (EarthView::World::Plugin::ParticleFX::CRotationAffector*) pObjXXXX;
					pObjectX->setRotationRangeStart(angle);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_setRotationRangeEnd_1CRadian(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong angle_j)
				{
					const EarthView::World::Spatial::Math::CRadian &angle = *(EarthView::World::Spatial::Math::CRadian*) angle_j;
					EarthView::World::Plugin::ParticleFX::CRotationAffector *pObjectX = (EarthView::World::Plugin::ParticleFX::CRotationAffector*) pObjXXXX;
					pObjectX->setRotationRangeEnd(angle);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_getRotationRangeStart_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Plugin::ParticleFX::CRotationAffector *pObjectX = (EarthView::World::Plugin::ParticleFX::CRotationAffector*) pObjXXXX;
					const EarthView::World::Spatial::Math::CRadian& __values1 = pObjectX->getRotationRangeStart();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_getRotationRangeEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Plugin::ParticleFX::CRotationAffector *pObjectX = (EarthView::World::Plugin::ParticleFX::CRotationAffector*) pObjXXXX;
					const EarthView::World::Spatial::Math::CRadian& __values1 = pObjectX->getRotationRangeEnd();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_get_1msRotationSpeedRangeStartCmd_1void(JNIEnv *__env, jclass __clazz)
				{
					jlong __values1_j = (jlong) &(EarthView::World::Plugin::ParticleFX::CRotationAffector::msRotationSpeedRangeStartCmd);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_set_1msRotationSpeedRangeStartCmd_1CCmdRotationSpeedRangeStart(JNIEnv *__env, jclass __clazz, jlong __values1_j)
				{
					EarthView::World::Plugin::ParticleFX::CRotationAffector::msRotationSpeedRangeStartCmd = *(EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeStart*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_get_1msRotationSpeedRangeEndCmd_1void(JNIEnv *__env, jclass __clazz)
				{
					jlong __values1_j = (jlong) &(EarthView::World::Plugin::ParticleFX::CRotationAffector::msRotationSpeedRangeEndCmd);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_set_1msRotationSpeedRangeEndCmd_1CCmdRotationSpeedRangeEnd(JNIEnv *__env, jclass __clazz, jlong __values1_j)
				{
					EarthView::World::Plugin::ParticleFX::CRotationAffector::msRotationSpeedRangeEndCmd = *(EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeEnd*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_get_1msRotationRangeStartCmd_1void(JNIEnv *__env, jclass __clazz)
				{
					jlong __values1_j = (jlong) &(EarthView::World::Plugin::ParticleFX::CRotationAffector::msRotationRangeStartCmd);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_set_1msRotationRangeStartCmd_1CCmdRotationRangeStart(JNIEnv *__env, jclass __clazz, jlong __values1_j)
				{
					EarthView::World::Plugin::ParticleFX::CRotationAffector::msRotationRangeStartCmd = *(EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeStart*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_get_1msRotationRangeEndCmd_1void(JNIEnv *__env, jclass __clazz)
				{
					jlong __values1_j = (jlong) &(EarthView::World::Plugin::ParticleFX::CRotationAffector::msRotationRangeEndCmd);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_set_1msRotationRangeEndCmd_1CCmdRotationRangeEnd(JNIEnv *__env, jclass __clazz, jlong __values1_j)
				{
					EarthView::World::Plugin::ParticleFX::CRotationAffector::msRotationRangeEndCmd = *(EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeEnd*) __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_register_1setParameter_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRotationAffectorProxy *pObjectX = (JCRotationAffectorProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_register_1setParameter_1EVString_1ev_1bool_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRotationAffectorProxy *pObjectX = (JCRotationAffectorProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_register_1setParameterList_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRotationAffectorProxy *pObjectX = (JCRotationAffectorProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_register_1getParameter_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRotationAffectorProxy *pObjectX = (JCRotationAffectorProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_RotationAffector_register_1copyParametersTo_1CStringInterface(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRotationAffectorProxy *pObjectX = (JCRotationAffectorProxy*) pObjXXXX;
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
