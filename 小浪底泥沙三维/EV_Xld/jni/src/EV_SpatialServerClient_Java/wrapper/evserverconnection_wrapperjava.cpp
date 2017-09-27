/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialserverclient/evserverconnection.h"
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Evserverconnection_setAllServiceOpen_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CEVServerConnection *pObjectX = (EarthView::World::Spatial::CEVServerConnection*) pObjXXXX;
				pObjectX->setAllServiceOpen();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Evserverconnection_setAllServiceClose_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CEVServerConnection *pObjectX = (EarthView::World::Spatial::CEVServerConnection*) pObjXXXX;
				pObjectX->setAllServiceClose();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Evserverconnection_setMetaServiceOpen_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
			{
				ev_bool value = (ev_bool) value_j;
				EarthView::World::Spatial::CEVServerConnection *pObjectX = (EarthView::World::Spatial::CEVServerConnection*) pObjXXXX;
				pObjectX->setMetaServiceOpen(value);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Evserverconnection_setGeocodeServiceOpen_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
			{
				ev_bool value = (ev_bool) value_j;
				EarthView::World::Spatial::CEVServerConnection *pObjectX = (EarthView::World::Spatial::CEVServerConnection*) pObjXXXX;
				pObjectX->setGeocodeServiceOpen(value);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Evserverconnection_setGlobeServiceOpen_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
			{
				ev_bool value = (ev_bool) value_j;
				EarthView::World::Spatial::CEVServerConnection *pObjectX = (EarthView::World::Spatial::CEVServerConnection*) pObjXXXX;
				pObjectX->setGlobeServiceOpen(value);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Evserverconnection_setObqServiceOpen_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
			{
				ev_bool value = (ev_bool) value_j;
				EarthView::World::Spatial::CEVServerConnection *pObjectX = (EarthView::World::Spatial::CEVServerConnection*) pObjXXXX;
				pObjectX->setObqServiceOpen(value);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Evserverconnection_setMeshXServiceOpen_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
			{
				ev_bool value = (ev_bool) value_j;
				EarthView::World::Spatial::CEVServerConnection *pObjectX = (EarthView::World::Spatial::CEVServerConnection*) pObjXXXX;
				pObjectX->setMeshXServiceOpen(value);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Evserverconnection_setMeshXGServiceOpen_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
			{
				ev_bool value = (ev_bool) value_j;
				EarthView::World::Spatial::CEVServerConnection *pObjectX = (EarthView::World::Spatial::CEVServerConnection*) pObjXXXX;
				pObjectX->setMeshXGServiceOpen(value);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Evserverconnection_setModelServiceOpen_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
			{
				ev_bool value = (ev_bool) value_j;
				EarthView::World::Spatial::CEVServerConnection *pObjectX = (EarthView::World::Spatial::CEVServerConnection*) pObjXXXX;
				pObjectX->setModelServiceOpen(value);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Evserverconnection_setVector3DServiceOpen_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
			{
				ev_bool value = (ev_bool) value_j;
				EarthView::World::Spatial::CEVServerConnection *pObjectX = (EarthView::World::Spatial::CEVServerConnection*) pObjXXXX;
				pObjectX->setVector3DServiceOpen(value);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Evserverconnection_setGeometryServiceOpen_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
			{
				ev_bool value = (ev_bool) value_j;
				EarthView::World::Spatial::CEVServerConnection *pObjectX = (EarthView::World::Spatial::CEVServerConnection*) pObjXXXX;
				pObjectX->setGeometryServiceOpen(value);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Evserverconnection_setWMTSServiceOpen_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
			{
				ev_bool value = (ev_bool) value_j;
				EarthView::World::Spatial::CEVServerConnection *pObjectX = (EarthView::World::Spatial::CEVServerConnection*) pObjXXXX;
				pObjectX->setWMTSServiceOpen(value);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Evserverconnection_setWMSServiceOpen_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
			{
				ev_bool value = (ev_bool) value_j;
				EarthView::World::Spatial::CEVServerConnection *pObjectX = (EarthView::World::Spatial::CEVServerConnection*) pObjXXXX;
				pObjectX->setWMSServiceOpen(value);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Evserverconnection_setWFSServiceOpen_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
			{
				ev_bool value = (ev_bool) value_j;
				EarthView::World::Spatial::CEVServerConnection *pObjectX = (EarthView::World::Spatial::CEVServerConnection*) pObjXXXX;
				pObjectX->setWFSServiceOpen(value);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_Evserverconnection_getMetaServiceOpenValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CEVServerConnection *pObjectX = (EarthView::World::Spatial::CEVServerConnection*) pObjXXXX;
				ev_bool __values1 = pObjectX->getMetaServiceOpenValue();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_Evserverconnection_getGeocodeServiceOpenValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CEVServerConnection *pObjectX = (EarthView::World::Spatial::CEVServerConnection*) pObjXXXX;
				ev_bool __values1 = pObjectX->getGeocodeServiceOpenValue();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_Evserverconnection_getObqServiceOpenValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CEVServerConnection *pObjectX = (EarthView::World::Spatial::CEVServerConnection*) pObjXXXX;
				ev_bool __values1 = pObjectX->getObqServiceOpenValue();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_Evserverconnection_getMeshXServiceOpenValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CEVServerConnection *pObjectX = (EarthView::World::Spatial::CEVServerConnection*) pObjXXXX;
				ev_bool __values1 = pObjectX->getMeshXServiceOpenValue();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_Evserverconnection_getMeshXGServiceOpenValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CEVServerConnection *pObjectX = (EarthView::World::Spatial::CEVServerConnection*) pObjXXXX;
				ev_bool __values1 = pObjectX->getMeshXGServiceOpenValue();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_Evserverconnection_getModelServiceOpenValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CEVServerConnection *pObjectX = (EarthView::World::Spatial::CEVServerConnection*) pObjXXXX;
				ev_bool __values1 = pObjectX->getModelServiceOpenValue();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_Evserverconnection_getVector3DServiceOpenValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CEVServerConnection *pObjectX = (EarthView::World::Spatial::CEVServerConnection*) pObjXXXX;
				ev_bool __values1 = pObjectX->getVector3DServiceOpenValue();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Evserverconnection_setLasServiceOpen_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
			{
				ev_bool value = (ev_bool) value_j;
				EarthView::World::Spatial::CEVServerConnection *pObjectX = (EarthView::World::Spatial::CEVServerConnection*) pObjXXXX;
				pObjectX->setLasServiceOpen(value);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_Evserverconnection_getLasServiceOpenValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CEVServerConnection *pObjectX = (EarthView::World::Spatial::CEVServerConnection*) pObjXXXX;
				ev_bool __values1 = pObjectX->getLasServiceOpenValue();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_Evserverconnection_getGlobeServiceOpenValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CEVServerConnection *pObjectX = (EarthView::World::Spatial::CEVServerConnection*) pObjXXXX;
				ev_bool __values1 = pObjectX->getGlobeServiceOpenValue();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_Evserverconnection_getGeometryServiceOpenValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CEVServerConnection *pObjectX = (EarthView::World::Spatial::CEVServerConnection*) pObjXXXX;
				ev_bool __values1 = pObjectX->getGeometryServiceOpenValue();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_Evserverconnection_getWMTSServiceOpenValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CEVServerConnection *pObjectX = (EarthView::World::Spatial::CEVServerConnection*) pObjXXXX;
				ev_bool __values1 = pObjectX->getWMTSServiceOpenValue();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_Evserverconnection_getWMSServiceOpenValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CEVServerConnection *pObjectX = (EarthView::World::Spatial::CEVServerConnection*) pObjXXXX;
				ev_bool __values1 = pObjectX->getWMSServiceOpenValue();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_Evserverconnection_getWFSServiceOpenValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CEVServerConnection *pObjectX = (EarthView::World::Spatial::CEVServerConnection*) pObjXXXX;
				ev_bool __values1 = pObjectX->getWFSServiceOpenValue();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
		}
	}
}
