/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "effect3d/moon.h"
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_effect3d_Moon_getResourceName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CMoon *pObjectX = (EarthView::World::Spatial::Effect3D::CMoon*) pObjXXXX;
					EVString __values1 = pObjectX->getResourceName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_Moon_setScale_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat scale_j)
				{
					ev_real32 scale = (ev_real32) scale_j;
					EarthView::World::Spatial::Effect3D::CMoon *pObjectX = (EarthView::World::Spatial::Effect3D::CMoon*) pObjXXXX;
					pObjectX->setScale(scale);
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_effect3d_Moon_getScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CMoon *pObjectX = (EarthView::World::Spatial::Effect3D::CMoon*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getScale();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_Moon_getMoonTextureAngularSize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CMoon *pObjectX = (EarthView::World::Spatial::Effect3D::CMoon*) pObjXXXX;
					EarthView::World::Spatial::Math::CDegree __values1 = pObjectX->getMoonTextureAngularSize();
					EarthView::World::Spatial::Math::CDegree *returnvalues = new EarthView::World::Spatial::Math::CDegree(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_Moon_setVisible_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j)
				{
					ev_bool visible = (ev_bool) visible_j;
					EarthView::World::Spatial::Effect3D::CMoon *pObjectX = (EarthView::World::Spatial::Effect3D::CMoon*) pObjXXXX;
					pObjectX->setVisible(visible);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_Moon_isVisible_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CMoon *pObjectX = (EarthView::World::Spatial::Effect3D::CMoon*) pObjXXXX;
					ev_bool __values1 = pObjectX->isVisible();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_Moon_OperatorEquals_1CMoon(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
				{
					EarthView::World::Spatial::Effect3D::CMoon& pObjectX = *(EarthView::World::Spatial::Effect3D::CMoon*) pObjXXXX;
					const EarthView::World::Spatial::Effect3D::CMoon &other = *(EarthView::World::Spatial::Effect3D::CMoon*) other_j;
					ev_bool __values1 = (pObjectX == other);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_Moon_OperatorNotEquals_1CMoon(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
				{
					EarthView::World::Spatial::Effect3D::CMoon& pObjectX = *(EarthView::World::Spatial::Effect3D::CMoon*) pObjXXXX;
					const EarthView::World::Spatial::Effect3D::CMoon &other = *(EarthView::World::Spatial::Effect3D::CMoon*) other_j;
					ev_bool __values1 = (pObjectX != other);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
		}
	}
}
