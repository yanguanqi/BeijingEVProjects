/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/shadowcamerasetupfocused.h"
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
			namespace Math
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class JCFocusedShadowCameraSetupProxy : public EarthView::World::Graphic::CFocusedShadowCameraSetup
			{
			 private:
				EarthView::World::Core::ev_string m_getShadowCamera_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_callback;
			public:
				JCFocusedShadowCameraSetupProxy(EarthView::World::Core::CNameValuePairList *pList) : CFocusedShadowCameraSetup(pList)
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
						return this->CFocusedShadowCameraSetup::getShadowCamera(sm, cam, vp, light, texCam, iteration);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCFocusedShadowCameraSetupProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FocusedShadowCameraSetup_00024PointListBody_merge_1CPointListBody(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong plb_j)
			{
				const EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody &plb = *(EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody*) plb_j;
				EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody *pObjectX = (EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody*) pObjXXXX;
				pObjectX->merge(plb);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FocusedShadowCameraSetup_00024PointListBody_build_1CConvexBody_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong body_j, jboolean filterDuplicates_j)
			{
				const EarthView::World::Graphic::CConvexBody &body = *(EarthView::World::Graphic::CConvexBody*) body_j;
				ev_bool filterDuplicates = (ev_bool) filterDuplicates_j;
				EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody *pObjectX = (EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody*) pObjXXXX;
				pObjectX->build(body, filterDuplicates);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FocusedShadowCameraSetup_00024PointListBody_buildAndIncludeDirection_1CConvexBody_1Real_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong body_j, jdouble extrudeDist_j, jlong dir_j)
			{
				const EarthView::World::Graphic::CConvexBody &body = *(EarthView::World::Graphic::CConvexBody*) body_j;
				Real extrudeDist = (Real) extrudeDist_j;
				const EarthView::World::Spatial::Math::CVector3 &dir = *(EarthView::World::Spatial::Math::CVector3*) dir_j;
				EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody *pObjectX = (EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody*) pObjXXXX;
				pObjectX->buildAndIncludeDirection(body, extrudeDist, dir);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_FocusedShadowCameraSetup_00024PointListBody_getAAB_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody *pObjectX = (EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody*) pObjXXXX;
				const EarthView::World::Spatial::Math::CAxisAlignedBox& __values1 = pObjectX->getAAB();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FocusedShadowCameraSetup_00024PointListBody_addPoint_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong point_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &point = *(EarthView::World::Spatial::Math::CVector3*) point_j;
				EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody *pObjectX = (EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody*) pObjXXXX;
				pObjectX->addPoint(point);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FocusedShadowCameraSetup_00024PointListBody_addAAB_1CAxisAlignedBox(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong aab_j)
			{
				const EarthView::World::Spatial::Math::CAxisAlignedBox &aab = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) aab_j;
				EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody *pObjectX = (EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody*) pObjXXXX;
				pObjectX->addAAB(aab);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_FocusedShadowCameraSetup_00024PointListBody_getPoint_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cnt_j)
			{
				ev_size_t cnt = (ev_size_t) cnt_j;
				const 				EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody *pObjectX = (EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody*) pObjXXXX;
				const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->getPoint(cnt);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_FocusedShadowCameraSetup_00024PointListBody_getPointCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody *pObjectX = (EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getPointCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FocusedShadowCameraSetup_00024PointListBody_reset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody *pObjectX = (EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody*) pObjXXXX;
				pObjectX->reset();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_FocusedShadowCameraSetup_get_1mBodyB_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CFocusedShadowCameraSetup *pObjectX = (EarthView::World::Graphic::CFocusedShadowCameraSetup*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mBodyB);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FocusedShadowCameraSetup_set_1mBodyB_1CConvexBody(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CFocusedShadowCameraSetup *pObjectX = (EarthView::World::Graphic::CFocusedShadowCameraSetup*)pObjXXXX;
				pObjectX->mBodyB = *(EarthView::World::Graphic::CConvexBody*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_FocusedShadowCameraSetup_get_1mPointListBodyB_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CFocusedShadowCameraSetup *pObjectX = (EarthView::World::Graphic::CFocusedShadowCameraSetup*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mPointListBodyB);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FocusedShadowCameraSetup_set_1mPointListBodyB_1CPointListBody(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CFocusedShadowCameraSetup *pObjectX = (EarthView::World::Graphic::CFocusedShadowCameraSetup*)pObjXXXX;
				pObjectX->mPointListBodyB = *(EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_FocusedShadowCameraSetup_get_1mPointListBodyLVS_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CFocusedShadowCameraSetup *pObjectX = (EarthView::World::Graphic::CFocusedShadowCameraSetup*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mPointListBodyLVS);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FocusedShadowCameraSetup_set_1mPointListBodyLVS_1CPointListBody(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CFocusedShadowCameraSetup *pObjectX = (EarthView::World::Graphic::CFocusedShadowCameraSetup*)pObjXXXX;
				pObjectX->mPointListBodyLVS = *(EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody*) __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FocusedShadowCameraSetup_getShadowCamera_1CSceneManager_1CCamera_1CViewport_1CLight_1CCamera_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sm_j, jlong cam_j, jlong vp_j, jlong light_j, jlong texCam_j, jlong iteration_j)
			{
				const EarthView::World::Graphic::CSceneManager *sm = (const EarthView::World::Graphic::CSceneManager*) sm_j;
				const EarthView::World::Graphic::CCamera *cam = (const EarthView::World::Graphic::CCamera*) cam_j;
				const EarthView::World::Graphic::CViewport *vp = (const EarthView::World::Graphic::CViewport*) vp_j;
				const EarthView::World::Graphic::CLight *light = (const EarthView::World::Graphic::CLight*) light_j;
				EarthView::World::Graphic::CCamera *texCam = (EarthView::World::Graphic::CCamera*) texCam_j;
				ev_size_t iteration = (ev_size_t) iteration_j;
				const 				EarthView::World::Graphic::CFocusedShadowCameraSetup *pObjectX = (EarthView::World::Graphic::CFocusedShadowCameraSetup*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCFocusedShadowCameraSetupProxy))
				{
					pObjectX->EarthView::World::Graphic::CFocusedShadowCameraSetup::getShadowCamera(sm, cam, vp, light, texCam, iteration);
				}
				else
				{
					pObjectX->getShadowCamera(sm, cam, vp, light, texCam, iteration);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FocusedShadowCameraSetup_register_1getShadowCamera_1CSceneManager_1CCamera_1CViewport_1CLight_1CCamera_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFocusedShadowCameraSetupProxy *pObjectX = (JCFocusedShadowCameraSetupProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FocusedShadowCameraSetup_getShadowCamera_1CSceneManager_1CCamera_1CViewport_1CLight_1CCamera_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sm_j, jlong cam_j, jlong vp_j, jlong light_j, jlong texCam_j, jlong iteration_j)
			{
				const EarthView::World::Graphic::CSceneManager *sm = (const EarthView::World::Graphic::CSceneManager*) sm_j;
				const EarthView::World::Graphic::CCamera *cam = (const EarthView::World::Graphic::CCamera*) cam_j;
				const EarthView::World::Graphic::CViewport *vp = (const EarthView::World::Graphic::CViewport*) vp_j;
				const EarthView::World::Graphic::CLight *light = (const EarthView::World::Graphic::CLight*) light_j;
				EarthView::World::Graphic::CCamera *texCam = (EarthView::World::Graphic::CCamera*) texCam_j;
				ev_size_t iteration = (ev_size_t) iteration_j;
				const 				EarthView::World::Graphic::CFocusedShadowCameraSetup *pObjectX = (EarthView::World::Graphic::CFocusedShadowCameraSetup*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CFocusedShadowCameraSetup::getShadowCamera(sm, cam, vp, light, texCam, iteration);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FocusedShadowCameraSetup_setUseAggressiveFocusRegion_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean aggressive_j)
			{
				ev_bool aggressive = (ev_bool) aggressive_j;
				EarthView::World::Graphic::CFocusedShadowCameraSetup *pObjectX = (EarthView::World::Graphic::CFocusedShadowCameraSetup*) pObjXXXX;
				pObjectX->setUseAggressiveFocusRegion(aggressive);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_FocusedShadowCameraSetup_getUseAggressiveFocusRegion_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CFocusedShadowCameraSetup *pObjectX = (EarthView::World::Graphic::CFocusedShadowCameraSetup*) pObjXXXX;
				ev_bool __values1 = pObjectX->getUseAggressiveFocusRegion();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
		}
	}
}
