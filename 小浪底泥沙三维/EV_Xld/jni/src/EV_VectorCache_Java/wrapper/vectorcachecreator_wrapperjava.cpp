/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "vectorcache/vectorcachecreator.h"
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
			namespace VectorCache
			{
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorcache_VectorCacheCreator_setBasicParam_1CVectorCacheBasicParam(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong param_j)
				{
					const EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam *param = (const EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam*) param_j;
					EarthView::World::Spatial::VectorCache::CVectorCacheCreator *pObjectX = (EarthView::World::Spatial::VectorCache::CVectorCacheCreator*) pObjXXXX;
					ev_bool __values1 = pObjectX->setBasicParam(param);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_vectorcache_VectorCacheCreator_nameSwitch_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong beforeName_j)
				{
					EVString &beforeName = *(EVString*) beforeName_j;
					EarthView::World::Spatial::VectorCache::CVectorCacheCreator *pObjectX = (EarthView::World::Spatial::VectorCache::CVectorCacheCreator*) pObjXXXX;
					EVString __values1 = pObjectX->nameSwitch(beforeName);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorcache_VectorCacheCreator_getBasicParamRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorCache::CVectorCacheCreator *pObjectX = (EarthView::World::Spatial::VectorCache::CVectorCacheCreator*) pObjXXXX;
					const EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam* __values1 = pObjectX->getBasicParamRef();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorcache_VectorCacheCreator_addCreateDatasetInfo_1IDataset_1CCacheProcessInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_dataset_j, jlong info_j)
				{
					const EarthView::World::Spatial::GeoDataset::IDataset *ref_dataset = (const EarthView::World::Spatial::GeoDataset::IDataset*) ref_dataset_j;
					const EarthView::World::Spatial::VectorCache::CCacheProcessInfo *info = (const EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) info_j;
					EarthView::World::Spatial::VectorCache::CVectorCacheCreator *pObjectX = (EarthView::World::Spatial::VectorCache::CVectorCacheCreator*) pObjXXXX;
					ev_bool __values1 = pObjectX->addCreateDatasetInfo(ref_dataset, info);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_vectorcache_VectorCacheCreator_makeCache_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::CVectorCacheCreator *pObjectX = (EarthView::World::Spatial::VectorCache::CVectorCacheCreator*) pObjXXXX;
					EarthView::World::Spatial::VectorCache::EVVectorCacheProcessResult __values1 = pObjectX->makeCache();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorcache_VectorCacheCreator_getProcessMessageRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorCache::CVectorCacheCreator *pObjectX = (EarthView::World::Spatial::VectorCache::CVectorCacheCreator*) pObjXXXX;
					const EarthView::World::Spatial::VectorCache::CVectorCacheProcessMessage* __values1 = pObjectX->getProcessMessageRef();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorcache_VectorCacheCreator_stopProcess_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::CVectorCacheCreator *pObjectX = (EarthView::World::Spatial::VectorCache::CVectorCacheCreator*) pObjXXXX;
					pObjectX->stopProcess();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorcache_VectorCacheCreator_checkValidTableName_1StringVector_1StringVector(JNIEnv *__env , jclass __clazz, jlong tableNameList_j, jlong errorNameList_j)
				{
					EarthView::World::Core::StringVector &tableNameList = *(EarthView::World::Core::StringVector*) tableNameList_j;
					EarthView::World::Core::StringVector &errorNameList = *(EarthView::World::Core::StringVector*) errorNameList_j;
					ev_bool __values1 = EarthView::World::Spatial::VectorCache::CVectorCacheCreator::checkValidTableName(tableNameList, errorNameList);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
		}
	}
}
