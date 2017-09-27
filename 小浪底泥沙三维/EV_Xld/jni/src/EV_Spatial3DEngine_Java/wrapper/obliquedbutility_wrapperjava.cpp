/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/obliquedbutility.h"
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
			namespace GeoDataset
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace ModelManager
			{
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqrecordinfo_get_1EVID_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)pObjXXXX;
					jlong __values1_j = (jlong) (pObjectX->EVID);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqrecordinfo_set_1EVID_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)pObjXXXX;
					pObjectX->EVID = (ev_uint32)__values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqrecordinfo_get_1EntityName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->EntityName;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqrecordinfo_set_1EntityName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->EntityName = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqrecordinfo_get_1ObqFullFilePath_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->ObqFullFilePath;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqrecordinfo_set_1ObqFullFilePath_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->ObqFullFilePath = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqrecordinfo_get_1Lon_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->Lon);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqrecordinfo_set_1Lon_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)pObjXXXX;
					pObjectX->Lon = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqrecordinfo_get_1Lat_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->Lat);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqrecordinfo_set_1Lat_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)pObjXXXX;
					pObjectX->Lat = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqrecordinfo_get_1Alt_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->Alt);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqrecordinfo_set_1Alt_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)pObjXXXX;
					pObjectX->Alt = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqrecordinfo_get_1WorldBounds_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->WorldBounds);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqrecordinfo_set_1WorldBounds_1CAxisAlignedBox(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)pObjXXXX;
					pObjectX->WorldBounds = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqrecordinfo_get_1Instance_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->Instance);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqrecordinfo_set_1Instance_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)pObjXXXX;
					pObjectX->Instance = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqrecordinfo_get_1ScaleX_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->ScaleX);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqrecordinfo_set_1ScaleX_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)pObjXXXX;
					pObjectX->ScaleX = (Real)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqrecordinfo_get_1ScaleY_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->ScaleY);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqrecordinfo_set_1ScaleY_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)pObjXXXX;
					pObjectX->ScaleY = (Real)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqrecordinfo_get_1ScaleZ_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->ScaleZ);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqrecordinfo_set_1ScaleZ_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)pObjXXXX;
					pObjectX->ScaleZ = (Real)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqrecordinfo_get_1OrientationW_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->OrientationW);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqrecordinfo_set_1OrientationW_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)pObjXXXX;
					pObjectX->OrientationW = (Real)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqrecordinfo_get_1OrientationX_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->OrientationX);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqrecordinfo_set_1OrientationX_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)pObjXXXX;
					pObjectX->OrientationX = (Real)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqrecordinfo_get_1OrientationY_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->OrientationY);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqrecordinfo_set_1OrientationY_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)pObjXXXX;
					pObjectX->OrientationY = (Real)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqrecordinfo_get_1OrientationZ_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->OrientationZ);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqrecordinfo_set_1OrientationZ_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)pObjXXXX;
					pObjectX->OrientationZ = (Real)__values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqrecordinfolist_push_1back_1OBQRecordInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo &t = *(EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*) t_j;
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqrecordinfolist_push_1front_1OBQRecordInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo &t = *(EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*) t_j;
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList*) pObjXXXX;
					pObjectX->push_front(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqrecordinfolist_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqrecordinfolist_pop_1front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList*) pObjXXXX;
					pObjectX->pop_front();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqrecordinfolist_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList*) pObjXXXX;
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqrecordinfolist_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList*) pObjXXXX;
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqrecordinfolist_at_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList*) pObjXXXX;
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo& __values1 = pObjectX->at(pos);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqrecordinfolist_insert_1ev_1uint32_1OBQRecordInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo &t = *(EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*) t_j;
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqrecordinfolist_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqrecordinfolist_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqrecordinfolist_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqrecordinfolist_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqrecordinfolist_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_get_1mVersion_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mVersion;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_set_1mVersion_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->mVersion = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_get_1mSrs_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mSrs;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_set_1mSrs_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->mSrs = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_get_1mLatitude_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mLatitude);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_set_1mLatitude_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					pObjectX->mLatitude = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_get_1mLongitude_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mLongitude);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_set_1mLongitude_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					pObjectX->mLongitude = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_get_1mAltitude_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mAltitude);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_set_1mAltitude_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					pObjectX->mAltitude = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_get_1mWorldScalex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mWorldScalex);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_set_1mWorldScalex_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					pObjectX->mWorldScalex = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_get_1mWorldScaley_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mWorldScaley);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_set_1mWorldScaley_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					pObjectX->mWorldScaley = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_get_1mWorldScalez_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mWorldScalez);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_set_1mWorldScalez_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					pObjectX->mWorldScalez = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_get_1mWorldRotx_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mWorldRotx);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_set_1mWorldRotx_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					pObjectX->mWorldRotx = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_get_1mWorldRoty_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mWorldRoty);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_set_1mWorldRoty_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					pObjectX->mWorldRoty = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_get_1mWorldRotz_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mWorldRotz);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_set_1mWorldRotz_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					pObjectX->mWorldRotz = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_get_1mWorldRotw_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mWorldRotw);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_set_1mWorldRotw_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					pObjectX->mWorldRotw = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_get_1mXmin_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					jfloat __values1_j = (jfloat)(pObjectX->mXmin);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_set_1mXmin_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					pObjectX->mXmin = (ev_real32)__values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_get_1mXmax_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					jfloat __values1_j = (jfloat)(pObjectX->mXmax);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_set_1mXmax_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					pObjectX->mXmax = (ev_real32)__values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_get_1mYmin_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					jfloat __values1_j = (jfloat)(pObjectX->mYmin);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_set_1mYmin_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					pObjectX->mYmin = (ev_real32)__values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_get_1mYmax_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					jfloat __values1_j = (jfloat)(pObjectX->mYmax);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_set_1mYmax_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					pObjectX->mYmax = (ev_real32)__values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_get_1mZmin_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					jfloat __values1_j = (jfloat)(pObjectX->mZmin);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_set_1mZmin_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					pObjectX->mZmin = (ev_real32)__values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_get_1mZmax_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					jfloat __values1_j = (jfloat)(pObjectX->mZmax);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_set_1mZmax_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					pObjectX->mZmax = (ev_real32)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_get_1mDataType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mDataType);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_set_1mDataType_1OBQDataType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					pObjectX->mDataType = (EarthView::World::Spatial3D::ModelManager::OBQDataType)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_get_1mPosx_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mPosx);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_set_1mPosx_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					pObjectX->mPosx = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_get_1mPosy_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mPosy);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_set_1mPosy_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					pObjectX->mPosy = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_get_1mPosz_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mPosz);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_set_1mPosz_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					pObjectX->mPosz = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_get_1mScalex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mScalex);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_set_1mScalex_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					pObjectX->mScalex = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_get_1mScaley_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mScaley);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_set_1mScaley_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					pObjectX->mScaley = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_get_1mScalez_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mScalez);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_set_1mScalez_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					pObjectX->mScalez = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_get_1mRotw_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mRotw);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_set_1mRotw_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					pObjectX->mRotw = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_get_1mRotx_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mRotx);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_set_1mRotx_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					pObjectX->mRotx = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_get_1mRoty_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mRoty);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_set_1mRoty_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					pObjectX->mRoty = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_get_1mRotz_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mRotz);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_set_1mRotz_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					pObjectX->mRotz = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jshort JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_get_1mMaxLevel_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					jshort __values1_j = (jshort) (pObjectX->mMaxLevel);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_set_1mMaxLevel_1ev_1uint8(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jshort __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					pObjectX->mMaxLevel = (ev_uint8)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_get_1mRecordList_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mRecordList);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmetainfo_set_1mRecordList_1OBQRecordInfoList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjXXXX;
					pObjectX->mRecordList = *(EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList*) __values1_j;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial3d_modelmanager_OBQDemTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						OBQDT_Float32,
						OBQDT_Int16
					};
					jintArray array = __env->NewIntArray(2);
					__env->SetIntArrayRegion(array, 0, 2, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqdemmetainfo_get_1mPointNumberPerSide_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*)pObjXXXX;
					jlong __values1_j = (jlong) (pObjectX->mPointNumberPerSide);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqdemmetainfo_set_1mPointNumberPerSide_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*)pObjXXXX;
					pObjectX->mPointNumberPerSide = (ev_uint32)__values1_j;
				}
				extern "C" JNIEXPORT jshort JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqdemmetainfo_get_1mLevelCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*)pObjXXXX;
					jshort __values1_j = (jshort) (pObjectX->mLevelCount);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqdemmetainfo_set_1mLevelCount_1ev_1uint8(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jshort __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*)pObjXXXX;
					pObjectX->mLevelCount = (ev_uint8)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqdemmetainfo_get_1mDataType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mDataType);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqdemmetainfo_set_1mDataType_1OBQDemType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*)pObjXXXX;
					pObjectX->mDataType = (EarthView::World::Spatial3D::ModelManager::OBQDemType)__values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqdemmetainfo_get_1mZeroTileWidth_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*)pObjXXXX;
					jfloat __values1_j = (jfloat)(pObjectX->mZeroTileWidth);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqdemmetainfo_set_1mZeroTileWidth_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*)pObjXXXX;
					pObjectX->mZeroTileWidth = (ev_real32)__values1_j;
				}
				extern "C" JNIEXPORT jshort JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqdemmetainfo_get_1mStartQuadLevel_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*)pObjXXXX;
					jshort __values1_j = (jshort) (pObjectX->mStartQuadLevel);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqdemmetainfo_set_1mStartQuadLevel_1ev_1uint8(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jshort __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*)pObjXXXX;
					pObjectX->mStartQuadLevel = (ev_uint8)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqdemmetainfo_get_1mZeroLevelRowCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*)pObjXXXX;
					jlong __values1_j = (jlong) (pObjectX->mZeroLevelRowCount);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqdemmetainfo_set_1mZeroLevelRowCount_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*)pObjXXXX;
					pObjectX->mZeroLevelRowCount = (ev_uint32)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqdemmetainfo_get_1mZeroLevelColCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*)pObjXXXX;
					jlong __values1_j = (jlong) (pObjectX->mZeroLevelColCount);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqdemmetainfo_set_1mZeroLevelColCount_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*)pObjXXXX;
					pObjectX->mZeroLevelColCount = (ev_uint32)__values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqdemmetainfo_get_1mStartX_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*)pObjXXXX;
					jfloat __values1_j = (jfloat)(pObjectX->mStartX);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqdemmetainfo_set_1mStartX_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*)pObjXXXX;
					pObjectX->mStartX = (ev_real32)__values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqdemmetainfo_get_1mStartY_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*)pObjXXXX;
					jfloat __values1_j = (jfloat)(pObjectX->mStartY);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqdemmetainfo_set_1mStartY_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*)pObjXXXX;
					pObjectX->mStartY = (ev_real32)__values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqdemmetainfo_get_1mStartZ_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*)pObjXXXX;
					jfloat __values1_j = (jfloat)(pObjectX->mStartZ);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqdemmetainfo_set_1mStartZ_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*)pObjXXXX;
					pObjectX->mStartZ = (ev_real32)__values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqdemmetainfo_get_1mEndX_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*)pObjXXXX;
					jfloat __values1_j = (jfloat)(pObjectX->mEndX);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqdemmetainfo_set_1mEndX_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*)pObjXXXX;
					pObjectX->mEndX = (ev_real32)__values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqdemmetainfo_get_1mEndY_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*)pObjXXXX;
					jfloat __values1_j = (jfloat)(pObjectX->mEndY);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqdemmetainfo_set_1mEndY_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*)pObjXXXX;
					pObjectX->mEndY = (ev_real32)__values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqdemmetainfo_get_1mEndZ_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*)pObjXXXX;
					jfloat __values1_j = (jfloat)(pObjectX->mEndZ);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqdemmetainfo_set_1mEndZ_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*)pObjXXXX;
					pObjectX->mEndZ = (ev_real32)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqinitdata_get_1mMetaInfo_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQInitData *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQInitData*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mMetaInfo);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqinitdata_set_1mMetaInfo_1OBQMetaInfo(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQInitData *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQInitData*)pObjXXXX;
					pObjectX->mMetaInfo = *(EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqinitdata_get_1mDemMetaInfo_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQInitData *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQInitData*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mDemMetaInfo);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqinitdata_set_1mDemMetaInfo_1OBQDemMetaInfo(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQInitData *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQInitData*)pObjXXXX;
					pObjectX->mDemMetaInfo = *(EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqinitdata_get_1mTopTileNames_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQInitData *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQInitData*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mTopTileNames);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqinitdata_set_1mTopTileNames_1CStringArray(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQInitData *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQInitData*)pObjXXXX;
					pObjectX->mTopTileNames = *(EarthView::World::Core::CStringArray*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqinitdata_get_1mTopIndexVec_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQInitData *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQInitData*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mTopIndexVec);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqinitdata_set_1mTopIndexVec_1LodIndexVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQInitData *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQInitData*)pObjXXXX;
					pObjectX->mTopIndexVec = *(EarthView::World::Spatial3D::ModelManager::LodIndexVector*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqinitdata_get_1mMapLevel_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQInitData *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQInitData*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mMapLevel);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqinitdata_set_1mMapLevel_1IntPairVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQInitData *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQInitData*)pObjXXXX;
					pObjectX->mMapLevel = *(EarthView::World::Core::IntPairVector*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqinitdata_get_1mSharedMaterialStream_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQInitData *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQInitData*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mSharedMaterialStream);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqinitdata_set_1mSharedMaterialStream_1MemoryDataStreamPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQInitData *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQInitData*)pObjXXXX;
					pObjectX->mSharedMaterialStream = *(EarthView::World::Core::MemoryDataStreamPtr*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqinitdata_get_1mSharedTextureStreamVec_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQInitData *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQInitData*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mSharedTextureStreamVec);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqinitdata_set_1mSharedTextureStreamVec_1MemoryDataStreamVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQInitData *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQInitData*)pObjXXXX;
					pObjectX->mSharedTextureStreamVec = *(EarthView::World::Core::MemoryDataStreamVector*) __values1_j;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDBUtility_00024EVDataTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CObliqueDBUtility::DT_OBQ,
						CObliqueDBUtility::DT_QSLIM
					};
					jintArray array = __env->NewIntArray(2);
					__env->SetIntArrayRegion(array, 0, 2, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDBUtility_insertMetaDataInfo_1OBQMetaInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong info_j)
				{
					const EarthView::World::Spatial3D::ModelManager::OBQMetaInfo &info = *(EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*) info_j;
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *pObjectX = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjXXXX;
					ev_bool __values1 = pObjectX->insertMetaDataInfo(info);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDBUtility_readMetaDataInfo_1OBQMetaInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong info_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo &info = *(EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*) info_j;
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *pObjectX = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjXXXX;
					ev_bool __values1 = pObjectX->readMetaDataInfo(info);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDBUtility_updateMetaDataInfo_1OBQMetaInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong info_j)
				{
					const EarthView::World::Spatial3D::ModelManager::OBQMetaInfo &info = *(EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*) info_j;
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *pObjectX = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjXXXX;
					ev_bool __values1 = pObjectX->updateMetaDataInfo(info);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDBUtility_insertDemMetaDataInfo_1OBQDemMetaInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong info_j)
				{
					const EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo &info = *(EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*) info_j;
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *pObjectX = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjXXXX;
					ev_bool __values1 = pObjectX->insertDemMetaDataInfo(info);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDBUtility_readDemMetaDataInfo_1OBQDemMetaInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong info_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo &info = *(EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*) info_j;
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *pObjectX = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjXXXX;
					ev_bool __values1 = pObjectX->readDemMetaDataInfo(info);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDBUtility_updateDemMetaDataInfo_1OBQDemMetaInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong info_j)
				{
					const EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo &info = *(EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*) info_j;
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *pObjectX = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjXXXX;
					ev_bool __values1 = pObjectX->updateDemMetaDataInfo(info);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDBUtility_insertTileLod_1EVString_1LodIndex(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring tileName_j, jlong pLodNode_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* tileName_ch = (const ev_char*)__env->GetStringUTFChars(tileName_j,JNI_FALSE);
					const EVString tileName = tileName_ch;
					__env->ReleaseStringUTFChars(tileName_j, (const char *)tileName_ch);
					#else
					const ev_wchar* tileName_ch = (const ev_wchar*)__env->GetStringChars(tileName_j,JNI_FALSE);
					const EVString tileName = tileName_ch;
					__env->ReleaseStringChars(tileName_j, (const jchar *)tileName_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::LodIndex *pLodNode = (EarthView::World::Spatial3D::ModelManager::LodIndex*) pLodNode_j;
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *pObjectX = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjXXXX;
					ev_bool __values1 = pObjectX->insertTileLod(tileName, pLodNode);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDBUtility_updateTileLodBound_1EVString_1ev_1uint32_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring tileName_j, jlong id_j, jfloat xmin_j, jfloat xmax_j, jfloat ymin_j, jfloat ymax_j, jfloat zmin_j, jfloat zmax_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* tileName_ch = (const ev_char*)__env->GetStringUTFChars(tileName_j,JNI_FALSE);
					const EVString tileName = tileName_ch;
					__env->ReleaseStringUTFChars(tileName_j, (const char *)tileName_ch);
					#else
					const ev_wchar* tileName_ch = (const ev_wchar*)__env->GetStringChars(tileName_j,JNI_FALSE);
					const EVString tileName = tileName_ch;
					__env->ReleaseStringChars(tileName_j, (const jchar *)tileName_ch);
					#endif
					ev_uint32 id = (ev_uint32) id_j;
					ev_real32 xmin = (ev_real32) xmin_j;
					ev_real32 xmax = (ev_real32) xmax_j;
					ev_real32 ymin = (ev_real32) ymin_j;
					ev_real32 ymax = (ev_real32) ymax_j;
					ev_real32 zmin = (ev_real32) zmin_j;
					ev_real32 zmax = (ev_real32) zmax_j;
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *pObjectX = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjXXXX;
					ev_bool __values1 = pObjectX->updateTileLodBound(tileName, id, xmin, xmax, ymin, ymax, zmin, zmax);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDBUtility_updateTileLodBound_1EVString_1EVString_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring tileName_j, jstring meshName_j, jfloat xmin_j, jfloat xmax_j, jfloat ymin_j, jfloat ymax_j, jfloat zmin_j, jfloat zmax_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* tileName_ch = (const ev_char*)__env->GetStringUTFChars(tileName_j,JNI_FALSE);
					const EVString tileName = tileName_ch;
					__env->ReleaseStringUTFChars(tileName_j, (const char *)tileName_ch);
					#else
					const ev_wchar* tileName_ch = (const ev_wchar*)__env->GetStringChars(tileName_j,JNI_FALSE);
					const EVString tileName = tileName_ch;
					__env->ReleaseStringChars(tileName_j, (const jchar *)tileName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* meshName_ch = (const ev_char*)__env->GetStringUTFChars(meshName_j,JNI_FALSE);
					const EVString meshName = meshName_ch;
					__env->ReleaseStringUTFChars(meshName_j, (const char *)meshName_ch);
					#else
					const ev_wchar* meshName_ch = (const ev_wchar*)__env->GetStringChars(meshName_j,JNI_FALSE);
					const EVString meshName = meshName_ch;
					__env->ReleaseStringChars(meshName_j, (const jchar *)meshName_ch);
					#endif
					ev_real32 xmin = (ev_real32) xmin_j;
					ev_real32 xmax = (ev_real32) xmax_j;
					ev_real32 ymin = (ev_real32) ymin_j;
					ev_real32 ymax = (ev_real32) ymax_j;
					ev_real32 zmin = (ev_real32) zmin_j;
					ev_real32 zmax = (ev_real32) zmax_j;
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *pObjectX = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjXXXX;
					ev_bool __values1 = pObjectX->updateTileLodBound(tileName, meshName, xmin, xmax, ymin, ymax, zmin, zmax);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDBUtility_readAllTileName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *pObjectX = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjXXXX;
					EarthView::World::Core::CStringArray __values1 = pObjectX->readAllTileName();
					EarthView::World::Core::CStringArray *returnvalues = new EarthView::World::Core::CStringArray(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDBUtility_readAllTileNameAndTopTileLod_1CStringArray_1LodIndexVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tileNames_j, jlong lodVec_j)
				{
					EarthView::World::Core::CStringArray &tileNames = *(EarthView::World::Core::CStringArray*) tileNames_j;
					EarthView::World::Spatial3D::ModelManager::LodIndexVector &lodVec = *(EarthView::World::Spatial3D::ModelManager::LodIndexVector*) lodVec_j;
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *pObjectX = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjXXXX;
					ev_bool __values1 = pObjectX->readAllTileNameAndTopTileLod(tileNames, lodVec);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDBUtility_readTileLod_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring tileName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* tileName_ch = (const ev_char*)__env->GetStringUTFChars(tileName_j,JNI_FALSE);
					const EVString tileName = tileName_ch;
					__env->ReleaseStringUTFChars(tileName_j, (const char *)tileName_ch);
					#else
					const ev_wchar* tileName_ch = (const ev_wchar*)__env->GetStringChars(tileName_j,JNI_FALSE);
					const EVString tileName = tileName_ch;
					__env->ReleaseStringChars(tileName_j, (const jchar *)tileName_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *pObjectX = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjXXXX;
					EarthView::World::Spatial3D::ModelManager::LodIndex* __values1 = pObjectX->readTileLod(tileName);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDBUtility_readChildLod_1EVString_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring tileName_j, jlong parentID_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* tileName_ch = (const ev_char*)__env->GetStringUTFChars(tileName_j,JNI_FALSE);
					const EVString tileName = tileName_ch;
					__env->ReleaseStringUTFChars(tileName_j, (const char *)tileName_ch);
					#else
					const ev_wchar* tileName_ch = (const ev_wchar*)__env->GetStringChars(tileName_j,JNI_FALSE);
					const EVString tileName = tileName_ch;
					__env->ReleaseStringChars(tileName_j, (const jchar *)tileName_ch);
					#endif
					ev_uint32 parentID = (ev_uint32) parentID_j;
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *pObjectX = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjXXXX;
					EarthView::World::Spatial3D::ModelManager::LodIndexVector __values1 = pObjectX->readChildLod(tileName, parentID);
					EarthView::World::Spatial3D::ModelManager::LodIndexVector *returnvalues = new EarthView::World::Spatial3D::ModelManager::LodIndexVector(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDBUtility_readChildLod_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring tileName_j, jstring modelPath_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* tileName_ch = (const ev_char*)__env->GetStringUTFChars(tileName_j,JNI_FALSE);
					const EVString tileName = tileName_ch;
					__env->ReleaseStringUTFChars(tileName_j, (const char *)tileName_ch);
					#else
					const ev_wchar* tileName_ch = (const ev_wchar*)__env->GetStringChars(tileName_j,JNI_FALSE);
					const EVString tileName = tileName_ch;
					__env->ReleaseStringChars(tileName_j, (const jchar *)tileName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* modelPath_ch = (const ev_char*)__env->GetStringUTFChars(modelPath_j,JNI_FALSE);
					const EVString modelPath = modelPath_ch;
					__env->ReleaseStringUTFChars(modelPath_j, (const char *)modelPath_ch);
					#else
					const ev_wchar* modelPath_ch = (const ev_wchar*)__env->GetStringChars(modelPath_j,JNI_FALSE);
					const EVString modelPath = modelPath_ch;
					__env->ReleaseStringChars(modelPath_j, (const jchar *)modelPath_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *pObjectX = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjXXXX;
					EarthView::World::Spatial3D::ModelManager::LodIndexVector __values1 = pObjectX->readChildLod(tileName, modelPath);
					EarthView::World::Spatial3D::ModelManager::LodIndexVector *returnvalues = new EarthView::World::Spatial3D::ModelManager::LodIndexVector(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDBUtility_readLodByID_1EVString_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring tileName_j, jlong id_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* tileName_ch = (const ev_char*)__env->GetStringUTFChars(tileName_j,JNI_FALSE);
					const EVString tileName = tileName_ch;
					__env->ReleaseStringUTFChars(tileName_j, (const char *)tileName_ch);
					#else
					const ev_wchar* tileName_ch = (const ev_wchar*)__env->GetStringChars(tileName_j,JNI_FALSE);
					const EVString tileName = tileName_ch;
					__env->ReleaseStringChars(tileName_j, (const jchar *)tileName_ch);
					#endif
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *pObjectX = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjXXXX;
					EarthView::World::Spatial3D::ModelManager::LodIndex* __values1 = pObjectX->readLodByID(tileName, id);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDBUtility_updateMetaDataInfo_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble altitude_j)
				{
					ev_real64 altitude = (ev_real64) altitude_j;
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *pObjectX = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjXXXX;
					ev_bool __values1 = pObjectX->updateMetaDataInfo(altitude);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDBUtility_insertAllTopLod_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *pObjectX = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjXXXX;
					ev_bool __values1 = pObjectX->insertAllTopLod();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDBUtility_createTopLodTable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *pObjectX = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjXXXX;
					ev_bool __values1 = pObjectX->createTopLodTable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDBUtility_insertTopLod_1EVString_1LodIndex_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring tileName_j, jlong pLodIndex_j, jboolean haveTopTileIndexTab_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* tileName_ch = (const ev_char*)__env->GetStringUTFChars(tileName_j,JNI_FALSE);
					const EVString tileName = tileName_ch;
					__env->ReleaseStringUTFChars(tileName_j, (const char *)tileName_ch);
					#else
					const ev_wchar* tileName_ch = (const ev_wchar*)__env->GetStringChars(tileName_j,JNI_FALSE);
					const EVString tileName = tileName_ch;
					__env->ReleaseStringChars(tileName_j, (const jchar *)tileName_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::LodIndex *pLodIndex = (EarthView::World::Spatial3D::ModelManager::LodIndex*) pLodIndex_j;
					ev_bool haveTopTileIndexTab = (ev_bool) haveTopTileIndexTab_j;
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *pObjectX = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjXXXX;
					ev_bool __values1 = pObjectX->insertTopLod(tileName, pLodIndex, haveTopTileIndexTab);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDBUtility_readAllTopLod_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *pObjectX = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjXXXX;
					EarthView::World::Spatial3D::ModelManager::LodIndexVector __values1 = pObjectX->readAllTopLod();
					EarthView::World::Spatial3D::ModelManager::LodIndexVector *returnvalues = new EarthView::World::Spatial3D::ModelManager::LodIndexVector(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDBUtility_dropAllLodTab_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *pObjectX = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjXXXX;
					ev_bool __values1 = pObjectX->dropAllLodTab();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDBUtility_insertLevelMap_1IntPairVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mapLevel_j)
				{
					EarthView::World::Core::IntPairVector &mapLevel = *(EarthView::World::Core::IntPairVector*) mapLevel_j;
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *pObjectX = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjXXXX;
					ev_bool __values1 = pObjectX->insertLevelMap(mapLevel);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDBUtility_readLevelMap_1IntPairVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mapLevel_j)
				{
					EarthView::World::Core::IntPairVector &mapLevel = *(EarthView::World::Core::IntPairVector*) mapLevel_j;
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *pObjectX = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjXXXX;
					ev_bool __values1 = pObjectX->readLevelMap(mapLevel);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDBUtility_getDBFile_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *pObjectX = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjXXXX;
					EVString __values1 = pObjectX->getDBFile();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDBUtility_getSqlDatabase_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *pObjectX = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjXXXX;
					EarthView::World::Core::Database::CSqlDatabase __values1 = pObjectX->getSqlDatabase();
					EarthView::World::Core::Database::CSqlDatabase *returnvalues = new EarthView::World::Core::Database::CSqlDatabase(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDBUtility_baseInfoToStream_1OBQInitData_1MemoryDataStreamPtr(JNIEnv *__env , jclass __clazz, jlong initData_j, jlong stream_j)
				{
					const EarthView::World::Spatial3D::ModelManager::OBQInitData &initData = *(EarthView::World::Spatial3D::ModelManager::OBQInitData*) initData_j;
					EarthView::World::Core::MemoryDataStreamPtr &stream = *(EarthView::World::Core::MemoryDataStreamPtr*) stream_j;
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility::baseInfoToStream(initData, stream);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDBUtility_streamToBaseInfo_1MemoryDataStreamPtr_1OBQInitData(JNIEnv *__env , jclass __clazz, jlong stream_j, jlong initData_j)
				{
					const EarthView::World::Core::MemoryDataStreamPtr &stream = *(EarthView::World::Core::MemoryDataStreamPtr*) stream_j;
					EarthView::World::Spatial3D::ModelManager::OBQInitData &initData = *(EarthView::World::Spatial3D::ModelManager::OBQInitData*) initData_j;
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility::streamToBaseInfo(stream, initData);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDBUtility_obqPublishFileToInfo_1EVString_1ev_1int32_1CStringArray_1CStringArray(JNIEnv *__env , jclass __clazz, jstring filePath_j, jlong version_j, jlong rootNames_j, jlong modelNames_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* filePath_ch = (const ev_char*)__env->GetStringUTFChars(filePath_j,JNI_FALSE);
					const EVString filePath = filePath_ch;
					__env->ReleaseStringUTFChars(filePath_j, (const char *)filePath_ch);
					#else
					const ev_wchar* filePath_ch = (const ev_wchar*)__env->GetStringChars(filePath_j,JNI_FALSE);
					const EVString filePath = filePath_ch;
					__env->ReleaseStringChars(filePath_j, (const jchar *)filePath_ch);
					#endif
					ev_int32 &version = *(ev_int32*) version_j;
					EarthView::World::Core::CStringArray &rootNames = *(EarthView::World::Core::CStringArray*) rootNames_j;
					EarthView::World::Core::CStringArray &modelNames = *(EarthView::World::Core::CStringArray*) modelNames_j;
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility::obqPublishFileToInfo(filePath, version, rootNames, modelNames);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDBUtility_obqPublishInfoToFile_1EVString_1ev_1int32_1CStringArray_1CStringArray(JNIEnv *__env , jclass __clazz, jstring filePath_j, jint version_j, jlong rootNames_j, jlong modelNames_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* filePath_ch = (const ev_char*)__env->GetStringUTFChars(filePath_j,JNI_FALSE);
					const EVString filePath = filePath_ch;
					__env->ReleaseStringUTFChars(filePath_j, (const char *)filePath_ch);
					#else
					const ev_wchar* filePath_ch = (const ev_wchar*)__env->GetStringChars(filePath_j,JNI_FALSE);
					const EVString filePath = filePath_ch;
					__env->ReleaseStringChars(filePath_j, (const jchar *)filePath_ch);
					#endif
					ev_int32 version = (ev_int32) version_j;
					EarthView::World::Core::CStringArray &rootNames = *(EarthView::World::Core::CStringArray*) rootNames_j;
					EarthView::World::Core::CStringArray &modelNames = *(EarthView::World::Core::CStringArray*) modelNames_j;
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility::obqPublishInfoToFile(filePath, version, rootNames, modelNames);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDBUtility_setDataType_1EVDataType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility::EVDataType type = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility::EVDataType) type_j;
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *pObjectX = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjXXXX;
					pObjectX->setDataType(type);
				}
			}
		}
	}
}
