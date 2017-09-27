/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "plugin_particlefx/colourfaderaffector2.h"
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
				class JCColourFaderAffector2Proxy : public EarthView::World::Plugin::ParticleFX::CColourFaderAffector2
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
					JCColourFaderAffector2Proxy(EarthView::World::Core::CNameValuePairList *pList) : CColourFaderAffector2(pList)
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
							return this->CColourFaderAffector2::_affectParticles(pSystem, timeElapsed);
						}
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
							return this->CColourFaderAffector2::_initParticle(pParticle);
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
							return this->CColourFaderAffector2::setParameter(name, value);
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
							return this->CColourFaderAffector2::setParameter(name, readOnly, enable);
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
							return this->CColourFaderAffector2::setParameterList(paramList);
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
							return this->CColourFaderAffector2::getParameter(name);
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
							return this->CColourFaderAffector2::copyParametersTo(dest);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCColourFaderAffector2Proxy);
				class JCCmdRedAdjust1Proxy : public EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust1
				{
				 private:
					EarthView::World::Core::ev_string m_doGet_void_callback;
					EarthView::World::Core::ev_string m_doSet_void_EVString_callback;
					EarthView::World::Core::ev_string m_trySet_void_EVString_EVString_callback;
				public:
					JCCmdRedAdjust1Proxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdRedAdjust1(pList)
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
							return this->CCmdRedAdjust1::doGet(target);
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
							return this->CCmdRedAdjust1::doSet(target, val);
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
							return this->CCmdRedAdjust1::trySet(target, val, reason);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCCmdRedAdjust1Proxy);
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdRedAdjust1_doGet_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
				{
					const void *target = (const void*) target_j;
					const 					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust1 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust1*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCmdRedAdjust1Proxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust1::doGet(target);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdRedAdjust1_register_1doGet_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCmdRedAdjust1Proxy *pObjectX = (JCCmdRedAdjust1Proxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdRedAdjust1_doGet_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
				{
					const void *target = (const void*) target_j;
					const 					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust1 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust1*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust1::doGet(target);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdRedAdjust1_doSet_1void_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jstring val_j)
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
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust1 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust1*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCmdRedAdjust1Proxy))
					{
						pObjectX->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust1::doSet(target, val);
					}
					else
					{
						pObjectX->doSet(target, val);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdRedAdjust1_register_1doSet_1void_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCmdRedAdjust1Proxy *pObjectX = (JCCmdRedAdjust1Proxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdRedAdjust1_doSet_1void_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jstring val_j)
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
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust1 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust1*) pObjXXXX;
					pObjectX->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust1::doSet(target, val);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdRedAdjust1_register_1trySet_1void_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCmdRedAdjust1Proxy *pObjectX = (JCCmdRedAdjust1Proxy*) pObjXXXX;
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
				class JCCmdGreenAdjust1Proxy : public EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust1
				{
				 private:
					EarthView::World::Core::ev_string m_doGet_void_callback;
					EarthView::World::Core::ev_string m_doSet_void_EVString_callback;
					EarthView::World::Core::ev_string m_trySet_void_EVString_EVString_callback;
				public:
					JCCmdGreenAdjust1Proxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdGreenAdjust1(pList)
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
							return this->CCmdGreenAdjust1::doGet(target);
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
							return this->CCmdGreenAdjust1::doSet(target, val);
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
							return this->CCmdGreenAdjust1::trySet(target, val, reason);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCCmdGreenAdjust1Proxy);
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdGreenAdjust1_doGet_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
				{
					const void *target = (const void*) target_j;
					const 					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust1 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust1*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCmdGreenAdjust1Proxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust1::doGet(target);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdGreenAdjust1_register_1doGet_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCmdGreenAdjust1Proxy *pObjectX = (JCCmdGreenAdjust1Proxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdGreenAdjust1_doGet_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
				{
					const void *target = (const void*) target_j;
					const 					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust1 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust1*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust1::doGet(target);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdGreenAdjust1_doSet_1void_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jstring val_j)
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
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust1 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust1*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCmdGreenAdjust1Proxy))
					{
						pObjectX->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust1::doSet(target, val);
					}
					else
					{
						pObjectX->doSet(target, val);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdGreenAdjust1_register_1doSet_1void_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCmdGreenAdjust1Proxy *pObjectX = (JCCmdGreenAdjust1Proxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdGreenAdjust1_doSet_1void_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jstring val_j)
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
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust1 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust1*) pObjXXXX;
					pObjectX->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust1::doSet(target, val);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdGreenAdjust1_register_1trySet_1void_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCmdGreenAdjust1Proxy *pObjectX = (JCCmdGreenAdjust1Proxy*) pObjXXXX;
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
				class JCCmdBlueAdjust1Proxy : public EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust1
				{
				 private:
					EarthView::World::Core::ev_string m_doGet_void_callback;
					EarthView::World::Core::ev_string m_doSet_void_EVString_callback;
					EarthView::World::Core::ev_string m_trySet_void_EVString_EVString_callback;
				public:
					JCCmdBlueAdjust1Proxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdBlueAdjust1(pList)
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
							return this->CCmdBlueAdjust1::doGet(target);
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
							return this->CCmdBlueAdjust1::doSet(target, val);
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
							return this->CCmdBlueAdjust1::trySet(target, val, reason);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCCmdBlueAdjust1Proxy);
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdBlueAdjust1_doGet_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
				{
					const void *target = (const void*) target_j;
					const 					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust1 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust1*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCmdBlueAdjust1Proxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust1::doGet(target);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdBlueAdjust1_register_1doGet_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCmdBlueAdjust1Proxy *pObjectX = (JCCmdBlueAdjust1Proxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdBlueAdjust1_doGet_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
				{
					const void *target = (const void*) target_j;
					const 					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust1 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust1*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust1::doGet(target);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdBlueAdjust1_doSet_1void_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jstring val_j)
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
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust1 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust1*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCmdBlueAdjust1Proxy))
					{
						pObjectX->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust1::doSet(target, val);
					}
					else
					{
						pObjectX->doSet(target, val);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdBlueAdjust1_register_1doSet_1void_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCmdBlueAdjust1Proxy *pObjectX = (JCCmdBlueAdjust1Proxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdBlueAdjust1_doSet_1void_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jstring val_j)
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
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust1 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust1*) pObjXXXX;
					pObjectX->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust1::doSet(target, val);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdBlueAdjust1_register_1trySet_1void_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCmdBlueAdjust1Proxy *pObjectX = (JCCmdBlueAdjust1Proxy*) pObjXXXX;
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
				class JCCmdAlphaAdjust1Proxy : public EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust1
				{
				 private:
					EarthView::World::Core::ev_string m_doGet_void_callback;
					EarthView::World::Core::ev_string m_doSet_void_EVString_callback;
					EarthView::World::Core::ev_string m_trySet_void_EVString_EVString_callback;
				public:
					JCCmdAlphaAdjust1Proxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdAlphaAdjust1(pList)
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
							return this->CCmdAlphaAdjust1::doGet(target);
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
							return this->CCmdAlphaAdjust1::doSet(target, val);
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
							return this->CCmdAlphaAdjust1::trySet(target, val, reason);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCCmdAlphaAdjust1Proxy);
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdAlphaAdjust1_doGet_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
				{
					const void *target = (const void*) target_j;
					const 					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust1 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust1*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCmdAlphaAdjust1Proxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust1::doGet(target);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdAlphaAdjust1_register_1doGet_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCmdAlphaAdjust1Proxy *pObjectX = (JCCmdAlphaAdjust1Proxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdAlphaAdjust1_doGet_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
				{
					const void *target = (const void*) target_j;
					const 					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust1 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust1*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust1::doGet(target);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdAlphaAdjust1_doSet_1void_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jstring val_j)
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
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust1 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust1*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCmdAlphaAdjust1Proxy))
					{
						pObjectX->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust1::doSet(target, val);
					}
					else
					{
						pObjectX->doSet(target, val);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdAlphaAdjust1_register_1doSet_1void_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCmdAlphaAdjust1Proxy *pObjectX = (JCCmdAlphaAdjust1Proxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdAlphaAdjust1_doSet_1void_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jstring val_j)
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
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust1 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust1*) pObjXXXX;
					pObjectX->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust1::doSet(target, val);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdAlphaAdjust1_register_1trySet_1void_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCmdAlphaAdjust1Proxy *pObjectX = (JCCmdAlphaAdjust1Proxy*) pObjXXXX;
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
				class JCCmdRedAdjust2Proxy : public EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust2
				{
				 private:
					EarthView::World::Core::ev_string m_doGet_void_callback;
					EarthView::World::Core::ev_string m_doSet_void_EVString_callback;
					EarthView::World::Core::ev_string m_trySet_void_EVString_EVString_callback;
				public:
					JCCmdRedAdjust2Proxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdRedAdjust2(pList)
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
							return this->CCmdRedAdjust2::doGet(target);
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
							return this->CCmdRedAdjust2::doSet(target, val);
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
							return this->CCmdRedAdjust2::trySet(target, val, reason);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCCmdRedAdjust2Proxy);
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdRedAdjust2_doGet_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
				{
					const void *target = (const void*) target_j;
					const 					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust2 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust2*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCmdRedAdjust2Proxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust2::doGet(target);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdRedAdjust2_register_1doGet_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCmdRedAdjust2Proxy *pObjectX = (JCCmdRedAdjust2Proxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdRedAdjust2_doGet_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
				{
					const void *target = (const void*) target_j;
					const 					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust2 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust2*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust2::doGet(target);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdRedAdjust2_doSet_1void_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jstring val_j)
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
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust2 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust2*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCmdRedAdjust2Proxy))
					{
						pObjectX->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust2::doSet(target, val);
					}
					else
					{
						pObjectX->doSet(target, val);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdRedAdjust2_register_1doSet_1void_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCmdRedAdjust2Proxy *pObjectX = (JCCmdRedAdjust2Proxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdRedAdjust2_doSet_1void_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jstring val_j)
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
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust2 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust2*) pObjXXXX;
					pObjectX->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust2::doSet(target, val);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdRedAdjust2_register_1trySet_1void_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCmdRedAdjust2Proxy *pObjectX = (JCCmdRedAdjust2Proxy*) pObjXXXX;
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
				class JCCmdGreenAdjust2Proxy : public EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust2
				{
				 private:
					EarthView::World::Core::ev_string m_doGet_void_callback;
					EarthView::World::Core::ev_string m_doSet_void_EVString_callback;
					EarthView::World::Core::ev_string m_trySet_void_EVString_EVString_callback;
				public:
					JCCmdGreenAdjust2Proxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdGreenAdjust2(pList)
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
							return this->CCmdGreenAdjust2::doGet(target);
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
							return this->CCmdGreenAdjust2::doSet(target, val);
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
							return this->CCmdGreenAdjust2::trySet(target, val, reason);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCCmdGreenAdjust2Proxy);
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdGreenAdjust2_doGet_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
				{
					const void *target = (const void*) target_j;
					const 					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust2 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust2*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCmdGreenAdjust2Proxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust2::doGet(target);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdGreenAdjust2_register_1doGet_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCmdGreenAdjust2Proxy *pObjectX = (JCCmdGreenAdjust2Proxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdGreenAdjust2_doGet_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
				{
					const void *target = (const void*) target_j;
					const 					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust2 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust2*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust2::doGet(target);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdGreenAdjust2_doSet_1void_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jstring val_j)
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
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust2 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust2*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCmdGreenAdjust2Proxy))
					{
						pObjectX->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust2::doSet(target, val);
					}
					else
					{
						pObjectX->doSet(target, val);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdGreenAdjust2_register_1doSet_1void_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCmdGreenAdjust2Proxy *pObjectX = (JCCmdGreenAdjust2Proxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdGreenAdjust2_doSet_1void_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jstring val_j)
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
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust2 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust2*) pObjXXXX;
					pObjectX->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust2::doSet(target, val);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdGreenAdjust2_register_1trySet_1void_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCmdGreenAdjust2Proxy *pObjectX = (JCCmdGreenAdjust2Proxy*) pObjXXXX;
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
				class JCCmdBlueAdjust2Proxy : public EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust2
				{
				 private:
					EarthView::World::Core::ev_string m_doGet_void_callback;
					EarthView::World::Core::ev_string m_doSet_void_EVString_callback;
					EarthView::World::Core::ev_string m_trySet_void_EVString_EVString_callback;
				public:
					JCCmdBlueAdjust2Proxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdBlueAdjust2(pList)
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
							return this->CCmdBlueAdjust2::doGet(target);
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
							return this->CCmdBlueAdjust2::doSet(target, val);
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
							return this->CCmdBlueAdjust2::trySet(target, val, reason);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCCmdBlueAdjust2Proxy);
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdBlueAdjust2_doGet_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
				{
					const void *target = (const void*) target_j;
					const 					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust2 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust2*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCmdBlueAdjust2Proxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust2::doGet(target);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdBlueAdjust2_register_1doGet_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCmdBlueAdjust2Proxy *pObjectX = (JCCmdBlueAdjust2Proxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdBlueAdjust2_doGet_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
				{
					const void *target = (const void*) target_j;
					const 					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust2 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust2*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust2::doGet(target);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdBlueAdjust2_doSet_1void_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jstring val_j)
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
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust2 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust2*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCmdBlueAdjust2Proxy))
					{
						pObjectX->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust2::doSet(target, val);
					}
					else
					{
						pObjectX->doSet(target, val);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdBlueAdjust2_register_1doSet_1void_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCmdBlueAdjust2Proxy *pObjectX = (JCCmdBlueAdjust2Proxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdBlueAdjust2_doSet_1void_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jstring val_j)
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
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust2 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust2*) pObjXXXX;
					pObjectX->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust2::doSet(target, val);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdBlueAdjust2_register_1trySet_1void_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCmdBlueAdjust2Proxy *pObjectX = (JCCmdBlueAdjust2Proxy*) pObjXXXX;
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
				class JCCmdAlphaAdjust2Proxy : public EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust2
				{
				 private:
					EarthView::World::Core::ev_string m_doGet_void_callback;
					EarthView::World::Core::ev_string m_doSet_void_EVString_callback;
					EarthView::World::Core::ev_string m_trySet_void_EVString_EVString_callback;
				public:
					JCCmdAlphaAdjust2Proxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdAlphaAdjust2(pList)
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
							return this->CCmdAlphaAdjust2::doGet(target);
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
							return this->CCmdAlphaAdjust2::doSet(target, val);
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
							return this->CCmdAlphaAdjust2::trySet(target, val, reason);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCCmdAlphaAdjust2Proxy);
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdAlphaAdjust2_doGet_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
				{
					const void *target = (const void*) target_j;
					const 					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust2 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust2*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCmdAlphaAdjust2Proxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust2::doGet(target);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdAlphaAdjust2_register_1doGet_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCmdAlphaAdjust2Proxy *pObjectX = (JCCmdAlphaAdjust2Proxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdAlphaAdjust2_doGet_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
				{
					const void *target = (const void*) target_j;
					const 					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust2 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust2*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust2::doGet(target);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdAlphaAdjust2_doSet_1void_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jstring val_j)
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
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust2 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust2*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCmdAlphaAdjust2Proxy))
					{
						pObjectX->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust2::doSet(target, val);
					}
					else
					{
						pObjectX->doSet(target, val);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdAlphaAdjust2_register_1doSet_1void_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCmdAlphaAdjust2Proxy *pObjectX = (JCCmdAlphaAdjust2Proxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdAlphaAdjust2_doSet_1void_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jstring val_j)
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
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust2 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust2*) pObjXXXX;
					pObjectX->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust2::doSet(target, val);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdAlphaAdjust2_register_1trySet_1void_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCmdAlphaAdjust2Proxy *pObjectX = (JCCmdAlphaAdjust2Proxy*) pObjXXXX;
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
				class JCCmdStateChangeProxy : public EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdStateChange
				{
				 private:
					EarthView::World::Core::ev_string m_doGet_void_callback;
					EarthView::World::Core::ev_string m_doSet_void_EVString_callback;
					EarthView::World::Core::ev_string m_trySet_void_EVString_EVString_callback;
				public:
					JCCmdStateChangeProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdStateChange(pList)
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
							return this->CCmdStateChange::doGet(target);
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
							return this->CCmdStateChange::doSet(target, val);
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
							return this->CCmdStateChange::trySet(target, val, reason);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCCmdStateChangeProxy);
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdStateChange_doGet_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
				{
					const void *target = (const void*) target_j;
					const 					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdStateChange *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdStateChange*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCmdStateChangeProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdStateChange::doGet(target);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdStateChange_register_1doGet_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCmdStateChangeProxy *pObjectX = (JCCmdStateChangeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdStateChange_doGet_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
				{
					const void *target = (const void*) target_j;
					const 					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdStateChange *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdStateChange*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdStateChange::doGet(target);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdStateChange_doSet_1void_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jstring val_j)
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
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdStateChange *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdStateChange*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCmdStateChangeProxy))
					{
						pObjectX->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdStateChange::doSet(target, val);
					}
					else
					{
						pObjectX->doSet(target, val);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdStateChange_register_1doSet_1void_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCmdStateChangeProxy *pObjectX = (JCCmdStateChangeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdStateChange_doSet_1void_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jstring val_j)
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
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdStateChange *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdStateChange*) pObjXXXX;
					pObjectX->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdStateChange::doSet(target, val);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_00024CmdStateChange_register_1trySet_1void_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCmdStateChangeProxy *pObjectX = (JCCmdStateChangeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2__1affectParticles_1CParticleSystem_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSystem_j, jdouble timeElapsed_j)
				{
					EarthView::World::Graphic::CParticleSystem *pSystem = (EarthView::World::Graphic::CParticleSystem*) pSystem_j;
					Real timeElapsed = (Real) timeElapsed_j;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCColourFaderAffector2Proxy))
					{
						pObjectX->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::_affectParticles(pSystem, timeElapsed);
					}
					else
					{
						pObjectX->_affectParticles(pSystem, timeElapsed);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_register_1_1affectParticles_1CParticleSystem_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCColourFaderAffector2Proxy *pObjectX = (JCColourFaderAffector2Proxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2__1affectParticles_1CParticleSystem_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSystem_j, jdouble timeElapsed_j)
				{
					EarthView::World::Graphic::CParticleSystem *pSystem = (EarthView::World::Graphic::CParticleSystem*) pSystem_j;
					Real timeElapsed = (Real) timeElapsed_j;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjXXXX;
					pObjectX->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::_affectParticles(pSystem, timeElapsed);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_setAdjust1_1float_1float_1float_1float(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat red_j, jfloat green_j, jfloat blue_j, jfloat alpha_j)
				{
					float red = (float) red_j;
					float green = (float) green_j;
					float blue = (float) blue_j;
					float alpha = (float) alpha_j;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjXXXX;
					pObjectX->setAdjust1(red, green, blue, alpha);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_setAdjust1_1float_1float_1float(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat red_j, jfloat green_j, jfloat blue_j)
				{
					float red = (float) red_j;
					float green = (float) green_j;
					float blue = (float) blue_j;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjXXXX;
					pObjectX->setAdjust1(red, green, blue);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_setAdjust2_1float_1float_1float_1float(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat red_j, jfloat green_j, jfloat blue_j, jfloat alpha_j)
				{
					float red = (float) red_j;
					float green = (float) green_j;
					float blue = (float) blue_j;
					float alpha = (float) alpha_j;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjXXXX;
					pObjectX->setAdjust2(red, green, blue, alpha);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_setAdjust2_1float_1float_1float(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat red_j, jfloat green_j, jfloat blue_j)
				{
					float red = (float) red_j;
					float green = (float) green_j;
					float blue = (float) blue_j;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjXXXX;
					pObjectX->setAdjust2(red, green, blue);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_setRedAdjust1_1float(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat red_j)
				{
					float red = (float) red_j;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjXXXX;
					pObjectX->setRedAdjust1(red);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_setRedAdjust2_1float(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat red_j)
				{
					float red = (float) red_j;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjXXXX;
					pObjectX->setRedAdjust2(red);
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_getRedAdjust1_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjXXXX;
					float __values1 = pObjectX->getRedAdjust1();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_getRedAdjust2_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjXXXX;
					float __values1 = pObjectX->getRedAdjust2();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_setGreenAdjust1_1float(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat green_j)
				{
					float green = (float) green_j;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjXXXX;
					pObjectX->setGreenAdjust1(green);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_setGreenAdjust2_1float(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat green_j)
				{
					float green = (float) green_j;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjXXXX;
					pObjectX->setGreenAdjust2(green);
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_getGreenAdjust1_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjXXXX;
					float __values1 = pObjectX->getGreenAdjust1();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_getGreenAdjust2_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjXXXX;
					float __values1 = pObjectX->getGreenAdjust2();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_setBlueAdjust1_1float(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat blue_j)
				{
					float blue = (float) blue_j;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjXXXX;
					pObjectX->setBlueAdjust1(blue);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_setBlueAdjust2_1float(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat blue_j)
				{
					float blue = (float) blue_j;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjXXXX;
					pObjectX->setBlueAdjust2(blue);
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_getBlueAdjust1_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjXXXX;
					float __values1 = pObjectX->getBlueAdjust1();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_getBlueAdjust2_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjXXXX;
					float __values1 = pObjectX->getBlueAdjust2();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_setAlphaAdjust1_1float(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat alpha_j)
				{
					float alpha = (float) alpha_j;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjXXXX;
					pObjectX->setAlphaAdjust1(alpha);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_setAlphaAdjust2_1float(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat alpha_j)
				{
					float alpha = (float) alpha_j;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjXXXX;
					pObjectX->setAlphaAdjust2(alpha);
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_getAlphaAdjust1_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjXXXX;
					float __values1 = pObjectX->getAlphaAdjust1();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_getAlphaAdjust2_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjXXXX;
					float __values1 = pObjectX->getAlphaAdjust2();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_setStateChange_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble NewValue_j)
				{
					Real NewValue = (Real) NewValue_j;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjXXXX;
					pObjectX->setStateChange(NewValue);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_getStateChange_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2 *pObjectX = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjXXXX;
					Real __values1 = pObjectX->getStateChange();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_get_1msRedCmd1_1void(JNIEnv *__env, jclass __clazz)
				{
					jlong __values1_j = (jlong) &(EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::msRedCmd1);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_set_1msRedCmd1_1CCmdRedAdjust1(JNIEnv *__env, jclass __clazz, jlong __values1_j)
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::msRedCmd1 = *(EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust1*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_get_1msRedCmd2_1void(JNIEnv *__env, jclass __clazz)
				{
					jlong __values1_j = (jlong) &(EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::msRedCmd2);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_set_1msRedCmd2_1CCmdRedAdjust2(JNIEnv *__env, jclass __clazz, jlong __values1_j)
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::msRedCmd2 = *(EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust2*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_get_1msGreenCmd1_1void(JNIEnv *__env, jclass __clazz)
				{
					jlong __values1_j = (jlong) &(EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::msGreenCmd1);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_set_1msGreenCmd1_1CCmdGreenAdjust1(JNIEnv *__env, jclass __clazz, jlong __values1_j)
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::msGreenCmd1 = *(EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust1*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_get_1msGreenCmd2_1void(JNIEnv *__env, jclass __clazz)
				{
					jlong __values1_j = (jlong) &(EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::msGreenCmd2);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_set_1msGreenCmd2_1CCmdGreenAdjust2(JNIEnv *__env, jclass __clazz, jlong __values1_j)
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::msGreenCmd2 = *(EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust2*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_get_1msBlueCmd1_1void(JNIEnv *__env, jclass __clazz)
				{
					jlong __values1_j = (jlong) &(EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::msBlueCmd1);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_set_1msBlueCmd1_1CCmdBlueAdjust1(JNIEnv *__env, jclass __clazz, jlong __values1_j)
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::msBlueCmd1 = *(EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust1*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_get_1msBlueCmd2_1void(JNIEnv *__env, jclass __clazz)
				{
					jlong __values1_j = (jlong) &(EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::msBlueCmd2);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_set_1msBlueCmd2_1CCmdBlueAdjust2(JNIEnv *__env, jclass __clazz, jlong __values1_j)
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::msBlueCmd2 = *(EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust2*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_get_1msAlphaCmd1_1void(JNIEnv *__env, jclass __clazz)
				{
					jlong __values1_j = (jlong) &(EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::msAlphaCmd1);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_set_1msAlphaCmd1_1CCmdAlphaAdjust1(JNIEnv *__env, jclass __clazz, jlong __values1_j)
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::msAlphaCmd1 = *(EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust1*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_get_1msAlphaCmd2_1void(JNIEnv *__env, jclass __clazz)
				{
					jlong __values1_j = (jlong) &(EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::msAlphaCmd2);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_set_1msAlphaCmd2_1CCmdAlphaAdjust2(JNIEnv *__env, jclass __clazz, jlong __values1_j)
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::msAlphaCmd2 = *(EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust2*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_get_1msStateCmd_1void(JNIEnv *__env, jclass __clazz)
				{
					jlong __values1_j = (jlong) &(EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::msStateCmd);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_set_1msStateCmd_1CCmdStateChange(JNIEnv *__env, jclass __clazz, jlong __values1_j)
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::msStateCmd = *(EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdStateChange*) __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_register_1_1initParticle_1CParticle(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCColourFaderAffector2Proxy *pObjectX = (JCColourFaderAffector2Proxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_register_1setParameter_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCColourFaderAffector2Proxy *pObjectX = (JCColourFaderAffector2Proxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_register_1setParameter_1EVString_1ev_1bool_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCColourFaderAffector2Proxy *pObjectX = (JCColourFaderAffector2Proxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_register_1setParameterList_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCColourFaderAffector2Proxy *pObjectX = (JCColourFaderAffector2Proxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_register_1getParameter_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCColourFaderAffector2Proxy *pObjectX = (JCColourFaderAffector2Proxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_ColourFaderAffector2_register_1copyParametersTo_1CStringInterface(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCColourFaderAffector2Proxy *pObjectX = (JCColourFaderAffector2Proxy*) pObjXXXX;
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
