/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "effect3d/fog.h"
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GroundFog_setVisible_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j)
				{
					ev_bool visible = (ev_bool) visible_j;
					EarthView::World::Spatial::Effect3D::CGroundFog *pObjectX = (EarthView::World::Spatial::Effect3D::CGroundFog*) pObjXXXX;
					pObjectX->setVisible(visible);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_GroundFog_isVisible_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CGroundFog *pObjectX = (EarthView::World::Spatial::Effect3D::CGroundFog*) pObjXXXX;
					ev_bool __values1 = pObjectX->isVisible();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_effect3d_GroundFog_getDomeMaterialName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CGroundFog *pObjectX = (EarthView::World::Spatial::Effect3D::CGroundFog*) pObjXXXX;
					EVString __values1 = pObjectX->getDomeMaterialName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_effect3d_GroundFog_getDomeEntityName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CGroundFog *pObjectX = (EarthView::World::Spatial::Effect3D::CGroundFog*) pObjXXXX;
					EVString __values1 = pObjectX->getDomeEntityName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GroundFog_setGroundFogColourMultiplier_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong colour_j)
				{
					const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
					EarthView::World::Spatial::Effect3D::CGroundFog *pObjectX = (EarthView::World::Spatial::Effect3D::CGroundFog*) pObjXXXX;
					pObjectX->setGroundFogColourMultiplier(colour);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_GroundFog_getGroundFogColourMultiplier_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CGroundFog *pObjectX = (EarthView::World::Spatial::Effect3D::CGroundFog*) pObjXXXX;
					EarthView::World::Graphic::CColourValue __values1 = pObjectX->getGroundFogColourMultiplier();
					EarthView::World::Graphic::CColourValue *returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GroundFog_setGroundFogDensityMultiplier_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					Real value = (Real) value_j;
					EarthView::World::Spatial::Effect3D::CGroundFog *pObjectX = (EarthView::World::Spatial::Effect3D::CGroundFog*) pObjXXXX;
					pObjectX->setGroundFogDensityMultiplier(value);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_effect3d_GroundFog_getGroundFogDensityMultiplier_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CGroundFog *pObjectX = (EarthView::World::Spatial::Effect3D::CGroundFog*) pObjXXXX;
					Real __values1 = pObjectX->getGroundFogDensityMultiplier();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_GroundFog_setGroundLevel_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble GroundLevela_j)
				{
					Real GroundLevela = (Real) GroundLevela_j;
					EarthView::World::Spatial::Effect3D::CGroundFog *pObjectX = (EarthView::World::Spatial::Effect3D::CGroundFog*) pObjXXXX;
					pObjectX->setGroundLevel(GroundLevela);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_effect3d_GroundFog_getGroundLevel_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CGroundFog *pObjectX = (EarthView::World::Spatial::Effect3D::CGroundFog*) pObjXXXX;
					Real __values1 = pObjectX->getGroundLevel();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_GroundFog_OperatorEquals_1CGroundFog(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
				{
					EarthView::World::Spatial::Effect3D::CGroundFog& pObjectX = *(EarthView::World::Spatial::Effect3D::CGroundFog*) pObjXXXX;
					const EarthView::World::Spatial::Effect3D::CGroundFog &other = *(EarthView::World::Spatial::Effect3D::CGroundFog*) other_j;
					ev_bool __values1 = (pObjectX == other);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_GroundFog_OperatorNotEquals_1CGroundFog(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
				{
					EarthView::World::Spatial::Effect3D::CGroundFog& pObjectX = *(EarthView::World::Spatial::Effect3D::CGroundFog*) pObjXXXX;
					const EarthView::World::Spatial::Effect3D::CGroundFog &other = *(EarthView::World::Spatial::Effect3D::CGroundFog*) other_j;
					ev_bool __values1 = (pObjectX != other);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
		}
	}
}
