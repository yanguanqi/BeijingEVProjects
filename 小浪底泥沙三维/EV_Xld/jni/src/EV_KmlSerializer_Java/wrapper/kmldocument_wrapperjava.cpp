/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "kmlserializer/kmldocument.h"
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
				class JCEnvelopListenerProxy : public EarthView::World::Spatial::Kml::CEnvelopListener
				{
				 private:
					EarthView::World::Core::ev_string m_envelopChangedUpdate_void_callback;
				public:
					JCEnvelopListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CEnvelopListener(pList)
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
					void register_envelopChangedUpdate_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_envelopChangedUpdate_void_callback = __method;
					}
					virtual void envelopChangedUpdate()
					{
						if (this->_gRef != NULL && this->m_envelopChangedUpdate_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("envelopChangedUpdate_void_callback");
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
							return this->CEnvelopListener::envelopChangedUpdate();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCEnvelopListenerProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_EnvelopListener_envelopChangedUpdate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CEnvelopListener *pObjectX = (EarthView::World::Spatial::Kml::CEnvelopListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEnvelopListenerProxy))
					{
						pObjectX->EarthView::World::Spatial::Kml::CEnvelopListener::envelopChangedUpdate();
					}
					else
					{
						pObjectX->envelopChangedUpdate();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_EnvelopListener_register_1envelopChangedUpdate_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEnvelopListenerProxy *pObjectX = (JCEnvelopListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_envelopChangedUpdate_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"envelopChangedUpdate_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_EnvelopListener_envelopChangedUpdate_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CEnvelopListener *pObjectX = (EarthView::World::Spatial::Kml::CEnvelopListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Kml::CEnvelopListener::envelopChangedUpdate();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_GeoObjects_get_1mEnvelope_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::GeoObjects *pObjectX = (EarthView::World::Spatial::Kml::GeoObjects*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mEnvelope);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjects_set_1mEnvelope_1CEnvelope(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial::Kml::GeoObjects *pObjectX = (EarthView::World::Spatial::Kml::GeoObjects*)pObjXXXX;
					pObjectX->mEnvelope = *(EarthView::World::Spatial::Geometry::CEnvelope*) __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjects_addListener_1CEnvelopListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_listener_j)
				{
					EarthView::World::Spatial::Kml::CEnvelopListener *ref_listener = (EarthView::World::Spatial::Kml::CEnvelopListener*) ref_listener_j;
					EarthView::World::Spatial::Kml::GeoObjects *pObjectX = (EarthView::World::Spatial::Kml::GeoObjects*) pObjXXXX;
					pObjectX->addListener(ref_listener);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjects_removeListener_1CEnvelopListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
				{
					EarthView::World::Spatial::Kml::CEnvelopListener *listener = (EarthView::World::Spatial::Kml::CEnvelopListener*) listener_j;
					EarthView::World::Spatial::Kml::GeoObjects *pObjectX = (EarthView::World::Spatial::Kml::GeoObjects*) pObjXXXX;
					pObjectX->removeListener(listener);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjects_clearAllListener_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::GeoObjects *pObjectX = (EarthView::World::Spatial::Kml::GeoObjects*) pObjXXXX;
					pObjectX->clearAllListener();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjects__1notifyEnvelopChange_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::GeoObjects *pObjectX = (EarthView::World::Spatial::Kml::GeoObjects*) pObjXXXX;
					pObjectX->_notifyEnvelopChange();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjects_push_1back_1CGeoObjectExtension(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_t_j)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtension *&ref_t = *(EarthView::World::Spatial::Kml::CGeoObjectExtension**) ref_t_j;
					EarthView::World::Spatial::Kml::GeoObjects *pObjectX = (EarthView::World::Spatial::Kml::GeoObjects*) pObjXXXX;
					pObjectX->push_back(ref_t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjects_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::Spatial::Kml::GeoObjects *pObjectX = (EarthView::World::Spatial::Kml::GeoObjects*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_GeoObjects_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::GeoObjects *pObjectX = (EarthView::World::Spatial::Kml::GeoObjects*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_GeoObjects_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::World::Spatial::Kml::GeoObjects& pObjectX = *(EarthView::World::Spatial::Kml::GeoObjects*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtension*& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_GeoObjects_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial::Kml::GeoObjects *pObjectX = (EarthView::World::Spatial::Kml::GeoObjects*) pObjXXXX;
					EarthView::World::Spatial::Kml::CGeoObjectExtension*& __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_GeoObjects_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::GeoObjects *pObjectX = (EarthView::World::Spatial::Kml::GeoObjects*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjects_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Spatial::Kml::GeoObjects *pObjectX = (EarthView::World::Spatial::Kml::GeoObjects*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjects_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Spatial::Kml::GeoObjects *pObjectX = (EarthView::World::Spatial::Kml::GeoObjects*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjects_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::GeoObjects *pObjectX = (EarthView::World::Spatial::Kml::GeoObjects*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_GeoObjects_getEnvelopRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::GeoObjects *pObjectX = (EarthView::World::Spatial::Kml::GeoObjects*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CEnvelope __values1 = pObjectX->getEnvelopRef();
					EarthView::World::Spatial::Geometry::CEnvelope *returnvalues = new EarthView::World::Spatial::Geometry::CEnvelope(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjects_computeEnvelop_1CGeoObjectExtension_1CEnvelope(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j, jlong envelop_j)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtension &t = *(EarthView::World::Spatial::Kml::CGeoObjectExtension*) t_j;
					EarthView::World::Spatial::Geometry::CEnvelope &envelop = *(EarthView::World::Spatial::Geometry::CEnvelope*) envelop_j;
					EarthView::World::Spatial::Kml::GeoObjects *pObjectX = (EarthView::World::Spatial::Kml::GeoObjects*) pObjXXXX;
					pObjectX->computeEnvelop(t, envelop);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_Tours_push_1back_1CTour(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_t_j)
				{
					EarthView::World::Spatial::Kml::CTour *&ref_t = *(EarthView::World::Spatial::Kml::CTour**) ref_t_j;
					EarthView::World::Spatial::Kml::CTours *pObjectX = (EarthView::World::Spatial::Kml::CTours*) pObjXXXX;
					pObjectX->push_back(ref_t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_Tours_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CTours *pObjectX = (EarthView::World::Spatial::Kml::CTours*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_Tours_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CTours *pObjectX = (EarthView::World::Spatial::Kml::CTours*) pObjXXXX;
					EarthView::World::Spatial::Kml::CTour*& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_Tours_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CTours *pObjectX = (EarthView::World::Spatial::Kml::CTours*) pObjXXXX;
					EarthView::World::Spatial::Kml::CTour*& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_Tours_insert_1ev_1uint32_1CTour(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong ref_t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial::Kml::CTour *&ref_t = *(EarthView::World::Spatial::Kml::CTour**) ref_t_j;
					EarthView::World::Spatial::Kml::CTours *pObjectX = (EarthView::World::Spatial::Kml::CTours*) pObjXXXX;
					pObjectX->insert(pos, ref_t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_Tours_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::Spatial::Kml::CTours *pObjectX = (EarthView::World::Spatial::Kml::CTours*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_Tours_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CTours *pObjectX = (EarthView::World::Spatial::Kml::CTours*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_Tours_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::World::Spatial::Kml::CTours& pObjectX = *(EarthView::World::Spatial::Kml::CTours*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial::Kml::CTour*& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_Tours_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial::Kml::CTours *pObjectX = (EarthView::World::Spatial::Kml::CTours*) pObjXXXX;
					EarthView::World::Spatial::Kml::CTour*& __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_Tours_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CTours *pObjectX = (EarthView::World::Spatial::Kml::CTours*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_Tours_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Spatial::Kml::CTours *pObjectX = (EarthView::World::Spatial::Kml::CTours*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_Tours_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Spatial::Kml::CTours *pObjectX = (EarthView::World::Spatial::Kml::CTours*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_Tours_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CTours *pObjectX = (EarthView::World::Spatial::Kml::CTours*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLinks_push_1back_1CKmlNetworkLink(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_t_j)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *&ref_t = *(EarthView::World::Spatial::Kml::CKmlNetworkLink**) ref_t_j;
					EarthView::World::Spatial::Kml::CKmlNetworkLinks *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLinks*) pObjXXXX;
					pObjectX->push_back(ref_t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLinks_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLinks *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLinks*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLinks_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLinks *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLinks*) pObjXXXX;
					EarthView::World::Spatial::Kml::CKmlNetworkLink*& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLinks_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLinks *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLinks*) pObjXXXX;
					EarthView::World::Spatial::Kml::CKmlNetworkLink*& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLinks_insert_1ev_1uint32_1CKmlNetworkLink(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong ref_t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial::Kml::CKmlNetworkLink *&ref_t = *(EarthView::World::Spatial::Kml::CKmlNetworkLink**) ref_t_j;
					EarthView::World::Spatial::Kml::CKmlNetworkLinks *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLinks*) pObjXXXX;
					pObjectX->insert(pos, ref_t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLinks_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::Spatial::Kml::CKmlNetworkLinks *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLinks*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLinks_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CKmlNetworkLinks *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLinks*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLinks_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLinks& pObjectX = *(EarthView::World::Spatial::Kml::CKmlNetworkLinks*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial::Kml::CKmlNetworkLink*& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLinks_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial::Kml::CKmlNetworkLinks *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLinks*) pObjXXXX;
					EarthView::World::Spatial::Kml::CKmlNetworkLink*& __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLinks_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CKmlNetworkLinks *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLinks*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLinks_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Spatial::Kml::CKmlNetworkLinks *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLinks*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLinks_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Spatial::Kml::CKmlNetworkLinks *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLinks*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLinks_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLinks *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLinks*) pObjXXXX;
					pObjectX->clear();
				}
				class JCKmlDocumentProxy : public EarthView::World::Spatial::Kml::CKmlDocument
				{
				 private:
					EarthView::World::Core::ev_string m_envelopChangedUpdate_void_callback;
				public:
					JCKmlDocumentProxy(EarthView::World::Core::CNameValuePairList *pList) : CKmlDocument(pList)
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
					void register_envelopChangedUpdate_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_envelopChangedUpdate_void_callback = __method;
					}
					virtual void envelopChangedUpdate()
					{
						if (this->_gRef != NULL && this->m_envelopChangedUpdate_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("envelopChangedUpdate_void_callback");
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
							return this->CKmlDocument::envelopChangedUpdate();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCKmlDocumentProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_get_1WorkQueueState_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->WorkQueueState);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_set_1WorkQueueState_1CKmlWorkQueueState(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					pObjectX->WorkQueueState = (EarthView::World::Spatial::Kml::CKmlWorkQueueState*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_get_1BatchWorkQueueState_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->BatchWorkQueueState);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_set_1BatchWorkQueueState_1CKmlWorkQueueState(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					pObjectX->BatchWorkQueueState = *(EarthView::World::Spatial::Kml::CKmlWorkQueueState*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_get_1DynamicBatchWorkQueueState_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->DynamicBatchWorkQueueState);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_set_1DynamicBatchWorkQueueState_1CKmlWorkQueueState(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					pObjectX->DynamicBatchWorkQueueState = *(EarthView::World::Spatial::Kml::CKmlWorkQueueState*) __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_get_1mKmlPath_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mKmlPath;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_set_1mKmlPath_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->mKmlPath = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_get_1mName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mName;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_set_1mName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->mName = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_get_1mId_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mId;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_set_1mId_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->mId = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_get_1mDesiription_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mDesiription;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_set_1mDesiription_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->mDesiription = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_get_1mIsExpand_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->mIsExpand);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_set_1mIsExpand_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					pObjectX->mIsExpand = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_get_1mIsNetworkLink_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->mIsNetworkLink);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_set_1mIsNetworkLink_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					pObjectX->mIsNetworkLink = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_get_1mIsBelongToNetLink_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->mIsBelongToNetLink);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_set_1mIsBelongToNetLink_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					pObjectX->mIsBelongToNetLink = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_get_1mpParentNetworkLink_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->mpParentNetworkLink);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_set_1mpParentNetworkLink_1CKmlNetworkLink(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					pObjectX->mpParentNetworkLink = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_get_1mpParent_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->mpParent);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_set_1mpParent_1CKmlDocument(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					pObjectX->mpParent = (EarthView::World::Spatial::Kml::CKmlDocument*) __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_get_1m_1isFolder_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->m_isFolder);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_set_1m_1isFolder_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					pObjectX->m_isFolder = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_get_1mRelativeNetworkLink_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->mRelativeNetworkLink);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_set_1mRelativeNetworkLink_1CKmlNetworkLink(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					pObjectX->mRelativeNetworkLink = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_get_1GeoObjectExtAttr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->GeoObjectExtAttr);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_set_1GeoObjectExtAttr_1CGeoObjectExtensionAttribute(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					pObjectX->GeoObjectExtAttr = *(EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_get_1mIsVisible_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->mIsVisible);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_set_1mIsVisible_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					pObjectX->mIsVisible = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_get_1mIsLodPassed_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->mIsLodPassed);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_set_1mIsLodPassed_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					pObjectX->mIsLodPassed = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_get_1mLatitude_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mLatitude);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_set_1mLatitude_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					pObjectX->mLatitude = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_get_1mLongitude_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mLongitude);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_set_1mLongitude_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					pObjectX->mLongitude = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_get_1mHeading_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mHeading);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_set_1mHeading_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					pObjectX->mHeading = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_get_1mTilt_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mTilt);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_set_1mTilt_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					pObjectX->mTilt = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_get_1mAltitude_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mAltitude);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_set_1mAltitude_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					pObjectX->mAltitude = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_get_1mOriAltitude_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mOriAltitude);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_set_1mOriAltitude_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					pObjectX->mOriAltitude = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_get_1mIsDirty_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->mIsDirty);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_set_1mIsDirty_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					pObjectX->mIsDirty = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_get_1mRange_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mRange);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_set_1mRange_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					pObjectX->mRange = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_get_1mIsCameraAltComputed_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->mIsCameraAltComputed);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_set_1mIsCameraAltComputed_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					pObjectX->mIsCameraAltComputed = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_get_1BatchObjects_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->BatchObjects);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_set_1BatchObjects_1CBaseObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					pObjectX->BatchObjects = (EarthView::World::Core::CBaseObject*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_get_1NewBatchObjects_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->NewBatchObjects);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_set_1NewBatchObjects_1CBaseObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					pObjectX->NewBatchObjects = (EarthView::World::Core::CBaseObject*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_get_1RegionBatchObjects_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->RegionBatchObjects);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_set_1RegionBatchObjects_1CBaseObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*)pObjXXXX;
					pObjectX->RegionBatchObjects = (EarthView::World::Core::CBaseObject*) __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_loadDocument_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring kml_uri_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* kml_uri_ch = (const ev_char*)__env->GetStringUTFChars(kml_uri_j,JNI_FALSE);
					const EVString kml_uri = kml_uri_ch;
					__env->ReleaseStringUTFChars(kml_uri_j, (const char *)kml_uri_ch);
					#else
					const ev_wchar* kml_uri_ch = (const ev_wchar*)__env->GetStringChars(kml_uri_j,JNI_FALSE);
					const EVString kml_uri = kml_uri_ch;
					__env->ReleaseStringChars(kml_uri_j, (const jchar *)kml_uri_ch);
					#endif
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjXXXX;
					ev_bool __values1 = pObjectX->loadDocument(kml_uri);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_newDocument_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjXXXX;
					ev_bool __values1 = pObjectX->newDocument();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_save_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring kmlPath_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* kmlPath_ch = (const ev_char*)__env->GetStringUTFChars(kmlPath_j,JNI_FALSE);
					const EVString kmlPath = kmlPath_ch;
					__env->ReleaseStringUTFChars(kmlPath_j, (const char *)kmlPath_ch);
					#else
					const ev_wchar* kmlPath_ch = (const ev_wchar*)__env->GetStringChars(kmlPath_j,JNI_FALSE);
					const EVString kmlPath = kmlPath_ch;
					__env->ReleaseStringChars(kmlPath_j, (const jchar *)kmlPath_ch);
					#endif
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjXXXX;
					ev_bool __values1 = pObjectX->save(kmlPath);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_addSubDocument_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_doc_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *ref_doc = (EarthView::World::Spatial::Kml::CKmlDocument*) ref_doc_j;
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjXXXX;
					ev_bool __values1 = pObjectX->addSubDocument(ref_doc);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_getSubDocumentCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getSubDocumentCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_getSubDocument_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjXXXX;
					EarthView::World::Spatial::Kml::CKmlDocument* __values1 = pObjectX->getSubDocument(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_removeSubDocument_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjXXXX;
					ev_bool __values1 = pObjectX->removeSubDocument(index);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_addNetworkLink_1CKmlNetworkLink(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_doc_j)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *ref_doc = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) ref_doc_j;
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjXXXX;
					ev_bool __values1 = pObjectX->addNetworkLink(ref_doc);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_getNetworkLinkCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getNetworkLinkCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_getNetworkLink_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjXXXX;
					EarthView::World::Spatial::Kml::CKmlNetworkLink* __values1 = pObjectX->getNetworkLink(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_netLinkStateUpdate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjXXXX;
					pObjectX->netLinkStateUpdate();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_removeNetworkLink_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjXXXX;
					ev_bool __values1 = pObjectX->removeNetworkLink(index);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_addGeoObject_1CGeoObjectExtension(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong obj_j)
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtension &obj = *(EarthView::World::Spatial::Kml::CGeoObjectExtension*) obj_j;
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjXXXX;
					ev_bool __values1 = pObjectX->addGeoObject(obj);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_removeGeoObject_1CGeoObjectExtension(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong geoObject_j)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtension *geoObject = (EarthView::World::Spatial::Kml::CGeoObjectExtension*) geoObject_j;
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjXXXX;
					ev_bool __values1 = pObjectX->removeGeoObject(geoObject);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_getGeoObjects_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjXXXX;
					EarthView::World::Spatial::Kml::GeoObjects& __values1 = pObjectX->getGeoObjects();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_getTours_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjXXXX;
					EarthView::World::Spatial::Kml::CTours& __values1 = pObjectX->getTours();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_getmode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjXXXX;
					const ev_uint16 __values1 = pObjectX->getmode();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_envelopChangedUpdate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlDocumentProxy))
					{
						pObjectX->EarthView::World::Spatial::Kml::CKmlDocument::envelopChangedUpdate();
					}
					else
					{
						pObjectX->envelopChangedUpdate();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_register_1envelopChangedUpdate_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlDocumentProxy *pObjectX = (JCKmlDocumentProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_envelopChangedUpdate_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"envelopChangedUpdate_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_envelopChangedUpdate_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Kml::CKmlDocument::envelopChangedUpdate();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_getEnvelopRef_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong hasData_j)
				{
					ev_bool &hasData = *(ev_bool*) hasData_j;
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CEnvelope __values1 = pObjectX->getEnvelopRef(hasData);
					EarthView::World::Spatial::Geometry::CEnvelope *returnvalues = new EarthView::World::Spatial::Geometry::CEnvelope(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_setKmlDocumentRefCount_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_uint32 count = (ev_uint32) count_j;
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjXXXX;
					pObjectX->setKmlDocumentRefCount(count);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_getKmlDocumentRefCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getKmlDocumentRefCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_parseKmzStringToFile_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring kmzPath_j, jstring kml_uri_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* kmzPath_ch = (const ev_char*)__env->GetStringUTFChars(kmzPath_j,JNI_FALSE);
					const EVString kmzPath = kmzPath_ch;
					__env->ReleaseStringUTFChars(kmzPath_j, (const char *)kmzPath_ch);
					#else
					const ev_wchar* kmzPath_ch = (const ev_wchar*)__env->GetStringChars(kmzPath_j,JNI_FALSE);
					const EVString kmzPath = kmzPath_ch;
					__env->ReleaseStringChars(kmzPath_j, (const jchar *)kmzPath_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* kml_uri_ch = (const ev_char*)__env->GetStringUTFChars(kml_uri_j,JNI_FALSE);
					const EVString kml_uri = kml_uri_ch;
					__env->ReleaseStringUTFChars(kml_uri_j, (const char *)kml_uri_ch);
					#else
					const ev_wchar* kml_uri_ch = (const ev_wchar*)__env->GetStringChars(kml_uri_j,JNI_FALSE);
					const EVString kml_uri = kml_uri_ch;
					__env->ReleaseStringChars(kml_uri_j, (const jchar *)kml_uri_ch);
					#endif
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjXXXX;
					pObjectX->parseKmzStringToFile(kmzPath, kml_uri);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_isVisible_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjXXXX;
					ev_bool __values1 = pObjectX->isVisible();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_modifyed_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean val_j)
				{
					ev_bool val = (ev_bool) val_j;
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjXXXX;
					pObjectX->modifyed(val);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_KmlDocument_isModifyed_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pObjectX = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjXXXX;
					ev_bool __values1 = pObjectX->isModifyed();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
		}
	}
}
