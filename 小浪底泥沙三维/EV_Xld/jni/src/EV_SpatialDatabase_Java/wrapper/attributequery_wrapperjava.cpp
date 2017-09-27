/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialdatabase/attributequery.h"
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_AttributeQuery_Compile_1IFields_1ev_1char(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pFields_j, jlong pExpression_j)
				{
					EarthView::World::Spatial::GeoDataset::IFields *pFields = (EarthView::World::Spatial::GeoDataset::IFields*) pFields_j;
					const ev_char *pExpression = (const ev_char*) pExpression_j;
					EarthView::World::Spatial::GeoDataset::CAttributeQuery *pObjectX = (EarthView::World::Spatial::GeoDataset::CAttributeQuery*) pObjXXXX;
					ev_bool __values1 = pObjectX->Compile(pFields, pExpression);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_AttributeQuery_Evaluate_1IFeature(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pFeature_j)
				{
					EarthView::World::Spatial::GeoDataset::IFeature *pFeature = (EarthView::World::Spatial::GeoDataset::IFeature*) pFeature_j;
					EarthView::World::Spatial::GeoDataset::CAttributeQuery *pObjectX = (EarthView::World::Spatial::GeoDataset::CAttributeQuery*) pObjXXXX;
					ev_bool __values1 = pObjectX->Evaluate(pFeature);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
		}
	}
}
