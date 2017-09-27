/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataexchange/modelsceneserializer.h"
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ModelSceneSerialzier_setModelRootPath_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring modelrootfolder_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* modelrootfolder_ch = (const ev_char*)__env->GetStringUTFChars(modelrootfolder_j,JNI_FALSE);
					const EVString modelrootfolder = modelrootfolder_ch;
					__env->ReleaseStringUTFChars(modelrootfolder_j, (const char *)modelrootfolder_ch);
					#else
					const ev_wchar* modelrootfolder_ch = (const ev_wchar*)__env->GetStringChars(modelrootfolder_j,JNI_FALSE);
					const EVString modelrootfolder = modelrootfolder_ch;
					__env->ReleaseStringChars(modelrootfolder_j, (const jchar *)modelrootfolder_ch);
					#endif
					EarthView::World::Spatial3D::DataExchange::CModelSceneSerialzier *pObjectX = (EarthView::World::Spatial3D::DataExchange::CModelSceneSerialzier*) pObjXXXX;
					pObjectX->setModelRootPath(modelrootfolder);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_ModelSceneSerialzier_parseModelSceneFile_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CModelSceneSerialzier *pObjectX = (EarthView::World::Spatial3D::DataExchange::CModelSceneSerialzier*) pObjXXXX;
					ev_bool __values1 = pObjectX->parseModelSceneFile();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_ModelSceneSerialzier_saveModelSceneFile_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CModelSceneSerialzier *pObjectX = (EarthView::World::Spatial3D::DataExchange::CModelSceneSerialzier*) pObjXXXX;
					ev_bool __values1 = pObjectX->saveModelSceneFile();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_ModelSceneSerialzier_addNode_1EVString_1ev_1real32_1ev_1real32_1ev_1real32_1CVector3_1ev_1real32_1ev_1real32_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring modelfilePath_j, jfloat lat_j, jfloat lon_j, jfloat alt_j, jlong scale_j, jfloat rotateX_j, jfloat rotateY_j, jfloat rotateZ_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* modelfilePath_ch = (const ev_char*)__env->GetStringUTFChars(modelfilePath_j,JNI_FALSE);
					const EVString modelfilePath = modelfilePath_ch;
					__env->ReleaseStringUTFChars(modelfilePath_j, (const char *)modelfilePath_ch);
					#else
					const ev_wchar* modelfilePath_ch = (const ev_wchar*)__env->GetStringChars(modelfilePath_j,JNI_FALSE);
					const EVString modelfilePath = modelfilePath_ch;
					__env->ReleaseStringChars(modelfilePath_j, (const jchar *)modelfilePath_ch);
					#endif
					ev_real32 lat = (ev_real32) lat_j;
					ev_real32 lon = (ev_real32) lon_j;
					ev_real32 alt = (ev_real32) alt_j;
					EarthView::World::Spatial::Math::CVector3 scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
					ev_real32 rotateX = (ev_real32) rotateX_j;
					ev_real32 rotateY = (ev_real32) rotateY_j;
					ev_real32 rotateZ = (ev_real32) rotateZ_j;
					EarthView::World::Spatial3D::DataExchange::CModelSceneSerialzier *pObjectX = (EarthView::World::Spatial3D::DataExchange::CModelSceneSerialzier*) pObjXXXX;
					ev_bool __values1 = pObjectX->addNode(modelfilePath, lat, lon, alt, scale, rotateX, rotateY, rotateZ);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
		}
	}
}
