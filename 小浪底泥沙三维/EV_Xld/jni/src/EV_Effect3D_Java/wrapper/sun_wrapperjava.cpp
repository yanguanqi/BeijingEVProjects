/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "effect3d/sun.h"
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
			namespace Effect3D
			{
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_effect3d_EVSunTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						ST_SPHERE,
						ST_SPRITE
					};
					jintArray array = __env->NewIntArray(2);
					__env->SetIntArrayRegion(array, 0, 2, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_effect3d_Sun_getResourceName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CSun *pObjectX = (EarthView::World::Spatial::Effect3D::CSun*) pObjXXXX;
					EVString __values1 = pObjectX->getResourceName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_Sun_setScale_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat scale_j)
				{
					ev_real32 scale = (ev_real32) scale_j;
					EarthView::World::Spatial::Effect3D::CSun *pObjectX = (EarthView::World::Spatial::Effect3D::CSun*) pObjXXXX;
					pObjectX->setScale(scale);
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_effect3d_Sun_getScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CSun *pObjectX = (EarthView::World::Spatial::Effect3D::CSun*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getScale();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_Sun_getSunTextureAngularSize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CSun *pObjectX = (EarthView::World::Spatial::Effect3D::CSun*) pObjXXXX;
					EarthView::World::Spatial::Math::CDegree __values1 = pObjectX->getSunTextureAngularSize();
					EarthView::World::Spatial::Math::CDegree *returnvalues = new EarthView::World::Spatial::Math::CDegree(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_Sun_setVisible_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j)
				{
					ev_bool visible = (ev_bool) visible_j;
					EarthView::World::Spatial::Effect3D::CSun *pObjectX = (EarthView::World::Spatial::Effect3D::CSun*) pObjXXXX;
					pObjectX->setVisible(visible);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_Sun_isVisible_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CSun *pObjectX = (EarthView::World::Spatial::Effect3D::CSun*) pObjXXXX;
					ev_bool __values1 = pObjectX->isVisible();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_Sun_OperatorEquals_1CSun(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
				{
					EarthView::World::Spatial::Effect3D::CSun& pObjectX = *(EarthView::World::Spatial::Effect3D::CSun*) pObjXXXX;
					const EarthView::World::Spatial::Effect3D::CSun &other = *(EarthView::World::Spatial::Effect3D::CSun*) other_j;
					ev_bool __values1 = (pObjectX == other);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_Sun_OperatorNotEquals_1CSun(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
				{
					EarthView::World::Spatial::Effect3D::CSun& pObjectX = *(EarthView::World::Spatial::Effect3D::CSun*) pObjXXXX;
					const EarthView::World::Spatial::Effect3D::CSun &other = *(EarthView::World::Spatial::Effect3D::CSun*) other_j;
					ev_bool __values1 = (pObjectX != other);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
		}
	}
}
