/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2ddataexchange/dbrasterexchangeparam.h"
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
			namespace Convertor
			{
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_convertor_Dbrasterexchangeparam_isBuildOverView_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Convertor::CDBRasterExchangeParam *pObjectX = (EarthView::World::Spatial::Convertor::CDBRasterExchangeParam*) pObjXXXX;
					bool __values1 = pObjectX->isBuildOverView();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_Dbrasterexchangeparam_setBuildOverView_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bValue_j)
				{
					bool bValue = (bool) bValue_j;
					EarthView::World::Spatial::Convertor::CDBRasterExchangeParam *pObjectX = (EarthView::World::Spatial::Convertor::CDBRasterExchangeParam*) pObjXXXX;
					pObjectX->setBuildOverView(bValue);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_convertor_Dbrasterexchangeparam_getMaxOverViewLevel_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Convertor::CDBRasterExchangeParam *pObjectX = (EarthView::World::Spatial::Convertor::CDBRasterExchangeParam*) pObjXXXX;
					int __values1 = pObjectX->getMaxOverViewLevel();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_Dbrasterexchangeparam_setMaxOverViewLevel_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint nValue_j)
				{
					int nValue = (int) nValue_j;
					EarthView::World::Spatial::Convertor::CDBRasterExchangeParam *pObjectX = (EarthView::World::Spatial::Convertor::CDBRasterExchangeParam*) pObjXXXX;
					pObjectX->setMaxOverViewLevel(nValue);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_convertor_Dbrasterexchangeparam_getCompressType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Convertor::CDBRasterExchangeParam *pObjectX = (EarthView::World::Spatial::Convertor::CDBRasterExchangeParam*) pObjXXXX;
					int __values1 = pObjectX->getCompressType();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_Dbrasterexchangeparam_setCompressType_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint nValue_j)
				{
					int nValue = (int) nValue_j;
					EarthView::World::Spatial::Convertor::CDBRasterExchangeParam *pObjectX = (EarthView::World::Spatial::Convertor::CDBRasterExchangeParam*) pObjXXXX;
					pObjectX->setCompressType(nValue);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_convertor_Dbrasterexchangeparam_getBlockSize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Convertor::CDBRasterExchangeParam *pObjectX = (EarthView::World::Spatial::Convertor::CDBRasterExchangeParam*) pObjXXXX;
					int __values1 = pObjectX->getBlockSize();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_Dbrasterexchangeparam_setBlockSize_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint nValue_j)
				{
					int nValue = (int) nValue_j;
					EarthView::World::Spatial::Convertor::CDBRasterExchangeParam *pObjectX = (EarthView::World::Spatial::Convertor::CDBRasterExchangeParam*) pObjXXXX;
					pObjectX->setBlockSize(nValue);
				}
			}
		}
	}
}
