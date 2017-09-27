/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataexchange/entitymetadata.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace DataExchange
			{
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataexchange_EntityMetaData_get_1mMeshPath_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CEntityMetaData *pObjectX = (EarthView::World::Spatial3D::DataExchange::CEntityMetaData*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mMeshPath;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_EntityMetaData_set_1mMeshPath_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CEntityMetaData *pObjectX = (EarthView::World::Spatial3D::DataExchange::CEntityMetaData*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->mMeshPath = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataexchange_EntityMetaData_get_1mMeshName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CEntityMetaData *pObjectX = (EarthView::World::Spatial3D::DataExchange::CEntityMetaData*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mMeshName;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_EntityMetaData_set_1mMeshName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CEntityMetaData *pObjectX = (EarthView::World::Spatial3D::DataExchange::CEntityMetaData*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->mMeshName = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_EntityMetaData_get_1mPos_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CEntityMetaData *pObjectX = (EarthView::World::Spatial3D::DataExchange::CEntityMetaData*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mPos);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_EntityMetaData_set_1mPos_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CEntityMetaData *pObjectX = (EarthView::World::Spatial3D::DataExchange::CEntityMetaData*)pObjXXXX;
					pObjectX->mPos = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_EntityMetaData_get_1mScale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CEntityMetaData *pObjectX = (EarthView::World::Spatial3D::DataExchange::CEntityMetaData*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mScale);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_EntityMetaData_set_1mScale_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CEntityMetaData *pObjectX = (EarthView::World::Spatial3D::DataExchange::CEntityMetaData*)pObjXXXX;
					pObjectX->mScale = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_EntityMetaData_get_1mQuation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CEntityMetaData *pObjectX = (EarthView::World::Spatial3D::DataExchange::CEntityMetaData*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mQuation);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_EntityMetaData_set_1mQuation_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CEntityMetaData *pObjectX = (EarthView::World::Spatial3D::DataExchange::CEntityMetaData*)pObjXXXX;
					pObjectX->mQuation = *(EarthView::World::Spatial::Math::CQuaternion*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_EntityMetaData_get_1mAttriMap_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CEntityMetaData *pObjectX = (EarthView::World::Spatial3D::DataExchange::CEntityMetaData*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mAttriMap);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_EntityMetaData_set_1mAttriMap_1MeshAttrMap(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CEntityMetaData *pObjectX = (EarthView::World::Spatial3D::DataExchange::CEntityMetaData*)pObjXXXX;
					pObjectX->mAttriMap = *(EarthView::World::Spatial3D::DataExchange::MeshAttrMap*) __values1_j;
				}
			}
		}
	}
}
