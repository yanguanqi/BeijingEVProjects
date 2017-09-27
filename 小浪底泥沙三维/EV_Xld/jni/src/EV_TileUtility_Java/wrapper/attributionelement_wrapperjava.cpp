/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/attributionelement.h"
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_AttributionElement_fromStream_1CDataStream_1EarthView_1World_1Core_1ev_1string_1ev_1int32_1ev_1int32(JNIEnv *__env , jclass __clazz, jlong stream_j, jstring fieldName_j, jint fieldType_j, jint byteOrder_j)
			{
				EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* fieldName_ch = (const ev_char*)__env->GetStringUTFChars(fieldName_j,JNI_FALSE);
				EarthView::World::Core::ev_string fieldName = fieldName_ch;
				__env->ReleaseStringUTFChars(fieldName_j, (const char *)fieldName_ch);
				#else
				const ev_wchar* fieldName_ch = (const ev_wchar*)__env->GetStringChars(fieldName_j,JNI_FALSE);
				EarthView::World::Core::ev_string fieldName = fieldName_ch;
				__env->ReleaseStringChars(fieldName_j, (const jchar *)fieldName_ch);
				#endif
				ev_int32 fieldType = (ev_int32) fieldType_j;
				ev_int32 byteOrder = (ev_int32) byteOrder_j;
				EarthView::World::Spatial::CAttributionElement* __values1 = EarthView::World::Spatial::CAttributionElement::fromStream(stream, fieldName, fieldType, byteOrder);
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_AttributionElement_getID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CAttributionElement *pObjectX = (EarthView::World::Spatial::CAttributionElement*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getID();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_AttributionElement_getAttributionValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CAttributionElement *pObjectX = (EarthView::World::Spatial::CAttributionElement*) pObjXXXX;
				EarthView::World::Core::CVariant __values1 = pObjectX->getAttributionValue();
				EarthView::World::Core::CVariant *returnvalues = new EarthView::World::Core::CVariant(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_AttributionElement_getFieldType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CAttributionElement *pObjectX = (EarthView::World::Spatial::CAttributionElement*) pObjXXXX;
				EarthView::World::Spatial::GeoDataset::EVFieldType __values1 = pObjectX->getFieldType();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_AttributionElement_getFieldName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CAttributionElement *pObjectX = (EarthView::World::Spatial::CAttributionElement*) pObjXXXX;
				EarthView::World::Core::ev_string __values1 = pObjectX->getFieldName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
		}
	}
}
