/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dlayer/vectorcache3dlayerinfo.h"
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
			namespace Atlas
			{
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_VectorCache3DLayerInfo_setLayerTheme_1ITheme(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong theme_j)
				{
					EarthView::World::Spatial::Theme::ITheme *theme = (EarthView::World::Spatial::Theme::ITheme*) theme_j;
					EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo *pObjectX = (EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo*) pObjXXXX;
					pObjectX->setLayerTheme(theme);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_VectorCache3DLayerInfo_getLayerTheme_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo *pObjectX = (EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo*) pObjXXXX;
					EarthView::World::Spatial::Theme::ITheme* __values1 = pObjectX->getLayerTheme();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_VectorCache3DLayerInfo_setLayerLabelProperty_1ILabelProperty(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong labelproperty_j)
				{
					EarthView::World::Spatial::Display::ILabelProperty *labelproperty = (EarthView::World::Spatial::Display::ILabelProperty*) labelproperty_j;
					EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo *pObjectX = (EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo*) pObjXXXX;
					pObjectX->setLayerLabelProperty(labelproperty);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_VectorCache3DLayerInfo_getLayerLabelProperty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo *pObjectX = (EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo*) pObjXXXX;
					EarthView::World::Spatial::Display::ILabelProperty* __values1 = pObjectX->getLayerLabelProperty();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_VectorCache3DLayerInfo_setLayerFeatureCount_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_uint32 count = (ev_uint32) count_j;
					EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo *pObjectX = (EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo*) pObjXXXX;
					pObjectX->setLayerFeatureCount(count);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_VectorCache3DLayerInfo_getLayerFeatureCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo *pObjectX = (EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getLayerFeatureCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_VectorCache3DLayerInfo_setLayerStatisticsMaxValue_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo *pObjectX = (EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo*) pObjXXXX;
					pObjectX->setLayerStatisticsMaxValue(value);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_atlas_VectorCache3DLayerInfo_getLayerStatisticsMaxValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo *pObjectX = (EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getLayerStatisticsMaxValue();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_VectorCache3DLayerInfo_setLayerRootOctreeBox_1CAxisAlignedBox(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong box_j)
				{
					EarthView::World::Spatial::Math::CAxisAlignedBox &box = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) box_j;
					EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo *pObjectX = (EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo*) pObjXXXX;
					pObjectX->setLayerRootOctreeBox(box);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_VectorCache3DLayerInfo_getLayerRootOctreeBox_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo *pObjectX = (EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo*) pObjXXXX;
					EarthView::World::Spatial::Math::CAxisAlignedBox __values1 = pObjectX->getLayerRootOctreeBox();
					EarthView::World::Spatial::Math::CAxisAlignedBox *returnvalues = new EarthView::World::Spatial::Math::CAxisAlignedBox(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_VectorCache3DLayerInfo_setLayerWebFields_1CVector3DCacheFieldVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fields_j)
				{
					EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector *fields = (EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector*) fields_j;
					EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo *pObjectX = (EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo*) pObjXXXX;
					pObjectX->setLayerWebFields(fields);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_VectorCache3DLayerInfo_getLayerWebFields_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo *pObjectX = (EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo*) pObjXXXX;
					EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector* __values1 = pObjectX->getLayerWebFields();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_VectorCache3DLayerInfo_toStream_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo *pObjectX = (EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo*) pObjXXXX;
					EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->toStream();
					EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_VectorCache3DLayerInfo_fromStream_1MemoryDataStreamPtr(JNIEnv *__env , jclass __clazz, jlong stream_j)
				{
					const EarthView::World::Core::MemoryDataStreamPtr &stream = *(EarthView::World::Core::MemoryDataStreamPtr*) stream_j;
					EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo* __values1 = EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo::fromStream(stream);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
		}
	}
}
