/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "plugin_octreescenemanager/octree.h"
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Octree__1addNode_1COctreeNode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_n_j)
			{
				EarthView::World::Graphic::COctreeNode *ref_n = (EarthView::World::Graphic::COctreeNode*) ref_n_j;
				EarthView::World::Graphic::COctree *pObjectX = (EarthView::World::Graphic::COctree*) pObjXXXX;
				pObjectX->_addNode(ref_n);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Octree__1removeNode_1COctreeNode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				EarthView::World::Graphic::COctreeNode *n = (EarthView::World::Graphic::COctreeNode*) n_j;
				EarthView::World::Graphic::COctree *pObjectX = (EarthView::World::Graphic::COctree*) pObjXXXX;
				pObjectX->_removeNode(n);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Octree_numNodes_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COctree *pObjectX = (EarthView::World::Graphic::COctree*) pObjXXXX;
				int __values1 = pObjectX->numNodes();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Octree_get_1mBox_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COctree *pObjectX = (EarthView::World::Graphic::COctree*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mBox);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Octree_set_1mBox_1CAxisAlignedBox(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::COctree *pObjectX = (EarthView::World::Graphic::COctree*)pObjXXXX;
				pObjectX->mBox = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Octree_get_1mWireBoundingBox_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COctree *pObjectX = (EarthView::World::Graphic::COctree*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->mWireBoundingBox);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Octree_set_1mWireBoundingBox_1CWireBoundingBox(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::COctree *pObjectX = (EarthView::World::Graphic::COctree*)pObjXXXX;
				pObjectX->mWireBoundingBox = (EarthView::World::Graphic::CWireBoundingBox*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Octree_getWireBoundingBox_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COctree *pObjectX = (EarthView::World::Graphic::COctree*) pObjXXXX;
				EarthView::World::Graphic::CWireBoundingBox* __values1 = pObjectX->getWireBoundingBox();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Octree_get_1mHalfSize_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COctree *pObjectX = (EarthView::World::Graphic::COctree*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mHalfSize);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Octree_set_1mHalfSize_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::COctree *pObjectX = (EarthView::World::Graphic::COctree*)pObjXXXX;
				pObjectX->mHalfSize = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Octree__1isTwiceSize_1CAxisAlignedBox(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong box_j)
			{
				const EarthView::World::Spatial::Math::CAxisAlignedBox &box = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) box_j;
				const 				EarthView::World::Graphic::COctree *pObjectX = (EarthView::World::Graphic::COctree*) pObjXXXX;
				ev_bool __values1 = pObjectX->_isTwiceSize(box);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Octree__1getChildIndexes_1CAxisAlignedBox_1int_1int_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong box_j, jlong x_j, jlong y_j, jlong z_j)
			{
				const EarthView::World::Spatial::Math::CAxisAlignedBox &box = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) box_j;
				int *x = (int*) x_j;
				int *y = (int*) y_j;
				int *z = (int*) z_j;
				const 				EarthView::World::Graphic::COctree *pObjectX = (EarthView::World::Graphic::COctree*) pObjXXXX;
				pObjectX->_getChildIndexes(box, x, y, z);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Octree__1getCullBounds_1CAxisAlignedBox(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong box_j)
			{
				EarthView::World::Spatial::Math::CAxisAlignedBox *box = (EarthView::World::Spatial::Math::CAxisAlignedBox*) box_j;
				const 				EarthView::World::Graphic::COctree *pObjectX = (EarthView::World::Graphic::COctree*) pObjXXXX;
				pObjectX->_getCullBounds(box);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Octree_00024OctreeNodeList_push_1back_1COctreeNode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::COctreeNode *&t = *(EarthView::World::Graphic::COctreeNode**) t_j;
				EarthView::World::Graphic::COctree::OctreeNodeList *pObjectX = (EarthView::World::Graphic::COctree::OctreeNodeList*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Octree_00024OctreeNodeList_push_1front_1COctreeNode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::COctreeNode *&t = *(EarthView::World::Graphic::COctreeNode**) t_j;
				EarthView::World::Graphic::COctree::OctreeNodeList *pObjectX = (EarthView::World::Graphic::COctree::OctreeNodeList*) pObjXXXX;
				pObjectX->push_front(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Octree_00024OctreeNodeList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COctree::OctreeNodeList *pObjectX = (EarthView::World::Graphic::COctree::OctreeNodeList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Octree_00024OctreeNodeList_pop_1front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COctree::OctreeNodeList *pObjectX = (EarthView::World::Graphic::COctree::OctreeNodeList*) pObjXXXX;
				pObjectX->pop_front();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Octree_00024OctreeNodeList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COctree::OctreeNodeList *pObjectX = (EarthView::World::Graphic::COctree::OctreeNodeList*) pObjXXXX;
				EarthView::World::Graphic::COctreeNode*& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Octree_00024OctreeNodeList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COctree::OctreeNodeList *pObjectX = (EarthView::World::Graphic::COctree::OctreeNodeList*) pObjXXXX;
				EarthView::World::Graphic::COctreeNode*& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Octree_00024OctreeNodeList_at_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::COctree::OctreeNodeList *pObjectX = (EarthView::World::Graphic::COctree::OctreeNodeList*) pObjXXXX;
				EarthView::World::Graphic::COctreeNode*& __values1 = pObjectX->at(pos);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Octree_00024OctreeNodeList_insert_1ev_1uint32_1COctreeNode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::COctreeNode *&t = *(EarthView::World::Graphic::COctreeNode**) t_j;
				EarthView::World::Graphic::COctree::OctreeNodeList *pObjectX = (EarthView::World::Graphic::COctree::OctreeNodeList*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Octree_00024OctreeNodeList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::COctree::OctreeNodeList *pObjectX = (EarthView::World::Graphic::COctree::OctreeNodeList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Octree_00024OctreeNodeList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COctree::OctreeNodeList *pObjectX = (EarthView::World::Graphic::COctree::OctreeNodeList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Octree_00024OctreeNodeList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COctree::OctreeNodeList *pObjectX = (EarthView::World::Graphic::COctree::OctreeNodeList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Octree_00024OctreeNodeList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::COctree::OctreeNodeList *pObjectX = (EarthView::World::Graphic::COctree::OctreeNodeList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Octree_00024OctreeNodeList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COctree::OctreeNodeList *pObjectX = (EarthView::World::Graphic::COctree::OctreeNodeList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Octree_get_1mNodes_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COctree *pObjectX = (EarthView::World::Graphic::COctree*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mNodes);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Octree_set_1mNodes_1OctreeNodeList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::COctree *pObjectX = (EarthView::World::Graphic::COctree*)pObjXXXX;
				pObjectX->mNodes = *(EarthView::World::Graphic::COctree::OctreeNodeList*) __values1_j;
			}
		}
	}
}
