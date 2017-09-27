/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/tiledata.h"
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileData_getTileInfo_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CTileData *pObjectX = (EarthView::World::Spatial::CTileData*) pObjXXXX;
				const EarthView::World::Spatial::CTileInfo* __values1 = pObjectX->getTileInfo();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_TileData_setTileInfo_1CTileInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_tileinfo_j)
			{
				const EarthView::World::Spatial::CTileInfo *ref_tileinfo = (const EarthView::World::Spatial::CTileInfo*) ref_tileinfo_j;
				EarthView::World::Spatial::CTileData *pObjectX = (EarthView::World::Spatial::CTileData*) pObjXXXX;
				pObjectX->setTileInfo(ref_tileinfo);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_TileData_setData_1EVString_1DataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strFileName_j, jlong stream_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strFileName_ch = (const ev_char*)__env->GetStringUTFChars(strFileName_j,JNI_FALSE);
				const EVString strFileName = strFileName_ch;
				__env->ReleaseStringUTFChars(strFileName_j, (const char *)strFileName_ch);
				#else
				const ev_wchar* strFileName_ch = (const ev_wchar*)__env->GetStringChars(strFileName_j,JNI_FALSE);
				const EVString strFileName = strFileName_ch;
				__env->ReleaseStringChars(strFileName_j, (const jchar *)strFileName_ch);
				#endif
				EarthView::World::Core::DataStreamPtr stream = *(EarthView::World::Core::DataStreamPtr*) stream_j;
				EarthView::World::Spatial::CTileData *pObjectX = (EarthView::World::Spatial::CTileData*) pObjXXXX;
				pObjectX->setData(strFileName, stream);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_TileData_setData_1DataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
			{
				EarthView::World::Core::DataStreamPtr stream = *(EarthView::World::Core::DataStreamPtr*) stream_j;
				EarthView::World::Spatial::CTileData *pObjectX = (EarthView::World::Spatial::CTileData*) pObjXXXX;
				pObjectX->setData(stream);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileData_getData_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CTileData *pObjectX = (EarthView::World::Spatial::CTileData*) pObjXXXX;
				EarthView::World::Core::DataStreamPtr __values1 = pObjectX->getData();
				EarthView::World::Core::DataStreamPtr *returnvalues = new EarthView::World::Core::DataStreamPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileData_getThemeStream_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CTileData *pObjectX = (EarthView::World::Spatial::CTileData*) pObjXXXX;
				EarthView::World::Core::DataStreamPtr __values1 = pObjectX->getThemeStream();
				EarthView::World::Core::DataStreamPtr *returnvalues = new EarthView::World::Core::DataStreamPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_TileData_setThemeStream_1DataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong theme_j)
			{
				EarthView::World::Core::DataStreamPtr theme = *(EarthView::World::Core::DataStreamPtr*) theme_j;
				EarthView::World::Spatial::CTileData *pObjectX = (EarthView::World::Spatial::CTileData*) pObjXXXX;
				pObjectX->setThemeStream(theme);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_TileData_setFileName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strFileName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strFileName_ch = (const ev_char*)__env->GetStringUTFChars(strFileName_j,JNI_FALSE);
				const EVString strFileName = strFileName_ch;
				__env->ReleaseStringUTFChars(strFileName_j, (const char *)strFileName_ch);
				#else
				const ev_wchar* strFileName_ch = (const ev_wchar*)__env->GetStringChars(strFileName_j,JNI_FALSE);
				const EVString strFileName = strFileName_ch;
				__env->ReleaseStringChars(strFileName_j, (const jchar *)strFileName_ch);
				#endif
				EarthView::World::Spatial::CTileData *pObjectX = (EarthView::World::Spatial::CTileData*) pObjXXXX;
				pObjectX->setFileName(strFileName);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileData_getFileName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CTileData *pObjectX = (EarthView::World::Spatial::CTileData*) pObjXXXX;
				const EVString& __values1 = pObjectX->getFileName();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_TileData_setLayerName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strLayerName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strLayerName_ch = (const ev_char*)__env->GetStringUTFChars(strLayerName_j,JNI_FALSE);
				const EVString strLayerName = strLayerName_ch;
				__env->ReleaseStringUTFChars(strLayerName_j, (const char *)strLayerName_ch);
				#else
				const ev_wchar* strLayerName_ch = (const ev_wchar*)__env->GetStringChars(strLayerName_j,JNI_FALSE);
				const EVString strLayerName = strLayerName_ch;
				__env->ReleaseStringChars(strLayerName_j, (const jchar *)strLayerName_ch);
				#endif
				EarthView::World::Spatial::CTileData *pObjectX = (EarthView::World::Spatial::CTileData*) pObjXXXX;
				pObjectX->setLayerName(strLayerName);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileData_getLayerName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CTileData *pObjectX = (EarthView::World::Spatial::CTileData*) pObjXXXX;
				const EVString& __values1 = pObjectX->getLayerName();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_TileData_setStreamType_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strType_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strType_ch = (const ev_char*)__env->GetStringUTFChars(strType_j,JNI_FALSE);
				const EVString strType = strType_ch;
				__env->ReleaseStringUTFChars(strType_j, (const char *)strType_ch);
				#else
				const ev_wchar* strType_ch = (const ev_wchar*)__env->GetStringChars(strType_j,JNI_FALSE);
				const EVString strType = strType_ch;
				__env->ReleaseStringChars(strType_j, (const jchar *)strType_ch);
				#endif
				EarthView::World::Spatial::CTileData *pObjectX = (EarthView::World::Spatial::CTileData*) pObjXXXX;
				pObjectX->setStreamType(strType);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileData_getStreamType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CTileData *pObjectX = (EarthView::World::Spatial::CTileData*) pObjXXXX;
				const EVString& __values1 = pObjectX->getStreamType();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_TileData_setDefective_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean defective_j)
			{
				ev_bool defective = (ev_bool) defective_j;
				EarthView::World::Spatial::CTileData *pObjectX = (EarthView::World::Spatial::CTileData*) pObjXXXX;
				pObjectX->setDefective(defective);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_TileData_getDefective_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CTileData *pObjectX = (EarthView::World::Spatial::CTileData*) pObjXXXX;
				ev_bool __values1 = pObjectX->getDefective();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_TileData_addTileAttachment_1ITileAttachmentPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tileAttachment_j)
			{
				const EarthView::World::Spatial::ITileAttachmentPtr &tileAttachment = *(EarthView::World::Spatial::ITileAttachmentPtr*) tileAttachment_j;
				EarthView::World::Spatial::CTileData *pObjectX = (EarthView::World::Spatial::CTileData*) pObjXXXX;
				pObjectX->addTileAttachment(tileAttachment);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileData_getTileAttachmentCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileData *pObjectX = (EarthView::World::Spatial::CTileData*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getTileAttachmentCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileData_getTileAttachment_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const 				EarthView::World::Spatial::CTileData *pObjectX = (EarthView::World::Spatial::CTileData*) pObjXXXX;
				const EarthView::World::Spatial::ITileAttachmentPtr& __values1 = pObjectX->getTileAttachment(index);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_TileData_mergeTileAttachmentList_1CTileData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong other_j)
			{
				const EarthView::World::Spatial::CTileData &other = *(EarthView::World::Spatial::CTileData*) other_j;
				EarthView::World::Spatial::CTileData *pObjectX = (EarthView::World::Spatial::CTileData*) pObjXXXX;
				pObjectX->mergeTileAttachmentList(other);
			}
		}
	}
}
