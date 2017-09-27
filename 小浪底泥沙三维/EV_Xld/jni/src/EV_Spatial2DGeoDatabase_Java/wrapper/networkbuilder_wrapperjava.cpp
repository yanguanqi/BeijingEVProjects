/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dgeodatabase/networkbuilder.h"
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
			namespace Geometry
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
			namespace GeoDataset
			{
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial2d_geodataset_EVConnectivityPolicyHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CT_ENDPIONT,
						CT_ANYVERTEX
					};
					jintArray array = __env->NewIntArray(2);
					__env->SetIntArrayRegion(array, 0, 2, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial2d_geodataset_EVDataValueTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						VT_FIELD,
						VT_CONSTANT,
						VT_FUNCTION
					};
					jintArray array = __env->NewIntArray(3);
					__env->SetIntArrayRegion(array, 0, 3, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial2d_geodataset_ElevationSetting_get_1srcName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::ElevationSetting *pObjectX = (EarthView::World::Spatial2D::GeoDataset::ElevationSetting*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->srcName;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_ElevationSetting_set_1srcName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial2D::GeoDataset::ElevationSetting *pObjectX = (EarthView::World::Spatial2D::GeoDataset::ElevationSetting*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->srcName = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_geodataset_ElevationSetting_get_1direction_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::ElevationSetting *pObjectX = (EarthView::World::Spatial2D::GeoDataset::ElevationSetting*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->direction);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_ElevationSetting_set_1direction_1EVDirectionType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial2D::GeoDataset::ElevationSetting *pObjectX = (EarthView::World::Spatial2D::GeoDataset::ElevationSetting*)pObjXXXX;
					pObjectX->direction = (EarthView::World::Spatial2D::GeoDataset::EVDirectionType)__values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial2d_geodataset_ElevationSetting_get_1fieldName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::ElevationSetting *pObjectX = (EarthView::World::Spatial2D::GeoDataset::ElevationSetting*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->fieldName;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_ElevationSetting_set_1fieldName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial2D::GeoDataset::ElevationSetting *pObjectX = (EarthView::World::Spatial2D::GeoDataset::ElevationSetting*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->fieldName = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial2d_geodataset_Naattributesetting_get_1m_1sourceName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::CNAAttributeSetting *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CNAAttributeSetting*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->m_sourceName;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_Naattributesetting_set_1m_1sourceName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial2D::GeoDataset::CNAAttributeSetting *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CNAAttributeSetting*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->m_sourceName = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_geodataset_Naattributesetting_get_1m_1direction_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::CNAAttributeSetting *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CNAAttributeSetting*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->m_direction);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_Naattributesetting_set_1m_1direction_1EVDirectionType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial2D::GeoDataset::CNAAttributeSetting *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CNAAttributeSetting*)pObjXXXX;
					pObjectX->m_direction = (EarthView::World::Spatial2D::GeoDataset::EVDirectionType)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_geodataset_Naattributesetting_get_1m_1element_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::CNAAttributeSetting *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CNAAttributeSetting*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->m_element);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_Naattributesetting_set_1m_1element_1EVElementType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial2D::GeoDataset::CNAAttributeSetting *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CNAAttributeSetting*)pObjXXXX;
					pObjectX->m_element = (EarthView::World::Spatial2D::GeoDataset::EVElementType)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_geodataset_Naattributesetting_get_1m_1type_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::CNAAttributeSetting *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CNAAttributeSetting*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->m_type);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_Naattributesetting_set_1m_1type_1EVDataValueType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial2D::GeoDataset::CNAAttributeSetting *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CNAAttributeSetting*)pObjXXXX;
					pObjectX->m_type = (EarthView::World::Spatial2D::GeoDataset::EVDataValueType)__values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial2d_geodataset_Naattributesetting_get_1m_1value_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::CNAAttributeSetting *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CNAAttributeSetting*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->m_value;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_Naattributesetting_set_1m_1value_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial2D::GeoDataset::CNAAttributeSetting *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CNAAttributeSetting*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->m_value = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_Naattribute_SetName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial2D::GeoDataset::CNAAttribute *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CNAAttribute*) pObjXXXX;
					pObjectX->SetName(name);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial2d_geodataset_Naattribute_GetName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::GeoDataset::CNAAttribute *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CNAAttribute*) pObjXXXX;
					EVString __values1 = pObjectX->GetName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_Naattribute_SetDataType_1EVDataType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Core::CVariant::EVDataType type = (EarthView::World::Core::CVariant::EVDataType) type_j;
					EarthView::World::Spatial2D::GeoDataset::CNAAttribute *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CNAAttribute*) pObjXXXX;
					pObjectX->SetDataType(type);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_geodataset_Naattribute_GetDataType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::GeoDataset::CNAAttribute *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CNAAttribute*) pObjXXXX;
					EarthView::World::Core::CVariant::EVDataType __values1 = pObjectX->GetDataType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_Naattribute_SetUsage_1EVUsageType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial2D::GeoDataset::EVUsageType type = (EarthView::World::Spatial2D::GeoDataset::EVUsageType) type_j;
					EarthView::World::Spatial2D::GeoDataset::CNAAttribute *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CNAAttribute*) pObjXXXX;
					pObjectX->SetUsage(type);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_geodataset_Naattribute_GetUsage_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::GeoDataset::CNAAttribute *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CNAAttribute*) pObjXXXX;
					EarthView::World::Spatial2D::GeoDataset::EVUsageType __values1 = pObjectX->GetUsage();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_Naattribute_SetUnit_1EVUnitType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint unit_j)
				{
					EarthView::World::Spatial2D::GeoDataset::EVUnitType unit = (EarthView::World::Spatial2D::GeoDataset::EVUnitType) unit_j;
					EarthView::World::Spatial2D::GeoDataset::CNAAttribute *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CNAAttribute*) pObjXXXX;
					pObjectX->SetUnit(unit);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_geodataset_Naattribute_GetUnit_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::GeoDataset::CNAAttribute *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CNAAttribute*) pObjXXXX;
					EarthView::World::Spatial2D::GeoDataset::EVUnitType __values1 = pObjectX->GetUnit();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_Naattribute_SetDefault_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isDefault_j)
				{
					ev_bool isDefault = (ev_bool) isDefault_j;
					EarthView::World::Spatial2D::GeoDataset::CNAAttribute *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CNAAttribute*) pObjXXXX;
					pObjectX->SetDefault(isDefault);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geodataset_Naattribute_IsDefault_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::GeoDataset::CNAAttribute *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CNAAttribute*) pObjXXXX;
					bool __values1 = pObjectX->IsDefault();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_geodataset_Naattribute_GetSettingCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::GeoDataset::CNAAttribute *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CNAAttribute*) pObjXXXX;
					ev_int32 __values1 = pObjectX->GetSettingCount();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_Naattribute_ClearSetting_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::CNAAttribute *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CNAAttribute*) pObjXXXX;
					pObjectX->ClearSetting();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_Naattribute_AddSetting_1CNAAttributeSetting(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong setting_j)
				{
					const EarthView::World::Spatial2D::GeoDataset::CNAAttributeSetting &setting = *(EarthView::World::Spatial2D::GeoDataset::CNAAttributeSetting*) setting_j;
					EarthView::World::Spatial2D::GeoDataset::CNAAttribute *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CNAAttribute*) pObjXXXX;
					pObjectX->AddSetting(setting);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geodataset_Naattribute_GetSettingRef_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong idx_j)
				{
					ev_uint32 idx = (ev_uint32) idx_j;
					EarthView::World::Spatial2D::GeoDataset::CNAAttribute *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CNAAttribute*) pObjXXXX;
					EarthView::World::Spatial2D::GeoDataset::CNAAttributeSetting* __values1 = pObjectX->GetSettingRef(idx);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geodataset_SplitInfo_Create(JNIEnv *__env, jclass __clazz)
				{
					EarthView::World::Spatial2D::GeoDataset::CSplitInfo *pObjectX = new EarthView::World::Spatial2D::GeoDataset::CSplitInfo();
					return (jlong) pObjectX;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_SplitInfo_Destroy(JNIEnv *__env, jclass __clazz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::CSplitInfo *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CSplitInfo*)pObjXXXX;
					delete pObjectX;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geodataset_SplitInfo_get_1start_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::CSplitInfo *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CSplitInfo*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->start);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_SplitInfo_set_1start_1CPoint(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial2D::GeoDataset::CSplitInfo *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CSplitInfo*)pObjXXXX;
					pObjectX->start = (EarthView::World::Spatial::Geometry::CPoint*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geodataset_SplitInfo_get_1end_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::CSplitInfo *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CSplitInfo*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->end);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_SplitInfo_set_1end_1CPoint(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial2D::GeoDataset::CSplitInfo *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CSplitInfo*)pObjXXXX;
					pObjectX->end = (EarthView::World::Spatial::Geometry::CPoint*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geodataset_SplitInfo_get_1subEdge_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::CSplitInfo *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CSplitInfo*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->subEdge);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_SplitInfo_set_1subEdge_1CLineString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial2D::GeoDataset::CSplitInfo *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CSplitInfo*)pObjXXXX;
					pObjectX->subEdge = (EarthView::World::Spatial::Geometry::CLineString*) __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_geodataset_SplitInfo_get_1ratio_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::CSplitInfo *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CSplitInfo*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->ratio);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_SplitInfo_set_1ratio_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial2D::GeoDataset::CSplitInfo *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CSplitInfo*)pObjXXXX;
					pObjectX->ratio = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geodataset_NetworkDatasetBuilder_build_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder*) pObjXXXX;
					ev_bool __values1 = pObjectX->build();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geodataset_NetworkDatasetBuilder_buildWithEndPointConnectivityPolicy_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder*) pObjXXXX;
					ev_bool __values1 = pObjectX->buildWithEndPointConnectivityPolicy();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geodataset_NetworkDatasetBuilder_buildWithVertexConnectivityPolicy_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder*) pObjXXXX;
					ev_bool __values1 = pObjectX->buildWithVertexConnectivityPolicy();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_NetworkDatasetBuilder_setName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder*) pObjXXXX;
					pObjectX->setName(name);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_NetworkDatasetBuilder_setSourceFeatureClass_1IFeatureClass(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fc_j)
				{
					EarthView::World::Spatial::GeoDataset::IFeatureClass *fc = (EarthView::World::Spatial::GeoDataset::IFeatureClass*) fc_j;
					EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder*) pObjXXXX;
					pObjectX->setSourceFeatureClass(fc);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_NetworkDatasetBuilder_addSourceFeatureClass_1IFeatureClass(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fc_j)
				{
					EarthView::World::Spatial::GeoDataset::IFeatureClass *fc = (EarthView::World::Spatial::GeoDataset::IFeatureClass*) fc_j;
					EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder*) pObjXXXX;
					pObjectX->addSourceFeatureClass(fc);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_NetworkDatasetBuilder_addConnectivityPolicy_1EVString_1EVConnectivityPolicy(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring srcName_j, jint policy_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* srcName_ch = (const ev_char*)__env->GetStringUTFChars(srcName_j,JNI_FALSE);
					const EVString srcName = srcName_ch;
					__env->ReleaseStringUTFChars(srcName_j, (const char *)srcName_ch);
					#else
					const ev_wchar* srcName_ch = (const ev_wchar*)__env->GetStringChars(srcName_j,JNI_FALSE);
					const EVString srcName = srcName_ch;
					__env->ReleaseStringChars(srcName_j, (const jchar *)srcName_ch);
					#endif
					const EarthView::World::Spatial2D::GeoDataset::EVConnectivityPolicy policy = (const EarthView::World::Spatial2D::GeoDataset::EVConnectivityPolicy) policy_j;
					EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder*) pObjXXXX;
					pObjectX->addConnectivityPolicy(srcName, policy);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_NetworkDatasetBuilder_addElevationSetting_1ElevationSetting(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong elevation_j)
				{
					const EarthView::World::Spatial2D::GeoDataset::ElevationSetting &elevation = *(EarthView::World::Spatial2D::GeoDataset::ElevationSetting*) elevation_j;
					EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder*) pObjXXXX;
					pObjectX->addElevationSetting(elevation);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_NetworkDatasetBuilder_addTurnSource_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring turn_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* turn_ch = (const ev_char*)__env->GetStringUTFChars(turn_j,JNI_FALSE);
					const EVString turn = turn_ch;
					__env->ReleaseStringUTFChars(turn_j, (const char *)turn_ch);
					#else
					const ev_wchar* turn_ch = (const ev_wchar*)__env->GetStringChars(turn_j,JNI_FALSE);
					const EVString turn = turn_ch;
					__env->ReleaseStringChars(turn_j, (const jchar *)turn_ch);
					#endif
					EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder*) pObjXXXX;
					pObjectX->addTurnSource(turn);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_NetworkDatasetBuilder_addAttribute_1CNAAttribute(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong attr_j)
				{
					const EarthView::World::Spatial2D::GeoDataset::CNAAttribute &attr = *(EarthView::World::Spatial2D::GeoDataset::CNAAttribute*) attr_j;
					EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder*) pObjXXXX;
					pObjectX->addAttribute(attr);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_NetworkDatasetBuilder_setTolerance_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble tolerance_j)
				{
					const ev_real64 tolerance = (const ev_real64) tolerance_j;
					EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder*) pObjXXXX;
					pObjectX->setTolerance(tolerance);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_geodataset_NetworkDatasetBuilder_getTolerance_1void(JNIEnv *__env , jclass __clazz)
				{
					ev_real64 __values1 = EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder::getTolerance();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_geodataset_NetworkDatasetBuilder_getFinishPercent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getFinishPercent();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
		}
	}
}
