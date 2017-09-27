/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/datasourcemanager/datasourcetreeeventdata.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace FrameWorkProxy
		{
			namespace DataSourceManager
			{
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceTreeEventData_setType_1ActionType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint t_j)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::ActionType t = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::ActionType) t_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEventData *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEventData*) pObjXXXX;
					pObjectX->setType(t);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceTreeEventData_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEventData *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEventData*) pObjXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::ActionType __values1 = pObjectX->getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceTreeEventData_get_1typ_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEventData *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEventData*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->typ);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceTreeEventData_set_1typ_1ActionType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEventData *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEventData*)pObjXXXX;
					pObjectX->typ = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::ActionType)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceTreeEventData_get_1effectManageData_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEventData *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEventData*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->effectManageData);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceTreeEventData_set_1effectManageData_1EffectManageData(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEventData *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEventData*)pObjXXXX;
					pObjectX->effectManageData = *(EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::EffectManageData*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceTreeEventData_get_1modelManageData_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEventData *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEventData*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->modelManageData);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceTreeEventData_set_1modelManageData_1ModelManageData(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEventData *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEventData*)pObjXXXX;
					pObjectX->modelManageData = *(EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::ModelManageData*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceTreeEventData_get_1propertyData_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEventData *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEventData*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->propertyData);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceTreeEventData_set_1propertyData_1DataSourcePropertyData(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEventData *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEventData*)pObjXXXX;
					pObjectX->propertyData = *(EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::DataSourcePropertyData*) __values1_j;
				}
			}
		}
	}
}
