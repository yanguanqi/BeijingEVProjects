/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataexchange/parseshapefile.h"
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
			namespace DataExchange
			{
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ShapeFieldsList_push_1back_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring field_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* field_ch = (const ev_char*)__env->GetStringUTFChars(field_j,JNI_FALSE);
					EVString field = field_ch;
					__env->ReleaseStringUTFChars(field_j, (const char *)field_ch);
					#else
					const ev_wchar* field_ch = (const ev_wchar*)__env->GetStringChars(field_j,JNI_FALSE);
					EVString field = field_ch;
					__env->ReleaseStringChars(field_j, (const jchar *)field_ch);
					#endif
					EarthView::World::Spatial3D::DataExchange::ShapeFieldsList *pObjectX = (EarthView::World::Spatial3D::DataExchange::ShapeFieldsList*) pObjXXXX;
					pObjectX->push_back(field);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ShapeFieldsList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::ShapeFieldsList *pObjectX = (EarthView::World::Spatial3D::DataExchange::ShapeFieldsList*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_ShapeFieldsList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::ShapeFieldsList *pObjectX = (EarthView::World::Spatial3D::DataExchange::ShapeFieldsList*) pObjXXXX;
					EVString& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_ShapeFieldsList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::ShapeFieldsList *pObjectX = (EarthView::World::Spatial3D::DataExchange::ShapeFieldsList*) pObjXXXX;
					EVString& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ShapeFieldsList_insert_1ev_1uint32_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jstring ref_t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* ref_t_ch = (const ev_char*)__env->GetStringUTFChars(ref_t_j,JNI_FALSE);
					EVString ref_t = ref_t_ch;
					__env->ReleaseStringUTFChars(ref_t_j, (const char *)ref_t_ch);
					#else
					const ev_wchar* ref_t_ch = (const ev_wchar*)__env->GetStringChars(ref_t_j,JNI_FALSE);
					EVString ref_t = ref_t_ch;
					__env->ReleaseStringChars(ref_t_j, (const jchar *)ref_t_ch);
					#endif
					EarthView::World::Spatial3D::DataExchange::ShapeFieldsList *pObjectX = (EarthView::World::Spatial3D::DataExchange::ShapeFieldsList*) pObjXXXX;
					pObjectX->insert(pos, ref_t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ShapeFieldsList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::Spatial3D::DataExchange::ShapeFieldsList *pObjectX = (EarthView::World::Spatial3D::DataExchange::ShapeFieldsList*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_ShapeFieldsList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::DataExchange::ShapeFieldsList *pObjectX = (EarthView::World::Spatial3D::DataExchange::ShapeFieldsList*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_ShapeFieldsList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::World::Spatial3D::DataExchange::ShapeFieldsList& pObjectX = *(EarthView::World::Spatial3D::DataExchange::ShapeFieldsList*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					const EVString& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_ShapeFieldsList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial3D::DataExchange::ShapeFieldsList *pObjectX = (EarthView::World::Spatial3D::DataExchange::ShapeFieldsList*) pObjXXXX;
					const EVString& __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_ShapeFieldsList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::DataExchange::ShapeFieldsList *pObjectX = (EarthView::World::Spatial3D::DataExchange::ShapeFieldsList*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ShapeFieldsList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Spatial3D::DataExchange::ShapeFieldsList *pObjectX = (EarthView::World::Spatial3D::DataExchange::ShapeFieldsList*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ShapeFieldsList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::ShapeFieldsList *pObjectX = (EarthView::World::Spatial3D::DataExchange::ShapeFieldsList*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_EntityMetaDataList_push_1back_1CEntityMetaData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong data_j)
				{
					EarthView::World::Spatial3D::DataExchange::CEntityMetaData data = *(EarthView::World::Spatial3D::DataExchange::CEntityMetaData*) data_j;
					EarthView::World::Spatial3D::DataExchange::EntityMetaDataList *pObjectX = (EarthView::World::Spatial3D::DataExchange::EntityMetaDataList*) pObjXXXX;
					pObjectX->push_back(data);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_EntityMetaDataList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::EntityMetaDataList *pObjectX = (EarthView::World::Spatial3D::DataExchange::EntityMetaDataList*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_EntityMetaDataList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::EntityMetaDataList *pObjectX = (EarthView::World::Spatial3D::DataExchange::EntityMetaDataList*) pObjXXXX;
					EarthView::World::Spatial3D::DataExchange::CEntityMetaData& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_EntityMetaDataList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::EntityMetaDataList *pObjectX = (EarthView::World::Spatial3D::DataExchange::EntityMetaDataList*) pObjXXXX;
					EarthView::World::Spatial3D::DataExchange::CEntityMetaData& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_EntityMetaDataList_insert_1ev_1uint32_1CEntityMetaData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong ref_t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial3D::DataExchange::CEntityMetaData ref_t = *(EarthView::World::Spatial3D::DataExchange::CEntityMetaData*) ref_t_j;
					EarthView::World::Spatial3D::DataExchange::EntityMetaDataList *pObjectX = (EarthView::World::Spatial3D::DataExchange::EntityMetaDataList*) pObjXXXX;
					pObjectX->insert(pos, ref_t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_EntityMetaDataList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::Spatial3D::DataExchange::EntityMetaDataList *pObjectX = (EarthView::World::Spatial3D::DataExchange::EntityMetaDataList*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_EntityMetaDataList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::DataExchange::EntityMetaDataList *pObjectX = (EarthView::World::Spatial3D::DataExchange::EntityMetaDataList*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_EntityMetaDataList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::World::Spatial3D::DataExchange::EntityMetaDataList& pObjectX = *(EarthView::World::Spatial3D::DataExchange::EntityMetaDataList*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					const EarthView::World::Spatial3D::DataExchange::CEntityMetaData& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_EntityMetaDataList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial3D::DataExchange::EntityMetaDataList *pObjectX = (EarthView::World::Spatial3D::DataExchange::EntityMetaDataList*) pObjXXXX;
					const EarthView::World::Spatial3D::DataExchange::CEntityMetaData& __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_EntityMetaDataList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::DataExchange::EntityMetaDataList *pObjectX = (EarthView::World::Spatial3D::DataExchange::EntityMetaDataList*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_EntityMetaDataList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Spatial3D::DataExchange::EntityMetaDataList *pObjectX = (EarthView::World::Spatial3D::DataExchange::EntityMetaDataList*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_EntityMetaDataList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::EntityMetaDataList *pObjectX = (EarthView::World::Spatial3D::DataExchange::EntityMetaDataList*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_ParseShapeFile_open_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
					const EVString filename = filename_ch;
					__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
					#else
					const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
					const EVString filename = filename_ch;
					__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
					#endif
					EarthView::World::Spatial3D::DataExchange::CParseShapeFile *pObjectX = (EarthView::World::Spatial3D::DataExchange::CParseShapeFile*) pObjXXXX;
					ev_bool __values1 = pObjectX->open(filename);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_ParseShapeFile_readFields_1EVString_1ShapeFieldsList(JNIEnv *__env , jclass __clazz, jstring file_j, jlong fields_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* file_ch = (const ev_char*)__env->GetStringUTFChars(file_j,JNI_FALSE);
					const EVString file = file_ch;
					__env->ReleaseStringUTFChars(file_j, (const char *)file_ch);
					#else
					const ev_wchar* file_ch = (const ev_wchar*)__env->GetStringChars(file_j,JNI_FALSE);
					const EVString file = file_ch;
					__env->ReleaseStringChars(file_j, (const jchar *)file_ch);
					#endif
					EarthView::World::Spatial3D::DataExchange::ShapeFieldsList &fields = *(EarthView::World::Spatial3D::DataExchange::ShapeFieldsList*) fields_j;
					ev_bool __values1 = EarthView::World::Spatial3D::DataExchange::CParseShapeFile::readFields(file, fields);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_dataexchange_ParseShapeFile_readSrsID_1EVString(JNIEnv *__env , jclass __clazz, jstring file_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* file_ch = (const ev_char*)__env->GetStringUTFChars(file_j,JNI_FALSE);
					const EVString file = file_ch;
					__env->ReleaseStringUTFChars(file_j, (const char *)file_ch);
					#else
					const ev_wchar* file_ch = (const ev_wchar*)__env->GetStringChars(file_j,JNI_FALSE);
					const EVString file = file_ch;
					__env->ReleaseStringChars(file_j, (const jchar *)file_ch);
					#endif
					ev_int32 __values1 = EarthView::World::Spatial3D::DataExchange::CParseShapeFile::readSrsID(file);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_dataexchange_ParseShapeFile_readShapeData_1EVString_1CShapeAssignedFields_1EntityMetaDataList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring modelFilePath_j, jlong assignedValue_j, jlong meshEntitis_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* modelFilePath_ch = (const ev_char*)__env->GetStringUTFChars(modelFilePath_j,JNI_FALSE);
					const EVString modelFilePath = modelFilePath_ch;
					__env->ReleaseStringUTFChars(modelFilePath_j, (const char *)modelFilePath_ch);
					#else
					const ev_wchar* modelFilePath_ch = (const ev_wchar*)__env->GetStringChars(modelFilePath_j,JNI_FALSE);
					const EVString modelFilePath = modelFilePath_ch;
					__env->ReleaseStringChars(modelFilePath_j, (const jchar *)modelFilePath_ch);
					#endif
					const EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields &assignedValue = *(EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields*) assignedValue_j;
					EarthView::World::Spatial3D::DataExchange::EntityMetaDataList &meshEntitis = *(EarthView::World::Spatial3D::DataExchange::EntityMetaDataList*) meshEntitis_j;
					EarthView::World::Spatial3D::DataExchange::CParseShapeFile *pObjectX = (EarthView::World::Spatial3D::DataExchange::CParseShapeFile*) pObjXXXX;
					ev_int32 __values1 = pObjectX->readShapeData(modelFilePath, assignedValue, meshEntitis);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
			}
		}
	}
}
