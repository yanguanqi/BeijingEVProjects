/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/shadowcamerasetupplaneoptimal.h"
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
			class JCPlaneOptimalShadowCameraSetupProxy : public EarthView::World::Graphic::CPlaneOptimalShadowCameraSetup
			{
			 private:
				EarthView::World::Core::ev_string m_getShadowCamera_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_callback;
			public:
				JCPlaneOptimalShadowCameraSetupProxy(EarthView::World::Core::CNameValuePairList *pList) : CPlaneOptimalShadowCameraSetup(pList)
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
				void register_getShadowCamera_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getShadowCamera_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_callback = __method;
				}
				virtual void getShadowCamera(const EarthView::World::Graphic::CSceneManager* sm, const EarthView::World::Graphic::CCamera* cam, const EarthView::World::Graphic::CViewport* vp, const EarthView::World::Graphic::CLight* light, EarthView::World::Graphic::CCamera* texCam, ev_size_t iteration) const
				{
					if (this->_gRef != NULL && this->m_getShadowCamera_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong sm_j = (jlong) sm;
						jlong cam_j = (jlong) cam;
						jlong vp_j = (jlong) vp;
						jlong light_j = (jlong) light;
						jlong texCam_j = (jlong) texCam;
						jlong iteration_j = (jlong) iteration;
						jmethodID __method = __gr->getMethod("getShadowCamera_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , sm_j, cam_j, vp_j, light_j, texCam_j, iteration_j);
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
						return this->CPlaneOptimalShadowCameraSetup::getShadowCamera(sm, cam, vp, light, texCam, iteration);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCPlaneOptimalShadowCameraSetupProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PlaneOptimalShadowCameraSetup_getShadowCamera_1CSceneManager_1CCamera_1CViewport_1CLight_1CCamera_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sm_j, jlong cam_j, jlong vp_j, jlong light_j, jlong texCam_j, jlong iteration_j)
			{
				const EarthView::World::Graphic::CSceneManager *sm = (const EarthView::World::Graphic::CSceneManager*) sm_j;
				const EarthView::World::Graphic::CCamera *cam = (const EarthView::World::Graphic::CCamera*) cam_j;
				const EarthView::World::Graphic::CViewport *vp = (const EarthView::World::Graphic::CViewport*) vp_j;
				const EarthView::World::Graphic::CLight *light = (const EarthView::World::Graphic::CLight*) light_j;
				EarthView::World::Graphic::CCamera *texCam = (EarthView::World::Graphic::CCamera*) texCam_j;
				ev_size_t iteration = (ev_size_t) iteration_j;
				const 				EarthView::World::Graphic::CPlaneOptimalShadowCameraSetup *pObjectX = (EarthView::World::Graphic::CPlaneOptimalShadowCameraSetup*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPlaneOptimalShadowCameraSetupProxy))
				{
					pObjectX->EarthView::World::Graphic::CPlaneOptimalShadowCameraSetup::getShadowCamera(sm, cam, vp, light, texCam, iteration);
				}
				else
				{
					pObjectX->getShadowCamera(sm, cam, vp, light, texCam, iteration);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PlaneOptimalShadowCameraSetup_register_1getShadowCamera_1CSceneManager_1CCamera_1CViewport_1CLight_1CCamera_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPlaneOptimalShadowCameraSetupProxy *pObjectX = (JCPlaneOptimalShadowCameraSetupProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getShadowCamera_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getShadowCamera_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_callback", "(JJJJJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PlaneOptimalShadowCameraSetup_getShadowCamera_1CSceneManager_1CCamera_1CViewport_1CLight_1CCamera_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sm_j, jlong cam_j, jlong vp_j, jlong light_j, jlong texCam_j, jlong iteration_j)
			{
				const EarthView::World::Graphic::CSceneManager *sm = (const EarthView::World::Graphic::CSceneManager*) sm_j;
				const EarthView::World::Graphic::CCamera *cam = (const EarthView::World::Graphic::CCamera*) cam_j;
				const EarthView::World::Graphic::CViewport *vp = (const EarthView::World::Graphic::CViewport*) vp_j;
				const EarthView::World::Graphic::CLight *light = (const EarthView::World::Graphic::CLight*) light_j;
				EarthView::World::Graphic::CCamera *texCam = (EarthView::World::Graphic::CCamera*) texCam_j;
				ev_size_t iteration = (ev_size_t) iteration_j;
				const 				EarthView::World::Graphic::CPlaneOptimalShadowCameraSetup *pObjectX = (EarthView::World::Graphic::CPlaneOptimalShadowCameraSetup*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CPlaneOptimalShadowCameraSetup::getShadowCamera(sm, cam, vp, light, texCam, iteration);
			}
		}
	}
}
