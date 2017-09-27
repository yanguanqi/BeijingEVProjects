/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/terraincolorinfo.h"
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
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_TerrainColorInfo_00024TerrainColorUnit_get_1Altitude_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit *pObjectX = (EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->Altitude);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TerrainColorInfo_00024TerrainColorUnit_set_1Altitude_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit *pObjectX = (EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit*)pObjXXXX;
				pObjectX->Altitude = (ev_int32)__values1_j;
			}
			extern "C" JNIEXPORT jshort JNICALL Java_com_earthview_world_spatial3d_TerrainColorInfo_00024TerrainColorUnit_get_1G_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit *pObjectX = (EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit*)pObjXXXX;
				jshort __values1_j = (jshort) (pObjectX->G);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TerrainColorInfo_00024TerrainColorUnit_set_1G_1ev_1uint8(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jshort __values1_j)
			{
				EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit *pObjectX = (EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit*)pObjXXXX;
				pObjectX->G = (ev_uint8)__values1_j;
			}
			extern "C" JNIEXPORT jshort JNICALL Java_com_earthview_world_spatial3d_TerrainColorInfo_00024TerrainColorUnit_get_1B_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit *pObjectX = (EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit*)pObjXXXX;
				jshort __values1_j = (jshort) (pObjectX->B);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TerrainColorInfo_00024TerrainColorUnit_set_1B_1ev_1uint8(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jshort __values1_j)
			{
				EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit *pObjectX = (EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit*)pObjXXXX;
				pObjectX->B = (ev_uint8)__values1_j;
			}
			extern "C" JNIEXPORT jshort JNICALL Java_com_earthview_world_spatial3d_TerrainColorInfo_00024TerrainColorUnit_get_1R_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit *pObjectX = (EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit*)pObjXXXX;
				jshort __values1_j = (jshort) (pObjectX->R);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TerrainColorInfo_00024TerrainColorUnit_set_1R_1ev_1uint8(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jshort __values1_j)
			{
				EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit *pObjectX = (EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit*)pObjXXXX;
				pObjectX->R = (ev_uint8)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_TerrainColorInfo_00024TerrainColorUnit_get_1PixelY_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit *pObjectX = (EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit*)pObjXXXX;
				jint __values1_j = (jint) (pObjectX->PixelY);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TerrainColorInfo_00024TerrainColorUnit_set_1PixelY_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit *pObjectX = (EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit*)pObjXXXX;
				pObjectX->PixelY = (ev_uint16)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_TerrainColorInfo_00024TerrainColorUnit_OperatorLessThan_1TerrainColorUnit(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
			{
				EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit& pObjectX = *(EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit*) pObjXXXX;
				const EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit &rhs = *(EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit*) rhs_j;
				ev_bool __values1 = (pObjectX < rhs);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_TerrainColorInfo_00024TerrainColorUnit_OperatorGreaterThan_1TerrainColorUnit(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
			{
				EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit& pObjectX = *(EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit*) pObjXXXX;
				const EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit &rhs = *(EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit*) rhs_j;
				ev_bool __values1 = (pObjectX > rhs);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_TerrainColorInfo_00024TerrainColorUnit_OperatorEquals_1TerrainColorUnit(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
			{
				EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit& pObjectX = *(EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit*) pObjXXXX;
				const EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit &rhs = *(EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit*) rhs_j;
				ev_bool __values1 = (pObjectX == rhs);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_TerrainColorInfo_00024TerrainColorUnit_OperatorNotEquals_1TerrainColorUnit(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
			{
				EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit& pObjectX = *(EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit*) pObjXXXX;
				const EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit &rhs = *(EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit*) rhs_j;
				ev_bool __values1 = (pObjectX != rhs);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jshort JNICALL Java_com_earthview_world_spatial3d_TerrainColorInfo_getColorImageHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CTerrainColorInfo *pObjectX = (EarthView::World::Spatial3D::CTerrainColorInfo*) pObjXXXX;
				ev_int16 __values1 = pObjectX->getColorImageHeight();
				jshort __values1_j = (jshort)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_TerrainColorInfo_getMax_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CTerrainColorInfo *pObjectX = (EarthView::World::Spatial3D::CTerrainColorInfo*) pObjXXXX;
				EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit __values1 = pObjectX->getMax();
				EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit *returnvalues = new EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TerrainColorInfo_setMax_1ev_1int32_1ev_1uint8_1ev_1uint8_1ev_1uint8(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint altitude_j, jshort r_j, jshort g_j, jshort b_j)
			{
				ev_int32 altitude = (ev_int32) altitude_j;
				ev_uint8 r = (ev_uint8) r_j;
				ev_uint8 g = (ev_uint8) g_j;
				ev_uint8 b = (ev_uint8) b_j;
				EarthView::World::Spatial3D::CTerrainColorInfo *pObjectX = (EarthView::World::Spatial3D::CTerrainColorInfo*) pObjXXXX;
				pObjectX->setMax(altitude, r, g, b);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_TerrainColorInfo_getMin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CTerrainColorInfo *pObjectX = (EarthView::World::Spatial3D::CTerrainColorInfo*) pObjXXXX;
				EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit __values1 = pObjectX->getMin();
				EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit *returnvalues = new EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TerrainColorInfo_setMin_1ev_1int32_1ev_1uint8_1ev_1uint8_1ev_1uint8(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint altitude_j, jshort r_j, jshort g_j, jshort b_j)
			{
				ev_int32 altitude = (ev_int32) altitude_j;
				ev_uint8 r = (ev_uint8) r_j;
				ev_uint8 g = (ev_uint8) g_j;
				ev_uint8 b = (ev_uint8) b_j;
				EarthView::World::Spatial3D::CTerrainColorInfo *pObjectX = (EarthView::World::Spatial3D::CTerrainColorInfo*) pObjXXXX;
				pObjectX->setMin(altitude, r, g, b);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_TerrainColorInfo_insertUnit_1TerrainColorUnit(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong unit_j)
			{
				EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit unit = *(EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit*) unit_j;
				EarthView::World::Spatial3D::CTerrainColorInfo *pObjectX = (EarthView::World::Spatial3D::CTerrainColorInfo*) pObjXXXX;
				ev_bool __values1 = pObjectX->insertUnit(unit);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_TerrainColorInfo_existUnit_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint altitude_j)
			{
				ev_int32 altitude = (ev_int32) altitude_j;
				EarthView::World::Spatial3D::CTerrainColorInfo *pObjectX = (EarthView::World::Spatial3D::CTerrainColorInfo*) pObjXXXX;
				ev_bool __values1 = pObjectX->existUnit(altitude);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_TerrainColorInfo_removeUnit_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint altitude_j)
			{
				ev_int32 altitude = (ev_int32) altitude_j;
				EarthView::World::Spatial3D::CTerrainColorInfo *pObjectX = (EarthView::World::Spatial3D::CTerrainColorInfo*) pObjXXXX;
				ev_bool __values1 = pObjectX->removeUnit(altitude);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TerrainColorInfo_clearUnits_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CTerrainColorInfo *pObjectX = (EarthView::World::Spatial3D::CTerrainColorInfo*) pObjXXXX;
				pObjectX->clearUnits();
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_TerrainColorInfo_getUnitCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CTerrainColorInfo *pObjectX = (EarthView::World::Spatial3D::CTerrainColorInfo*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getUnitCount();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_TerrainColorInfo_getUnit_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				EarthView::World::Spatial3D::CTerrainColorInfo *pObjectX = (EarthView::World::Spatial3D::CTerrainColorInfo*) pObjXXXX;
				EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit __values1 = pObjectX->getUnit(index);
				EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit *returnvalues = new EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_TerrainColorInfo_getExtent_1ev_1int32_1ev_1uint16_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint altitude_j, jlong minPixel_j, jlong maxPixel_j)
			{
				ev_int32 altitude = (ev_int32) altitude_j;
				ev_uint16 &minPixel = *(ev_uint16*) minPixel_j;
				ev_uint16 &maxPixel = *(ev_uint16*) maxPixel_j;
				EarthView::World::Spatial3D::CTerrainColorInfo *pObjectX = (EarthView::World::Spatial3D::CTerrainColorInfo*) pObjXXXX;
				ev_bool __values1 = pObjectX->getExtent(altitude, minPixel, maxPixel);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TerrainColorInfo_reset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CTerrainColorInfo *pObjectX = (EarthView::World::Spatial3D::CTerrainColorInfo*) pObjXXXX;
				pObjectX->reset();
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_TerrainColorInfo_toXml_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CTerrainColorInfo *pObjectX = (EarthView::World::Spatial3D::CTerrainColorInfo*) pObjXXXX;
				EVString __values1 = pObjectX->toXml();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_TerrainColorInfo_fromXml_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong xmlElement_j)
			{
				EarthView::World::Core::CXmlElement &xmlElement = *(EarthView::World::Core::CXmlElement*) xmlElement_j;
				EarthView::World::Spatial3D::CTerrainColorInfo *pObjectX = (EarthView::World::Spatial3D::CTerrainColorInfo*) pObjXXXX;
				ev_bool __values1 = pObjectX->fromXml(xmlElement);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial3d_TerrainColorInfo_locate_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat altitude_j)
			{
				ev_real32 altitude = (ev_real32) altitude_j;
				const 				EarthView::World::Spatial3D::CTerrainColorInfo *pObjectX = (EarthView::World::Spatial3D::CTerrainColorInfo*) pObjXXXX;
				ev_real32 __values1 = pObjectX->locate(altitude);
				jfloat __values1_j = (jfloat)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_TerrainColorInfo_render_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring imageType_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* imageType_ch = (const ev_char*)__env->GetStringUTFChars(imageType_j,JNI_FALSE);
				const EVString imageType = imageType_ch;
				__env->ReleaseStringUTFChars(imageType_j, (const char *)imageType_ch);
				#else
				const ev_wchar* imageType_ch = (const ev_wchar*)__env->GetStringChars(imageType_j,JNI_FALSE);
				const EVString imageType = imageType_ch;
				__env->ReleaseStringChars(imageType_j, (const jchar *)imageType_ch);
				#endif
				const 				EarthView::World::Spatial3D::CTerrainColorInfo *pObjectX = (EarthView::World::Spatial3D::CTerrainColorInfo*) pObjXXXX;
				EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->render(imageType);
				EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_TerrainColorInfo_drawGrid_1EVString_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jclass __clazz, jstring imageType_j, jlong width_j, jlong height_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* imageType_ch = (const ev_char*)__env->GetStringUTFChars(imageType_j,JNI_FALSE);
				const EVString imageType = imageType_ch;
				__env->ReleaseStringUTFChars(imageType_j, (const char *)imageType_ch);
				#else
				const ev_wchar* imageType_ch = (const ev_wchar*)__env->GetStringChars(imageType_j,JNI_FALSE);
				const EVString imageType = imageType_ch;
				__env->ReleaseStringChars(imageType_j, (const jchar *)imageType_ch);
				#endif
				ev_uint32 width = (ev_uint32) width_j;
				ev_uint32 height = (ev_uint32) height_j;
				EarthView::World::Core::MemoryDataStreamPtr __values1 = EarthView::World::Spatial3D::CTerrainColorInfo::drawGrid(imageType, width, height);
				EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_TerrainColorInfo_OperatorEquals_1CTerrainColorInfo(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
			{
				EarthView::World::Spatial3D::CTerrainColorInfo& pObjectX = *(EarthView::World::Spatial3D::CTerrainColorInfo*) pObjXXXX;
				const EarthView::World::Spatial3D::CTerrainColorInfo &rhs = *(EarthView::World::Spatial3D::CTerrainColorInfo*) rhs_j;
				ev_bool __values1 = (pObjectX == rhs);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_TerrainColorInfo_OperatorNotEquals_1CTerrainColorInfo(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
			{
				EarthView::World::Spatial3D::CTerrainColorInfo& pObjectX = *(EarthView::World::Spatial3D::CTerrainColorInfo*) pObjXXXX;
				const EarthView::World::Spatial3D::CTerrainColorInfo &rhs = *(EarthView::World::Spatial3D::CTerrainColorInfo*) rhs_j;
				ev_bool __values1 = (pObjectX != rhs);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
		}
	}
}
