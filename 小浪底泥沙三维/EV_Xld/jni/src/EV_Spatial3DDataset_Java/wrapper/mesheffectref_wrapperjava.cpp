/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataset/mesheffectref.h"
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
			namespace Dataset
			{
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial3d_dataset_EVMeshAttachMentTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						MAMT_EffectSubMesh,
						MAMT_EffectBone,
						MAMT_ModelSubMesh,
						MAMT_ModelBone,
						MAMT_LightSubMesh,
						MAMT_EffectNode,
						MAMT_ModelNode
					};
					jintArray array = __env->NewIntArray(7);
					__env->SetIntArrayRegion(array, 0, 7, enum_values);
					return array;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefInfo_setAliasName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring aliasName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* aliasName_ch = (const ev_char*)__env->GetStringUTFChars(aliasName_j,JNI_FALSE);
					const EVString aliasName = aliasName_ch;
					__env->ReleaseStringUTFChars(aliasName_j, (const char *)aliasName_ch);
					#else
					const ev_wchar* aliasName_ch = (const ev_wchar*)__env->GetStringChars(aliasName_j,JNI_FALSE);
					const EVString aliasName = aliasName_ch;
					__env->ReleaseStringChars(aliasName_j, (const jchar *)aliasName_ch);
					#endif
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*) pObjXXXX;
					pObjectX->setAliasName(aliasName);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefInfo_getAliasName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*) pObjXXXX;
					EVString __values1 = pObjectX->getAliasName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefInfo_setInfoID_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong infoID_j)
				{
					ev_uint32 infoID = (ev_uint32) infoID_j;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*) pObjXXXX;
					pObjectX->setInfoID(infoID);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefInfo_getInfoID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getInfoID();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefInfo_setMeshID_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong meshID_j)
				{
					ev_uint32 meshID = (ev_uint32) meshID_j;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*) pObjXXXX;
					pObjectX->setMeshID(meshID);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefInfo_getMeshID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getMeshID();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefInfo_setEffectID_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong effectID_j)
				{
					ev_uint32 effectID = (ev_uint32) effectID_j;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*) pObjXXXX;
					pObjectX->setEffectID(effectID);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefInfo_getEffectID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getEffectID();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefInfo_setType_1EVMeshAttachMentType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial3D::Dataset::EVMeshAttachMentType type = (EarthView::World::Spatial3D::Dataset::EVMeshAttachMentType) type_j;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*) pObjXXXX;
					pObjectX->setType(type);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefInfo_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::EVMeshAttachMentType __values1 = pObjectX->getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefInfo_setBoneName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring boneName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* boneName_ch = (const ev_char*)__env->GetStringUTFChars(boneName_j,JNI_FALSE);
					EVString boneName = boneName_ch;
					__env->ReleaseStringUTFChars(boneName_j, (const char *)boneName_ch);
					#else
					const ev_wchar* boneName_ch = (const ev_wchar*)__env->GetStringChars(boneName_j,JNI_FALSE);
					EVString boneName = boneName_ch;
					__env->ReleaseStringChars(boneName_j, (const jchar *)boneName_ch);
					#endif
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*) pObjXXXX;
					pObjectX->setBoneName(boneName);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefInfo_getBoneName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*) pObjXXXX;
					EVString __values1 = pObjectX->getBoneName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefInfo_getOffSetPosition_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getOffSetPosition();
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefInfo_setOffSetPosition_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offSetPosition_j)
				{
					EarthView::World::Spatial::Math::CVector3 offSetPosition = *(EarthView::World::Spatial::Math::CVector3*) offSetPosition_j;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*) pObjXXXX;
					pObjectX->setOffSetPosition(offSetPosition);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefInfo_getRotate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*) pObjXXXX;
					EarthView::World::Spatial::Math::CQuaternion __values1 = pObjectX->getRotate();
					EarthView::World::Spatial::Math::CQuaternion *returnvalues = new EarthView::World::Spatial::Math::CQuaternion(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefInfo_setRotate_1CQuaternion(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
				{
					EarthView::World::Spatial::Math::CQuaternion val = *(EarthView::World::Spatial::Math::CQuaternion*) val_j;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*) pObjXXXX;
					pObjectX->setRotate(val);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefInfo_getScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getScale();
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefInfo_setScale_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong scale_j)
				{
					EarthView::World::Spatial::Math::CVector3 scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*) pObjXXXX;
					pObjectX->setScale(scale);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefInfoVector_push_1back_1CMeshEffectRefInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo &t = *(EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*) t_j;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefInfoVector_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefInfoVector_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefInfoVector_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefInfoVector_insert_1ev_1uint32_1CMeshEffectRefInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo &t = *(EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*) t_j;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefInfoVector_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefInfoVector_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefInfoVector_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector& pObjectX = *(EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefInfoVector_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo& __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefInfoVector_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefInfoVector_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefInfoVector_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefInfoVector_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefManager_getMeshEffectRefInfos_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong meshID_j)
				{
					ev_uint32 meshID = (ev_uint32) meshID_j;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector __values1 = pObjectX->getMeshEffectRefInfos(meshID);
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector *returnvalues = new EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefManager_getBindModelMeshEffectRefInfos_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong meshID_j)
				{
					ev_uint32 meshID = (ev_uint32) meshID_j;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector __values1 = pObjectX->getBindModelMeshEffectRefInfos(meshID);
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector *returnvalues = new EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefManager_getBindEffectMeshEffectRefInfos_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong meshID_j)
				{
					ev_uint32 meshID = (ev_uint32) meshID_j;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector __values1 = pObjectX->getBindEffectMeshEffectRefInfos(meshID);
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector *returnvalues = new EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefManager_getBindLightMeshEffectRefInfos_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong meshID_j)
				{
					ev_uint32 meshID = (ev_uint32) meshID_j;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector __values1 = pObjectX->getBindLightMeshEffectRefInfos(meshID);
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector *returnvalues = new EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefManager_getMeshEffectRefInfo_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evID_j)
				{
					ev_uint32 evID = (ev_uint32) evID_j;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo __values1 = pObjectX->getMeshEffectRefInfo(evID);
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo *returnvalues = new EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefManager_insertMeshEffectRefInfo_1CMeshEffectRefInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong info_j)
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo *info = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*) info_j;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->insertMeshEffectRefInfo(info);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefManager_deleteMeshEffectRef_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong meshID_j)
				{
					ev_uint32 meshID = (ev_uint32) meshID_j;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->deleteMeshEffectRef(meshID);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefManager_deleteBindModelMeshEffectRef_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong meshID_j)
				{
					ev_uint32 meshID = (ev_uint32) meshID_j;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->deleteBindModelMeshEffectRef(meshID);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefManager_deleteBindLightMeshEffectRef_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong meshID_j)
				{
					ev_uint32 meshID = (ev_uint32) meshID_j;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->deleteBindLightMeshEffectRef(meshID);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefManager_deleteBindEffectMeshEffectRef_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong meshID_j)
				{
					ev_uint32 meshID = (ev_uint32) meshID_j;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->deleteBindEffectMeshEffectRef(meshID);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefManager_deleteBindMeshRef_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong BindID_j)
				{
					ev_uint32 BindID = (ev_uint32) BindID_j;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->deleteBindMeshRef(BindID);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefManager_deleteRef_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evID_j)
				{
					ev_uint32 evID = (ev_uint32) evID_j;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->deleteRef(evID);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefManager_clearTable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->clearTable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefManager_updateMeshEffectRefPosition_1ev_1uint32_1CVector3_1CQuaternion_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evId_j, jlong offSetPosition_j, jlong rotate_j, jlong scale_j)
				{
					ev_uint32 evId = (ev_uint32) evId_j;
					EarthView::World::Spatial::Math::CVector3 offSetPosition = *(EarthView::World::Spatial::Math::CVector3*) offSetPosition_j;
					EarthView::World::Spatial::Math::CQuaternion rotate = *(EarthView::World::Spatial::Math::CQuaternion*) rotate_j;
					EarthView::World::Spatial::Math::CVector3 scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->updateMeshEffectRefPosition(evId, offSetPosition, rotate, scale);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefManager_checkAliasName_1EVString_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring aliasName_j, jlong modelId_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* aliasName_ch = (const ev_char*)__env->GetStringUTFChars(aliasName_j,JNI_FALSE);
					const EVString aliasName = aliasName_ch;
					__env->ReleaseStringUTFChars(aliasName_j, (const char *)aliasName_ch);
					#else
					const ev_wchar* aliasName_ch = (const ev_wchar*)__env->GetStringChars(aliasName_j,JNI_FALSE);
					const EVString aliasName = aliasName_ch;
					__env->ReleaseStringChars(aliasName_j, (const jchar *)aliasName_ch);
					#endif
					ev_uint32 modelId = (ev_uint32) modelId_j;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->checkAliasName(aliasName, modelId);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefManager_updateMeshEffectRefAliasName_1ev_1uint32_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evId_j, jstring aliasName_j)
				{
					ev_uint32 evId = (ev_uint32) evId_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* aliasName_ch = (const ev_char*)__env->GetStringUTFChars(aliasName_j,JNI_FALSE);
					const EVString aliasName = aliasName_ch;
					__env->ReleaseStringUTFChars(aliasName_j, (const char *)aliasName_ch);
					#else
					const ev_wchar* aliasName_ch = (const ev_wchar*)__env->GetStringChars(aliasName_j,JNI_FALSE);
					const EVString aliasName = aliasName_ch;
					__env->ReleaseStringChars(aliasName_j, (const jchar *)aliasName_ch);
					#endif
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->updateMeshEffectRefAliasName(evId, aliasName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefManager_updateMeshLightRefProperty_1ev_1uint32_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evId_j, jstring propertyStr_j)
				{
					ev_uint32 evId = (ev_uint32) evId_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* propertyStr_ch = (const ev_char*)__env->GetStringUTFChars(propertyStr_j,JNI_FALSE);
					const EVString propertyStr = propertyStr_ch;
					__env->ReleaseStringUTFChars(propertyStr_j, (const char *)propertyStr_ch);
					#else
					const ev_wchar* propertyStr_ch = (const ev_wchar*)__env->GetStringChars(propertyStr_j,JNI_FALSE);
					const EVString propertyStr = propertyStr_ch;
					__env->ReleaseStringChars(propertyStr_j, (const jchar *)propertyStr_ch);
					#endif
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->updateMeshLightRefProperty(evId, propertyStr);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefManager_checkMeshEffectRefTable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager*) pObjXXXX;
					pObjectX->checkMeshEffectRefTable();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefManager_getMaxMeshEffectRefID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getMaxMeshEffectRefID();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_MeshEffectRefManager_initMeshInsPos_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->initMeshInsPos();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
		}
	}
}
