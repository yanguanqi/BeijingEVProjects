/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3danalysisobject/math3dregionflood.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Analysis
			{
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_PositionColorTextured_get_1mPosition_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CPositionColorTextured *pObjectX = (EarthView::World::Spatial3D::Analysis::CPositionColorTextured*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mPosition);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_PositionColorTextured_set_1mPosition_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Analysis::CPositionColorTextured *pObjectX = (EarthView::World::Spatial3D::Analysis::CPositionColorTextured*)pObjXXXX;
					pObjectX->mPosition = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial3d_analysis_PositionColorTextured_get_1mA_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CPositionColorTextured *pObjectX = (EarthView::World::Spatial3D::Analysis::CPositionColorTextured*)pObjXXXX;
					jfloat __values1_j = (jfloat)(pObjectX->mA);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_PositionColorTextured_set_1mA_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
				{
					EarthView::World::Spatial3D::Analysis::CPositionColorTextured *pObjectX = (EarthView::World::Spatial3D::Analysis::CPositionColorTextured*)pObjXXXX;
					pObjectX->mA = (ev_real32)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_PositionColorTextured_get_1mTextureUV_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CPositionColorTextured *pObjectX = (EarthView::World::Spatial3D::Analysis::CPositionColorTextured*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mTextureUV);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_PositionColorTextured_set_1mTextureUV_1CVector2(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Analysis::CPositionColorTextured *pObjectX = (EarthView::World::Spatial3D::Analysis::CPositionColorTextured*)pObjXXXX;
					pObjectX->mTextureUV = *(EarthView::World::Spatial::Math::CVector2*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_PositionColorTexturedSharedPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Analysis::CPositionColorTexturedSharedPtr *pObjectX = (EarthView::World::Spatial3D::Analysis::CPositionColorTexturedSharedPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Analysis::CPositionColorTextured* __values1 = pObjectX->get();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_FloodPointVector_push_1back_1CPositionColorTexturedSharedPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Spatial3D::Analysis::CPositionColorTexturedSharedPtr &t = *(EarthView::World::Spatial3D::Analysis::CPositionColorTexturedSharedPtr*) t_j;
					EarthView::World::Spatial3D::Analysis::FloodPointVector *pObjectX = (EarthView::World::Spatial3D::Analysis::FloodPointVector*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_FloodPointVector_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::FloodPointVector *pObjectX = (EarthView::World::Spatial3D::Analysis::FloodPointVector*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_FloodPointVector_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::FloodPointVector *pObjectX = (EarthView::World::Spatial3D::Analysis::FloodPointVector*) pObjXXXX;
					EarthView::World::Spatial3D::Analysis::CPositionColorTexturedSharedPtr& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_FloodPointVector_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::FloodPointVector *pObjectX = (EarthView::World::Spatial3D::Analysis::FloodPointVector*) pObjXXXX;
					EarthView::World::Spatial3D::Analysis::CPositionColorTexturedSharedPtr& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_FloodPointVector_insert_1ev_1uint32_1CPositionColorTexturedSharedPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial3D::Analysis::CPositionColorTexturedSharedPtr &t = *(EarthView::World::Spatial3D::Analysis::CPositionColorTexturedSharedPtr*) t_j;
					EarthView::World::Spatial3D::Analysis::FloodPointVector *pObjectX = (EarthView::World::Spatial3D::Analysis::FloodPointVector*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_FloodPointVector_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::Spatial3D::Analysis::FloodPointVector *pObjectX = (EarthView::World::Spatial3D::Analysis::FloodPointVector*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_analysis_FloodPointVector_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Analysis::FloodPointVector *pObjectX = (EarthView::World::Spatial3D::Analysis::FloodPointVector*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_FloodPointVector_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::World::Spatial3D::Analysis::FloodPointVector& pObjectX = *(EarthView::World::Spatial3D::Analysis::FloodPointVector*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial3D::Analysis::CPositionColorTexturedSharedPtr& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_FloodPointVector_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial3D::Analysis::FloodPointVector *pObjectX = (EarthView::World::Spatial3D::Analysis::FloodPointVector*) pObjXXXX;
					EarthView::World::Spatial3D::Analysis::CPositionColorTexturedSharedPtr& __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_FloodPointVector_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Analysis::FloodPointVector *pObjectX = (EarthView::World::Spatial3D::Analysis::FloodPointVector*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_FloodPointVector_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Spatial3D::Analysis::FloodPointVector *pObjectX = (EarthView::World::Spatial3D::Analysis::FloodPointVector*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_FloodPointVector_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Spatial3D::Analysis::FloodPointVector *pObjectX = (EarthView::World::Spatial3D::Analysis::FloodPointVector*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_FloodPointVector_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::FloodPointVector *pObjectX = (EarthView::World::Spatial3D::Analysis::FloodPointVector*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_FloodPointVector_swap_1FloodPointVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rhs_j)
				{
					EarthView::World::Spatial3D::Analysis::FloodPointVector &rhs = *(EarthView::World::Spatial3D::Analysis::FloodPointVector*) rhs_j;
					EarthView::World::Spatial3D::Analysis::FloodPointVector *pObjectX = (EarthView::World::Spatial3D::Analysis::FloodPointVector*) pObjXXXX;
					pObjectX->swap(rhs);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_analysis_FloodMeshPoint_get_1mRowIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CFloodMeshPoint *pObjectX = (EarthView::World::Spatial3D::Analysis::CFloodMeshPoint*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mRowIndex);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_FloodMeshPoint_set_1mRowIndex_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial3D::Analysis::CFloodMeshPoint *pObjectX = (EarthView::World::Spatial3D::Analysis::CFloodMeshPoint*)pObjXXXX;
					pObjectX->mRowIndex = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_analysis_FloodMeshPoint_get_1mColumnIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CFloodMeshPoint *pObjectX = (EarthView::World::Spatial3D::Analysis::CFloodMeshPoint*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mColumnIndex);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_FloodMeshPoint_set_1mColumnIndex_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial3D::Analysis::CFloodMeshPoint *pObjectX = (EarthView::World::Spatial3D::Analysis::CFloodMeshPoint*)pObjXXXX;
					pObjectX->mColumnIndex = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_FloodMeshPoint_get_1mAltitude_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CFloodMeshPoint *pObjectX = (EarthView::World::Spatial3D::Analysis::CFloodMeshPoint*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mAltitude);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_FloodMeshPoint_set_1mAltitude_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::Analysis::CFloodMeshPoint *pObjectX = (EarthView::World::Spatial3D::Analysis::CFloodMeshPoint*)pObjXXXX;
					pObjectX->mAltitude = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_FloodRenderBlock_get_1mVertices_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CFloodRenderBlock *pObjectX = (EarthView::World::Spatial3D::Analysis::CFloodRenderBlock*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mVertices);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_FloodRenderBlock_set_1mVertices_1FloodPointVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Analysis::CFloodRenderBlock *pObjectX = (EarthView::World::Spatial3D::Analysis::CFloodRenderBlock*)pObjXXXX;
					pObjectX->mVertices = *(EarthView::World::Spatial3D::Analysis::FloodPointVector*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_FloodRenderBlock_get_1mIndices_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CFloodRenderBlock *pObjectX = (EarthView::World::Spatial3D::Analysis::CFloodRenderBlock*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mIndices);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_FloodRenderBlock_set_1mIndices_1IntVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Analysis::CFloodRenderBlock *pObjectX = (EarthView::World::Spatial3D::Analysis::CFloodRenderBlock*)pObjXXXX;
					pObjectX->mIndices = *(EarthView::World::Core::IntVector*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_FloodRenderBlock_get_1mBoundingBox_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CFloodRenderBlock *pObjectX = (EarthView::World::Spatial3D::Analysis::CFloodRenderBlock*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mBoundingBox);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_FloodRenderBlock_set_1mBoundingBox_1CGeoBoundingBox(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Analysis::CFloodRenderBlock *pObjectX = (EarthView::World::Spatial3D::Analysis::CFloodRenderBlock*)pObjXXXX;
					pObjectX->mBoundingBox = *(EarthView::World::Spatial3D::Analysis::CGeoBoundingBox*) __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_FloodRenderBlock_get_1mRowCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CFloodRenderBlock *pObjectX = (EarthView::World::Spatial3D::Analysis::CFloodRenderBlock*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mRowCount);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_FloodRenderBlock_set_1mRowCount_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::Analysis::CFloodRenderBlock *pObjectX = (EarthView::World::Spatial3D::Analysis::CFloodRenderBlock*)pObjXXXX;
					pObjectX->mRowCount = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_FloodRenderBlock_get_1mColumnCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CFloodRenderBlock *pObjectX = (EarthView::World::Spatial3D::Analysis::CFloodRenderBlock*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mColumnCount);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_FloodRenderBlock_set_1mColumnCount_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::Analysis::CFloodRenderBlock *pObjectX = (EarthView::World::Spatial3D::Analysis::CFloodRenderBlock*)pObjXXXX;
					pObjectX->mColumnCount = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_FloodRenderBlock_get_1mCenterGeoPosition_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CFloodRenderBlock *pObjectX = (EarthView::World::Spatial3D::Analysis::CFloodRenderBlock*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mCenterGeoPosition);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_FloodRenderBlock_set_1mCenterGeoPosition_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Analysis::CFloodRenderBlock *pObjectX = (EarthView::World::Spatial3D::Analysis::CFloodRenderBlock*)pObjXXXX;
					pObjectX->mCenterGeoPosition = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_FloodRenderBlock_get_1mCenterWorldPosition_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CFloodRenderBlock *pObjectX = (EarthView::World::Spatial3D::Analysis::CFloodRenderBlock*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mCenterWorldPosition);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_FloodRenderBlock_set_1mCenterWorldPosition_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Analysis::CFloodRenderBlock *pObjectX = (EarthView::World::Spatial3D::Analysis::CFloodRenderBlock*)pObjXXXX;
					pObjectX->mCenterWorldPosition = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Frenderblockset_push_1back_1CFloodRenderBlock(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Spatial3D::Analysis::CFloodRenderBlock &t = *(EarthView::World::Spatial3D::Analysis::CFloodRenderBlock*) t_j;
					EarthView::World::Spatial3D::Analysis::CFRenderBlockSet *pObjectX = (EarthView::World::Spatial3D::Analysis::CFRenderBlockSet*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Frenderblockset_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CFRenderBlockSet *pObjectX = (EarthView::World::Spatial3D::Analysis::CFRenderBlockSet*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_Frenderblockset_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CFRenderBlockSet *pObjectX = (EarthView::World::Spatial3D::Analysis::CFRenderBlockSet*) pObjXXXX;
					EarthView::World::Spatial3D::Analysis::CFloodRenderBlock& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_Frenderblockset_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CFRenderBlockSet *pObjectX = (EarthView::World::Spatial3D::Analysis::CFRenderBlockSet*) pObjXXXX;
					EarthView::World::Spatial3D::Analysis::CFloodRenderBlock& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Frenderblockset_insert_1ev_1uint32_1CFloodRenderBlock(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial3D::Analysis::CFloodRenderBlock &t = *(EarthView::World::Spatial3D::Analysis::CFloodRenderBlock*) t_j;
					EarthView::World::Spatial3D::Analysis::CFRenderBlockSet *pObjectX = (EarthView::World::Spatial3D::Analysis::CFRenderBlockSet*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Frenderblockset_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::Spatial3D::Analysis::CFRenderBlockSet *pObjectX = (EarthView::World::Spatial3D::Analysis::CFRenderBlockSet*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_analysis_Frenderblockset_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Analysis::CFRenderBlockSet *pObjectX = (EarthView::World::Spatial3D::Analysis::CFRenderBlockSet*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_Frenderblockset_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::World::Spatial3D::Analysis::CFRenderBlockSet& pObjectX = *(EarthView::World::Spatial3D::Analysis::CFRenderBlockSet*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial3D::Analysis::CFloodRenderBlock& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_Frenderblockset_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial3D::Analysis::CFRenderBlockSet *pObjectX = (EarthView::World::Spatial3D::Analysis::CFRenderBlockSet*) pObjXXXX;
					EarthView::World::Spatial3D::Analysis::CFloodRenderBlock& __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_Frenderblockset_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Analysis::CFRenderBlockSet *pObjectX = (EarthView::World::Spatial3D::Analysis::CFRenderBlockSet*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Frenderblockset_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Spatial3D::Analysis::CFRenderBlockSet *pObjectX = (EarthView::World::Spatial3D::Analysis::CFRenderBlockSet*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Frenderblockset_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Spatial3D::Analysis::CFRenderBlockSet *pObjectX = (EarthView::World::Spatial3D::Analysis::CFRenderBlockSet*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Frenderblockset_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CFRenderBlockSet *pObjectX = (EarthView::World::Spatial3D::Analysis::CFRenderBlockSet*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Frenderblockset_swap_1CFRenderBlockSet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rhs_j)
				{
					EarthView::World::Spatial3D::Analysis::CFRenderBlockSet &rhs = *(EarthView::World::Spatial3D::Analysis::CFRenderBlockSet*) rhs_j;
					EarthView::World::Spatial3D::Analysis::CFRenderBlockSet *pObjectX = (EarthView::World::Spatial3D::Analysis::CFRenderBlockSet*) pObjXXXX;
					pObjectX->swap(rhs);
				}
				class JCMath3DRegionFloodProxy : public EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood
				{
				 private:
					EarthView::World::Core::ev_string m_getAltitude3DListener_void_callback;
					EarthView::World::Core::ev_string m_setAltitude3DListener_CAltitude3DListener_callback;
				public:
					JCMath3DRegionFloodProxy(EarthView::World::Core::CNameValuePairList *pList) : CMath3DRegionFlood(pList)
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
					void register_getAltitude3DListener_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getAltitude3DListener_void_callback = __method;
					}
					void register_setAltitude3DListener_CAltitude3DListener_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setAltitude3DListener_CAltitude3DListener_callback = __method;
					}
					virtual const EarthView::World::Spatial3D::Analysis::CAltitude3DListener* getAltitude3DListener() const
					{
						if (this->_gRef != NULL && this->m_getAltitude3DListener_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getAltitude3DListener_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Spatial3D::Analysis::CAltitude3DListener *__values1 = (const EarthView::World::Spatial3D::Analysis::CAltitude3DListener*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CMath3DRegionFlood::getAltitude3DListener();
						}
					}
					virtual void setAltitude3DListener(EarthView::World::Spatial3D::Analysis::CAltitude3DListener* ref_pListener)
					{
						if (this->_gRef != NULL && this->m_setAltitude3DListener_CAltitude3DListener_callback != "" && this->isCustomExtend())
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
							jlong ref_pListener_j = (jlong) ref_pListener;
							jmethodID __method = __gr->getMethod("setAltitude3DListener_CAltitude3DListener_callback");
							__env->CallVoidMethod(__obj, __method , ref_pListener_j);
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
							return this->CMath3DRegionFlood::setAltitude3DListener(ref_pListener);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCMath3DRegionFloodProxy);
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DRegionFlood_getSearchRadius_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getSearchRadius();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DRegionFlood_setSearchRadius_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					const ev_real64 value = (const ev_real64) value_j;
					EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood*) pObjXXXX;
					pObjectX->setSearchRadius(value);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DRegionFlood_getInterval_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getInterval();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DRegionFlood_setInterval_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					const ev_real64 value = (const ev_real64) value_j;
					EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood*) pObjXXXX;
					pObjectX->setInterval(value);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DRegionFlood_getNeedStop_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood*) pObjXXXX;
					ev_bool __values1 = pObjectX->getNeedStop();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DRegionFlood_setNeedStop_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					const ev_bool value = (const ev_bool) value_j;
					EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood*) pObjXXXX;
					pObjectX->setNeedStop(value);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DRegionFlood_getAlphaDivision_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getAlphaDivision();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DRegionFlood_setAlphaDivision_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					const ev_real64 value = (const ev_real64) value_j;
					EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood*) pObjXXXX;
					pObjectX->setAlphaDivision(value);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DRegionFlood_getSignLength_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getSignLength();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DRegionFlood_setSignLength_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint value_j)
				{
					const ev_int32 value = (const ev_int32) value_j;
					EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood*) pObjXXXX;
					pObjectX->setSignLength(value);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DRegionFlood_getProgressV_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getProgressV();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DRegionFlood_getFloodSurfaceArea_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getFloodSurfaceArea();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DRegionFlood_getFloodGroundArea_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getFloodGroundArea();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DRegionFlood_getFloodVolume_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getFloodVolume();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DRegionFlood_calcuFloodParam_1CVector3_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong center_j, jdouble altitude_j)
				{
					EarthView::World::Spatial::Math::CVector3 center = *(EarthView::World::Spatial::Math::CVector3*) center_j;
					ev_real64 altitude = (ev_real64) altitude_j;
					EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood*) pObjXXXX;
					pObjectX->calcuFloodParam(center, altitude);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DRegionFlood_calcuRenderData_1CFRenderBlockSet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong renderBlockList_j)
				{
					EarthView::World::Spatial3D::Analysis::CFRenderBlockSet &renderBlockList = *(EarthView::World::Spatial3D::Analysis::CFRenderBlockSet*) renderBlockList_j;
					EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood*) pObjXXXX;
					pObjectX->calcuRenderData(renderBlockList);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DRegionFlood_calcuFloodAltitude_1CVector3_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong center_j, jdouble floodVolume_j, jdouble error_j)
				{
					EarthView::World::Spatial::Math::CVector3 center = *(EarthView::World::Spatial::Math::CVector3*) center_j;
					ev_real64 floodVolume = (ev_real64) floodVolume_j;
					ev_real64 error = (ev_real64) error_j;
					EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood*) pObjXXXX;
					ev_real64 __values1 = pObjectX->calcuFloodAltitude(center, floodVolume, error);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DRegionFlood_calculateOnServer_1CVector3_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong center_j, jdouble altitude_j, jlong floodArea_j, jlong groundArea_j, jlong floodVolume_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &center = *(EarthView::World::Spatial::Math::CVector3*) center_j;
					const ev_real64 altitude = (const ev_real64) altitude_j;
					ev_real64 &floodArea = *(ev_real64*) floodArea_j;
					ev_real64 &groundArea = *(ev_real64*) groundArea_j;
					ev_real64 &floodVolume = *(ev_real64*) floodVolume_j;
					EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood*) pObjXXXX;
					pObjectX->calculateOnServer(center, altitude, floodArea, groundArea, floodVolume);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DRegionFlood_register_1getAltitude3DListener_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMath3DRegionFloodProxy *pObjectX = (JCMath3DRegionFloodProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getAltitude3DListener_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getAltitude3DListener_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DRegionFlood_register_1setAltitude3DListener_1CAltitude3DListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMath3DRegionFloodProxy *pObjectX = (JCMath3DRegionFloodProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setAltitude3DListener_CAltitude3DListener_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setAltitude3DListener_CAltitude3DListener_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
			}
		}
	}
}
