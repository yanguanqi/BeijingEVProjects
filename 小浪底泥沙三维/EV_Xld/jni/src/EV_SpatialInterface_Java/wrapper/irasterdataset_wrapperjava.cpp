/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/irasterdataset.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Raster
			{
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial2d_raster_EVIOFlagHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						IO_READ,
						IO_WRITE
					};
					jintArray array = __env->NewIntArray(2);
					__env->SetIntArrayRegion(array, 0, 2, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_raster_AffineTransform_getUpLeftX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CAffineTransform *pObjectX = (EarthView::World::Spatial2D::Raster::CAffineTransform*) pObjXXXX;
					const ev_real64 __values1 = pObjectX->getUpLeftX();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_raster_AffineTransform_getUpLeftY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CAffineTransform *pObjectX = (EarthView::World::Spatial2D::Raster::CAffineTransform*) pObjXXXX;
					const ev_real64 __values1 = pObjectX->getUpLeftY();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_raster_AffineTransform_getRotateX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CAffineTransform *pObjectX = (EarthView::World::Spatial2D::Raster::CAffineTransform*) pObjXXXX;
					const ev_real64 __values1 = pObjectX->getRotateX();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_raster_AffineTransform_getRotateY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CAffineTransform *pObjectX = (EarthView::World::Spatial2D::Raster::CAffineTransform*) pObjXXXX;
					const ev_real64 __values1 = pObjectX->getRotateY();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_raster_AffineTransform_getResolutionX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CAffineTransform *pObjectX = (EarthView::World::Spatial2D::Raster::CAffineTransform*) pObjXXXX;
					const ev_real64 __values1 = pObjectX->getResolutionX();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_raster_AffineTransform_getResolutionY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CAffineTransform *pObjectX = (EarthView::World::Spatial2D::Raster::CAffineTransform*) pObjXXXX;
					const ev_real64 __values1 = pObjectX->getResolutionY();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_AffineTransform_getGeoTransFormParameter_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CAffineTransform *pObjectX = (EarthView::World::Spatial2D::Raster::CAffineTransform*) pObjXXXX;
					const ev_real64* __values1 = pObjectX->getGeoTransFormParameter();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_AffineTransform_OperatorAssign_1CAffineTransform(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong objAffine_j )
				{
					EarthView::World::Spatial2D::Raster::CAffineTransform& pObjectX = *(EarthView::World::Spatial2D::Raster::CAffineTransform*) pObjXXXX;
					const EarthView::World::Spatial2D::Raster::CAffineTransform &objAffine = *(EarthView::World::Spatial2D::Raster::CAffineTransform*) objAffine_j;
					pObjectX = objAffine;
					const EarthView::World::Spatial2D::Raster::CAffineTransform& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_AffineTransform_geoToPixel_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dfX_j, jlong dfY_j)
				{
					ev_real64 &dfX = *(ev_real64*) dfX_j;
					ev_real64 &dfY = *(ev_real64*) dfY_j;
					const 					EarthView::World::Spatial2D::Raster::CAffineTransform *pObjectX = (EarthView::World::Spatial2D::Raster::CAffineTransform*) pObjXXXX;
					pObjectX->geoToPixel(dfX, dfY);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_AffineTransform_pixelToGeo_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dfX_j, jlong dfY_j)
				{
					ev_real64 &dfX = *(ev_real64*) dfX_j;
					ev_real64 &dfY = *(ev_real64*) dfY_j;
					const 					EarthView::World::Spatial2D::Raster::CAffineTransform *pObjectX = (EarthView::World::Spatial2D::Raster::CAffineTransform*) pObjXXXX;
					pObjectX->pixelToGeo(dfX, dfY);
				}
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_geodataset_EVRasterDataTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						RDT_Unknown,
						RDT_Byte,
						RDT_UInt16,
						RDT_Int16,
						RDT_UInt32,
						RDT_Int32,
						RDT_Float32,
						RDT_Float64,
						RDT_CInt16,
						RDT_CInt32,
						RDT_CFloat32,
						RDT_CFloat64,
						RDT_TypeCount
					};
					jintArray array = __env->NewIntArray(13);
					__env->SetIntArrayRegion(array, 0, 13, enum_values);
					return array;
				}
				class JIRasterDatasetProxy : public EarthView::World::Spatial::GeoDataset::IRasterDataset
				{
				 private:
					EarthView::World::Core::ev_string m_getRasterRect_ev_real64_ev_real64_ev_real64_ev_real64_callback;
					EarthView::World::Core::ev_string m_getRasterWidth_void_callback;
					EarthView::World::Core::ev_string m_getRasterHeight_void_callback;
					EarthView::World::Core::ev_string m_getBandCount_void_callback;
					EarthView::World::Core::ev_string m_getGeoTransform_void_callback;
					EarthView::World::Core::ev_string m_getRasterDataType_void_callback;
					EarthView::World::Core::ev_string m_getSpatialReferenceWkt_EVString_callback;
					EarthView::World::Core::ev_string m_setSpatialReference_EVString_callback;
					EarthView::World::Core::ev_string m_read_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_callback;
					EarthView::World::Core::ev_string m_write_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_callback;
					EarthView::World::Core::ev_string m_read_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_callback;
					EarthView::World::Core::ev_string m_buildOverViews_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_callback;
					EarthView::World::Core::ev_string m_buildDefaultOverViews_CProgressInfo_callback;
					EarthView::World::Core::ev_string m_rasterIO_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_callback;
					EarthView::World::Core::ev_string m_getType_void_callback;
					EarthView::World::Core::ev_string m_getName_void_callback;
					EarthView::World::Core::ev_string m_getDataVersion_void_callback;
					EarthView::World::Core::ev_string m_getDescription_void_callback;
					EarthView::World::Core::ev_string m_getUpdateTime_void_callback;
					EarthView::World::Core::ev_string m_hasSubDataset_void_callback;
					EarthView::World::Core::ev_string m_getDataSourceRef_void_callback;
					EarthView::World::Core::ev_string m_canEdit_void_callback;
					EarthView::World::Core::ev_string m_isEditing_void_callback;
					EarthView::World::Core::ev_string m_startEditing_ev_bool_callback;
					EarthView::World::Core::ev_string m_stopEditing_ev_bool_callback;
					EarthView::World::Core::ev_string m_isBeginEditingOperation_void_callback;
					EarthView::World::Core::ev_string m_beginEditingOperation_void_callback;
					EarthView::World::Core::ev_string m_endEditingOperation_ev_bool_callback;
				public:
					JIRasterDatasetProxy(EarthView::World::Core::CNameValuePairList *pList) : IRasterDataset(pList)
					{
					}
					ev_void unRegisterJavaReference()
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						if(__gr != NULL)
						{
							delete __gr;
							this->registerJavaReference(NULL);
						}
					}
				public:
					void register_getRasterRect_ev_real64_ev_real64_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getRasterRect_ev_real64_ev_real64_ev_real64_ev_real64_callback = __method;
					}
					void register_getRasterWidth_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getRasterWidth_void_callback = __method;
					}
					void register_getRasterHeight_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getRasterHeight_void_callback = __method;
					}
					void register_getBandCount_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getBandCount_void_callback = __method;
					}
					void register_getGeoTransform_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getGeoTransform_void_callback = __method;
					}
					void register_getRasterDataType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getRasterDataType_void_callback = __method;
					}
					void register_getSpatialReferenceWkt_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSpatialReferenceWkt_EVString_callback = __method;
					}
					void register_setSpatialReference_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSpatialReference_EVString_callback = __method;
					}
					void register_read_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_read_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_callback = __method;
					}
					void register_write_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_write_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_callback = __method;
					}
					void register_read_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_read_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_callback = __method;
					}
					void register_buildOverViews_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_buildOverViews_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_callback = __method;
					}
					void register_buildDefaultOverViews_CProgressInfo_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_buildDefaultOverViews_CProgressInfo_callback = __method;
					}
					void register_rasterIO_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_rasterIO_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_callback = __method;
					}
					void register_getType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getType_void_callback = __method;
					}
					void register_getName_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getName_void_callback = __method;
					}
					void register_getDataVersion_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDataVersion_void_callback = __method;
					}
					void register_getDescription_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDescription_void_callback = __method;
					}
					void register_getUpdateTime_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getUpdateTime_void_callback = __method;
					}
					void register_hasSubDataset_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_hasSubDataset_void_callback = __method;
					}
					void register_getDataSourceRef_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDataSourceRef_void_callback = __method;
					}
					void register_canEdit_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_canEdit_void_callback = __method;
					}
					void register_isEditing_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isEditing_void_callback = __method;
					}
					void register_startEditing_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_startEditing_ev_bool_callback = __method;
					}
					void register_stopEditing_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_stopEditing_ev_bool_callback = __method;
					}
					void register_isBeginEditingOperation_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isBeginEditingOperation_void_callback = __method;
					}
					void register_beginEditingOperation_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_beginEditingOperation_void_callback = __method;
					}
					void register_endEditingOperation_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_endEditingOperation_ev_bool_callback = __method;
					}
					virtual void getRasterRect(ev_real64& dfUpleftX, ev_real64& dfUpleftY, ev_real64& dfDownRightX, ev_real64& dfDownRightY) const
					{
						if (this->_gRef != NULL && this->m_getRasterRect_ev_real64_ev_real64_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong dfUpleftX_j = (jlong) &dfUpleftX;
							jlong dfUpleftY_j = (jlong) &dfUpleftY;
							jlong dfDownRightX_j = (jlong) &dfDownRightX;
							jlong dfDownRightY_j = (jlong) &dfDownRightY;
							jmethodID __method = __gr->getMethod("getRasterRect_ev_real64_ev_real64_ev_real64_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , dfUpleftX_j, dfUpleftY_j, dfDownRightX_j, dfDownRightY_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->IRasterDataset::getRasterRect(dfUpleftX, dfUpleftY, dfDownRightX, dfDownRightY);
						}
					}
					virtual const ev_int32 getRasterWidth() const
					{
						if (this->_gRef != NULL && this->m_getRasterWidth_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getRasterWidth_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const ev_int32 __values1 = (ev_int32) __values1_j;
							return __values1;
						}
						else
						{
							return this->IRasterDataset::getRasterWidth();
						}
					}
					virtual const ev_int32 getRasterHeight() const
					{
						if (this->_gRef != NULL && this->m_getRasterHeight_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getRasterHeight_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const ev_int32 __values1 = (ev_int32) __values1_j;
							return __values1;
						}
						else
						{
							return this->IRasterDataset::getRasterHeight();
						}
					}
					virtual const ev_int32 getBandCount() const
					{
						if (this->_gRef != NULL && this->m_getBandCount_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getBandCount_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const ev_int32 __values1 = (ev_int32) __values1_j;
							return __values1;
						}
						else
						{
							return this->IRasterDataset::getBandCount();
						}
					}
					virtual const EarthView::World::Spatial2D::Raster::CAffineTransform* getGeoTransform() const
					{
						if (this->_gRef != NULL && this->m_getGeoTransform_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getGeoTransform_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Spatial2D::Raster::CAffineTransform *__values1 = (const EarthView::World::Spatial2D::Raster::CAffineTransform*) __values1_j;
							return __values1;
						}
						else
						{
							return this->IRasterDataset::getGeoTransform();
						}
					}
					virtual EarthView::World::Spatial::GeoDataset::EVRasterDataType getRasterDataType() const
					{
						if (this->_gRef != NULL && this->m_getRasterDataType_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getRasterDataType_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::GeoDataset::EVRasterDataType __values1 = (EarthView::World::Spatial::GeoDataset::EVRasterDataType) __values1_j;
							return __values1;
						}
						else
						{
							return this->IRasterDataset::getRasterDataType();
						}
					}
					virtual void getSpatialReferenceWkt(EVString& strWKT) const
					{
						if (this->_gRef != NULL && this->m_getSpatialReferenceWkt_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong strWKT_j = (jlong) &strWKT;
							jmethodID __method = __gr->getMethod("getSpatialReferenceWkt_EVString_callback");
							__env->CallVoidMethod(__obj, __method , strWKT_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->IRasterDataset::getSpatialReferenceWkt(strWKT);
						}
					}
					virtual void setSpatialReference(const EVString& strWKT)
					{
						if (this->_gRef != NULL && this->m_setSpatialReference_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring strWKT_wch = strWKT;
							jstring strWKT_j = __env->NewString((const jchar*)strWKT_wch.getString(), strWKT_wch.size());
							jmethodID __method = __gr->getMethod("setSpatialReference_EVString_callback");
							__env->CallVoidMethod(__obj, __method , strWKT_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->IRasterDataset::setSpatialReference(strWKT);
						}
					}
					virtual ev_bool read(EarthView::World::Spatial2D::Raster::IRasterBlock* pDstRaster, ev_uint32 upRow, ev_uint32 leftCol, ev_uint32 downRow, ev_uint32 rightCol)
					{
						if (this->_gRef != NULL && this->m_read_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong pDstRaster_j = (jlong) pDstRaster;
							jlong upRow_j = (jlong) upRow;
							jlong leftCol_j = (jlong) leftCol;
							jlong downRow_j = (jlong) downRow;
							jlong rightCol_j = (jlong) rightCol;
							jmethodID __method = __gr->getMethod("read_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , pDstRaster_j, upRow_j, leftCol_j, downRow_j, rightCol_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->IRasterDataset::read(pDstRaster, upRow, leftCol, downRow, rightCol);
						}
					}
					virtual ev_bool write(const EarthView::World::Spatial2D::Raster::IRasterBlock* pSrcRaster, ev_uint32 upRow, ev_uint32 leftCol, ev_uint32 downRow, ev_uint32 rightCol)
					{
						if (this->_gRef != NULL && this->m_write_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong pSrcRaster_j = (jlong) pSrcRaster;
							jlong upRow_j = (jlong) upRow;
							jlong leftCol_j = (jlong) leftCol;
							jlong downRow_j = (jlong) downRow;
							jlong rightCol_j = (jlong) rightCol;
							jmethodID __method = __gr->getMethod("write_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , pSrcRaster_j, upRow_j, leftCol_j, downRow_j, rightCol_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->IRasterDataset::write(pSrcRaster, upRow, leftCol, downRow, rightCol);
						}
					}
					virtual void read(EVString& strWKT, ev_real64 lefttopX, ev_real64 lefttopY, ev_real64 resolutionX, ev_real64 resolutionY, ev_int32 xSize, ev_int32 ySize, ev_byte* pBuffer)
					{
						if (this->_gRef != NULL && this->m_read_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring strWKT_wch = strWKT;
							jstring strWKT_j = __env->NewString((const jchar*)strWKT_wch.getString(), strWKT_wch.size());
							jdouble lefttopX_j = (jdouble) lefttopX;
							jdouble lefttopY_j = (jdouble) lefttopY;
							jdouble resolutionX_j = (jdouble) resolutionX;
							jdouble resolutionY_j = (jdouble) resolutionY;
							jint xSize_j = (jint) xSize;
							jint ySize_j = (jint) ySize;
							jlong pBuffer_j = (jlong) pBuffer;
							jmethodID __method = __gr->getMethod("read_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_callback");
							__env->CallVoidMethod(__obj, __method , strWKT_j, lefttopX_j, lefttopY_j, resolutionX_j, resolutionY_j, xSize_j, ySize_j, pBuffer_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->IRasterDataset::read(strWKT, lefttopX, lefttopY, resolutionX, resolutionY, xSize, ySize, pBuffer);
						}
					}
					virtual ev_bool buildOverViews(ev_int32 ibandCount, ev_int32* piBandIndex, ev_int32 nLevelCount, ev_int32* piLevelIndex, EarthView::World::Spatial2D::Raster::CProgressInfo* pDataProgress)
					{
						if (this->_gRef != NULL && this->m_buildOverViews_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint ibandCount_j = (jint) ibandCount;
							jlong piBandIndex_j = (jlong) piBandIndex;
							jint nLevelCount_j = (jint) nLevelCount;
							jlong piLevelIndex_j = (jlong) piLevelIndex;
							jlong pDataProgress_j = (jlong) pDataProgress;
							jmethodID __method = __gr->getMethod("buildOverViews_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , ibandCount_j, piBandIndex_j, nLevelCount_j, piLevelIndex_j, pDataProgress_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->IRasterDataset::buildOverViews(ibandCount, piBandIndex, nLevelCount, piLevelIndex, pDataProgress);
						}
					}
					virtual ev_bool buildDefaultOverViews(EarthView::World::Spatial2D::Raster::CProgressInfo* pDataProgress)
					{
						if (this->_gRef != NULL && this->m_buildDefaultOverViews_CProgressInfo_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong pDataProgress_j = (jlong) pDataProgress;
							jmethodID __method = __gr->getMethod("buildDefaultOverViews_CProgressInfo_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , pDataProgress_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->IRasterDataset::buildDefaultOverViews(pDataProgress);
						}
					}
					virtual ev_bool rasterIO(EarthView::World::Spatial2D::Raster::EVIOFlag bflag, ev_int32 iOffsetX, ev_int32 iOffsetY, ev_int32 iImageWidth, ev_int32 iImageHeight, ev_int32 iBandCount, ev_int32* pIbandIndex, void* pDstBuffer, ev_int32 iBufferWidth, ev_int32 iBufferHeight, EarthView::World::Spatial::GeoDataset::EVRasterDataType eDataType)
					{
						if (this->_gRef != NULL && this->m_rasterIO_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint bflag_j = (jint) bflag;
							jint iOffsetX_j = (jint) iOffsetX;
							jint iOffsetY_j = (jint) iOffsetY;
							jint iImageWidth_j = (jint) iImageWidth;
							jint iImageHeight_j = (jint) iImageHeight;
							jint iBandCount_j = (jint) iBandCount;
							jlong pIbandIndex_j = (jlong) pIbandIndex;
							jlong pDstBuffer_j = (jlong) pDstBuffer;
							jint iBufferWidth_j = (jint) iBufferWidth;
							jint iBufferHeight_j = (jint) iBufferHeight;
							jint eDataType_j = (jint) eDataType;
							jmethodID __method = __gr->getMethod("rasterIO_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , bflag_j, iOffsetX_j, iOffsetY_j, iImageWidth_j, iImageHeight_j, iBandCount_j, pIbandIndex_j, pDstBuffer_j, iBufferWidth_j, iBufferHeight_j, eDataType_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->IRasterDataset::rasterIO(bflag, iOffsetX, iOffsetY, iImageWidth, iImageHeight, iBandCount, pIbandIndex, pDstBuffer, iBufferWidth, iBufferHeight, eDataType);
						}
					}
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const
					{
						if (this->_gRef != NULL && this->m_getType_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getType_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::GeoDataset::EVDatasetType __values1 = (EarthView::World::Spatial::GeoDataset::EVDatasetType) __values1_j;
							return __values1;
						}
						else
						{
							return this->IRasterDataset::getType();
						}
					}
					virtual EVString getName() const
					{
						if (this->_gRef != NULL && this->m_getName_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getName_void_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringUTFChars(__values1_j,values_ch);
							#else
							const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
							#endif
							return __values1;
						}
						else
						{
							return this->IRasterDataset::getName();
						}
					}
					virtual ev_uint64 getDataVersion() const
					{
						if (this->_gRef != NULL && this->m_getDataVersion_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getDataVersion_void_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
							EVString __values1_s = values_ch;
							__env->ReleaseStringUTFChars(__values1_j,values_ch);
							ev_uint64 __values1 = __values1_s.getUint64();
							return __values1;
						}
						else
						{
							return this->IRasterDataset::getDataVersion();
						}
					}
					virtual EVString getDescription() const
					{
						if (this->_gRef != NULL && this->m_getDescription_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getDescription_void_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringUTFChars(__values1_j,values_ch);
							#else
							const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
							#endif
							return __values1;
						}
						else
						{
							return this->IRasterDataset::getDescription();
						}
					}
					virtual EVString getUpdateTime() const
					{
						if (this->_gRef != NULL && this->m_getUpdateTime_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getUpdateTime_void_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringUTFChars(__values1_j,values_ch);
							#else
							const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
							#endif
							return __values1;
						}
						else
						{
							return this->IRasterDataset::getUpdateTime();
						}
					}
					virtual ev_bool hasSubDataset() const
					{
						if (this->_gRef != NULL && this->m_hasSubDataset_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("hasSubDataset_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->IRasterDataset::hasSubDataset();
						}
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const
					{
						if (this->_gRef != NULL && this->m_getDataSourceRef_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getDataSourceRef_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::GeoDataset::IDataSource *__values1 = (EarthView::World::Spatial::GeoDataset::IDataSource*) __values1_j;
							return __values1;
						}
						else
						{
							return this->IRasterDataset::getDataSourceRef();
						}
					}
					virtual ev_bool canEdit() const
					{
						if (this->_gRef != NULL && this->m_canEdit_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("canEdit_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->IRasterDataset::canEdit();
						}
					}
					virtual ev_bool isEditing() const
					{
						if (this->_gRef != NULL && this->m_isEditing_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("isEditing_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->IRasterDataset::isEditing();
						}
					}
					virtual ev_bool startEditing(ev_bool withUndo)
					{
						if (this->_gRef != NULL && this->m_startEditing_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean withUndo_j = (jboolean) withUndo;
							jmethodID __method = __gr->getMethod("startEditing_ev_bool_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , withUndo_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->IRasterDataset::startEditing(withUndo);
						}
					}
					virtual ev_bool stopEditing(ev_bool isSave)
					{
						if (this->_gRef != NULL && this->m_stopEditing_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean isSave_j = (jboolean) isSave;
							jmethodID __method = __gr->getMethod("stopEditing_ev_bool_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , isSave_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->IRasterDataset::stopEditing(isSave);
						}
					}
					virtual ev_bool isBeginEditingOperation()
					{
						if (this->_gRef != NULL && this->m_isBeginEditingOperation_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("isBeginEditingOperation_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->IRasterDataset::isBeginEditingOperation();
						}
					}
					virtual ev_bool beginEditingOperation()
					{
						if (this->_gRef != NULL && this->m_beginEditingOperation_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("beginEditingOperation_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->IRasterDataset::beginEditingOperation();
						}
					}
					virtual ev_bool endEditingOperation(ev_bool isConfirm)
					{
						if (this->_gRef != NULL && this->m_endEditingOperation_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean isConfirm_j = (jboolean) isConfirm;
							jmethodID __method = __gr->getMethod("endEditingOperation_ev_bool_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , isConfirm_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->IRasterDataset::endEditingOperation(isConfirm);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JIRasterDatasetProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_getRasterRect_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dfUpleftX_j, jlong dfUpleftY_j, jlong dfDownRightX_j, jlong dfDownRightY_j)
				{
					ev_real64 &dfUpleftX = *(ev_real64*) dfUpleftX_j;
					ev_real64 &dfUpleftY = *(ev_real64*) dfUpleftY_j;
					ev_real64 &dfDownRightX = *(ev_real64*) dfDownRightX_j;
					ev_real64 &dfDownRightY = *(ev_real64*) dfDownRightY_j;
					const 					EarthView::World::Spatial::GeoDataset::IRasterDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIRasterDatasetProxy))
					{
						pObjectX->EarthView::World::Spatial::GeoDataset::IRasterDataset::getRasterRect(dfUpleftX, dfUpleftY, dfDownRightX, dfDownRightY);
					}
					else
					{
						pObjectX->getRasterRect(dfUpleftX, dfUpleftY, dfDownRightX, dfDownRightY);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_register_1getRasterRect_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRasterDatasetProxy *pObjectX = (JIRasterDatasetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getRasterRect_ev_real64_ev_real64_ev_real64_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getRasterRect_ev_real64_ev_real64_ev_real64_ev_real64_callback", "(JJJJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_getRasterRect_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dfUpleftX_j, jlong dfUpleftY_j, jlong dfDownRightX_j, jlong dfDownRightY_j)
				{
					ev_real64 &dfUpleftX = *(ev_real64*) dfUpleftX_j;
					ev_real64 &dfUpleftY = *(ev_real64*) dfUpleftY_j;
					ev_real64 &dfDownRightX = *(ev_real64*) dfDownRightX_j;
					ev_real64 &dfDownRightY = *(ev_real64*) dfDownRightY_j;
					const 					EarthView::World::Spatial::GeoDataset::IRasterDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::GeoDataset::IRasterDataset::getRasterRect(dfUpleftX, dfUpleftY, dfDownRightX, dfDownRightY);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_getRasterWidth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::IRasterDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIRasterDatasetProxy))
					{
						const ev_int32 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IRasterDataset::getRasterWidth();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						const ev_int32 __values1 = pObjectX->getRasterWidth();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_register_1getRasterWidth_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRasterDatasetProxy *pObjectX = (JIRasterDatasetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getRasterWidth_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getRasterWidth_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_getRasterWidth_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::IRasterDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjXXXX;
					const ev_int32 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IRasterDataset::getRasterWidth();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_getRasterHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::IRasterDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIRasterDatasetProxy))
					{
						const ev_int32 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IRasterDataset::getRasterHeight();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						const ev_int32 __values1 = pObjectX->getRasterHeight();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_register_1getRasterHeight_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRasterDatasetProxy *pObjectX = (JIRasterDatasetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getRasterHeight_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getRasterHeight_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_getRasterHeight_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::IRasterDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjXXXX;
					const ev_int32 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IRasterDataset::getRasterHeight();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_getBandCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::IRasterDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIRasterDatasetProxy))
					{
						const ev_int32 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IRasterDataset::getBandCount();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						const ev_int32 __values1 = pObjectX->getBandCount();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_register_1getBandCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRasterDatasetProxy *pObjectX = (JIRasterDatasetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getBandCount_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getBandCount_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_getBandCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::IRasterDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjXXXX;
					const ev_int32 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IRasterDataset::getBandCount();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_getGeoTransform_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::IRasterDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIRasterDatasetProxy))
					{
						const EarthView::World::Spatial2D::Raster::CAffineTransform* __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IRasterDataset::getGeoTransform();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						const EarthView::World::Spatial2D::Raster::CAffineTransform* __values1 = pObjectX->getGeoTransform();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_register_1getGeoTransform_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRasterDatasetProxy *pObjectX = (JIRasterDatasetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getGeoTransform_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getGeoTransform_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_getGeoTransform_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::IRasterDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjXXXX;
					const EarthView::World::Spatial2D::Raster::CAffineTransform* __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IRasterDataset::getGeoTransform();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_getRasterDataType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::IRasterDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIRasterDatasetProxy))
					{
						EarthView::World::Spatial::GeoDataset::EVRasterDataType __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IRasterDataset::getRasterDataType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVRasterDataType __values1 = pObjectX->getRasterDataType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_register_1getRasterDataType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRasterDatasetProxy *pObjectX = (JIRasterDatasetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getRasterDataType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getRasterDataType_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_getRasterDataType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::IRasterDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::EVRasterDataType __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IRasterDataset::getRasterDataType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_getSpatialReferenceWkt_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong strWKT_j)
				{
					EVString &strWKT = *(EVString*) strWKT_j;
					const 					EarthView::World::Spatial::GeoDataset::IRasterDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIRasterDatasetProxy))
					{
						pObjectX->EarthView::World::Spatial::GeoDataset::IRasterDataset::getSpatialReferenceWkt(strWKT);
					}
					else
					{
						pObjectX->getSpatialReferenceWkt(strWKT);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_register_1getSpatialReferenceWkt_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRasterDatasetProxy *pObjectX = (JIRasterDatasetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSpatialReferenceWkt_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSpatialReferenceWkt_EVString_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_getSpatialReferenceWkt_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong strWKT_j)
				{
					EVString &strWKT = *(EVString*) strWKT_j;
					const 					EarthView::World::Spatial::GeoDataset::IRasterDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::GeoDataset::IRasterDataset::getSpatialReferenceWkt(strWKT);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_setSpatialReference_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strWKT_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strWKT_ch = (const ev_char*)__env->GetStringUTFChars(strWKT_j,JNI_FALSE);
					const EVString strWKT = strWKT_ch;
					__env->ReleaseStringUTFChars(strWKT_j, (const char *)strWKT_ch);
					#else
					const ev_wchar* strWKT_ch = (const ev_wchar*)__env->GetStringChars(strWKT_j,JNI_FALSE);
					const EVString strWKT = strWKT_ch;
					__env->ReleaseStringChars(strWKT_j, (const jchar *)strWKT_ch);
					#endif
					EarthView::World::Spatial::GeoDataset::IRasterDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIRasterDatasetProxy))
					{
						pObjectX->EarthView::World::Spatial::GeoDataset::IRasterDataset::setSpatialReference(strWKT);
					}
					else
					{
						pObjectX->setSpatialReference(strWKT);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_register_1setSpatialReference_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRasterDatasetProxy *pObjectX = (JIRasterDatasetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setSpatialReference_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setSpatialReference_EVString_callback", "(Ljava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_setSpatialReference_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strWKT_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strWKT_ch = (const ev_char*)__env->GetStringUTFChars(strWKT_j,JNI_FALSE);
					const EVString strWKT = strWKT_ch;
					__env->ReleaseStringUTFChars(strWKT_j, (const char *)strWKT_ch);
					#else
					const ev_wchar* strWKT_ch = (const ev_wchar*)__env->GetStringChars(strWKT_j,JNI_FALSE);
					const EVString strWKT = strWKT_ch;
					__env->ReleaseStringChars(strWKT_j, (const jchar *)strWKT_ch);
					#endif
					EarthView::World::Spatial::GeoDataset::IRasterDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::GeoDataset::IRasterDataset::setSpatialReference(strWKT);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_read_1IRasterBlock_1ev_1uint32_1ev_1uint32_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDstRaster_j, jlong upRow_j, jlong leftCol_j, jlong downRow_j, jlong rightCol_j)
				{
					EarthView::World::Spatial2D::Raster::IRasterBlock *pDstRaster = (EarthView::World::Spatial2D::Raster::IRasterBlock*) pDstRaster_j;
					ev_uint32 upRow = (ev_uint32) upRow_j;
					ev_uint32 leftCol = (ev_uint32) leftCol_j;
					ev_uint32 downRow = (ev_uint32) downRow_j;
					ev_uint32 rightCol = (ev_uint32) rightCol_j;
					EarthView::World::Spatial::GeoDataset::IRasterDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIRasterDatasetProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IRasterDataset::read(pDstRaster, upRow, leftCol, downRow, rightCol);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->read(pDstRaster, upRow, leftCol, downRow, rightCol);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_register_1read_1IRasterBlock_1ev_1uint32_1ev_1uint32_1ev_1uint32_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRasterDatasetProxy *pObjectX = (JIRasterDatasetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_read_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"read_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_callback", "(JJJJJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_read_1IRasterBlock_1ev_1uint32_1ev_1uint32_1ev_1uint32_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDstRaster_j, jlong upRow_j, jlong leftCol_j, jlong downRow_j, jlong rightCol_j)
				{
					EarthView::World::Spatial2D::Raster::IRasterBlock *pDstRaster = (EarthView::World::Spatial2D::Raster::IRasterBlock*) pDstRaster_j;
					ev_uint32 upRow = (ev_uint32) upRow_j;
					ev_uint32 leftCol = (ev_uint32) leftCol_j;
					ev_uint32 downRow = (ev_uint32) downRow_j;
					ev_uint32 rightCol = (ev_uint32) rightCol_j;
					EarthView::World::Spatial::GeoDataset::IRasterDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IRasterDataset::read(pDstRaster, upRow, leftCol, downRow, rightCol);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_write_1IRasterBlock_1ev_1uint32_1ev_1uint32_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSrcRaster_j, jlong upRow_j, jlong leftCol_j, jlong downRow_j, jlong rightCol_j)
				{
					const EarthView::World::Spatial2D::Raster::IRasterBlock *pSrcRaster = (const EarthView::World::Spatial2D::Raster::IRasterBlock*) pSrcRaster_j;
					ev_uint32 upRow = (ev_uint32) upRow_j;
					ev_uint32 leftCol = (ev_uint32) leftCol_j;
					ev_uint32 downRow = (ev_uint32) downRow_j;
					ev_uint32 rightCol = (ev_uint32) rightCol_j;
					EarthView::World::Spatial::GeoDataset::IRasterDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIRasterDatasetProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IRasterDataset::write(pSrcRaster, upRow, leftCol, downRow, rightCol);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->write(pSrcRaster, upRow, leftCol, downRow, rightCol);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_register_1write_1IRasterBlock_1ev_1uint32_1ev_1uint32_1ev_1uint32_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRasterDatasetProxy *pObjectX = (JIRasterDatasetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_write_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"write_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_callback", "(JJJJJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_write_1IRasterBlock_1ev_1uint32_1ev_1uint32_1ev_1uint32_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSrcRaster_j, jlong upRow_j, jlong leftCol_j, jlong downRow_j, jlong rightCol_j)
				{
					const EarthView::World::Spatial2D::Raster::IRasterBlock *pSrcRaster = (const EarthView::World::Spatial2D::Raster::IRasterBlock*) pSrcRaster_j;
					ev_uint32 upRow = (ev_uint32) upRow_j;
					ev_uint32 leftCol = (ev_uint32) leftCol_j;
					ev_uint32 downRow = (ev_uint32) downRow_j;
					ev_uint32 rightCol = (ev_uint32) rightCol_j;
					EarthView::World::Spatial::GeoDataset::IRasterDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IRasterDataset::write(pSrcRaster, upRow, leftCol, downRow, rightCol);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_read_1EVString_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1int32_1ev_1int32_1ev_1byte(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strWKT_j, jdouble lefttopX_j, jdouble lefttopY_j, jdouble resolutionX_j, jdouble resolutionY_j, jint xSize_j, jint ySize_j, jlong pBuffer_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strWKT_ch = (const ev_char*)__env->GetStringUTFChars(strWKT_j,JNI_FALSE);
					EVString strWKT = strWKT_ch;
					__env->ReleaseStringUTFChars(strWKT_j, (const char *)strWKT_ch);
					#else
					const ev_wchar* strWKT_ch = (const ev_wchar*)__env->GetStringChars(strWKT_j,JNI_FALSE);
					EVString strWKT = strWKT_ch;
					__env->ReleaseStringChars(strWKT_j, (const jchar *)strWKT_ch);
					#endif
					ev_real64 lefttopX = (ev_real64) lefttopX_j;
					ev_real64 lefttopY = (ev_real64) lefttopY_j;
					ev_real64 resolutionX = (ev_real64) resolutionX_j;
					ev_real64 resolutionY = (ev_real64) resolutionY_j;
					ev_int32 xSize = (ev_int32) xSize_j;
					ev_int32 ySize = (ev_int32) ySize_j;
					ev_byte *pBuffer = (ev_byte*) pBuffer_j;
					EarthView::World::Spatial::GeoDataset::IRasterDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIRasterDatasetProxy))
					{
						pObjectX->EarthView::World::Spatial::GeoDataset::IRasterDataset::read(strWKT, lefttopX, lefttopY, resolutionX, resolutionY, xSize, ySize, pBuffer);
					}
					else
					{
						pObjectX->read(strWKT, lefttopX, lefttopY, resolutionX, resolutionY, xSize, ySize, pBuffer);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_register_1read_1EVString_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1int32_1ev_1int32_1ev_1byte(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRasterDatasetProxy *pObjectX = (JIRasterDatasetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_read_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"read_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_callback", "(Ljava/lang/String;DDDDIIJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_read_1EVString_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1int32_1ev_1int32_1ev_1byte_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strWKT_j, jdouble lefttopX_j, jdouble lefttopY_j, jdouble resolutionX_j, jdouble resolutionY_j, jint xSize_j, jint ySize_j, jlong pBuffer_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strWKT_ch = (const ev_char*)__env->GetStringUTFChars(strWKT_j,JNI_FALSE);
					EVString strWKT = strWKT_ch;
					__env->ReleaseStringUTFChars(strWKT_j, (const char *)strWKT_ch);
					#else
					const ev_wchar* strWKT_ch = (const ev_wchar*)__env->GetStringChars(strWKT_j,JNI_FALSE);
					EVString strWKT = strWKT_ch;
					__env->ReleaseStringChars(strWKT_j, (const jchar *)strWKT_ch);
					#endif
					ev_real64 lefttopX = (ev_real64) lefttopX_j;
					ev_real64 lefttopY = (ev_real64) lefttopY_j;
					ev_real64 resolutionX = (ev_real64) resolutionX_j;
					ev_real64 resolutionY = (ev_real64) resolutionY_j;
					ev_int32 xSize = (ev_int32) xSize_j;
					ev_int32 ySize = (ev_int32) ySize_j;
					ev_byte *pBuffer = (ev_byte*) pBuffer_j;
					EarthView::World::Spatial::GeoDataset::IRasterDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::GeoDataset::IRasterDataset::read(strWKT, lefttopX, lefttopY, resolutionX, resolutionY, xSize, ySize, pBuffer);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_buildOverViews_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1CProgressInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint ibandCount_j, jlong piBandIndex_j, jint nLevelCount_j, jlong piLevelIndex_j, jlong pDataProgress_j)
				{
					ev_int32 ibandCount = (ev_int32) ibandCount_j;
					ev_int32 *piBandIndex = (ev_int32*) piBandIndex_j;
					ev_int32 nLevelCount = (ev_int32) nLevelCount_j;
					ev_int32 *piLevelIndex = (ev_int32*) piLevelIndex_j;
					EarthView::World::Spatial2D::Raster::CProgressInfo *pDataProgress = (EarthView::World::Spatial2D::Raster::CProgressInfo*) pDataProgress_j;
					EarthView::World::Spatial::GeoDataset::IRasterDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIRasterDatasetProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IRasterDataset::buildOverViews(ibandCount, piBandIndex, nLevelCount, piLevelIndex, pDataProgress);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->buildOverViews(ibandCount, piBandIndex, nLevelCount, piLevelIndex, pDataProgress);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_register_1buildOverViews_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1CProgressInfo(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRasterDatasetProxy *pObjectX = (JIRasterDatasetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_buildOverViews_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"buildOverViews_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_callback", "(IJIJJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_buildOverViews_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1CProgressInfo_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint ibandCount_j, jlong piBandIndex_j, jint nLevelCount_j, jlong piLevelIndex_j, jlong pDataProgress_j)
				{
					ev_int32 ibandCount = (ev_int32) ibandCount_j;
					ev_int32 *piBandIndex = (ev_int32*) piBandIndex_j;
					ev_int32 nLevelCount = (ev_int32) nLevelCount_j;
					ev_int32 *piLevelIndex = (ev_int32*) piLevelIndex_j;
					EarthView::World::Spatial2D::Raster::CProgressInfo *pDataProgress = (EarthView::World::Spatial2D::Raster::CProgressInfo*) pDataProgress_j;
					EarthView::World::Spatial::GeoDataset::IRasterDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IRasterDataset::buildOverViews(ibandCount, piBandIndex, nLevelCount, piLevelIndex, pDataProgress);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_buildDefaultOverViews_1CProgressInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDataProgress_j)
				{
					EarthView::World::Spatial2D::Raster::CProgressInfo *pDataProgress = (EarthView::World::Spatial2D::Raster::CProgressInfo*) pDataProgress_j;
					EarthView::World::Spatial::GeoDataset::IRasterDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIRasterDatasetProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IRasterDataset::buildDefaultOverViews(pDataProgress);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->buildDefaultOverViews(pDataProgress);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_register_1buildDefaultOverViews_1CProgressInfo(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRasterDatasetProxy *pObjectX = (JIRasterDatasetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_buildDefaultOverViews_CProgressInfo_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"buildDefaultOverViews_CProgressInfo_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_buildDefaultOverViews_1CProgressInfo_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDataProgress_j)
				{
					EarthView::World::Spatial2D::Raster::CProgressInfo *pDataProgress = (EarthView::World::Spatial2D::Raster::CProgressInfo*) pDataProgress_j;
					EarthView::World::Spatial::GeoDataset::IRasterDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IRasterDataset::buildDefaultOverViews(pDataProgress);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_rasterIO_1EVIOFlag_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1void_1ev_1int32_1ev_1int32_1EVRasterDataType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint bflag_j, jint iOffsetX_j, jint iOffsetY_j, jint iImageWidth_j, jint iImageHeight_j, jint iBandCount_j, jlong pIbandIndex_j, jlong pDstBuffer_j, jint iBufferWidth_j, jint iBufferHeight_j, jint eDataType_j)
				{
					EarthView::World::Spatial2D::Raster::EVIOFlag bflag = (EarthView::World::Spatial2D::Raster::EVIOFlag) bflag_j;
					ev_int32 iOffsetX = (ev_int32) iOffsetX_j;
					ev_int32 iOffsetY = (ev_int32) iOffsetY_j;
					ev_int32 iImageWidth = (ev_int32) iImageWidth_j;
					ev_int32 iImageHeight = (ev_int32) iImageHeight_j;
					ev_int32 iBandCount = (ev_int32) iBandCount_j;
					ev_int32 *pIbandIndex = (ev_int32*) pIbandIndex_j;
					void *pDstBuffer = (void*) pDstBuffer_j;
					ev_int32 iBufferWidth = (ev_int32) iBufferWidth_j;
					ev_int32 iBufferHeight = (ev_int32) iBufferHeight_j;
					EarthView::World::Spatial::GeoDataset::EVRasterDataType eDataType = (EarthView::World::Spatial::GeoDataset::EVRasterDataType) eDataType_j;
					EarthView::World::Spatial::GeoDataset::IRasterDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIRasterDatasetProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IRasterDataset::rasterIO(bflag, iOffsetX, iOffsetY, iImageWidth, iImageHeight, iBandCount, pIbandIndex, pDstBuffer, iBufferWidth, iBufferHeight, eDataType);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->rasterIO(bflag, iOffsetX, iOffsetY, iImageWidth, iImageHeight, iBandCount, pIbandIndex, pDstBuffer, iBufferWidth, iBufferHeight, eDataType);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_register_1rasterIO_1EVIOFlag_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1void_1ev_1int32_1ev_1int32_1EVRasterDataType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRasterDatasetProxy *pObjectX = (JIRasterDatasetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_rasterIO_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"rasterIO_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_callback", "(IIIIIIJJIII)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_rasterIO_1EVIOFlag_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1void_1ev_1int32_1ev_1int32_1EVRasterDataType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint bflag_j, jint iOffsetX_j, jint iOffsetY_j, jint iImageWidth_j, jint iImageHeight_j, jint iBandCount_j, jlong pIbandIndex_j, jlong pDstBuffer_j, jint iBufferWidth_j, jint iBufferHeight_j, jint eDataType_j)
				{
					EarthView::World::Spatial2D::Raster::EVIOFlag bflag = (EarthView::World::Spatial2D::Raster::EVIOFlag) bflag_j;
					ev_int32 iOffsetX = (ev_int32) iOffsetX_j;
					ev_int32 iOffsetY = (ev_int32) iOffsetY_j;
					ev_int32 iImageWidth = (ev_int32) iImageWidth_j;
					ev_int32 iImageHeight = (ev_int32) iImageHeight_j;
					ev_int32 iBandCount = (ev_int32) iBandCount_j;
					ev_int32 *pIbandIndex = (ev_int32*) pIbandIndex_j;
					void *pDstBuffer = (void*) pDstBuffer_j;
					ev_int32 iBufferWidth = (ev_int32) iBufferWidth_j;
					ev_int32 iBufferHeight = (ev_int32) iBufferHeight_j;
					EarthView::World::Spatial::GeoDataset::EVRasterDataType eDataType = (EarthView::World::Spatial::GeoDataset::EVRasterDataType) eDataType_j;
					EarthView::World::Spatial::GeoDataset::IRasterDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IRasterDataset::rasterIO(bflag, iOffsetX, iOffsetY, iImageWidth, iImageHeight, iBandCount, pIbandIndex, pDstBuffer, iBufferWidth, iBufferHeight, eDataType);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRasterDatasetProxy *pObjectX = (JIRasterDatasetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getType_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRasterDatasetProxy *pObjectX = (JIRasterDatasetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getName_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getName_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_register_1getDataVersion_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRasterDatasetProxy *pObjectX = (JIRasterDatasetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDataVersion_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDataVersion_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_register_1getDescription_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRasterDatasetProxy *pObjectX = (JIRasterDatasetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDescription_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDescription_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_register_1getUpdateTime_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRasterDatasetProxy *pObjectX = (JIRasterDatasetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getUpdateTime_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getUpdateTime_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_register_1hasSubDataset_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRasterDatasetProxy *pObjectX = (JIRasterDatasetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_hasSubDataset_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"hasSubDataset_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_register_1getDataSourceRef_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRasterDatasetProxy *pObjectX = (JIRasterDatasetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDataSourceRef_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDataSourceRef_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_register_1canEdit_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRasterDatasetProxy *pObjectX = (JIRasterDatasetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_canEdit_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"canEdit_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_register_1isEditing_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRasterDatasetProxy *pObjectX = (JIRasterDatasetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isEditing_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isEditing_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_register_1startEditing_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRasterDatasetProxy *pObjectX = (JIRasterDatasetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_startEditing_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"startEditing_ev_bool_callback", "(Z)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_register_1stopEditing_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRasterDatasetProxy *pObjectX = (JIRasterDatasetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_stopEditing_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"stopEditing_ev_bool_callback", "(Z)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_register_1isBeginEditingOperation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRasterDatasetProxy *pObjectX = (JIRasterDatasetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isBeginEditingOperation_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isBeginEditingOperation_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_register_1beginEditingOperation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRasterDatasetProxy *pObjectX = (JIRasterDatasetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_beginEditingOperation_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"beginEditingOperation_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Irasterdataset_register_1endEditingOperation_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRasterDatasetProxy *pObjectX = (JIRasterDatasetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_endEditingOperation_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"endEditingOperation_ev_bool_callback", "(Z)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
			}
		}
	}
}
