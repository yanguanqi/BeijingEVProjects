/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rasterdataset/reprojectImage.h"
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
			namespace Utility
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Raster
			{
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_ReprojectAlg_reprojectImage_1CRasterDataSet_1ev_1char_1CRasterDataSet_1ev_1char_1EVResampleMethod_1ev_1real64_1CProgressInfo(JNIEnv *__env , jclass __clazz, jlong pSrcDS_j, jlong pszSrcWKT_j, jlong pDstDS_j, jlong pszDstWKT_j, jint eResampleMthd_j, jdouble dfMaxErro_j, jlong pProgressArg_j)
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSet *pSrcDS = (const EarthView::World::Spatial2D::Raster::CRasterDataSet*) pSrcDS_j;
					const ev_char *pszSrcWKT = (const ev_char*) pszSrcWKT_j;
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pDstDS = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pDstDS_j;
					const ev_char *pszDstWKT = (const ev_char*) pszDstWKT_j;
					EarthView::World::Spatial2D::Raster::EVResampleMethod eResampleMthd = (EarthView::World::Spatial2D::Raster::EVResampleMethod) eResampleMthd_j;
					ev_real64 dfMaxErro = (ev_real64) dfMaxErro_j;
					EarthView::World::Spatial2D::Raster::CProgressInfo *pProgressArg = (EarthView::World::Spatial2D::Raster::CProgressInfo*) pProgressArg_j;
					ev_bool __values1 = EarthView::World::Spatial2D::Raster::CReprojectAlg::reprojectImage(pSrcDS, pszSrcWKT, pDstDS, pszDstWKT, eResampleMthd, dfMaxErro, pProgressArg);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_ReprojectAlg_DefineProjectImage_1CRasterDataSet_1ev_1char_1ev_1char_1EVDataSetFormat_1CProgressInfo(JNIEnv *__env , jclass __clazz, jlong pSrcDS_j, jlong pszDstFilename_j, jlong pszDstWKT_j, jint eDatasetFormat_j, jlong pProgressArg_j)
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSet *pSrcDS = (const EarthView::World::Spatial2D::Raster::CRasterDataSet*) pSrcDS_j;
					const ev_char *pszDstFilename = (const ev_char*) pszDstFilename_j;
					const ev_char *pszDstWKT = (const ev_char*) pszDstWKT_j;
					EarthView::World::Spatial2D::Raster::EVDataSetFormat eDatasetFormat = (EarthView::World::Spatial2D::Raster::EVDataSetFormat) eDatasetFormat_j;
					EarthView::World::Spatial2D::Raster::CProgressInfo *pProgressArg = (EarthView::World::Spatial2D::Raster::CProgressInfo*) pProgressArg_j;
					ev_bool __values1 = EarthView::World::Spatial2D::Raster::CReprojectAlg::DefineProjectImage(pSrcDS, pszDstFilename, pszDstWKT, eDatasetFormat, pProgressArg);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_ReprojectAlg_createAndReprojectImage_1CRasterDataSet_1ev_1char_1ev_1char_1ev_1char_1EVDataSetFormat_1EVResampleMethod_1ev_1real64_1CProgressInfo(JNIEnv *__env , jclass __clazz, jlong pSrcDS_j, jlong pszSrcWKT_j, jlong pszDstFilename_j, jlong pszDstWKT_j, jint eDatasetFormat_j, jint eResampleMthd_j, jdouble dfMaxErro_j, jlong pProgressArg_j)
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSet *pSrcDS = (const EarthView::World::Spatial2D::Raster::CRasterDataSet*) pSrcDS_j;
					const ev_char *pszSrcWKT = (const ev_char*) pszSrcWKT_j;
					const ev_char *pszDstFilename = (const ev_char*) pszDstFilename_j;
					const ev_char *pszDstWKT = (const ev_char*) pszDstWKT_j;
					EarthView::World::Spatial2D::Raster::EVDataSetFormat eDatasetFormat = (EarthView::World::Spatial2D::Raster::EVDataSetFormat) eDatasetFormat_j;
					EarthView::World::Spatial2D::Raster::EVResampleMethod eResampleMthd = (EarthView::World::Spatial2D::Raster::EVResampleMethod) eResampleMthd_j;
					ev_real64 dfMaxErro = (ev_real64) dfMaxErro_j;
					EarthView::World::Spatial2D::Raster::CProgressInfo *pProgressArg = (EarthView::World::Spatial2D::Raster::CProgressInfo*) pProgressArg_j;
					ev_bool __values1 = EarthView::World::Spatial2D::Raster::CReprojectAlg::createAndReprojectImage(pSrcDS, pszSrcWKT, pszDstFilename, pszDstWKT, eDatasetFormat, eResampleMthd, dfMaxErro, pProgressArg);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_ReprojectAlg_createAndReprojectImage_1CRasterDataSet_1CCoordinateTransformation_1ev_1char_1EVDataSetFormat_1EVResampleMethod_1ev_1real64_1CProgressInfo(JNIEnv *__env , jclass __clazz, jlong pSrcDS_j, jlong ptans_j, jlong pszDstFilename_j, jint eDatasetFormat_j, jint eResampleMthd_j, jdouble dfMaxErro_j, jlong pProgressArg_j)
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSet *pSrcDS = (const EarthView::World::Spatial2D::Raster::CRasterDataSet*) pSrcDS_j;
					const EarthView::World::Spatial::Utility::CCoordinateTransformation *ptans = (const EarthView::World::Spatial::Utility::CCoordinateTransformation*) ptans_j;
					const ev_char *pszDstFilename = (const ev_char*) pszDstFilename_j;
					EarthView::World::Spatial2D::Raster::EVDataSetFormat eDatasetFormat = (EarthView::World::Spatial2D::Raster::EVDataSetFormat) eDatasetFormat_j;
					EarthView::World::Spatial2D::Raster::EVResampleMethod eResampleMthd = (EarthView::World::Spatial2D::Raster::EVResampleMethod) eResampleMthd_j;
					ev_real64 dfMaxErro = (ev_real64) dfMaxErro_j;
					EarthView::World::Spatial2D::Raster::CProgressInfo *pProgressArg = (EarthView::World::Spatial2D::Raster::CProgressInfo*) pProgressArg_j;
					ev_bool __values1 = EarthView::World::Spatial2D::Raster::CReprojectAlg::createAndReprojectImage(pSrcDS, ptans, pszDstFilename, eDatasetFormat, eResampleMthd, dfMaxErro, pProgressArg);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_ReprojectAlg_reprojectBlock_1CRasterDataSet_1ev_1char_1CRasterDataSet_1ev_1char_1EVResampleMethod_1ev_1real64_1ev_1uchar_1CProgressInfo(JNIEnv *__env , jclass __clazz, jlong pSrcDS_j, jlong pszSrcWKT_j, jlong pDstDS_j, jlong pszDstWKT_j, jint eResampleMthd_j, jdouble dfMaxErro_j, jlong pBuffer_j, jlong pProgressArg_j)
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSet *pSrcDS = (const EarthView::World::Spatial2D::Raster::CRasterDataSet*) pSrcDS_j;
					const ev_char *pszSrcWKT = (const ev_char*) pszSrcWKT_j;
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pDstDS = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pDstDS_j;
					const ev_char *pszDstWKT = (const ev_char*) pszDstWKT_j;
					EarthView::World::Spatial2D::Raster::EVResampleMethod eResampleMthd = (EarthView::World::Spatial2D::Raster::EVResampleMethod) eResampleMthd_j;
					ev_real64 dfMaxErro = (ev_real64) dfMaxErro_j;
					ev_uchar *pBuffer = (ev_uchar*) pBuffer_j;
					EarthView::World::Spatial2D::Raster::CProgressInfo *pProgressArg = (EarthView::World::Spatial2D::Raster::CProgressInfo*) pProgressArg_j;
					ev_bool __values1 = EarthView::World::Spatial2D::Raster::CReprojectAlg::reprojectBlock(pSrcDS, pszSrcWKT, pDstDS, pszDstWKT, eResampleMthd, dfMaxErro, pBuffer, pProgressArg);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_ReprojectAlg_createDatasetForProj_1CRasterDataSet_1ev_1char_1ev_1char_1ev_1char_1ev_1int32_1ev_1int32_1CAffineTransform(JNIEnv *__env , jclass __clazz, jlong pSrcDS_j, jlong pszSrcWKT_j, jlong pszDstWKT_j, jlong pszDstFilePath_j, jint iWidth_j, jint iHeight_j, jlong pAffine_j)
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSet *pSrcDS = (const EarthView::World::Spatial2D::Raster::CRasterDataSet*) pSrcDS_j;
					const ev_char *pszSrcWKT = (const ev_char*) pszSrcWKT_j;
					const ev_char *pszDstWKT = (const ev_char*) pszDstWKT_j;
					const ev_char *pszDstFilePath = (const ev_char*) pszDstFilePath_j;
					ev_int32 iWidth = (ev_int32) iWidth_j;
					ev_int32 iHeight = (ev_int32) iHeight_j;
					const EarthView::World::Spatial2D::Raster::CAffineTransform *pAffine = (const EarthView::World::Spatial2D::Raster::CAffineTransform*) pAffine_j;
					EarthView::World::Spatial2D::Raster::CRasterDataSet* __values1 = EarthView::World::Spatial2D::Raster::CReprojectAlg::createDatasetForProj(pSrcDS, pszSrcWKT, pszDstWKT, pszDstFilePath, iWidth, iHeight, pAffine);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_ReprojectAlg_getSuggestedOutput_1CRasterDataSet_1ev_1char_1ev_1char_1ev_1int32_1ev_1int32_1CAffineTransform(JNIEnv *__env , jclass __clazz, jlong pSrcDS_j, jlong pszSrcWKT_j, jlong pszDstWKT_j, jlong iWidth_j, jlong iheight_j, jlong objAffine_j)
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSet *pSrcDS = (const EarthView::World::Spatial2D::Raster::CRasterDataSet*) pSrcDS_j;
					const ev_char *pszSrcWKT = (const ev_char*) pszSrcWKT_j;
					const ev_char *pszDstWKT = (const ev_char*) pszDstWKT_j;
					ev_int32 &iWidth = *(ev_int32*) iWidth_j;
					ev_int32 &iheight = *(ev_int32*) iheight_j;
					EarthView::World::Spatial2D::Raster::CAffineTransform &objAffine = *(EarthView::World::Spatial2D::Raster::CAffineTransform*) objAffine_j;
					EarthView::World::Spatial2D::Raster::CReprojectAlg::getSuggestedOutput(pSrcDS, pszSrcWKT, pszDstWKT, iWidth, iheight, objAffine);
				}
			}
		}
	}
}
