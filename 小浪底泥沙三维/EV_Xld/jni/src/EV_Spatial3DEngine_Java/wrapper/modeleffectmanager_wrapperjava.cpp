/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/modeleffectmanager.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Dataset
			{
			}
			namespace ModelManager
			{
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelEffectManager_getIDNum_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CModelEffectManager *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelEffectManager*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getIDNum();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelEffectManager_getAllIDS_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CModelEffectManager *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelEffectManager*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CObjectIDList __values1 = pObjectX->getAllIDS();
					EarthView::World::Spatial3D::Dataset::CObjectIDList *returnvalues = new EarthView::World::Spatial3D::Dataset::CObjectIDList(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelEffectManager_getAllUserType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CModelEffectManager *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelEffectManager*) pObjXXXX;
					EarthView::World::Core::StringVector __values1 = pObjectX->getAllUserType();
					EarthView::World::Core::StringVector *returnvalues = new EarthView::World::Core::StringVector(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelEffectManager_getIDSByUserType_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring userType_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* userType_ch = (const ev_char*)__env->GetStringUTFChars(userType_j,JNI_FALSE);
					const EVString userType = userType_ch;
					__env->ReleaseStringUTFChars(userType_j, (const char *)userType_ch);
					#else
					const ev_wchar* userType_ch = (const ev_wchar*)__env->GetStringChars(userType_j,JNI_FALSE);
					const EVString userType = userType_ch;
					__env->ReleaseStringChars(userType_j, (const jchar *)userType_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::CModelEffectManager *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelEffectManager*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CObjectIDList __values1 = pObjectX->getIDSByUserType(userType);
					EarthView::World::Spatial3D::Dataset::CObjectIDList *returnvalues = new EarthView::World::Spatial3D::Dataset::CObjectIDList(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelEffectManager_getIDSByMeshName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring meshName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* meshName_ch = (const ev_char*)__env->GetStringUTFChars(meshName_j,JNI_FALSE);
					const EVString meshName = meshName_ch;
					__env->ReleaseStringUTFChars(meshName_j, (const char *)meshName_ch);
					#else
					const ev_wchar* meshName_ch = (const ev_wchar*)__env->GetStringChars(meshName_j,JNI_FALSE);
					const EVString meshName = meshName_ch;
					__env->ReleaseStringChars(meshName_j, (const jchar *)meshName_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::CModelEffectManager *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelEffectManager*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CObjectIDList __values1 = pObjectX->getIDSByMeshName(meshName);
					EarthView::World::Spatial3D::Dataset::CObjectIDList *returnvalues = new EarthView::World::Spatial3D::Dataset::CObjectIDList(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelEffectManager_getMeshNameByID_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial3D::ModelManager::CModelEffectManager *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelEffectManager*) pObjXXXX;
					EVString __values1 = pObjectX->getMeshNameByID(id);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelEffectManager_createModel_1ev_1uint32_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j, jboolean bRemoveParentNode_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					ev_bool bRemoveParentNode = (ev_bool) bRemoveParentNode_j;
					EarthView::World::Spatial3D::ModelManager::CModelEffectManager *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelEffectManager*) pObjXXXX;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* __values1 = pObjectX->createModel(id, bRemoveParentNode);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelEffectManager_destoryModel_1CModelBaseObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pModel_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject *pModel = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pModel_j;
					EarthView::World::Spatial3D::ModelManager::CModelEffectManager *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelEffectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->destoryModel(pModel);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelEffectManager_saveMaterialEditting_1CModelBaseObject_1CMaterialPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pModel_j, jlong matPtr_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject *pModel = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pModel_j;
					const EarthView::World::Graphic::CMaterialPtr &matPtr = *(EarthView::World::Graphic::CMaterialPtr*) matPtr_j;
					EarthView::World::Spatial3D::ModelManager::CModelEffectManager *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelEffectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->saveMaterialEditting(pModel, matPtr);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelEffectManager_getRootTree_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CModelEffectManager *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelEffectManager*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CUserTypeTree* __values1 = pObjectX->getRootTree();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
		}
	}
}
