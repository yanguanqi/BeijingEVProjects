/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2ddataexchange/dataexchange.h"
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_convertor_DataExchangeParam_isDiscardEmptyGeometryRecord_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Convertor::CDataExchangeParam *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjXXXX;
					ev_bool __values1 = pObjectX->isDiscardEmptyGeometryRecord();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_convertor_DataExchangeParam_isDiscardInsignificanceGeometryRecord_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Convertor::CDataExchangeParam *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjXXXX;
					ev_bool __values1 = pObjectX->isDiscardInsignificanceGeometryRecord();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_DataExchangeParam_setDiscardEmptyGeometryRecord_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial::Convertor::CDataExchangeParam *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjXXXX;
					pObjectX->setDiscardEmptyGeometryRecord(value);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_DataExchangeParam_setDiscardInsignificanceGeometryRecord_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial::Convertor::CDataExchangeParam *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjXXXX;
					pObjectX->setDiscardInsignificanceGeometryRecord(value);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_DataExchangeParam_setProject7Param_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dx_j, jdouble dy_j, jdouble dz_j, jdouble rx_j, jdouble ry_j, jdouble rz_j, jdouble ppm_j)
				{
					ev_real64 dx = (ev_real64) dx_j;
					ev_real64 dy = (ev_real64) dy_j;
					ev_real64 dz = (ev_real64) dz_j;
					ev_real64 rx = (ev_real64) rx_j;
					ev_real64 ry = (ev_real64) ry_j;
					ev_real64 rz = (ev_real64) rz_j;
					ev_real64 ppm = (ev_real64) ppm_j;
					EarthView::World::Spatial::Convertor::CDataExchangeParam *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjXXXX;
					pObjectX->setProject7Param(dx, dy, dz, rx, ry, rz, ppm);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_convertor_DataExchangeParam_getProject7Param_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Convertor::CDataExchangeParam *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjXXXX;
					const ev_real64* __values1 = pObjectX->getProject7Param();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_DataExchangeParam_setDestSpatialReference_1ISpatialReference_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sr_j, jboolean translateCoordinates_j)
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference *sr = (const EarthView::World::Spatial::Geometry::ISpatialReference*) sr_j;
					ev_bool translateCoordinates = (ev_bool) translateCoordinates_j;
					EarthView::World::Spatial::Convertor::CDataExchangeParam *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjXXXX;
					pObjectX->setDestSpatialReference(sr, translateCoordinates);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_convertor_DataExchangeParam_isTranslateCoordiantes_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Convertor::CDataExchangeParam *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjXXXX;
					ev_bool __values1 = pObjectX->isTranslateCoordiantes();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_DataExchangeParam_resetProject7Param_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Convertor::CDataExchangeParam *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjXXXX;
					pObjectX->resetProject7Param();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_convertor_DataExchangeParam_getDestSpatialReference_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Convertor::CDataExchangeParam *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjXXXX;
					const EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->getDestSpatialReference();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_DataExchangeParam_setDestDimension_1EVDatasetDimension(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint dimesion_j)
				{
					EarthView::World::Spatial::Convertor::EVDatasetDimension dimesion = (EarthView::World::Spatial::Convertor::EVDatasetDimension) dimesion_j;
					EarthView::World::Spatial::Convertor::CDataExchangeParam *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjXXXX;
					pObjectX->setDestDimension(dimesion);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_convertor_DataExchangeParam_getDestDimension_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Convertor::CDataExchangeParam *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjXXXX;
					EarthView::World::Spatial::Convertor::EVDatasetDimension __values1 = pObjectX->getDestDimension();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_DataExchangeParam_setSelectFeatureSQL_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring sql_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* sql_ch = (const ev_char*)__env->GetStringUTFChars(sql_j,JNI_FALSE);
					const EVString sql = sql_ch;
					__env->ReleaseStringUTFChars(sql_j, (const char *)sql_ch);
					#else
					const ev_wchar* sql_ch = (const ev_wchar*)__env->GetStringChars(sql_j,JNI_FALSE);
					const EVString sql = sql_ch;
					__env->ReleaseStringChars(sql_j, (const jchar *)sql_ch);
					#endif
					EarthView::World::Spatial::Convertor::CDataExchangeParam *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjXXXX;
					pObjectX->setSelectFeatureSQL(sql);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_convertor_DataExchangeParam_getSelectFeatureSQL_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Convertor::CDataExchangeParam *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjXXXX;
					const EVString __values1 = pObjectX->getSelectFeatureSQL();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_convertor_DataExchangeParam_isSelectFeatureBySQL_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Convertor::CDataExchangeParam *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjXXXX;
					ev_bool __values1 = pObjectX->isSelectFeatureBySQL();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_convertor_DataExchangeParam_isSelectFeatureByIDs_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Convertor::CDataExchangeParam *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjXXXX;
					ev_bool __values1 = pObjectX->isSelectFeatureByIDs();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_DataExchangeParam_setSelectedFeatures_1ev_1int32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong featureIDs_j, jlong count_j)
				{
					ev_int32 *featureIDs = (ev_int32*) featureIDs_j;
					ev_uint32 count = (ev_uint32) count_j;
					EarthView::World::Spatial::Convertor::CDataExchangeParam *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjXXXX;
					pObjectX->setSelectedFeatures(featureIDs, count);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_convertor_DataExchangeParam_getSelectedFeatureCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Convertor::CDataExchangeParam *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getSelectedFeatureCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_convertor_DataExchangeParam_getSelectedFeatureID_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::Convertor::CDataExchangeParam *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getSelectedFeatureID(index);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_DataExchangeParam_resetConvertFeatures_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Convertor::CDataExchangeParam *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjXXXX;
					pObjectX->resetConvertFeatures();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_convertor_DataExchangeParam_isConvertAllFeatures_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Convertor::CDataExchangeParam *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjXXXX;
					ev_bool __values1 = pObjectX->isConvertAllFeatures();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_DataExchangeParam_setSelectedFields_1StringVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fieldnamelist_j)
				{
					EarthView::World::Core::StringVector &fieldnamelist = *(EarthView::World::Core::StringVector*) fieldnamelist_j;
					EarthView::World::Spatial::Convertor::CDataExchangeParam *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjXXXX;
					pObjectX->setSelectedFields(fieldnamelist);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_convertor_DataExchangeParam_getSelectedFieldCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Convertor::CDataExchangeParam *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getSelectedFieldCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_convertor_DataExchangeParam_getSelectedFieldName_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::Convertor::CDataExchangeParam *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjXXXX;
					EVString __values1 = pObjectX->getSelectedFieldName(index);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_DataExchangeParam_resetConvertFields_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Convertor::CDataExchangeParam *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjXXXX;
					pObjectX->resetConvertFields();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_convertor_DataExchangeParam_isConvertAllFields_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Convertor::CDataExchangeParam *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjXXXX;
					ev_bool __values1 = pObjectX->isConvertAllFields();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				class JCDataExchangeProxy : public EarthView::World::Spatial::Convertor::CDataExchange
				{
				 private:
					EarthView::World::Core::ev_string m_setSrcDataDriver_CDataDriver_callback;
					EarthView::World::Core::ev_string m_setDestDataDriver_CDataDriver_callback;
					EarthView::World::Core::ev_string m_getType_void_callback;
					EarthView::World::Core::ev_string m_exchange_void_callback;
					EarthView::World::Core::ev_string m_setListener_IDataExchangeListener_callback;
					EarthView::World::Core::ev_string m_getListener_void_callback;
				public:
					JCDataExchangeProxy(EarthView::World::Core::CNameValuePairList *pList) : CDataExchange(pList)
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
					void register_setSrcDataDriver_CDataDriver_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSrcDataDriver_CDataDriver_callback = __method;
					}
					void register_setDestDataDriver_CDataDriver_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setDestDataDriver_CDataDriver_callback = __method;
					}
					void register_getType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getType_void_callback = __method;
					}
					void register_exchange_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_exchange_void_callback = __method;
					}
					void register_setListener_IDataExchangeListener_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setListener_IDataExchangeListener_callback = __method;
					}
					void register_getListener_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getListener_void_callback = __method;
					}
					virtual ev_int32 exchange()
					{
						if (this->_gRef != NULL && this->m_exchange_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("exchange_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_int32 __values1 = (ev_int32) __values1_j;
							return __values1;
						}
						else
						{
							return this->CDataExchange::exchange();
						}
					}
					virtual void setSrcDataDriver(const EarthView::World::Spatial::Convertor::CDataDriver* ref_driver)
					{
						if (this->_gRef != NULL && this->m_setSrcDataDriver_CDataDriver_callback != "" && this->isCustomExtend())
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
							jlong ref_driver_j = (jlong) ref_driver;
							jmethodID __method = __gr->getMethod("setSrcDataDriver_CDataDriver_callback");
							__env->CallVoidMethod(__obj, __method , ref_driver_j);
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
							return this->CDataExchange::setSrcDataDriver(ref_driver);
						}
					}
					virtual void setDestDataDriver(const EarthView::World::Spatial::Convertor::CDataDriver* ref_driver)
					{
						if (this->_gRef != NULL && this->m_setDestDataDriver_CDataDriver_callback != "" && this->isCustomExtend())
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
							jlong ref_driver_j = (jlong) ref_driver;
							jmethodID __method = __gr->getMethod("setDestDataDriver_CDataDriver_callback");
							__env->CallVoidMethod(__obj, __method , ref_driver_j);
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
							return this->CDataExchange::setDestDataDriver(ref_driver);
						}
					}
					virtual EarthView::World::Spatial::Convertor::EVDataExchangeType getType() const
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
							EarthView::World::Spatial::Convertor::EVDataExchangeType __values1 = (EarthView::World::Spatial::Convertor::EVDataExchangeType) __values1_j;
							return __values1;
						}
						else
						{
							return this->CDataExchange::getType();
						}
					}
					virtual void setListener(EarthView::World::Spatial::Convertor::IDataExchangeListener* ref_listener)
					{
						if (this->_gRef != NULL && this->m_setListener_IDataExchangeListener_callback != "" && this->isCustomExtend())
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
							jlong ref_listener_j = (jlong) ref_listener;
							jmethodID __method = __gr->getMethod("setListener_IDataExchangeListener_callback");
							__env->CallVoidMethod(__obj, __method , ref_listener_j);
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
							return this->CDataExchange::setListener(ref_listener);
						}
					}
					virtual const EarthView::World::Spatial::Convertor::IDataExchangeListener* getListener() const
					{
						if (this->_gRef != NULL && this->m_getListener_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getListener_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Spatial::Convertor::IDataExchangeListener *__values1 = (const EarthView::World::Spatial::Convertor::IDataExchangeListener*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CDataExchange::getListener();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCDataExchangeProxy);
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_convertor_DataExchange_exchange_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Convertor::CDataExchange *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchange*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataExchangeProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Convertor::CDataExchange::exchange();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->exchange();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_DataExchange_register_1exchange_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataExchangeProxy *pObjectX = (JCDataExchangeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_exchange_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"exchange_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_convertor_DataExchange_exchange_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Convertor::CDataExchange *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchange*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Convertor::CDataExchange::exchange();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_DataExchange_setSrcDataDriver_1CDataDriver(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_driver_j)
				{
					const EarthView::World::Spatial::Convertor::CDataDriver *ref_driver = (const EarthView::World::Spatial::Convertor::CDataDriver*) ref_driver_j;
					EarthView::World::Spatial::Convertor::CDataExchange *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchange*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataExchangeProxy))
					{
						pObjectX->EarthView::World::Spatial::Convertor::CDataExchange::setSrcDataDriver(ref_driver);
					}
					else
					{
						pObjectX->setSrcDataDriver(ref_driver);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_DataExchange_register_1setSrcDataDriver_1CDataDriver(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataExchangeProxy *pObjectX = (JCDataExchangeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setSrcDataDriver_CDataDriver_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setSrcDataDriver_CDataDriver_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_DataExchange_setSrcDataDriver_1CDataDriver_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_driver_j)
				{
					const EarthView::World::Spatial::Convertor::CDataDriver *ref_driver = (const EarthView::World::Spatial::Convertor::CDataDriver*) ref_driver_j;
					EarthView::World::Spatial::Convertor::CDataExchange *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchange*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Convertor::CDataExchange::setSrcDataDriver(ref_driver);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_DataExchange_setDestDataDriver_1CDataDriver(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_driver_j)
				{
					const EarthView::World::Spatial::Convertor::CDataDriver *ref_driver = (const EarthView::World::Spatial::Convertor::CDataDriver*) ref_driver_j;
					EarthView::World::Spatial::Convertor::CDataExchange *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchange*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataExchangeProxy))
					{
						pObjectX->EarthView::World::Spatial::Convertor::CDataExchange::setDestDataDriver(ref_driver);
					}
					else
					{
						pObjectX->setDestDataDriver(ref_driver);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_DataExchange_register_1setDestDataDriver_1CDataDriver(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataExchangeProxy *pObjectX = (JCDataExchangeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setDestDataDriver_CDataDriver_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setDestDataDriver_CDataDriver_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_DataExchange_setDestDataDriver_1CDataDriver_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_driver_j)
				{
					const EarthView::World::Spatial::Convertor::CDataDriver *ref_driver = (const EarthView::World::Spatial::Convertor::CDataDriver*) ref_driver_j;
					EarthView::World::Spatial::Convertor::CDataExchange *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchange*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Convertor::CDataExchange::setDestDataDriver(ref_driver);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_convertor_DataExchange_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Convertor::CDataExchange *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchange*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataExchangeProxy))
					{
						EarthView::World::Spatial::Convertor::EVDataExchangeType __values1 = pObjectX->EarthView::World::Spatial::Convertor::CDataExchange::getType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Convertor::EVDataExchangeType __values1 = pObjectX->getType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_DataExchange_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataExchangeProxy *pObjectX = (JCDataExchangeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_convertor_DataExchange_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Convertor::CDataExchange *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchange*) pObjXXXX;
					EarthView::World::Spatial::Convertor::EVDataExchangeType __values1 = pObjectX->EarthView::World::Spatial::Convertor::CDataExchange::getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_DataExchange_setListener_1IDataExchangeListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_listener_j)
				{
					EarthView::World::Spatial::Convertor::IDataExchangeListener *ref_listener = (EarthView::World::Spatial::Convertor::IDataExchangeListener*) ref_listener_j;
					EarthView::World::Spatial::Convertor::CDataExchange *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchange*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataExchangeProxy))
					{
						pObjectX->EarthView::World::Spatial::Convertor::CDataExchange::setListener(ref_listener);
					}
					else
					{
						pObjectX->setListener(ref_listener);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_DataExchange_register_1setListener_1IDataExchangeListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataExchangeProxy *pObjectX = (JCDataExchangeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setListener_IDataExchangeListener_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setListener_IDataExchangeListener_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_DataExchange_setListener_1IDataExchangeListener_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_listener_j)
				{
					EarthView::World::Spatial::Convertor::IDataExchangeListener *ref_listener = (EarthView::World::Spatial::Convertor::IDataExchangeListener*) ref_listener_j;
					EarthView::World::Spatial::Convertor::CDataExchange *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchange*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Convertor::CDataExchange::setListener(ref_listener);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_convertor_DataExchange_getListener_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Convertor::CDataExchange *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchange*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataExchangeProxy))
					{
						const EarthView::World::Spatial::Convertor::IDataExchangeListener* __values1 = pObjectX->EarthView::World::Spatial::Convertor::CDataExchange::getListener();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						const EarthView::World::Spatial::Convertor::IDataExchangeListener* __values1 = pObjectX->getListener();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_DataExchange_register_1getListener_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataExchangeProxy *pObjectX = (JCDataExchangeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getListener_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getListener_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_convertor_DataExchange_getListener_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Convertor::CDataExchange *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchange*) pObjXXXX;
					const EarthView::World::Spatial::Convertor::IDataExchangeListener* __values1 = pObjectX->EarthView::World::Spatial::Convertor::CDataExchange::getListener();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
		}
	}
}
