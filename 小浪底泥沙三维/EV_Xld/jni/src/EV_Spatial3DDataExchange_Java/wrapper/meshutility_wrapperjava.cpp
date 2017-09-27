/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataexchange/meshutility.h"
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
			namespace Dataset
			{
			}
			namespace DataExchange
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace DataExchange
			{
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshUtility_composeWorldMartix_1CVector3_1CVector3_1CVector3(JNIEnv *__env , jclass __clazz, jlong pos_j, jlong scale_j, jlong ros_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &pos = *(EarthView::World::Spatial::Math::CVector3*) pos_j;
					const EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
					const EarthView::World::Spatial::Math::CVector3 &ros = *(EarthView::World::Spatial::Math::CVector3*) ros_j;
					EarthView::World::Spatial::Math::CMatrix4 __values1 = EarthView::World::Spatial3D::DataExchange::CMeshUtility::composeWorldMartix(pos, scale, ros);
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshUtility_composeWorldMartix_1ev_1real32_1ev_1real32_1ev_1real32(JNIEnv *__env , jclass __clazz, jfloat lat_j, jfloat lon_j, jfloat ati_j)
				{
					ev_real32 lat = (ev_real32) lat_j;
					ev_real32 lon = (ev_real32) lon_j;
					ev_real32 ati = (ev_real32) ati_j;
					EarthView::World::Spatial::Math::CMatrix4 __values1 = EarthView::World::Spatial3D::DataExchange::CMeshUtility::composeWorldMartix(lat, lon, ati);
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshUtility_decomposeWorldMatrix_1CMatrix4_1ev_1real64_1ev_1real64_1ev_1real64_1CVector3_1CQuaternion(JNIEnv *__env , jclass __clazz, jlong worldMatrix_j, jlong lat_j, jlong lon_j, jlong alt_j, jlong scaleInLocal_j, jlong orientInLocal_j)
				{
					const EarthView::World::Spatial::Math::CMatrix4 &worldMatrix = *(EarthView::World::Spatial::Math::CMatrix4*) worldMatrix_j;
					ev_real64 &lat = *(ev_real64*) lat_j;
					ev_real64 &lon = *(ev_real64*) lon_j;
					ev_real64 &alt = *(ev_real64*) alt_j;
					EarthView::World::Spatial::Math::CVector3 &scaleInLocal = *(EarthView::World::Spatial::Math::CVector3*) scaleInLocal_j;
					EarthView::World::Spatial::Math::CQuaternion &orientInLocal = *(EarthView::World::Spatial::Math::CQuaternion*) orientInLocal_j;
					EarthView::World::Spatial3D::DataExchange::CMeshUtility::decomposeWorldMatrix(worldMatrix, lat, lon, alt, scaleInLocal, orientInLocal);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshUtility_decomposeMatrixToPosition_1CMatrix4_1ev_1real64_1ev_1real64_1ev_1real64_1CVector3_1CQuaternion(JNIEnv *__env , jclass __clazz, jlong worldMatrix_j, jlong lat_j, jlong lon_j, jlong alt_j, jlong scaleInLocal_j, jlong orientInLocal_j)
				{
					const EarthView::World::Spatial::Math::CMatrix4 &worldMatrix = *(EarthView::World::Spatial::Math::CMatrix4*) worldMatrix_j;
					ev_real64 &lat = *(ev_real64*) lat_j;
					ev_real64 &lon = *(ev_real64*) lon_j;
					ev_real64 &alt = *(ev_real64*) alt_j;
					EarthView::World::Spatial::Math::CVector3 &scaleInLocal = *(EarthView::World::Spatial::Math::CVector3*) scaleInLocal_j;
					EarthView::World::Spatial::Math::CQuaternion &orientInLocal = *(EarthView::World::Spatial::Math::CQuaternion*) orientInLocal_j;
					EarthView::World::Spatial3D::DataExchange::CMeshUtility::decomposeMatrixToPosition(worldMatrix, lat, lon, alt, scaleInLocal, orientInLocal);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshUtility_exportToModelBase_1CMeshData_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong meshdata_j, jstring resourcePath_j)
				{
					const EarthView::World::Spatial3D::DataExchange::CMeshData &meshdata = *(EarthView::World::Spatial3D::DataExchange::CMeshData*) meshdata_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* resourcePath_ch = (const ev_char*)__env->GetStringUTFChars(resourcePath_j,JNI_FALSE);
					const EVString resourcePath = resourcePath_ch;
					__env->ReleaseStringUTFChars(resourcePath_j, (const char *)resourcePath_ch);
					#else
					const ev_wchar* resourcePath_ch = (const ev_wchar*)__env->GetStringChars(resourcePath_j,JNI_FALSE);
					const EVString resourcePath = resourcePath_ch;
					__env->ReleaseStringChars(resourcePath_j, (const jchar *)resourcePath_ch);
					#endif
					EarthView::World::Spatial3D::DataExchange::CMeshUtility *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshUtility*) pObjXXXX;
					ev_bool __values1 = pObjectX->exportToModelBase(meshdata, resourcePath);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshUtility_exportToModelBase_1CMeshData_1EVString_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong meshdata_j, jstring resourcePath_j, jstring attrtablename_j, jstring nodecode_j)
				{
					const EarthView::World::Spatial3D::DataExchange::CMeshData &meshdata = *(EarthView::World::Spatial3D::DataExchange::CMeshData*) meshdata_j;
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
					const ev_char* attrtablename_ch = (const ev_char*)__env->GetStringUTFChars(attrtablename_j,JNI_FALSE);
					const EVString attrtablename = attrtablename_ch;
					__env->ReleaseStringUTFChars(attrtablename_j, (const char *)attrtablename_ch);
					#else
					const ev_wchar* attrtablename_ch = (const ev_wchar*)__env->GetStringChars(attrtablename_j,JNI_FALSE);
					const EVString attrtablename = attrtablename_ch;
					__env->ReleaseStringChars(attrtablename_j, (const jchar *)attrtablename_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* nodecode_ch = (const ev_char*)__env->GetStringUTFChars(nodecode_j,JNI_FALSE);
					const EVString nodecode = nodecode_ch;
					__env->ReleaseStringUTFChars(nodecode_j, (const char *)nodecode_ch);
					#else
					const ev_wchar* nodecode_ch = (const ev_wchar*)__env->GetStringChars(nodecode_j,JNI_FALSE);
					const EVString nodecode = nodecode_ch;
					__env->ReleaseStringChars(nodecode_j, (const jchar *)nodecode_ch);
					#endif
					EarthView::World::Spatial3D::DataExchange::CMeshUtility *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshUtility*) pObjXXXX;
					ev_bool __values1 = pObjectX->exportToModelBase(meshdata, resourcePath, attrtablename, nodecode);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshUtility_exportToModelDataset_1CMeshData_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong meshdata_j, jstring resourcePath_j)
				{
					const EarthView::World::Spatial3D::DataExchange::CMeshData &meshdata = *(EarthView::World::Spatial3D::DataExchange::CMeshData*) meshdata_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* resourcePath_ch = (const ev_char*)__env->GetStringUTFChars(resourcePath_j,JNI_FALSE);
					const EVString resourcePath = resourcePath_ch;
					__env->ReleaseStringUTFChars(resourcePath_j, (const char *)resourcePath_ch);
					#else
					const ev_wchar* resourcePath_ch = (const ev_wchar*)__env->GetStringChars(resourcePath_j,JNI_FALSE);
					const EVString resourcePath = resourcePath_ch;
					__env->ReleaseStringChars(resourcePath_j, (const jchar *)resourcePath_ch);
					#endif
					EarthView::World::Spatial3D::DataExchange::CMeshUtility *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshUtility*) pObjXXXX;
					ev_bool __values1 = pObjectX->exportToModelDataset(meshdata, resourcePath);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshUtility_exportToModelBase_1CMeshData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong meshdata_j)
				{
					const EarthView::World::Spatial3D::DataExchange::CMeshData &meshdata = *(EarthView::World::Spatial3D::DataExchange::CMeshData*) meshdata_j;
					EarthView::World::Spatial3D::DataExchange::CMeshUtility *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshUtility*) pObjXXXX;
					ev_bool __values1 = pObjectX->exportToModelBase(meshdata);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshUtility_exportToModelBase_1CMeshData_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong meshdata_j, jstring attrtablename_j, jstring nodecode_j)
				{
					const EarthView::World::Spatial3D::DataExchange::CMeshData &meshdata = *(EarthView::World::Spatial3D::DataExchange::CMeshData*) meshdata_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* attrtablename_ch = (const ev_char*)__env->GetStringUTFChars(attrtablename_j,JNI_FALSE);
					const EVString attrtablename = attrtablename_ch;
					__env->ReleaseStringUTFChars(attrtablename_j, (const char *)attrtablename_ch);
					#else
					const ev_wchar* attrtablename_ch = (const ev_wchar*)__env->GetStringChars(attrtablename_j,JNI_FALSE);
					const EVString attrtablename = attrtablename_ch;
					__env->ReleaseStringChars(attrtablename_j, (const jchar *)attrtablename_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* nodecode_ch = (const ev_char*)__env->GetStringUTFChars(nodecode_j,JNI_FALSE);
					const EVString nodecode = nodecode_ch;
					__env->ReleaseStringUTFChars(nodecode_j, (const char *)nodecode_ch);
					#else
					const ev_wchar* nodecode_ch = (const ev_wchar*)__env->GetStringChars(nodecode_j,JNI_FALSE);
					const EVString nodecode = nodecode_ch;
					__env->ReleaseStringChars(nodecode_j, (const jchar *)nodecode_ch);
					#endif
					EarthView::World::Spatial3D::DataExchange::CMeshUtility *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshUtility*) pObjXXXX;
					ev_bool __values1 = pObjectX->exportToModelBase(meshdata, attrtablename, nodecode);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshUtility_exportToModelDataset_1CMeshData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong meshdata_j)
				{
					const EarthView::World::Spatial3D::DataExchange::CMeshData &meshdata = *(EarthView::World::Spatial3D::DataExchange::CMeshData*) meshdata_j;
					EarthView::World::Spatial3D::DataExchange::CMeshUtility *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshUtility*) pObjXXXX;
					ev_bool __values1 = pObjectX->exportToModelDataset(meshdata);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshUtility_exportToLocal_1CMeshData_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong meshdata_j, jstring path_j)
				{
					const EarthView::World::Spatial3D::DataExchange::CMeshData &meshdata = *(EarthView::World::Spatial3D::DataExchange::CMeshData*) meshdata_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* path_ch = (const ev_char*)__env->GetStringUTFChars(path_j,JNI_FALSE);
					const EVString path = path_ch;
					__env->ReleaseStringUTFChars(path_j, (const char *)path_ch);
					#else
					const ev_wchar* path_ch = (const ev_wchar*)__env->GetStringChars(path_j,JNI_FALSE);
					const EVString path = path_ch;
					__env->ReleaseStringChars(path_j, (const jchar *)path_ch);
					#endif
					EarthView::World::Spatial3D::DataExchange::CMeshUtility *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshUtility*) pObjXXXX;
					ev_bool __values1 = pObjectX->exportToLocal(meshdata, path);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshUtility_setParams_1CMeshParams(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong params_j)
				{
					const EarthView::World::Spatial3D::DataExchange::CMeshParams &params = *(EarthView::World::Spatial3D::DataExchange::CMeshParams*) params_j;
					EarthView::World::Spatial3D::DataExchange::CMeshUtility *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshUtility*) pObjXXXX;
					pObjectX->setParams(params);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshUtility_getParams_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshUtility *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshUtility*) pObjXXXX;
					EarthView::World::Spatial3D::DataExchange::CMeshParams& __values1 = pObjectX->getParams();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshUtility_getDatasourceHelper_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::DataExchange::CMeshUtility *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshUtility*) pObjXXXX;
					EarthView::World::Spatial3D::DataExchange::CDatasourceHelper* __values1 = pObjectX->getDatasourceHelper();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshUtility_publishUserType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CMeshUtility *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshUtility*) pObjXXXX;
					pObjectX->publishUserType();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshUtility_readWorldTransformTxt_1CMatrix4_1ev_1real64_1ev_1real64_1ev_1real64_1CVector3_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong matrix_j, jlong lontitude_j, jlong latitude_j, jlong atitu_j, jlong scale_j, jlong rotate_j)
				{
					EarthView::World::Spatial::Math::CMatrix4 &matrix = *(EarthView::World::Spatial::Math::CMatrix4*) matrix_j;
					ev_real64 &lontitude = *(ev_real64*) lontitude_j;
					ev_real64 &latitude = *(ev_real64*) latitude_j;
					ev_real64 &atitu = *(ev_real64*) atitu_j;
					EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
					EarthView::World::Spatial::Math::CVector3 &rotate = *(EarthView::World::Spatial::Math::CVector3*) rotate_j;
					EarthView::World::Spatial3D::DataExchange::CMeshUtility *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshUtility*) pObjXXXX;
					ev_bool __values1 = pObjectX->readWorldTransformTxt(matrix, lontitude, latitude, atitu, scale, rotate);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshUtility_loadFile_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring file_j)
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
					EarthView::World::Spatial3D::DataExchange::CMeshUtility *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshUtility*) pObjXXXX;
					EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->loadFile(file);
					EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshUtility_loadAniFile_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring file_j)
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
					EarthView::World::Spatial3D::DataExchange::CMeshUtility *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshUtility*) pObjXXXX;
					EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->loadAniFile(file);
					EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
		}
	}
}
