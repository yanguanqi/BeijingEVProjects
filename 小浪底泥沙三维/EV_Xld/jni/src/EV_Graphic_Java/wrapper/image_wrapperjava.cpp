/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/image.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_ImageFlagsHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					IF_COMPRESSED,
					IF_CUBEMAP,
					IF_3D_TEXTURE
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Image_get_1NeedConversion_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->NeedConversion);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Image_set_1NeedConversion_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*)pObjXXXX;
				pObjectX->NeedConversion = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Image_get_1NeedDeCompress_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->NeedDeCompress);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Image_set_1NeedDeCompress_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*)pObjXXXX;
				pObjectX->NeedDeCompress = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Image_get_1DxtFormat_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*)pObjXXXX;
				jint __values1_j = (jint) (pObjectX->DxtFormat);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Image_set_1DxtFormat_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*)pObjXXXX;
				pObjectX->DxtFormat = (ev_uint16)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Image_get_1HasMipMap_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->HasMipMap);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Image_set_1HasMipMap_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*)pObjXXXX;
				pObjectX->HasMipMap = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Image_get_1HasOneBitAlpha_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->HasOneBitAlpha);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Image_set_1HasOneBitAlpha_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*)pObjXXXX;
				pObjectX->HasOneBitAlpha = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Image_OperatorAssign_1CImage(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong img_j )
			{
				EarthView::World::Graphic::CImage& pObjectX = *(EarthView::World::Graphic::CImage*) pObjXXXX;
				const EarthView::World::Graphic::CImage &img = *(EarthView::World::Graphic::CImage*) img_j;
				pObjectX = img;
				EarthView::World::Graphic::CImage& __values1 = pObjectX;
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Image_flipAroundY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*) pObjXXXX;
				EarthView::World::Graphic::CImage& __values1 = pObjectX->flipAroundY();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Image_flipAroundX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*) pObjXXXX;
				EarthView::World::Graphic::CImage& __values1 = pObjectX->flipAroundX();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Image_loadDynamicImage_1ev_1uchar_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1PixelFormat_1ev_1bool_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pData_j, jlong uWidth_j, jlong uHeight_j, jlong depth_j, jint eFormat_j, jboolean autoDelete_j, jlong numFaces_j, jlong numMipMaps_j)
			{
				ev_uchar *pData = (ev_uchar*) pData_j;
				ev_size_t uWidth = (ev_size_t) uWidth_j;
				ev_size_t uHeight = (ev_size_t) uHeight_j;
				ev_size_t depth = (ev_size_t) depth_j;
				EarthView::World::Graphic::PixelFormat eFormat = (EarthView::World::Graphic::PixelFormat) eFormat_j;
				ev_bool autoDelete = (ev_bool) autoDelete_j;
				ev_size_t numFaces = (ev_size_t) numFaces_j;
				ev_size_t numMipMaps = (ev_size_t) numMipMaps_j;
				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*) pObjXXXX;
				EarthView::World::Graphic::CImage& __values1 = pObjectX->loadDynamicImage(pData, uWidth, uHeight, depth, eFormat, autoDelete, numFaces, numMipMaps);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Image_loadDynamicImage_1ev_1uchar_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1PixelFormat_1ev_1bool_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pData_j, jlong uWidth_j, jlong uHeight_j, jlong depth_j, jint eFormat_j, jboolean autoDelete_j, jlong numFaces_j)
			{
				ev_uchar *pData = (ev_uchar*) pData_j;
				ev_size_t uWidth = (ev_size_t) uWidth_j;
				ev_size_t uHeight = (ev_size_t) uHeight_j;
				ev_size_t depth = (ev_size_t) depth_j;
				EarthView::World::Graphic::PixelFormat eFormat = (EarthView::World::Graphic::PixelFormat) eFormat_j;
				ev_bool autoDelete = (ev_bool) autoDelete_j;
				ev_size_t numFaces = (ev_size_t) numFaces_j;
				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*) pObjXXXX;
				EarthView::World::Graphic::CImage& __values1 = pObjectX->loadDynamicImage(pData, uWidth, uHeight, depth, eFormat, autoDelete, numFaces);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Image_loadDynamicImage_1ev_1uchar_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1PixelFormat_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pData_j, jlong uWidth_j, jlong uHeight_j, jlong depth_j, jint eFormat_j, jboolean autoDelete_j)
			{
				ev_uchar *pData = (ev_uchar*) pData_j;
				ev_size_t uWidth = (ev_size_t) uWidth_j;
				ev_size_t uHeight = (ev_size_t) uHeight_j;
				ev_size_t depth = (ev_size_t) depth_j;
				EarthView::World::Graphic::PixelFormat eFormat = (EarthView::World::Graphic::PixelFormat) eFormat_j;
				ev_bool autoDelete = (ev_bool) autoDelete_j;
				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*) pObjXXXX;
				EarthView::World::Graphic::CImage& __values1 = pObjectX->loadDynamicImage(pData, uWidth, uHeight, depth, eFormat, autoDelete);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Image_loadDynamicImage_1ev_1uchar_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1PixelFormat(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pData_j, jlong uWidth_j, jlong uHeight_j, jlong depth_j, jint eFormat_j)
			{
				ev_uchar *pData = (ev_uchar*) pData_j;
				ev_size_t uWidth = (ev_size_t) uWidth_j;
				ev_size_t uHeight = (ev_size_t) uHeight_j;
				ev_size_t depth = (ev_size_t) depth_j;
				EarthView::World::Graphic::PixelFormat eFormat = (EarthView::World::Graphic::PixelFormat) eFormat_j;
				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*) pObjXXXX;
				EarthView::World::Graphic::CImage& __values1 = pObjectX->loadDynamicImage(pData, uWidth, uHeight, depth, eFormat);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Image_loadDynamicImage_1ev_1uchar_1ev_1size_1t_1ev_1size_1t_1PixelFormat(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pData_j, jlong uWidth_j, jlong uHeight_j, jint eFormat_j)
			{
				ev_uchar *pData = (ev_uchar*) pData_j;
				ev_size_t uWidth = (ev_size_t) uWidth_j;
				ev_size_t uHeight = (ev_size_t) uHeight_j;
				EarthView::World::Graphic::PixelFormat eFormat = (EarthView::World::Graphic::PixelFormat) eFormat_j;
				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*) pObjXXXX;
				EarthView::World::Graphic::CImage& __values1 = pObjectX->loadDynamicImage(pData, uWidth, uHeight, eFormat);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Image_loadRawData_1DataStreamPtr_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1PixelFormat_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j, jlong uWidth_j, jlong uHeight_j, jlong uDepth_j, jint eFormat_j, jlong numFaces_j, jlong numMipMaps_j)
			{
				EarthView::World::Core::DataStreamPtr &stream = *(EarthView::World::Core::DataStreamPtr*) stream_j;
				ev_size_t uWidth = (ev_size_t) uWidth_j;
				ev_size_t uHeight = (ev_size_t) uHeight_j;
				ev_size_t uDepth = (ev_size_t) uDepth_j;
				EarthView::World::Graphic::PixelFormat eFormat = (EarthView::World::Graphic::PixelFormat) eFormat_j;
				ev_size_t numFaces = (ev_size_t) numFaces_j;
				ev_size_t numMipMaps = (ev_size_t) numMipMaps_j;
				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*) pObjXXXX;
				EarthView::World::Graphic::CImage& __values1 = pObjectX->loadRawData(stream, uWidth, uHeight, uDepth, eFormat, numFaces, numMipMaps);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Image_loadRawData_1DataStreamPtr_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1PixelFormat_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j, jlong uWidth_j, jlong uHeight_j, jlong uDepth_j, jint eFormat_j, jlong numFaces_j)
			{
				EarthView::World::Core::DataStreamPtr &stream = *(EarthView::World::Core::DataStreamPtr*) stream_j;
				ev_size_t uWidth = (ev_size_t) uWidth_j;
				ev_size_t uHeight = (ev_size_t) uHeight_j;
				ev_size_t uDepth = (ev_size_t) uDepth_j;
				EarthView::World::Graphic::PixelFormat eFormat = (EarthView::World::Graphic::PixelFormat) eFormat_j;
				ev_size_t numFaces = (ev_size_t) numFaces_j;
				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*) pObjXXXX;
				EarthView::World::Graphic::CImage& __values1 = pObjectX->loadRawData(stream, uWidth, uHeight, uDepth, eFormat, numFaces);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Image_loadRawData_1DataStreamPtr_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1PixelFormat(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j, jlong uWidth_j, jlong uHeight_j, jlong uDepth_j, jint eFormat_j)
			{
				EarthView::World::Core::DataStreamPtr &stream = *(EarthView::World::Core::DataStreamPtr*) stream_j;
				ev_size_t uWidth = (ev_size_t) uWidth_j;
				ev_size_t uHeight = (ev_size_t) uHeight_j;
				ev_size_t uDepth = (ev_size_t) uDepth_j;
				EarthView::World::Graphic::PixelFormat eFormat = (EarthView::World::Graphic::PixelFormat) eFormat_j;
				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*) pObjXXXX;
				EarthView::World::Graphic::CImage& __values1 = pObjectX->loadRawData(stream, uWidth, uHeight, uDepth, eFormat);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Image_loadRawData_1DataStreamPtr_1ev_1size_1t_1ev_1size_1t_1PixelFormat(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j, jlong uWidth_j, jlong uHeight_j, jint eFormat_j)
			{
				EarthView::World::Core::DataStreamPtr &stream = *(EarthView::World::Core::DataStreamPtr*) stream_j;
				ev_size_t uWidth = (ev_size_t) uWidth_j;
				ev_size_t uHeight = (ev_size_t) uHeight_j;
				EarthView::World::Graphic::PixelFormat eFormat = (EarthView::World::Graphic::PixelFormat) eFormat_j;
				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*) pObjXXXX;
				EarthView::World::Graphic::CImage& __values1 = pObjectX->loadRawData(stream, uWidth, uHeight, eFormat);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Image_load_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strFileName_j, jstring groupName_j)
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
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*) pObjXXXX;
				EarthView::World::Graphic::CImage& __values1 = pObjectX->load(strFileName, groupName);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Image_load_1DataStreamPtr_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j, jstring type_j)
			{
				EarthView::World::Core::DataStreamPtr &stream = *(EarthView::World::Core::DataStreamPtr*) stream_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* type_ch = (const ev_char*)__env->GetStringUTFChars(type_j,JNI_FALSE);
				const EVString type = type_ch;
				__env->ReleaseStringUTFChars(type_j, (const char *)type_ch);
				#else
				const ev_wchar* type_ch = (const ev_wchar*)__env->GetStringChars(type_j,JNI_FALSE);
				const EVString type = type_ch;
				__env->ReleaseStringChars(type_j, (const jchar *)type_ch);
				#endif
				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*) pObjXXXX;
				EarthView::World::Graphic::CImage& __values1 = pObjectX->load(stream, type);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Image_load_1DataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
			{
				EarthView::World::Core::DataStreamPtr &stream = *(EarthView::World::Core::DataStreamPtr*) stream_j;
				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*) pObjXXXX;
				EarthView::World::Graphic::CImage& __values1 = pObjectX->load(stream);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Image_load_1DataStreamPtr_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j, jstring type_j, jboolean ignoreMipmap_j)
			{
				EarthView::World::Core::DataStreamPtr &stream = *(EarthView::World::Core::DataStreamPtr*) stream_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* type_ch = (const ev_char*)__env->GetStringUTFChars(type_j,JNI_FALSE);
				const EVString type = type_ch;
				__env->ReleaseStringUTFChars(type_j, (const char *)type_ch);
				#else
				const ev_wchar* type_ch = (const ev_wchar*)__env->GetStringChars(type_j,JNI_FALSE);
				const EVString type = type_ch;
				__env->ReleaseStringChars(type_j, (const jchar *)type_ch);
				#endif
				ev_bool ignoreMipmap = (ev_bool) ignoreMipmap_j;
				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*) pObjXXXX;
				EarthView::World::Graphic::CImage& __values1 = pObjectX->load(stream, type, ignoreMipmap);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Image_loadTwoImagesAsRGBA_1EVString_1EVString_1EVString_1PixelFormat(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring rgbFilename_j, jstring alphaFilename_j, jstring groupName_j, jint format_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* rgbFilename_ch = (const ev_char*)__env->GetStringUTFChars(rgbFilename_j,JNI_FALSE);
				const EVString rgbFilename = rgbFilename_ch;
				__env->ReleaseStringUTFChars(rgbFilename_j, (const char *)rgbFilename_ch);
				#else
				const ev_wchar* rgbFilename_ch = (const ev_wchar*)__env->GetStringChars(rgbFilename_j,JNI_FALSE);
				const EVString rgbFilename = rgbFilename_ch;
				__env->ReleaseStringChars(rgbFilename_j, (const jchar *)rgbFilename_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* alphaFilename_ch = (const ev_char*)__env->GetStringUTFChars(alphaFilename_j,JNI_FALSE);
				const EVString alphaFilename = alphaFilename_ch;
				__env->ReleaseStringUTFChars(alphaFilename_j, (const char *)alphaFilename_ch);
				#else
				const ev_wchar* alphaFilename_ch = (const ev_wchar*)__env->GetStringChars(alphaFilename_j,JNI_FALSE);
				const EVString alphaFilename = alphaFilename_ch;
				__env->ReleaseStringChars(alphaFilename_j, (const jchar *)alphaFilename_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::PixelFormat format = (EarthView::World::Graphic::PixelFormat) format_j;
				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*) pObjXXXX;
				EarthView::World::Graphic::CImage& __values1 = pObjectX->loadTwoImagesAsRGBA(rgbFilename, alphaFilename, groupName, format);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Image_loadTwoImagesAsRGBA_1EVString_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring rgbFilename_j, jstring alphaFilename_j, jstring groupName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* rgbFilename_ch = (const ev_char*)__env->GetStringUTFChars(rgbFilename_j,JNI_FALSE);
				const EVString rgbFilename = rgbFilename_ch;
				__env->ReleaseStringUTFChars(rgbFilename_j, (const char *)rgbFilename_ch);
				#else
				const ev_wchar* rgbFilename_ch = (const ev_wchar*)__env->GetStringChars(rgbFilename_j,JNI_FALSE);
				const EVString rgbFilename = rgbFilename_ch;
				__env->ReleaseStringChars(rgbFilename_j, (const jchar *)rgbFilename_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* alphaFilename_ch = (const ev_char*)__env->GetStringUTFChars(alphaFilename_j,JNI_FALSE);
				const EVString alphaFilename = alphaFilename_ch;
				__env->ReleaseStringUTFChars(alphaFilename_j, (const char *)alphaFilename_ch);
				#else
				const ev_wchar* alphaFilename_ch = (const ev_wchar*)__env->GetStringChars(alphaFilename_j,JNI_FALSE);
				const EVString alphaFilename = alphaFilename_ch;
				__env->ReleaseStringChars(alphaFilename_j, (const jchar *)alphaFilename_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*) pObjXXXX;
				EarthView::World::Graphic::CImage& __values1 = pObjectX->loadTwoImagesAsRGBA(rgbFilename, alphaFilename, groupName);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Image_loadTwoImagesAsRGBA_1DataStreamPtr_1DataStreamPtr_1PixelFormat_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rgbStream_j, jlong alphaStream_j, jint fmt_j, jstring rgbType_j, jstring alphaType_j)
			{
				EarthView::World::Core::DataStreamPtr &rgbStream = *(EarthView::World::Core::DataStreamPtr*) rgbStream_j;
				EarthView::World::Core::DataStreamPtr &alphaStream = *(EarthView::World::Core::DataStreamPtr*) alphaStream_j;
				EarthView::World::Graphic::PixelFormat fmt = (EarthView::World::Graphic::PixelFormat) fmt_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* rgbType_ch = (const ev_char*)__env->GetStringUTFChars(rgbType_j,JNI_FALSE);
				const EVString rgbType = rgbType_ch;
				__env->ReleaseStringUTFChars(rgbType_j, (const char *)rgbType_ch);
				#else
				const ev_wchar* rgbType_ch = (const ev_wchar*)__env->GetStringChars(rgbType_j,JNI_FALSE);
				const EVString rgbType = rgbType_ch;
				__env->ReleaseStringChars(rgbType_j, (const jchar *)rgbType_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* alphaType_ch = (const ev_char*)__env->GetStringUTFChars(alphaType_j,JNI_FALSE);
				const EVString alphaType = alphaType_ch;
				__env->ReleaseStringUTFChars(alphaType_j, (const char *)alphaType_ch);
				#else
				const ev_wchar* alphaType_ch = (const ev_wchar*)__env->GetStringChars(alphaType_j,JNI_FALSE);
				const EVString alphaType = alphaType_ch;
				__env->ReleaseStringChars(alphaType_j, (const jchar *)alphaType_ch);
				#endif
				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*) pObjXXXX;
				EarthView::World::Graphic::CImage& __values1 = pObjectX->loadTwoImagesAsRGBA(rgbStream, alphaStream, fmt, rgbType, alphaType);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Image_loadTwoImagesAsRGBA_1DataStreamPtr_1DataStreamPtr_1PixelFormat(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rgbStream_j, jlong alphaStream_j, jint fmt_j)
			{
				EarthView::World::Core::DataStreamPtr &rgbStream = *(EarthView::World::Core::DataStreamPtr*) rgbStream_j;
				EarthView::World::Core::DataStreamPtr &alphaStream = *(EarthView::World::Core::DataStreamPtr*) alphaStream_j;
				EarthView::World::Graphic::PixelFormat fmt = (EarthView::World::Graphic::PixelFormat) fmt_j;
				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*) pObjXXXX;
				EarthView::World::Graphic::CImage& __values1 = pObjectX->loadTwoImagesAsRGBA(rgbStream, alphaStream, fmt);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Image_loadTwoImagesAsRGBA_1DataStreamPtr_1DataStreamPtr_1PixelFormat_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rgbStream_j, jlong alphaStream_j, jint fmt_j, jstring rgbType_j)
			{
				EarthView::World::Core::DataStreamPtr &rgbStream = *(EarthView::World::Core::DataStreamPtr*) rgbStream_j;
				EarthView::World::Core::DataStreamPtr &alphaStream = *(EarthView::World::Core::DataStreamPtr*) alphaStream_j;
				EarthView::World::Graphic::PixelFormat fmt = (EarthView::World::Graphic::PixelFormat) fmt_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* rgbType_ch = (const ev_char*)__env->GetStringUTFChars(rgbType_j,JNI_FALSE);
				const EVString rgbType = rgbType_ch;
				__env->ReleaseStringUTFChars(rgbType_j, (const char *)rgbType_ch);
				#else
				const ev_wchar* rgbType_ch = (const ev_wchar*)__env->GetStringChars(rgbType_j,JNI_FALSE);
				const EVString rgbType = rgbType_ch;
				__env->ReleaseStringChars(rgbType_j, (const jchar *)rgbType_ch);
				#endif
				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*) pObjXXXX;
				EarthView::World::Graphic::CImage& __values1 = pObjectX->loadTwoImagesAsRGBA(rgbStream, alphaStream, fmt, rgbType);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Image_loadTwoImagesAsRGBA_1DataStreamPtr_1DataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rgbStream_j, jlong alphaStream_j)
			{
				EarthView::World::Core::DataStreamPtr &rgbStream = *(EarthView::World::Core::DataStreamPtr*) rgbStream_j;
				EarthView::World::Core::DataStreamPtr &alphaStream = *(EarthView::World::Core::DataStreamPtr*) alphaStream_j;
				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*) pObjXXXX;
				EarthView::World::Graphic::CImage& __values1 = pObjectX->loadTwoImagesAsRGBA(rgbStream, alphaStream);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Image_combineTwoImagesAsRGBA_1CImage_1CImage_1PixelFormat(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rgb_j, jlong alpha_j, jint format_j)
			{
				const EarthView::World::Graphic::CImage &rgb = *(EarthView::World::Graphic::CImage*) rgb_j;
				const EarthView::World::Graphic::CImage &alpha = *(EarthView::World::Graphic::CImage*) alpha_j;
				EarthView::World::Graphic::PixelFormat format = (EarthView::World::Graphic::PixelFormat) format_j;
				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*) pObjXXXX;
				EarthView::World::Graphic::CImage& __values1 = pObjectX->combineTwoImagesAsRGBA(rgb, alpha, format);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Image_combineTwoImagesAsRGBA_1CImage_1CImage(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rgb_j, jlong alpha_j)
			{
				const EarthView::World::Graphic::CImage &rgb = *(EarthView::World::Graphic::CImage*) rgb_j;
				const EarthView::World::Graphic::CImage &alpha = *(EarthView::World::Graphic::CImage*) alpha_j;
				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*) pObjXXXX;
				EarthView::World::Graphic::CImage& __values1 = pObjectX->combineTwoImagesAsRGBA(rgb, alpha);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Image_save_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j)
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
				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*) pObjXXXX;
				pObjectX->save(filename);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Image_encode_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring formatextension_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* formatextension_ch = (const ev_char*)__env->GetStringUTFChars(formatextension_j,JNI_FALSE);
				const EVString formatextension = formatextension_ch;
				__env->ReleaseStringUTFChars(formatextension_j, (const char *)formatextension_ch);
				#else
				const ev_wchar* formatextension_ch = (const ev_wchar*)__env->GetStringChars(formatextension_j,JNI_FALSE);
				const EVString formatextension = formatextension_ch;
				__env->ReleaseStringChars(formatextension_j, (const jchar *)formatextension_ch);
				#endif
				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*) pObjXXXX;
				EarthView::World::Core::DataStreamPtr __values1 = pObjectX->encode(formatextension);
				EarthView::World::Core::DataStreamPtr *returnvalues = new EarthView::World::Core::DataStreamPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Image_toDDS_1DataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong inputStream_j)
			{
				EarthView::World::Core::DataStreamPtr &inputStream = *(EarthView::World::Core::DataStreamPtr*) inputStream_j;
				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*) pObjXXXX;
				EarthView::World::Core::DataStreamPtr __values1 = pObjectX->toDDS(inputStream);
				EarthView::World::Core::DataStreamPtr *returnvalues = new EarthView::World::Core::DataStreamPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Image_toDDS2_1DataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong inputStream_j)
			{
				EarthView::World::Core::DataStreamPtr &inputStream = *(EarthView::World::Core::DataStreamPtr*) inputStream_j;
				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*) pObjXXXX;
				EarthView::World::Core::DataStreamPtr __values1 = pObjectX->toDDS2(inputStream);
				EarthView::World::Core::DataStreamPtr *returnvalues = new EarthView::World::Core::DataStreamPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Image_getData_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*) pObjXXXX;
				ev_uchar* __values1 = pObjectX->getData();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Image_getSize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getSize();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Image_getNumMipmaps_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getNumMipmaps();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Image_hasFlag_1ImageFlags(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint imgFlag_j)
			{
				const EarthView::World::Graphic::ImageFlags imgFlag = (EarthView::World::Graphic::ImageFlags) imgFlag_j;
				const 				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasFlag(imgFlag);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Image_getWidth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getWidth();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Image_getHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getHeight();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Image_getDepth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getDepth();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Image_getNumFaces_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getNumFaces();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Image_getRowSpan_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getRowSpan();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Image_getFormat_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*) pObjXXXX;
				EarthView::World::Graphic::PixelFormat __values1 = pObjectX->getFormat();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jshort JNICALL Java_com_earthview_world_graphic_Image_getBPP_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*) pObjXXXX;
				ev_uchar __values1 = pObjectX->getBPP();
				jshort __values1_j = (jshort) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Image_getHasAlpha_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*) pObjXXXX;
				ev_bool __values1 = pObjectX->getHasAlpha();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Image_applyGamma_1ev_1uchar_1Real_1ev_1size_1t_1ev_1uchar(JNIEnv *__env , jclass __clazz, jlong buffer_j, jdouble gamma_j, jlong size_j, jshort bpp_j)
			{
				ev_uchar *buffer = (ev_uchar*) buffer_j;
				Real gamma = (Real) gamma_j;
				ev_size_t size = (ev_size_t) size_j;
				ev_uchar bpp = (ev_uchar) bpp_j;
				EarthView::World::Graphic::CImage::applyGamma(buffer, gamma, size, bpp);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Image_getColourAt_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong x_j, jlong y_j, jlong z_j)
			{
				ev_size_t x = (ev_size_t) x_j;
				ev_size_t y = (ev_size_t) y_j;
				ev_size_t z = (ev_size_t) z_j;
				const 				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*) pObjXXXX;
				EarthView::World::Graphic::CColourValue __values1 = pObjectX->getColourAt(x, y, z);
				EarthView::World::Graphic::CColourValue *returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Image_setColourAt_1CColourValue_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cv_j, jlong x_j, jlong y_j, jlong z_j)
			{
				EarthView::World::Graphic::CColourValue &cv = *(EarthView::World::Graphic::CColourValue*) cv_j;
				ev_size_t x = (ev_size_t) x_j;
				ev_size_t y = (ev_size_t) y_j;
				ev_size_t z = (ev_size_t) z_j;
				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*) pObjXXXX;
				pObjectX->setColourAt(cv, x, y, z);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Image_getPixelBox_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong face_j, jlong mipmap_j)
			{
				ev_size_t face = (ev_size_t) face_j;
				ev_size_t mipmap = (ev_size_t) mipmap_j;
				const 				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*) pObjXXXX;
				EarthView::World::Graphic::CPixelBox __values1 = pObjectX->getPixelBox(face, mipmap);
				EarthView::World::Graphic::CPixelBox *returnvalues = new EarthView::World::Graphic::CPixelBox(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Image_getPixelBox_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong face_j)
			{
				ev_size_t face = (ev_size_t) face_j;
				const 				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*) pObjXXXX;
				EarthView::World::Graphic::CPixelBox __values1 = pObjectX->getPixelBox(face);
				EarthView::World::Graphic::CPixelBox *returnvalues = new EarthView::World::Graphic::CPixelBox(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Image_getPixelBox_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*) pObjXXXX;
				EarthView::World::Graphic::CPixelBox __values1 = pObjectX->getPixelBox();
				EarthView::World::Graphic::CPixelBox *returnvalues = new EarthView::World::Graphic::CPixelBox(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Image_freeMemory_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*) pObjXXXX;
				pObjectX->freeMemory();
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_Image_00024FilterHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CImage::FILTER_NEAREST,
					CImage::FILTER_LINEAR,
					CImage::FILTER_BILINEAR,
					CImage::FILTER_BOX,
					CImage::FILTER_TRIANGLE,
					CImage::FILTER_BICUBIC
				};
				jintArray array = __env->NewIntArray(6);
				__env->SetIntArrayRegion(array, 0, 6, enum_values);
				return array;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Image_scale_1CPixelBox_1CPixelBox_1Filter(JNIEnv *__env , jclass __clazz, jlong src_j, jlong dst_j, jint filter_j)
			{
				const EarthView::World::Graphic::CPixelBox &src = *(EarthView::World::Graphic::CPixelBox*) src_j;
				const EarthView::World::Graphic::CPixelBox &dst = *(EarthView::World::Graphic::CPixelBox*) dst_j;
				EarthView::World::Graphic::CImage::Filter filter = (EarthView::World::Graphic::CImage::Filter) filter_j;
				EarthView::World::Graphic::CImage::scale(src, dst, filter);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Image_scale_1CPixelBox_1CPixelBox(JNIEnv *__env , jclass __clazz, jlong src_j, jlong dst_j)
			{
				const EarthView::World::Graphic::CPixelBox &src = *(EarthView::World::Graphic::CPixelBox*) src_j;
				const EarthView::World::Graphic::CPixelBox &dst = *(EarthView::World::Graphic::CPixelBox*) dst_j;
				EarthView::World::Graphic::CImage::scale(src, dst);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Image_resize_1ev_1uint16_1ev_1uint16_1Filter(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint width_j, jint height_j, jint filter_j)
			{
				ev_uint16 width = (ev_uint16) width_j;
				ev_uint16 height = (ev_uint16) height_j;
				EarthView::World::Graphic::CImage::Filter filter = (EarthView::World::Graphic::CImage::Filter) filter_j;
				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*) pObjXXXX;
				pObjectX->resize(width, height, filter);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Image_resize_1ev_1uint16_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint width_j, jint height_j)
			{
				ev_uint16 width = (ev_uint16) width_j;
				ev_uint16 height = (ev_uint16) height_j;
				EarthView::World::Graphic::CImage *pObjectX = (EarthView::World::Graphic::CImage*) pObjXXXX;
				pObjectX->resize(width, height);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Image_calculateSize_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1PixelFormat(JNIEnv *__env , jclass __clazz, jlong mipmaps_j, jlong faces_j, jlong width_j, jlong height_j, jlong depth_j, jint format_j)
			{
				ev_size_t mipmaps = (ev_size_t) mipmaps_j;
				ev_size_t faces = (ev_size_t) faces_j;
				ev_size_t width = (ev_size_t) width_j;
				ev_size_t height = (ev_size_t) height_j;
				ev_size_t depth = (ev_size_t) depth_j;
				EarthView::World::Graphic::PixelFormat format = (EarthView::World::Graphic::PixelFormat) format_j;
				ev_size_t __values1 = EarthView::World::Graphic::CImage::calculateSize(mipmaps, faces, width, height, depth, format);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_Image_getFileExtFromMagic_1DataStreamPtr(JNIEnv *__env , jclass __clazz, jlong stream_j)
			{
				EarthView::World::Core::DataStreamPtr stream = *(EarthView::World::Core::DataStreamPtr*) stream_j;
				EVString __values1 = EarthView::World::Graphic::CImage::getFileExtFromMagic(stream);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ImagePtrList_push_1back_1CImage(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_t_j)
			{
				EarthView::World::Graphic::CImage *&ref_t = *(EarthView::World::Graphic::CImage**) ref_t_j;
				EarthView::World::Graphic::ImagePtrList *pObjectX = (EarthView::World::Graphic::ImagePtrList*) pObjXXXX;
				pObjectX->push_back(ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ImagePtrList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ImagePtrList *pObjectX = (EarthView::World::Graphic::ImagePtrList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ImagePtrList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ImagePtrList *pObjectX = (EarthView::World::Graphic::ImagePtrList*) pObjXXXX;
				EarthView::World::Graphic::CImage*& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ImagePtrList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ImagePtrList *pObjectX = (EarthView::World::Graphic::ImagePtrList*) pObjXXXX;
				EarthView::World::Graphic::CImage*& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ImagePtrList_insert_1ev_1uint32_1CImage(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong ref_t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::CImage *&ref_t = *(EarthView::World::Graphic::CImage**) ref_t_j;
				EarthView::World::Graphic::ImagePtrList *pObjectX = (EarthView::World::Graphic::ImagePtrList*) pObjXXXX;
				pObjectX->insert(pos, ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ImagePtrList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::ImagePtrList *pObjectX = (EarthView::World::Graphic::ImagePtrList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ImagePtrList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::ImagePtrList *pObjectX = (EarthView::World::Graphic::ImagePtrList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ImagePtrList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::ImagePtrList& pObjectX = *(EarthView::World::Graphic::ImagePtrList*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CImage*& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ImagePtrList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::ImagePtrList *pObjectX = (EarthView::World::Graphic::ImagePtrList*) pObjXXXX;
				EarthView::World::Graphic::CImage*& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ImagePtrList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::ImagePtrList *pObjectX = (EarthView::World::Graphic::ImagePtrList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ImagePtrList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::ImagePtrList *pObjectX = (EarthView::World::Graphic::ImagePtrList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ImagePtrList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::ImagePtrList *pObjectX = (EarthView::World::Graphic::ImagePtrList*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ImagePtrList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ImagePtrList *pObjectX = (EarthView::World::Graphic::ImagePtrList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConstImagePtrList_push_1back_1CImage(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_t_j)
			{
				const EarthView::World::Graphic::CImage *&ref_t = *(const EarthView::World::Graphic::CImage**) ref_t_j;
				EarthView::World::Graphic::ConstImagePtrList *pObjectX = (EarthView::World::Graphic::ConstImagePtrList*) pObjXXXX;
				pObjectX->push_back(ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConstImagePtrList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ConstImagePtrList *pObjectX = (EarthView::World::Graphic::ConstImagePtrList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConstImagePtrList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ConstImagePtrList *pObjectX = (EarthView::World::Graphic::ConstImagePtrList*) pObjXXXX;
				const EarthView::World::Graphic::CImage*& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConstImagePtrList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ConstImagePtrList *pObjectX = (EarthView::World::Graphic::ConstImagePtrList*) pObjXXXX;
				const EarthView::World::Graphic::CImage*& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConstImagePtrList_insert_1ev_1uint32_1CImage(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong ref_t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				const EarthView::World::Graphic::CImage *&ref_t = *(const EarthView::World::Graphic::CImage**) ref_t_j;
				EarthView::World::Graphic::ConstImagePtrList *pObjectX = (EarthView::World::Graphic::ConstImagePtrList*) pObjXXXX;
				pObjectX->insert(pos, ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConstImagePtrList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::ConstImagePtrList *pObjectX = (EarthView::World::Graphic::ConstImagePtrList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ConstImagePtrList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::ConstImagePtrList *pObjectX = (EarthView::World::Graphic::ConstImagePtrList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConstImagePtrList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::ConstImagePtrList& pObjectX = *(EarthView::World::Graphic::ConstImagePtrList*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				const EarthView::World::Graphic::CImage*& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConstImagePtrList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::ConstImagePtrList *pObjectX = (EarthView::World::Graphic::ConstImagePtrList*) pObjXXXX;
				const EarthView::World::Graphic::CImage*& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConstImagePtrList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::ConstImagePtrList *pObjectX = (EarthView::World::Graphic::ConstImagePtrList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConstImagePtrList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::ConstImagePtrList *pObjectX = (EarthView::World::Graphic::ConstImagePtrList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConstImagePtrList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::ConstImagePtrList *pObjectX = (EarthView::World::Graphic::ConstImagePtrList*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConstImagePtrList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ConstImagePtrList *pObjectX = (EarthView::World::Graphic::ConstImagePtrList*) pObjXXXX;
				pObjectX->clear();
			}
		}
	}
}
