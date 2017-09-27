/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "annotation/annotationbuilder.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace GeoDataset
			{
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geodataset_AnnotationBuilder_build_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::CAnnotationBuilder *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CAnnotationBuilder*) pObjXXXX;
					ev_bool __values1 = pObjectX->build();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_AnnotationBuilder_setName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
					#else
					const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
					#endif
					EarthView::World::Spatial2D::GeoDataset::CAnnotationBuilder *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CAnnotationBuilder*) pObjXXXX;
					pObjectX->setName(name);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_AnnotationBuilder_setCreateAnnotationWithSelection_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean b_j)
				{
					const ev_bool b = (const ev_bool) b_j;
					EarthView::World::Spatial2D::GeoDataset::CAnnotationBuilder *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CAnnotationBuilder*) pObjXXXX;
					pObjectX->setCreateAnnotationWithSelection(b);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_AnnotationBuilder_setWhereClause_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring whereClause_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* whereClause_ch = (const ev_char*)__env->GetStringUTFChars(whereClause_j,JNI_FALSE);
					const EVString whereClause = whereClause_ch;
					__env->ReleaseStringUTFChars(whereClause_j, (const char *)whereClause_ch);
					#else
					const ev_wchar* whereClause_ch = (const ev_wchar*)__env->GetStringChars(whereClause_j,JNI_FALSE);
					const EVString whereClause = whereClause_ch;
					__env->ReleaseStringChars(whereClause_j, (const jchar *)whereClause_ch);
					#endif
					EarthView::World::Spatial2D::GeoDataset::CAnnotationBuilder *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CAnnotationBuilder*) pObjXXXX;
					pObjectX->setWhereClause(whereClause);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_AnnotationBuilder_setScale_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble scale_j)
				{
					const ev_real64 scale = (const ev_real64) scale_j;
					EarthView::World::Spatial2D::GeoDataset::CAnnotationBuilder *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CAnnotationBuilder*) pObjXXXX;
					pObjectX->setScale(scale);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_AnnotationBuilder_setAppend_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean b_j)
				{
					ev_bool b = (ev_bool) b_j;
					EarthView::World::Spatial2D::GeoDataset::CAnnotationBuilder *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CAnnotationBuilder*) pObjXXXX;
					pObjectX->setAppend(b);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_AnnotationBuilder_setTerminated_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::CAnnotationBuilder *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CAnnotationBuilder*) pObjXXXX;
					pObjectX->setTerminated();
				}
			}
		}
	}
}
