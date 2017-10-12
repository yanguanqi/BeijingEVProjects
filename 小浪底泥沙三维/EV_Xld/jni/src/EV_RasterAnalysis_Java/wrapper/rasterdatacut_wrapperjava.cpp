/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rasteranalysis/rasterdatacut.h"
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_analyst_ImageCut_ImageCutByAOI_1char_1char_1char(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pszSrcFile_j, jlong pszDstFile_j, jlong pszAOIWKT_j)
				{
					const char *pszSrcFile = (const char*) pszSrcFile_j;
					const char *pszDstFile = (const char*) pszDstFile_j;
					const char *pszAOIWKT = (const char*) pszAOIWKT_j;
					EarthView::World::Spatial2D::Analyst::CImageCut *pObjectX = (EarthView::World::Spatial2D::Analyst::CImageCut*) pObjXXXX;
					ev_int32 __values1 = pObjectX->ImageCutByAOI(pszSrcFile, pszDstFile, pszAOIWKT);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_analyst_ImageCut_ImageCutByAOIByPolygon_1CRasterDataSet_1char_1CPolygon(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong Dataset_j, jlong pszDstFile_j, jlong polygon_j)
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet *Dataset = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) Dataset_j;
					const char *pszDstFile = (const char*) pszDstFile_j;
					EarthView::World::Spatial::Geometry::CPolygon *polygon = (EarthView::World::Spatial::Geometry::CPolygon*) polygon_j;
					EarthView::World::Spatial2D::Analyst::CImageCut *pObjectX = (EarthView::World::Spatial2D::Analyst::CImageCut*) pObjXXXX;
					ev_int32 __values1 = pObjectX->ImageCutByAOIByPolygon(Dataset, pszDstFile, polygon);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
			}
		}
	}
}
