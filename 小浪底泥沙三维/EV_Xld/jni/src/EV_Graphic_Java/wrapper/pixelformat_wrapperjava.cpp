/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/pixelformat.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_PixelFormatHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					PF_UNKNOWN,
					PF_L8,
					PF_BYTE_L,
					PF_L16,
					PF_SHORT_L,
					PF_A8,
					PF_BYTE_A,
					PF_A4L4,
					PF_BYTE_LA,
					PF_R5G6B5,
					PF_B5G6R5,
					PF_R3G3B2,
					PF_A4R4G4B4,
					PF_A1R5G5B5,
					PF_R8G8B8,
					PF_B8G8R8,
					PF_A8R8G8B8,
					PF_A8B8G8R8,
					PF_B8G8R8A8,
					PF_R8G8B8A8,
					PF_X8R8G8B8,
					PF_X8B8G8R8,
					PF_A2R10G10B10,
					PF_A2B10G10R10,
					PF_DXT1,
					PF_DXT2,
					PF_DXT3,
					PF_DXT4,
					PF_DXT5,
					PF_FLOAT16_R,
					PF_FLOAT16_RGB,
					PF_FLOAT16_RGBA,
					PF_FLOAT32_R,
					PF_FLOAT32_RGB,
					PF_FLOAT32_RGBA,
					PF_FLOAT16_GR,
					PF_FLOAT32_GR,
					PF_DEPTH,
					PF_SHORT_RGBA,
					PF_SHORT_GR,
					PF_SHORT_RGB,
					PF_PVRTC_RGB2,
					PF_PVRTC_RGBA2,
					PF_PVRTC_RGB4,
					PF_PVRTC_RGBA4,
					PF_R8,
					PF_RG8,
					PF_COUNT
				};
				jintArray array = __env->NewIntArray(48);
				__env->SetIntArrayRegion(array, 0, 48, enum_values);
				return array;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PixelFormatList_push_1back_1PixelFormat(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint t_j)
			{
				EarthView::World::Graphic::PixelFormat t = (EarthView::World::Graphic::PixelFormat) t_j;
				EarthView::World::Graphic::PixelFormatList *pObjectX = (EarthView::World::Graphic::PixelFormatList*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PixelFormatList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::PixelFormatList *pObjectX = (EarthView::World::Graphic::PixelFormatList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_PixelFormatList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::PixelFormatList *pObjectX = (EarthView::World::Graphic::PixelFormatList*) pObjXXXX;
				EarthView::World::Graphic::PixelFormat& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_PixelFormatList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::PixelFormatList *pObjectX = (EarthView::World::Graphic::PixelFormatList*) pObjXXXX;
				EarthView::World::Graphic::PixelFormat& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PixelFormatList_insert_1ev_1uint32_1PixelFormat(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jint t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::PixelFormat t = (EarthView::World::Graphic::PixelFormat) t_j;
				EarthView::World::Graphic::PixelFormatList *pObjectX = (EarthView::World::Graphic::PixelFormatList*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PixelFormatList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::PixelFormatList *pObjectX = (EarthView::World::Graphic::PixelFormatList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_PixelFormatList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::PixelFormatList *pObjectX = (EarthView::World::Graphic::PixelFormatList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_PixelFormatList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::PixelFormatList& pObjectX = *(EarthView::World::Graphic::PixelFormatList*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::PixelFormat& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_PixelFormatList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::PixelFormatList *pObjectX = (EarthView::World::Graphic::PixelFormatList*) pObjXXXX;
				EarthView::World::Graphic::PixelFormat& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_PixelFormatList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::PixelFormatList *pObjectX = (EarthView::World::Graphic::PixelFormatList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PixelFormatList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::PixelFormatList *pObjectX = (EarthView::World::Graphic::PixelFormatList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PixelFormatList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::PixelFormatList *pObjectX = (EarthView::World::Graphic::PixelFormatList*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PixelFormatList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::PixelFormatList *pObjectX = (EarthView::World::Graphic::PixelFormatList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_PixelFormatFlagsHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					PFF_HASALPHA,
					PFF_COMPRESSED,
					PFF_FLOAT,
					PFF_DEPTH,
					PFF_NATIVEENDIAN,
					PFF_LUMINANCE
				};
				jintArray array = __env->NewIntArray(6);
				__env->SetIntArrayRegion(array, 0, 6, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_PixelComponentTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					PCT_BYTE,
					PCT_SHORT,
					PCT_FLOAT16,
					PCT_FLOAT32,
					PCT_COUNT
				};
				jintArray array = __env->NewIntArray(5);
				__env->SetIntArrayRegion(array, 0, 5, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_PixelBox_get_1data_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPixelBox *pObjectX = (EarthView::World::Graphic::CPixelBox*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->data);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PixelBox_set_1data_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CPixelBox *pObjectX = (EarthView::World::Graphic::CPixelBox*)pObjXXXX;
				pObjectX->data = (void*) __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_PixelBox_get_1format_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPixelBox *pObjectX = (EarthView::World::Graphic::CPixelBox*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->format);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PixelBox_set_1format_1PixelFormat(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CPixelBox *pObjectX = (EarthView::World::Graphic::CPixelBox*)pObjXXXX;
				pObjectX->format = (EarthView::World::Graphic::PixelFormat)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_PixelBox_get_1rowPitch_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPixelBox *pObjectX = (EarthView::World::Graphic::CPixelBox*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->rowPitch);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PixelBox_set_1rowPitch_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CPixelBox *pObjectX = (EarthView::World::Graphic::CPixelBox*)pObjXXXX;
				pObjectX->rowPitch = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_PixelBox_get_1slicePitch_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPixelBox *pObjectX = (EarthView::World::Graphic::CPixelBox*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->slicePitch);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PixelBox_set_1slicePitch_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CPixelBox *pObjectX = (EarthView::World::Graphic::CPixelBox*)pObjXXXX;
				pObjectX->slicePitch = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PixelBox_setConsecutive_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPixelBox *pObjectX = (EarthView::World::Graphic::CPixelBox*) pObjXXXX;
				pObjectX->setConsecutive();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_PixelBox_getRowSkip_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPixelBox *pObjectX = (EarthView::World::Graphic::CPixelBox*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getRowSkip();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_PixelBox_getSliceSkip_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPixelBox *pObjectX = (EarthView::World::Graphic::CPixelBox*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getSliceSkip();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_PixelBox_isConsecutive_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPixelBox *pObjectX = (EarthView::World::Graphic::CPixelBox*) pObjXXXX;
				ev_bool __values1 = pObjectX->isConsecutive();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_PixelBox_getConsecutiveSize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPixelBox *pObjectX = (EarthView::World::Graphic::CPixelBox*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getConsecutiveSize();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_PixelBox_getSubVolume_1Box(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong def_j)
			{
				const EarthView::World::Graphic::Box &def = *(EarthView::World::Graphic::Box*) def_j;
				const 				EarthView::World::Graphic::CPixelBox *pObjectX = (EarthView::World::Graphic::CPixelBox*) pObjXXXX;
				EarthView::World::Graphic::CPixelBox __values1 = pObjectX->getSubVolume(def);
				EarthView::World::Graphic::CPixelBox *returnvalues = new EarthView::World::Graphic::CPixelBox(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_PixelBox_getColourAt_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong x_j, jlong y_j, jlong z_j)
			{
				ev_size_t x = (ev_size_t) x_j;
				ev_size_t y = (ev_size_t) y_j;
				ev_size_t z = (ev_size_t) z_j;
				EarthView::World::Graphic::CPixelBox *pObjectX = (EarthView::World::Graphic::CPixelBox*) pObjXXXX;
				EarthView::World::Graphic::CColourValue __values1 = pObjectX->getColourAt(x, y, z);
				EarthView::World::Graphic::CColourValue *returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PixelBox_setColourAt_1CColourValue_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cv_j, jlong x_j, jlong y_j, jlong z_j)
			{
				EarthView::World::Graphic::CColourValue &cv = *(EarthView::World::Graphic::CColourValue*) cv_j;
				ev_size_t x = (ev_size_t) x_j;
				ev_size_t y = (ev_size_t) y_j;
				ev_size_t z = (ev_size_t) z_j;
				EarthView::World::Graphic::CPixelBox *pObjectX = (EarthView::World::Graphic::CPixelBox*) pObjXXXX;
				pObjectX->setColourAt(cv, x, y, z);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_PixelUtil_getNumElemBytes_1PixelFormat(JNIEnv *__env , jclass __clazz, jint format_j)
			{
				EarthView::World::Graphic::PixelFormat format = (EarthView::World::Graphic::PixelFormat) format_j;
				ev_size_t __values1 = EarthView::World::Graphic::CPixelUtil::getNumElemBytes(format);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_PixelUtil_getNumElemBits_1PixelFormat(JNIEnv *__env , jclass __clazz, jint format_j)
			{
				EarthView::World::Graphic::PixelFormat format = (EarthView::World::Graphic::PixelFormat) format_j;
				ev_size_t __values1 = EarthView::World::Graphic::CPixelUtil::getNumElemBits(format);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_PixelUtil_getMemorySize_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1PixelFormat(JNIEnv *__env , jclass __clazz, jlong width_j, jlong height_j, jlong depth_j, jint format_j)
			{
				ev_size_t width = (ev_size_t) width_j;
				ev_size_t height = (ev_size_t) height_j;
				ev_size_t depth = (ev_size_t) depth_j;
				EarthView::World::Graphic::PixelFormat format = (EarthView::World::Graphic::PixelFormat) format_j;
				ev_size_t __values1 = EarthView::World::Graphic::CPixelUtil::getMemorySize(width, height, depth, format);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_PixelUtil_getFlags_1PixelFormat(JNIEnv *__env , jclass __clazz, jint format_j)
			{
				EarthView::World::Graphic::PixelFormat format = (EarthView::World::Graphic::PixelFormat) format_j;
				ev_uint32 __values1 = EarthView::World::Graphic::CPixelUtil::getFlags(format);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_PixelUtil_hasAlpha_1PixelFormat(JNIEnv *__env , jclass __clazz, jint format_j)
			{
				EarthView::World::Graphic::PixelFormat format = (EarthView::World::Graphic::PixelFormat) format_j;
				ev_bool __values1 = EarthView::World::Graphic::CPixelUtil::hasAlpha(format);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_PixelUtil_isFloatingPoint_1PixelFormat(JNIEnv *__env , jclass __clazz, jint format_j)
			{
				EarthView::World::Graphic::PixelFormat format = (EarthView::World::Graphic::PixelFormat) format_j;
				ev_bool __values1 = EarthView::World::Graphic::CPixelUtil::isFloatingPoint(format);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_PixelUtil_isCompressed_1PixelFormat(JNIEnv *__env , jclass __clazz, jint format_j)
			{
				EarthView::World::Graphic::PixelFormat format = (EarthView::World::Graphic::PixelFormat) format_j;
				ev_bool __values1 = EarthView::World::Graphic::CPixelUtil::isCompressed(format);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_PixelUtil_isDepth_1PixelFormat(JNIEnv *__env , jclass __clazz, jint format_j)
			{
				EarthView::World::Graphic::PixelFormat format = (EarthView::World::Graphic::PixelFormat) format_j;
				ev_bool __values1 = EarthView::World::Graphic::CPixelUtil::isDepth(format);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_PixelUtil_isNativeEndian_1PixelFormat(JNIEnv *__env , jclass __clazz, jint format_j)
			{
				EarthView::World::Graphic::PixelFormat format = (EarthView::World::Graphic::PixelFormat) format_j;
				ev_bool __values1 = EarthView::World::Graphic::CPixelUtil::isNativeEndian(format);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_PixelUtil_isLuminance_1PixelFormat(JNIEnv *__env , jclass __clazz, jint format_j)
			{
				EarthView::World::Graphic::PixelFormat format = (EarthView::World::Graphic::PixelFormat) format_j;
				ev_bool __values1 = EarthView::World::Graphic::CPixelUtil::isLuminance(format);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_PixelUtil_isValidExtent_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1PixelFormat(JNIEnv *__env , jclass __clazz, jlong width_j, jlong height_j, jlong depth_j, jint format_j)
			{
				ev_size_t width = (ev_size_t) width_j;
				ev_size_t height = (ev_size_t) height_j;
				ev_size_t depth = (ev_size_t) depth_j;
				EarthView::World::Graphic::PixelFormat format = (EarthView::World::Graphic::PixelFormat) format_j;
				ev_bool __values1 = EarthView::World::Graphic::CPixelUtil::isValidExtent(width, height, depth, format);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PixelUtil_getBitDepths_1PixelFormat_1ev_1int32(JNIEnv *__env , jclass __clazz, jint format_j, jlong rgba_j)
			{
				EarthView::World::Graphic::PixelFormat format = (EarthView::World::Graphic::PixelFormat) format_j;
				ev_int32 rgba[4];
				for (int i = 0; i<4; i++)
				{
					rgba[i] = *(ev_int32*)rgba_j;
					rgba_j++;
				}
				EarthView::World::Graphic::CPixelUtil::getBitDepths(format, rgba);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PixelUtil_getBitMasks_1PixelFormat_1ev_1uint32(JNIEnv *__env , jclass __clazz, jint format_j, jlong rgba_j)
			{
				EarthView::World::Graphic::PixelFormat format = (EarthView::World::Graphic::PixelFormat) format_j;
				ev_uint32 rgba[4];
				for (int i = 0; i<4; i++)
				{
					rgba[i] = *(ev_uint32*)rgba_j;
					rgba_j++;
				}
				EarthView::World::Graphic::CPixelUtil::getBitMasks(format, rgba);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PixelUtil_getBitShifts_1PixelFormat_1ev_1uchar(JNIEnv *__env , jclass __clazz, jint format_j, jlong rgba_j)
			{
				EarthView::World::Graphic::PixelFormat format = (EarthView::World::Graphic::PixelFormat) format_j;
				ev_uchar rgba[4];
				for (int i = 0; i<4; i++)
				{
					rgba[i] = *(ev_uchar*)rgba_j;
					rgba_j++;
				}
				EarthView::World::Graphic::CPixelUtil::getBitShifts(format, rgba);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_PixelUtil_getFormatName_1PixelFormat(JNIEnv *__env , jclass __clazz, jint srcformat_j)
			{
				EarthView::World::Graphic::PixelFormat srcformat = (EarthView::World::Graphic::PixelFormat) srcformat_j;
				EVString __values1 = EarthView::World::Graphic::CPixelUtil::getFormatName(srcformat);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_PixelUtil_isAccessible_1PixelFormat(JNIEnv *__env , jclass __clazz, jint srcformat_j)
			{
				EarthView::World::Graphic::PixelFormat srcformat = (EarthView::World::Graphic::PixelFormat) srcformat_j;
				ev_bool __values1 = EarthView::World::Graphic::CPixelUtil::isAccessible(srcformat);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_PixelUtil_getComponentType_1PixelFormat(JNIEnv *__env , jclass __clazz, jint fmt_j)
			{
				EarthView::World::Graphic::PixelFormat fmt = (EarthView::World::Graphic::PixelFormat) fmt_j;
				EarthView::World::Graphic::PixelComponentType __values1 = EarthView::World::Graphic::CPixelUtil::getComponentType(fmt);
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_PixelUtil_getComponentCount_1PixelFormat(JNIEnv *__env , jclass __clazz, jint fmt_j)
			{
				EarthView::World::Graphic::PixelFormat fmt = (EarthView::World::Graphic::PixelFormat) fmt_j;
				ev_size_t __values1 = EarthView::World::Graphic::CPixelUtil::getComponentCount(fmt);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_PixelUtil_getFormatFromName_1EVString(JNIEnv *__env , jclass __clazz, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Graphic::PixelFormat __values1 = EarthView::World::Graphic::CPixelUtil::getFormatFromName(name);
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_PixelUtil_getFormatFromName_1EVString_1ev_1bool(JNIEnv *__env , jclass __clazz, jstring name_j, jboolean accessibleOnly_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				ev_bool accessibleOnly = (ev_bool) accessibleOnly_j;
				EarthView::World::Graphic::PixelFormat __values1 = EarthView::World::Graphic::CPixelUtil::getFormatFromName(name, accessibleOnly);
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_PixelUtil_getFormatFromName_1EVString_1ev_1bool_1ev_1bool(JNIEnv *__env , jclass __clazz, jstring name_j, jboolean accessibleOnly_j, jboolean caseSensitive_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				ev_bool accessibleOnly = (ev_bool) accessibleOnly_j;
				ev_bool caseSensitive = (ev_bool) caseSensitive_j;
				EarthView::World::Graphic::PixelFormat __values1 = EarthView::World::Graphic::CPixelUtil::getFormatFromName(name, accessibleOnly, caseSensitive);
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_PixelUtil_getBNFExpressionOfPixelFormats_1void(JNIEnv *__env , jclass __clazz)
			{
				EVString __values1 = EarthView::World::Graphic::CPixelUtil::getBNFExpressionOfPixelFormats();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_PixelUtil_getBNFExpressionOfPixelFormats_1ev_1bool(JNIEnv *__env , jclass __clazz, jboolean accessibleOnly_j)
			{
				ev_bool accessibleOnly = (ev_bool) accessibleOnly_j;
				EVString __values1 = EarthView::World::Graphic::CPixelUtil::getBNFExpressionOfPixelFormats(accessibleOnly);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_PixelUtil_getFormatForBitDepths_1PixelFormat_1ev_1uint16_1ev_1uint16(JNIEnv *__env , jclass __clazz, jint fmt_j, jint integerBits_j, jint floatBits_j)
			{
				EarthView::World::Graphic::PixelFormat fmt = (EarthView::World::Graphic::PixelFormat) fmt_j;
				ev_uint16 integerBits = (ev_uint16) integerBits_j;
				ev_uint16 floatBits = (ev_uint16) floatBits_j;
				EarthView::World::Graphic::PixelFormat __values1 = EarthView::World::Graphic::CPixelUtil::getFormatForBitDepths(fmt, integerBits, floatBits);
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PixelUtil_packColour_1CColourValue_1PixelFormat_1void(JNIEnv *__env , jclass __clazz, jlong colour_j, jint pf_j, jlong dest_j)
			{
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				const EarthView::World::Graphic::PixelFormat pf = (EarthView::World::Graphic::PixelFormat) pf_j;
				void *dest = (void*) dest_j;
				EarthView::World::Graphic::CPixelUtil::packColour(colour, pf, dest);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PixelUtil_packColour_1ev_1uint8_1ev_1uint8_1ev_1uint8_1ev_1uint8_1PixelFormat_1void(JNIEnv *__env , jclass __clazz, jshort r_j, jshort g_j, jshort b_j, jshort a_j, jint pf_j, jlong dest_j)
			{
				const ev_uint8 r = (ev_uint8) r_j;
				const ev_uint8 g = (ev_uint8) g_j;
				const ev_uint8 b = (ev_uint8) b_j;
				const ev_uint8 a = (ev_uint8) a_j;
				const EarthView::World::Graphic::PixelFormat pf = (EarthView::World::Graphic::PixelFormat) pf_j;
				void *dest = (void*) dest_j;
				EarthView::World::Graphic::CPixelUtil::packColour(r, g, b, a, pf, dest);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PixelUtil_packColour_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real32_1PixelFormat_1void(JNIEnv *__env , jclass __clazz, jfloat r_j, jfloat g_j, jfloat b_j, jfloat a_j, jint pf_j, jlong dest_j)
			{
				const ev_real32 r = (ev_real32) r_j;
				const ev_real32 g = (ev_real32) g_j;
				const ev_real32 b = (ev_real32) b_j;
				const ev_real32 a = (ev_real32) a_j;
				const EarthView::World::Graphic::PixelFormat pf = (EarthView::World::Graphic::PixelFormat) pf_j;
				void *dest = (void*) dest_j;
				EarthView::World::Graphic::CPixelUtil::packColour(r, g, b, a, pf, dest);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PixelUtil_unpackColour_1CColourValue_1PixelFormat_1void(JNIEnv *__env , jclass __clazz, jlong colour_j, jint pf_j, jlong src_j)
			{
				EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				EarthView::World::Graphic::PixelFormat pf = (EarthView::World::Graphic::PixelFormat) pf_j;
				const void *src = (const void*) src_j;
				EarthView::World::Graphic::CPixelUtil::unpackColour(colour, pf, src);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PixelUtil_unpackColour_1ev_1uint8_1ev_1uint8_1ev_1uint8_1ev_1uint8_1PixelFormat_1void(JNIEnv *__env , jclass __clazz, jlong r_j, jlong g_j, jlong b_j, jlong a_j, jint pf_j, jlong src_j)
			{
				ev_uint8 &r = *(ev_uint8*) r_j;
				ev_uint8 &g = *(ev_uint8*) g_j;
				ev_uint8 &b = *(ev_uint8*) b_j;
				ev_uint8 &a = *(ev_uint8*) a_j;
				EarthView::World::Graphic::PixelFormat pf = (EarthView::World::Graphic::PixelFormat) pf_j;
				const void *src = (const void*) src_j;
				EarthView::World::Graphic::CPixelUtil::unpackColour(r, g, b, a, pf, src);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PixelUtil_unpackColour_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real32_1PixelFormat_1void(JNIEnv *__env , jclass __clazz, jlong r_j, jlong g_j, jlong b_j, jlong a_j, jint pf_j, jlong src_j)
			{
				ev_real32 &r = *(ev_real32*) r_j;
				ev_real32 &g = *(ev_real32*) g_j;
				ev_real32 &b = *(ev_real32*) b_j;
				ev_real32 &a = *(ev_real32*) a_j;
				EarthView::World::Graphic::PixelFormat pf = (EarthView::World::Graphic::PixelFormat) pf_j;
				const void *src = (const void*) src_j;
				EarthView::World::Graphic::CPixelUtil::unpackColour(r, g, b, a, pf, src);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PixelUtil_bulkPixelConversion_1void_1PixelFormat_1void_1PixelFormat_1ev_1uint32(JNIEnv *__env , jclass __clazz, jlong src_j, jint srcFormat_j, jlong dest_j, jint dstFormat_j, jlong count_j)
			{
				void *src = (void*) src_j;
				EarthView::World::Graphic::PixelFormat srcFormat = (EarthView::World::Graphic::PixelFormat) srcFormat_j;
				void *dest = (void*) dest_j;
				EarthView::World::Graphic::PixelFormat dstFormat = (EarthView::World::Graphic::PixelFormat) dstFormat_j;
				ev_uint32 count = (ev_uint32) count_j;
				EarthView::World::Graphic::CPixelUtil::bulkPixelConversion(src, srcFormat, dest, dstFormat, count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PixelUtil_bulkPixelConversion_1CPixelBox_1CPixelBox(JNIEnv *__env , jclass __clazz, jlong src_j, jlong dst_j)
			{
				const EarthView::World::Graphic::CPixelBox &src = *(EarthView::World::Graphic::CPixelBox*) src_j;
				const EarthView::World::Graphic::CPixelBox &dst = *(EarthView::World::Graphic::CPixelBox*) dst_j;
				EarthView::World::Graphic::CPixelUtil::bulkPixelConversion(src, dst);
			}
		}
	}
}
