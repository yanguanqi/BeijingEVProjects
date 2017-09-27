/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataset/propertymanager.h"
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
			namespace Dataset
			{
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial3d_dataset_ModelPropertyTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						MPT_MODELTYPE,
						MPT_ENTITYTYPE
					};
					jintArray array = __env->NewIntArray(2);
					__env->SetIntArrayRegion(array, 0, 2, enum_values);
					return array;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_ObjectIDList_push_1back_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					ev_uint32 t = (ev_uint32) t_j;
					EarthView::World::Spatial3D::Dataset::CObjectIDList *pObjectX = (EarthView::World::Spatial3D::Dataset::CObjectIDList*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_ObjectIDList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CObjectIDList *pObjectX = (EarthView::World::Spatial3D::Dataset::CObjectIDList*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_ObjectIDList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CObjectIDList *pObjectX = (EarthView::World::Spatial3D::Dataset::CObjectIDList*) pObjXXXX;
					ev_uint32& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_ObjectIDList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CObjectIDList *pObjectX = (EarthView::World::Spatial3D::Dataset::CObjectIDList*) pObjXXXX;
					ev_uint32& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_ObjectIDList_insert_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					ev_uint32 t = (ev_uint32) t_j;
					EarthView::World::Spatial3D::Dataset::CObjectIDList *pObjectX = (EarthView::World::Spatial3D::Dataset::CObjectIDList*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_ObjectIDList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::Spatial3D::Dataset::CObjectIDList *pObjectX = (EarthView::World::Spatial3D::Dataset::CObjectIDList*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ObjectIDList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::CObjectIDList *pObjectX = (EarthView::World::Spatial3D::Dataset::CObjectIDList*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_ObjectIDList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::World::Spatial3D::Dataset::CObjectIDList& pObjectX = *(EarthView::World::Spatial3D::Dataset::CObjectIDList*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					ev_uint32& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_ObjectIDList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial3D::Dataset::CObjectIDList *pObjectX = (EarthView::World::Spatial3D::Dataset::CObjectIDList*) pObjXXXX;
					ev_uint32& __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_ObjectIDList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::CObjectIDList *pObjectX = (EarthView::World::Spatial3D::Dataset::CObjectIDList*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_ObjectIDList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Spatial3D::Dataset::CObjectIDList *pObjectX = (EarthView::World::Spatial3D::Dataset::CObjectIDList*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_ObjectIDList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Spatial3D::Dataset::CObjectIDList *pObjectX = (EarthView::World::Spatial3D::Dataset::CObjectIDList*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_ObjectIDList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CObjectIDList *pObjectX = (EarthView::World::Spatial3D::Dataset::CObjectIDList*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_PropertyManager_createType_1EVString_1ModelPropertyType_1IFields(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring typeName_j, jint type_j, jlong ptFieldset_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* typeName_ch = (const ev_char*)__env->GetStringUTFChars(typeName_j,JNI_FALSE);
					const EVString typeName = typeName_ch;
					__env->ReleaseStringUTFChars(typeName_j, (const char *)typeName_ch);
					#else
					const ev_wchar* typeName_ch = (const ev_wchar*)__env->GetStringChars(typeName_j,JNI_FALSE);
					const EVString typeName = typeName_ch;
					__env->ReleaseStringChars(typeName_j, (const jchar *)typeName_ch);
					#endif
					EarthView::World::Spatial3D::Dataset::ModelPropertyType type = (EarthView::World::Spatial3D::Dataset::ModelPropertyType) type_j;
					EarthView::World::Spatial::GeoDataset::IFields *ptFieldset = (EarthView::World::Spatial::GeoDataset::IFields*) ptFieldset_j;
					EarthView::World::Spatial3D::Dataset::CPropertyManager *pObjectX = (EarthView::World::Spatial3D::Dataset::CPropertyManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->createType(typeName, type, ptFieldset);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_PropertyManager_updateType_1EVString_1ModelPropertyType_1IFields(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring typeName_j, jint type_j, jlong ptFieldset_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* typeName_ch = (const ev_char*)__env->GetStringUTFChars(typeName_j,JNI_FALSE);
					EVString typeName = typeName_ch;
					__env->ReleaseStringUTFChars(typeName_j, (const char *)typeName_ch);
					#else
					const ev_wchar* typeName_ch = (const ev_wchar*)__env->GetStringChars(typeName_j,JNI_FALSE);
					EVString typeName = typeName_ch;
					__env->ReleaseStringChars(typeName_j, (const jchar *)typeName_ch);
					#endif
					EarthView::World::Spatial3D::Dataset::ModelPropertyType type = (EarthView::World::Spatial3D::Dataset::ModelPropertyType) type_j;
					EarthView::World::Spatial::GeoDataset::IFields *ptFieldset = (EarthView::World::Spatial::GeoDataset::IFields*) ptFieldset_j;
					EarthView::World::Spatial3D::Dataset::CPropertyManager *pObjectX = (EarthView::World::Spatial3D::Dataset::CPropertyManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->updateType(typeName, type, ptFieldset);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_PropertyManager_deleteType_1EVString_1ModelPropertyType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring typeName_j, jint type_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* typeName_ch = (const ev_char*)__env->GetStringUTFChars(typeName_j,JNI_FALSE);
					EVString typeName = typeName_ch;
					__env->ReleaseStringUTFChars(typeName_j, (const char *)typeName_ch);
					#else
					const ev_wchar* typeName_ch = (const ev_wchar*)__env->GetStringChars(typeName_j,JNI_FALSE);
					EVString typeName = typeName_ch;
					__env->ReleaseStringChars(typeName_j, (const jchar *)typeName_ch);
					#endif
					EarthView::World::Spatial3D::Dataset::ModelPropertyType type = (EarthView::World::Spatial3D::Dataset::ModelPropertyType) type_j;
					EarthView::World::Spatial3D::Dataset::CPropertyManager *pObjectX = (EarthView::World::Spatial3D::Dataset::CPropertyManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->deleteType(typeName, type);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_PropertyManager_renameType_1EVString_1EVString_1ModelPropertyType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong oldtypename_j, jlong newtypename_j, jint type_j)
				{
					EVString &oldtypename = *(EVString*) oldtypename_j;
					EVString &newtypename = *(EVString*) newtypename_j;
					EarthView::World::Spatial3D::Dataset::ModelPropertyType type = (EarthView::World::Spatial3D::Dataset::ModelPropertyType) type_j;
					EarthView::World::Spatial3D::Dataset::CPropertyManager *pObjectX = (EarthView::World::Spatial3D::Dataset::CPropertyManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->renameType(oldtypename, newtypename, type);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_PropertyManager_moveModelToType_1ev_1int32_1EVString_1ModelPropertyType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint id_j, jstring typeName_j, jint type_j)
				{
					ev_int32 id = (ev_int32) id_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* typeName_ch = (const ev_char*)__env->GetStringUTFChars(typeName_j,JNI_FALSE);
					EVString typeName = typeName_ch;
					__env->ReleaseStringUTFChars(typeName_j, (const char *)typeName_ch);
					#else
					const ev_wchar* typeName_ch = (const ev_wchar*)__env->GetStringChars(typeName_j,JNI_FALSE);
					EVString typeName = typeName_ch;
					__env->ReleaseStringChars(typeName_j, (const jchar *)typeName_ch);
					#endif
					EarthView::World::Spatial3D::Dataset::ModelPropertyType type = (EarthView::World::Spatial3D::Dataset::ModelPropertyType) type_j;
					EarthView::World::Spatial3D::Dataset::CPropertyManager *pObjectX = (EarthView::World::Spatial3D::Dataset::CPropertyManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->moveModelToType(id, typeName, type);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_PropertyManager_deleteModelID_1ev_1int32_1EVString_1ModelPropertyType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint id_j, jstring typeName_j, jint type_j)
				{
					ev_int32 id = (ev_int32) id_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* typeName_ch = (const ev_char*)__env->GetStringUTFChars(typeName_j,JNI_FALSE);
					EVString typeName = typeName_ch;
					__env->ReleaseStringUTFChars(typeName_j, (const char *)typeName_ch);
					#else
					const ev_wchar* typeName_ch = (const ev_wchar*)__env->GetStringChars(typeName_j,JNI_FALSE);
					EVString typeName = typeName_ch;
					__env->ReleaseStringChars(typeName_j, (const jchar *)typeName_ch);
					#endif
					EarthView::World::Spatial3D::Dataset::ModelPropertyType type = (EarthView::World::Spatial3D::Dataset::ModelPropertyType) type_j;
					EarthView::World::Spatial3D::Dataset::CPropertyManager *pObjectX = (EarthView::World::Spatial3D::Dataset::CPropertyManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->deleteModelID(id, typeName, type);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_PropertyManager_getTypeList_1ModelPropertyType_1StringVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j, jlong typeNames_j)
				{
					EarthView::World::Spatial3D::Dataset::ModelPropertyType type = (EarthView::World::Spatial3D::Dataset::ModelPropertyType) type_j;
					EarthView::World::Core::StringVector &typeNames = *(EarthView::World::Core::StringVector*) typeNames_j;
					EarthView::World::Spatial3D::Dataset::CPropertyManager *pObjectX = (EarthView::World::Spatial3D::Dataset::CPropertyManager*) pObjXXXX;
					pObjectX->getTypeList(type, typeNames);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_PropertyManager_getFieldSet_1EVString_1ModelPropertyType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring typeName_j, jint type_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* typeName_ch = (const ev_char*)__env->GetStringUTFChars(typeName_j,JNI_FALSE);
					EVString typeName = typeName_ch;
					__env->ReleaseStringUTFChars(typeName_j, (const char *)typeName_ch);
					#else
					const ev_wchar* typeName_ch = (const ev_wchar*)__env->GetStringChars(typeName_j,JNI_FALSE);
					EVString typeName = typeName_ch;
					__env->ReleaseStringChars(typeName_j, (const jchar *)typeName_ch);
					#endif
					EarthView::World::Spatial3D::Dataset::ModelPropertyType type = (EarthView::World::Spatial3D::Dataset::ModelPropertyType) type_j;
					EarthView::World::Spatial3D::Dataset::CPropertyManager *pObjectX = (EarthView::World::Spatial3D::Dataset::CPropertyManager*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IFields* __values1 = pObjectX->getFieldSet(typeName, type);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_PropertyManager_addObjectID_1EVString_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring typeName_j, jint id_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* typeName_ch = (const ev_char*)__env->GetStringUTFChars(typeName_j,JNI_FALSE);
					EVString typeName = typeName_ch;
					__env->ReleaseStringUTFChars(typeName_j, (const char *)typeName_ch);
					#else
					const ev_wchar* typeName_ch = (const ev_wchar*)__env->GetStringChars(typeName_j,JNI_FALSE);
					EVString typeName = typeName_ch;
					__env->ReleaseStringChars(typeName_j, (const jchar *)typeName_ch);
					#endif
					ev_int32 id = (ev_int32) id_j;
					EarthView::World::Spatial3D::Dataset::CPropertyManager *pObjectX = (EarthView::World::Spatial3D::Dataset::CPropertyManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->addObjectID(typeName, id);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_PropertyManager_deleteObjectID_1EVString_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring typeName_j, jint id_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* typeName_ch = (const ev_char*)__env->GetStringUTFChars(typeName_j,JNI_FALSE);
					EVString typeName = typeName_ch;
					__env->ReleaseStringUTFChars(typeName_j, (const char *)typeName_ch);
					#else
					const ev_wchar* typeName_ch = (const ev_wchar*)__env->GetStringChars(typeName_j,JNI_FALSE);
					EVString typeName = typeName_ch;
					__env->ReleaseStringChars(typeName_j, (const jchar *)typeName_ch);
					#endif
					ev_int32 id = (ev_int32) id_j;
					EarthView::World::Spatial3D::Dataset::CPropertyManager *pObjectX = (EarthView::World::Spatial3D::Dataset::CPropertyManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->deleteObjectID(typeName, id);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_PropertyManager_getObjectsByType_1EVString_1ModelPropertyType_1CObjectIDList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring typeName_j, jint type_j, jlong objectIDs_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* typeName_ch = (const ev_char*)__env->GetStringUTFChars(typeName_j,JNI_FALSE);
					EVString typeName = typeName_ch;
					__env->ReleaseStringUTFChars(typeName_j, (const char *)typeName_ch);
					#else
					const ev_wchar* typeName_ch = (const ev_wchar*)__env->GetStringChars(typeName_j,JNI_FALSE);
					EVString typeName = typeName_ch;
					__env->ReleaseStringChars(typeName_j, (const jchar *)typeName_ch);
					#endif
					EarthView::World::Spatial3D::Dataset::ModelPropertyType type = (EarthView::World::Spatial3D::Dataset::ModelPropertyType) type_j;
					EarthView::World::Spatial3D::Dataset::CObjectIDList &objectIDs = *(EarthView::World::Spatial3D::Dataset::CObjectIDList*) objectIDs_j;
					EarthView::World::Spatial3D::Dataset::CPropertyManager *pObjectX = (EarthView::World::Spatial3D::Dataset::CPropertyManager*) pObjXXXX;
					pObjectX->getObjectsByType(typeName, type, objectIDs);
				}
			}
		}
	}
}
