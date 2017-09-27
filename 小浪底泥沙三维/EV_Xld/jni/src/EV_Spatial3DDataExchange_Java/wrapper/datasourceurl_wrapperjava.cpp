/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataexchange/datasourceurl.h"
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_DataSourceUrl_setURL_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring url_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* url_ch = (const ev_char*)__env->GetStringUTFChars(url_j,JNI_FALSE);
					const EVString url = url_ch;
					__env->ReleaseStringUTFChars(url_j, (const char *)url_ch);
					#else
					const ev_wchar* url_ch = (const ev_wchar*)__env->GetStringChars(url_j,JNI_FALSE);
					const EVString url = url_ch;
					__env->ReleaseStringChars(url_j, (const jchar *)url_ch);
					#endif
					EarthView::World::Spatial3D::DataExchange::CDataSourceUrl *pObjectX = (EarthView::World::Spatial3D::DataExchange::CDataSourceUrl*) pObjXXXX;
					pObjectX->setURL(url);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataexchange_DataSourceUrl_getURL_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::DataExchange::CDataSourceUrl *pObjectX = (EarthView::World::Spatial3D::DataExchange::CDataSourceUrl*) pObjXXXX;
					EVString __values1 = pObjectX->getURL();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_DataSourceUrl_medium_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::DataExchange::CDataSourceUrl *pObjectX = (EarthView::World::Spatial3D::DataExchange::CDataSourceUrl*) pObjXXXX;
					const EVString& __values1 = pObjectX->medium();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_DataSourceUrl_connectParameter_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::DataExchange::CDataSourceUrl *pObjectX = (EarthView::World::Spatial3D::DataExchange::CDataSourceUrl*) pObjXXXX;
					const EVString& __values1 = pObjectX->connectParameter();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
		}
	}
}
