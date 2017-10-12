/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rasteranalysis/rasterdataanalysis.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Analyst
			{
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_analyst_RasterDataAnalysis_CreateSlope_1char_1char_1double_1int_1EVRasterDataType_1char_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pszSrcFile_j, jlong pszDstFile_j, jdouble scale_j, jint slopeFormat_j, jint eDataType_j, jlong pszFormat_j, jint NoDataFlag_j)
				{
					const char *pszSrcFile = (const char*) pszSrcFile_j;
					const char *pszDstFile = (const char*) pszDstFile_j;
					double scale = (double) scale_j;
					int slopeFormat = (int) slopeFormat_j;
					EarthView::World::Spatial::GeoDataset::EVRasterDataType eDataType = (EarthView::World::Spatial::GeoDataset::EVRasterDataType) eDataType_j;
					const char *pszFormat = (const char*) pszFormat_j;
					int NoDataFlag = (int) NoDataFlag_j;
					EarthView::World::Spatial2D::Analyst::CRasterDataAnalysis *pObjectX = (EarthView::World::Spatial2D::Analyst::CRasterDataAnalysis*) pObjXXXX;
					ev_int32 __values1 = pObjectX->CreateSlope(pszSrcFile, pszDstFile, scale, slopeFormat, eDataType, pszFormat, NoDataFlag);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_analyst_RasterDataAnalysis_CreateSlope_1CRasterDataSet_1char_1double_1int_1EVRasterDataType_1char_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong psrcData_j, jlong pszDstFile_j, jdouble scale_j, jint slopeFormat_j, jint eDataType_j, jlong pszFormat_j, jint NoDataFlag_j)
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet *psrcData = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) psrcData_j;
					const char *pszDstFile = (const char*) pszDstFile_j;
					double scale = (double) scale_j;
					int slopeFormat = (int) slopeFormat_j;
					EarthView::World::Spatial::GeoDataset::EVRasterDataType eDataType = (EarthView::World::Spatial::GeoDataset::EVRasterDataType) eDataType_j;
					const char *pszFormat = (const char*) pszFormat_j;
					int NoDataFlag = (int) NoDataFlag_j;
					EarthView::World::Spatial2D::Analyst::CRasterDataAnalysis *pObjectX = (EarthView::World::Spatial2D::Analyst::CRasterDataAnalysis*) pObjXXXX;
					ev_int32 __values1 = pObjectX->CreateSlope(psrcData, pszDstFile, scale, slopeFormat, eDataType, pszFormat, NoDataFlag);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_analyst_RasterDataAnalysis_CreateAspect_1char_1char_1EVRasterDataType_1char_1int_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pszSrcFile_j, jlong pszDstFile_j, jint eDataType_j, jlong pszFormat_j, jint NoDataFlag_j, jint bAngleAsAzimuth_j)
				{
					const char *pszSrcFile = (const char*) pszSrcFile_j;
					const char *pszDstFile = (const char*) pszDstFile_j;
					EarthView::World::Spatial::GeoDataset::EVRasterDataType eDataType = (EarthView::World::Spatial::GeoDataset::EVRasterDataType) eDataType_j;
					const char *pszFormat = (const char*) pszFormat_j;
					int NoDataFlag = (int) NoDataFlag_j;
					int bAngleAsAzimuth = (int) bAngleAsAzimuth_j;
					EarthView::World::Spatial2D::Analyst::CRasterDataAnalysis *pObjectX = (EarthView::World::Spatial2D::Analyst::CRasterDataAnalysis*) pObjXXXX;
					ev_int32 __values1 = pObjectX->CreateAspect(pszSrcFile, pszDstFile, eDataType, pszFormat, NoDataFlag, bAngleAsAzimuth);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_analyst_RasterDataAnalysis_CreateAspect_1CRasterDataSet_1char_1EVRasterDataType_1char_1int_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong psrcData_j, jlong pszDstFile_j, jint eDataType_j, jlong pszFormat_j, jint NoDataFlag_j, jint bAngleAsAzimuth_j)
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet *psrcData = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) psrcData_j;
					const char *pszDstFile = (const char*) pszDstFile_j;
					EarthView::World::Spatial::GeoDataset::EVRasterDataType eDataType = (EarthView::World::Spatial::GeoDataset::EVRasterDataType) eDataType_j;
					const char *pszFormat = (const char*) pszFormat_j;
					int NoDataFlag = (int) NoDataFlag_j;
					int bAngleAsAzimuth = (int) bAngleAsAzimuth_j;
					EarthView::World::Spatial2D::Analyst::CRasterDataAnalysis *pObjectX = (EarthView::World::Spatial2D::Analyst::CRasterDataAnalysis*) pObjXXXX;
					ev_int32 __values1 = pObjectX->CreateAspect(psrcData, pszDstFile, eDataType, pszFormat, NoDataFlag, bAngleAsAzimuth);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_analyst_RasterDataAnalysis_ImagePolygonize_1char_1char_1int_1bool_1char_1CProgressInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pszSrcFile_j, jlong pszDstFile_j, jint iBandIndex_j, jboolean bIs8Con_j, jlong pszFormat_j, jlong pProgressArg_j)
				{
					const char *pszSrcFile = (const char*) pszSrcFile_j;
					const char *pszDstFile = (const char*) pszDstFile_j;
					int iBandIndex = (int) iBandIndex_j;
					bool bIs8Con = (bool) bIs8Con_j;
					const char *pszFormat = (const char*) pszFormat_j;
					EarthView::World::Spatial2D::Raster::CProgressInfo *pProgressArg = (EarthView::World::Spatial2D::Raster::CProgressInfo*) pProgressArg_j;
					EarthView::World::Spatial2D::Analyst::CRasterDataAnalysis *pObjectX = (EarthView::World::Spatial2D::Analyst::CRasterDataAnalysis*) pObjXXXX;
					ev_bool __values1 = pObjectX->ImagePolygonize(pszSrcFile, pszDstFile, iBandIndex, bIs8Con, pszFormat, pProgressArg);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_analyst_RasterDataAnalysis_VectorRasterize_1char_1char_1int_1int_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pszGeomrtry_j, jlong pszDstFile_j, jint nBandcount_j, jint rasterwidth_j, jint rasterhigth_j)
				{
					const char *pszGeomrtry = (const char*) pszGeomrtry_j;
					const char *pszDstFile = (const char*) pszDstFile_j;
					int nBandcount = (int) nBandcount_j;
					int rasterwidth = (int) rasterwidth_j;
					int rasterhigth = (int) rasterhigth_j;
					EarthView::World::Spatial2D::Analyst::CRasterDataAnalysis *pObjectX = (EarthView::World::Spatial2D::Analyst::CRasterDataAnalysis*) pObjXXXX;
					ev_bool __values1 = pObjectX->VectorRasterize(pszGeomrtry, pszDstFile, nBandcount, rasterwidth, rasterhigth);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
		}
	}
}
