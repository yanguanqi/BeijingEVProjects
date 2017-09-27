/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataexchange/meshanalyse.h"
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
			namespace DataExchange
			{
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshFileLoader_loadFiles_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring folder_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* folder_ch = (const ev_char*)__env->GetStringUTFChars(folder_j,JNI_FALSE);
					const EVString folder = folder_ch;
					__env->ReleaseStringUTFChars(folder_j, (const char *)folder_ch);
					#else
					const ev_wchar* folder_ch = (const ev_wchar*)__env->GetStringChars(folder_j,JNI_FALSE);
					const EVString folder = folder_ch;
					__env->ReleaseStringChars(folder_j, (const jchar *)folder_ch);
					#endif
					EarthView::World::Spatial3D::DataExchange::CMeshFileLoader *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshFileLoader*) pObjXXXX;
					ev_bool __values1 = pObjectX->loadFiles(folder);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshFileLoader_unloadFiles_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshFileLoader *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshFileLoader*) pObjXXXX;
					ev_bool __values1 = pObjectX->unloadFiles();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshFileLoader_getMeshFiles_1CStringArray(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong files_j)
				{
					EarthView::World::Core::CStringArray &files = *(EarthView::World::Core::CStringArray*) files_j;
					EarthView::World::Spatial3D::DataExchange::CMeshFileLoader *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshFileLoader*) pObjXXXX;
					pObjectX->getMeshFiles(files);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshFileLoader_findFile_1EVString_1CStringArray(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jlong files_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
					const EVString filename = filename_ch;
					__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
					#else
					const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
					const EVString filename = filename_ch;
					__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
					#endif
					EarthView::World::Core::CStringArray &files = *(EarthView::World::Core::CStringArray*) files_j;
					EarthView::World::Spatial3D::DataExchange::CMeshFileLoader *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshFileLoader*) pObjXXXX;
					ev_bool __values1 = pObjectX->findFile(filename, files);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshFileLoader_getFilename_1EVString(JNIEnv *__env , jclass __clazz, jstring file_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* file_ch = (const ev_char*)__env->GetStringUTFChars(file_j,JNI_FALSE);
					const EVString file = file_ch;
					__env->ReleaseStringUTFChars(file_j, (const char *)file_ch);
					#else
					const ev_wchar* file_ch = (const ev_wchar*)__env->GetStringChars(file_j,JNI_FALSE);
					const EVString file = file_ch;
					__env->ReleaseStringChars(file_j, (const jchar *)file_ch);
					#endif
					EVString __values1 = EarthView::World::Spatial3D::DataExchange::CMeshFileLoader::getFilename(file);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshFileLoader_getErrors_1CStringArray(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong errors_j)
				{
					EarthView::World::Core::CStringArray &errors = *(EarthView::World::Core::CStringArray*) errors_j;
					EarthView::World::Spatial3D::DataExchange::CMeshFileLoader *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshFileLoader*) pObjXXXX;
					pObjectX->getErrors(errors);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshAnalyse_open_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring meshName_j, jstring resourceGroup_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* meshName_ch = (const ev_char*)__env->GetStringUTFChars(meshName_j,JNI_FALSE);
					const EVString meshName = meshName_ch;
					__env->ReleaseStringUTFChars(meshName_j, (const char *)meshName_ch);
					#else
					const ev_wchar* meshName_ch = (const ev_wchar*)__env->GetStringChars(meshName_j,JNI_FALSE);
					const EVString meshName = meshName_ch;
					__env->ReleaseStringChars(meshName_j, (const jchar *)meshName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* resourceGroup_ch = (const ev_char*)__env->GetStringUTFChars(resourceGroup_j,JNI_FALSE);
					const EVString resourceGroup = resourceGroup_ch;
					__env->ReleaseStringUTFChars(resourceGroup_j, (const char *)resourceGroup_ch);
					#else
					const ev_wchar* resourceGroup_ch = (const ev_wchar*)__env->GetStringChars(resourceGroup_j,JNI_FALSE);
					const EVString resourceGroup = resourceGroup_ch;
					__env->ReleaseStringChars(resourceGroup_j, (const jchar *)resourceGroup_ch);
					#endif
					EarthView::World::Spatial3D::DataExchange::CMeshAnalyse *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshAnalyse*) pObjXXXX;
					ev_bool __values1 = pObjectX->open(meshName, resourceGroup);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshAnalyse_open_1EVString_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring meshName_j, jstring resourcePath_j, jstring resourceGroup_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* meshName_ch = (const ev_char*)__env->GetStringUTFChars(meshName_j,JNI_FALSE);
					const EVString meshName = meshName_ch;
					__env->ReleaseStringUTFChars(meshName_j, (const char *)meshName_ch);
					#else
					const ev_wchar* meshName_ch = (const ev_wchar*)__env->GetStringChars(meshName_j,JNI_FALSE);
					const EVString meshName = meshName_ch;
					__env->ReleaseStringChars(meshName_j, (const jchar *)meshName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* resourcePath_ch = (const ev_char*)__env->GetStringUTFChars(resourcePath_j,JNI_FALSE);
					const EVString resourcePath = resourcePath_ch;
					__env->ReleaseStringUTFChars(resourcePath_j, (const char *)resourcePath_ch);
					#else
					const ev_wchar* resourcePath_ch = (const ev_wchar*)__env->GetStringChars(resourcePath_j,JNI_FALSE);
					const EVString resourcePath = resourcePath_ch;
					__env->ReleaseStringChars(resourcePath_j, (const jchar *)resourcePath_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* resourceGroup_ch = (const ev_char*)__env->GetStringUTFChars(resourceGroup_j,JNI_FALSE);
					const EVString resourceGroup = resourceGroup_ch;
					__env->ReleaseStringUTFChars(resourceGroup_j, (const char *)resourceGroup_ch);
					#else
					const ev_wchar* resourceGroup_ch = (const ev_wchar*)__env->GetStringChars(resourceGroup_j,JNI_FALSE);
					const EVString resourceGroup = resourceGroup_ch;
					__env->ReleaseStringChars(resourceGroup_j, (const jchar *)resourceGroup_ch);
					#endif
					EarthView::World::Spatial3D::DataExchange::CMeshAnalyse *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshAnalyse*) pObjXXXX;
					ev_bool __values1 = pObjectX->open(meshName, resourcePath, resourceGroup);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshAnalyse_close_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshAnalyse *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshAnalyse*) pObjXXXX;
					pObjectX->close();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshAnalyse_isExistGPU_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshAnalyse *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshAnalyse*) pObjXXXX;
					ev_bool __values1 = pObjectX->isExistGPU();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshAnalyse_getSkeleton_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshAnalyse *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshAnalyse*) pObjXXXX;
					EVString __values1 = pObjectX->getSkeleton();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshAnalyse_getMaterials_1CStringArray(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong materials_j)
				{
					EarthView::World::Core::CStringArray &materials = *(EarthView::World::Core::CStringArray*) materials_j;
					EarthView::World::Spatial3D::DataExchange::CMeshAnalyse *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshAnalyse*) pObjXXXX;
					pObjectX->getMaterials(materials);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshAnalyse_getTextures_1CStringArray(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong textures_j)
				{
					EarthView::World::Core::CStringArray &textures = *(EarthView::World::Core::CStringArray*) textures_j;
					EarthView::World::Spatial3D::DataExchange::CMeshAnalyse *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshAnalyse*) pObjXXXX;
					pObjectX->getTextures(textures);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshAnalyse_getGpus_1CStringArray_1CStringArray(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong gpus_j, jlong progs_j)
				{
					EarthView::World::Core::CStringArray &gpus = *(EarthView::World::Core::CStringArray*) gpus_j;
					EarthView::World::Core::CStringArray &progs = *(EarthView::World::Core::CStringArray*) progs_j;
					EarthView::World::Spatial3D::DataExchange::CMeshAnalyse *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshAnalyse*) pObjXXXX;
					pObjectX->getGpus(gpus, progs);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshAnalyse_getBoundingBox_1CAxisAlignedBox(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong boundingbox_j)
				{
					EarthView::World::Spatial::Math::CAxisAlignedBox &boundingbox = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) boundingbox_j;
					EarthView::World::Spatial3D::DataExchange::CMeshAnalyse *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshAnalyse*) pObjXXXX;
					pObjectX->getBoundingBox(boundingbox);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshResourceItem_getValidState_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshResourceItem *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshResourceItem*) pObjXXXX;
					ev_bool __values1 = pObjectX->getValidState();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshResourceItem_setValidState_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean state_j)
				{
					ev_bool state = (ev_bool) state_j;
					EarthView::World::Spatial3D::DataExchange::CMeshResourceItem *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshResourceItem*) pObjXXXX;
					pObjectX->setValidState(state);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshResourceItem_getUploadState_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshResourceItem *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshResourceItem*) pObjXXXX;
					ev_bool __values1 = pObjectX->getUploadState();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshResourceItem_setUploadState_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean state_j)
				{
					ev_bool state = (ev_bool) state_j;
					EarthView::World::Spatial3D::DataExchange::CMeshResourceItem *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshResourceItem*) pObjXXXX;
					pObjectX->setUploadState(state);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshResourceItem_getResourceName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshResourceItem *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshResourceItem*) pObjXXXX;
					EVString __values1 = pObjectX->getResourceName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshResourceItem_setResourceName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring resourceName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* resourceName_ch = (const ev_char*)__env->GetStringUTFChars(resourceName_j,JNI_FALSE);
					const EVString resourceName = resourceName_ch;
					__env->ReleaseStringUTFChars(resourceName_j, (const char *)resourceName_ch);
					#else
					const ev_wchar* resourceName_ch = (const ev_wchar*)__env->GetStringChars(resourceName_j,JNI_FALSE);
					const EVString resourceName = resourceName_ch;
					__env->ReleaseStringChars(resourceName_j, (const jchar *)resourceName_ch);
					#endif
					EarthView::World::Spatial3D::DataExchange::CMeshResourceItem *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshResourceItem*) pObjXXXX;
					pObjectX->setResourceName(resourceName);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshResourceItem_getResourceFile_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshResourceItem *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshResourceItem*) pObjXXXX;
					EVString __values1 = pObjectX->getResourceFile();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshResourceItem_setResourceFile_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
					const EVString filename = filename_ch;
					__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
					#else
					const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
					const EVString filename = filename_ch;
					__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
					#endif
					EarthView::World::Spatial3D::DataExchange::CMeshResourceItem *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshResourceItem*) pObjXXXX;
					pObjectX->setResourceFile(filename);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshResourceItem_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshResourceItem *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshResourceItem*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::MaterialResourceType __values1 = pObjectX->getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshResourceItem_setType_1MaterialResourceType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial3D::Dataset::MaterialResourceType type = (EarthView::World::Spatial3D::Dataset::MaterialResourceType) type_j;
					EarthView::World::Spatial3D::DataExchange::CMeshResourceItem *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshResourceItem*) pObjXXXX;
					pObjectX->setType(type);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshResourceItem_addRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshResourceItem *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshResourceItem*) pObjXXXX;
					pObjectX->addRef();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshResourceItem_delRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshResourceItem *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshResourceItem*) pObjXXXX;
					pObjectX->delRef();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshResourceItem_resetRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshResourceItem *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshResourceItem*) pObjXXXX;
					pObjectX->resetRef();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshResourceItem_getRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshResourceItem *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshResourceItem*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getRef();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshResourceItem_setRef_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_uint32 count = (ev_uint32) count_j;
					EarthView::World::Spatial3D::DataExchange::CMeshResourceItem *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshResourceItem*) pObjXXXX;
					pObjectX->setRef(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshResourceMap_getMeshNames_1CStringArray(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong meshNames_j)
				{
					EarthView::World::Core::CStringArray &meshNames = *(EarthView::World::Core::CStringArray*) meshNames_j;
					EarthView::World::Spatial3D::DataExchange::CMeshResourceMap *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshResourceMap*) pObjXXXX;
					pObjectX->getMeshNames(meshNames);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshResourceMap_addResItem_1EVString_1CMeshResourceItem(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring meshName_j, jlong res_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* meshName_ch = (const ev_char*)__env->GetStringUTFChars(meshName_j,JNI_FALSE);
					const EVString meshName = meshName_ch;
					__env->ReleaseStringUTFChars(meshName_j, (const char *)meshName_ch);
					#else
					const ev_wchar* meshName_ch = (const ev_wchar*)__env->GetStringChars(meshName_j,JNI_FALSE);
					const EVString meshName = meshName_ch;
					__env->ReleaseStringChars(meshName_j, (const jchar *)meshName_ch);
					#endif
					EarthView::World::Spatial3D::DataExchange::CMeshResourceItem *res = (EarthView::World::Spatial3D::DataExchange::CMeshResourceItem*) res_j;
					EarthView::World::Spatial3D::DataExchange::CMeshResourceMap *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshResourceMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->addResItem(meshName, res);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshResourceMap_deleteResItem_1EVString_1CMeshResourceItem(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring meshName_j, jlong res_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* meshName_ch = (const ev_char*)__env->GetStringUTFChars(meshName_j,JNI_FALSE);
					const EVString meshName = meshName_ch;
					__env->ReleaseStringUTFChars(meshName_j, (const char *)meshName_ch);
					#else
					const ev_wchar* meshName_ch = (const ev_wchar*)__env->GetStringChars(meshName_j,JNI_FALSE);
					const EVString meshName = meshName_ch;
					__env->ReleaseStringChars(meshName_j, (const jchar *)meshName_ch);
					#endif
					EarthView::World::Spatial3D::DataExchange::CMeshResourceItem *res = (EarthView::World::Spatial3D::DataExchange::CMeshResourceItem*) res_j;
					EarthView::World::Spatial3D::DataExchange::CMeshResourceMap *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshResourceMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->deleteResItem(meshName, res);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshResourceMap_getResNum_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring meshName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* meshName_ch = (const ev_char*)__env->GetStringUTFChars(meshName_j,JNI_FALSE);
					const EVString meshName = meshName_ch;
					__env->ReleaseStringUTFChars(meshName_j, (const char *)meshName_ch);
					#else
					const ev_wchar* meshName_ch = (const ev_wchar*)__env->GetStringChars(meshName_j,JNI_FALSE);
					const EVString meshName = meshName_ch;
					__env->ReleaseStringChars(meshName_j, (const jchar *)meshName_ch);
					#endif
					EarthView::World::Spatial3D::DataExchange::CMeshResourceMap *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshResourceMap*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getResNum(meshName);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshResourceMap_getResItem_1EVString_1ev_1uint32_1CMeshResourceItem(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring meshName_j, jlong index_j, jlong res_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* meshName_ch = (const ev_char*)__env->GetStringUTFChars(meshName_j,JNI_FALSE);
					const EVString meshName = meshName_ch;
					__env->ReleaseStringUTFChars(meshName_j, (const char *)meshName_ch);
					#else
					const ev_wchar* meshName_ch = (const ev_wchar*)__env->GetStringChars(meshName_j,JNI_FALSE);
					const EVString meshName = meshName_ch;
					__env->ReleaseStringChars(meshName_j, (const jchar *)meshName_ch);
					#endif
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial3D::DataExchange::CMeshResourceItem *res = (EarthView::World::Spatial3D::DataExchange::CMeshResourceItem*) res_j;
					EarthView::World::Spatial3D::DataExchange::CMeshResourceMap *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshResourceMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->getResItem(meshName, index, res);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
		}
	}
}
