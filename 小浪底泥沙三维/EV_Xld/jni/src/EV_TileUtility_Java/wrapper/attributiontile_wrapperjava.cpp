/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/attributiontile.h"
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_AttributionTile_fromStream_1CDataStream_1EarthView_1World_1Core_1ev_1string(JNIEnv *__env , jclass __clazz, jlong stream_j, jstring fieldName_j)
			{
				EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* fieldName_ch = (const ev_char*)__env->GetStringUTFChars(fieldName_j,JNI_FALSE);
				const EarthView::World::Core::ev_string fieldName = fieldName_ch;
				__env->ReleaseStringUTFChars(fieldName_j, (const char *)fieldName_ch);
				#else
				const ev_wchar* fieldName_ch = (const ev_wchar*)__env->GetStringChars(fieldName_j,JNI_FALSE);
				const EarthView::World::Core::ev_string fieldName = fieldName_ch;
				__env->ReleaseStringChars(fieldName_j, (const jchar *)fieldName_ch);
				#endif
				EarthView::World::Spatial::CAttributionTile* __values1 = EarthView::World::Spatial::CAttributionTile::fromStream(stream, fieldName);
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_AttributionTile_getElementCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CAttributionTile *pObjectX = (EarthView::World::Spatial::CAttributionTile*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getElementCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_AttributionTile_getID_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CAttributionTile *pObjectX = (EarthView::World::Spatial::CAttributionTile*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getID(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_AttributionTile_getAttribution_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				EarthView::World::Spatial::CAttributionTile *pObjectX = (EarthView::World::Spatial::CAttributionTile*) pObjXXXX;
				EarthView::World::Core::CVariant __values1 = pObjectX->getAttribution(index);
				EarthView::World::Core::CVariant *returnvalues = new EarthView::World::Core::CVariant(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_AttributionTile_getAttributionByID_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
			{
				ev_uint32 id = (ev_uint32) id_j;
				EarthView::World::Spatial::CAttributionTile *pObjectX = (EarthView::World::Spatial::CAttributionTile*) pObjXXXX;
				EarthView::World::Core::CVariant __values1 = pObjectX->getAttributionByID(id);
				EarthView::World::Core::CVariant *returnvalues = new EarthView::World::Core::CVariant(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_AttributionTile_getFieldName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CAttributionTile *pObjectX = (EarthView::World::Spatial::CAttributionTile*) pObjXXXX;
				const EVString& __values1 = pObjectX->getFieldName();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_AttributionTile_getFieldType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CAttributionTile *pObjectX = (EarthView::World::Spatial::CAttributionTile*) pObjXXXX;
				EarthView::World::Spatial::GeoDataset::EVFieldType __values1 = pObjectX->getFieldType();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
		}
	}
}
