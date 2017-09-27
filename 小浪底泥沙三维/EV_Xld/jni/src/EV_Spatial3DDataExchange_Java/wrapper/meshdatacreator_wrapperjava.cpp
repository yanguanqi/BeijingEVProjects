/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataexchange/meshdatacreator.h"
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshDataCreator_createMeshData_1CEntityMetaData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong modelMetaData_j)
				{
					const EarthView::World::Spatial3D::DataExchange::CEntityMetaData &modelMetaData = *(EarthView::World::Spatial3D::DataExchange::CEntityMetaData*) modelMetaData_j;
					EarthView::World::Spatial3D::DataExchange::CMeshDataCreator *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshDataCreator*) pObjXXXX;
					EarthView::World::Spatial3D::DataExchange::CMeshData __values1 = pObjectX->createMeshData(modelMetaData);
					EarthView::World::Spatial3D::DataExchange::CMeshData *returnvalues = new EarthView::World::Spatial3D::DataExchange::CMeshData(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshDataCreator_createMeshData_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring meshPath_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* meshPath_ch = (const ev_char*)__env->GetStringUTFChars(meshPath_j,JNI_FALSE);
					const EVString meshPath = meshPath_ch;
					__env->ReleaseStringUTFChars(meshPath_j, (const char *)meshPath_ch);
					#else
					const ev_wchar* meshPath_ch = (const ev_wchar*)__env->GetStringChars(meshPath_j,JNI_FALSE);
					const EVString meshPath = meshPath_ch;
					__env->ReleaseStringChars(meshPath_j, (const jchar *)meshPath_ch);
					#endif
					EarthView::World::Spatial3D::DataExchange::CMeshDataCreator *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshDataCreator*) pObjXXXX;
					EarthView::World::Spatial3D::DataExchange::CMeshData __values1 = pObjectX->createMeshData(meshPath);
					EarthView::World::Spatial3D::DataExchange::CMeshData *returnvalues = new EarthView::World::Spatial3D::DataExchange::CMeshData(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshDataCreator_destroyMeshData_1CMeshData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong meshData_j)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshData &meshData = *(EarthView::World::Spatial3D::DataExchange::CMeshData*) meshData_j;
					EarthView::World::Spatial3D::DataExchange::CMeshDataCreator *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshDataCreator*) pObjXXXX;
					pObjectX->destroyMeshData(meshData);
				}
			}
		}
	}
}
