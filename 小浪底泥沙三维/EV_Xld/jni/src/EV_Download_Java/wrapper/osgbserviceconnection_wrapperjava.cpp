/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "download/osgbserviceconnection.h"
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
			namespace Download
			{
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_download_Osgbtoptile_get_1mTileName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBTopTile *pObjectX = (EarthView::World::Spatial::Download::COSGBTopTile*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mTileName;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgbtoptile_set_1mTileName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial::Download::COSGBTopTile *pObjectX = (EarthView::World::Spatial::Download::COSGBTopTile*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->mTileName = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_download_Osgbtoptile_get_1mModelPath_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBTopTile *pObjectX = (EarthView::World::Spatial::Download::COSGBTopTile*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mModelPath;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgbtoptile_set_1mModelPath_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial::Download::COSGBTopTile *pObjectX = (EarthView::World::Spatial::Download::COSGBTopTile*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->mModelPath = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_download_Osgbtoptile_get_1mCenterX_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBTopTile *pObjectX = (EarthView::World::Spatial::Download::COSGBTopTile*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mCenterX);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgbtoptile_set_1mCenterX_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Download::COSGBTopTile *pObjectX = (EarthView::World::Spatial::Download::COSGBTopTile*)pObjXXXX;
					pObjectX->mCenterX = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_download_Osgbtoptile_get_1mCenterY_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBTopTile *pObjectX = (EarthView::World::Spatial::Download::COSGBTopTile*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mCenterY);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgbtoptile_set_1mCenterY_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Download::COSGBTopTile *pObjectX = (EarthView::World::Spatial::Download::COSGBTopTile*)pObjXXXX;
					pObjectX->mCenterY = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_download_Osgbtoptile_get_1mCenterZ_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBTopTile *pObjectX = (EarthView::World::Spatial::Download::COSGBTopTile*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mCenterZ);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgbtoptile_set_1mCenterZ_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Download::COSGBTopTile *pObjectX = (EarthView::World::Spatial::Download::COSGBTopTile*)pObjXXXX;
					pObjectX->mCenterZ = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_download_Osgbtoptile_get_1mRadius_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBTopTile *pObjectX = (EarthView::World::Spatial::Download::COSGBTopTile*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mRadius);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgbtoptile_set_1mRadius_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Download::COSGBTopTile *pObjectX = (EarthView::World::Spatial::Download::COSGBTopTile*)pObjXXXX;
					pObjectX->mRadius = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_download_Osgbtoptile_get_1mMinRange_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBTopTile *pObjectX = (EarthView::World::Spatial::Download::COSGBTopTile*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mMinRange);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgbtoptile_set_1mMinRange_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Download::COSGBTopTile *pObjectX = (EarthView::World::Spatial::Download::COSGBTopTile*)pObjXXXX;
					pObjectX->mMinRange = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgbtoptilevector_push_1back_1COSGBTopTile(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Spatial::Download::COSGBTopTile &t = *(EarthView::World::Spatial::Download::COSGBTopTile*) t_j;
					EarthView::World::Spatial::Download::COSGBTopTileVector *pObjectX = (EarthView::World::Spatial::Download::COSGBTopTileVector*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgbtoptilevector_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBTopTileVector *pObjectX = (EarthView::World::Spatial::Download::COSGBTopTileVector*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_Osgbtoptilevector_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBTopTileVector *pObjectX = (EarthView::World::Spatial::Download::COSGBTopTileVector*) pObjXXXX;
					EarthView::World::Spatial::Download::COSGBTopTile& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_Osgbtoptilevector_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBTopTileVector *pObjectX = (EarthView::World::Spatial::Download::COSGBTopTileVector*) pObjXXXX;
					EarthView::World::Spatial::Download::COSGBTopTile& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_Osgbtoptilevector_at_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial::Download::COSGBTopTileVector *pObjectX = (EarthView::World::Spatial::Download::COSGBTopTileVector*) pObjXXXX;
					EarthView::World::Spatial::Download::COSGBTopTile& __values1 = pObjectX->at(pos);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgbtoptilevector_insert_1ev_1uint32_1COSGBTopTile(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial::Download::COSGBTopTile &t = *(EarthView::World::Spatial::Download::COSGBTopTile*) t_j;
					EarthView::World::Spatial::Download::COSGBTopTileVector *pObjectX = (EarthView::World::Spatial::Download::COSGBTopTileVector*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_download_Osgbtoptilevector_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Download::COSGBTopTileVector *pObjectX = (EarthView::World::Spatial::Download::COSGBTopTileVector*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_Osgbtoptilevector_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Download::COSGBTopTileVector *pObjectX = (EarthView::World::Spatial::Download::COSGBTopTileVector*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgbtoptilevector_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Spatial::Download::COSGBTopTileVector *pObjectX = (EarthView::World::Spatial::Download::COSGBTopTileVector*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgbtoptilevector_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBTopTileVector *pObjectX = (EarthView::World::Spatial::Download::COSGBTopTileVector*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_Osgblayerlevel_get_1mLevel_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBLayerLevel *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerLevel*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mLevel);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgblayerlevel_set_1mLevel_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial::Download::COSGBLayerLevel *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerLevel*)pObjXXXX;
					pObjectX->mLevel = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_download_Osgblayerlevel_get_1mBeginCol_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBLayerLevel *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerLevel*)pObjXXXX;
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<(pObjectX->mBeginCol);
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgblayerlevel_set_1mBeginCol_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial::Download::COSGBLayerLevel *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerLevel*)pObjXXXX;
					pObjectX->mBeginCol = *(ev_uint64*) __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_download_Osgblayerlevel_get_1mEndCol_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBLayerLevel *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerLevel*)pObjXXXX;
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<(pObjectX->mEndCol);
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgblayerlevel_set_1mEndCol_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial::Download::COSGBLayerLevel *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerLevel*)pObjXXXX;
					pObjectX->mEndCol = *(ev_uint64*) __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_download_Osgblayerlevel_get_1mBeginRow_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBLayerLevel *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerLevel*)pObjXXXX;
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<(pObjectX->mBeginRow);
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgblayerlevel_set_1mBeginRow_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial::Download::COSGBLayerLevel *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerLevel*)pObjXXXX;
					pObjectX->mBeginRow = *(ev_uint64*) __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_download_Osgblayerlevel_get_1mEndRow_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBLayerLevel *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerLevel*)pObjXXXX;
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<(pObjectX->mEndRow);
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgblayerlevel_set_1mEndRow_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial::Download::COSGBLayerLevel *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerLevel*)pObjXXXX;
					pObjectX->mEndRow = *(ev_uint64*) __values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_download_Osgblayerlevel_get_1mTileWidth_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBLayerLevel *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerLevel*)pObjXXXX;
					jfloat __values1_j = (jfloat)(pObjectX->mTileWidth);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgblayerlevel_set_1mTileWidth_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
				{
					EarthView::World::Spatial::Download::COSGBLayerLevel *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerLevel*)pObjXXXX;
					pObjectX->mTileWidth = (ev_real32)__values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_download_Osgblayerlevel_get_1mTileHeight_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBLayerLevel *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerLevel*)pObjXXXX;
					jfloat __values1_j = (jfloat)(pObjectX->mTileHeight);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgblayerlevel_set_1mTileHeight_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
				{
					EarthView::World::Spatial::Download::COSGBLayerLevel *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerLevel*)pObjXXXX;
					pObjectX->mTileHeight = (ev_real32)__values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgblayerlevelvector_push_1back_1COSGBLayerLevel(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Spatial::Download::COSGBLayerLevel &t = *(EarthView::World::Spatial::Download::COSGBLayerLevel*) t_j;
					EarthView::World::Spatial::Download::COSGBLayerLevelVector *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerLevelVector*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgblayerlevelvector_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBLayerLevelVector *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerLevelVector*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_Osgblayerlevelvector_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBLayerLevelVector *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerLevelVector*) pObjXXXX;
					EarthView::World::Spatial::Download::COSGBLayerLevel& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_Osgblayerlevelvector_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBLayerLevelVector *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerLevelVector*) pObjXXXX;
					EarthView::World::Spatial::Download::COSGBLayerLevel& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_Osgblayerlevelvector_at_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial::Download::COSGBLayerLevelVector *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerLevelVector*) pObjXXXX;
					EarthView::World::Spatial::Download::COSGBLayerLevel& __values1 = pObjectX->at(pos);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgblayerlevelvector_insert_1ev_1uint32_1COSGBLayerLevel(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial::Download::COSGBLayerLevel &t = *(EarthView::World::Spatial::Download::COSGBLayerLevel*) t_j;
					EarthView::World::Spatial::Download::COSGBLayerLevelVector *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerLevelVector*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_download_Osgblayerlevelvector_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Download::COSGBLayerLevelVector *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerLevelVector*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_Osgblayerlevelvector_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Download::COSGBLayerLevelVector *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerLevelVector*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgblayerlevelvector_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Spatial::Download::COSGBLayerLevelVector *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerLevelVector*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgblayerlevelvector_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBLayerLevelVector *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerLevelVector*) pObjXXXX;
					pObjectX->clear();
				}
				class JCOSGBLayerMetaDataProxy : public EarthView::World::Spatial::Download::COSGBLayerMetaData
				{
				 private:
					EarthView::World::Core::ev_string m_ev_clone_IDataMetaInfo_callback;
					EarthView::World::Core::ev_string m_getDatasetType_void_callback;
					EarthView::World::Core::ev_string m_getName_void_callback;
					EarthView::World::Core::ev_string m_getEnvelopeRef_void_callback;
					EarthView::World::Core::ev_string m_getSpatialReference_void_callback;
				public:
					JCOSGBLayerMetaDataProxy(EarthView::World::Core::CNameValuePairList *pList) : COSGBLayerMetaData(pList)
					{
					}
					ev_void unRegisterJavaReference()
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						if(__gr != NULL)
						{
							delete __gr;
							this->registerJavaReference(NULL);
						}
					}
				public:
					void register_ev_clone_IDataMetaInfo_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_ev_clone_IDataMetaInfo_callback = __method;
					}
					void register_getDatasetType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDatasetType_void_callback = __method;
					}
					void register_getName_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getName_void_callback = __method;
					}
					void register_getEnvelopeRef_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getEnvelopeRef_void_callback = __method;
					}
					void register_getSpatialReference_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSpatialReference_void_callback = __method;
					}
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const
					{
						if (this->_gRef != NULL && this->m_getDatasetType_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getDatasetType_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::GeoDataset::EVDatasetType __values1 = (EarthView::World::Spatial::GeoDataset::EVDatasetType) __values1_j;
							return __values1;
						}
						else
						{
							return this->COSGBLayerMetaData::getDatasetType();
						}
					}
					virtual EVString getName() const
					{
						if (this->_gRef != NULL && this->m_getName_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getName_void_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringUTFChars(__values1_j,values_ch);
							#else
							const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
							#endif
							return __values1;
						}
						else
						{
							return this->COSGBLayerMetaData::getName();
						}
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
					{
						if (this->_gRef != NULL && this->m_getEnvelopeRef_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getEnvelopeRef_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Spatial::Geometry::IEnvelope *__values1 = (const EarthView::World::Spatial::Geometry::IEnvelope*) __values1_j;
							return __values1;
						}
						else
						{
							return this->COSGBLayerMetaData::getEnvelopeRef();
						}
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if (this->_gRef != NULL && this->m_getSpatialReference_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getSpatialReference_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Geometry::ISpatialReference *__values1 = (EarthView::World::Spatial::Geometry::ISpatialReference*) __values1_j;
							return __values1;
						}
						else
						{
							return this->COSGBLayerMetaData::getSpatialReference();
						}
					}
					virtual void clone(const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther)
					{
						if (this->_gRef != NULL && this->m_ev_clone_IDataMetaInfo_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong pOther_j = (jlong) pOther;
							jmethodID __method = __gr->getMethod("ev_clone_IDataMetaInfo_callback");
							__env->CallVoidMethod(__obj, __method , pOther_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->COSGBLayerMetaData::clone(pOther);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCOSGBLayerMetaDataProxy);
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_getDatasetType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCOSGBLayerMetaDataProxy))
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType __values1 = pObjectX->EarthView::World::Spatial::Download::COSGBLayerMetaData::getDatasetType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType __values1 = pObjectX->getDatasetType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_register_1getDatasetType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCOSGBLayerMetaDataProxy *pObjectX = (JCOSGBLayerMetaDataProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDatasetType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDatasetType_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_getDatasetType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::EVDatasetType __values1 = pObjectX->EarthView::World::Spatial::Download::COSGBLayerMetaData::getDatasetType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCOSGBLayerMetaDataProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::Download::COSGBLayerMetaData::getName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCOSGBLayerMetaDataProxy *pObjectX = (JCOSGBLayerMetaDataProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getName_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getName_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_getName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::Download::COSGBLayerMetaData::getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_getEnvelopeRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCOSGBLayerMetaDataProxy))
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->EarthView::World::Spatial::Download::COSGBLayerMetaData::getEnvelopeRef();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->getEnvelopeRef();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_register_1getEnvelopeRef_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCOSGBLayerMetaDataProxy *pObjectX = (JCOSGBLayerMetaDataProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getEnvelopeRef_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getEnvelopeRef_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_getEnvelopeRef_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*) pObjXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->EarthView::World::Spatial::Download::COSGBLayerMetaData::getEnvelopeRef();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_getSpatialReference_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCOSGBLayerMetaDataProxy))
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->EarthView::World::Spatial::Download::COSGBLayerMetaData::getSpatialReference();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->getSpatialReference();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_register_1getSpatialReference_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCOSGBLayerMetaDataProxy *pObjectX = (JCOSGBLayerMetaDataProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSpatialReference_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSpatialReference_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_getSpatialReference_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*) pObjXXXX;
					EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->EarthView::World::Spatial::Download::COSGBLayerMetaData::getSpatialReference();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_ev_1clone_1IDataMetaInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pOther_j)
				{
					const EarthView::World::Spatial::GeoDataset::IDataMetaInfo *pOther = (const EarthView::World::Spatial::GeoDataset::IDataMetaInfo*) pOther_j;
					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCOSGBLayerMetaDataProxy))
					{
						pObjectX->EarthView::World::Spatial::Download::COSGBLayerMetaData::clone(pOther);
					}
					else
					{
						pObjectX->clone(pOther);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_register_1ev_1clone_1IDataMetaInfo(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCOSGBLayerMetaDataProxy *pObjectX = (JCOSGBLayerMetaDataProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_ev_clone_IDataMetaInfo_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"ev_clone_IDataMetaInfo_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_ev_1clone_1IDataMetaInfo_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pOther_j)
				{
					const EarthView::World::Spatial::GeoDataset::IDataMetaInfo *pOther = (const EarthView::World::Spatial::GeoDataset::IDataMetaInfo*) pOther_j;
					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Download::COSGBLayerMetaData::clone(pOther);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_parseMetaData_1CXmlFile_1COSGBLayerMetaData(JNIEnv *__env , jclass __clazz, jlong xmlFile_j, jlong metadata_j)
				{
					EarthView::World::Core::CXmlFile &xmlFile = *(EarthView::World::Core::CXmlFile*) xmlFile_j;
					EarthView::World::Spatial::Download::COSGBLayerMetaData &metadata = *(EarthView::World::Spatial::Download::COSGBLayerMetaData*) metadata_j;
					EarthView::World::Spatial::Download::COSGBLayerMetaData::parseMetaData(xmlFile, metadata);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_get_1mVersion_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mVersion;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_set_1mVersion_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->mVersion = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_get_1mFileExt_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mFileExt;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_set_1mFileExt_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->mFileExt = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_get_1mTileType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mTileType;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_set_1mTileType_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->mTileType = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_get_1mBagLevel_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mBagLevel);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_set_1mBagLevel_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjXXXX;
					pObjectX->mBagLevel = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_get_1mGuid_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mGuid;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_set_1mGuid_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->mGuid = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_get_1mMinLon_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mMinLon);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_set_1mMinLon_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjXXXX;
					pObjectX->mMinLon = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_get_1mMinLat_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mMinLat);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_set_1mMinLat_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjXXXX;
					pObjectX->mMinLat = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_get_1mMaxLon_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mMaxLon);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_set_1mMaxLon_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjXXXX;
					pObjectX->mMaxLon = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_get_1mMaxLat_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mMaxLat);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_set_1mMaxLat_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjXXXX;
					pObjectX->mMaxLat = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_get_1mBeginLevel_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mBeginLevel);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_set_1mBeginLevel_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjXXXX;
					pObjectX->mBeginLevel = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_get_1mEndLevel_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mEndLevel);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_set_1mEndLevel_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjXXXX;
					pObjectX->mEndLevel = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_get_1mCenterLat_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mCenterLat);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_set_1mCenterLat_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjXXXX;
					pObjectX->mCenterLat = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_get_1mCenterLon_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mCenterLon);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_set_1mCenterLon_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjXXXX;
					pObjectX->mCenterLon = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_get_1mCenterAlt_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mCenterAlt);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_set_1mCenterAlt_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjXXXX;
					pObjectX->mCenterAlt = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_get_1mOriginX_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mOriginX);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_set_1mOriginX_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjXXXX;
					pObjectX->mOriginX = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_get_1mOriginY_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mOriginY);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_set_1mOriginY_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjXXXX;
					pObjectX->mOriginY = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_get_1mOriginZ_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mOriginZ);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_set_1mOriginZ_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjXXXX;
					pObjectX->mOriginZ = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_get_1mSRS_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mSRS;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_set_1mSRS_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->mSRS = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_get_1mTag_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mTag;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_set_1mTag_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->mTag = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_get_1mLevels_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mLevels);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_set_1mLevels_1COSGBLayerLevelVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjXXXX;
					pObjectX->mLevels = *(EarthView::World::Spatial::Download::COSGBLayerLevelVector*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_get_1mTopTiles_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mTopTiles);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_set_1mTopTiles_1COSGBTopTileVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjXXXX;
					pObjectX->mTopTiles = *(EarthView::World::Spatial::Download::COSGBTopTileVector*) __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_get_1mDatasetType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mDatasetType);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgblayermetadata_set_1mDatasetType_1EVDatasetType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData *pObjectX = (EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjXXXX;
					pObjectX->mDatasetType = (EarthView::World::Spatial::GeoDataset::EVDatasetType)__values1_j;
				}
				class JCOSGBServiceConnectionProxy : public EarthView::World::Spatial::Download::COSGBServiceConnection
				{
				 private:
					EarthView::World::Core::ev_string m_getMetaData_EVString_COSGBLayerMetaData_callback;
					EarthView::World::Core::ev_string m_getOSGBData_EVString_EVString_MemoryDataStreamPtr_callback;
					EarthView::World::Core::ev_string m_setConnectionImp_ConnectionImp_callback;
					EarthView::World::Core::ev_string m_closeConnect_void_callback;
					EarthView::World::Core::ev_string m_openConnect_void_callback;
				public:
					JCOSGBServiceConnectionProxy(EarthView::World::Core::CNameValuePairList *pList) : COSGBServiceConnection(pList)
					{
					}
					ev_void unRegisterJavaReference()
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						if(__gr != NULL)
						{
							delete __gr;
							this->registerJavaReference(NULL);
						}
					}
				public:
					void register_getMetaData_EVString_COSGBLayerMetaData_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getMetaData_EVString_COSGBLayerMetaData_callback = __method;
					}
					void register_getOSGBData_EVString_EVString_MemoryDataStreamPtr_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getOSGBData_EVString_EVString_MemoryDataStreamPtr_callback = __method;
					}
					void register_setConnectionImp_ConnectionImp_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setConnectionImp_ConnectionImp_callback = __method;
					}
					void register_closeConnect_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_closeConnect_void_callback = __method;
					}
					void register_openConnect_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_openConnect_void_callback = __method;
					}
					virtual void setConnectionImp(EarthView::World::Spatial::Download::ConnectionImp* ref_pImp)
					{
						if (this->_gRef != NULL && this->m_setConnectionImp_ConnectionImp_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong ref_pImp_j = (jlong) ref_pImp;
							jmethodID __method = __gr->getMethod("setConnectionImp_ConnectionImp_callback");
							__env->CallVoidMethod(__obj, __method , ref_pImp_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->COSGBServiceConnection::setConnectionImp(ref_pImp);
						}
					}
					virtual void closeConnect()
					{
						if (this->_gRef != NULL && this->m_closeConnect_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("closeConnect_void_callback");
							__env->CallVoidMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->COSGBServiceConnection::closeConnect();
						}
					}
					virtual void openConnect()
					{
						if (this->_gRef != NULL && this->m_openConnect_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("openConnect_void_callback");
							__env->CallVoidMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->COSGBServiceConnection::openConnect();
						}
					}
					virtual ev_int32 getMetaData(const EVString& guid, EarthView::World::Spatial::Download::COSGBLayerMetaData& metadata)
					{
						if (this->_gRef != NULL && this->m_getMetaData_EVString_COSGBLayerMetaData_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring guid_wch = guid;
							jstring guid_j = __env->NewString((const jchar*)guid_wch.getString(), guid_wch.size());
							jlong metadata_j = (jlong) &metadata;
							jmethodID __method = __gr->getMethod("getMetaData_EVString_COSGBLayerMetaData_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , guid_j, metadata_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_int32 __values1 = (ev_int32) __values1_j;
							return __values1;
						}
						else
						{
							return this->COSGBServiceConnection::getMetaData(guid, metadata);
						}
					}
					virtual ev_int32 getOSGBData(const EVString& guid, const EVString& fileName, EarthView::World::Core::MemoryDataStreamPtr& osgbData)
					{
						if (this->_gRef != NULL && this->m_getOSGBData_EVString_EVString_MemoryDataStreamPtr_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring guid_wch = guid;
							jstring guid_j = __env->NewString((const jchar*)guid_wch.getString(), guid_wch.size());
							EarthView::World::Core::ev_wstring fileName_wch = fileName;
							jstring fileName_j = __env->NewString((const jchar*)fileName_wch.getString(), fileName_wch.size());
							jlong osgbData_j = (jlong) &osgbData;
							jmethodID __method = __gr->getMethod("getOSGBData_EVString_EVString_MemoryDataStreamPtr_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , guid_j, fileName_j, osgbData_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_int32 __values1 = (ev_int32) __values1_j;
							return __values1;
						}
						else
						{
							return this->COSGBServiceConnection::getOSGBData(guid, fileName, osgbData);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCOSGBServiceConnectionProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgbserviceconnection_setConnectionImp_1ConnectionImp(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pImp_j)
				{
					EarthView::World::Spatial::Download::ConnectionImp *ref_pImp = (EarthView::World::Spatial::Download::ConnectionImp*) ref_pImp_j;
					EarthView::World::Spatial::Download::COSGBServiceConnection *pObjectX = (EarthView::World::Spatial::Download::COSGBServiceConnection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCOSGBServiceConnectionProxy))
					{
						pObjectX->EarthView::World::Spatial::Download::COSGBServiceConnection::setConnectionImp(ref_pImp);
					}
					else
					{
						pObjectX->setConnectionImp(ref_pImp);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgbserviceconnection_register_1setConnectionImp_1ConnectionImp(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCOSGBServiceConnectionProxy *pObjectX = (JCOSGBServiceConnectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setConnectionImp_ConnectionImp_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setConnectionImp_ConnectionImp_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgbserviceconnection_setConnectionImp_1ConnectionImp_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pImp_j)
				{
					EarthView::World::Spatial::Download::ConnectionImp *ref_pImp = (EarthView::World::Spatial::Download::ConnectionImp*) ref_pImp_j;
					EarthView::World::Spatial::Download::COSGBServiceConnection *pObjectX = (EarthView::World::Spatial::Download::COSGBServiceConnection*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Download::COSGBServiceConnection::setConnectionImp(ref_pImp);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgbserviceconnection_closeConnect_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBServiceConnection *pObjectX = (EarthView::World::Spatial::Download::COSGBServiceConnection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCOSGBServiceConnectionProxy))
					{
						pObjectX->EarthView::World::Spatial::Download::COSGBServiceConnection::closeConnect();
					}
					else
					{
						pObjectX->closeConnect();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgbserviceconnection_register_1closeConnect_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCOSGBServiceConnectionProxy *pObjectX = (JCOSGBServiceConnectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_closeConnect_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"closeConnect_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgbserviceconnection_closeConnect_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBServiceConnection *pObjectX = (EarthView::World::Spatial::Download::COSGBServiceConnection*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Download::COSGBServiceConnection::closeConnect();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgbserviceconnection_openConnect_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBServiceConnection *pObjectX = (EarthView::World::Spatial::Download::COSGBServiceConnection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCOSGBServiceConnectionProxy))
					{
						pObjectX->EarthView::World::Spatial::Download::COSGBServiceConnection::openConnect();
					}
					else
					{
						pObjectX->openConnect();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgbserviceconnection_register_1openConnect_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCOSGBServiceConnectionProxy *pObjectX = (JCOSGBServiceConnectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_openConnect_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"openConnect_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgbserviceconnection_openConnect_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::COSGBServiceConnection *pObjectX = (EarthView::World::Spatial::Download::COSGBServiceConnection*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Download::COSGBServiceConnection::openConnect();
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_Osgbserviceconnection_getMetaData_1EVString_1COSGBLayerMetaData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring guid_j, jlong metadata_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* guid_ch = (const ev_char*)__env->GetStringUTFChars(guid_j,JNI_FALSE);
					const EVString guid = guid_ch;
					__env->ReleaseStringUTFChars(guid_j, (const char *)guid_ch);
					#else
					const ev_wchar* guid_ch = (const ev_wchar*)__env->GetStringChars(guid_j,JNI_FALSE);
					const EVString guid = guid_ch;
					__env->ReleaseStringChars(guid_j, (const jchar *)guid_ch);
					#endif
					EarthView::World::Spatial::Download::COSGBLayerMetaData &metadata = *(EarthView::World::Spatial::Download::COSGBLayerMetaData*) metadata_j;
					EarthView::World::Spatial::Download::COSGBServiceConnection *pObjectX = (EarthView::World::Spatial::Download::COSGBServiceConnection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCOSGBServiceConnectionProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Download::COSGBServiceConnection::getMetaData(guid, metadata);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->getMetaData(guid, metadata);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgbserviceconnection_register_1getMetaData_1EVString_1COSGBLayerMetaData(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCOSGBServiceConnectionProxy *pObjectX = (JCOSGBServiceConnectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getMetaData_EVString_COSGBLayerMetaData_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getMetaData_EVString_COSGBLayerMetaData_callback", "(Ljava/lang/String;J)I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_Osgbserviceconnection_getMetaData_1EVString_1COSGBLayerMetaData_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring guid_j, jlong metadata_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* guid_ch = (const ev_char*)__env->GetStringUTFChars(guid_j,JNI_FALSE);
					const EVString guid = guid_ch;
					__env->ReleaseStringUTFChars(guid_j, (const char *)guid_ch);
					#else
					const ev_wchar* guid_ch = (const ev_wchar*)__env->GetStringChars(guid_j,JNI_FALSE);
					const EVString guid = guid_ch;
					__env->ReleaseStringChars(guid_j, (const jchar *)guid_ch);
					#endif
					EarthView::World::Spatial::Download::COSGBLayerMetaData &metadata = *(EarthView::World::Spatial::Download::COSGBLayerMetaData*) metadata_j;
					EarthView::World::Spatial::Download::COSGBServiceConnection *pObjectX = (EarthView::World::Spatial::Download::COSGBServiceConnection*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Download::COSGBServiceConnection::getMetaData(guid, metadata);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_Osgbserviceconnection_getOSGBData_1EVString_1EVString_1MemoryDataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring guid_j, jstring fileName_j, jlong osgbData_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* guid_ch = (const ev_char*)__env->GetStringUTFChars(guid_j,JNI_FALSE);
					const EVString guid = guid_ch;
					__env->ReleaseStringUTFChars(guid_j, (const char *)guid_ch);
					#else
					const ev_wchar* guid_ch = (const ev_wchar*)__env->GetStringChars(guid_j,JNI_FALSE);
					const EVString guid = guid_ch;
					__env->ReleaseStringChars(guid_j, (const jchar *)guid_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* fileName_ch = (const ev_char*)__env->GetStringUTFChars(fileName_j,JNI_FALSE);
					const EVString fileName = fileName_ch;
					__env->ReleaseStringUTFChars(fileName_j, (const char *)fileName_ch);
					#else
					const ev_wchar* fileName_ch = (const ev_wchar*)__env->GetStringChars(fileName_j,JNI_FALSE);
					const EVString fileName = fileName_ch;
					__env->ReleaseStringChars(fileName_j, (const jchar *)fileName_ch);
					#endif
					EarthView::World::Core::MemoryDataStreamPtr &osgbData = *(EarthView::World::Core::MemoryDataStreamPtr*) osgbData_j;
					EarthView::World::Spatial::Download::COSGBServiceConnection *pObjectX = (EarthView::World::Spatial::Download::COSGBServiceConnection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCOSGBServiceConnectionProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Download::COSGBServiceConnection::getOSGBData(guid, fileName, osgbData);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->getOSGBData(guid, fileName, osgbData);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgbserviceconnection_register_1getOSGBData_1EVString_1EVString_1MemoryDataStreamPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCOSGBServiceConnectionProxy *pObjectX = (JCOSGBServiceConnectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getOSGBData_EVString_EVString_MemoryDataStreamPtr_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getOSGBData_EVString_EVString_MemoryDataStreamPtr_callback", "(Ljava/lang/String;Ljava/lang/String;J)I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_Osgbserviceconnection_getOSGBData_1EVString_1EVString_1MemoryDataStreamPtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring guid_j, jstring fileName_j, jlong osgbData_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* guid_ch = (const ev_char*)__env->GetStringUTFChars(guid_j,JNI_FALSE);
					const EVString guid = guid_ch;
					__env->ReleaseStringUTFChars(guid_j, (const char *)guid_ch);
					#else
					const ev_wchar* guid_ch = (const ev_wchar*)__env->GetStringChars(guid_j,JNI_FALSE);
					const EVString guid = guid_ch;
					__env->ReleaseStringChars(guid_j, (const jchar *)guid_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* fileName_ch = (const ev_char*)__env->GetStringUTFChars(fileName_j,JNI_FALSE);
					const EVString fileName = fileName_ch;
					__env->ReleaseStringUTFChars(fileName_j, (const char *)fileName_ch);
					#else
					const ev_wchar* fileName_ch = (const ev_wchar*)__env->GetStringChars(fileName_j,JNI_FALSE);
					const EVString fileName = fileName_ch;
					__env->ReleaseStringChars(fileName_j, (const jchar *)fileName_ch);
					#endif
					EarthView::World::Core::MemoryDataStreamPtr &osgbData = *(EarthView::World::Core::MemoryDataStreamPtr*) osgbData_j;
					EarthView::World::Spatial::Download::COSGBServiceConnection *pObjectX = (EarthView::World::Spatial::Download::COSGBServiceConnection*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Download::COSGBServiceConnection::getOSGBData(guid, fileName, osgbData);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				class JCOSGBServiceConnectionImpProxy : public EarthView::World::Spatial::Download::COSGBServiceConnectionImp
				{
				 private:
					EarthView::World::Core::ev_string m_getMetaData_EVString_COSGBLayerMetaData_callback;
					EarthView::World::Core::ev_string m_getOSGBData_EVString_EVString_MemoryDataStreamPtr_callback;
					EarthView::World::Core::ev_string m_openConnection_void_callback;
					EarthView::World::Core::ev_string m_closeConnection_void_callback;
					EarthView::World::Core::ev_string m_setConnectTimeout_ev_int32_callback;
				public:
					JCOSGBServiceConnectionImpProxy(EarthView::World::Core::CNameValuePairList *pList) : COSGBServiceConnectionImp(pList)
					{
					}
					ev_void unRegisterJavaReference()
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						if(__gr != NULL)
						{
							delete __gr;
							this->registerJavaReference(NULL);
						}
					}
				public:
					void register_getMetaData_EVString_COSGBLayerMetaData_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getMetaData_EVString_COSGBLayerMetaData_callback = __method;
					}
					void register_getOSGBData_EVString_EVString_MemoryDataStreamPtr_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getOSGBData_EVString_EVString_MemoryDataStreamPtr_callback = __method;
					}
					void register_openConnection_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_openConnection_void_callback = __method;
					}
					void register_closeConnection_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_closeConnection_void_callback = __method;
					}
					void register_setConnectTimeout_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setConnectTimeout_ev_int32_callback = __method;
					}
					virtual ev_int32 getMetaData(const EVString& guid, EarthView::World::Spatial::Download::COSGBLayerMetaData& metadata)
					{
						if (this->_gRef != NULL && this->m_getMetaData_EVString_COSGBLayerMetaData_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring guid_wch = guid;
							jstring guid_j = __env->NewString((const jchar*)guid_wch.getString(), guid_wch.size());
							jlong metadata_j = (jlong) &metadata;
							jmethodID __method = __gr->getMethod("getMetaData_EVString_COSGBLayerMetaData_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , guid_j, metadata_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_int32 __values1 = (ev_int32) __values1_j;
							return __values1;
						}
						else
						{
							return this->COSGBServiceConnectionImp::getMetaData(guid, metadata);
						}
					}
					virtual ev_int32 getOSGBData(const EVString& guid, const EVString& fileName, EarthView::World::Core::MemoryDataStreamPtr& osgbData)
					{
						if (this->_gRef != NULL && this->m_getOSGBData_EVString_EVString_MemoryDataStreamPtr_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring guid_wch = guid;
							jstring guid_j = __env->NewString((const jchar*)guid_wch.getString(), guid_wch.size());
							EarthView::World::Core::ev_wstring fileName_wch = fileName;
							jstring fileName_j = __env->NewString((const jchar*)fileName_wch.getString(), fileName_wch.size());
							jlong osgbData_j = (jlong) &osgbData;
							jmethodID __method = __gr->getMethod("getOSGBData_EVString_EVString_MemoryDataStreamPtr_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , guid_j, fileName_j, osgbData_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_int32 __values1 = (ev_int32) __values1_j;
							return __values1;
						}
						else
						{
							return this->COSGBServiceConnectionImp::getOSGBData(guid, fileName, osgbData);
						}
					}
					virtual ev_bool openConnection()
					{
						if (this->_gRef != NULL && this->m_openConnection_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("openConnection_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->COSGBServiceConnectionImp::openConnection();
						}
					}
					virtual ev_bool closeConnection()
					{
						if (this->_gRef != NULL && this->m_closeConnection_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("closeConnection_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->COSGBServiceConnectionImp::closeConnection();
						}
					}
					virtual void setConnectTimeout(ev_int32 timeout)
					{
						if (this->_gRef != NULL && this->m_setConnectTimeout_ev_int32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint timeout_j = (jint) timeout;
							jmethodID __method = __gr->getMethod("setConnectTimeout_ev_int32_callback");
							__env->CallVoidMethod(__obj, __method , timeout_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->COSGBServiceConnectionImp::setConnectTimeout(timeout);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCOSGBServiceConnectionImpProxy);
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_Osgbserviceconnectionimp_getMetaData_1EVString_1COSGBLayerMetaData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring guid_j, jlong metadata_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* guid_ch = (const ev_char*)__env->GetStringUTFChars(guid_j,JNI_FALSE);
					const EVString guid = guid_ch;
					__env->ReleaseStringUTFChars(guid_j, (const char *)guid_ch);
					#else
					const ev_wchar* guid_ch = (const ev_wchar*)__env->GetStringChars(guid_j,JNI_FALSE);
					const EVString guid = guid_ch;
					__env->ReleaseStringChars(guid_j, (const jchar *)guid_ch);
					#endif
					EarthView::World::Spatial::Download::COSGBLayerMetaData &metadata = *(EarthView::World::Spatial::Download::COSGBLayerMetaData*) metadata_j;
					EarthView::World::Spatial::Download::COSGBServiceConnectionImp *pObjectX = (EarthView::World::Spatial::Download::COSGBServiceConnectionImp*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCOSGBServiceConnectionImpProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Download::COSGBServiceConnectionImp::getMetaData(guid, metadata);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->getMetaData(guid, metadata);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgbserviceconnectionimp_register_1getMetaData_1EVString_1COSGBLayerMetaData(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCOSGBServiceConnectionImpProxy *pObjectX = (JCOSGBServiceConnectionImpProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getMetaData_EVString_COSGBLayerMetaData_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getMetaData_EVString_COSGBLayerMetaData_callback", "(Ljava/lang/String;J)I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_Osgbserviceconnectionimp_getMetaData_1EVString_1COSGBLayerMetaData_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring guid_j, jlong metadata_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* guid_ch = (const ev_char*)__env->GetStringUTFChars(guid_j,JNI_FALSE);
					const EVString guid = guid_ch;
					__env->ReleaseStringUTFChars(guid_j, (const char *)guid_ch);
					#else
					const ev_wchar* guid_ch = (const ev_wchar*)__env->GetStringChars(guid_j,JNI_FALSE);
					const EVString guid = guid_ch;
					__env->ReleaseStringChars(guid_j, (const jchar *)guid_ch);
					#endif
					EarthView::World::Spatial::Download::COSGBLayerMetaData &metadata = *(EarthView::World::Spatial::Download::COSGBLayerMetaData*) metadata_j;
					EarthView::World::Spatial::Download::COSGBServiceConnectionImp *pObjectX = (EarthView::World::Spatial::Download::COSGBServiceConnectionImp*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Download::COSGBServiceConnectionImp::getMetaData(guid, metadata);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_Osgbserviceconnectionimp_getOSGBData_1EVString_1EVString_1MemoryDataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring guid_j, jstring fileName_j, jlong osgbData_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* guid_ch = (const ev_char*)__env->GetStringUTFChars(guid_j,JNI_FALSE);
					const EVString guid = guid_ch;
					__env->ReleaseStringUTFChars(guid_j, (const char *)guid_ch);
					#else
					const ev_wchar* guid_ch = (const ev_wchar*)__env->GetStringChars(guid_j,JNI_FALSE);
					const EVString guid = guid_ch;
					__env->ReleaseStringChars(guid_j, (const jchar *)guid_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* fileName_ch = (const ev_char*)__env->GetStringUTFChars(fileName_j,JNI_FALSE);
					const EVString fileName = fileName_ch;
					__env->ReleaseStringUTFChars(fileName_j, (const char *)fileName_ch);
					#else
					const ev_wchar* fileName_ch = (const ev_wchar*)__env->GetStringChars(fileName_j,JNI_FALSE);
					const EVString fileName = fileName_ch;
					__env->ReleaseStringChars(fileName_j, (const jchar *)fileName_ch);
					#endif
					EarthView::World::Core::MemoryDataStreamPtr &osgbData = *(EarthView::World::Core::MemoryDataStreamPtr*) osgbData_j;
					EarthView::World::Spatial::Download::COSGBServiceConnectionImp *pObjectX = (EarthView::World::Spatial::Download::COSGBServiceConnectionImp*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCOSGBServiceConnectionImpProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Download::COSGBServiceConnectionImp::getOSGBData(guid, fileName, osgbData);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->getOSGBData(guid, fileName, osgbData);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgbserviceconnectionimp_register_1getOSGBData_1EVString_1EVString_1MemoryDataStreamPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCOSGBServiceConnectionImpProxy *pObjectX = (JCOSGBServiceConnectionImpProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getOSGBData_EVString_EVString_MemoryDataStreamPtr_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getOSGBData_EVString_EVString_MemoryDataStreamPtr_callback", "(Ljava/lang/String;Ljava/lang/String;J)I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_Osgbserviceconnectionimp_getOSGBData_1EVString_1EVString_1MemoryDataStreamPtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring guid_j, jstring fileName_j, jlong osgbData_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* guid_ch = (const ev_char*)__env->GetStringUTFChars(guid_j,JNI_FALSE);
					const EVString guid = guid_ch;
					__env->ReleaseStringUTFChars(guid_j, (const char *)guid_ch);
					#else
					const ev_wchar* guid_ch = (const ev_wchar*)__env->GetStringChars(guid_j,JNI_FALSE);
					const EVString guid = guid_ch;
					__env->ReleaseStringChars(guid_j, (const jchar *)guid_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* fileName_ch = (const ev_char*)__env->GetStringUTFChars(fileName_j,JNI_FALSE);
					const EVString fileName = fileName_ch;
					__env->ReleaseStringUTFChars(fileName_j, (const char *)fileName_ch);
					#else
					const ev_wchar* fileName_ch = (const ev_wchar*)__env->GetStringChars(fileName_j,JNI_FALSE);
					const EVString fileName = fileName_ch;
					__env->ReleaseStringChars(fileName_j, (const jchar *)fileName_ch);
					#endif
					EarthView::World::Core::MemoryDataStreamPtr &osgbData = *(EarthView::World::Core::MemoryDataStreamPtr*) osgbData_j;
					EarthView::World::Spatial::Download::COSGBServiceConnectionImp *pObjectX = (EarthView::World::Spatial::Download::COSGBServiceConnectionImp*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Download::COSGBServiceConnectionImp::getOSGBData(guid, fileName, osgbData);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgbserviceconnectionimp_register_1openConnection_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCOSGBServiceConnectionImpProxy *pObjectX = (JCOSGBServiceConnectionImpProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_openConnection_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"openConnection_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgbserviceconnectionimp_register_1closeConnection_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCOSGBServiceConnectionImpProxy *pObjectX = (JCOSGBServiceConnectionImpProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_closeConnection_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"closeConnection_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Osgbserviceconnectionimp_register_1setConnectTimeout_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCOSGBServiceConnectionImpProxy *pObjectX = (JCOSGBServiceConnectionImpProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setConnectTimeout_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setConnectTimeout_ev_int32_callback", "(I)V");
						__gr->setMethod(sMethod, __method);
					}
				}
			}
		}
	}
}
