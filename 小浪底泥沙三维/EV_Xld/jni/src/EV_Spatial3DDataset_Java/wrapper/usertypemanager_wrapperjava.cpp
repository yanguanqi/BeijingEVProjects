/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataset/usertypemanager.h"
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_UserTypeInfo_setNodeCode_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring nodeCode_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* nodeCode_ch = (const ev_char*)__env->GetStringUTFChars(nodeCode_j,JNI_FALSE);
					EVString nodeCode = nodeCode_ch;
					__env->ReleaseStringUTFChars(nodeCode_j, (const char *)nodeCode_ch);
					#else
					const ev_wchar* nodeCode_ch = (const ev_wchar*)__env->GetStringChars(nodeCode_j,JNI_FALSE);
					EVString nodeCode = nodeCode_ch;
					__env->ReleaseStringChars(nodeCode_j, (const jchar *)nodeCode_ch);
					#endif
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CUserTypeInfo*) pObjXXXX;
					pObjectX->setNodeCode(nodeCode);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataset_UserTypeInfo_getNodeCode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CUserTypeInfo*) pObjXXXX;
					EVString __values1 = pObjectX->getNodeCode();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_UserTypeInfo_setUserType_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring userType_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* userType_ch = (const ev_char*)__env->GetStringUTFChars(userType_j,JNI_FALSE);
					EVString userType = userType_ch;
					__env->ReleaseStringUTFChars(userType_j, (const char *)userType_ch);
					#else
					const ev_wchar* userType_ch = (const ev_wchar*)__env->GetStringChars(userType_j,JNI_FALSE);
					EVString userType = userType_ch;
					__env->ReleaseStringChars(userType_j, (const jchar *)userType_ch);
					#endif
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CUserTypeInfo*) pObjXXXX;
					pObjectX->setUserType(userType);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataset_UserTypeInfo_getUserType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CUserTypeInfo*) pObjXXXX;
					EVString __values1 = pObjectX->getUserType();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_UserTypeInfo_setDescript_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring desc_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* desc_ch = (const ev_char*)__env->GetStringUTFChars(desc_j,JNI_FALSE);
					EVString desc = desc_ch;
					__env->ReleaseStringUTFChars(desc_j, (const char *)desc_ch);
					#else
					const ev_wchar* desc_ch = (const ev_wchar*)__env->GetStringChars(desc_j,JNI_FALSE);
					EVString desc = desc_ch;
					__env->ReleaseStringChars(desc_j, (const jchar *)desc_ch);
					#endif
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CUserTypeInfo*) pObjXXXX;
					pObjectX->setDescript(desc);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataset_UserTypeInfo_getDescript_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CUserTypeInfo*) pObjXXXX;
					EVString __values1 = pObjectX->getDescript();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_UserTypeTree_setParent_1CUserTypeTree(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_parent_j)
				{
					EarthView::World::Spatial3D::Dataset::CUserTypeTree *ref_parent = (EarthView::World::Spatial3D::Dataset::CUserTypeTree*) ref_parent_j;
					EarthView::World::Spatial3D::Dataset::CUserTypeTree *pObjectX = (EarthView::World::Spatial3D::Dataset::CUserTypeTree*) pObjXXXX;
					pObjectX->setParent(ref_parent);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_UserTypeTree_getParent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CUserTypeTree *pObjectX = (EarthView::World::Spatial3D::Dataset::CUserTypeTree*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CUserTypeTree* __values1 = pObjectX->getParent();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_UserTypeTree_addChild_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CUserTypeTree *pObjectX = (EarthView::World::Spatial3D::Dataset::CUserTypeTree*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CUserTypeTree* __values1 = pObjectX->addChild();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_UserTypeTree_getChildNum_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CUserTypeTree *pObjectX = (EarthView::World::Spatial3D::Dataset::CUserTypeTree*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getChildNum();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_UserTypeTree_getChild_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial3D::Dataset::CUserTypeTree *pObjectX = (EarthView::World::Spatial3D::Dataset::CUserTypeTree*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CUserTypeTree* __values1 = pObjectX->getChild(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_UserTypeTree_getInfo_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CUserTypeTree *pObjectX = (EarthView::World::Spatial3D::Dataset::CUserTypeTree*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo* __values1 = pObjectX->getInfo();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_UserTypeTree_deleteChild_1CUserTypeTree(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong Child_j)
				{
					EarthView::World::Spatial3D::Dataset::CUserTypeTree *Child = (EarthView::World::Spatial3D::Dataset::CUserTypeTree*) Child_j;
					EarthView::World::Spatial3D::Dataset::CUserTypeTree *pObjectX = (EarthView::World::Spatial3D::Dataset::CUserTypeTree*) pObjXXXX;
					ev_bool __values1 = pObjectX->deleteChild(Child);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_UserTypeInfoList_push_1back_1CUserTypeInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo &t = *(EarthView::World::Spatial3D::Dataset::CUserTypeInfo*) t_j;
					EarthView::World::Spatial3D::Dataset::CUserTypeInfoList *pObjectX = (EarthView::World::Spatial3D::Dataset::CUserTypeInfoList*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_UserTypeInfoList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CUserTypeInfoList *pObjectX = (EarthView::World::Spatial3D::Dataset::CUserTypeInfoList*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_UserTypeInfoList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CUserTypeInfoList *pObjectX = (EarthView::World::Spatial3D::Dataset::CUserTypeInfoList*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_UserTypeInfoList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CUserTypeInfoList *pObjectX = (EarthView::World::Spatial3D::Dataset::CUserTypeInfoList*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_UserTypeInfoList_insert_1ev_1uint32_1CUserTypeInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo &t = *(EarthView::World::Spatial3D::Dataset::CUserTypeInfo*) t_j;
					EarthView::World::Spatial3D::Dataset::CUserTypeInfoList *pObjectX = (EarthView::World::Spatial3D::Dataset::CUserTypeInfoList*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_UserTypeInfoList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::Spatial3D::Dataset::CUserTypeInfoList *pObjectX = (EarthView::World::Spatial3D::Dataset::CUserTypeInfoList*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_UserTypeInfoList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::CUserTypeInfoList *pObjectX = (EarthView::World::Spatial3D::Dataset::CUserTypeInfoList*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_UserTypeInfoList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::World::Spatial3D::Dataset::CUserTypeInfoList& pObjectX = *(EarthView::World::Spatial3D::Dataset::CUserTypeInfoList*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_UserTypeInfoList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial3D::Dataset::CUserTypeInfoList *pObjectX = (EarthView::World::Spatial3D::Dataset::CUserTypeInfoList*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo& __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_UserTypeInfoList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::CUserTypeInfoList *pObjectX = (EarthView::World::Spatial3D::Dataset::CUserTypeInfoList*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_UserTypeInfoList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Spatial3D::Dataset::CUserTypeInfoList *pObjectX = (EarthView::World::Spatial3D::Dataset::CUserTypeInfoList*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_UserTypeInfoList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Spatial3D::Dataset::CUserTypeInfoList *pObjectX = (EarthView::World::Spatial3D::Dataset::CUserTypeInfoList*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_UserTypeInfoList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CUserTypeInfoList *pObjectX = (EarthView::World::Spatial3D::Dataset::CUserTypeInfoList*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_NodecodeAndTypeMap_push_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jstring val_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* val_ch = (const ev_char*)__env->GetStringUTFChars(val_j,JNI_FALSE);
					EVString val = val_ch;
					__env->ReleaseStringUTFChars(val_j, (const char *)val_ch);
					#else
					const ev_wchar* val_ch = (const ev_wchar*)__env->GetStringChars(val_j,JNI_FALSE);
					EVString val = val_ch;
					__env->ReleaseStringChars(val_j, (const jchar *)val_ch);
					#endif
					EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap *pObjectX = (EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->push(key, val);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_NodecodeAndTypeMap_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap *pObjectX = (EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->exist(key);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_NodecodeAndTypeMap_OperatorAssign_1NodecodeAndTypeMap(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
				{
					EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap& pObjectX = *(EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap*) pObjXXXX;
					const EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap &other = *(EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap*) other_j;
					pObjectX = other;
					EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_NodecodeAndTypeMap_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
				{
					EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap& pObjectX = *(EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap*) pObjXXXX;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EVString& __values1 = pObjectX[key];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_NodecodeAndTypeMap_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap *pObjectX = (EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap*) pObjXXXX;
					EVString& __values1 = pObjectX->get(key);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_NodecodeAndTypeMap_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap *pObjectX = (EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap*) pObjXXXX;
					pObjectX->erase(key);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_NodecodeAndTypeMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap *pObjectX = (EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_NodecodeAndTypeMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap *pObjectX = (EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_NodecodeAndTypeMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap *pObjectX = (EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_UserTypeManager_createType_1EVString_1EVString_1IFields(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring parentNodeCode_j, jstring newType_j, jlong pFlds_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* parentNodeCode_ch = (const ev_char*)__env->GetStringUTFChars(parentNodeCode_j,JNI_FALSE);
					const EVString parentNodeCode = parentNodeCode_ch;
					__env->ReleaseStringUTFChars(parentNodeCode_j, (const char *)parentNodeCode_ch);
					#else
					const ev_wchar* parentNodeCode_ch = (const ev_wchar*)__env->GetStringChars(parentNodeCode_j,JNI_FALSE);
					const EVString parentNodeCode = parentNodeCode_ch;
					__env->ReleaseStringChars(parentNodeCode_j, (const jchar *)parentNodeCode_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* newType_ch = (const ev_char*)__env->GetStringUTFChars(newType_j,JNI_FALSE);
					const EVString newType = newType_ch;
					__env->ReleaseStringUTFChars(newType_j, (const char *)newType_ch);
					#else
					const ev_wchar* newType_ch = (const ev_wchar*)__env->GetStringChars(newType_j,JNI_FALSE);
					const EVString newType = newType_ch;
					__env->ReleaseStringChars(newType_j, (const jchar *)newType_ch);
					#endif
					EarthView::World::Spatial::GeoDataset::IFields *pFlds = (EarthView::World::Spatial::GeoDataset::IFields*) pFlds_j;
					EarthView::World::Spatial3D::Dataset::CUserTypeManager *pObjectX = (EarthView::World::Spatial3D::Dataset::CUserTypeManager*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo __values1 = pObjectX->createType(parentNodeCode, newType, pFlds);
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo *returnvalues = new EarthView::World::Spatial3D::Dataset::CUserTypeInfo(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_UserTypeManager_deleteType_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring nodeCode_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* nodeCode_ch = (const ev_char*)__env->GetStringUTFChars(nodeCode_j,JNI_FALSE);
					const EVString nodeCode = nodeCode_ch;
					__env->ReleaseStringUTFChars(nodeCode_j, (const char *)nodeCode_ch);
					#else
					const ev_wchar* nodeCode_ch = (const ev_wchar*)__env->GetStringChars(nodeCode_j,JNI_FALSE);
					const EVString nodeCode = nodeCode_ch;
					__env->ReleaseStringChars(nodeCode_j, (const jchar *)nodeCode_ch);
					#endif
					EarthView::World::Spatial3D::Dataset::CUserTypeManager *pObjectX = (EarthView::World::Spatial3D::Dataset::CUserTypeManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->deleteType(nodeCode);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_UserTypeManager_queryByNodeCode_1EVString_1CUserTypeInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring nodeCode_j, jlong info_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* nodeCode_ch = (const ev_char*)__env->GetStringUTFChars(nodeCode_j,JNI_FALSE);
					const EVString nodeCode = nodeCode_ch;
					__env->ReleaseStringUTFChars(nodeCode_j, (const char *)nodeCode_ch);
					#else
					const ev_wchar* nodeCode_ch = (const ev_wchar*)__env->GetStringChars(nodeCode_j,JNI_FALSE);
					const EVString nodeCode = nodeCode_ch;
					__env->ReleaseStringChars(nodeCode_j, (const jchar *)nodeCode_ch);
					#endif
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo &info = *(EarthView::World::Spatial3D::Dataset::CUserTypeInfo*) info_j;
					EarthView::World::Spatial3D::Dataset::CUserTypeManager *pObjectX = (EarthView::World::Spatial3D::Dataset::CUserTypeManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->queryByNodeCode(nodeCode, info);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_UserTypeManager_queryByNodeDesc_1EVString_1CUserTypeInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring desc_j, jlong info_j)
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
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo &info = *(EarthView::World::Spatial3D::Dataset::CUserTypeInfo*) info_j;
					EarthView::World::Spatial3D::Dataset::CUserTypeManager *pObjectX = (EarthView::World::Spatial3D::Dataset::CUserTypeManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->queryByNodeDesc(desc, info);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_UserTypeManager_queryByType_1EVString_1CUserTypeInfoList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring type_j, jlong infos_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* type_ch = (const ev_char*)__env->GetStringUTFChars(type_j,JNI_FALSE);
					const EVString type = type_ch;
					__env->ReleaseStringUTFChars(type_j, (const char *)type_ch);
					#else
					const ev_wchar* type_ch = (const ev_wchar*)__env->GetStringChars(type_j,JNI_FALSE);
					const EVString type = type_ch;
					__env->ReleaseStringChars(type_j, (const jchar *)type_ch);
					#endif
					EarthView::World::Spatial3D::Dataset::CUserTypeInfoList &infos = *(EarthView::World::Spatial3D::Dataset::CUserTypeInfoList*) infos_j;
					EarthView::World::Spatial3D::Dataset::CUserTypeManager *pObjectX = (EarthView::World::Spatial3D::Dataset::CUserTypeManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->queryByType(type, infos);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_UserTypeManager_getRootType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CUserTypeManager *pObjectX = (EarthView::World::Spatial3D::Dataset::CUserTypeManager*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo __values1 = pObjectX->getRootType();
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo *returnvalues = new EarthView::World::Spatial3D::Dataset::CUserTypeInfo(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_UserTypeManager_getChildType_1EVString_1CUserTypeInfoList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring nodeCode_j, jlong typeInfoList_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* nodeCode_ch = (const ev_char*)__env->GetStringUTFChars(nodeCode_j,JNI_FALSE);
					const EVString nodeCode = nodeCode_ch;
					__env->ReleaseStringUTFChars(nodeCode_j, (const char *)nodeCode_ch);
					#else
					const ev_wchar* nodeCode_ch = (const ev_wchar*)__env->GetStringChars(nodeCode_j,JNI_FALSE);
					const EVString nodeCode = nodeCode_ch;
					__env->ReleaseStringChars(nodeCode_j, (const jchar *)nodeCode_ch);
					#endif
					EarthView::World::Spatial3D::Dataset::CUserTypeInfoList &typeInfoList = *(EarthView::World::Spatial3D::Dataset::CUserTypeInfoList*) typeInfoList_j;
					EarthView::World::Spatial3D::Dataset::CUserTypeManager *pObjectX = (EarthView::World::Spatial3D::Dataset::CUserTypeManager*) pObjXXXX;
					pObjectX->getChildType(nodeCode, typeInfoList);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_UserTypeManager_updateTypeDesc_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring nodeCode_j, jstring desc_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* nodeCode_ch = (const ev_char*)__env->GetStringUTFChars(nodeCode_j,JNI_FALSE);
					const EVString nodeCode = nodeCode_ch;
					__env->ReleaseStringUTFChars(nodeCode_j, (const char *)nodeCode_ch);
					#else
					const ev_wchar* nodeCode_ch = (const ev_wchar*)__env->GetStringChars(nodeCode_j,JNI_FALSE);
					const EVString nodeCode = nodeCode_ch;
					__env->ReleaseStringChars(nodeCode_j, (const jchar *)nodeCode_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* desc_ch = (const ev_char*)__env->GetStringUTFChars(desc_j,JNI_FALSE);
					const EVString desc = desc_ch;
					__env->ReleaseStringUTFChars(desc_j, (const char *)desc_ch);
					#else
					const ev_wchar* desc_ch = (const ev_wchar*)__env->GetStringChars(desc_j,JNI_FALSE);
					const EVString desc = desc_ch;
					__env->ReleaseStringChars(desc_j, (const jchar *)desc_ch);
					#endif
					EarthView::World::Spatial3D::Dataset::CUserTypeManager *pObjectX = (EarthView::World::Spatial3D::Dataset::CUserTypeManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->updateTypeDesc(nodeCode, desc);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_UserTypeManager_getTypeFilds_1EVString_1CFields(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring nodecode_j, jlong flds_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* nodecode_ch = (const ev_char*)__env->GetStringUTFChars(nodecode_j,JNI_FALSE);
					const EVString nodecode = nodecode_ch;
					__env->ReleaseStringUTFChars(nodecode_j, (const char *)nodecode_ch);
					#else
					const ev_wchar* nodecode_ch = (const ev_wchar*)__env->GetStringChars(nodecode_j,JNI_FALSE);
					const EVString nodecode = nodecode_ch;
					__env->ReleaseStringChars(nodecode_j, (const jchar *)nodecode_ch);
					#endif
					EarthView::World::Spatial::GeoDataset::CFields *flds = (EarthView::World::Spatial::GeoDataset::CFields*) flds_j;
					EarthView::World::Spatial3D::Dataset::CUserTypeManager *pObjectX = (EarthView::World::Spatial3D::Dataset::CUserTypeManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->getTypeFilds(nodecode, flds);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_UserTypeManager_isExistType_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring type_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* type_ch = (const ev_char*)__env->GetStringUTFChars(type_j,JNI_FALSE);
					const EVString type = type_ch;
					__env->ReleaseStringUTFChars(type_j, (const char *)type_ch);
					#else
					const ev_wchar* type_ch = (const ev_wchar*)__env->GetStringChars(type_j,JNI_FALSE);
					const EVString type = type_ch;
					__env->ReleaseStringChars(type_j, (const jchar *)type_ch);
					#endif
					EarthView::World::Spatial3D::Dataset::CUserTypeManager *pObjectX = (EarthView::World::Spatial3D::Dataset::CUserTypeManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->isExistType(type);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_UserTypeManager_updateType_1EVString_1CFields(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring typeName_j, jlong flds_j)
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
					EarthView::World::Spatial::GeoDataset::CFields *flds = (EarthView::World::Spatial::GeoDataset::CFields*) flds_j;
					EarthView::World::Spatial3D::Dataset::CUserTypeManager *pObjectX = (EarthView::World::Spatial3D::Dataset::CUserTypeManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->updateType(typeName, flds);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_UserTypeManager_deleteTypeField_1EVString_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring typeName_j, jint meshID_j)
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
					ev_int32 meshID = (ev_int32) meshID_j;
					EarthView::World::Spatial3D::Dataset::CUserTypeManager *pObjectX = (EarthView::World::Spatial3D::Dataset::CUserTypeManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->deleteTypeField(typeName, meshID);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_UserTypeManager_addTypeField_1EVString_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring typeName_j, jint meshID_j)
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
					ev_int32 meshID = (ev_int32) meshID_j;
					EarthView::World::Spatial3D::Dataset::CUserTypeManager *pObjectX = (EarthView::World::Spatial3D::Dataset::CUserTypeManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->addTypeField(typeName, meshID);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_dataset_UserTypeManager_getTypeTableName_1StringVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tables_j)
				{
					EarthView::World::Core::StringVector &tables = *(EarthView::World::Core::StringVector*) tables_j;
					EarthView::World::Spatial3D::Dataset::CUserTypeManager *pObjectX = (EarthView::World::Spatial3D::Dataset::CUserTypeManager*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getTypeTableName(tables);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_dataset_UserTypeManager_getTableFields_1EVString_1IFields(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring tab_j, jlong flds_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* tab_ch = (const ev_char*)__env->GetStringUTFChars(tab_j,JNI_FALSE);
					const EVString tab = tab_ch;
					__env->ReleaseStringUTFChars(tab_j, (const char *)tab_ch);
					#else
					const ev_wchar* tab_ch = (const ev_wchar*)__env->GetStringChars(tab_j,JNI_FALSE);
					const EVString tab = tab_ch;
					__env->ReleaseStringChars(tab_j, (const jchar *)tab_ch);
					#endif
					EarthView::World::Spatial::GeoDataset::IFields *flds = (EarthView::World::Spatial::GeoDataset::IFields*) flds_j;
					EarthView::World::Spatial3D::Dataset::CUserTypeManager *pObjectX = (EarthView::World::Spatial3D::Dataset::CUserTypeManager*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getTableFields(tab, flds);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_dataset_UserTypeManager_getNodeCodeAndTypeMap_1NodecodeAndTypeMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong nodecodeandtypemap_j)
				{
					EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap &nodecodeandtypemap = *(EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap*) nodecodeandtypemap_j;
					EarthView::World::Spatial3D::Dataset::CUserTypeManager *pObjectX = (EarthView::World::Spatial3D::Dataset::CUserTypeManager*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getNodeCodeAndTypeMap(nodecodeandtypemap);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
			}
		}
	}
}
