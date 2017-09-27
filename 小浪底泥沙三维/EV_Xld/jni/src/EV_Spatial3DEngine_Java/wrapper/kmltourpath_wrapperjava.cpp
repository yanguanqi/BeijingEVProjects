/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/kmltourpath.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
		}
		namespace Spatial
		{
			namespace Kml
			{
			}
		}
		namespace Spatial3D
		{
			namespace KmlManager
			{
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlFlyTo_OperatorEquals_1CKmlFlyTo(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlFlyTo& pObjectX = *(EarthView::World::Spatial3D::KmlManager::CKmlFlyTo*) pObjXXXX;
					const EarthView::World::Spatial3D::KmlManager::CKmlFlyTo &rhs = *(EarthView::World::Spatial3D::KmlManager::CKmlFlyTo*) rhs_j;
					ev_bool __values1 = (pObjectX == rhs);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlFlyTo_OperatorNotEquals_1CKmlFlyTo(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlFlyTo& pObjectX = *(EarthView::World::Spatial3D::KmlManager::CKmlFlyTo*) pObjXXXX;
					const EarthView::World::Spatial3D::KmlManager::CKmlFlyTo &rhs = *(EarthView::World::Spatial3D::KmlManager::CKmlFlyTo*) rhs_j;
					ev_bool __values1 = (pObjectX != rhs);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlFlyTo_get_1mlatitude_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlFlyTo *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlFlyTo*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mlatitude);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlFlyTo_set_1mlatitude_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlFlyTo *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlFlyTo*)pObjXXXX;
					pObjectX->mlatitude = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlFlyTo_get_1mlongitude_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlFlyTo *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlFlyTo*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mlongitude);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlFlyTo_set_1mlongitude_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlFlyTo *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlFlyTo*)pObjXXXX;
					pObjectX->mlongitude = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlFlyTo_get_1mheading_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlFlyTo *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlFlyTo*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mheading);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlFlyTo_set_1mheading_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlFlyTo *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlFlyTo*)pObjXXXX;
					pObjectX->mheading = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlFlyTo_get_1mtilt_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlFlyTo *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlFlyTo*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mtilt);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlFlyTo_set_1mtilt_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlFlyTo *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlFlyTo*)pObjXXXX;
					pObjectX->mtilt = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlFlyTo_get_1maltitude_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlFlyTo *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlFlyTo*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->maltitude);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlFlyTo_set_1maltitude_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlFlyTo *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlFlyTo*)pObjXXXX;
					pObjectX->maltitude = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlFlyTo_get_1mmoditifAltitude_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlFlyTo *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlFlyTo*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mmoditifAltitude);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlFlyTo_set_1mmoditifAltitude_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlFlyTo *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlFlyTo*)pObjXXXX;
					pObjectX->mmoditifAltitude = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlFlyTo_get_1mdistance_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlFlyTo *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlFlyTo*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mdistance);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlFlyTo_set_1mdistance_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlFlyTo *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlFlyTo*)pObjXXXX;
					pObjectX->mdistance = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlFlyTo_get_1mneedStop_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlFlyTo *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlFlyTo*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->mneedStop);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlFlyTo_set_1mneedStop_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlFlyTo *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlFlyTo*)pObjXXXX;
					pObjectX->mneedStop = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlFlyTo_get_1mtimeSpan_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlFlyTo *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlFlyTo*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mtimeSpan);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlFlyTo_set_1mtimeSpan_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlFlyTo *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlFlyTo*)pObjXXXX;
					pObjectX->mtimeSpan = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlFlyTo_get_1misWait_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlFlyTo *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlFlyTo*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->misWait);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlFlyTo_set_1misWait_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlFlyTo *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlFlyTo*)pObjXXXX;
					pObjectX->misWait = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlFlyToMap_push_1ev_1real64_1CKmlFlyTo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble key_j, jlong val_j)
				{
					const ev_real64 key = (const ev_real64) key_j;
					EarthView::World::Spatial3D::KmlManager::CKmlFlyTo &val = *(EarthView::World::Spatial3D::KmlManager::CKmlFlyTo*) val_j;
					EarthView::World::Spatial3D::KmlManager::CKmlFlyToMap *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlFlyToMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->push(key, val);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlFlyToMap_exist_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble key_j)
				{
					const ev_real64 key = (const ev_real64) key_j;
					EarthView::World::Spatial3D::KmlManager::CKmlFlyToMap *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlFlyToMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->exist(key);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlFlyToMap_OperatorIndex_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble key_j )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlFlyToMap& pObjectX = *(EarthView::World::Spatial3D::KmlManager::CKmlFlyToMap*) pObjXXXX;
					const ev_real64 key = (const ev_real64) key_j;
					EarthView::World::Spatial3D::KmlManager::CKmlFlyTo& __values1 = pObjectX[key];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlFlyToMap_get_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble key_j)
				{
					const ev_real64 key = (const ev_real64) key_j;
					EarthView::World::Spatial3D::KmlManager::CKmlFlyToMap *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlFlyToMap*) pObjXXXX;
					EarthView::World::Spatial3D::KmlManager::CKmlFlyTo& __values1 = pObjectX->get(key);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlFlyToMap_erase_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble key_j)
				{
					const ev_real64 key = (const ev_real64) key_j;
					EarthView::World::Spatial3D::KmlManager::CKmlFlyToMap *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlFlyToMap*) pObjXXXX;
					pObjectX->erase(key);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlFlyToMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::KmlManager::CKmlFlyToMap *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlFlyToMap*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlFlyToMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlFlyToMap *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlFlyToMap*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlFlyToMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::KmlManager::CKmlFlyToMap *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlFlyToMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlFlyToTimeMap_push_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble key_j, jdouble val_j)
				{
					const ev_real64 key = (const ev_real64) key_j;
					ev_real64 val = (ev_real64) val_j;
					EarthView::World::Spatial3D::KmlManager::CKmlFlyToTimeMap *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlFlyToTimeMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->push(key, val);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlFlyToTimeMap_exist_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble key_j)
				{
					const ev_real64 key = (const ev_real64) key_j;
					EarthView::World::Spatial3D::KmlManager::CKmlFlyToTimeMap *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlFlyToTimeMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->exist(key);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlFlyToTimeMap_OperatorIndex_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble key_j )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlFlyToTimeMap& pObjectX = *(EarthView::World::Spatial3D::KmlManager::CKmlFlyToTimeMap*) pObjXXXX;
					const ev_real64 key = (const ev_real64) key_j;
					ev_real64& __values1 = pObjectX[key];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlFlyToTimeMap_get_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble key_j)
				{
					const ev_real64 key = (const ev_real64) key_j;
					EarthView::World::Spatial3D::KmlManager::CKmlFlyToTimeMap *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlFlyToTimeMap*) pObjXXXX;
					ev_real64& __values1 = pObjectX->get(key);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlFlyToTimeMap_erase_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble key_j)
				{
					const ev_real64 key = (const ev_real64) key_j;
					EarthView::World::Spatial3D::KmlManager::CKmlFlyToTimeMap *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlFlyToTimeMap*) pObjXXXX;
					pObjectX->erase(key);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlFlyToTimeMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::KmlManager::CKmlFlyToTimeMap *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlFlyToTimeMap*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlFlyToTimeMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlFlyToTimeMap *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlFlyToTimeMap*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlFlyToTimeMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::KmlManager::CKmlFlyToTimeMap *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlFlyToTimeMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlTourPath_initializeFlyToMap_1CTour(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_tour_j)
				{
					EarthView::World::Spatial::Kml::CTour *ref_tour = (EarthView::World::Spatial::Kml::CTour*) ref_tour_j;
					EarthView::World::Spatial3D::KmlManager::CKmlTourPath *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlTourPath*) pObjXXXX;
					pObjectX->initializeFlyToMap(ref_tour);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlTourPath_initializeKmlTour_1CTour(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_tour_j)
				{
					EarthView::World::Spatial::Kml::CTour *ref_tour = (EarthView::World::Spatial::Kml::CTour*) ref_tour_j;
					EarthView::World::Spatial3D::KmlManager::CKmlTourPath *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlTourPath*) pObjXXXX;
					pObjectX->initializeKmlTour(ref_tour);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlTourPath_getAltitude_1EVAltitudeMode_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint altitudeMode_j, jdouble latitude_j, jdouble longitude_j, jdouble originalAltitude_j)
				{
					EarthView::World::Spatial::Utility::EVAltitudeMode altitudeMode = (EarthView::World::Spatial::Utility::EVAltitudeMode) altitudeMode_j;
					ev_real64 latitude = (ev_real64) latitude_j;
					ev_real64 longitude = (ev_real64) longitude_j;
					ev_real64 originalAltitude = (ev_real64) originalAltitude_j;
					EarthView::World::Spatial3D::KmlManager::CKmlTourPath *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlTourPath*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getAltitude(altitudeMode, latitude, longitude, originalAltitude);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlTourPath_setSceneManager_1CSceneManager(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_sceneManager_j)
				{
					EarthView::World::Graphic::CSceneManager *ref_sceneManager = (EarthView::World::Graphic::CSceneManager*) ref_sceneManager_j;
					EarthView::World::Spatial3D::KmlManager::CKmlTourPath *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlTourPath*) pObjXXXX;
					pObjectX->setSceneManager(ref_sceneManager);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlTourPath_convertToKmlFlyTo_1CFlyTo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong flyTo_j)
				{
					EarthView::World::Spatial::Kml::CFlyTo *flyTo = (EarthView::World::Spatial::Kml::CFlyTo*) flyTo_j;
					EarthView::World::Spatial3D::KmlManager::CKmlTourPath *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlTourPath*) pObjXXXX;
					EarthView::World::Spatial3D::KmlManager::CKmlFlyTo __values1 = pObjectX->convertToKmlFlyTo(flyTo);
					EarthView::World::Spatial3D::KmlManager::CKmlFlyTo *returnvalues = new EarthView::World::Spatial3D::KmlManager::CKmlFlyTo(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlTourPath_getInterpolaterdFlyTo_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble time_j)
				{
					ev_real64 time = (ev_real64) time_j;
					EarthView::World::Spatial3D::KmlManager::CKmlTourPath *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlTourPath*) pObjXXXX;
					EarthView::World::Spatial3D::KmlManager::CKmlFlyTo __values1 = pObjectX->getInterpolaterdFlyTo(time);
					EarthView::World::Spatial3D::KmlManager::CKmlFlyTo *returnvalues = new EarthView::World::Spatial3D::KmlManager::CKmlFlyTo(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlTourPath_setFlyTo_1CKmlFlyTo_1CKmlFlyTo_1CKmlFlyTo_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong kmlFlyTo_j, jlong front_j, jlong back_j, jdouble ratio_j)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlFlyTo &kmlFlyTo = *(EarthView::World::Spatial3D::KmlManager::CKmlFlyTo*) kmlFlyTo_j;
					const EarthView::World::Spatial3D::KmlManager::CKmlFlyTo &front = *(EarthView::World::Spatial3D::KmlManager::CKmlFlyTo*) front_j;
					const EarthView::World::Spatial3D::KmlManager::CKmlFlyTo &back = *(EarthView::World::Spatial3D::KmlManager::CKmlFlyTo*) back_j;
					ev_real64 ratio = (ev_real64) ratio_j;
					EarthView::World::Spatial3D::KmlManager::CKmlTourPath *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlTourPath*) pObjXXXX;
					pObjectX->setFlyTo(kmlFlyTo, front, back, ratio);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlTourPath_calculateFlyTo_1CKmlFlyTo_1CKmlFlyTo_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong front_j, jlong back_j, jdouble frontTime_j, jdouble backTime_j, jdouble currentTime_j)
				{
					const EarthView::World::Spatial3D::KmlManager::CKmlFlyTo &front = *(EarthView::World::Spatial3D::KmlManager::CKmlFlyTo*) front_j;
					const EarthView::World::Spatial3D::KmlManager::CKmlFlyTo &back = *(EarthView::World::Spatial3D::KmlManager::CKmlFlyTo*) back_j;
					ev_real64 frontTime = (ev_real64) frontTime_j;
					ev_real64 backTime = (ev_real64) backTime_j;
					ev_real64 currentTime = (ev_real64) currentTime_j;
					EarthView::World::Spatial3D::KmlManager::CKmlTourPath *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlTourPath*) pObjXXXX;
					EarthView::World::Spatial3D::KmlManager::CKmlFlyTo __values1 = pObjectX->calculateFlyTo(front, back, frontTime, backTime, currentTime);
					EarthView::World::Spatial3D::KmlManager::CKmlFlyTo *returnvalues = new EarthView::World::Spatial3D::KmlManager::CKmlFlyTo(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlTourPath_getTimeLength_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlTourPath *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlTourPath*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getTimeLength();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlTourPath_getFlyToNumber_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlTourPath *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlTourPath*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getFlyToNumber();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlTourPath_addKmlFlyTo_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble timeSpan_j, jdouble latitude_j, jdouble longitude_j, jdouble heading_j, jdouble tilt_j, jdouble alitude_j, jdouble moditifAltiude_j, jdouble distance_j)
				{
					ev_real64 timeSpan = (ev_real64) timeSpan_j;
					ev_real64 latitude = (ev_real64) latitude_j;
					ev_real64 longitude = (ev_real64) longitude_j;
					ev_real64 heading = (ev_real64) heading_j;
					ev_real64 tilt = (ev_real64) tilt_j;
					ev_real64 alitude = (ev_real64) alitude_j;
					ev_real64 moditifAltiude = (ev_real64) moditifAltiude_j;
					ev_real64 distance = (ev_real64) distance_j;
					EarthView::World::Spatial3D::KmlManager::CKmlTourPath *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlTourPath*) pObjXXXX;
					pObjectX->addKmlFlyTo(timeSpan, latitude, longitude, heading, tilt, alitude, moditifAltiude, distance);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlTourPath_getTour_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlTourPath *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlTourPath*) pObjXXXX;
					EarthView::World::Spatial::Kml::CTour* __values1 = pObjectX->getTour();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlTourPath_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlTourPath *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlTourPath*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlTourPathPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::KmlManager::CKmlTourPathPtr *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlTourPathPtr*) pObjXXXX;
					EarthView::World::Spatial3D::KmlManager::CKmlTourPath* __values1 = pObjectX->get();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlTourPathPtr_OperatorAssign_1CKmlTourPathPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlTourPathPtr& pObjectX = *(EarthView::World::Spatial3D::KmlManager::CKmlTourPathPtr*) pObjXXXX;
					const EarthView::World::Spatial3D::KmlManager::CKmlTourPathPtr &r = *(EarthView::World::Spatial3D::KmlManager::CKmlTourPathPtr*) r_j;
					pObjectX = r;
					EarthView::World::Spatial3D::KmlManager::CKmlTourPathPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
		}
	}
}
