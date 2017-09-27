/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rasterdataset/rasteraccessor.h"
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
			namespace Raster
			{
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_raster_RasterFileOperator_getDatasetType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Raster::CRasterFileOperator *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterFileOperator*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::EVDatasetType __values1 = pObjectX->getDatasetType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_raster_RasterFileOperator_getDataSourceType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Raster::CRasterFileOperator *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterFileOperator*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::EVDataSourceType __values1 = pObjectX->getDataSourceType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterFileOperator_open_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring pszFullpathName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* pszFullpathName_ch = (const ev_char*)__env->GetStringUTFChars(pszFullpathName_j,JNI_FALSE);
					const EVString pszFullpathName = pszFullpathName_ch;
					__env->ReleaseStringUTFChars(pszFullpathName_j, (const char *)pszFullpathName_ch);
					#else
					const ev_wchar* pszFullpathName_ch = (const ev_wchar*)__env->GetStringChars(pszFullpathName_j,JNI_FALSE);
					const EVString pszFullpathName = pszFullpathName_ch;
					__env->ReleaseStringChars(pszFullpathName_j, (const jchar *)pszFullpathName_ch);
					#endif
					EarthView::World::Spatial2D::Raster::CRasterFileOperator *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterFileOperator*) pObjXXXX;
					EarthView::World::Spatial2D::Raster::CRasterDataSet* __values1 = pObjectX->open(pszFullpathName);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterFileOperator_deleteDataset_1CRasterDataSet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pobjDataSet_j)
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pobjDataSet = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pobjDataSet_j;
					EarthView::World::Spatial2D::Raster::CRasterFileOperator *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterFileOperator*) pObjXXXX;
					pObjectX->deleteDataset(pobjDataSet);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterFileOperator_open_1EVString_1EVAccess(JNIEnv *__env , jclass __clazz, jstring pszFullpathName_j, jint eAccess_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* pszFullpathName_ch = (const ev_char*)__env->GetStringUTFChars(pszFullpathName_j,JNI_FALSE);
					const EVString pszFullpathName = pszFullpathName_ch;
					__env->ReleaseStringUTFChars(pszFullpathName_j, (const char *)pszFullpathName_ch);
					#else
					const ev_wchar* pszFullpathName_ch = (const ev_wchar*)__env->GetStringChars(pszFullpathName_j,JNI_FALSE);
					const EVString pszFullpathName = pszFullpathName_ch;
					__env->ReleaseStringChars(pszFullpathName_j, (const jchar *)pszFullpathName_ch);
					#endif
					EarthView::World::Spatial2D::Raster::EVAccess eAccess = (EarthView::World::Spatial2D::Raster::EVAccess) eAccess_j;
					EarthView::World::Spatial2D::Raster::CRasterDataSet* __values1 = EarthView::World::Spatial2D::Raster::CRasterFileOperator::open(pszFullpathName, eAccess);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterFileOperator_create_1EVString_1ev_1int32_1ev_1int32_1ev_1int32_1EVRasterDataType_1EVDataSetFormat(JNIEnv *__env , jclass __clazz, jstring pszpath_j, jint iWidth_j, jint iHeight_j, jint ibandCount_j, jint edatatype_j, jint erasterType_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* pszpath_ch = (const ev_char*)__env->GetStringUTFChars(pszpath_j,JNI_FALSE);
					const EVString pszpath = pszpath_ch;
					__env->ReleaseStringUTFChars(pszpath_j, (const char *)pszpath_ch);
					#else
					const ev_wchar* pszpath_ch = (const ev_wchar*)__env->GetStringChars(pszpath_j,JNI_FALSE);
					const EVString pszpath = pszpath_ch;
					__env->ReleaseStringChars(pszpath_j, (const jchar *)pszpath_ch);
					#endif
					ev_int32 iWidth = (ev_int32) iWidth_j;
					ev_int32 iHeight = (ev_int32) iHeight_j;
					ev_int32 ibandCount = (ev_int32) ibandCount_j;
					EarthView::World::Spatial::GeoDataset::EVRasterDataType edatatype = (EarthView::World::Spatial::GeoDataset::EVRasterDataType) edatatype_j;
					EarthView::World::Spatial2D::Raster::EVDataSetFormat erasterType = (EarthView::World::Spatial2D::Raster::EVDataSetFormat) erasterType_j;
					EarthView::World::Spatial2D::Raster::CRasterDataSet* __values1 = EarthView::World::Spatial2D::Raster::CRasterFileOperator::create(pszpath, iWidth, iHeight, ibandCount, edatatype, erasterType);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterFileOperator_createFormStream_1ev_1uchar_1ev_1uint64_1EVDataSetFormat(JNIEnv *__env , jclass __clazz, jlong pFileBuffer_j, jlong idataLenth_j, jint erasterType_j)
				{
					ev_uchar *pFileBuffer = (ev_uchar*) pFileBuffer_j;
					ev_uint64 idataLenth = *(ev_uint64*) idataLenth_j;
					EarthView::World::Spatial2D::Raster::EVDataSetFormat erasterType = (EarthView::World::Spatial2D::Raster::EVDataSetFormat) erasterType_j;
					EarthView::World::Spatial2D::Raster::CRasterDataSet* __values1 = EarthView::World::Spatial2D::Raster::CRasterFileOperator::createFormStream(pFileBuffer, idataLenth, erasterType);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterFileOperator_createCopy_1EVString_1CRasterDataSet_1EVDataSetFormat_1CProgressInfo(JNIEnv *__env , jclass __clazz, jstring pszCopypath_j, jlong pSrcDataset_j, jint erasterType_j, jlong pProssiInfo_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* pszCopypath_ch = (const ev_char*)__env->GetStringUTFChars(pszCopypath_j,JNI_FALSE);
					const EVString pszCopypath = pszCopypath_ch;
					__env->ReleaseStringUTFChars(pszCopypath_j, (const char *)pszCopypath_ch);
					#else
					const ev_wchar* pszCopypath_ch = (const ev_wchar*)__env->GetStringChars(pszCopypath_j,JNI_FALSE);
					const EVString pszCopypath = pszCopypath_ch;
					__env->ReleaseStringChars(pszCopypath_j, (const jchar *)pszCopypath_ch);
					#endif
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pSrcDataset = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pSrcDataset_j;
					EarthView::World::Spatial2D::Raster::EVDataSetFormat erasterType = (EarthView::World::Spatial2D::Raster::EVDataSetFormat) erasterType_j;
					EarthView::World::Spatial2D::Raster::CProgressInfo *pProssiInfo = (EarthView::World::Spatial2D::Raster::CProgressInfo*) pProssiInfo_j;
					EarthView::World::Spatial2D::Raster::CRasterDataSet* __values1 = EarthView::World::Spatial2D::Raster::CRasterFileOperator::createCopy(pszCopypath, pSrcDataset, erasterType, pProssiInfo);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterFileOperator_close_1CRasterDataSet(JNIEnv *__env , jclass __clazz, jlong pobjDataSet_j)
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pobjDataSet = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pobjDataSet_j;
					EarthView::World::Spatial2D::Raster::CRasterFileOperator::close(pobjDataSet);
				}
			}
		}
	}
}
