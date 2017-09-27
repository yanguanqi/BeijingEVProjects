/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/militaryengine/radarlibrary/terrainshade.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace MilitaryEngine
		{
			namespace RadarLibrary
			{
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_ScaleVector_Create(JNIEnv *__env, jclass __clazz)
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::ScaleVector *pObjectX = new EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::ScaleVector();
					return (jlong) pObjectX;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_ScaleVector_Destroy(JNIEnv *__env, jclass __clazz, jlong pObjXXXX)
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::ScaleVector *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::ScaleVector*)pObjXXXX;
					delete pObjectX;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_ScaleVector_get_1verticalAngle_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::ScaleVector *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::ScaleVector*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->verticalAngle);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_ScaleVector_set_1verticalAngle_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::ScaleVector *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::ScaleVector*)pObjXXXX;
					pObjectX->verticalAngle = (Real)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_ScaleVector_get_1powerScale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::ScaleVector *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::ScaleVector*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->powerScale);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_ScaleVector_set_1powerScale_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::ScaleVector *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::ScaleVector*)pObjXXXX;
					pObjectX->powerScale = (Real)__values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_ScaleVectorList_OperatorAssign_1CScaleVectorList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong value_j )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList& pObjectX = *(EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList*) pObjXXXX;
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList &value = *(EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList*) value_j;
					pObjectX = value;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_ScaleVectorList_push_1back_1ScaleVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::ScaleVector *value = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::ScaleVector*) value_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList*) pObjXXXX;
					pObjectX->push_back(value);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_ScaleVectorList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_ScaleVectorList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList*) pObjXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::ScaleVector* __values1 = pObjectX->front();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_ScaleVectorList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList*) pObjXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::ScaleVector* __values1 = pObjectX->back();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_ScaleVectorList_insert_1ev_1uint32_1ScaleVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong value_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::ScaleVector *value = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::ScaleVector*) value_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList*) pObjXXXX;
					pObjectX->insert(pos, value);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_ScaleVectorList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_ScaleVectorList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_ScaleVectorList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList& pObjectX = *(EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::ScaleVector* __values1 = pObjectX[n];
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_ScaleVectorList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList*) pObjXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::ScaleVector* __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_ScaleVectorList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_ScaleVectorList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_ScaleVectorList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_ScaleVectorList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_TerrainShade_shadeAnalysistCalculateOnlyTerrain_1CVertexVector_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vertexVector_j, jlong splitNum_j)
				{
					const EarthView::World::Geometry3D::CVertexVector &vertexVector = *(EarthView::World::Geometry3D::CVertexVector*) vertexVector_j;
					const ev_uint32 splitNum = (const ev_uint32) splitNum_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CTerrainShade *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CTerrainShade*) pObjXXXX;
					pObjectX->shadeAnalysistCalculateOnlyTerrain(vertexVector, splitNum);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_TerrainShade_shadeAnalysistCalculateOnlyNearAngle_1CVertexVector_1ev_1uint32_1CShadeAngleDatas(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vertexVector_j, jlong splitNum_j, jlong ref_shadeDataList_j)
				{
					const EarthView::World::Geometry3D::CVertexVector &vertexVector = *(EarthView::World::Geometry3D::CVertexVector*) vertexVector_j;
					const ev_uint32 splitNum = (const ev_uint32) splitNum_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas *ref_shadeDataList = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas*) ref_shadeDataList_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CTerrainShade *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CTerrainShade*) pObjXXXX;
					pObjectX->shadeAnalysistCalculateOnlyNearAngle(vertexVector, splitNum, ref_shadeDataList);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_TerrainShade_shadeAnalysistCalculateWithTerrainNearAngle_1CVertexVector_1ev_1uint32_1CShadeAngleDatas(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vertexVector_j, jlong splitNum_j, jlong ref_shadeDataList_j)
				{
					const EarthView::World::Geometry3D::CVertexVector &vertexVector = *(EarthView::World::Geometry3D::CVertexVector*) vertexVector_j;
					const ev_uint32 splitNum = (ev_uint32) splitNum_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas *ref_shadeDataList = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas*) ref_shadeDataList_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CTerrainShade *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CTerrainShade*) pObjXXXX;
					pObjectX->shadeAnalysistCalculateWithTerrainNearAngle(vertexVector, splitNum, ref_shadeDataList);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_TerrainShade_getScaleVectorList_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CTerrainShade *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CTerrainShade*) pObjXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList* __values1 = pObjectX->getScaleVectorList();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
		}
	}
}
