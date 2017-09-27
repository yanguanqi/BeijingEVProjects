/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataset/effecttype.h"
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
			namespace Dataset
			{
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EffectUserTypeTree_getChildNum_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getChildNum();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EffectUserTypeTree_getChild_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree* __values1 = pObjectX->getChild(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EffectUserTypeTree_getEffectInfoNum_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getEffectInfoNum();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EffectUserTypeTree_getEffectInfo_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectInfo __values1 = pObjectX->getEffectInfo(index);
					EarthView::World::Spatial3D::Dataset::CEffectInfo *returnvalues = new EarthView::World::Spatial3D::Dataset::CEffectInfo(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EffectUserTypeTree_getInfo_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo __values1 = pObjectX->getInfo();
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo *returnvalues = new EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectUserTypeTree_setInfo_1CEffectUserTypeInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong typeInfo_j)
				{
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo typeInfo = *(EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo*) typeInfo_j;
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree*) pObjXXXX;
					pObjectX->setInfo(typeInfo);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectUserTypeTree_addChild_1CEffectUserTypeTree(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_node_j)
				{
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree *ref_node = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree*) ref_node_j;
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree*) pObjXXXX;
					pObjectX->addChild(ref_node);
				}
			}
		}
	}
}
