/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/pose.h"
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
			namespace Math
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pose_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPose *pObjectX = (EarthView::World::Graphic::CPose*) pObjXXXX;
				const EVString& __values1 = pObjectX->getName();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Pose_getTarget_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPose *pObjectX = (EarthView::World::Graphic::CPose*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->getTarget();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pose_00024VertexOffsetMap_push_1ev_1size_1t_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong key_j, jlong val_j)
			{
				const ev_size_t key = (const ev_size_t) key_j;
				const EarthView::World::Spatial::Math::CVector3 &val = *(EarthView::World::Spatial::Math::CVector3*) val_j;
				EarthView::World::Graphic::CPose::VertexOffsetMap *pObjectX = (EarthView::World::Graphic::CPose::VertexOffsetMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pose_00024VertexOffsetMap_exist_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong key_j)
			{
				const ev_size_t key = (const ev_size_t) key_j;
				EarthView::World::Graphic::CPose::VertexOffsetMap *pObjectX = (EarthView::World::Graphic::CPose::VertexOffsetMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pose_00024VertexOffsetMap_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong key_j )
			{
				EarthView::World::Graphic::CPose::VertexOffsetMap& pObjectX = *(EarthView::World::Graphic::CPose::VertexOffsetMap*) pObjXXXX;
				const ev_size_t key = (const ev_size_t) key_j;
				EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pose_00024VertexOffsetMap_get_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong key_j)
			{
				const ev_size_t key = (const ev_size_t) key_j;
				EarthView::World::Graphic::CPose::VertexOffsetMap *pObjectX = (EarthView::World::Graphic::CPose::VertexOffsetMap*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pose_00024VertexOffsetMap_erase_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong key_j)
			{
				const ev_size_t key = (const ev_size_t) key_j;
				EarthView::World::Graphic::CPose::VertexOffsetMap *pObjectX = (EarthView::World::Graphic::CPose::VertexOffsetMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pose_00024VertexOffsetMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPose::VertexOffsetMap *pObjectX = (EarthView::World::Graphic::CPose::VertexOffsetMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pose_00024VertexOffsetMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPose::VertexOffsetMap *pObjectX = (EarthView::World::Graphic::CPose::VertexOffsetMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pose_00024VertexOffsetMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPose::VertexOffsetMap *pObjectX = (EarthView::World::Graphic::CPose::VertexOffsetMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pose_00024VertexOffsetPair_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPose::VertexOffsetPair *pObjectX = (EarthView::World::Graphic::CPose::VertexOffsetPair*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->first);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pose_00024VertexOffsetPair_set_1first_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CPose::VertexOffsetPair *pObjectX = (EarthView::World::Graphic::CPose::VertexOffsetPair*)pObjXXXX;
				pObjectX->first = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pose_00024VertexOffsetPair_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPose::VertexOffsetPair *pObjectX = (EarthView::World::Graphic::CPose::VertexOffsetPair*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->second);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pose_00024VertexOffsetPair_set_1second_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CPose::VertexOffsetPair *pObjectX = (EarthView::World::Graphic::CPose::VertexOffsetPair*)pObjXXXX;
				pObjectX->second = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pose_00024VertexOffsetIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPose::VertexOffsetIterator *pObjectX = (EarthView::World::Graphic::CPose::VertexOffsetIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pose_00024VertexOffsetIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPose::VertexOffsetIterator *pObjectX = (EarthView::World::Graphic::CPose::VertexOffsetIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_Pose_00024VertexOffsetIterator_nextKey_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPose::VertexOffsetIterator *pObjectX = (EarthView::World::Graphic::CPose::VertexOffsetIterator*) pObjXXXX;
				EVString __values1 = pObjectX->nextKey();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pose_00024VertexOffsetIterator_nextValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPose::VertexOffsetIterator *pObjectX = (EarthView::World::Graphic::CPose::VertexOffsetIterator*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->nextValue();
				EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pose_00024VertexOffsetIterator_nextValuePtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPose::VertexOffsetIterator *pObjectX = (EarthView::World::Graphic::CPose::VertexOffsetIterator*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector3* __values1 = pObjectX->nextValuePtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pose_00024VertexOffsetIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPose::VertexOffsetIterator *pObjectX = (EarthView::World::Graphic::CPose::VertexOffsetIterator*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->next();
				EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pose_00024VertexOffsetIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPose::VertexOffsetIterator *pObjectX = (EarthView::World::Graphic::CPose::VertexOffsetIterator*) pObjXXXX;
				const EarthView::World::Graphic::CPose::VertexOffsetPair& __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pose_00024VertexOffsetIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPose::VertexOffsetIterator *pObjectX = (EarthView::World::Graphic::CPose::VertexOffsetIterator*) pObjXXXX;
				const EarthView::World::Graphic::CPose::VertexOffsetPair& __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pose_00024VertexOffsetIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPose::VertexOffsetIterator *pObjectX = (EarthView::World::Graphic::CPose::VertexOffsetIterator*) pObjXXXX;
				const EarthView::World::Graphic::CPose::VertexOffsetPair& __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pose_00024ConstVertexOffsetIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPose::ConstVertexOffsetIterator *pObjectX = (EarthView::World::Graphic::CPose::ConstVertexOffsetIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pose_00024ConstVertexOffsetIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPose::ConstVertexOffsetIterator *pObjectX = (EarthView::World::Graphic::CPose::ConstVertexOffsetIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pose_00024ConstVertexOffsetIterator_nextKey_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPose::ConstVertexOffsetIterator *pObjectX = (EarthView::World::Graphic::CPose::ConstVertexOffsetIterator*) pObjXXXX;
				ev_size_t __values1 = pObjectX->nextKey();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pose_00024ConstVertexOffsetIterator_nextValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPose::ConstVertexOffsetIterator *pObjectX = (EarthView::World::Graphic::CPose::ConstVertexOffsetIterator*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->nextValue();
				EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pose_00024ConstVertexOffsetIterator_nextValuePtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPose::ConstVertexOffsetIterator *pObjectX = (EarthView::World::Graphic::CPose::ConstVertexOffsetIterator*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector3* __values1 = pObjectX->nextValuePtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pose_00024ConstVertexOffsetIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPose::ConstVertexOffsetIterator *pObjectX = (EarthView::World::Graphic::CPose::ConstVertexOffsetIterator*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->next();
				EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pose_00024ConstVertexOffsetIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPose::ConstVertexOffsetIterator *pObjectX = (EarthView::World::Graphic::CPose::ConstVertexOffsetIterator*) pObjXXXX;
				const EarthView::World::Graphic::CPose::VertexOffsetPair& __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pose_00024ConstVertexOffsetIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPose::ConstVertexOffsetIterator *pObjectX = (EarthView::World::Graphic::CPose::ConstVertexOffsetIterator*) pObjXXXX;
				const EarthView::World::Graphic::CPose::VertexOffsetPair& __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pose_00024ConstVertexOffsetIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPose::ConstVertexOffsetIterator *pObjectX = (EarthView::World::Graphic::CPose::ConstVertexOffsetIterator*) pObjXXXX;
				const EarthView::World::Graphic::CPose::VertexOffsetPair& __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pose_00024NormalsMap_push_1ev_1size_1t_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong key_j, jlong val_j)
			{
				const ev_size_t key = (const ev_size_t) key_j;
				const EarthView::World::Spatial::Math::CVector3 &val = *(EarthView::World::Spatial::Math::CVector3*) val_j;
				EarthView::World::Graphic::CPose::NormalsMap *pObjectX = (EarthView::World::Graphic::CPose::NormalsMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pose_00024NormalsMap_exist_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong key_j)
			{
				const ev_size_t key = (const ev_size_t) key_j;
				EarthView::World::Graphic::CPose::NormalsMap *pObjectX = (EarthView::World::Graphic::CPose::NormalsMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pose_00024NormalsMap_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong key_j )
			{
				EarthView::World::Graphic::CPose::NormalsMap& pObjectX = *(EarthView::World::Graphic::CPose::NormalsMap*) pObjXXXX;
				const ev_size_t key = (const ev_size_t) key_j;
				EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pose_00024NormalsMap_get_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong key_j)
			{
				const ev_size_t key = (const ev_size_t) key_j;
				EarthView::World::Graphic::CPose::NormalsMap *pObjectX = (EarthView::World::Graphic::CPose::NormalsMap*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pose_00024NormalsMap_erase_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong key_j)
			{
				const ev_size_t key = (const ev_size_t) key_j;
				EarthView::World::Graphic::CPose::NormalsMap *pObjectX = (EarthView::World::Graphic::CPose::NormalsMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pose_00024NormalsMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPose::NormalsMap *pObjectX = (EarthView::World::Graphic::CPose::NormalsMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pose_00024NormalsMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPose::NormalsMap *pObjectX = (EarthView::World::Graphic::CPose::NormalsMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pose_00024NormalsMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPose::NormalsMap *pObjectX = (EarthView::World::Graphic::CPose::NormalsMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pose_00024NormalsPair_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPose::NormalsPair *pObjectX = (EarthView::World::Graphic::CPose::NormalsPair*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->first);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pose_00024NormalsPair_set_1first_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CPose::NormalsPair *pObjectX = (EarthView::World::Graphic::CPose::NormalsPair*)pObjXXXX;
				pObjectX->first = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pose_00024NormalsPair_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPose::NormalsPair *pObjectX = (EarthView::World::Graphic::CPose::NormalsPair*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->second);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pose_00024NormalsPair_set_1second_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CPose::NormalsPair *pObjectX = (EarthView::World::Graphic::CPose::NormalsPair*)pObjXXXX;
				pObjectX->second = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pose_00024NormalsIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPose::NormalsIterator *pObjectX = (EarthView::World::Graphic::CPose::NormalsIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pose_00024NormalsIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPose::NormalsIterator *pObjectX = (EarthView::World::Graphic::CPose::NormalsIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_Pose_00024NormalsIterator_nextKey_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPose::NormalsIterator *pObjectX = (EarthView::World::Graphic::CPose::NormalsIterator*) pObjXXXX;
				EVString __values1 = pObjectX->nextKey();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pose_00024NormalsIterator_nextValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPose::NormalsIterator *pObjectX = (EarthView::World::Graphic::CPose::NormalsIterator*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->nextValue();
				EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pose_00024NormalsIterator_nextValuePtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPose::NormalsIterator *pObjectX = (EarthView::World::Graphic::CPose::NormalsIterator*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector3* __values1 = pObjectX->nextValuePtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pose_00024NormalsIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPose::NormalsIterator *pObjectX = (EarthView::World::Graphic::CPose::NormalsIterator*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->next();
				EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pose_00024NormalsIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPose::NormalsIterator *pObjectX = (EarthView::World::Graphic::CPose::NormalsIterator*) pObjXXXX;
				const EarthView::World::Graphic::CPose::NormalsPair& __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pose_00024NormalsIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPose::NormalsIterator *pObjectX = (EarthView::World::Graphic::CPose::NormalsIterator*) pObjXXXX;
				const EarthView::World::Graphic::CPose::NormalsPair& __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pose_00024NormalsIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPose::NormalsIterator *pObjectX = (EarthView::World::Graphic::CPose::NormalsIterator*) pObjXXXX;
				const EarthView::World::Graphic::CPose::NormalsPair& __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pose_00024ConstNormalsIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPose::ConstNormalsIterator *pObjectX = (EarthView::World::Graphic::CPose::ConstNormalsIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pose_00024ConstNormalsIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPose::ConstNormalsIterator *pObjectX = (EarthView::World::Graphic::CPose::ConstNormalsIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pose_00024ConstNormalsIterator_nextKey_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPose::ConstNormalsIterator *pObjectX = (EarthView::World::Graphic::CPose::ConstNormalsIterator*) pObjXXXX;
				ev_size_t __values1 = pObjectX->nextKey();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pose_00024ConstNormalsIterator_nextValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPose::ConstNormalsIterator *pObjectX = (EarthView::World::Graphic::CPose::ConstNormalsIterator*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->nextValue();
				EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pose_00024ConstNormalsIterator_nextValuePtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPose::ConstNormalsIterator *pObjectX = (EarthView::World::Graphic::CPose::ConstNormalsIterator*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector3* __values1 = pObjectX->nextValuePtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pose_00024ConstNormalsIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPose::ConstNormalsIterator *pObjectX = (EarthView::World::Graphic::CPose::ConstNormalsIterator*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->next();
				EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pose_00024ConstNormalsIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPose::ConstNormalsIterator *pObjectX = (EarthView::World::Graphic::CPose::ConstNormalsIterator*) pObjXXXX;
				const EarthView::World::Graphic::CPose::NormalsPair& __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pose_00024ConstNormalsIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPose::ConstNormalsIterator *pObjectX = (EarthView::World::Graphic::CPose::ConstNormalsIterator*) pObjXXXX;
				const EarthView::World::Graphic::CPose::NormalsPair& __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pose_00024ConstNormalsIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPose::ConstNormalsIterator *pObjectX = (EarthView::World::Graphic::CPose::ConstNormalsIterator*) pObjXXXX;
				const EarthView::World::Graphic::CPose::NormalsPair& __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pose_getIncludesNormals_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPose *pObjectX = (EarthView::World::Graphic::CPose*) pObjXXXX;
				bool __values1 = pObjectX->getIncludesNormals();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pose_addVertex_1ev_1size_1t_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jlong offset_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const EarthView::World::Spatial::Math::CVector3 &offset = *(EarthView::World::Spatial::Math::CVector3*) offset_j;
				EarthView::World::Graphic::CPose *pObjectX = (EarthView::World::Graphic::CPose*) pObjXXXX;
				pObjectX->addVertex(index, offset);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pose_addVertex_1size_1t_1CVector3_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jlong offset_j, jlong normal_j)
			{
				size_t index = (size_t) index_j;
				const EarthView::World::Spatial::Math::CVector3 &offset = *(EarthView::World::Spatial::Math::CVector3*) offset_j;
				const EarthView::World::Spatial::Math::CVector3 &normal = *(EarthView::World::Spatial::Math::CVector3*) normal_j;
				EarthView::World::Graphic::CPose *pObjectX = (EarthView::World::Graphic::CPose*) pObjXXXX;
				pObjectX->addVertex(index, offset, normal);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pose_removeVertex_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				EarthView::World::Graphic::CPose *pObjectX = (EarthView::World::Graphic::CPose*) pObjXXXX;
				pObjectX->removeVertex(index);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pose_clearVertices_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPose *pObjectX = (EarthView::World::Graphic::CPose*) pObjXXXX;
				pObjectX->clearVertices();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pose_getVertexOffsetIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPose *pObjectX = (EarthView::World::Graphic::CPose*) pObjXXXX;
				EarthView::World::Graphic::CPose::ConstVertexOffsetIterator __values1 = pObjectX->getVertexOffsetIterator();
				EarthView::World::Graphic::CPose::ConstVertexOffsetIterator *returnvalues = new EarthView::World::Graphic::CPose::ConstVertexOffsetIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pose_getVertexOffsets_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPose *pObjectX = (EarthView::World::Graphic::CPose*) pObjXXXX;
				const EarthView::World::Graphic::CPose::VertexOffsetMap& __values1 = pObjectX->getVertexOffsets();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pose_getNormalsIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPose *pObjectX = (EarthView::World::Graphic::CPose*) pObjXXXX;
				EarthView::World::Graphic::CPose::ConstNormalsIterator __values1 = pObjectX->getNormalsIterator();
				EarthView::World::Graphic::CPose::ConstNormalsIterator *returnvalues = new EarthView::World::Graphic::CPose::ConstNormalsIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pose_getNormals_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPose *pObjectX = (EarthView::World::Graphic::CPose*) pObjXXXX;
				const EarthView::World::Graphic::CPose::NormalsMap& __values1 = pObjectX->getNormals();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pose__1getHardwareVertexBuffer_1CVertexData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong origData_j)
			{
				const EarthView::World::Graphic::CVertexData *origData = (const EarthView::World::Graphic::CVertexData*) origData_j;
				const 				EarthView::World::Graphic::CPose *pObjectX = (EarthView::World::Graphic::CPose*) pObjXXXX;
				const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& __values1 = pObjectX->_getHardwareVertexBuffer(origData);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pose_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPose *pObjectX = (EarthView::World::Graphic::CPose*) pObjXXXX;
				EarthView::World::Graphic::CPose* __values1 = pObjectX->clone();
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PoseList_push_1back_1CPose(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::CPose *&t = *(EarthView::World::Graphic::CPose**) t_j;
				EarthView::World::Graphic::PoseList *pObjectX = (EarthView::World::Graphic::PoseList*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PoseList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::PoseList *pObjectX = (EarthView::World::Graphic::PoseList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_PoseList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::PoseList *pObjectX = (EarthView::World::Graphic::PoseList*) pObjXXXX;
				EarthView::World::Graphic::CPose*& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_PoseList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::PoseList *pObjectX = (EarthView::World::Graphic::PoseList*) pObjXXXX;
				EarthView::World::Graphic::CPose*& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PoseList_insert_1ev_1uint32_1CPose(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::CPose *&t = *(EarthView::World::Graphic::CPose**) t_j;
				EarthView::World::Graphic::PoseList *pObjectX = (EarthView::World::Graphic::PoseList*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PoseList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::PoseList *pObjectX = (EarthView::World::Graphic::PoseList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_PoseList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::PoseList *pObjectX = (EarthView::World::Graphic::PoseList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_PoseList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::PoseList& pObjectX = *(EarthView::World::Graphic::PoseList*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CPose*& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_PoseList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::PoseList *pObjectX = (EarthView::World::Graphic::PoseList*) pObjXXXX;
				EarthView::World::Graphic::CPose*& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_PoseList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::PoseList *pObjectX = (EarthView::World::Graphic::PoseList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PoseList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::PoseList *pObjectX = (EarthView::World::Graphic::PoseList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PoseList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::PoseList *pObjectX = (EarthView::World::Graphic::PoseList*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PoseList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::PoseList *pObjectX = (EarthView::World::Graphic::PoseList*) pObjXXXX;
				pObjectX->clear();
			}
		}
	}
}
