/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/datasourcemanager/datasourcetreeevent.h"
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
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceTreeEvent_00024ActionTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						DataSourceTreeEvent::ModelManage,
						DataSourceTreeEvent::EffectManage,
						DataSourceTreeEvent::DataSourceProperty,
						DataSourceTreeEvent::DateSetProperty
					};
					jintArray array = __env->NewIntArray(4);
					__env->SetIntArrayRegion(array, 0, 4, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceTreeEvent_00024DataSourcePropertyData_get_1groupStringInterface_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::DataSourcePropertyData *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::DataSourcePropertyData*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->groupStringInterface);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceTreeEvent_00024DataSourcePropertyData_set_1groupStringInterface_1CGroupStringinterfaceMap(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::DataSourcePropertyData *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::DataSourcePropertyData*)pObjXXXX;
					pObjectX->groupStringInterface = *(EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap*) __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceTreeEvent_00024ModelManageData_get_1datasourceName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::ModelManageData *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::ModelManageData*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->datasourceName;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceTreeEvent_00024ModelManageData_set_1datasourceName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::ModelManageData *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::ModelManageData*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->datasourceName = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceTreeEvent_00024EffectManageData_get_1datasourceName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::EffectManageData *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::EffectManageData*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->datasourceName;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceTreeEvent_00024EffectManageData_set_1datasourceName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::EffectManageData *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::EffectManageData*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->datasourceName = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceTreeEvent_00024EffectManageData_get_1datasourcePath_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::EffectManageData *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::EffectManageData*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->datasourcePath;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceTreeEvent_00024EffectManageData_set_1datasourcePath_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::EffectManageData *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::EffectManageData*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->datasourcePath = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceTreeEvent_getActionType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent*) pObjXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::ActionType __values1 = pObjectX->getActionType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceTreeEvent_getModelManageData_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent*) pObjXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::ModelManageData __values1 = pObjectX->getModelManageData();
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::ModelManageData *returnvalues = new EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::ModelManageData(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceTreeEvent_getEffectManageData_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent*) pObjXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::EffectManageData __values1 = pObjectX->getEffectManageData();
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::EffectManageData *returnvalues = new EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::EffectManageData(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceTreeEvent_getPropertyData_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent*) pObjXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::DataSourcePropertyData __values1 = pObjectX->getPropertyData();
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::DataSourcePropertyData *returnvalues = new EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::DataSourcePropertyData(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceTreeEvent_data_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent*) pObjXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEventData& __values1 = pObjectX->data();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
		}
	}
}
