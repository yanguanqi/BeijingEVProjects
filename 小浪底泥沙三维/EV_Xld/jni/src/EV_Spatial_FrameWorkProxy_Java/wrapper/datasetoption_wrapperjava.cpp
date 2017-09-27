/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/datasetoption.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Utilities
		{
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_utilities_ModelDatasetTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					EntityModelDataset,
					InstanceModelDataset
				};
				jintArray array = __env->NewIntArray(2);
				__env->SetIntArrayRegion(array, 0, 2, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_utilities_KMLDatasetTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					KMLDataset,
					KMZDataset
				};
				jintArray array = __env->NewIntArray(2);
				__env->SetIntArrayRegion(array, 0, 2, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_utilities_DatasetOption_create_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Utilities::DatasetOption *pObjectX = (EarthView::World::Utilities::DatasetOption*) pObjXXXX;
				EarthView::World::Utilities::DatasetOption_Create& __values1 = pObjectX->create();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_utilities_DatasetOptionCreate_db_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Utilities::DatasetOption_Create *pObjectX = (EarthView::World::Utilities::DatasetOption_Create*) pObjXXXX;
				EarthView::World::Utilities::DatasetOption_Create_DB& __values1 = pObjectX->db();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_utilities_DatasetOptionCreate_file_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Utilities::DatasetOption_Create *pObjectX = (EarthView::World::Utilities::DatasetOption_Create*) pObjXXXX;
				EarthView::World::Utilities::DatasetOption_Create_File& __values1 = pObjectX->file();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_utilities_DatasetOptionCreateDb_vector_1CFields_1int_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fields_j, jint geoType_j, jint espg_j)
			{
				const EarthView::World::Spatial::GeoDataset::CFields &fields = *(EarthView::World::Spatial::GeoDataset::CFields*) fields_j;
				int geoType = (int) geoType_j;
				int espg = (int) espg_j;
				EarthView::World::Utilities::DatasetOption_Create_DB *pObjectX = (EarthView::World::Utilities::DatasetOption_Create_DB*) pObjXXXX;
				EarthView::World::Utilities::DatasetOption& __values1 = pObjectX->vector(fields, geoType, espg);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_utilities_DatasetOptionCreateDb_vector_1CFields_1int_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fields_j, jint geoType_j, jstring wktCoordsys_j)
			{
				const EarthView::World::Spatial::GeoDataset::CFields &fields = *(EarthView::World::Spatial::GeoDataset::CFields*) fields_j;
				int geoType = (int) geoType_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* wktCoordsys_ch = (const ev_char*)__env->GetStringUTFChars(wktCoordsys_j,JNI_FALSE);
				EVString wktCoordsys = wktCoordsys_ch;
				__env->ReleaseStringUTFChars(wktCoordsys_j, (const char *)wktCoordsys_ch);
				#else
				const ev_wchar* wktCoordsys_ch = (const ev_wchar*)__env->GetStringChars(wktCoordsys_j,JNI_FALSE);
				EVString wktCoordsys = wktCoordsys_ch;
				__env->ReleaseStringChars(wktCoordsys_j, (const jchar *)wktCoordsys_ch);
				#endif
				EarthView::World::Utilities::DatasetOption_Create_DB *pObjectX = (EarthView::World::Utilities::DatasetOption_Create_DB*) pObjXXXX;
				EarthView::World::Utilities::DatasetOption& __values1 = pObjectX->vector(fields, geoType, wktCoordsys);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_utilities_DatasetOptionCreateDb_model_1CFields_1ModelDatasetType_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fields_j, jint modelDatasetType_j, jint espg_j)
			{
				const EarthView::World::Spatial::GeoDataset::CFields &fields = *(EarthView::World::Spatial::GeoDataset::CFields*) fields_j;
				EarthView::World::Utilities::ModelDatasetType modelDatasetType = (EarthView::World::Utilities::ModelDatasetType) modelDatasetType_j;
				int espg = (int) espg_j;
				EarthView::World::Utilities::DatasetOption_Create_DB *pObjectX = (EarthView::World::Utilities::DatasetOption_Create_DB*) pObjXXXX;
				EarthView::World::Utilities::DatasetOption& __values1 = pObjectX->model(fields, modelDatasetType, espg);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_utilities_DatasetOptionCreateDb_effect_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint espg_j)
			{
				int espg = (int) espg_j;
				EarthView::World::Utilities::DatasetOption_Create_DB *pObjectX = (EarthView::World::Utilities::DatasetOption_Create_DB*) pObjXXXX;
				EarthView::World::Utilities::DatasetOption& __values1 = pObjectX->effect(espg);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_utilities_DatasetOptionCreateFile_kml_1KMLDatasetType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint kmlDatasetType_j)
			{
				EarthView::World::Utilities::KMLDatasetType kmlDatasetType = (EarthView::World::Utilities::KMLDatasetType) kmlDatasetType_j;
				EarthView::World::Utilities::DatasetOption_Create_File *pObjectX = (EarthView::World::Utilities::DatasetOption_Create_File*) pObjXXXX;
				EarthView::World::Utilities::DatasetOption& __values1 = pObjectX->kml(kmlDatasetType);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
		}
	}
}
