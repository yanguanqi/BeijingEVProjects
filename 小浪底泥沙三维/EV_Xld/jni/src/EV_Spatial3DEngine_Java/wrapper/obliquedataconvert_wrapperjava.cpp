/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/obliquedataconvert.h"
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
			namespace ModelManager
			{
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDataConvert_convertObqXmlToIndexDB_1CObliqueDBUtility_1EVString(JNIEnv *__env , jclass __clazz, jlong dbUtility_j, jstring strTileXml_j)
				{
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *dbUtility = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) dbUtility_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strTileXml_ch = (const ev_char*)__env->GetStringUTFChars(strTileXml_j,JNI_FALSE);
					const EVString strTileXml = strTileXml_ch;
					__env->ReleaseStringUTFChars(strTileXml_j, (const char *)strTileXml_ch);
					#else
					const ev_wchar* strTileXml_ch = (const ev_wchar*)__env->GetStringChars(strTileXml_j,JNI_FALSE);
					const EVString strTileXml = strTileXml_ch;
					__env->ReleaseStringChars(strTileXml_j, (const jchar *)strTileXml_ch);
					#endif
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CObliqueDataConvert::convertObqXmlToIndexDB(dbUtility, strTileXml);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDataConvert_queryMeshFilesByRegion_1CObliqueDBUtility_1ev_1int32_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jclass __clazz, jlong dbUtility_j, jint level_j, jdouble minLon_j, jdouble minLat_j, jdouble maxLon_j, jdouble maxLat_j)
				{
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *dbUtility = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) dbUtility_j;
					ev_int32 level = (ev_int32) level_j;
					ev_real64 minLon = (ev_real64) minLon_j;
					ev_real64 minLat = (ev_real64) minLat_j;
					ev_real64 maxLon = (ev_real64) maxLon_j;
					ev_real64 maxLat = (ev_real64) maxLat_j;
					EarthView::World::Core::StringVector __values1 = EarthView::World::Spatial3D::ModelManager::CObliqueDataConvert::queryMeshFilesByRegion(dbUtility, level, minLon, minLat, maxLon, maxLat);
					EarthView::World::Core::StringVector *returnvalues = new EarthView::World::Core::StringVector(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDataConvert_queryCpdStreamByRegion_1CObliqueDBUtility_1ev_1int32_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jclass __clazz, jlong dbUtility_j, jint level_j, jdouble minLon_j, jdouble minLat_j, jdouble maxLon_j, jdouble maxLat_j)
				{
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *dbUtility = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) dbUtility_j;
					ev_int32 level = (ev_int32) level_j;
					ev_real64 minLon = (ev_real64) minLon_j;
					ev_real64 minLat = (ev_real64) minLat_j;
					ev_real64 maxLon = (ev_real64) maxLon_j;
					ev_real64 maxLat = (ev_real64) maxLat_j;
					EarthView::World::Core::MemoryDataStreamPtr __values1 = EarthView::World::Spatial3D::ModelManager::CObliqueDataConvert::queryCpdStreamByRegion(dbUtility, level, minLon, minLat, maxLon, maxLat);
					EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDataConvert_getCpdFileByRegion_1CObliqueDBUtility_1ev_1int32_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jclass __clazz, jlong dbUtility_j, jint level_j, jdouble minLon_j, jdouble minLat_j, jdouble maxLon_j, jdouble maxLat_j)
				{
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *dbUtility = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) dbUtility_j;
					ev_int32 level = (ev_int32) level_j;
					ev_real64 minLon = (ev_real64) minLon_j;
					ev_real64 minLat = (ev_real64) minLat_j;
					ev_real64 maxLon = (ev_real64) maxLon_j;
					ev_real64 maxLat = (ev_real64) maxLat_j;
					EVString __values1 = EarthView::World::Spatial3D::ModelManager::CObliqueDataConvert::getCpdFileByRegion(dbUtility, level, minLon, minLat, maxLon, maxLat);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDataConvert_convertLodTreeExportXmlToDatabase_1CObliqueDBUtility_1EVString(JNIEnv *__env , jclass __clazz, jlong dbUtility_j, jstring strLodTreeExportXml_j)
				{
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *dbUtility = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) dbUtility_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strLodTreeExportXml_ch = (const ev_char*)__env->GetStringUTFChars(strLodTreeExportXml_j,JNI_FALSE);
					const EVString strLodTreeExportXml = strLodTreeExportXml_ch;
					__env->ReleaseStringUTFChars(strLodTreeExportXml_j, (const char *)strLodTreeExportXml_ch);
					#else
					const ev_wchar* strLodTreeExportXml_ch = (const ev_wchar*)__env->GetStringChars(strLodTreeExportXml_j,JNI_FALSE);
					const EVString strLodTreeExportXml = strLodTreeExportXml_ch;
					__env->ReleaseStringChars(strLodTreeExportXml_j, (const jchar *)strLodTreeExportXml_ch);
					#endif
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CObliqueDataConvert::convertLodTreeExportXmlToDatabase(dbUtility, strLodTreeExportXml);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDataConvert_convertTopLodToDatabase_1CObliqueDBUtility(JNIEnv *__env , jclass __clazz, jlong dbUtility_j)
				{
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *dbUtility = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) dbUtility_j;
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CObliqueDataConvert::convertTopLodToDatabase(dbUtility);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDataConvert_convertDemMetaInfoToDatabase_1CObliqueDBUtility_1EVString(JNIEnv *__env , jclass __clazz, jlong dbUtility_j, jstring strDemXml_j)
				{
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *dbUtility = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) dbUtility_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strDemXml_ch = (const ev_char*)__env->GetStringUTFChars(strDemXml_j,JNI_FALSE);
					const EVString strDemXml = strDemXml_ch;
					__env->ReleaseStringUTFChars(strDemXml_j, (const char *)strDemXml_ch);
					#else
					const ev_wchar* strDemXml_ch = (const ev_wchar*)__env->GetStringChars(strDemXml_j,JNI_FALSE);
					const EVString strDemXml = strDemXml_ch;
					__env->ReleaseStringChars(strDemXml_j, (const jchar *)strDemXml_ch);
					#endif
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CObliqueDataConvert::convertDemMetaInfoToDatabase(dbUtility, strDemXml);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDataConvert_clearAllLodTab_1CObliqueDBUtility(JNIEnv *__env , jclass __clazz, jlong dbUtility_j)
				{
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *dbUtility = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) dbUtility_j;
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CObliqueDataConvert::clearAllLodTab(dbUtility);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDataConvert_convertLodXmlToDatabase_1CObliqueDBUtility_1EVString(JNIEnv *__env , jclass __clazz, jlong dbUtility_j, jstring strTileXml_j)
				{
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *dbUtility = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) dbUtility_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strTileXml_ch = (const ev_char*)__env->GetStringUTFChars(strTileXml_j,JNI_FALSE);
					const EVString strTileXml = strTileXml_ch;
					__env->ReleaseStringUTFChars(strTileXml_j, (const char *)strTileXml_ch);
					#else
					const ev_wchar* strTileXml_ch = (const ev_wchar*)__env->GetStringChars(strTileXml_j,JNI_FALSE);
					const EVString strTileXml = strTileXml_ch;
					__env->ReleaseStringChars(strTileXml_j, (const jchar *)strTileXml_ch);
					#endif
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CObliqueDataConvert::convertLodXmlToDatabase(dbUtility, strTileXml);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDataConvert_convertAllLodXmlToDatabase_1CObliqueDBUtility_1EVString(JNIEnv *__env , jclass __clazz, jlong dbUtility_j, jstring strTileXml_j)
				{
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *dbUtility = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) dbUtility_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strTileXml_ch = (const ev_char*)__env->GetStringUTFChars(strTileXml_j,JNI_FALSE);
					const EVString strTileXml = strTileXml_ch;
					__env->ReleaseStringUTFChars(strTileXml_j, (const char *)strTileXml_ch);
					#else
					const ev_wchar* strTileXml_ch = (const ev_wchar*)__env->GetStringChars(strTileXml_j,JNI_FALSE);
					const EVString strTileXml = strTileXml_ch;
					__env->ReleaseStringChars(strTileXml_j, (const jchar *)strTileXml_ch);
					#endif
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CObliqueDataConvert::convertAllLodXmlToDatabase(dbUtility, strTileXml);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDataConvert_updateTileModelBound_1CObliqueDBUtility_1EVString(JNIEnv *__env , jclass __clazz, jlong dbUtility_j, jstring tileName_j)
				{
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *dbUtility = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) dbUtility_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* tileName_ch = (const ev_char*)__env->GetStringUTFChars(tileName_j,JNI_FALSE);
					const EVString tileName = tileName_ch;
					__env->ReleaseStringUTFChars(tileName_j, (const char *)tileName_ch);
					#else
					const ev_wchar* tileName_ch = (const ev_wchar*)__env->GetStringChars(tileName_j,JNI_FALSE);
					const EVString tileName = tileName_ch;
					__env->ReleaseStringChars(tileName_j, (const jchar *)tileName_ch);
					#endif
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CObliqueDataConvert::updateTileModelBound(dbUtility, tileName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDataConvert_updateTileModelBoundForMeshx_1CObliqueDBUtility_1EVString_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real32(JNIEnv *__env , jclass __clazz, jlong dbUtility_j, jstring tileName_j, jlong xmin_j, jlong xmax_j, jlong ymin_j, jlong ymax_j, jlong zmin_j, jlong zmax_j)
				{
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *dbUtility = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) dbUtility_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* tileName_ch = (const ev_char*)__env->GetStringUTFChars(tileName_j,JNI_FALSE);
					const EVString tileName = tileName_ch;
					__env->ReleaseStringUTFChars(tileName_j, (const char *)tileName_ch);
					#else
					const ev_wchar* tileName_ch = (const ev_wchar*)__env->GetStringChars(tileName_j,JNI_FALSE);
					const EVString tileName = tileName_ch;
					__env->ReleaseStringChars(tileName_j, (const jchar *)tileName_ch);
					#endif
					ev_real32 &xmin = *(ev_real32*) xmin_j;
					ev_real32 &xmax = *(ev_real32*) xmax_j;
					ev_real32 &ymin = *(ev_real32*) ymin_j;
					ev_real32 &ymax = *(ev_real32*) ymax_j;
					ev_real32 &zmin = *(ev_real32*) zmin_j;
					ev_real32 &zmax = *(ev_real32*) zmax_j;
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CObliqueDataConvert::updateTileModelBoundForMeshx(dbUtility, tileName, xmin, xmax, ymin, ymax, zmin, zmax);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDataConvert_updateDatasetBound_1CObliqueDBUtility(JNIEnv *__env , jclass __clazz, jlong dbUtility_j)
				{
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *dbUtility = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) dbUtility_j;
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CObliqueDataConvert::updateDatasetBound(dbUtility);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDataConvert_generalAndUpdateModelBound_1CObliqueDBUtility_1EVString_1EVString_1CMeshPtr_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real32(JNIEnv *__env , jclass __clazz, jlong dbUtility_j, jstring tileName_j, jstring meshName_j, jlong meshPtr_j, jlong xmin_j, jlong xmax_j, jlong zmin_j, jlong zmax_j)
				{
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *dbUtility = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) dbUtility_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* tileName_ch = (const ev_char*)__env->GetStringUTFChars(tileName_j,JNI_FALSE);
					const EVString tileName = tileName_ch;
					__env->ReleaseStringUTFChars(tileName_j, (const char *)tileName_ch);
					#else
					const ev_wchar* tileName_ch = (const ev_wchar*)__env->GetStringChars(tileName_j,JNI_FALSE);
					const EVString tileName = tileName_ch;
					__env->ReleaseStringChars(tileName_j, (const jchar *)tileName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* meshName_ch = (const ev_char*)__env->GetStringUTFChars(meshName_j,JNI_FALSE);
					const EVString meshName = meshName_ch;
					__env->ReleaseStringUTFChars(meshName_j, (const char *)meshName_ch);
					#else
					const ev_wchar* meshName_ch = (const ev_wchar*)__env->GetStringChars(meshName_j,JNI_FALSE);
					const EVString meshName = meshName_ch;
					__env->ReleaseStringChars(meshName_j, (const jchar *)meshName_ch);
					#endif
					const EarthView::World::Graphic::CMeshPtr &meshPtr = *(EarthView::World::Graphic::CMeshPtr*) meshPtr_j;
					ev_real32 &xmin = *(ev_real32*) xmin_j;
					ev_real32 &xmax = *(ev_real32*) xmax_j;
					ev_real32 &zmin = *(ev_real32*) zmin_j;
					ev_real32 &zmax = *(ev_real32*) zmax_j;
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CObliqueDataConvert::generalAndUpdateModelBound(dbUtility, tileName, meshName, meshPtr, xmin, xmax, zmin, zmax);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDataConvert_generalTextureCoordinate_1CMeshPtr_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real32(JNIEnv *__env , jclass __clazz, jlong meshPtr_j, jfloat xmin_j, jfloat xmax_j, jfloat zmin_j, jfloat zmax_j)
				{
					const EarthView::World::Graphic::CMeshPtr &meshPtr = *(EarthView::World::Graphic::CMeshPtr*) meshPtr_j;
					ev_real32 xmin = (ev_real32) xmin_j;
					ev_real32 xmax = (ev_real32) xmax_j;
					ev_real32 zmin = (ev_real32) zmin_j;
					ev_real32 zmax = (ev_real32) zmax_j;
					EarthView::World::Spatial3D::ModelManager::CObliqueDataConvert::generalTextureCoordinate(meshPtr, xmin, xmax, zmin, zmax);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDataConvert_updateLocalMatrix_1CObliqueDBUtility_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jclass __clazz, jlong dbUtility_j, jdouble posx_j, jdouble posy_j, jdouble posz_j, jdouble scalex_j, jdouble scaley_j, jdouble scalez_j, jdouble rotw_j, jdouble rotx_j, jdouble roty_j, jdouble rotz_j)
				{
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *dbUtility = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) dbUtility_j;
					ev_real64 posx = (ev_real64) posx_j;
					ev_real64 posy = (ev_real64) posy_j;
					ev_real64 posz = (ev_real64) posz_j;
					ev_real64 scalex = (ev_real64) scalex_j;
					ev_real64 scaley = (ev_real64) scaley_j;
					ev_real64 scalez = (ev_real64) scalez_j;
					ev_real64 rotw = (ev_real64) rotw_j;
					ev_real64 rotx = (ev_real64) rotx_j;
					ev_real64 roty = (ev_real64) roty_j;
					ev_real64 rotz = (ev_real64) rotz_j;
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CObliqueDataConvert::updateLocalMatrix(dbUtility, posx, posy, posz, scalex, scaley, scalez, rotw, rotx, roty, rotz);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDataConvert_convertTileLodToPackage7z_1CObliqueDBUtility_1EVString_1EVString(JNIEnv *__env , jclass __clazz, jlong dbUtility_j, jstring tileName_j, jstring tileFolder_j)
				{
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *dbUtility = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) dbUtility_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* tileName_ch = (const ev_char*)__env->GetStringUTFChars(tileName_j,JNI_FALSE);
					const EVString tileName = tileName_ch;
					__env->ReleaseStringUTFChars(tileName_j, (const char *)tileName_ch);
					#else
					const ev_wchar* tileName_ch = (const ev_wchar*)__env->GetStringChars(tileName_j,JNI_FALSE);
					const EVString tileName = tileName_ch;
					__env->ReleaseStringChars(tileName_j, (const jchar *)tileName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* tileFolder_ch = (const ev_char*)__env->GetStringUTFChars(tileFolder_j,JNI_FALSE);
					const EVString tileFolder = tileFolder_ch;
					__env->ReleaseStringUTFChars(tileFolder_j, (const char *)tileFolder_ch);
					#else
					const ev_wchar* tileFolder_ch = (const ev_wchar*)__env->GetStringChars(tileFolder_j,JNI_FALSE);
					const EVString tileFolder = tileFolder_ch;
					__env->ReleaseStringChars(tileFolder_j, (const jchar *)tileFolder_ch);
					#endif
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CObliqueDataConvert::convertTileLodToPackage7z(dbUtility, tileName, tileFolder);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDataConvert_generalLevelMapTable_1CObliqueDBUtility_1ev_1uint32_1CStringArray(JNIEnv *__env , jclass __clazz, jlong dbUtility_j, jlong maxLevel_j, jlong tileLodXmlVec_j)
				{
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *dbUtility = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) dbUtility_j;
					ev_uint32 maxLevel = (ev_uint32) maxLevel_j;
					EarthView::World::Core::CStringArray &tileLodXmlVec = *(EarthView::World::Core::CStringArray*) tileLodXmlVec_j;
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CObliqueDataConvert::generalLevelMapTable(dbUtility, maxLevel, tileLodXmlVec);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDataConvert_convertMetaInfoToPackage7z_1CObliqueDBUtility_1EVString(JNIEnv *__env , jclass __clazz, jlong dbUtility_j, jstring destFolder_j)
				{
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *dbUtility = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) dbUtility_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* destFolder_ch = (const ev_char*)__env->GetStringUTFChars(destFolder_j,JNI_FALSE);
					const EVString destFolder = destFolder_ch;
					__env->ReleaseStringUTFChars(destFolder_j, (const char *)destFolder_ch);
					#else
					const ev_wchar* destFolder_ch = (const ev_wchar*)__env->GetStringChars(destFolder_j,JNI_FALSE);
					const EVString destFolder = destFolder_ch;
					__env->ReleaseStringChars(destFolder_j, (const jchar *)destFolder_ch);
					#endif
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CObliqueDataConvert::convertMetaInfoToPackage7z(dbUtility, destFolder);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDataConvert_convertMetaInfoToPackage7z_1CObliqueDBUtility_1EVString_1MemoryDataStreamVector_1ev_1uint8(JNIEnv *__env , jclass __clazz, jlong dbUtility_j, jstring destFolder_j, jlong sharedTextureVec_j, jshort maxLevel_j)
				{
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *dbUtility = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) dbUtility_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* destFolder_ch = (const ev_char*)__env->GetStringUTFChars(destFolder_j,JNI_FALSE);
					const EVString destFolder = destFolder_ch;
					__env->ReleaseStringUTFChars(destFolder_j, (const char *)destFolder_ch);
					#else
					const ev_wchar* destFolder_ch = (const ev_wchar*)__env->GetStringChars(destFolder_j,JNI_FALSE);
					const EVString destFolder = destFolder_ch;
					__env->ReleaseStringChars(destFolder_j, (const jchar *)destFolder_ch);
					#endif
					const EarthView::World::Core::MemoryDataStreamVector &sharedTextureVec = *(EarthView::World::Core::MemoryDataStreamVector*) sharedTextureVec_j;
					ev_uint8 maxLevel = (ev_uint8) maxLevel_j;
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CObliqueDataConvert::convertMetaInfoToPackage7z(dbUtility, destFolder, sharedTextureVec, maxLevel);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObliqueDataConvert_convertMetaInfoToPackage7z_1CObliqueDBUtility_1EVString_1MemoryDataStreamVector_1ev_1uint8_1OBQRecordInfoList(JNIEnv *__env , jclass __clazz, jlong dbUtility_j, jstring destFolder_j, jlong sharedTextureVec_j, jshort maxLevel_j, jlong recordInfoList_j)
				{
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *dbUtility = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) dbUtility_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* destFolder_ch = (const ev_char*)__env->GetStringUTFChars(destFolder_j,JNI_FALSE);
					const EVString destFolder = destFolder_ch;
					__env->ReleaseStringUTFChars(destFolder_j, (const char *)destFolder_ch);
					#else
					const ev_wchar* destFolder_ch = (const ev_wchar*)__env->GetStringChars(destFolder_j,JNI_FALSE);
					const EVString destFolder = destFolder_ch;
					__env->ReleaseStringChars(destFolder_j, (const jchar *)destFolder_ch);
					#endif
					const EarthView::World::Core::MemoryDataStreamVector &sharedTextureVec = *(EarthView::World::Core::MemoryDataStreamVector*) sharedTextureVec_j;
					ev_uint8 maxLevel = (ev_uint8) maxLevel_j;
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList recordInfoList = *(EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList*) recordInfoList_j;
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CObliqueDataConvert::convertMetaInfoToPackage7z(dbUtility, destFolder, sharedTextureVec, maxLevel, recordInfoList);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_UnifyMeshTool_setWorkParam_1IObqDataset_1TerrainRevisorVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDataset_j, jlong terrainRevisors_j)
				{
					EarthView::World::Spatial3D::ModelManager::IObqDataset *pDataset = (EarthView::World::Spatial3D::ModelManager::IObqDataset*) pDataset_j;
					const EarthView::World::Spatial3D::TerrainRevisorVector &terrainRevisors = *(EarthView::World::Spatial3D::TerrainRevisorVector*) terrainRevisors_j;
					EarthView::World::Spatial3D::ModelManager::CUnifyMeshTool *pObjectX = (EarthView::World::Spatial3D::ModelManager::CUnifyMeshTool*) pObjXXXX;
					pObjectX->setWorkParam(pDataset, terrainRevisors);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_UnifyMeshTool_getIntersectTopTile_1CStringArray_1LodIndexVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong outTileNames_j, jlong topLodIndexVec_j)
				{
					EarthView::World::Core::CStringArray &outTileNames = *(EarthView::World::Core::CStringArray*) outTileNames_j;
					EarthView::World::Spatial3D::ModelManager::LodIndexVector &topLodIndexVec = *(EarthView::World::Spatial3D::ModelManager::LodIndexVector*) topLodIndexVec_j;
					EarthView::World::Spatial3D::ModelManager::CUnifyMeshTool *pObjectX = (EarthView::World::Spatial3D::ModelManager::CUnifyMeshTool*) pObjXXXX;
					pObjectX->getIntersectTopTile(outTileNames, topLodIndexVec);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_UnifyMeshTool_unifyAllMeshInTile_1EVString_1LodIndex(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring tileName_j, jlong pTopLodIndex_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* tileName_ch = (const ev_char*)__env->GetStringUTFChars(tileName_j,JNI_FALSE);
					const EVString tileName = tileName_ch;
					__env->ReleaseStringUTFChars(tileName_j, (const char *)tileName_ch);
					#else
					const ev_wchar* tileName_ch = (const ev_wchar*)__env->GetStringChars(tileName_j,JNI_FALSE);
					const EVString tileName = tileName_ch;
					__env->ReleaseStringChars(tileName_j, (const jchar *)tileName_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::LodIndex *pTopLodIndex = (EarthView::World::Spatial3D::ModelManager::LodIndex*) pTopLodIndex_j;
					EarthView::World::Spatial3D::ModelManager::CUnifyMeshTool *pObjectX = (EarthView::World::Spatial3D::ModelManager::CUnifyMeshTool*) pObjXXXX;
					pObjectX->unifyAllMeshInTile(tileName, pTopLodIndex);
				}
			}
		}
	}
}
