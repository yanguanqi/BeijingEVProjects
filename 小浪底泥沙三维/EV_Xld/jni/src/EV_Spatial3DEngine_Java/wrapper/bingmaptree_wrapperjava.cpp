/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/bingmaptree.h"
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
		}
		namespace Spatial3D
		{
			namespace ModelManager
			{
			}
		}
		namespace Spatial
		{
			namespace GeoDataset
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Atlas
			{
				class JCBingMapTreeProxy : public EarthView::World::Spatial3D::Atlas::CBingMapTree
				{
				 private:
					EarthView::World::Core::ev_string m_update_CCamera_callback;
				public:
					JCBingMapTreeProxy(EarthView::World::Core::CNameValuePairList *pList) : CBingMapTree(pList)
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
					void register_update_CCamera_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_update_CCamera_callback = __method;
					}
					virtual void update(const EarthView::World::Graphic::CCamera* camera)
					{
						if (this->_gRef != NULL && this->m_update_CCamera_callback != "" && this->isCustomExtend())
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
							jlong camera_j = (jlong) camera;
							jmethodID __method = __gr->getMethod("update_CCamera_callback");
							__env->CallVoidMethod(__obj, __method , camera_j);
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
							return this->CBingMapTree::update(camera);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCBingMapTreeProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_BingMapTree_update_1CCamera(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong camera_j)
				{
					const EarthView::World::Graphic::CCamera *camera = (const EarthView::World::Graphic::CCamera*) camera_j;
					EarthView::World::Spatial3D::Atlas::CBingMapTree *pObjectX = (EarthView::World::Spatial3D::Atlas::CBingMapTree*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCBingMapTreeProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CBingMapTree::update(camera);
					}
					else
					{
						pObjectX->update(camera);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_BingMapTree_register_1update_1CCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCBingMapTreeProxy *pObjectX = (JCBingMapTreeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_update_CCamera_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"update_CCamera_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_BingMapTree_update_1CCamera_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong camera_j)
				{
					const EarthView::World::Graphic::CCamera *camera = (const EarthView::World::Graphic::CCamera*) camera_j;
					EarthView::World::Spatial3D::Atlas::CBingMapTree *pObjectX = (EarthView::World::Spatial3D::Atlas::CBingMapTree*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CBingMapTree::update(camera);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_BingMapTree_init_1CCamera(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong camera_j)
				{
					const EarthView::World::Graphic::CCamera *camera = (const EarthView::World::Graphic::CCamera*) camera_j;
					EarthView::World::Spatial3D::Atlas::CBingMapTree *pObjectX = (EarthView::World::Spatial3D::Atlas::CBingMapTree*) pObjXXXX;
					pObjectX->init(camera);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_BingMapTree_setSceneManager_1CSceneManager(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sceneManager_j)
				{
					EarthView::World::Graphic::CSceneManager *sceneManager = (EarthView::World::Graphic::CSceneManager*) sceneManager_j;
					EarthView::World::Spatial3D::Atlas::CBingMapTree *pObjectX = (EarthView::World::Spatial3D::Atlas::CBingMapTree*) pObjXXXX;
					pObjectX->setSceneManager(sceneManager);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_BingMapTree_getSceneManager_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CBingMapTree *pObjectX = (EarthView::World::Spatial3D::Atlas::CBingMapTree*) pObjXXXX;
					EarthView::World::Graphic::CSceneManager* __values1 = pObjectX->getSceneManager();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_BingMapTree_setDataset_1IDataset(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDataset_j)
				{
					EarthView::World::Spatial::GeoDataset::IDataset *pDataset = (EarthView::World::Spatial::GeoDataset::IDataset*) pDataset_j;
					EarthView::World::Spatial3D::Atlas::CBingMapTree *pObjectX = (EarthView::World::Spatial3D::Atlas::CBingMapTree*) pObjXXXX;
					pObjectX->setDataset(pDataset);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_BingMapTree_getDataSet_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CBingMapTree *pObjectX = (EarthView::World::Spatial3D::Atlas::CBingMapTree*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* __values1 = pObjectX->getDataSet();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_atlas_BingMapTree_getRootQuadKey_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CBingMapTree *pObjectX = (EarthView::World::Spatial3D::Atlas::CBingMapTree*) pObjXXXX;
					EVString __values1 = pObjectX->getRootQuadKey();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_BingMapTree_updateAltitudeValue_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble altitudeValue_j)
				{
					ev_real64 altitudeValue = (ev_real64) altitudeValue_j;
					EarthView::World::Spatial3D::Atlas::CBingMapTree *pObjectX = (EarthView::World::Spatial3D::Atlas::CBingMapTree*) pObjXXXX;
					ev_bool __values1 = pObjectX->updateAltitudeValue(altitudeValue);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial3d_atlas_BingMapTree_getCurrentLevel_1CGlobeCamera(JNIEnv *__env , jclass __clazz, jlong globeCamera_j)
				{
					EarthView::World::Spatial3D::CGlobeCamera *globeCamera = (EarthView::World::Spatial3D::CGlobeCamera*) globeCamera_j;
					ev_real32 __values1 = EarthView::World::Spatial3D::Atlas::CBingMapTree::getCurrentLevel(globeCamera);
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
			}
		}
	}
}
