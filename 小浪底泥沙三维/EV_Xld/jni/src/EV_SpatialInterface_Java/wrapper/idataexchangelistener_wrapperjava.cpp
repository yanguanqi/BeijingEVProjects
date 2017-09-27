/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/idataexchangelistener.h"
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
			namespace Convertor
			{
				class JIDataExchangeListenerProxy : public EarthView::World::Spatial::Convertor::IDataExchangeListener
				{
				 private:
					EarthView::World::Core::ev_string m_init_ev_uint32_callback;
				public:
					JIDataExchangeListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : IDataExchangeListener(pList)
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
					void register_init_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_init_ev_uint32_callback = __method;
					}
					virtual void init(ev_uint32 totalNum)
					{
						if (this->_gRef != NULL && this->m_init_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong totalNum_j = (jlong) totalNum;
							jmethodID __method = __gr->getMethod("init_ev_uint32_callback");
							__env->CallVoidMethod(__obj, __method , totalNum_j);
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
							return this->IDataExchangeListener::init(totalNum);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JIDataExchangeListenerProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_Idataexchangelistener_init_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong totalNum_j)
				{
					ev_uint32 totalNum = (ev_uint32) totalNum_j;
					EarthView::World::Spatial::Convertor::IDataExchangeListener *pObjectX = (EarthView::World::Spatial::Convertor::IDataExchangeListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIDataExchangeListenerProxy))
					{
						pObjectX->EarthView::World::Spatial::Convertor::IDataExchangeListener::init(totalNum);
					}
					else
					{
						pObjectX->init(totalNum);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_Idataexchangelistener_register_1init_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIDataExchangeListenerProxy *pObjectX = (JIDataExchangeListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_init_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"init_ev_uint32_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_Idataexchangelistener_init_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong totalNum_j)
				{
					ev_uint32 totalNum = (ev_uint32) totalNum_j;
					EarthView::World::Spatial::Convertor::IDataExchangeListener *pObjectX = (EarthView::World::Spatial::Convertor::IDataExchangeListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Convertor::IDataExchangeListener::init(totalNum);
				}
			}
		}
	}
}
