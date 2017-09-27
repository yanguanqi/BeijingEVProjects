/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/WakeGenerator.h"
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
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_WakeGeneratorParameters_get_1sprayEffects_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::WakeGeneratorParameters *pObjectX = (EarthView::World::Spatial3D::WakeGeneratorParameters*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->sprayEffects);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_WakeGeneratorParameters_set_1sprayEffects_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Spatial3D::WakeGeneratorParameters *pObjectX = (EarthView::World::Spatial3D::WakeGeneratorParameters*)pObjXXXX;
				pObjectX->sprayEffects = (bool)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_WakeGeneratorParameters_get_1bowSprayOffset_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::WakeGeneratorParameters *pObjectX = (EarthView::World::Spatial3D::WakeGeneratorParameters*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->bowSprayOffset);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_WakeGeneratorParameters_set_1bowSprayOffset_1double(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial3D::WakeGeneratorParameters *pObjectX = (EarthView::World::Spatial3D::WakeGeneratorParameters*)pObjXXXX;
				pObjectX->bowSprayOffset = (double)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_WakeGeneratorParameters_get_1sprayVelocityScale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::WakeGeneratorParameters *pObjectX = (EarthView::World::Spatial3D::WakeGeneratorParameters*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->sprayVelocityScale);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_WakeGeneratorParameters_set_1sprayVelocityScale_1double(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial3D::WakeGeneratorParameters *pObjectX = (EarthView::World::Spatial3D::WakeGeneratorParameters*)pObjXXXX;
				pObjectX->sprayVelocityScale = (double)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_WakeGeneratorParameters_get_1spraySizeScale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::WakeGeneratorParameters *pObjectX = (EarthView::World::Spatial3D::WakeGeneratorParameters*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->spraySizeScale);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_WakeGeneratorParameters_set_1spraySizeScale_1double(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial3D::WakeGeneratorParameters *pObjectX = (EarthView::World::Spatial3D::WakeGeneratorParameters*)pObjXXXX;
				pObjectX->spraySizeScale = (double)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_WakeGeneratorParameters_get_1bowWaveOffset_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::WakeGeneratorParameters *pObjectX = (EarthView::World::Spatial3D::WakeGeneratorParameters*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->bowWaveOffset);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_WakeGeneratorParameters_set_1bowWaveOffset_1double(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial3D::WakeGeneratorParameters *pObjectX = (EarthView::World::Spatial3D::WakeGeneratorParameters*)pObjXXXX;
				pObjectX->bowWaveOffset = (double)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_WakeGeneratorParameters_get_1bowWaveScale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::WakeGeneratorParameters *pObjectX = (EarthView::World::Spatial3D::WakeGeneratorParameters*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->bowWaveScale);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_WakeGeneratorParameters_set_1bowWaveScale_1double(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial3D::WakeGeneratorParameters *pObjectX = (EarthView::World::Spatial3D::WakeGeneratorParameters*)pObjXXXX;
				pObjectX->bowWaveScale = (double)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_WakeGeneratorParameters_get_1bowWaveMax_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::WakeGeneratorParameters *pObjectX = (EarthView::World::Spatial3D::WakeGeneratorParameters*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->bowWaveMax);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_WakeGeneratorParameters_set_1bowWaveMax_1double(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial3D::WakeGeneratorParameters *pObjectX = (EarthView::World::Spatial3D::WakeGeneratorParameters*)pObjXXXX;
				pObjectX->bowWaveMax = (double)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_WakeGeneratorParameters_get_1bowSize_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::WakeGeneratorParameters *pObjectX = (EarthView::World::Spatial3D::WakeGeneratorParameters*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->bowSize);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_WakeGeneratorParameters_set_1bowSize_1double(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial3D::WakeGeneratorParameters *pObjectX = (EarthView::World::Spatial3D::WakeGeneratorParameters*)pObjXXXX;
				pObjectX->bowSize = (double)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_WakeGeneratorParameters_get_1sternWaveOffset_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::WakeGeneratorParameters *pObjectX = (EarthView::World::Spatial3D::WakeGeneratorParameters*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->sternWaveOffset);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_WakeGeneratorParameters_set_1sternWaveOffset_1double(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial3D::WakeGeneratorParameters *pObjectX = (EarthView::World::Spatial3D::WakeGeneratorParameters*)pObjXXXX;
				pObjectX->sternWaveOffset = (double)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_WakeGeneratorParameters_get_1length_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::WakeGeneratorParameters *pObjectX = (EarthView::World::Spatial3D::WakeGeneratorParameters*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->length);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_WakeGeneratorParameters_set_1length_1double(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial3D::WakeGeneratorParameters *pObjectX = (EarthView::World::Spatial3D::WakeGeneratorParameters*)pObjXXXX;
				pObjectX->length = (double)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_WakeGeneratorParameters_get_1beamWidth_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::WakeGeneratorParameters *pObjectX = (EarthView::World::Spatial3D::WakeGeneratorParameters*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->beamWidth);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_WakeGeneratorParameters_set_1beamWidth_1double(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial3D::WakeGeneratorParameters *pObjectX = (EarthView::World::Spatial3D::WakeGeneratorParameters*)pObjXXXX;
				pObjectX->beamWidth = (double)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_WakeGeneratorParameters_get_1draft_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::WakeGeneratorParameters *pObjectX = (EarthView::World::Spatial3D::WakeGeneratorParameters*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->draft);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_WakeGeneratorParameters_set_1draft_1double(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial3D::WakeGeneratorParameters *pObjectX = (EarthView::World::Spatial3D::WakeGeneratorParameters*)pObjXXXX;
				pObjectX->draft = (double)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_WakeGeneratorParameters_get_1propWash_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::WakeGeneratorParameters *pObjectX = (EarthView::World::Spatial3D::WakeGeneratorParameters*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->propWash);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_WakeGeneratorParameters_set_1propWash_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Spatial3D::WakeGeneratorParameters *pObjectX = (EarthView::World::Spatial3D::WakeGeneratorParameters*)pObjXXXX;
				pObjectX->propWash = (bool)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_WakeGeneratorParameters_get_1propWashOffset_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::WakeGeneratorParameters *pObjectX = (EarthView::World::Spatial3D::WakeGeneratorParameters*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->propWashOffset);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_WakeGeneratorParameters_set_1propWashOffset_1double(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial3D::WakeGeneratorParameters *pObjectX = (EarthView::World::Spatial3D::WakeGeneratorParameters*)pObjXXXX;
				pObjectX->propWashOffset = (double)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_WakeGeneratorParameters_get_1propWashWidthMultiplier_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::WakeGeneratorParameters *pObjectX = (EarthView::World::Spatial3D::WakeGeneratorParameters*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->propWashWidthMultiplier);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_WakeGeneratorParameters_set_1propWashWidthMultiplier_1double(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial3D::WakeGeneratorParameters *pObjectX = (EarthView::World::Spatial3D::WakeGeneratorParameters*)pObjXXXX;
				pObjectX->propWashWidthMultiplier = (double)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_WakeGeneratorParameters_get_1numHullSprays_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::WakeGeneratorParameters *pObjectX = (EarthView::World::Spatial3D::WakeGeneratorParameters*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->numHullSprays);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_WakeGeneratorParameters_set_1numHullSprays_1int(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Spatial3D::WakeGeneratorParameters *pObjectX = (EarthView::World::Spatial3D::WakeGeneratorParameters*)pObjXXXX;
				pObjectX->numHullSprays = (int)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_WakeGeneratorParameters_get_1hullSprayStartOffset_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::WakeGeneratorParameters *pObjectX = (EarthView::World::Spatial3D::WakeGeneratorParameters*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->hullSprayStartOffset);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_WakeGeneratorParameters_set_1hullSprayStartOffset_1double(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial3D::WakeGeneratorParameters *pObjectX = (EarthView::World::Spatial3D::WakeGeneratorParameters*)pObjXXXX;
				pObjectX->hullSprayStartOffset = (double)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_WakeGeneratorParameters_get_1hullSprayEndOffset_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::WakeGeneratorParameters *pObjectX = (EarthView::World::Spatial3D::WakeGeneratorParameters*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->hullSprayEndOffset);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_WakeGeneratorParameters_set_1hullSprayEndOffset_1double(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial3D::WakeGeneratorParameters *pObjectX = (EarthView::World::Spatial3D::WakeGeneratorParameters*)pObjXXXX;
				pObjectX->hullSprayEndOffset = (double)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_WakeGeneratorParameters_get_1hullSprayScale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::WakeGeneratorParameters *pObjectX = (EarthView::World::Spatial3D::WakeGeneratorParameters*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->hullSprayScale);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_WakeGeneratorParameters_set_1hullSprayScale_1double(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial3D::WakeGeneratorParameters *pObjectX = (EarthView::World::Spatial3D::WakeGeneratorParameters*)pObjXXXX;
				pObjectX->hullSprayScale = (double)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_WakeGeneratorParameters_get_1hullSpraySizeScale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::WakeGeneratorParameters *pObjectX = (EarthView::World::Spatial3D::WakeGeneratorParameters*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->hullSpraySizeScale);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_WakeGeneratorParameters_set_1hullSpraySizeScale_1double(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial3D::WakeGeneratorParameters *pObjectX = (EarthView::World::Spatial3D::WakeGeneratorParameters*)pObjXXXX;
				pObjectX->hullSpraySizeScale = (double)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_WakeGeneratorParameters_get_1hullSprayVerticalOffset_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::WakeGeneratorParameters *pObjectX = (EarthView::World::Spatial3D::WakeGeneratorParameters*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->hullSprayVerticalOffset);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_WakeGeneratorParameters_set_1hullSprayVerticalOffset_1double(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial3D::WakeGeneratorParameters *pObjectX = (EarthView::World::Spatial3D::WakeGeneratorParameters*)pObjXXXX;
				pObjectX->hullSprayVerticalOffset = (double)__values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_WakeGenerator_Update_1CVector3_1CVector3_1double(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pPosition_j, jlong pDir_j, jdouble pVelocity_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &pPosition = *(EarthView::World::Spatial::Math::CVector3*) pPosition_j;
				const EarthView::World::Spatial::Math::CVector3 &pDir = *(EarthView::World::Spatial::Math::CVector3*) pDir_j;
				double pVelocity = (double) pVelocity_j;
				EarthView::World::Spatial3D::WakeGenerator *pObjectX = (EarthView::World::Spatial3D::WakeGenerator*) pObjXXXX;
				pObjectX->Update(pPosition, pDir, pVelocity);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_WakeGenerator_ClearWakes_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::WakeGenerator *pObjectX = (EarthView::World::Spatial3D::WakeGenerator*) pObjXXXX;
				pObjectX->ClearWakes();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_WakeGenerator_GetPosition_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::WakeGenerator *pObjectX = (EarthView::World::Spatial3D::WakeGenerator*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->GetPosition();
				EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_WakeGenerator_GetSternPosition_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::WakeGenerator *pObjectX = (EarthView::World::Spatial3D::WakeGenerator*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->GetSternPosition();
				EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_WakeGenerator_GetVelocity_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::WakeGenerator *pObjectX = (EarthView::World::Spatial3D::WakeGenerator*) pObjXXXX;
				double __values1 = pObjectX->GetVelocity();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_WakeGenerator_HasPropWash_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::WakeGenerator *pObjectX = (EarthView::World::Spatial3D::WakeGenerator*) pObjXXXX;
				bool __values1 = pObjectX->HasPropWash();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_WakeGenerator_SetLODDistance_1double(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble distance_j)
			{
				double distance = (double) distance_j;
				EarthView::World::Spatial3D::WakeGenerator *pObjectX = (EarthView::World::Spatial3D::WakeGenerator*) pObjXXXX;
				pObjectX->SetLODDistance(distance);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_WakeGenerator_GetLODDistance_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::WakeGenerator *pObjectX = (EarthView::World::Spatial3D::WakeGenerator*) pObjXXXX;
				double __values1 = pObjectX->GetLODDistance();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_WakeGenerator_GetParameters_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::WakeGenerator *pObjectX = (EarthView::World::Spatial3D::WakeGenerator*) pObjXXXX;
				const EarthView::World::Spatial3D::WakeGeneratorParameters& __values1 = pObjectX->GetParameters();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_WakeGenerator_SetParameters_1WakeGeneratorParameters(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong parameters_j)
			{
				const EarthView::World::Spatial3D::WakeGeneratorParameters &parameters = *(EarthView::World::Spatial3D::WakeGeneratorParameters*) parameters_j;
				EarthView::World::Spatial3D::WakeGenerator *pObjectX = (EarthView::World::Spatial3D::WakeGenerator*) pObjXXXX;
				pObjectX->SetParameters(parameters);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_WakeGenerator_OceanDestroyed_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::WakeGenerator *pObjectX = (EarthView::World::Spatial3D::WakeGenerator*) pObjXXXX;
				pObjectX->OceanDestroyed();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_WakeGenerator_WakeManagerDestroyed_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::WakeGenerator *pObjectX = (EarthView::World::Spatial3D::WakeGenerator*) pObjXXXX;
				pObjectX->WakeManagerDestroyed();
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_WakeGenerator_GetMaxWakeNumber_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::WakeGenerator *pObjectX = (EarthView::World::Spatial3D::WakeGenerator*) pObjXXXX;
				int __values1 = pObjectX->GetMaxWakeNumber();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_WakeGenerator_GetDistanceTravelled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::WakeGenerator *pObjectX = (EarthView::World::Spatial3D::WakeGenerator*) pObjXXXX;
				double __values1 = pObjectX->GetDistanceTravelled();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
		}
	}
}
