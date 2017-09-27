/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataset/modelfeatureutility.h"
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
		namespace Spatial
		{
			namespace Geometry
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_checkDDS_1EVString(JNIEnv *__env , jclass __clazz, jstring filename_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
					const EVString filename = filename_ch;
					__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
					#else
					const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
					const EVString filename = filename_ch;
					__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
					#endif
					ev_bool __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::checkDDS(filename);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_releaseFeatureVector_1FeatureVector(JNIEnv *__env , jclass __clazz, jlong featureVec_j)
				{
					EarthView::World::Spatial3D::Dataset::FeatureVector &featureVec = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) featureVec_j;
					EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::releaseFeatureVector(featureVec);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_releaseFeature_1IFeature(JNIEnv *__env , jclass __clazz, jlong feature_j)
				{
					EarthView::World::Spatial::GeoDataset::IFeature *feature = (EarthView::World::Spatial::GeoDataset::IFeature*) feature_j;
					EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::releaseFeature(feature);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_setFeatureVectorDataStreamNull_1FeatureVector(JNIEnv *__env , jclass __clazz, jlong featureVec_j)
				{
					const EarthView::World::Spatial3D::Dataset::FeatureVector &featureVec = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) featureVec_j;
					EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setFeatureVectorDataStreamNull(featureVec);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_setEntityID_1IFeature_1ev_1uint32(JNIEnv *__env , jclass __clazz, jlong pMeshFeature_j, jlong entID_j)
				{
					EarthView::World::Spatial::GeoDataset::IFeature *pMeshFeature = (EarthView::World::Spatial::GeoDataset::IFeature*) pMeshFeature_j;
					ev_uint32 entID = (ev_uint32) entID_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setEntityID(pMeshFeature, entID);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_getEntityID_1IFeature(JNIEnv *__env , jclass __clazz, jlong pMeshFeature_j)
				{
					const EarthView::World::Spatial::GeoDataset::IFeature *pMeshFeature = (const EarthView::World::Spatial::GeoDataset::IFeature*) pMeshFeature_j;
					ev_uint32 __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getEntityID(pMeshFeature);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_setEntityName_1IFeature_1EVString(JNIEnv *__env , jclass __clazz, jlong pMeshFeature_j, jstring entName_j)
				{
					EarthView::World::Spatial::GeoDataset::IFeature *pMeshFeature = (EarthView::World::Spatial::GeoDataset::IFeature*) pMeshFeature_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* entName_ch = (const ev_char*)__env->GetStringUTFChars(entName_j,JNI_FALSE);
					const EVString entName = entName_ch;
					__env->ReleaseStringUTFChars(entName_j, (const char *)entName_ch);
					#else
					const ev_wchar* entName_ch = (const ev_wchar*)__env->GetStringChars(entName_j,JNI_FALSE);
					const EVString entName = entName_ch;
					__env->ReleaseStringChars(entName_j, (const jchar *)entName_ch);
					#endif
					ev_bool __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setEntityName(pMeshFeature, entName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_getEntityName_1IFeature(JNIEnv *__env , jclass __clazz, jlong pMeshFeature_j)
				{
					const EarthView::World::Spatial::GeoDataset::IFeature *pMeshFeature = (const EarthView::World::Spatial::GeoDataset::IFeature*) pMeshFeature_j;
					EVString __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getEntityName(pMeshFeature);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_setEntityBound_1IFeature_1CAxisAlignedBox(JNIEnv *__env , jclass __clazz, jlong pMeshFeature_j, jlong box_j)
				{
					EarthView::World::Spatial::GeoDataset::IFeature *pMeshFeature = (EarthView::World::Spatial::GeoDataset::IFeature*) pMeshFeature_j;
					const EarthView::World::Spatial::Math::CAxisAlignedBox &box = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) box_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setEntityBound(pMeshFeature, box);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_getEntityBound_1IFeature(JNIEnv *__env , jclass __clazz, jlong pMeshFeature_j)
				{
					const EarthView::World::Spatial::GeoDataset::IFeature *pMeshFeature = (const EarthView::World::Spatial::GeoDataset::IFeature*) pMeshFeature_j;
					EarthView::World::Spatial::Math::CAxisAlignedBox __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getEntityBound(pMeshFeature);
					EarthView::World::Spatial::Math::CAxisAlignedBox *returnvalues = new EarthView::World::Spatial::Math::CAxisAlignedBox(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_setEntityPos_1ISpatialReference_1IFeature_1CVector3(JNIEnv *__env , jclass __clazz, jlong spatialRef_j, jlong pMeshFeature_j, jlong pos_j)
				{
					EarthView::World::Spatial::Geometry::ISpatialReference *spatialRef = (EarthView::World::Spatial::Geometry::ISpatialReference*) spatialRef_j;
					EarthView::World::Spatial::GeoDataset::IFeature *pMeshFeature = (EarthView::World::Spatial::GeoDataset::IFeature*) pMeshFeature_j;
					const EarthView::World::Spatial::Math::CVector3 &pos = *(EarthView::World::Spatial::Math::CVector3*) pos_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setEntityPos(spatialRef, pMeshFeature, pos);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_setEntityPos_1IFeature_1CVector3(JNIEnv *__env , jclass __clazz, jlong pMeshFeature_j, jlong pos_j)
				{
					EarthView::World::Spatial::GeoDataset::IFeature *pMeshFeature = (EarthView::World::Spatial::GeoDataset::IFeature*) pMeshFeature_j;
					const EarthView::World::Spatial::Math::CVector3 &pos = *(EarthView::World::Spatial::Math::CVector3*) pos_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setEntityPos(pMeshFeature, pos);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_getOriginalEntityPos_1IFeature(JNIEnv *__env , jclass __clazz, jlong pMeshFeature_j)
				{
					const EarthView::World::Spatial::GeoDataset::IFeature *pMeshFeature = (const EarthView::World::Spatial::GeoDataset::IFeature*) pMeshFeature_j;
					EarthView::World::Spatial::Math::CVector3 __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getOriginalEntityPos(pMeshFeature);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_getWgs84EntityPos_1ISpatialReference_1IFeature(JNIEnv *__env , jclass __clazz, jlong spatialRef_j, jlong pMeshFeature_j)
				{
					EarthView::World::Spatial::Geometry::ISpatialReference *spatialRef = (EarthView::World::Spatial::Geometry::ISpatialReference*) spatialRef_j;
					const EarthView::World::Spatial::GeoDataset::IFeature *pMeshFeature = (const EarthView::World::Spatial::GeoDataset::IFeature*) pMeshFeature_j;
					EarthView::World::Spatial::Math::CVector3 __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getWgs84EntityPos(spatialRef, pMeshFeature);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_setEntityScale_1IFeature_1CVector3(JNIEnv *__env , jclass __clazz, jlong pMeshFeature_j, jlong scale_j)
				{
					EarthView::World::Spatial::GeoDataset::IFeature *pMeshFeature = (EarthView::World::Spatial::GeoDataset::IFeature*) pMeshFeature_j;
					const EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setEntityScale(pMeshFeature, scale);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_getEntityScale_1IFeature(JNIEnv *__env , jclass __clazz, jlong pMeshFeature_j)
				{
					const EarthView::World::Spatial::GeoDataset::IFeature *pMeshFeature = (const EarthView::World::Spatial::GeoDataset::IFeature*) pMeshFeature_j;
					EarthView::World::Spatial::Math::CVector3 __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getEntityScale(pMeshFeature);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_setEntityQuaternion_1IFeature_1CQuaternion(JNIEnv *__env , jclass __clazz, jlong pMeshFeature_j, jlong qua_j)
				{
					EarthView::World::Spatial::GeoDataset::IFeature *pMeshFeature = (EarthView::World::Spatial::GeoDataset::IFeature*) pMeshFeature_j;
					const EarthView::World::Spatial::Math::CQuaternion &qua = *(EarthView::World::Spatial::Math::CQuaternion*) qua_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setEntityQuaternion(pMeshFeature, qua);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_getEntityQuaternion_1IFeature(JNIEnv *__env , jclass __clazz, jlong pMeshFeature_j)
				{
					const EarthView::World::Spatial::GeoDataset::IFeature *pMeshFeature = (const EarthView::World::Spatial::GeoDataset::IFeature*) pMeshFeature_j;
					EarthView::World::Spatial::Math::CQuaternion __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getEntityQuaternion(pMeshFeature);
					EarthView::World::Spatial::Math::CQuaternion *returnvalues = new EarthView::World::Spatial::Math::CQuaternion(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_setEntityFromTemplate_1IFeature_1ev_1bool(JNIEnv *__env , jclass __clazz, jlong pMeshFeature_j, jboolean flag_j)
				{
					EarthView::World::Spatial::GeoDataset::IFeature *pMeshFeature = (EarthView::World::Spatial::GeoDataset::IFeature*) pMeshFeature_j;
					ev_bool flag = (ev_bool) flag_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setEntityFromTemplate(pMeshFeature, flag);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_getEntityFromTemplate_1IFeature(JNIEnv *__env , jclass __clazz, jlong pMeshFeature_j)
				{
					const EarthView::World::Spatial::GeoDataset::IFeature *pMeshFeature = (const EarthView::World::Spatial::GeoDataset::IFeature*) pMeshFeature_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getEntityFromTemplate(pMeshFeature);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_setAltitude_1IFeature_1EVAltitudeMode_1ev_1real64(JNIEnv *__env , jclass __clazz, jlong pMeshFeature_j, jint altitudeMode_j, jdouble altitudeVal_j)
				{
					EarthView::World::Spatial::GeoDataset::IFeature *pMeshFeature = (EarthView::World::Spatial::GeoDataset::IFeature*) pMeshFeature_j;
					EarthView::World::Spatial::Utility::EVAltitudeMode altitudeMode = (EarthView::World::Spatial::Utility::EVAltitudeMode) altitudeMode_j;
					ev_real64 altitudeVal = (ev_real64) altitudeVal_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setAltitude(pMeshFeature, altitudeMode, altitudeVal);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_getAltitude_1IFeature_1EVAltitudeMode_1ev_1real64(JNIEnv *__env , jclass __clazz, jlong pMeshFeature_j, jlong altitudeMode_j, jlong altitudeVal_j)
				{
					const EarthView::World::Spatial::GeoDataset::IFeature *pMeshFeature = (const EarthView::World::Spatial::GeoDataset::IFeature*) pMeshFeature_j;
					EarthView::World::Spatial::Utility::EVAltitudeMode &altitudeMode = *(EarthView::World::Spatial::Utility::EVAltitudeMode*) altitudeMode_j;
					ev_real64 &altitudeVal = *(ev_real64*) altitudeVal_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getAltitude(pMeshFeature, altitudeMode, altitudeVal);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_setMeshID_1IFeature_1ev_1uint32(JNIEnv *__env , jclass __clazz, jlong pMeshFeature_j, jlong meshID_j)
				{
					EarthView::World::Spatial::GeoDataset::IFeature *pMeshFeature = (EarthView::World::Spatial::GeoDataset::IFeature*) pMeshFeature_j;
					ev_uint32 meshID = (ev_uint32) meshID_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setMeshID(pMeshFeature, meshID);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_getMeshID_1IFeature(JNIEnv *__env , jclass __clazz, jlong pMeshFeature_j)
				{
					const EarthView::World::Spatial::GeoDataset::IFeature *pMeshFeature = (const EarthView::World::Spatial::GeoDataset::IFeature*) pMeshFeature_j;
					ev_uint32 __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getMeshID(pMeshFeature);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_setMeshTmplID_1IFeature_1ev_1uint32(JNIEnv *__env , jclass __clazz, jlong pMeshFeature_j, jlong meshTmplID_j)
				{
					EarthView::World::Spatial::GeoDataset::IFeature *pMeshFeature = (EarthView::World::Spatial::GeoDataset::IFeature*) pMeshFeature_j;
					ev_uint32 meshTmplID = (ev_uint32) meshTmplID_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setMeshTmplID(pMeshFeature, meshTmplID);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_getMeshTmplID_1IFeature(JNIEnv *__env , jclass __clazz, jlong pMeshFeature_j)
				{
					const EarthView::World::Spatial::GeoDataset::IFeature *pMeshFeature = (const EarthView::World::Spatial::GeoDataset::IFeature*) pMeshFeature_j;
					ev_uint32 __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getMeshTmplID(pMeshFeature);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_setMeshName_1IFeature_1EVString(JNIEnv *__env , jclass __clazz, jlong pMeshFeature_j, jstring meshName_j)
				{
					EarthView::World::Spatial::GeoDataset::IFeature *pMeshFeature = (EarthView::World::Spatial::GeoDataset::IFeature*) pMeshFeature_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* meshName_ch = (const ev_char*)__env->GetStringUTFChars(meshName_j,JNI_FALSE);
					const EVString meshName = meshName_ch;
					__env->ReleaseStringUTFChars(meshName_j, (const char *)meshName_ch);
					#else
					const ev_wchar* meshName_ch = (const ev_wchar*)__env->GetStringChars(meshName_j,JNI_FALSE);
					const EVString meshName = meshName_ch;
					__env->ReleaseStringChars(meshName_j, (const jchar *)meshName_ch);
					#endif
					ev_bool __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setMeshName(pMeshFeature, meshName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_getMeshName_1IFeature(JNIEnv *__env , jclass __clazz, jlong pMeshFeature_j)
				{
					const EarthView::World::Spatial::GeoDataset::IFeature *pMeshFeature = (const EarthView::World::Spatial::GeoDataset::IFeature*) pMeshFeature_j;
					EVString __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getMeshName(pMeshFeature);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_setMeshFilename_1IFeature_1EVString(JNIEnv *__env , jclass __clazz, jlong pMeshFeature_j, jstring meshFilename_j)
				{
					EarthView::World::Spatial::GeoDataset::IFeature *pMeshFeature = (EarthView::World::Spatial::GeoDataset::IFeature*) pMeshFeature_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* meshFilename_ch = (const ev_char*)__env->GetStringUTFChars(meshFilename_j,JNI_FALSE);
					const EVString meshFilename = meshFilename_ch;
					__env->ReleaseStringUTFChars(meshFilename_j, (const char *)meshFilename_ch);
					#else
					const ev_wchar* meshFilename_ch = (const ev_wchar*)__env->GetStringChars(meshFilename_j,JNI_FALSE);
					const EVString meshFilename = meshFilename_ch;
					__env->ReleaseStringChars(meshFilename_j, (const jchar *)meshFilename_ch);
					#endif
					ev_bool __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setMeshFilename(pMeshFeature, meshFilename);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_getMeshFilename_1IFeature(JNIEnv *__env , jclass __clazz, jlong pMeshFeature_j)
				{
					const EarthView::World::Spatial::GeoDataset::IFeature *pMeshFeature = (const EarthView::World::Spatial::GeoDataset::IFeature*) pMeshFeature_j;
					EVString __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getMeshFilename(pMeshFeature);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_setMeshData_1IFeature_1MemoryDataStreamPtr(JNIEnv *__env , jclass __clazz, jlong pMeshFeature_j, jlong meshData_j)
				{
					EarthView::World::Spatial::GeoDataset::IFeature *pMeshFeature = (EarthView::World::Spatial::GeoDataset::IFeature*) pMeshFeature_j;
					EarthView::World::Core::MemoryDataStreamPtr meshData = *(EarthView::World::Core::MemoryDataStreamPtr*) meshData_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setMeshData(pMeshFeature, meshData);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_getMeshData_1IFeature(JNIEnv *__env , jclass __clazz, jlong pMeshFeature_j)
				{
					const EarthView::World::Spatial::GeoDataset::IFeature *pMeshFeature = (const EarthView::World::Spatial::GeoDataset::IFeature*) pMeshFeature_j;
					EarthView::World::Core::MemoryDataStreamPtr __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getMeshData(pMeshFeature);
					EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_setMeshPos_1IFeature_1CVector3(JNIEnv *__env , jclass __clazz, jlong pMeshFeature_j, jlong pos_j)
				{
					EarthView::World::Spatial::GeoDataset::IFeature *pMeshFeature = (EarthView::World::Spatial::GeoDataset::IFeature*) pMeshFeature_j;
					const EarthView::World::Spatial::Math::CVector3 &pos = *(EarthView::World::Spatial::Math::CVector3*) pos_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setMeshPos(pMeshFeature, pos);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_getMeshPos_1IFeature(JNIEnv *__env , jclass __clazz, jlong pMeshFeature_j)
				{
					const EarthView::World::Spatial::GeoDataset::IFeature *pMeshFeature = (const EarthView::World::Spatial::GeoDataset::IFeature*) pMeshFeature_j;
					EarthView::World::Spatial::Math::CVector3 __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getMeshPos(pMeshFeature);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_setMeshScale_1IFeature_1CVector3(JNIEnv *__env , jclass __clazz, jlong pMeshFeature_j, jlong scale_j)
				{
					EarthView::World::Spatial::GeoDataset::IFeature *pMeshFeature = (EarthView::World::Spatial::GeoDataset::IFeature*) pMeshFeature_j;
					const EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setMeshScale(pMeshFeature, scale);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_getMeshScale_1IFeature(JNIEnv *__env , jclass __clazz, jlong pMeshFeature_j)
				{
					const EarthView::World::Spatial::GeoDataset::IFeature *pMeshFeature = (const EarthView::World::Spatial::GeoDataset::IFeature*) pMeshFeature_j;
					EarthView::World::Spatial::Math::CVector3 __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getMeshScale(pMeshFeature);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_setMeshQuaternion_1IFeature_1CQuaternion(JNIEnv *__env , jclass __clazz, jlong pMeshFeature_j, jlong qua_j)
				{
					EarthView::World::Spatial::GeoDataset::IFeature *pMeshFeature = (EarthView::World::Spatial::GeoDataset::IFeature*) pMeshFeature_j;
					const EarthView::World::Spatial::Math::CQuaternion &qua = *(EarthView::World::Spatial::Math::CQuaternion*) qua_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setMeshQuaternion(pMeshFeature, qua);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_getMeshQuaternion_1IFeature(JNIEnv *__env , jclass __clazz, jlong pMeshFeature_j)
				{
					const EarthView::World::Spatial::GeoDataset::IFeature *pMeshFeature = (const EarthView::World::Spatial::GeoDataset::IFeature*) pMeshFeature_j;
					EarthView::World::Spatial::Math::CQuaternion __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getMeshQuaternion(pMeshFeature);
					EarthView::World::Spatial::Math::CQuaternion *returnvalues = new EarthView::World::Spatial::Math::CQuaternion(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_setResID_1IFeature_1ev_1uint32(JNIEnv *__env , jclass __clazz, jlong pResFeature_j, jlong resID_j)
				{
					EarthView::World::Spatial::GeoDataset::IFeature *pResFeature = (EarthView::World::Spatial::GeoDataset::IFeature*) pResFeature_j;
					ev_uint32 resID = (ev_uint32) resID_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setResID(pResFeature, resID);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_getResID_1IFeature(JNIEnv *__env , jclass __clazz, jlong pResFeature_j)
				{
					const EarthView::World::Spatial::GeoDataset::IFeature *pResFeature = (const EarthView::World::Spatial::GeoDataset::IFeature*) pResFeature_j;
					ev_uint32 __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getResID(pResFeature);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_setResFilename_1IFeature_1EVString(JNIEnv *__env , jclass __clazz, jlong pResFeature_j, jstring resFilename_j)
				{
					EarthView::World::Spatial::GeoDataset::IFeature *pResFeature = (EarthView::World::Spatial::GeoDataset::IFeature*) pResFeature_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* resFilename_ch = (const ev_char*)__env->GetStringUTFChars(resFilename_j,JNI_FALSE);
					const EVString resFilename = resFilename_ch;
					__env->ReleaseStringUTFChars(resFilename_j, (const char *)resFilename_ch);
					#else
					const ev_wchar* resFilename_ch = (const ev_wchar*)__env->GetStringChars(resFilename_j,JNI_FALSE);
					const EVString resFilename = resFilename_ch;
					__env->ReleaseStringChars(resFilename_j, (const jchar *)resFilename_ch);
					#endif
					ev_bool __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setResFilename(pResFeature, resFilename);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_getResFilename_1IFeature(JNIEnv *__env , jclass __clazz, jlong pResFeature_j)
				{
					const EarthView::World::Spatial::GeoDataset::IFeature *pResFeature = (const EarthView::World::Spatial::GeoDataset::IFeature*) pResFeature_j;
					EVString __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getResFilename(pResFeature);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_setResType_1IFeature_1MaterialResourceType(JNIEnv *__env , jclass __clazz, jlong pResFeature_j, jint type_j)
				{
					EarthView::World::Spatial::GeoDataset::IFeature *pResFeature = (EarthView::World::Spatial::GeoDataset::IFeature*) pResFeature_j;
					EarthView::World::Spatial3D::Dataset::MaterialResourceType type = (EarthView::World::Spatial3D::Dataset::MaterialResourceType) type_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setResType(pResFeature, type);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_getResType_1IFeature(JNIEnv *__env , jclass __clazz, jlong pResFeature_j)
				{
					const EarthView::World::Spatial::GeoDataset::IFeature *pResFeature = (const EarthView::World::Spatial::GeoDataset::IFeature*) pResFeature_j;
					EarthView::World::Spatial3D::Dataset::MaterialResourceType __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getResType(pResFeature);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_setResData_1IFeature_1MemoryDataStreamPtr(JNIEnv *__env , jclass __clazz, jlong pResFeature_j, jlong resData_j)
				{
					EarthView::World::Spatial::GeoDataset::IFeature *pResFeature = (EarthView::World::Spatial::GeoDataset::IFeature*) pResFeature_j;
					EarthView::World::Core::MemoryDataStreamPtr resData = *(EarthView::World::Core::MemoryDataStreamPtr*) resData_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setResData(pResFeature, resData);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_getResData_1IFeature(JNIEnv *__env , jclass __clazz, jlong pResFeature_j)
				{
					const EarthView::World::Spatial::GeoDataset::IFeature *pResFeature = (const EarthView::World::Spatial::GeoDataset::IFeature*) pResFeature_j;
					EarthView::World::Core::MemoryDataStreamPtr __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getResData(pResFeature);
					EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_setRefResID_1IFeature_1ev_1uint32(JNIEnv *__env , jclass __clazz, jlong pResFeature_j, jlong resID_j)
				{
					EarthView::World::Spatial::GeoDataset::IFeature *pResFeature = (EarthView::World::Spatial::GeoDataset::IFeature*) pResFeature_j;
					ev_uint32 resID = (ev_uint32) resID_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setRefResID(pResFeature, resID);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_getRefResID_1IFeature(JNIEnv *__env , jclass __clazz, jlong pResFeature_j)
				{
					const EarthView::World::Spatial::GeoDataset::IFeature *pResFeature = (const EarthView::World::Spatial::GeoDataset::IFeature*) pResFeature_j;
					ev_uint32 __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getRefResID(pResFeature);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_setRefMeshID_1IFeature_1ev_1uint32(JNIEnv *__env , jclass __clazz, jlong pResFeature_j, jlong meshID_j)
				{
					EarthView::World::Spatial::GeoDataset::IFeature *pResFeature = (EarthView::World::Spatial::GeoDataset::IFeature*) pResFeature_j;
					ev_uint32 meshID = (ev_uint32) meshID_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setRefMeshID(pResFeature, meshID);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_getRefMeshID_1IFeature(JNIEnv *__env , jclass __clazz, jlong pResFeature_j)
				{
					const EarthView::World::Spatial::GeoDataset::IFeature *pResFeature = (const EarthView::World::Spatial::GeoDataset::IFeature*) pResFeature_j;
					ev_uint32 __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getRefMeshID(pResFeature);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_setResRefCount_1IFeature_1ev_1uint32(JNIEnv *__env , jclass __clazz, jlong pResFeature_j, jlong refCount_j)
				{
					EarthView::World::Spatial::GeoDataset::IFeature *pResFeature = (EarthView::World::Spatial::GeoDataset::IFeature*) pResFeature_j;
					ev_uint32 refCount = (ev_uint32) refCount_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setResRefCount(pResFeature, refCount);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_getResRefCount_1IFeature(JNIEnv *__env , jclass __clazz, jlong pResFeature_j)
				{
					const EarthView::World::Spatial::GeoDataset::IFeature *pResFeature = (const EarthView::World::Spatial::GeoDataset::IFeature*) pResFeature_j;
					ev_uint32 __values1 = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getResRefCount(pResFeature);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_getBoundCenter_1IFeature_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jclass __clazz, jlong pMeshFeature_j, jlong latitude_j, jlong longitude_j, jlong altitude_j)
				{
					const EarthView::World::Spatial::GeoDataset::IFeature *pMeshFeature = (const EarthView::World::Spatial::GeoDataset::IFeature*) pMeshFeature_j;
					ev_real64 &latitude = *(ev_real64*) latitude_j;
					ev_real64 &longitude = *(ev_real64*) longitude_j;
					ev_real64 &altitude = *(ev_real64*) altitude_j;
					EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getBoundCenter(pMeshFeature, latitude, longitude, altitude);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_ModelFeatureUtility_mergeFeature_1IFeature_1IFeature(JNIEnv *__env , jclass __clazz, jlong pOutFeature_j, jlong pSrcFeature_j)
				{
					EarthView::World::Spatial::GeoDataset::IFeature *&pOutFeature = *(EarthView::World::Spatial::GeoDataset::IFeature**) pOutFeature_j;
					const EarthView::World::Spatial::GeoDataset::IFeature *pSrcFeature = (const EarthView::World::Spatial::GeoDataset::IFeature*) pSrcFeature_j;
					EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::mergeFeature(pOutFeature, pSrcFeature);
				}
			}
		}
	}
}
