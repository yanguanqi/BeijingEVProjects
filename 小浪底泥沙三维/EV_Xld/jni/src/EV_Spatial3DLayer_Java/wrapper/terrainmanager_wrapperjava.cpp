/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dlayer/terrainmanager.h"
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
				class JCTerrainManagerProxy : public EarthView::World::Spatial3D::Atlas::CTerrainManager
				{
				 private:
					EarthView::World::Core::ev_string m_getBestHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback;
				public:
					JCTerrainManagerProxy(EarthView::World::Core::CNameValuePairList *pList) : CTerrainManager(pList)
					{
					}
					ev_void unRegisterJavaReference()
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						if(__gr != NULL)
						{
							delete __gr;
							this->registerJavaReference(NULL);
						}
					}
				public:
					void register_getBestHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getBestHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback = __method;
					}
					virtual ev_bool getBestHeightAt(ev_real64 latitude, ev_real64 longitude, ev_real64 preTileResolution, ev_real64& altitude, ev_real64& tileResolution)
					{
						if (this->_gRef != NULL && this->m_getBestHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jdouble latitude_j = (jdouble) latitude;
							jdouble longitude_j = (jdouble) longitude;
							jdouble preTileResolution_j = (jdouble) preTileResolution;
							jlong altitude_j = (jlong) &altitude;
							jlong tileResolution_j = (jlong) &tileResolution;
							jmethodID __method = __gr->getMethod("getBestHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , latitude_j, longitude_j, preTileResolution_j, altitude_j, tileResolution_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CTerrainManager::getBestHeightAt(latitude, longitude, preTileResolution, altitude, tileResolution);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCTerrainManagerProxy);
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainManager_addTerrainLayer_1ITerrainLayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pLayer_j)
				{
					EarthView::World::Spatial3D::Atlas::ITerrainLayer *ref_pLayer = (EarthView::World::Spatial3D::Atlas::ITerrainLayer*) ref_pLayer_j;
					EarthView::World::Spatial3D::Atlas::CTerrainManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->addTerrainLayer(ref_pLayer);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainManager_insertTerrainLayer_1ev_1uint32_1ITerrainLayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong ref_pLayer_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial3D::Atlas::ITerrainLayer *ref_pLayer = (EarthView::World::Spatial3D::Atlas::ITerrainLayer*) ref_pLayer_j;
					EarthView::World::Spatial3D::Atlas::CTerrainManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->insertTerrainLayer(pos, ref_pLayer);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainManager_removeTerrainLayer_1ITerrainLayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pLayer_j)
				{
					EarthView::World::Spatial3D::Atlas::ITerrainLayer *pLayer = (EarthView::World::Spatial3D::Atlas::ITerrainLayer*) pLayer_j;
					EarthView::World::Spatial3D::Atlas::CTerrainManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->removeTerrainLayer(pLayer);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainManager_moveTerrainLayer_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jlong toWhere_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					ev_uint32 toWhere = (ev_uint32) toWhere_j;
					EarthView::World::Spatial3D::Atlas::CTerrainManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->moveTerrainLayer(index, toWhere);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainManager_clearTerrainLayers_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CTerrainManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainManager*) pObjXXXX;
					pObjectX->clearTerrainLayers();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainManager_getTerrainLayerCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CTerrainManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainManager*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getTerrainLayerCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainManager_getTerrainLayerIndex_1ITerrainLayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pLayer_j)
				{
					const EarthView::World::Spatial3D::Atlas::ITerrainLayer *pLayer = (const EarthView::World::Spatial3D::Atlas::ITerrainLayer*) pLayer_j;
					const 					EarthView::World::Spatial3D::Atlas::CTerrainManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainManager*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getTerrainLayerIndex(pLayer);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainManager_getTerrainLayer_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial3D::Atlas::CTerrainManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainManager*) pObjXXXX;
					EarthView::World::Spatial3D::Atlas::ITerrainLayer* __values1 = pObjectX->getTerrainLayer(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainManager_getHeightAt_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble latitude_j, jdouble longitude_j, jdouble targetSamplesPerDegrees_j, jlong altitude_j)
				{
					ev_real64 latitude = (ev_real64) latitude_j;
					ev_real64 longitude = (ev_real64) longitude_j;
					ev_real64 targetSamplesPerDegrees = (ev_real64) targetSamplesPerDegrees_j;
					ev_real64 &altitude = *(ev_real64*) altitude_j;
					EarthView::World::Spatial3D::Atlas::CTerrainManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainManager*) pObjXXXX;
					EarthView::World::Spatial3D::Atlas::AltitudeStatus __values1 = pObjectX->getHeightAt(latitude, longitude, targetSamplesPerDegrees, altitude);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainManager_getHeightAt_1ev_1real64_1ev_1real64_1ev_1real64_1TerrainDataSource_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble latitude_j, jdouble longitude_j, jdouble targetSamplesPerDegrees_j, jint source_j, jlong altitude_j)
				{
					ev_real64 latitude = (ev_real64) latitude_j;
					ev_real64 longitude = (ev_real64) longitude_j;
					ev_real64 targetSamplesPerDegrees = (ev_real64) targetSamplesPerDegrees_j;
					EarthView::World::Spatial3D::Atlas::ITerrainLayer::TerrainDataSource source = (EarthView::World::Spatial3D::Atlas::ITerrainLayer::TerrainDataSource) source_j;
					ev_real64 &altitude = *(ev_real64*) altitude_j;
					EarthView::World::Spatial3D::Atlas::CTerrainManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainManager*) pObjXXXX;
					EarthView::World::Spatial3D::Atlas::AltitudeStatus __values1 = pObjectX->getHeightAt(latitude, longitude, targetSamplesPerDegrees, source, altitude);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainManager_getHeightAt_1ev_1real64_1ev_1real64_1ev_1real64_1TerrainDataSource_1ev_1int32_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble latitude_j, jdouble longitude_j, jdouble targetSamplesPerDegrees_j, jint source_j, jint maxLivel_j, jlong altitude_j)
				{
					ev_real64 latitude = (ev_real64) latitude_j;
					ev_real64 longitude = (ev_real64) longitude_j;
					ev_real64 targetSamplesPerDegrees = (ev_real64) targetSamplesPerDegrees_j;
					EarthView::World::Spatial3D::Atlas::ITerrainLayer::TerrainDataSource source = (EarthView::World::Spatial3D::Atlas::ITerrainLayer::TerrainDataSource) source_j;
					ev_int32 maxLivel = (ev_int32) maxLivel_j;
					ev_real64 &altitude = *(ev_real64*) altitude_j;
					EarthView::World::Spatial3D::Atlas::CTerrainManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainManager*) pObjXXXX;
					EarthView::World::Spatial3D::Atlas::AltitudeStatus __values1 = pObjectX->getHeightAt(latitude, longitude, targetSamplesPerDegrees, source, maxLivel, altitude);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainManager_getBestHeightAt_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble latitude_j, jdouble longitude_j, jlong altitude_j)
				{
					ev_real64 latitude = (ev_real64) latitude_j;
					ev_real64 longitude = (ev_real64) longitude_j;
					ev_real64 &altitude = *(ev_real64*) altitude_j;
					EarthView::World::Spatial3D::Atlas::CTerrainManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->getBestHeightAt(latitude, longitude, altitude);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainManager_getBestHeightAt_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble latitude_j, jdouble longitude_j, jdouble preTileResolution_j, jlong altitude_j, jlong tileResolution_j)
				{
					ev_real64 latitude = (ev_real64) latitude_j;
					ev_real64 longitude = (ev_real64) longitude_j;
					ev_real64 preTileResolution = (ev_real64) preTileResolution_j;
					ev_real64 &altitude = *(ev_real64*) altitude_j;
					ev_real64 &tileResolution = *(ev_real64*) tileResolution_j;
					EarthView::World::Spatial3D::Atlas::CTerrainManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTerrainManagerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainManager::getBestHeightAt(latitude, longitude, preTileResolution, altitude, tileResolution);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->getBestHeightAt(latitude, longitude, preTileResolution, altitude, tileResolution);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainManager_register_1getBestHeightAt_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainManagerProxy *pObjectX = (JCTerrainManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getBestHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getBestHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback", "(DDDJJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainManager_getBestHeightAt_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble latitude_j, jdouble longitude_j, jdouble preTileResolution_j, jlong altitude_j, jlong tileResolution_j)
				{
					ev_real64 latitude = (ev_real64) latitude_j;
					ev_real64 longitude = (ev_real64) longitude_j;
					ev_real64 preTileResolution = (ev_real64) preTileResolution_j;
					ev_real64 &altitude = *(ev_real64*) altitude_j;
					ev_real64 &tileResolution = *(ev_real64*) tileResolution_j;
					EarthView::World::Spatial3D::Atlas::CTerrainManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainManager::getBestHeightAt(latitude, longitude, preTileResolution, altitude, tileResolution);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainManager_getTerrain_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint row_j, jint col_j, jint level_j)
				{
					ev_int32 row = (ev_int32) row_j;
					ev_int32 col = (ev_int32) col_j;
					ev_int32 level = (ev_int32) level_j;
					EarthView::World::Spatial3D::Atlas::CTerrainManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainManager*) pObjXXXX;
					EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->getTerrain(row, col, level);
					EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainManager_getTerrainFromMemoryCache_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint row_j, jint col_j, jint level_j)
				{
					ev_int32 row = (ev_int32) row_j;
					ev_int32 col = (ev_int32) col_j;
					ev_int32 level = (ev_int32) level_j;
					EarthView::World::Spatial3D::Atlas::CTerrainManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainManager*) pObjXXXX;
					EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->getTerrainFromMemoryCache(row, col, level);
					EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainManager_getTerrainFromDBCache_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint row_j, jint col_j, jint level_j)
				{
					ev_int32 row = (ev_int32) row_j;
					ev_int32 col = (ev_int32) col_j;
					ev_int32 level = (ev_int32) level_j;
					EarthView::World::Spatial3D::Atlas::CTerrainManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainManager*) pObjXXXX;
					EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->getTerrainFromDBCache(row, col, level);
					EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainManager_getTerrainFromServer_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint row_j, jint col_j, jint level_j)
				{
					ev_int32 row = (ev_int32) row_j;
					ev_int32 col = (ev_int32) col_j;
					ev_int32 level = (ev_int32) level_j;
					EarthView::World::Spatial3D::Atlas::CTerrainManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainManager*) pObjXXXX;
					EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->getTerrainFromServer(row, col, level);
					EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
		}
	}
}
