/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/obliquexmlparser.h"
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
			namespace ModelManager
			{
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial3d_modelmanager_OBQDataTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						OBQ_SMART3D,
						OBQ_QSLIM,
						OBQ_QSLIM_MERGE,
						OBQ_QSLIM_SHAREDTEXTURE
					};
					jintArray array = __env->NewIntArray(4);
					__env->SetIntArrayRegion(array, 0, 4, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodIndex_get_1mMinRange_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex *pObjectX = (EarthView::World::Spatial3D::ModelManager::LodIndex*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mMinRange);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodIndex_set_1mMinRange_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex *pObjectX = (EarthView::World::Spatial3D::ModelManager::LodIndex*)pObjXXXX;
					pObjectX->mMinRange = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodIndex_get_1mRadius_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex *pObjectX = (EarthView::World::Spatial3D::ModelManager::LodIndex*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mRadius);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodIndex_set_1mRadius_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex *pObjectX = (EarthView::World::Spatial3D::ModelManager::LodIndex*)pObjXXXX;
					pObjectX->mRadius = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodIndex_get_1mCenter_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex *pObjectX = (EarthView::World::Spatial3D::ModelManager::LodIndex*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mCenter);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodIndex_set_1mCenter_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex *pObjectX = (EarthView::World::Spatial3D::ModelManager::LodIndex*)pObjXXXX;
					pObjectX->mCenter = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodIndex_get_1mModelPath_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex *pObjectX = (EarthView::World::Spatial3D::ModelManager::LodIndex*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mModelPath;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodIndex_set_1mModelPath_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex *pObjectX = (EarthView::World::Spatial3D::ModelManager::LodIndex*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->mModelPath = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodIndex_get_1mID_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex *pObjectX = (EarthView::World::Spatial3D::ModelManager::LodIndex*)pObjXXXX;
					jlong __values1_j = (jlong) (pObjectX->mID);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodIndex_set_1mID_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex *pObjectX = (EarthView::World::Spatial3D::ModelManager::LodIndex*)pObjXXXX;
					pObjectX->mID = (ev_uint32)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodIndex_get_1mRecordID_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex *pObjectX = (EarthView::World::Spatial3D::ModelManager::LodIndex*)pObjXXXX;
					jlong __values1_j = (jlong) (pObjectX->mRecordID);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodIndex_set_1mRecordID_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex *pObjectX = (EarthView::World::Spatial3D::ModelManager::LodIndex*)pObjXXXX;
					pObjectX->mRecordID = (ev_uint32)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodIndex_get_1mLevel_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex *pObjectX = (EarthView::World::Spatial3D::ModelManager::LodIndex*)pObjXXXX;
					jlong __values1_j = (jlong) (pObjectX->mLevel);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodIndex_set_1mLevel_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex *pObjectX = (EarthView::World::Spatial3D::ModelManager::LodIndex*)pObjXXXX;
					pObjectX->mLevel = (ev_uint32)__values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodIndex_get_1mXmin_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex *pObjectX = (EarthView::World::Spatial3D::ModelManager::LodIndex*)pObjXXXX;
					jfloat __values1_j = (jfloat)(pObjectX->mXmin);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodIndex_set_1mXmin_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex *pObjectX = (EarthView::World::Spatial3D::ModelManager::LodIndex*)pObjXXXX;
					pObjectX->mXmin = (ev_real32)__values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodIndex_get_1mXmax_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex *pObjectX = (EarthView::World::Spatial3D::ModelManager::LodIndex*)pObjXXXX;
					jfloat __values1_j = (jfloat)(pObjectX->mXmax);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodIndex_set_1mXmax_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex *pObjectX = (EarthView::World::Spatial3D::ModelManager::LodIndex*)pObjXXXX;
					pObjectX->mXmax = (ev_real32)__values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodIndex_get_1mYmin_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex *pObjectX = (EarthView::World::Spatial3D::ModelManager::LodIndex*)pObjXXXX;
					jfloat __values1_j = (jfloat)(pObjectX->mYmin);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodIndex_set_1mYmin_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex *pObjectX = (EarthView::World::Spatial3D::ModelManager::LodIndex*)pObjXXXX;
					pObjectX->mYmin = (ev_real32)__values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodIndex_get_1mYmax_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex *pObjectX = (EarthView::World::Spatial3D::ModelManager::LodIndex*)pObjXXXX;
					jfloat __values1_j = (jfloat)(pObjectX->mYmax);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodIndex_set_1mYmax_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex *pObjectX = (EarthView::World::Spatial3D::ModelManager::LodIndex*)pObjXXXX;
					pObjectX->mYmax = (ev_real32)__values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodIndex_get_1mZmin_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex *pObjectX = (EarthView::World::Spatial3D::ModelManager::LodIndex*)pObjXXXX;
					jfloat __values1_j = (jfloat)(pObjectX->mZmin);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodIndex_set_1mZmin_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex *pObjectX = (EarthView::World::Spatial3D::ModelManager::LodIndex*)pObjXXXX;
					pObjectX->mZmin = (ev_real32)__values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodIndex_get_1mZmax_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex *pObjectX = (EarthView::World::Spatial3D::ModelManager::LodIndex*)pObjXXXX;
					jfloat __values1_j = (jfloat)(pObjectX->mZmax);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodIndex_set_1mZmax_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex *pObjectX = (EarthView::World::Spatial3D::ModelManager::LodIndex*)pObjXXXX;
					pObjectX->mZmax = (ev_real32)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodIndex_get_1mpOffMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex *pObjectX = (EarthView::World::Spatial3D::ModelManager::LodIndex*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->mpOffMatrix);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodIndex_set_1mpOffMatrix_1CMatrix4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex *pObjectX = (EarthView::World::Spatial3D::ModelManager::LodIndex*)pObjXXXX;
					pObjectX->mpOffMatrix = (EarthView::World::Spatial::Math::CMatrix4*) __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodIndex_setParent_1LodIndex(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong parent_j)
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex *parent = (EarthView::World::Spatial3D::ModelManager::LodIndex*) parent_j;
					EarthView::World::Spatial3D::ModelManager::LodIndex *pObjectX = (EarthView::World::Spatial3D::ModelManager::LodIndex*) pObjXXXX;
					pObjectX->setParent(parent);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodIndex_getParent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex *pObjectX = (EarthView::World::Spatial3D::ModelManager::LodIndex*) pObjXXXX;
					EarthView::World::Spatial3D::ModelManager::LodIndex* __values1 = pObjectX->getParent();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodIndex_getNumChild_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex *pObjectX = (EarthView::World::Spatial3D::ModelManager::LodIndex*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getNumChild();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodIndex_getChild_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong i_j)
				{
					ev_uint32 i = (ev_uint32) i_j;
					EarthView::World::Spatial3D::ModelManager::LodIndex *pObjectX = (EarthView::World::Spatial3D::ModelManager::LodIndex*) pObjXXXX;
					EarthView::World::Spatial3D::ModelManager::LodIndex* __values1 = pObjectX->getChild(i);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodIndex_addChild_1LodIndex(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong child_j)
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex *child = (EarthView::World::Spatial3D::ModelManager::LodIndex*) child_j;
					EarthView::World::Spatial3D::ModelManager::LodIndex *pObjectX = (EarthView::World::Spatial3D::ModelManager::LodIndex*) pObjXXXX;
					pObjectX->addChild(child);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodIndexVector_push_1back_1LodIndex(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex *&t = *(EarthView::World::Spatial3D::ModelManager::LodIndex**) t_j;
					EarthView::World::Spatial3D::ModelManager::LodIndexVector *pObjectX = (EarthView::World::Spatial3D::ModelManager::LodIndexVector*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodIndexVector_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::LodIndexVector *pObjectX = (EarthView::World::Spatial3D::ModelManager::LodIndexVector*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodIndexVector_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::LodIndexVector *pObjectX = (EarthView::World::Spatial3D::ModelManager::LodIndexVector*) pObjXXXX;
					EarthView::World::Spatial3D::ModelManager::LodIndex*& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodIndexVector_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::LodIndexVector *pObjectX = (EarthView::World::Spatial3D::ModelManager::LodIndexVector*) pObjXXXX;
					EarthView::World::Spatial3D::ModelManager::LodIndex*& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodIndexVector_at_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial3D::ModelManager::LodIndexVector *pObjectX = (EarthView::World::Spatial3D::ModelManager::LodIndexVector*) pObjXXXX;
					EarthView::World::Spatial3D::ModelManager::LodIndex*& __values1 = pObjectX->at(pos);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodIndexVector_insert_1ev_1uint32_1LodIndex(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial3D::ModelManager::LodIndex *&t = *(EarthView::World::Spatial3D::ModelManager::LodIndex**) t_j;
					EarthView::World::Spatial3D::ModelManager::LodIndexVector *pObjectX = (EarthView::World::Spatial3D::ModelManager::LodIndexVector*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodIndexVector_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::LodIndexVector *pObjectX = (EarthView::World::Spatial3D::ModelManager::LodIndexVector*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodIndexVector_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::LodIndexVector *pObjectX = (EarthView::World::Spatial3D::ModelManager::LodIndexVector*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodIndexVector_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Spatial3D::ModelManager::LodIndexVector *pObjectX = (EarthView::World::Spatial3D::ModelManager::LodIndexVector*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodIndexVector_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::LodIndexVector *pObjectX = (EarthView::World::Spatial3D::ModelManager::LodIndexVector*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodIndexVector_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Spatial3D::ModelManager::LodIndexVector *pObjectX = (EarthView::World::Spatial3D::ModelManager::LodIndexVector*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodIndexVector_release_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::LodIndexVector *pObjectX = (EarthView::World::Spatial3D::ModelManager::LodIndexVector*) pObjXXXX;
					pObjectX->release();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_TileLodXmlParser_setXmlFile_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring file_j)
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
					EarthView::World::Spatial3D::ModelManager::CTileLodXmlParser *pObjectX = (EarthView::World::Spatial3D::ModelManager::CTileLodXmlParser*) pObjXXXX;
					pObjectX->setXmlFile(file);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_modelmanager_TileLodXmlParser_getXmlFile_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CTileLodXmlParser *pObjectX = (EarthView::World::Spatial3D::ModelManager::CTileLodXmlParser*) pObjXXXX;
					EVString __values1 = pObjectX->getXmlFile();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_modelmanager_TileLodXmlParser_getTileName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CTileLodXmlParser *pObjectX = (EarthView::World::Spatial3D::ModelManager::CTileLodXmlParser*) pObjXXXX;
					EVString __values1 = pObjectX->getTileName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_modelmanager_TileLodXmlParser_getVersion_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CTileLodXmlParser *pObjectX = (EarthView::World::Spatial3D::ModelManager::CTileLodXmlParser*) pObjXXXX;
					EVString __values1 = pObjectX->getVersion();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_TileLodXmlParser_getRootNode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CTileLodXmlParser *pObjectX = (EarthView::World::Spatial3D::ModelManager::CTileLodXmlParser*) pObjXXXX;
					EarthView::World::Spatial3D::ModelManager::LodIndex* __values1 = pObjectX->getRootNode();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_modelmanager_TileLodXmlParser_get_1mMaxLevel_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CTileLodXmlParser *pObjectX = (EarthView::World::Spatial3D::ModelManager::CTileLodXmlParser*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mMaxLevel);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_TileLodXmlParser_set_1mMaxLevel_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::CTileLodXmlParser *pObjectX = (EarthView::World::Spatial3D::ModelManager::CTileLodXmlParser*)pObjXXXX;
					pObjectX->mMaxLevel = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_modelmanager_TileLodXmlParser_get_1mStartQuadLevel_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CTileLodXmlParser *pObjectX = (EarthView::World::Spatial3D::ModelManager::CTileLodXmlParser*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mStartQuadLevel);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_TileLodXmlParser_set_1mStartQuadLevel_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::CTileLodXmlParser *pObjectX = (EarthView::World::Spatial3D::ModelManager::CTileLodXmlParser*)pObjXXXX;
					pObjectX->mStartQuadLevel = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodTreeExportXmlParser_setXmlFile_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring file_j)
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
					EarthView::World::Spatial3D::ModelManager::CLodTreeExportXmlParser *pObjectX = (EarthView::World::Spatial3D::ModelManager::CLodTreeExportXmlParser*) pObjXXXX;
					pObjectX->setXmlFile(file);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodTreeExportXmlParser_getXmlFile_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CLodTreeExportXmlParser *pObjectX = (EarthView::World::Spatial3D::ModelManager::CLodTreeExportXmlParser*) pObjXXXX;
					EVString __values1 = pObjectX->getXmlFile();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodTreeExportXmlParser_getSRS_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CLodTreeExportXmlParser *pObjectX = (EarthView::World::Spatial3D::ModelManager::CLodTreeExportXmlParser*) pObjXXXX;
					EVString __values1 = pObjectX->getSRS();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodTreeExportXmlParser_getWorldPos_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong lat_j, jlong lon_j, jlong alt_j)
				{
					ev_real64 &lat = *(ev_real64*) lat_j;
					ev_real64 &lon = *(ev_real64*) lon_j;
					ev_real64 &alt = *(ev_real64*) alt_j;
					EarthView::World::Spatial3D::ModelManager::CLodTreeExportXmlParser *pObjectX = (EarthView::World::Spatial3D::ModelManager::CLodTreeExportXmlParser*) pObjXXXX;
					pObjectX->getWorldPos(lat, lon, alt);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodTreeExportXmlParser_getScale_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong scaleX_j, jlong scaleY_j, jlong scaleZ_j)
				{
					ev_real64 &scaleX = *(ev_real64*) scaleX_j;
					ev_real64 &scaleY = *(ev_real64*) scaleY_j;
					ev_real64 &scaleZ = *(ev_real64*) scaleZ_j;
					EarthView::World::Spatial3D::ModelManager::CLodTreeExportXmlParser *pObjectX = (EarthView::World::Spatial3D::ModelManager::CLodTreeExportXmlParser*) pObjXXXX;
					pObjectX->getScale(scaleX, scaleY, scaleZ);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodTreeExportXmlParser_getRot_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rotW_j, jlong rotX_j, jlong rotY_j, jlong rotZ_j)
				{
					ev_real64 &rotW = *(ev_real64*) rotW_j;
					ev_real64 &rotX = *(ev_real64*) rotX_j;
					ev_real64 &rotY = *(ev_real64*) rotY_j;
					ev_real64 &rotZ = *(ev_real64*) rotZ_j;
					EarthView::World::Spatial3D::ModelManager::CLodTreeExportXmlParser *pObjectX = (EarthView::World::Spatial3D::ModelManager::CLodTreeExportXmlParser*) pObjXXXX;
					pObjectX->getRot(rotW, rotX, rotY, rotZ);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodTreeExportXmlParser_getOriginMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CLodTreeExportXmlParser *pObjectX = (EarthView::World::Spatial3D::ModelManager::CLodTreeExportXmlParser*) pObjXXXX;
					EVString __values1 = pObjectX->getOriginMode();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodTreeExportXmlParser_getVersion_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CLodTreeExportXmlParser *pObjectX = (EarthView::World::Spatial3D::ModelManager::CLodTreeExportXmlParser*) pObjXXXX;
					EVString __values1 = pObjectX->getVersion();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodTreeExportXmlParser_getTileArray_1CStringArray_1CStringArray(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tileNames_j, jlong tilePaths_j)
				{
					EarthView::World::Core::CStringArray &tileNames = *(EarthView::World::Core::CStringArray*) tileNames_j;
					EarthView::World::Core::CStringArray &tilePaths = *(EarthView::World::Core::CStringArray*) tilePaths_j;
					EarthView::World::Spatial3D::ModelManager::CLodTreeExportXmlParser *pObjectX = (EarthView::World::Spatial3D::ModelManager::CLodTreeExportXmlParser*) pObjXXXX;
					pObjectX->getTileArray(tileNames, tilePaths);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodTreeExportXmlParser_getDataType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CLodTreeExportXmlParser *pObjectX = (EarthView::World::Spatial3D::ModelManager::CLodTreeExportXmlParser*) pObjXXXX;
					EarthView::World::Spatial3D::ModelManager::OBQDataType __values1 = pObjectX->getDataType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodIndexStreamParser_encodeToStream_1LodIndexVector(JNIEnv *__env , jclass __clazz, jlong lv_j)
				{
					const EarthView::World::Spatial3D::ModelManager::LodIndexVector &lv = *(EarthView::World::Spatial3D::ModelManager::LodIndexVector*) lv_j;
					EarthView::World::Core::MemoryDataStreamPtr __values1 = EarthView::World::Spatial3D::ModelManager::LodIndexStreamParser::encodeToStream(lv);
					EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodIndexStreamParser_decodeFromStream_1MemoryDataStreamPtr(JNIEnv *__env , jclass __clazz, jlong mem_j)
				{
					const EarthView::World::Core::MemoryDataStreamPtr &mem = *(EarthView::World::Core::MemoryDataStreamPtr*) mem_j;
					EarthView::World::Spatial3D::ModelManager::LodIndexVector __values1 = EarthView::World::Spatial3D::ModelManager::LodIndexStreamParser::decodeFromStream(mem);
					EarthView::World::Spatial3D::ModelManager::LodIndexVector *returnvalues = new EarthView::World::Spatial3D::ModelManager::LodIndexVector(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
		}
	}
}
