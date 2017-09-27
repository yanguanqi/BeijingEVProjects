/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataset/modeldatasetutility.h"
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
			namespace Geometry
			{
			}
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
		namespace Spatial3D
		{
			namespace Dataset
			{
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_ModelDatasetUtility_getTableFields_1CSqlDatabase_1EVString_1IFields(JNIEnv *__env , jclass __clazz, jlong db_j, jstring tab_j, jlong flds_j)
				{
					EarthView::World::Core::Database::CSqlDatabase &db = *(EarthView::World::Core::Database::CSqlDatabase*) db_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* tab_ch = (const ev_char*)__env->GetStringUTFChars(tab_j,JNI_FALSE);
					const EVString tab = tab_ch;
					__env->ReleaseStringUTFChars(tab_j, (const char *)tab_ch);
					#else
					const ev_wchar* tab_ch = (const ev_wchar*)__env->GetStringChars(tab_j,JNI_FALSE);
					const EVString tab = tab_ch;
					__env->ReleaseStringChars(tab_j, (const jchar *)tab_ch);
					#endif
					EarthView::World::Spatial::GeoDataset::IFields *flds = (EarthView::World::Spatial::GeoDataset::IFields*) flds_j;
					ev_uint32 __values1 = EarthView::World::Spatial3D::Dataset::CModelDatasetUtility::getTableFields(db, tab, flds);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelDatasetUtility_clearTable_1CSqlDatabase_1EVString(JNIEnv *__env , jclass __clazz, jlong db_j, jlong tab_j)
				{
					EarthView::World::Core::Database::CSqlDatabase &db = *(EarthView::World::Core::Database::CSqlDatabase*) db_j;
					EVString &tab = *(EVString*) tab_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Dataset::CModelDatasetUtility::clearTable(db, tab);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_ModelDatasetUtility_convertToWgs84_1ISpatialReference_1CEnvelope_1CEnvelope(JNIEnv *__env , jclass __clazz, jlong spatialRef_j, jlong resEnvelope_j, jlong desEnvelope_j)
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference *spatialRef = (const EarthView::World::Spatial::Geometry::ISpatialReference*) spatialRef_j;
					const EarthView::World::Spatial::Geometry::CEnvelope &resEnvelope = *(EarthView::World::Spatial::Geometry::CEnvelope*) resEnvelope_j;
					EarthView::World::Spatial::Geometry::CEnvelope &desEnvelope = *(EarthView::World::Spatial::Geometry::CEnvelope*) desEnvelope_j;
					EarthView::World::Spatial3D::Dataset::CModelDatasetUtility::convertToWgs84(spatialRef, resEnvelope, desEnvelope);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_ModelDatasetUtility_convertToWgs84_1ISpatialReference_1CVector3_1CVector3(JNIEnv *__env , jclass __clazz, jlong spatialRef_j, jlong resVector_j, jlong desVector_j)
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference *spatialRef = (const EarthView::World::Spatial::Geometry::ISpatialReference*) spatialRef_j;
					const EarthView::World::Spatial::Math::CVector3 &resVector = *(EarthView::World::Spatial::Math::CVector3*) resVector_j;
					EarthView::World::Spatial::Math::CVector3 &desVector = *(EarthView::World::Spatial::Math::CVector3*) desVector_j;
					EarthView::World::Spatial3D::Dataset::CModelDatasetUtility::convertToWgs84(spatialRef, resVector, desVector);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_ModelDatasetUtility_convertWgs84ToProjCoordinateData_1ISpatialReference_1CEnvelope_1CEnvelope(JNIEnv *__env , jclass __clazz, jlong spatialRef_j, jlong resEnvelope_j, jlong desEnvelope_j)
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference *spatialRef = (const EarthView::World::Spatial::Geometry::ISpatialReference*) spatialRef_j;
					const EarthView::World::Spatial::Geometry::CEnvelope &resEnvelope = *(EarthView::World::Spatial::Geometry::CEnvelope*) resEnvelope_j;
					EarthView::World::Spatial::Geometry::CEnvelope &desEnvelope = *(EarthView::World::Spatial::Geometry::CEnvelope*) desEnvelope_j;
					EarthView::World::Spatial3D::Dataset::CModelDatasetUtility::convertWgs84ToProjCoordinateData(spatialRef, resEnvelope, desEnvelope);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_ModelDatasetUtility_convertWgs84ToProjCoordinateData_1ISpatialReference_1CVector3_1CVector3(JNIEnv *__env , jclass __clazz, jlong spatialRef_j, jlong resVector_j, jlong desVector_j)
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference *spatialRef = (const EarthView::World::Spatial::Geometry::ISpatialReference*) spatialRef_j;
					const EarthView::World::Spatial::Math::CVector3 &resVector = *(EarthView::World::Spatial::Math::CVector3*) resVector_j;
					EarthView::World::Spatial::Math::CVector3 &desVector = *(EarthView::World::Spatial::Math::CVector3*) desVector_j;
					EarthView::World::Spatial3D::Dataset::CModelDatasetUtility::convertWgs84ToProjCoordinateData(spatialRef, resVector, desVector);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_ModelDatasetUtility_QuaterToAngle_1CQuaternion(JNIEnv *__env , jclass __clazz, jlong quter_j)
				{
					const EarthView::World::Spatial::Math::CQuaternion &quter = *(EarthView::World::Spatial::Math::CQuaternion*) quter_j;
					EarthView::World::Spatial::Math::CVector3 __values1 = EarthView::World::Spatial3D::Dataset::CModelDatasetUtility::QuaterToAngle(quter);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_ModelDatasetUtility_AngleToQuater_1CVector3(JNIEnv *__env , jclass __clazz, jlong v3_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &v3 = *(EarthView::World::Spatial::Math::CVector3*) v3_j;
					EarthView::World::Spatial::Math::CQuaternion __values1 = EarthView::World::Spatial3D::Dataset::CModelDatasetUtility::AngleToQuater(v3);
					EarthView::World::Spatial::Math::CQuaternion *returnvalues = new EarthView::World::Spatial::Math::CQuaternion(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelDatasetUtility_isCubeTexture_1EVString(JNIEnv *__env , jclass __clazz, jstring filename_j)
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
					ev_bool __values1 = EarthView::World::Spatial3D::Dataset::CModelDatasetUtility::isCubeTexture(filename);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
		}
	}
}
