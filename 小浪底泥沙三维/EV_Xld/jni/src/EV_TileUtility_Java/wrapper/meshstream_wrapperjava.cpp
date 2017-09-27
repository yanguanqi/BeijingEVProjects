/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/meshstream.h"
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
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_MeshStreamItemTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					MSIT_Mesh,
					MSIT_Material,
					MSIT_Texture,
					MSIT_Skeleton,
					MSIT_Ani,
					MSIT_Extend
				};
				jintArray array = __env->NewIntArray(6);
				__env->SetIntArrayRegion(array, 0, 6, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_MeshStream_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::MeshStream *pObjectX = (EarthView::World::Spatial::MeshStream*) pObjXXXX;
				EarthView::World::Spatial::MeshStream __values1 = pObjectX->clone();
				EarthView::World::Spatial::MeshStream *returnvalues = new EarthView::World::Spatial::MeshStream(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_MeshStream_convertToMemoryDataStream_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::MeshStream *pObjectX = (EarthView::World::Spatial::MeshStream*) pObjXXXX;
				EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->convertToMemoryDataStream();
				EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_MeshStream_resumeFromMemoryDataStream_1MemoryDataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mem_j)
			{
				const EarthView::World::Core::MemoryDataStreamPtr &mem = *(EarthView::World::Core::MemoryDataStreamPtr*) mem_j;
				EarthView::World::Spatial::MeshStream *pObjectX = (EarthView::World::Spatial::MeshStream*) pObjXXXX;
				pObjectX->resumeFromMemoryDataStream(mem);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_MeshStream_get_1mMeshStream_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::MeshStream *pObjectX = (EarthView::World::Spatial::MeshStream*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mMeshStream);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_MeshStream_set_1mMeshStream_1MemoryDataStreamPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial::MeshStream *pObjectX = (EarthView::World::Spatial::MeshStream*)pObjXXXX;
				pObjectX->mMeshStream = *(EarthView::World::Core::MemoryDataStreamPtr*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_MeshStream_get_1mMaterialStream_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::MeshStream *pObjectX = (EarthView::World::Spatial::MeshStream*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mMaterialStream);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_MeshStream_set_1mMaterialStream_1MemoryDataStreamPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial::MeshStream *pObjectX = (EarthView::World::Spatial::MeshStream*)pObjXXXX;
				pObjectX->mMaterialStream = *(EarthView::World::Core::MemoryDataStreamPtr*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_MeshStream_get_1mTexStreamVec_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::MeshStream *pObjectX = (EarthView::World::Spatial::MeshStream*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mTexStreamVec);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_MeshStream_set_1mTexStreamVec_1MemoryDataStreamVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial::MeshStream *pObjectX = (EarthView::World::Spatial::MeshStream*)pObjXXXX;
				pObjectX->mTexStreamVec = *(EarthView::World::Core::MemoryDataStreamVector*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_MeshStream_get_1mSkeletonStream_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::MeshStream *pObjectX = (EarthView::World::Spatial::MeshStream*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mSkeletonStream);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_MeshStream_set_1mSkeletonStream_1MemoryDataStreamPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial::MeshStream *pObjectX = (EarthView::World::Spatial::MeshStream*)pObjXXXX;
				pObjectX->mSkeletonStream = *(EarthView::World::Core::MemoryDataStreamPtr*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_MeshStream_get_1mAniStream_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::MeshStream *pObjectX = (EarthView::World::Spatial::MeshStream*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mAniStream);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_MeshStream_set_1mAniStream_1MemoryDataStreamPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial::MeshStream *pObjectX = (EarthView::World::Spatial::MeshStream*)pObjXXXX;
				pObjectX->mAniStream = *(EarthView::World::Core::MemoryDataStreamPtr*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_MeshStream_get_1mExtendStream_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::MeshStream *pObjectX = (EarthView::World::Spatial::MeshStream*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mExtendStream);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_MeshStream_set_1mExtendStream_1MemoryDataStreamPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial::MeshStream *pObjectX = (EarthView::World::Spatial::MeshStream*)pObjXXXX;
				pObjectX->mExtendStream = *(EarthView::World::Core::MemoryDataStreamPtr*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_MeshStreamPackageTool_encodeMeshStreamTo7z_1MeshStream(JNIEnv *__env , jclass __clazz, jlong meshStream_j)
			{
				const EarthView::World::Spatial::MeshStream &meshStream = *(EarthView::World::Spatial::MeshStream*) meshStream_j;
				EarthView::World::Core::MemoryDataStreamPtr __values1 = EarthView::World::Spatial::CMeshStreamPackageTool::encodeMeshStreamTo7z(meshStream);
				EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_MeshStreamPackageTool_encodeMeshStreamTo7z_1ForBatch_1MeshStream(JNIEnv *__env , jclass __clazz, jlong meshStream_j)
			{
				const EarthView::World::Spatial::MeshStream &meshStream = *(EarthView::World::Spatial::MeshStream*) meshStream_j;
				EarthView::World::Core::MemoryDataStreamPtr __values1 = EarthView::World::Spatial::CMeshStreamPackageTool::encodeMeshStreamTo7z_ForBatch(meshStream);
				EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_MeshStreamPackageTool_clearMemForBatch_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Spatial::CMeshStreamPackageTool::clearMemForBatch();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_MeshStreamPackageTool_decodeMeshStreamFrom7z_1MemoryDataStreamPtr(JNIEnv *__env , jclass __clazz, jlong package7z_j)
			{
				const EarthView::World::Core::MemoryDataStreamPtr &package7z = *(EarthView::World::Core::MemoryDataStreamPtr*) package7z_j;
				EarthView::World::Spatial::MeshStream __values1 = EarthView::World::Spatial::CMeshStreamPackageTool::decodeMeshStreamFrom7z(package7z);
				EarthView::World::Spatial::MeshStream *returnvalues = new EarthView::World::Spatial::MeshStream(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
		}
	}
}
