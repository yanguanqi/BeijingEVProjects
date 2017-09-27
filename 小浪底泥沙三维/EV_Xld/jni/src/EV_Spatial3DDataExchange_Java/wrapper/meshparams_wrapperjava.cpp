/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataexchange/meshparams.h"
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
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshParams_00024CompositeTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CMeshParams::CT_EffectFirst,
						CMeshParams::CT_EfficiencyFirst
					};
					jintArray array = __env->NewIntArray(2);
					__env->SetIntArrayRegion(array, 0, 2, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshParams_00024CSTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CMeshParams::CST_LeftHandle,
						CMeshParams::CST_RightHandle
					};
					jintArray array = __env->NewIntArray(2);
					__env->SetIntArrayRegion(array, 0, 2, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshParams_get_1m_1bOnlyForPC_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshParams *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshParams*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->m_bOnlyForPC);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshParams_set_1m_1bOnlyForPC_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshParams *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshParams*)pObjXXXX;
					pObjectX->m_bOnlyForPC = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshParams_get_1m_1bCreateLod_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshParams *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshParams*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->m_bCreateLod);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshParams_set_1m_1bCreateLod_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshParams *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshParams*)pObjXXXX;
					pObjectX->m_bCreateLod = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshParams_get_1m_1bYAxisUp_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshParams *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshParams*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->m_bYAxisUp);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshParams_set_1m_1bYAxisUp_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshParams *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshParams*)pObjXXXX;
					pObjectX->m_bYAxisUp = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshParams_get_1m_1bShareGeometry_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshParams *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshParams*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->m_bShareGeometry);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshParams_set_1m_1bShareGeometry_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshParams *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshParams*)pObjXXXX;
					pObjectX->m_bShareGeometry = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshParams_get_1m_1exportLine_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshParams *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshParams*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->m_exportLine);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshParams_set_1m_1exportLine_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshParams *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshParams*)pObjXXXX;
					pObjectX->m_exportLine = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshParams_get_1AnimationResample_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshParams *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshParams*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->AnimationResample);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshParams_set_1AnimationResample_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshParams *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshParams*)pObjXXXX;
					pObjectX->AnimationResample = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshParams_get_1mbImportModelDB_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshParams *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshParams*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->mbImportModelDB);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshParams_set_1mbImportModelDB_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshParams *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshParams*)pObjXXXX;
					pObjectX->mbImportModelDB = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshParams_get_1mbscenefile_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshParams *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshParams*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->mbscenefile);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshParams_set_1mbscenefile_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshParams *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshParams*)pObjXXXX;
					pObjectX->mbscenefile = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshParams_get_1mbTraverseFolder_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshParams *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshParams*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->mbTraverseFolder);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshParams_set_1mbTraverseFolder_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshParams *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshParams*)pObjXXXX;
					pObjectX->mbTraverseFolder = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshParams_get_1CoordType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshParams *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshParams*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->CoordType);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshParams_set_1CoordType_1CSType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshParams *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshParams*)pObjXXXX;
					pObjectX->CoordType = (EarthView::World::Spatial3D::DataExchange::CMeshParams::CSType)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshParams_get_1SrsID_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshParams *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshParams*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->SrsID);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshParams_set_1SrsID_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshParams *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshParams*)pObjXXXX;
					pObjectX->SrsID = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshParams_get_1CompositeSubMesh_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshParams *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshParams*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->CompositeSubMesh);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshParams_set_1CompositeSubMesh_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshParams *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshParams*)pObjXXXX;
					pObjectX->CompositeSubMesh = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshParams_get_1BothSide_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshParams *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshParams*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->BothSide);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshParams_set_1BothSide_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshParams *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshParams*)pObjXXXX;
					pObjectX->BothSide = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshParams_get_1BuildEageList_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshParams *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshParams*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->BuildEageList);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshParams_set_1BuildEageList_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshParams *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshParams*)pObjXXXX;
					pObjectX->BuildEageList = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshParams_get_1mbIsCompress_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshParams *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshParams*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->mbIsCompress);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshParams_set_1mbIsCompress_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshParams *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshParams*)pObjXXXX;
					pObjectX->mbIsCompress = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshParams_get_1Method_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshParams *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshParams*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->Method);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshParams_set_1Method_1CompositeType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshParams *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshParams*)pObjXXXX;
					pObjectX->Method = (EarthView::World::Spatial3D::DataExchange::CMeshParams::CompositeType)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshParams_get_1MaxWidth_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshParams *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshParams*)pObjXXXX;
					jlong __values1_j = (jlong) (pObjectX->MaxWidth);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshParams_set_1MaxWidth_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshParams *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshParams*)pObjXXXX;
					pObjectX->MaxWidth = (ev_uint32)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshParams_get_1MaxHeight_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshParams *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshParams*)pObjXXXX;
					jlong __values1_j = (jlong) (pObjectX->MaxHeight);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshParams_set_1MaxHeight_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshParams *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshParams*)pObjXXXX;
					pObjectX->MaxHeight = (ev_uint32)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshParams_get_1Margin_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshParams *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshParams*)pObjXXXX;
					jlong __values1_j = (jlong) (pObjectX->Margin);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshParams_set_1Margin_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshParams *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshParams*)pObjXXXX;
					pObjectX->Margin = (ev_uint32)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshParams_get_1m_1bClearTarget_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshParams *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshParams*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->m_bClearTarget);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshParams_set_1m_1bClearTarget_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshParams *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshParams*)pObjXXXX;
					pObjectX->m_bClearTarget = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshParams_get_1DEFAULT_1void(JNIEnv *__env, jclass __clazz)
				{
					const EarthView::World::Spatial3D::DataExchange::CMeshParams& __values1 = EarthView::World::Spatial3D::DataExchange::CMeshParams::DEFAULT;
					EarthView::World::Spatial3D::DataExchange::CMeshParams* returnvalues = new EarthView::World::Spatial3D::DataExchange::CMeshParams(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jshort JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshParams_get_1AlphaRejection_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshParams *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshParams*)pObjXXXX;
					jshort __values1_j = (jshort) (pObjectX->AlphaRejection);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshParams_set_1AlphaRejection_1ev_1byte(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jshort __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshParams *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshParams*)pObjXXXX;
					pObjectX->AlphaRejection = (ev_byte)__values1_j;
				}
			}
		}
	}
}
