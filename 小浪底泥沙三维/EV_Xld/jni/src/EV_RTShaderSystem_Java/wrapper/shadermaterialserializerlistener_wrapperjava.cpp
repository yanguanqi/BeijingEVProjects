/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rtshadersystem/shadermaterialserializerlistener.h"
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
			namespace RTShaderSystem
			{
				class JCSGMaterialSerializerListenerProxy : public EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener
				{
				 private:
					EarthView::World::Core::ev_string m_materialEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial_callback;
					EarthView::World::Core::ev_string m_techniqueEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique_callback;
					EarthView::World::Core::ev_string m_passEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CPass_callback;
					EarthView::World::Core::ev_string m_textureUnitStateEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState_callback;
				public:
					JCSGMaterialSerializerListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CSGMaterialSerializerListener(pList)
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
					void register_materialEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_materialEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial_callback = __method;
					}
					void register_techniqueEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_techniqueEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique_callback = __method;
					}
					void register_passEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CPass_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_passEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CPass_callback = __method;
					}
					void register_textureUnitStateEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_textureUnitStateEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState_callback = __method;
					}
					virtual void materialEventRaised(EarthView::World::Graphic::CMaterialSerializer* ser, EarthView::World::Graphic::CMaterialSerializer::SerializeEvent event, ev_bool& skip, const EarthView::World::Graphic::CMaterial* mat)
					{
						if (this->_gRef != NULL && this->m_materialEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial_callback != "" && this->isCustomExtend())
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
							jlong ser_j = (jlong) ser;
							jint event_j = (jint) event;
							jlong skip_j = (jlong) &skip;
							jlong mat_j = (jlong) mat;
							jmethodID __method = __gr->getMethod("materialEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial_callback");
							__env->CallVoidMethod(__obj, __method , ser_j, event_j, skip_j, mat_j);
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
							return this->CSGMaterialSerializerListener::materialEventRaised(ser, event, skip, mat);
						}
					}
					virtual void techniqueEventRaised(EarthView::World::Graphic::CMaterialSerializer* ser, EarthView::World::Graphic::CMaterialSerializer::SerializeEvent event, ev_bool& skip, const EarthView::World::Graphic::CTechnique* tech)
					{
						if (this->_gRef != NULL && this->m_techniqueEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique_callback != "" && this->isCustomExtend())
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
							jlong ser_j = (jlong) ser;
							jint event_j = (jint) event;
							jlong skip_j = (jlong) &skip;
							jlong tech_j = (jlong) tech;
							jmethodID __method = __gr->getMethod("techniqueEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique_callback");
							__env->CallVoidMethod(__obj, __method , ser_j, event_j, skip_j, tech_j);
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
							return this->CSGMaterialSerializerListener::techniqueEventRaised(ser, event, skip, tech);
						}
					}
					virtual void passEventRaised(EarthView::World::Graphic::CMaterialSerializer* ser, EarthView::World::Graphic::CMaterialSerializer::SerializeEvent event, ev_bool& skip, const EarthView::World::Graphic::CPass* tech)
					{
						if (this->_gRef != NULL && this->m_passEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CPass_callback != "" && this->isCustomExtend())
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
							jlong ser_j = (jlong) ser;
							jint event_j = (jint) event;
							jlong skip_j = (jlong) &skip;
							jlong tech_j = (jlong) tech;
							jmethodID __method = __gr->getMethod("passEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CPass_callback");
							__env->CallVoidMethod(__obj, __method , ser_j, event_j, skip_j, tech_j);
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
							return this->CSGMaterialSerializerListener::passEventRaised(ser, event, skip, tech);
						}
					}
					virtual void textureUnitStateEventRaised(EarthView::World::Graphic::CMaterialSerializer* ser, EarthView::World::Graphic::CMaterialSerializer::SerializeEvent event, ev_bool& skip, const EarthView::World::Graphic::CTextureUnitState* textureUnit)
					{
						if (this->_gRef != NULL && this->m_textureUnitStateEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState_callback != "" && this->isCustomExtend())
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
							jlong ser_j = (jlong) ser;
							jint event_j = (jint) event;
							jlong skip_j = (jlong) &skip;
							jlong textureUnit_j = (jlong) textureUnit;
							jmethodID __method = __gr->getMethod("textureUnitStateEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState_callback");
							__env->CallVoidMethod(__obj, __method , ser_j, event_j, skip_j, textureUnit_j);
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
							return this->CSGMaterialSerializerListener::textureUnitStateEventRaised(ser, event, skip, textureUnit);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCSGMaterialSerializerListenerProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Sgmaterialserializerlistener_materialEventRaised_1CMaterialSerializer_1SerializeEvent_1ev_1bool_1CMaterial(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ser_j, jint event_j, jlong skip_j, jlong mat_j)
				{
					EarthView::World::Graphic::CMaterialSerializer *ser = (EarthView::World::Graphic::CMaterialSerializer*) ser_j;
					EarthView::World::Graphic::CMaterialSerializer::SerializeEvent event = (EarthView::World::Graphic::CMaterialSerializer::SerializeEvent) event_j;
					ev_bool &skip = *(ev_bool*) skip_j;
					const EarthView::World::Graphic::CMaterial *mat = (const EarthView::World::Graphic::CMaterial*) mat_j;
					EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSGMaterialSerializerListenerProxy))
					{
						pObjectX->EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener::materialEventRaised(ser, event, skip, mat);
					}
					else
					{
						pObjectX->materialEventRaised(ser, event, skip, mat);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Sgmaterialserializerlistener_register_1materialEventRaised_1CMaterialSerializer_1SerializeEvent_1ev_1bool_1CMaterial(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSGMaterialSerializerListenerProxy *pObjectX = (JCSGMaterialSerializerListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_materialEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"materialEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial_callback", "(JIJJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Sgmaterialserializerlistener_materialEventRaised_1CMaterialSerializer_1SerializeEvent_1ev_1bool_1CMaterial_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ser_j, jint event_j, jlong skip_j, jlong mat_j)
				{
					EarthView::World::Graphic::CMaterialSerializer *ser = (EarthView::World::Graphic::CMaterialSerializer*) ser_j;
					EarthView::World::Graphic::CMaterialSerializer::SerializeEvent event = (EarthView::World::Graphic::CMaterialSerializer::SerializeEvent) event_j;
					ev_bool &skip = *(ev_bool*) skip_j;
					const EarthView::World::Graphic::CMaterial *mat = (const EarthView::World::Graphic::CMaterial*) mat_j;
					EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener*) pObjXXXX;
					pObjectX->EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener::materialEventRaised(ser, event, skip, mat);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Sgmaterialserializerlistener_techniqueEventRaised_1CMaterialSerializer_1SerializeEvent_1ev_1bool_1CTechnique(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ser_j, jint event_j, jlong skip_j, jlong tech_j)
				{
					EarthView::World::Graphic::CMaterialSerializer *ser = (EarthView::World::Graphic::CMaterialSerializer*) ser_j;
					EarthView::World::Graphic::CMaterialSerializer::SerializeEvent event = (EarthView::World::Graphic::CMaterialSerializer::SerializeEvent) event_j;
					ev_bool &skip = *(ev_bool*) skip_j;
					const EarthView::World::Graphic::CTechnique *tech = (const EarthView::World::Graphic::CTechnique*) tech_j;
					EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSGMaterialSerializerListenerProxy))
					{
						pObjectX->EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener::techniqueEventRaised(ser, event, skip, tech);
					}
					else
					{
						pObjectX->techniqueEventRaised(ser, event, skip, tech);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Sgmaterialserializerlistener_register_1techniqueEventRaised_1CMaterialSerializer_1SerializeEvent_1ev_1bool_1CTechnique(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSGMaterialSerializerListenerProxy *pObjectX = (JCSGMaterialSerializerListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_techniqueEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"techniqueEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique_callback", "(JIJJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Sgmaterialserializerlistener_techniqueEventRaised_1CMaterialSerializer_1SerializeEvent_1ev_1bool_1CTechnique_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ser_j, jint event_j, jlong skip_j, jlong tech_j)
				{
					EarthView::World::Graphic::CMaterialSerializer *ser = (EarthView::World::Graphic::CMaterialSerializer*) ser_j;
					EarthView::World::Graphic::CMaterialSerializer::SerializeEvent event = (EarthView::World::Graphic::CMaterialSerializer::SerializeEvent) event_j;
					ev_bool &skip = *(ev_bool*) skip_j;
					const EarthView::World::Graphic::CTechnique *tech = (const EarthView::World::Graphic::CTechnique*) tech_j;
					EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener*) pObjXXXX;
					pObjectX->EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener::techniqueEventRaised(ser, event, skip, tech);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Sgmaterialserializerlistener_passEventRaised_1CMaterialSerializer_1SerializeEvent_1ev_1bool_1CPass(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ser_j, jint event_j, jlong skip_j, jlong tech_j)
				{
					EarthView::World::Graphic::CMaterialSerializer *ser = (EarthView::World::Graphic::CMaterialSerializer*) ser_j;
					EarthView::World::Graphic::CMaterialSerializer::SerializeEvent event = (EarthView::World::Graphic::CMaterialSerializer::SerializeEvent) event_j;
					ev_bool &skip = *(ev_bool*) skip_j;
					const EarthView::World::Graphic::CPass *tech = (const EarthView::World::Graphic::CPass*) tech_j;
					EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSGMaterialSerializerListenerProxy))
					{
						pObjectX->EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener::passEventRaised(ser, event, skip, tech);
					}
					else
					{
						pObjectX->passEventRaised(ser, event, skip, tech);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Sgmaterialserializerlistener_register_1passEventRaised_1CMaterialSerializer_1SerializeEvent_1ev_1bool_1CPass(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSGMaterialSerializerListenerProxy *pObjectX = (JCSGMaterialSerializerListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_passEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CPass_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"passEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CPass_callback", "(JIJJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Sgmaterialserializerlistener_passEventRaised_1CMaterialSerializer_1SerializeEvent_1ev_1bool_1CPass_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ser_j, jint event_j, jlong skip_j, jlong tech_j)
				{
					EarthView::World::Graphic::CMaterialSerializer *ser = (EarthView::World::Graphic::CMaterialSerializer*) ser_j;
					EarthView::World::Graphic::CMaterialSerializer::SerializeEvent event = (EarthView::World::Graphic::CMaterialSerializer::SerializeEvent) event_j;
					ev_bool &skip = *(ev_bool*) skip_j;
					const EarthView::World::Graphic::CPass *tech = (const EarthView::World::Graphic::CPass*) tech_j;
					EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener*) pObjXXXX;
					pObjectX->EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener::passEventRaised(ser, event, skip, tech);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Sgmaterialserializerlistener_textureUnitStateEventRaised_1CMaterialSerializer_1SerializeEvent_1ev_1bool_1CTextureUnitState(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ser_j, jint event_j, jlong skip_j, jlong textureUnit_j)
				{
					EarthView::World::Graphic::CMaterialSerializer *ser = (EarthView::World::Graphic::CMaterialSerializer*) ser_j;
					EarthView::World::Graphic::CMaterialSerializer::SerializeEvent event = (EarthView::World::Graphic::CMaterialSerializer::SerializeEvent) event_j;
					ev_bool &skip = *(ev_bool*) skip_j;
					const EarthView::World::Graphic::CTextureUnitState *textureUnit = (const EarthView::World::Graphic::CTextureUnitState*) textureUnit_j;
					EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSGMaterialSerializerListenerProxy))
					{
						pObjectX->EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener::textureUnitStateEventRaised(ser, event, skip, textureUnit);
					}
					else
					{
						pObjectX->textureUnitStateEventRaised(ser, event, skip, textureUnit);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Sgmaterialserializerlistener_register_1textureUnitStateEventRaised_1CMaterialSerializer_1SerializeEvent_1ev_1bool_1CTextureUnitState(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSGMaterialSerializerListenerProxy *pObjectX = (JCSGMaterialSerializerListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_textureUnitStateEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"textureUnitStateEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState_callback", "(JIJJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Sgmaterialserializerlistener_textureUnitStateEventRaised_1CMaterialSerializer_1SerializeEvent_1ev_1bool_1CTextureUnitState_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ser_j, jint event_j, jlong skip_j, jlong textureUnit_j)
				{
					EarthView::World::Graphic::CMaterialSerializer *ser = (EarthView::World::Graphic::CMaterialSerializer*) ser_j;
					EarthView::World::Graphic::CMaterialSerializer::SerializeEvent event = (EarthView::World::Graphic::CMaterialSerializer::SerializeEvent) event_j;
					ev_bool &skip = *(ev_bool*) skip_j;
					const EarthView::World::Graphic::CTextureUnitState *textureUnit = (const EarthView::World::Graphic::CTextureUnitState*) textureUnit_j;
					EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener*) pObjXXXX;
					pObjectX->EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener::textureUnitStateEventRaised(ser, event, skip, textureUnit);
				}
			}
		}
	}
}
