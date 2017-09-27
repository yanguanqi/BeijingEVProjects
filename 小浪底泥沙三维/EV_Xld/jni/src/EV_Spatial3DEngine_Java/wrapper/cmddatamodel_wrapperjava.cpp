/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/cmddatamodel.h"
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_CmdDataModel_setUndoPose_1CVector3_1CVector3_1CQuaternion_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pose_j, jlong scale_j, jlong qua_j, jdouble demHeight_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &pose = *(EarthView::World::Spatial::Math::CVector3*) pose_j;
				const EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
				const EarthView::World::Spatial::Math::CQuaternion &qua = *(EarthView::World::Spatial::Math::CQuaternion*) qua_j;
				ev_real64 demHeight = (ev_real64) demHeight_j;
				EarthView::World::Spatial3D::CCmdDataModel *pObjectX = (EarthView::World::Spatial3D::CCmdDataModel*) pObjXXXX;
				pObjectX->setUndoPose(pose, scale, qua, demHeight);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_CmdDataModel_getUndoPose_1CVector3_1CVector3_1CQuaternion_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pose_j, jlong scale_j, jlong qua_j, jlong demHeight_j)
			{
				EarthView::World::Spatial::Math::CVector3 &pose = *(EarthView::World::Spatial::Math::CVector3*) pose_j;
				EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
				EarthView::World::Spatial::Math::CQuaternion &qua = *(EarthView::World::Spatial::Math::CQuaternion*) qua_j;
				ev_real64 &demHeight = *(ev_real64*) demHeight_j;
				EarthView::World::Spatial3D::CCmdDataModel *pObjectX = (EarthView::World::Spatial3D::CCmdDataModel*) pObjXXXX;
				pObjectX->getUndoPose(pose, scale, qua, demHeight);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_CmdDataModel_setRedoPose_1CVector3_1CVector3_1CQuaternion_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pose_j, jlong scale_j, jlong qua_j, jdouble demHeight_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &pose = *(EarthView::World::Spatial::Math::CVector3*) pose_j;
				const EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
				const EarthView::World::Spatial::Math::CQuaternion &qua = *(EarthView::World::Spatial::Math::CQuaternion*) qua_j;
				ev_real64 demHeight = (ev_real64) demHeight_j;
				EarthView::World::Spatial3D::CCmdDataModel *pObjectX = (EarthView::World::Spatial3D::CCmdDataModel*) pObjXXXX;
				pObjectX->setRedoPose(pose, scale, qua, demHeight);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_CmdDataModel_getRedoPose_1CVector3_1CVector3_1CQuaternion_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pose_j, jlong scale_j, jlong qua_j, jlong demHeight_j)
			{
				EarthView::World::Spatial::Math::CVector3 &pose = *(EarthView::World::Spatial::Math::CVector3*) pose_j;
				EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
				EarthView::World::Spatial::Math::CQuaternion &qua = *(EarthView::World::Spatial::Math::CQuaternion*) qua_j;
				ev_real64 &demHeight = *(ev_real64*) demHeight_j;
				EarthView::World::Spatial3D::CCmdDataModel *pObjectX = (EarthView::World::Spatial3D::CCmdDataModel*) pObjXXXX;
				pObjectX->getRedoPose(pose, scale, qua, demHeight);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_CmdDataModel_setMeshItem_1IFeature(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_f_j)
			{
				EarthView::World::Spatial::GeoDataset::IFeature *ref_f = (EarthView::World::Spatial::GeoDataset::IFeature*) ref_f_j;
				EarthView::World::Spatial3D::CCmdDataModel *pObjectX = (EarthView::World::Spatial3D::CCmdDataModel*) pObjXXXX;
				pObjectX->setMeshItem(ref_f);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_CmdDataModel_getMeshItem_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CCmdDataModel *pObjectX = (EarthView::World::Spatial3D::CCmdDataModel*) pObjXXXX;
				EarthView::World::Spatial::GeoDataset::IFeature* __values1 = pObjectX->getMeshItem();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_CmdDataModel_addResItem_1IFeature(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_f_j)
			{
				EarthView::World::Spatial::GeoDataset::IFeature *ref_f = (EarthView::World::Spatial::GeoDataset::IFeature*) ref_f_j;
				EarthView::World::Spatial3D::CCmdDataModel *pObjectX = (EarthView::World::Spatial3D::CCmdDataModel*) pObjXXXX;
				pObjectX->addResItem(ref_f);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_CmdDataModel_getNumResItem_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CCmdDataModel *pObjectX = (EarthView::World::Spatial3D::CCmdDataModel*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getNumResItem();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_CmdDataModel_getResItem_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				EarthView::World::Spatial3D::CCmdDataModel *pObjectX = (EarthView::World::Spatial3D::CCmdDataModel*) pObjXXXX;
				EarthView::World::Spatial::GeoDataset::IFeature* __values1 = pObjectX->getResItem(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_CmdDataModel_setMatrix_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mat_j)
			{
				const EarthView::World::Spatial::Math::CMatrix4 &mat = *(EarthView::World::Spatial::Math::CMatrix4*) mat_j;
				EarthView::World::Spatial3D::CCmdDataModel *pObjectX = (EarthView::World::Spatial3D::CCmdDataModel*) pObjXXXX;
				pObjectX->setMatrix(mat);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_CmdDataModel_getMatrix_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CCmdDataModel *pObjectX = (EarthView::World::Spatial3D::CCmdDataModel*) pObjXXXX;
				EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->getMatrix();
				EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_CmdDataModel_setMeshInstID_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
			{
				ev_uint32 id = (ev_uint32) id_j;
				EarthView::World::Spatial3D::CCmdDataModel *pObjectX = (EarthView::World::Spatial3D::CCmdDataModel*) pObjXXXX;
				pObjectX->setMeshInstID(id);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_CmdDataModel_getMeshInstID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CCmdDataModel *pObjectX = (EarthView::World::Spatial3D::CCmdDataModel*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getMeshInstID();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_CmdDataModel_setUndoAttr_1IFeature(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_f_j)
			{
				EarthView::World::Spatial::GeoDataset::IFeature *ref_f = (EarthView::World::Spatial::GeoDataset::IFeature*) ref_f_j;
				EarthView::World::Spatial3D::CCmdDataModel *pObjectX = (EarthView::World::Spatial3D::CCmdDataModel*) pObjXXXX;
				pObjectX->setUndoAttr(ref_f);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_CmdDataModel_getUndoAttr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CCmdDataModel *pObjectX = (EarthView::World::Spatial3D::CCmdDataModel*) pObjXXXX;
				EarthView::World::Spatial::GeoDataset::IFeature* __values1 = pObjectX->getUndoAttr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_CmdDataModel_setRedoAttr_1IFeature(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_f_j)
			{
				EarthView::World::Spatial::GeoDataset::IFeature *ref_f = (EarthView::World::Spatial::GeoDataset::IFeature*) ref_f_j;
				EarthView::World::Spatial3D::CCmdDataModel *pObjectX = (EarthView::World::Spatial3D::CCmdDataModel*) pObjXXXX;
				pObjectX->setRedoAttr(ref_f);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_CmdDataModel_getRedoAttr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CCmdDataModel *pObjectX = (EarthView::World::Spatial3D::CCmdDataModel*) pObjXXXX;
				EarthView::World::Spatial::GeoDataset::IFeature* __values1 = pObjectX->getRedoAttr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_CmdDataLodModel_get_1mUndoLat_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CCmdDataLodModel *pObjectX = (EarthView::World::Spatial3D::CCmdDataLodModel*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->mUndoLat);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_CmdDataLodModel_set_1mUndoLat_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial3D::CCmdDataLodModel *pObjectX = (EarthView::World::Spatial3D::CCmdDataLodModel*)pObjXXXX;
				pObjectX->mUndoLat = (ev_real64)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_CmdDataLodModel_get_1mUndoLon_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CCmdDataLodModel *pObjectX = (EarthView::World::Spatial3D::CCmdDataLodModel*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->mUndoLon);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_CmdDataLodModel_set_1mUndoLon_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial3D::CCmdDataLodModel *pObjectX = (EarthView::World::Spatial3D::CCmdDataLodModel*)pObjXXXX;
				pObjectX->mUndoLon = (ev_real64)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_CmdDataLodModel_get_1mUndoAlt_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CCmdDataLodModel *pObjectX = (EarthView::World::Spatial3D::CCmdDataLodModel*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->mUndoAlt);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_CmdDataLodModel_set_1mUndoAlt_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial3D::CCmdDataLodModel *pObjectX = (EarthView::World::Spatial3D::CCmdDataLodModel*)pObjXXXX;
				pObjectX->mUndoAlt = (ev_real64)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_CmdDataLodModel_get_1mUndoLocalScale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CCmdDataLodModel *pObjectX = (EarthView::World::Spatial3D::CCmdDataLodModel*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mUndoLocalScale);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_CmdDataLodModel_set_1mUndoLocalScale_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::CCmdDataLodModel *pObjectX = (EarthView::World::Spatial3D::CCmdDataLodModel*)pObjXXXX;
				pObjectX->mUndoLocalScale = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_CmdDataLodModel_get_1mUndoLocalOrientation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CCmdDataLodModel *pObjectX = (EarthView::World::Spatial3D::CCmdDataLodModel*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mUndoLocalOrientation);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_CmdDataLodModel_set_1mUndoLocalOrientation_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::CCmdDataLodModel *pObjectX = (EarthView::World::Spatial3D::CCmdDataLodModel*)pObjXXXX;
				pObjectX->mUndoLocalOrientation = *(EarthView::World::Spatial::Math::CQuaternion*) __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_CmdDataLodModel_get_1mRedoLat_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CCmdDataLodModel *pObjectX = (EarthView::World::Spatial3D::CCmdDataLodModel*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->mRedoLat);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_CmdDataLodModel_set_1mRedoLat_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial3D::CCmdDataLodModel *pObjectX = (EarthView::World::Spatial3D::CCmdDataLodModel*)pObjXXXX;
				pObjectX->mRedoLat = (ev_real64)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_CmdDataLodModel_get_1mRedoLon_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CCmdDataLodModel *pObjectX = (EarthView::World::Spatial3D::CCmdDataLodModel*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->mRedoLon);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_CmdDataLodModel_set_1mRedoLon_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial3D::CCmdDataLodModel *pObjectX = (EarthView::World::Spatial3D::CCmdDataLodModel*)pObjXXXX;
				pObjectX->mRedoLon = (ev_real64)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_CmdDataLodModel_get_1mRedoAlt_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CCmdDataLodModel *pObjectX = (EarthView::World::Spatial3D::CCmdDataLodModel*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->mRedoAlt);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_CmdDataLodModel_set_1mRedoAlt_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial3D::CCmdDataLodModel *pObjectX = (EarthView::World::Spatial3D::CCmdDataLodModel*)pObjXXXX;
				pObjectX->mRedoAlt = (ev_real64)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_CmdDataLodModel_get_1mRedoLocalScale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CCmdDataLodModel *pObjectX = (EarthView::World::Spatial3D::CCmdDataLodModel*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mRedoLocalScale);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_CmdDataLodModel_set_1mRedoLocalScale_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::CCmdDataLodModel *pObjectX = (EarthView::World::Spatial3D::CCmdDataLodModel*)pObjXXXX;
				pObjectX->mRedoLocalScale = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_CmdDataLodModel_get_1mRedoLocalOrientation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CCmdDataLodModel *pObjectX = (EarthView::World::Spatial3D::CCmdDataLodModel*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mRedoLocalOrientation);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_CmdDataLodModel_set_1mRedoLocalOrientation_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::CCmdDataLodModel *pObjectX = (EarthView::World::Spatial3D::CCmdDataLodModel*)pObjXXXX;
				pObjectX->mRedoLocalOrientation = *(EarthView::World::Spatial::Math::CQuaternion*) __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_CmdDataLodModel_get_1mMeshxFile_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CCmdDataLodModel *pObjectX = (EarthView::World::Spatial3D::CCmdDataLodModel*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mMeshxFile;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_CmdDataLodModel_set_1mMeshxFile_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Spatial3D::CCmdDataLodModel *pObjectX = (EarthView::World::Spatial3D::CCmdDataLodModel*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->mMeshxFile = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_CmdDataLodModel_get_1mIsInstance_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CCmdDataLodModel *pObjectX = (EarthView::World::Spatial3D::CCmdDataLodModel*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->mIsInstance);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_CmdDataLodModel_set_1mIsInstance_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Spatial3D::CCmdDataLodModel *pObjectX = (EarthView::World::Spatial3D::CCmdDataLodModel*)pObjXXXX;
				pObjectX->mIsInstance = (ev_bool)__values1_j;
			}
		}
	}
}
