/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "kmlserializer/geoobjectextension.h"
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
		namespace Spatial
		{
			namespace Geometry
			{
			}
			namespace Kml
			{
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_kml_EVGEXTYPEHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						GXT_POINT,
						GXT_LINE,
						GXT_POLYGON,
						GXT_SURFACEPOLYGON,
						GXT_GROUNDPOLYGON,
						GXT_IMAGEOVERLAYER,
						GXT_MODEL,
						GXT_PHOTOLAYER,
						GXT_TOUR,
						GXT_CUBE,
						GXT_CONE,
						GXT_HALFSPHERE,
						GXT_360,
						GXT_ARROW,
						GXT_SCREENOVERLAYER,
						GXT_MULTIGEOMETRY,
						GXT_UNKNOWN
					};
					jintArray array = __env->NewIntArray(17);
					__env->SetIntArrayRegion(array, 0, 17, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_kml_ArrowTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						GroundArrow,
						ThreeDArrow
					};
					jintArray array = __env->NewIntArray(2);
					__env->SetIntArrayRegion(array, 0, 2, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_kml_HalfsPhereRenderModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						HPRM_WIREFRAME,
						HPRM_SOLID
					};
					jintArray array = __env->NewIntArray(2);
					__env->SetIntArrayRegion(array, 0, 2, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_kml_FillOutLineModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						Fill,
						OutLine,
						Fill_OutLine
					};
					jintArray array = __env->NewIntArray(3);
					__env->SetIntArrayRegion(array, 0, 3, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_kml_SceneOverlayData_00024EVSceneOverlayTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CSceneOverlayData::SOT_Proportion,
						CSceneOverlayData::SOT_Pixels,
						CSceneOverlayData::SOT_InsetPixels
					};
					jintArray array = __env->NewIntArray(3);
					__env->SetIntArrayRegion(array, 0, 3, enum_values);
					return array;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_SceneOverlayData_setData_1EVSceneOverlayType_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j, jfloat value_j)
				{
					EarthView::World::Spatial::Kml::CSceneOverlayData::EVSceneOverlayType type = (EarthView::World::Spatial::Kml::CSceneOverlayData::EVSceneOverlayType) type_j;
					ev_real32 value = (ev_real32) value_j;
					EarthView::World::Spatial::Kml::CSceneOverlayData *pObjectX = (EarthView::World::Spatial::Kml::CSceneOverlayData*) pObjXXXX;
					pObjectX->setData(type, value);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_kml_SceneOverlayData_getDataType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CSceneOverlayData *pObjectX = (EarthView::World::Spatial::Kml::CSceneOverlayData*) pObjXXXX;
					EarthView::World::Spatial::Kml::CSceneOverlayData::EVSceneOverlayType __values1 = pObjectX->getDataType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_kml_SceneOverlayData_getDataValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CSceneOverlayData *pObjectX = (EarthView::World::Spatial::Kml::CSceneOverlayData*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getDataValue();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_kml_KmlWorkQueueState_00024EVKmlWorkQueueStateHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CKmlWorkQueueState::KWT_INIT,
						CKmlWorkQueueState::KWT_LOADING,
						CKmlWorkQueueState::KWT_LOADED,
						CKmlWorkQueueState::KWT_UNLOADING,
						CKmlWorkQueueState::KWT_FAIL
					};
					jintArray array = __env->NewIntArray(5);
					__env->SetIntArrayRegion(array, 0, 5, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_kml_KmlWorkQueueState_00024EVKmlRequestTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CKmlWorkQueueState::KRT_LOAD,
						CKmlWorkQueueState::KRT_UNLOAD,
						CKmlWorkQueueState::KRT_LOADKML,
						CKmlWorkQueueState::KRT_UNLOADKML
					};
					jintArray array = __env->NewIntArray(4);
					__env->SetIntArrayRegion(array, 0, 4, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_kml_KmlWorkQueueState_get_1ReqID_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlWorkQueueState *pObjectX = (EarthView::World::Spatial::Kml::CKmlWorkQueueState*)pObjXXXX;
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<(pObjectX->ReqID);
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlWorkQueueState_set_1ReqID_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlWorkQueueState *pObjectX = (EarthView::World::Spatial::Kml::CKmlWorkQueueState*)pObjXXXX;
					pObjectX->ReqID = *(ev_uint64*) __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_KmlWorkQueueState_get_1ReqAbort_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlWorkQueueState *pObjectX = (EarthView::World::Spatial::Kml::CKmlWorkQueueState*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->ReqAbort);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlWorkQueueState_set_1ReqAbort_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlWorkQueueState *pObjectX = (EarthView::World::Spatial::Kml::CKmlWorkQueueState*)pObjXXXX;
					pObjectX->ReqAbort = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_kml_KmlWorkQueueState_get_1ReqType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlWorkQueueState *pObjectX = (EarthView::World::Spatial::Kml::CKmlWorkQueueState*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->ReqType);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlWorkQueueState_set_1ReqType_1EVKmlRequestType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlWorkQueueState *pObjectX = (EarthView::World::Spatial::Kml::CKmlWorkQueueState*)pObjXXXX;
					pObjectX->ReqType = (EarthView::World::Spatial::Kml::CKmlWorkQueueState::EVKmlRequestType)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_kml_KmlWorkQueueState_get_1WorkStateEnum_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlWorkQueueState *pObjectX = (EarthView::World::Spatial::Kml::CKmlWorkQueueState*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->WorkStateEnum);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlWorkQueueState_set_1WorkStateEnum_1EVKmlWorkQueueState(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlWorkQueueState *pObjectX = (EarthView::World::Spatial::Kml::CKmlWorkQueueState*)pObjXXXX;
					pObjectX->WorkStateEnum = (EarthView::World::Spatial::Kml::CKmlWorkQueueState::EVKmlWorkQueueState)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_KmlWorkQueueState_get_1mDistance_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlWorkQueueState *pObjectX = (EarthView::World::Spatial::Kml::CKmlWorkQueueState*)pObjXXXX;
					jlong __values1_j = (jlong) (pObjectX->mDistance);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlWorkQueueState_set_1mDistance_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlWorkQueueState *pObjectX = (EarthView::World::Spatial::Kml::CKmlWorkQueueState*)pObjXXXX;
					pObjectX->mDistance = (ev_uint32)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_KmlWorkQueueState_get_1LayerVisible_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlWorkQueueState *pObjectX = (EarthView::World::Spatial::Kml::CKmlWorkQueueState*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->LayerVisible);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlWorkQueueState_set_1LayerVisible_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlWorkQueueState *pObjectX = (EarthView::World::Spatial::Kml::CKmlWorkQueueState*)pObjXXXX;
					pObjectX->LayerVisible = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_KmlWorkQueueState_get_1NeedRefresh_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlWorkQueueState *pObjectX = (EarthView::World::Spatial::Kml::CKmlWorkQueueState*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->NeedRefresh);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlWorkQueueState_set_1NeedRefresh_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlWorkQueueState *pObjectX = (EarthView::World::Spatial::Kml::CKmlWorkQueueState*)pObjXXXX;
					pObjectX->NeedRefresh = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_KmlWorkQueueState_get_1GeoVisible_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlWorkQueueState *pObjectX = (EarthView::World::Spatial::Kml::CKmlWorkQueueState*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->GeoVisible);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlWorkQueueState_set_1GeoVisible_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlWorkQueueState *pObjectX = (EarthView::World::Spatial::Kml::CKmlWorkQueueState*)pObjXXXX;
					pObjectX->GeoVisible = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_KmlWorkQueueState_get_1VisibleGeoObject_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlWorkQueueState *pObjectX = (EarthView::World::Spatial::Kml::CKmlWorkQueueState*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->VisibleGeoObject);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlWorkQueueState_set_1VisibleGeoObject_1CGeoObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlWorkQueueState *pObjectX = (EarthView::World::Spatial::Kml::CKmlWorkQueueState*)pObjXXXX;
					pObjectX->VisibleGeoObject = (EarthView::World::Spatial::CGeoObject*) __values1_j;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_kml_LodStatusHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						LODPASS,
						MINERROR,
						MAXERROR,
						HIDDEN
					};
					jintArray array = __env->NewIntArray(4);
					__env->SetIntArrayRegion(array, 0, 4, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_kml_EVPicLayoutHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						EPL_TOP_LEFT,
						EPL_TOP_CENTER,
						EPL_TOP_RIGHT,
						EPL_CENTER_LEFT,
						EPL_CENTER,
						EPL_CENTER_RIGHT,
						EPL_BOTTOM_LEFT,
						EPL_BOTTOM_CENTER,
						EPL_BOTTOM_RIGHT
					};
					jintArray array = __env->NewIntArray(9);
					__env->SetIntArrayRegion(array, 0, 9, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_OperatorAssign_1CGeoObjectExtensionAttribute(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong geoAttr_j )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute& pObjectX = *(EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute &geoAttr = *(EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) geoAttr_j;
					pObjectX = geoAttr;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_update_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->update();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_get_1mpOldAttr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->mpOldAttr);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_set_1mpOldAttr_1CGeoObjectExtensionAttribute(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*)pObjXXXX;
					pObjectX->mpOldAttr = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setParentKmldocument_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong parentDoc_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *parentDoc = (EarthView::World::Spatial::Kml::CKmlDocument*) parentDoc_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setParentKmldocument(parentDoc);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getParentKmlDocument_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EarthView::World::Spatial::Kml::CKmlDocument* __values1 = pObjectX->getParentKmlDocument();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setRegionWest_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble RegionWest_j)
				{
					ev_real64 RegionWest = (ev_real64) RegionWest_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setRegionWest(RegionWest);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getRegionWest_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getRegionWest();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldRegionWest_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getOldRegionWest();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setRegionEast_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble RegionEast_j)
				{
					ev_real64 RegionEast = (ev_real64) RegionEast_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setRegionEast(RegionEast);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getRegionEast_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getRegionEast();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldRegionEast_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getOldRegionEast();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setRegionNorth_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble RegionNorth_j)
				{
					ev_real64 RegionNorth = (ev_real64) RegionNorth_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setRegionNorth(RegionNorth);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getRegionNorth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getRegionNorth();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldRegionNorth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getOldRegionNorth();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setRegionSouth_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble RegionSouth_j)
				{
					ev_real64 RegionSouth = (ev_real64) RegionSouth_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setRegionSouth(RegionSouth);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getRegionSouth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getRegionSouth();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldRegionSouth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getOldRegionSouth();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setRegionMaxAltitude_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble maxAltitude_j)
				{
					ev_real64 maxAltitude = (ev_real64) maxAltitude_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setRegionMaxAltitude(maxAltitude);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getRegionMaxAltitude_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getRegionMaxAltitude();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldRegionMaxAltitude_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getOldRegionMaxAltitude();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setRegionMinAltitude_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble minAltitude_j)
				{
					ev_real64 minAltitude = (ev_real64) minAltitude_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setRegionMinAltitude(minAltitude);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getRegionMinAltitude_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getRegionMinAltitude();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldRegionMinAltitude_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getOldRegionMinAltitude();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setMaxLodPixels_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble maxLodPixels_j)
				{
					ev_real64 maxLodPixels = (ev_real64) maxLodPixels_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setMaxLodPixels(maxLodPixels);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getMaxLodPixels_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getMaxLodPixels();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldMaxLodPixels_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getOldMaxLodPixels();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setMinLodPixels_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble minLodPixels_j)
				{
					ev_real64 minLodPixels = (ev_real64) minLodPixels_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setMinLodPixels(minLodPixels);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getMinLodPixels_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getMinLodPixels();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldMinLodPixels_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getOldMinLodPixels();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setMaxFadeExtent_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble maxFadeExtent_j)
				{
					ev_real64 maxFadeExtent = (ev_real64) maxFadeExtent_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setMaxFadeExtent(maxFadeExtent);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getMaxFadeExtent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getMaxFadeExtent();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldMaxFadeExtent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getOldMaxFadeExtent();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setMinFadeExtent_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble minFadeExtent_j)
				{
					ev_real64 minFadeExtent = (ev_real64) minFadeExtent_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setMinFadeExtent(minFadeExtent);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getMinFadeExtent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getMinFadeExtent();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldMinFadeExtent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getOldMinFadeExtent();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getNetLinkPath_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EVString __values1 = pObjectX->getNetLinkPath();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldNetLinkPath_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EVString __values1 = pObjectX->getOldNetLinkPath();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setNetLinkPath_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring netLinkPath_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* netLinkPath_ch = (const ev_char*)__env->GetStringUTFChars(netLinkPath_j,JNI_FALSE);
					EVString netLinkPath = netLinkPath_ch;
					__env->ReleaseStringUTFChars(netLinkPath_j, (const char *)netLinkPath_ch);
					#else
					const ev_wchar* netLinkPath_ch = (const ev_wchar*)__env->GetStringChars(netLinkPath_j,JNI_FALSE);
					EVString netLinkPath = netLinkPath_ch;
					__env->ReleaseStringChars(netLinkPath_j, (const jchar *)netLinkPath_ch);
					#endif
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setNetLinkPath(netLinkPath);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getPicPath360_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EVString __values1 = pObjectX->getPicPath360();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldPicPath360_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EVString __values1 = pObjectX->getOldPicPath360();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setPicPath360_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring path_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* path_ch = (const ev_char*)__env->GetStringUTFChars(path_j,JNI_FALSE);
					const EVString path = path_ch;
					__env->ReleaseStringUTFChars(path_j, (const char *)path_ch);
					#else
					const ev_wchar* path_ch = (const ev_wchar*)__env->GetStringChars(path_j,JNI_FALSE);
					const EVString path = path_ch;
					__env->ReleaseStringChars(path_j, (const jchar *)path_ch);
					#endif
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setPicPath360(path);
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getRadius360_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getRadius360();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldRadius360_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getOldRadius360();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setRadius360_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat r_j)
				{
					ev_real32 r = (ev_real32) r_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setRadius360(r);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_equal_1CGeoObjectExtensionAttribute(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong geoAttr_j)
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute &geoAttr = *(EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) geoAttr_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_bool __values1 = pObjectX->equal(geoAttr);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_get_1mLodStatus_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mLodStatus);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_set_1mLodStatus_1LodStatus(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*)pObjXXXX;
					pObjectX->mLodStatus = (EarthView::World::Spatial::Kml::LodStatus)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_get_1mIsEditting_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->mIsEditting);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_set_1mIsEditting_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*)pObjXXXX;
					pObjectX->mIsEditting = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_get_1WorkState_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->WorkState);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_set_1WorkState_1CKmlWorkQueueState(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*)pObjXXXX;
					pObjectX->WorkState = (EarthView::World::Spatial::Kml::CKmlWorkQueueState*) __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_get_1ParamChanged_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->ParamChanged);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_set_1ParamChanged_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*)pObjXXXX;
					pObjectX->ParamChanged = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_get_1mIsBelongToNetLink_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->mIsBelongToNetLink);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_set_1mIsBelongToNetLink_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*)pObjXXXX;
					pObjectX->mIsBelongToNetLink = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
					#else
					const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
					#endif
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setName(name);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EVString __values1 = pObjectX->getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EVString __values1 = pObjectX->getOldName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setDesc_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring desc_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* desc_ch = (const ev_char*)__env->GetStringUTFChars(desc_j,JNI_FALSE);
					const EVString desc = desc_ch;
					__env->ReleaseStringUTFChars(desc_j, (const char *)desc_ch);
					#else
					const ev_wchar* desc_ch = (const ev_wchar*)__env->GetStringChars(desc_j,JNI_FALSE);
					const EVString desc = desc_ch;
					__env->ReleaseStringChars(desc_j, (const jchar *)desc_ch);
					#endif
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setDesc(desc);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getDesc_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EVString __values1 = pObjectX->getDesc();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldDesc_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EVString __values1 = pObjectX->getOldDesc();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setID_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring id_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* id_ch = (const ev_char*)__env->GetStringUTFChars(id_j,JNI_FALSE);
					const EVString id = id_ch;
					__env->ReleaseStringUTFChars(id_j, (const char *)id_ch);
					#else
					const ev_wchar* id_ch = (const ev_wchar*)__env->GetStringChars(id_j,JNI_FALSE);
					const EVString id = id_ch;
					__env->ReleaseStringChars(id_j, (const jchar *)id_ch);
					#endif
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setID(id);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EVString __values1 = pObjectX->getID();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EVString __values1 = pObjectX->getOldID();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setPicLayout_1EVPicLayout(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint piclayout_j)
				{
					EarthView::World::Spatial::Kml::EVPicLayout piclayout = (EarthView::World::Spatial::Kml::EVPicLayout) piclayout_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setPicLayout(piclayout);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getPicLayout_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EarthView::World::Spatial::Kml::EVPicLayout __values1 = pObjectX->getPicLayout();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldPicLayout_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EarthView::World::Spatial::Kml::EVPicLayout __values1 = pObjectX->getOldPicLayout();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setStyleUrlName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring styleUrlName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* styleUrlName_ch = (const ev_char*)__env->GetStringUTFChars(styleUrlName_j,JNI_FALSE);
					const EVString styleUrlName = styleUrlName_ch;
					__env->ReleaseStringUTFChars(styleUrlName_j, (const char *)styleUrlName_ch);
					#else
					const ev_wchar* styleUrlName_ch = (const ev_wchar*)__env->GetStringChars(styleUrlName_j,JNI_FALSE);
					const EVString styleUrlName = styleUrlName_ch;
					__env->ReleaseStringChars(styleUrlName_j, (const jchar *)styleUrlName_ch);
					#endif
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setStyleUrlName(styleUrlName);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getStyleUrlName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EVString __values1 = pObjectX->getStyleUrlName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldStyleUrlName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EVString __values1 = pObjectX->getOldStyleUrlName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setPictureUrl_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring pictureUrl_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* pictureUrl_ch = (const ev_char*)__env->GetStringUTFChars(pictureUrl_j,JNI_FALSE);
					const EVString pictureUrl = pictureUrl_ch;
					__env->ReleaseStringUTFChars(pictureUrl_j, (const char *)pictureUrl_ch);
					#else
					const ev_wchar* pictureUrl_ch = (const ev_wchar*)__env->GetStringChars(pictureUrl_j,JNI_FALSE);
					const EVString pictureUrl = pictureUrl_ch;
					__env->ReleaseStringChars(pictureUrl_j, (const jchar *)pictureUrl_ch);
					#endif
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setPictureUrl(pictureUrl);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getPictureUrl_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EVString __values1 = pObjectX->getPictureUrl();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldPictureUrl_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EVString __values1 = pObjectX->getOldPictureUrl();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setPictureID_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring pictureID_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* pictureID_ch = (const ev_char*)__env->GetStringUTFChars(pictureID_j,JNI_FALSE);
					const EVString pictureID = pictureID_ch;
					__env->ReleaseStringUTFChars(pictureID_j, (const char *)pictureID_ch);
					#else
					const ev_wchar* pictureID_ch = (const ev_wchar*)__env->GetStringChars(pictureID_j,JNI_FALSE);
					const EVString pictureID = pictureID_ch;
					__env->ReleaseStringChars(pictureID_j, (const jchar *)pictureID_ch);
					#endif
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setPictureID(pictureID);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getPictureID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EVString __values1 = pObjectX->getPictureID();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldPictureID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EVString __values1 = pObjectX->getOldPictureID();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setVisible_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isVisiable_j)
				{
					ev_bool isVisiable = (ev_bool) isVisiable_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setVisible(isVisiable);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getVisible_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_bool __values1 = pObjectX->getVisible();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldVisible_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_bool __values1 = pObjectX->getOldVisible();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setExtrude_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isExtrude_j)
				{
					ev_bool isExtrude = (ev_bool) isExtrude_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setExtrude(isExtrude);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getExtrude_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_bool __values1 = pObjectX->getExtrude();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldExtrude_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_bool __values1 = pObjectX->getOldExtrude();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setKmlType_1EVGEXTYPE(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint kmlType_j)
				{
					EarthView::World::Spatial::Kml::EVGEXTYPE kmlType = (EarthView::World::Spatial::Kml::EVGEXTYPE) kmlType_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setKmlType(kmlType);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getKmlType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EarthView::World::Spatial::Kml::EVGEXTYPE __values1 = pObjectX->getKmlType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setPoints_1VertexList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong points_j)
				{
					EarthView::World::Spatial::Math::VertexList &points = *(EarthView::World::Spatial::Math::VertexList*) points_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setPoints(points);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getPoints_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EarthView::World::Spatial::Math::VertexList __values1 = pObjectX->getPoints();
					EarthView::World::Spatial::Math::VertexList *returnvalues = new EarthView::World::Spatial::Math::VertexList(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldPoints_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EarthView::World::Spatial::Math::VertexList __values1 = pObjectX->getOldPoints();
					EarthView::World::Spatial::Math::VertexList *returnvalues = new EarthView::World::Spatial::Math::VertexList(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setLatitude_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble latitude_j)
				{
					ev_real64 latitude = (ev_real64) latitude_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setLatitude(latitude);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getLatitude_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getLatitude();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldLatitude_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getOldLatitude();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setLongitude_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble lontitude_j)
				{
					ev_real64 lontitude = (ev_real64) lontitude_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setLongitude(lontitude);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getLongitude_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getLongitude();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldLongitude_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getOldLongitude();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setAltitude_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble altitude_j)
				{
					ev_real64 altitude = (ev_real64) altitude_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setAltitude(altitude);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getAltitude_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getAltitude();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldAltitude_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getOldAltitude();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setAltitudeMode_1EVAltitudeMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint altitudemode_j)
				{
					EarthView::World::Spatial::Utility::EVAltitudeMode altitudemode = (EarthView::World::Spatial::Utility::EVAltitudeMode) altitudemode_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setAltitudeMode(altitudemode);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getAltitudeMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EarthView::World::Spatial::Utility::EVAltitudeMode __values1 = pObjectX->getAltitudeMode();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldAltitudeMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EarthView::World::Spatial::Utility::EVAltitudeMode __values1 = pObjectX->getOldAltitudeMode();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setFontName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
					EVString name = name_ch;
					__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
					#else
					const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					EVString name = name_ch;
					__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
					#endif
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setFontName(name);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getFontName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EVString __values1 = pObjectX->getFontName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldFontName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EVString __values1 = pObjectX->getOldFontName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setTextShadowEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean flag_j)
				{
					ev_bool flag = (ev_bool) flag_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setTextShadowEnabled(flag);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getTextShadowEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_bool __values1 = pObjectX->getTextShadowEnabled();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldTextShadowEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_bool __values1 = pObjectX->getOldTextShadowEnabled();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setFontScale_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat fontScale_j)
				{
					ev_real32 fontScale = (ev_real32) fontScale_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setFontScale(fontScale);
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getFontScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getFontScale();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldFontScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getOldFontScale();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setFontTransparency_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat fontTransparency_j)
				{
					ev_real32 fontTransparency = (ev_real32) fontTransparency_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setFontTransparency(fontTransparency);
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getFontTransparency_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getFontTransparency();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldFontTransparency_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getOldFontTransparency();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setFontColor_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fontColor_j)
				{
					EarthView::World::Spatial::Math::CVector3 fontColor = *(EarthView::World::Spatial::Math::CVector3*) fontColor_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setFontColor(fontColor);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getFontColor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getFontColor();
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldFontColor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getOldFontColor();
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setPictureTransparency_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat iconTransparency_j)
				{
					ev_real32 iconTransparency = (ev_real32) iconTransparency_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setPictureTransparency(iconTransparency);
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getPictureTransparency_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getPictureTransparency();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldPictureTransparency_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getOldPictureTransparency();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setIconScale_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat iconScale_j)
				{
					ev_real32 iconScale = (ev_real32) iconScale_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setIconScale(iconScale);
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getIconScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getIconScale();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldIconScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getOldIconScale();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setLineColor_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong lineColor_j)
				{
					EarthView::World::Spatial::Math::CVector3 lineColor = *(EarthView::World::Spatial::Math::CVector3*) lineColor_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setLineColor(lineColor);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getLineColor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getLineColor();
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldLineColor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getOldLineColor();
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setLineTransparency_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat lineTransparency_j)
				{
					ev_real32 lineTransparency = (ev_real32) lineTransparency_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setLineTransparency(lineTransparency);
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getLineTransparency_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getLineTransparency();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldLineTransparency_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getOldLineTransparency();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setLineWidth_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat width_j)
				{
					ev_real32 width = (ev_real32) width_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setLineWidth(width);
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getLineWidth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getLineWidth();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldLineWidth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getOldLineWidth();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setPolygonColor_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ploygonColor_j)
				{
					EarthView::World::Spatial::Math::CVector3 ploygonColor = *(EarthView::World::Spatial::Math::CVector3*) ploygonColor_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setPolygonColor(ploygonColor);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getPolygonColor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getPolygonColor();
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldPolygonColor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getOldPolygonColor();
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setFillOutLineMode_1FillOutLineMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j)
				{
					EarthView::World::Spatial::Kml::FillOutLineMode mode = (EarthView::World::Spatial::Kml::FillOutLineMode) mode_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setFillOutLineMode(mode);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getFillOutLineMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EarthView::World::Spatial::Kml::FillOutLineMode __values1 = pObjectX->getFillOutLineMode();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldFillOutLineMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EarthView::World::Spatial::Kml::FillOutLineMode __values1 = pObjectX->getOldFillOutLineMode();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setPolygonTransparency_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat polygonTransparency_j)
				{
					ev_real32 polygonTransparency = (ev_real32) polygonTransparency_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setPolygonTransparency(polygonTransparency);
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getPolygonTransparency_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getPolygonTransparency();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldPolygonTransparency_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getOldPolygonTransparency();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setLookAt_1CLookAt(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong LookAtAttr_j)
				{
					EarthView::World::Spatial::CGeoObject::CLookAt LookAtAttr = *(EarthView::World::Spatial::CGeoObject::CLookAt*) LookAtAttr_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setLookAt(LookAtAttr);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getLookAt_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EarthView::World::Spatial::CGeoObject::CLookAt __values1 = pObjectX->getLookAt();
					EarthView::World::Spatial::CGeoObject::CLookAt *returnvalues = new EarthView::World::Spatial::CGeoObject::CLookAt(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldLookAt_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EarthView::World::Spatial::CGeoObject::CLookAt __values1 = pObjectX->getOldLookAt();
					EarthView::World::Spatial::CGeoObject::CLookAt *returnvalues = new EarthView::World::Spatial::CGeoObject::CLookAt(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setFresnelsurface_1ev_1bool_1ev_1bool_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean underWaterEnable_j, jboolean reflectionEnable_j, jboolean reflectSky_j, jboolean refractionEnable_j)
				{
					ev_bool underWaterEnable = (ev_bool) underWaterEnable_j;
					ev_bool reflectionEnable = (ev_bool) reflectionEnable_j;
					ev_bool reflectSky = (ev_bool) reflectSky_j;
					ev_bool refractionEnable = (ev_bool) refractionEnable_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setFresnelsurface(underWaterEnable, reflectionEnable, reflectSky, refractionEnable);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getFresnelsurface_1ev_1bool_1ev_1bool_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong underWaterEnable_j, jlong reflectionEnable_j, jlong reflectSky_j, jlong refractionEnable_j)
				{
					ev_bool &underWaterEnable = *(ev_bool*) underWaterEnable_j;
					ev_bool &reflectionEnable = *(ev_bool*) reflectionEnable_j;
					ev_bool &reflectSky = *(ev_bool*) reflectSky_j;
					ev_bool &refractionEnable = *(ev_bool*) refractionEnable_j;
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->getFresnelsurface(underWaterEnable, reflectionEnable, reflectSky, refractionEnable);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldFresnelsurface_1ev_1bool_1ev_1bool_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong underWaterEnable_j, jlong reflectionEnable_j, jlong reflectSky_j, jlong refractionEnable_j)
				{
					ev_bool &underWaterEnable = *(ev_bool*) underWaterEnable_j;
					ev_bool &reflectionEnable = *(ev_bool*) reflectionEnable_j;
					ev_bool &reflectSky = *(ev_bool*) reflectSky_j;
					ev_bool &refractionEnable = *(ev_bool*) refractionEnable_j;
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->getOldFresnelsurface(underWaterEnable, reflectionEnable, reflectSky, refractionEnable);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setFresnelsurfaceColor_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real32_1CVector4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat waveDensity_j, jfloat flowSpeed_j, jfloat waterDeep_j, jfloat wavePower_j, jfloat lightPower_j, jfloat waveDir_j, jlong waterColor_j)
				{
					ev_real32 waveDensity = (ev_real32) waveDensity_j;
					ev_real32 flowSpeed = (ev_real32) flowSpeed_j;
					ev_real32 waterDeep = (ev_real32) waterDeep_j;
					ev_real32 wavePower = (ev_real32) wavePower_j;
					ev_real32 lightPower = (ev_real32) lightPower_j;
					ev_real32 waveDir = (ev_real32) waveDir_j;
					EarthView::World::Spatial::Math::CVector4 waterColor = *(EarthView::World::Spatial::Math::CVector4*) waterColor_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setFresnelsurfaceColor(waveDensity, flowSpeed, waterDeep, wavePower, lightPower, waveDir, waterColor);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getFresnelsurfaceColor_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real32_1CVector4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong waveDensity_j, jlong flowSpeed_j, jlong waterDeep_j, jlong wavePower_j, jlong lightPower_j, jlong waveDir_j, jlong waterColor_j)
				{
					ev_real32 &waveDensity = *(ev_real32*) waveDensity_j;
					ev_real32 &flowSpeed = *(ev_real32*) flowSpeed_j;
					ev_real32 &waterDeep = *(ev_real32*) waterDeep_j;
					ev_real32 &wavePower = *(ev_real32*) wavePower_j;
					ev_real32 &lightPower = *(ev_real32*) lightPower_j;
					ev_real32 &waveDir = *(ev_real32*) waveDir_j;
					EarthView::World::Spatial::Math::CVector4 &waterColor = *(EarthView::World::Spatial::Math::CVector4*) waterColor_j;
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->getFresnelsurfaceColor(waveDensity, flowSpeed, waterDeep, wavePower, lightPower, waveDir, waterColor);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldFresnelsurfaceColor_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real32_1CVector4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong waveDensity_j, jlong flowSpeed_j, jlong waterDeep_j, jlong wavePower_j, jlong lightPower_j, jlong waveDir_j, jlong waterColor_j)
				{
					ev_real32 &waveDensity = *(ev_real32*) waveDensity_j;
					ev_real32 &flowSpeed = *(ev_real32*) flowSpeed_j;
					ev_real32 &waterDeep = *(ev_real32*) waterDeep_j;
					ev_real32 &wavePower = *(ev_real32*) wavePower_j;
					ev_real32 &lightPower = *(ev_real32*) lightPower_j;
					ev_real32 &waveDir = *(ev_real32*) waveDir_j;
					EarthView::World::Spatial::Math::CVector4 &waterColor = *(EarthView::World::Spatial::Math::CVector4*) waterColor_j;
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->getOldFresnelsurfaceColor(waveDensity, flowSpeed, waterDeep, wavePower, lightPower, waveDir, waterColor);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setModelHref_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring modelHref_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* modelHref_ch = (const ev_char*)__env->GetStringUTFChars(modelHref_j,JNI_FALSE);
					const EVString modelHref = modelHref_ch;
					__env->ReleaseStringUTFChars(modelHref_j, (const char *)modelHref_ch);
					#else
					const ev_wchar* modelHref_ch = (const ev_wchar*)__env->GetStringChars(modelHref_j,JNI_FALSE);
					const EVString modelHref = modelHref_ch;
					__env->ReleaseStringChars(modelHref_j, (const jchar *)modelHref_ch);
					#endif
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setModelHref(modelHref);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getModelHref_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EVString __values1 = pObjectX->getModelHref();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldModelHref_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EVString __values1 = pObjectX->getOldModelHref();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setRotation_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble z_j)
				{
					ev_real64 x = (ev_real64) x_j;
					ev_real64 y = (ev_real64) y_j;
					ev_real64 z = (ev_real64) z_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setRotation(x, y, z);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getRotation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getRotation();
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldRotation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getOldRotation();
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setScale_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble z_j)
				{
					ev_real64 x = (ev_real64) x_j;
					ev_real64 y = (ev_real64) y_j;
					ev_real64 z = (ev_real64) z_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setScale(x, y, z);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getScale();
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getOldScale();
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setRemovePictureCache_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean val_j)
				{
					ev_bool val = (ev_bool) val_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setRemovePictureCache(val);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getRemovePictureCache_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_bool __values1 = pObjectX->getRemovePictureCache();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setOverLayerLatLonBox_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble west_j, jdouble east_j, jdouble north_j, jdouble south_j)
				{
					ev_real64 west = (ev_real64) west_j;
					ev_real64 east = (ev_real64) east_j;
					ev_real64 north = (ev_real64) north_j;
					ev_real64 south = (ev_real64) south_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setOverLayerLatLonBox(west, east, north, south);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOverLayerLatLonBox_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong west_j, jlong east_j, jlong north_j, jlong south_j)
				{
					ev_real64 &west = *(ev_real64*) west_j;
					ev_real64 &east = *(ev_real64*) east_j;
					ev_real64 &north = *(ev_real64*) north_j;
					ev_real64 &south = *(ev_real64*) south_j;
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->getOverLayerLatLonBox(west, east, north, south);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldOverLayerLatLonBox_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong west_j, jlong east_j, jlong north_j, jlong south_j)
				{
					ev_real64 &west = *(ev_real64*) west_j;
					ev_real64 &east = *(ev_real64*) east_j;
					ev_real64 &north = *(ev_real64*) north_j;
					ev_real64 &south = *(ev_real64*) south_j;
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->getOldOverLayerLatLonBox(west, east, north, south);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setOverLayerRotateAngle_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat rotate_j)
				{
					ev_real32 rotate = (ev_real32) rotate_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setOverLayerRotateAngle(rotate);
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOverLayerRotateAngle_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getOverLayerRotateAngle();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldOverLayerRotateAngle_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getOldOverLayerRotateAngle();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setOverLayerSmooth_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enableSmooth_j)
				{
					ev_bool enableSmooth = (ev_bool) enableSmooth_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setOverLayerSmooth(enableSmooth);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOverLayerSmooth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_bool __values1 = pObjectX->getOverLayerSmooth();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldOverLayerSmooth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_bool __values1 = pObjectX->getOldOverLayerSmooth();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setIsRegion_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean flag_j)
				{
					ev_bool flag = (ev_bool) flag_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setIsRegion(flag);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getIsRegion_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_bool __values1 = pObjectX->getIsRegion();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldIsRegion_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_bool __values1 = pObjectX->getOldIsRegion();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setRegionLatLonAltBox_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble regionWest_j, jdouble regionEast_j, jdouble regionNorth_j, jdouble regionSouth_j, jdouble minAltitude_j, jdouble maxAltitude_j)
				{
					ev_real64 regionWest = (ev_real64) regionWest_j;
					ev_real64 regionEast = (ev_real64) regionEast_j;
					ev_real64 regionNorth = (ev_real64) regionNorth_j;
					ev_real64 regionSouth = (ev_real64) regionSouth_j;
					ev_real64 minAltitude = (ev_real64) minAltitude_j;
					ev_real64 maxAltitude = (ev_real64) maxAltitude_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setRegionLatLonAltBox(regionWest, regionEast, regionNorth, regionSouth, minAltitude, maxAltitude);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getRegionLatLonAltBox_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong regionWest_j, jlong regionEast_j, jlong regionNorth_j, jlong regionSouth_j, jlong minAltitude_j, jlong maxAltitude_j)
				{
					ev_real64 &regionWest = *(ev_real64*) regionWest_j;
					ev_real64 &regionEast = *(ev_real64*) regionEast_j;
					ev_real64 &regionNorth = *(ev_real64*) regionNorth_j;
					ev_real64 &regionSouth = *(ev_real64*) regionSouth_j;
					ev_real64 &minAltitude = *(ev_real64*) minAltitude_j;
					ev_real64 &maxAltitude = *(ev_real64*) maxAltitude_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->getRegionLatLonAltBox(regionWest, regionEast, regionNorth, regionSouth, minAltitude, maxAltitude);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldRegionLatLonAltBox_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong regionWest_j, jlong regionEast_j, jlong regionNorth_j, jlong regionSouth_j, jlong minAltitude_j, jlong maxAltitude_j)
				{
					ev_real64 &regionWest = *(ev_real64*) regionWest_j;
					ev_real64 &regionEast = *(ev_real64*) regionEast_j;
					ev_real64 &regionNorth = *(ev_real64*) regionNorth_j;
					ev_real64 &regionSouth = *(ev_real64*) regionSouth_j;
					ev_real64 &minAltitude = *(ev_real64*) minAltitude_j;
					ev_real64 &maxAltitude = *(ev_real64*) maxAltitude_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->getOldRegionLatLonAltBox(regionWest, regionEast, regionNorth, regionSouth, minAltitude, maxAltitude);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setIsLod_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean IsLod_j)
				{
					ev_bool IsLod = (ev_bool) IsLod_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setIsLod(IsLod);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getIsLod_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_bool __values1 = pObjectX->getIsLod();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldIsLod_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_bool __values1 = pObjectX->getOldIsLod();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setLodPixels_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble minLodPixels_j, jdouble maxLodPixels_j)
				{
					ev_real64 minLodPixels = (ev_real64) minLodPixels_j;
					ev_real64 maxLodPixels = (ev_real64) maxLodPixels_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setLodPixels(minLodPixels, maxLodPixels);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getLodPixels_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong minLodPixels_j, jlong maxLodPixels_j)
				{
					ev_real64 &minLodPixels = *(ev_real64*) minLodPixels_j;
					ev_real64 &maxLodPixels = *(ev_real64*) maxLodPixels_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->getLodPixels(minLodPixels, maxLodPixels);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldLodPixels_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong minLodPixels_j, jlong maxLodPixels_j)
				{
					ev_real64 &minLodPixels = *(ev_real64*) minLodPixels_j;
					ev_real64 &maxLodPixels = *(ev_real64*) maxLodPixels_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->getOldLodPixels(minLodPixels, maxLodPixels);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setRegionAltitudeMode_1EVAltitudeMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint altitudemode_j)
				{
					EarthView::World::Spatial::Utility::EVAltitudeMode altitudemode = (EarthView::World::Spatial::Utility::EVAltitudeMode) altitudemode_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setRegionAltitudeMode(altitudemode);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getRegionAltitudeMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EarthView::World::Spatial::Utility::EVAltitudeMode __values1 = pObjectX->getRegionAltitudeMode();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldRegionAltitudeMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EarthView::World::Spatial::Utility::EVAltitudeMode __values1 = pObjectX->getOldRegionAltitudeMode();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setOriginRegion_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean originRegion_j)
				{
					ev_bool originRegion = (ev_bool) originRegion_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setOriginRegion(originRegion);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOriginRegion_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_bool __values1 = pObjectX->getOriginRegion();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldOriginRegion_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_bool __values1 = pObjectX->getOldOriginRegion();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setArrowType_1ArrowType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::Kml::ArrowType type = (EarthView::World::Spatial::Kml::ArrowType) type_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setArrowType(type);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getArrowType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EarthView::World::Spatial::Kml::ArrowType __values1 = pObjectX->getArrowType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldArrowType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EarthView::World::Spatial::Kml::ArrowType __values1 = pObjectX->getOldArrowType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setArrowStartAltitude_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat startAtitude_j)
				{
					ev_real32 startAtitude = (ev_real32) startAtitude_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setArrowStartAltitude(startAtitude);
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getArrowStartAltitude_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getArrowStartAltitude();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldArrowStartAltitude_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getOldArrowStartAltitude();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setArrowEndAltitude_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat endAtitude_j)
				{
					ev_real32 endAtitude = (ev_real32) endAtitude_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setArrowEndAltitude(endAtitude);
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getArrowEndAltitude_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getArrowEndAltitude();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldArrowEndAltitude_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getOldArrowEndAltitude();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setArrowKeyPoints_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring arrowKeyPoints_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* arrowKeyPoints_ch = (const ev_char*)__env->GetStringUTFChars(arrowKeyPoints_j,JNI_FALSE);
					EVString arrowKeyPoints = arrowKeyPoints_ch;
					__env->ReleaseStringUTFChars(arrowKeyPoints_j, (const char *)arrowKeyPoints_ch);
					#else
					const ev_wchar* arrowKeyPoints_ch = (const ev_wchar*)__env->GetStringChars(arrowKeyPoints_j,JNI_FALSE);
					EVString arrowKeyPoints = arrowKeyPoints_ch;
					__env->ReleaseStringChars(arrowKeyPoints_j, (const jchar *)arrowKeyPoints_ch);
					#endif
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setArrowKeyPoints(arrowKeyPoints);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getArrowKeyPoints_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EVString __values1 = pObjectX->getArrowKeyPoints();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldArrowKeyPoints_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EVString __values1 = pObjectX->getOldArrowKeyPoints();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getLength_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getLength();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldLength_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getOldLength();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getWidth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getWidth();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldWidth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getOldWidth();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getHeight();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getOldHeight();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setLength_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble length_j)
				{
					ev_real64 length = (ev_real64) length_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setLength(length);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setWidth_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble width_j)
				{
					ev_real64 width = (ev_real64) width_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setWidth(width);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setHeigth_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble height_j)
				{
					ev_real64 height = (ev_real64) height_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setHeigth(height);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setIsUseTexture_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean useTexture_j)
				{
					ev_bool useTexture = (ev_bool) useTexture_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setIsUseTexture(useTexture);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getIsUseTexture_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_bool __values1 = pObjectX->getIsUseTexture();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldIsUseTexture_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_bool __values1 = pObjectX->getOldIsUseTexture();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setIsTextureFlow_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isTextureFlow_j)
				{
					ev_bool isTextureFlow = (ev_bool) isTextureFlow_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setIsTextureFlow(isTextureFlow);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getIsTextureFlow_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_bool __values1 = pObjectX->getIsTextureFlow();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldIsTextureFlow_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_bool __values1 = pObjectX->getOldIsTextureFlow();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setIsTexturePositiveFlow_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isTexturePositiveFlow_j)
				{
					ev_bool isTexturePositiveFlow = (ev_bool) isTexturePositiveFlow_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setIsTexturePositiveFlow(isTexturePositiveFlow);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getIsTexturePositiveFlow_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_bool __values1 = pObjectX->getIsTexturePositiveFlow();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldIsTexturePositiveFlow_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_bool __values1 = pObjectX->getOldIsTexturePositiveFlow();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setTextureFlowSpeed_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble flowSpeed_j)
				{
					ev_real64 flowSpeed = (ev_real64) flowSpeed_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setTextureFlowSpeed(flowSpeed);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getTextureFlowSpeed_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getTextureFlowSpeed();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldTextureFlowSpeed_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getOldTextureFlowSpeed();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setBottomRadius_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble bottomRadius_j)
				{
					ev_real64 bottomRadius = (ev_real64) bottomRadius_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setBottomRadius(bottomRadius);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getBottomRadius_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getBottomRadius();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldBottomRadius_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getOldBottomRadius();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setTopRadius_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble topRadius_j)
				{
					ev_real64 topRadius = (ev_real64) topRadius_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setTopRadius(topRadius);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getTopRadius_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getTopRadius();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldTopRadius_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getOldTopRadius();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setGranularity_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong granularity_j)
				{
					ev_uint32 granularity = (ev_uint32) granularity_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setGranularity(granularity);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getGranularity_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getGranularity();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldGranularity_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getOldGranularity();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setHalfsPhereRenderMode_1HalfsPhereRenderMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j)
				{
					EarthView::World::Spatial::Kml::HalfsPhereRenderMode mode = (EarthView::World::Spatial::Kml::HalfsPhereRenderMode) mode_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setHalfsPhereRenderMode(mode);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getHalfsPhereRenderMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EarthView::World::Spatial::Kml::HalfsPhereRenderMode __values1 = pObjectX->getHalfsPhereRenderMode();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldHalfsPhereRenderMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EarthView::World::Spatial::Kml::HalfsPhereRenderMode __values1 = pObjectX->getOldHalfsPhereRenderMode();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getScreenX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EarthView::World::Spatial::Kml::CSceneOverlayData __values1 = pObjectX->getScreenX();
					EarthView::World::Spatial::Kml::CSceneOverlayData *returnvalues = new EarthView::World::Spatial::Kml::CSceneOverlayData(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getScreenY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EarthView::World::Spatial::Kml::CSceneOverlayData __values1 = pObjectX->getScreenY();
					EarthView::World::Spatial::Kml::CSceneOverlayData *returnvalues = new EarthView::World::Spatial::Kml::CSceneOverlayData(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setScreenXY_1CSceneOverlayData_1CSceneOverlayData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong screenX_j, jlong screenY_j)
				{
					EarthView::World::Spatial::Kml::CSceneOverlayData screenX = *(EarthView::World::Spatial::Kml::CSceneOverlayData*) screenX_j;
					EarthView::World::Spatial::Kml::CSceneOverlayData screenY = *(EarthView::World::Spatial::Kml::CSceneOverlayData*) screenY_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setScreenXY(screenX, screenY);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOverlayX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EarthView::World::Spatial::Kml::CSceneOverlayData __values1 = pObjectX->getOverlayX();
					EarthView::World::Spatial::Kml::CSceneOverlayData *returnvalues = new EarthView::World::Spatial::Kml::CSceneOverlayData(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOverlayY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EarthView::World::Spatial::Kml::CSceneOverlayData __values1 = pObjectX->getOverlayY();
					EarthView::World::Spatial::Kml::CSceneOverlayData *returnvalues = new EarthView::World::Spatial::Kml::CSceneOverlayData(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setOverlayXY_1CSceneOverlayData_1CSceneOverlayData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong overlayX_j, jlong overlayY_j)
				{
					EarthView::World::Spatial::Kml::CSceneOverlayData overlayX = *(EarthView::World::Spatial::Kml::CSceneOverlayData*) overlayX_j;
					EarthView::World::Spatial::Kml::CSceneOverlayData overlayY = *(EarthView::World::Spatial::Kml::CSceneOverlayData*) overlayY_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setOverlayXY(overlayX, overlayY);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getSizeX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EarthView::World::Spatial::Kml::CSceneOverlayData __values1 = pObjectX->getSizeX();
					EarthView::World::Spatial::Kml::CSceneOverlayData *returnvalues = new EarthView::World::Spatial::Kml::CSceneOverlayData(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getSizeY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EarthView::World::Spatial::Kml::CSceneOverlayData __values1 = pObjectX->getSizeY();
					EarthView::World::Spatial::Kml::CSceneOverlayData *returnvalues = new EarthView::World::Spatial::Kml::CSceneOverlayData(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setSizeXY_1CSceneOverlayData_1CSceneOverlayData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sizeX_j, jlong sizeY_j)
				{
					EarthView::World::Spatial::Kml::CSceneOverlayData sizeX = *(EarthView::World::Spatial::Kml::CSceneOverlayData*) sizeX_j;
					EarthView::World::Spatial::Kml::CSceneOverlayData sizeY = *(EarthView::World::Spatial::Kml::CSceneOverlayData*) sizeY_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setSizeXY(sizeX, sizeY);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getRotateX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EarthView::World::Spatial::Kml::CSceneOverlayData __values1 = pObjectX->getRotateX();
					EarthView::World::Spatial::Kml::CSceneOverlayData *returnvalues = new EarthView::World::Spatial::Kml::CSceneOverlayData(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getRotateY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EarthView::World::Spatial::Kml::CSceneOverlayData __values1 = pObjectX->getRotateY();
					EarthView::World::Spatial::Kml::CSceneOverlayData *returnvalues = new EarthView::World::Spatial::Kml::CSceneOverlayData(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setRotateXY_1CSceneOverlayData_1CSceneOverlayData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rotateX_j, jlong rotateY_j)
				{
					EarthView::World::Spatial::Kml::CSceneOverlayData rotateX = *(EarthView::World::Spatial::Kml::CSceneOverlayData*) rotateX_j;
					EarthView::World::Spatial::Kml::CSceneOverlayData rotateY = *(EarthView::World::Spatial::Kml::CSceneOverlayData*) rotateY_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setRotateXY(rotateX, rotateY);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setMultiPoint_1CMultiPoint(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_MultiPoint_j)
				{
					EarthView::World::Spatial::Geometry::CMultiPoint *ref_MultiPoint = (EarthView::World::Spatial::Geometry::CMultiPoint*) ref_MultiPoint_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setMultiPoint(ref_MultiPoint);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getMultiPoint_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CMultiPoint* __values1 = pObjectX->getMultiPoint();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldMultiPoint_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CMultiPoint* __values1 = pObjectX->getOldMultiPoint();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setPolyLine_1CPolyline(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_polyline_j)
				{
					EarthView::World::Spatial::Geometry::CPolyline *ref_polyline = (EarthView::World::Spatial::Geometry::CPolyline*) ref_polyline_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setPolyLine(ref_polyline);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getPolyLine_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CPolyline* __values1 = pObjectX->getPolyLine();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldPolyLine_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CPolyline* __values1 = pObjectX->getOldPolyLine();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setPolygon_1CPolygon(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_polygon_j)
				{
					EarthView::World::Spatial::Geometry::CPolygon *ref_polygon = (EarthView::World::Spatial::Geometry::CPolygon*) ref_polygon_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setPolygon(ref_polygon);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getPolygon_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CPolygon* __values1 = pObjectX->getPolygon();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldPolygon_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CPolygon* __values1 = pObjectX->getOldPolygon();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setTopSurfaceTextureEnable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
				{
					ev_bool enable = (ev_bool) enable_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setTopSurfaceTextureEnable(enable);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getTopSurfaceTextureEnable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_bool __values1 = pObjectX->getTopSurfaceTextureEnable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldTopSurfaceTextureEnable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_bool __values1 = pObjectX->getOldTopSurfaceTextureEnable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setWallSurfaceTextureEnable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
				{
					ev_bool enable = (ev_bool) enable_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setWallSurfaceTextureEnable(enable);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getWallSurfaceTextureEnable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_bool __values1 = pObjectX->getWallSurfaceTextureEnable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldWallSurfaceTextureEnable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_bool __values1 = pObjectX->getOldWallSurfaceTextureEnable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setTopSurfaceTextureScale_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat scale_j)
				{
					ev_real32 scale = (ev_real32) scale_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setTopSurfaceTextureScale(scale);
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getTopSurfaceTextureScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getTopSurfaceTextureScale();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldTopSurfaceTextureScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getOldTopSurfaceTextureScale();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setWallSurfaceTextureScale_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat scale_j)
				{
					ev_real32 scale = (ev_real32) scale_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setWallSurfaceTextureScale(scale);
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getWallSurfaceTextureScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getWallSurfaceTextureScale();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldWallSurfaceTextureScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getOldWallSurfaceTextureScale();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setTopSurfaceTextureTransparency_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat val_j)
				{
					ev_real32 val = (ev_real32) val_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setTopSurfaceTextureTransparency(val);
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getTopSurfaceTextureTransparency_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getTopSurfaceTextureTransparency();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldTopSurfaceTextureTransparency_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getOldTopSurfaceTextureTransparency();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setWallSurfaceTextureTransparency_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat val_j)
				{
					ev_real32 val = (ev_real32) val_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setWallSurfaceTextureTransparency(val);
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getWallSurfaceTextureTransparency_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getWallSurfaceTextureTransparency();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldWallSurfaceTextureTransparency_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getOldWallSurfaceTextureTransparency();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setTopSurfaceTexturePath_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring path_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* path_ch = (const ev_char*)__env->GetStringUTFChars(path_j,JNI_FALSE);
					const EVString path = path_ch;
					__env->ReleaseStringUTFChars(path_j, (const char *)path_ch);
					#else
					const ev_wchar* path_ch = (const ev_wchar*)__env->GetStringChars(path_j,JNI_FALSE);
					const EVString path = path_ch;
					__env->ReleaseStringChars(path_j, (const jchar *)path_ch);
					#endif
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setTopSurfaceTexturePath(path);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getTopSurfaceTexturePath_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EVString __values1 = pObjectX->getTopSurfaceTexturePath();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldTopSurfaceTexturePath_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EVString __values1 = pObjectX->getOldTopSurfaceTexturePath();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setWallSurfaceTexturePath_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring path_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* path_ch = (const ev_char*)__env->GetStringUTFChars(path_j,JNI_FALSE);
					const EVString path = path_ch;
					__env->ReleaseStringUTFChars(path_j, (const char *)path_ch);
					#else
					const ev_wchar* path_ch = (const ev_wchar*)__env->GetStringChars(path_j,JNI_FALSE);
					const EVString path = path_ch;
					__env->ReleaseStringChars(path_j, (const jchar *)path_ch);
					#endif
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setWallSurfaceTexturePath(path);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getWallSurfaceTexturePath_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EVString __values1 = pObjectX->getWallSurfaceTexturePath();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldWallSurfaceTexturePath_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					EVString __values1 = pObjectX->getOldWallSurfaceTexturePath();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setTopSurfaceTextureUnitSizeX_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat unitSizeX_j)
				{
					ev_real32 unitSizeX = (ev_real32) unitSizeX_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setTopSurfaceTextureUnitSizeX(unitSizeX);
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getTopSurfaceTextureUnitSizeX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getTopSurfaceTextureUnitSizeX();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldTopSurfaceTextureUnitSizeX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getOldTopSurfaceTextureUnitSizeX();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setTopSurfaceTextureUnitSizeY_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat unitSizeY_j)
				{
					ev_real32 unitSizeY = (ev_real32) unitSizeY_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setTopSurfaceTextureUnitSizeY(unitSizeY);
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getTopSurfaceTextureUnitSizeY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getTopSurfaceTextureUnitSizeY();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldTopSurfaceTextureUnitSizeY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getOldTopSurfaceTextureUnitSizeY();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setWallSurfaceTextureUnitSizeX_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat unitSizeX_j)
				{
					ev_real32 unitSizeX = (ev_real32) unitSizeX_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setWallSurfaceTextureUnitSizeX(unitSizeX);
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getWallSurfaceTextureUnitSizeX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getWallSurfaceTextureUnitSizeX();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldWallSurfaceTextureUnitSizeX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getOldWallSurfaceTextureUnitSizeX();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setWallSurfaceTextureUnitSizeY_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat unitSizeY_j)
				{
					ev_real32 unitSizeY = (ev_real32) unitSizeY_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setWallSurfaceTextureUnitSizeY(unitSizeY);
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getWallSurfaceTextureUnitSizeY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getWallSurfaceTextureUnitSizeY();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_getOldWallSurfaceTextureUnitSizeY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getOldWallSurfaceTextureUnitSizeY();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_isPixelWidth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_bool __values1 = pObjectX->isPixelWidth();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_isOldPixelWidth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					ev_bool __values1 = pObjectX->isOldPixelWidth();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtensionAttribute_setPixelWidth_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isPixelWidth_j)
				{
					ev_bool isPixelWidth = (ev_bool) isPixelWidth_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX;
					pObjectX->setPixelWidth(isPixelWidth);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtension_get_1GeoObjectExtAttr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtension *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtension*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->GeoObjectExtAttr);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtension_set_1GeoObjectExtAttr_1CGeoObjectExtensionAttribute(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtension *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtension*)pObjXXXX;
					pObjectX->GeoObjectExtAttr = *(EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtension_get_1WorkState_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtension *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtension*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->WorkState);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtension_set_1WorkState_1CKmlWorkQueueState(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtension *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtension*)pObjXXXX;
					pObjectX->WorkState = (EarthView::World::Spatial::Kml::CKmlWorkQueueState*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtension_getWGS84SpatialReference_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Spatial::Utility::CSpatialReference* __values1 = EarthView::World::Spatial::Kml::CGeoObjectExtension::getWGS84SpatialReference();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtension_cloneProperty_1CGeoObjectExtension(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_geoObject_j)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtension *ref_geoObject = (EarthView::World::Spatial::Kml::CGeoObjectExtension*) ref_geoObject_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtension *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtension*) pObjXXXX;
					pObjectX->cloneProperty(ref_geoObject);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_GeoObjectExtension_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtension *pObjectX = (EarthView::World::Spatial::Kml::CGeoObjectExtension*) pObjXXXX;
					EarthView::World::Spatial::Kml::CGeoObjectExtension* __values1 = pObjectX->clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
		}
	}
}
