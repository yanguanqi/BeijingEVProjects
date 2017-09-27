/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dgeodatabase/spatialindexparam.h"
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
			namespace GeoDataset
			{
				class JCRTreeSpatialIndexParamProxy : public EarthView::World::Spatial2D::GeoDataset::CRTreeSpatialIndexParam
				{
				 private:
					EarthView::World::Core::ev_string m_getSpatialIndexType_void_callback;
					EarthView::World::Core::ev_string m_toStream_CDataStream_callback;
					EarthView::World::Core::ev_string m_fromStream_CDataStream_callback;
				public:
					JCRTreeSpatialIndexParamProxy(EarthView::World::Core::CNameValuePairList *pList) : CRTreeSpatialIndexParam(pList)
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
					void register_getSpatialIndexType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSpatialIndexType_void_callback = __method;
					}
					void register_toStream_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toStream_CDataStream_callback = __method;
					}
					void register_fromStream_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_fromStream_CDataStream_callback = __method;
					}
					virtual void toStream(EarthView::World::Core::CDataStream& stream) const
					{
						if (this->_gRef != NULL && this->m_toStream_CDataStream_callback != "" && this->isCustomExtend())
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
							jlong stream_j = (jlong) &stream;
							jmethodID __method = __gr->getMethod("toStream_CDataStream_callback");
							__env->CallVoidMethod(__obj, __method , stream_j);
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
							return this->CRTreeSpatialIndexParam::toStream(stream);
						}
					}
					virtual void fromStream(EarthView::World::Core::CDataStream& stream)
					{
						if (this->_gRef != NULL && this->m_fromStream_CDataStream_callback != "" && this->isCustomExtend())
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
							jlong stream_j = (jlong) &stream;
							jmethodID __method = __gr->getMethod("fromStream_CDataStream_callback");
							__env->CallVoidMethod(__obj, __method , stream_j);
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
							return this->CRTreeSpatialIndexParam::fromStream(stream);
						}
					}
					virtual EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum getSpatialIndexType()
					{
						if (this->_gRef != NULL && this->m_getSpatialIndexType_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getSpatialIndexType_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum __values1 = (EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum) __values1_j;
							return __values1;
						}
						else
						{
							return this->CRTreeSpatialIndexParam::getSpatialIndexType();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCRTreeSpatialIndexParamProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_Rtreespatialindexparam_toStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial2D::GeoDataset::CRTreeSpatialIndexParam *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CRTreeSpatialIndexParam*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRTreeSpatialIndexParamProxy))
					{
						pObjectX->EarthView::World::Spatial2D::GeoDataset::CRTreeSpatialIndexParam::toStream(stream);
					}
					else
					{
						pObjectX->toStream(stream);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_Rtreespatialindexparam_register_1toStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRTreeSpatialIndexParamProxy *pObjectX = (JCRTreeSpatialIndexParamProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_toStream_CDataStream_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"toStream_CDataStream_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_Rtreespatialindexparam_toStream_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial2D::GeoDataset::CRTreeSpatialIndexParam *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CRTreeSpatialIndexParam*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::GeoDataset::CRTreeSpatialIndexParam::toStream(stream);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_Rtreespatialindexparam_fromStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial2D::GeoDataset::CRTreeSpatialIndexParam *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CRTreeSpatialIndexParam*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRTreeSpatialIndexParamProxy))
					{
						pObjectX->EarthView::World::Spatial2D::GeoDataset::CRTreeSpatialIndexParam::fromStream(stream);
					}
					else
					{
						pObjectX->fromStream(stream);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_Rtreespatialindexparam_register_1fromStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRTreeSpatialIndexParamProxy *pObjectX = (JCRTreeSpatialIndexParamProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_fromStream_CDataStream_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"fromStream_CDataStream_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_Rtreespatialindexparam_fromStream_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial2D::GeoDataset::CRTreeSpatialIndexParam *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CRTreeSpatialIndexParam*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::GeoDataset::CRTreeSpatialIndexParam::fromStream(stream);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_Rtreespatialindexparam_register_1getSpatialIndexType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRTreeSpatialIndexParamProxy *pObjectX = (JCRTreeSpatialIndexParamProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSpatialIndexType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSpatialIndexType_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				class JCSpatialGridIndexParamProxy : public EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam
				{
				 private:
					EarthView::World::Core::ev_string m_getSpatialIndexType_void_callback;
					EarthView::World::Core::ev_string m_toStream_CDataStream_callback;
					EarthView::World::Core::ev_string m_fromStream_CDataStream_callback;
				public:
					JCSpatialGridIndexParamProxy(EarthView::World::Core::CNameValuePairList *pList) : CSpatialGridIndexParam(pList)
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
					void register_getSpatialIndexType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSpatialIndexType_void_callback = __method;
					}
					void register_toStream_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toStream_CDataStream_callback = __method;
					}
					void register_fromStream_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_fromStream_CDataStream_callback = __method;
					}
					virtual void toStream(EarthView::World::Core::CDataStream& stream) const
					{
						if (this->_gRef != NULL && this->m_toStream_CDataStream_callback != "" && this->isCustomExtend())
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
							jlong stream_j = (jlong) &stream;
							jmethodID __method = __gr->getMethod("toStream_CDataStream_callback");
							__env->CallVoidMethod(__obj, __method , stream_j);
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
							return this->CSpatialGridIndexParam::toStream(stream);
						}
					}
					virtual void fromStream(EarthView::World::Core::CDataStream& stream)
					{
						if (this->_gRef != NULL && this->m_fromStream_CDataStream_callback != "" && this->isCustomExtend())
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
							jlong stream_j = (jlong) &stream;
							jmethodID __method = __gr->getMethod("fromStream_CDataStream_callback");
							__env->CallVoidMethod(__obj, __method , stream_j);
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
							return this->CSpatialGridIndexParam::fromStream(stream);
						}
					}
					virtual EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum getSpatialIndexType()
					{
						if (this->_gRef != NULL && this->m_getSpatialIndexType_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getSpatialIndexType_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum __values1 = (EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum) __values1_j;
							return __values1;
						}
						else
						{
							return this->CSpatialGridIndexParam::getSpatialIndexType();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCSpatialGridIndexParamProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_SpatialGridIndexParam_setGridOneSize_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble gridSize_j)
				{
					const ev_real64 gridSize = (ev_real64) gridSize_j;
					EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam*) pObjXXXX;
					pObjectX->setGridOneSize(gridSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_SpatialGridIndexParam_setGridTwoSize_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble gridSize_j)
				{
					const ev_real64 gridSize = (ev_real64) gridSize_j;
					EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam*) pObjXXXX;
					pObjectX->setGridTwoSize(gridSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_SpatialGridIndexParam_setGridThreeSize_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble gridSize_j)
				{
					const ev_real64 gridSize = (ev_real64) gridSize_j;
					EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam*) pObjXXXX;
					pObjectX->setGridThreeSize(gridSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_SpatialGridIndexParam_getGridSize_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong gridOneSize_j, jlong gridTwoSize_j, jlong gridThreeSize_j)
				{
					ev_real64 &gridOneSize = *(ev_real64*) gridOneSize_j;
					ev_real64 &gridTwoSize = *(ev_real64*) gridTwoSize_j;
					ev_real64 &gridThreeSize = *(ev_real64*) gridThreeSize_j;
					const 					EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam*) pObjXXXX;
					pObjectX->getGridSize(gridOneSize, gridTwoSize, gridThreeSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_SpatialGridIndexParam_toStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSpatialGridIndexParamProxy))
					{
						pObjectX->EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam::toStream(stream);
					}
					else
					{
						pObjectX->toStream(stream);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_SpatialGridIndexParam_register_1toStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSpatialGridIndexParamProxy *pObjectX = (JCSpatialGridIndexParamProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_toStream_CDataStream_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"toStream_CDataStream_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_SpatialGridIndexParam_toStream_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam::toStream(stream);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_SpatialGridIndexParam_fromStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSpatialGridIndexParamProxy))
					{
						pObjectX->EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam::fromStream(stream);
					}
					else
					{
						pObjectX->fromStream(stream);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_SpatialGridIndexParam_register_1fromStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSpatialGridIndexParamProxy *pObjectX = (JCSpatialGridIndexParamProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_fromStream_CDataStream_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"fromStream_CDataStream_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_SpatialGridIndexParam_fromStream_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam::fromStream(stream);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_SpatialGridIndexParam_register_1getSpatialIndexType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSpatialGridIndexParamProxy *pObjectX = (JCSpatialGridIndexParamProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSpatialIndexType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSpatialIndexType_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				class JCSpatialIndexParamFactoryProxy : public EarthView::World::Spatial2D::GeoDataset::CSpatialIndexParamFactory
				{
				 private:
					EarthView::World::Core::ev_string m_createSpatialIndexParam_EVSpatialIndexEnum_callback;
					EarthView::World::Core::ev_string m_createSpatialIndexParam_CDataStream_callback;
				public:
					JCSpatialIndexParamFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CSpatialIndexParamFactory(pList)
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
					void register_createSpatialIndexParam_EVSpatialIndexEnum_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createSpatialIndexParam_EVSpatialIndexEnum_callback = __method;
					}
					void register_createSpatialIndexParam_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createSpatialIndexParam_CDataStream_callback = __method;
					}
					virtual EarthView::World::Spatial::GeoDataset::ISpatialIndexParam* createSpatialIndexParam(EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum type)
					{
						if (this->_gRef != NULL && this->m_createSpatialIndexParam_EVSpatialIndexEnum_callback != "" && this->isCustomExtend())
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
							jint type_j = (jint) type;
							jmethodID __method = __gr->getMethod("createSpatialIndexParam_EVSpatialIndexEnum_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , type_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::GeoDataset::ISpatialIndexParam *__values1 = (EarthView::World::Spatial::GeoDataset::ISpatialIndexParam*) __values1_j;
							if(__values1 != NULL) {
								((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
							}
							return __values1;
						}
						else
						{
							return this->CSpatialIndexParamFactory::createSpatialIndexParam(type);
						}
					}
					virtual EarthView::World::Spatial::GeoDataset::ISpatialIndexParam* createSpatialIndexParam(EarthView::World::Core::CDataStream& stream)
					{
						if (this->_gRef != NULL && this->m_createSpatialIndexParam_CDataStream_callback != "" && this->isCustomExtend())
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
							jlong stream_j = (jlong) &stream;
							jmethodID __method = __gr->getMethod("createSpatialIndexParam_CDataStream_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , stream_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::GeoDataset::ISpatialIndexParam *__values1 = (EarthView::World::Spatial::GeoDataset::ISpatialIndexParam*) __values1_j;
							if(__values1 != NULL) {
								((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
							}
							return __values1;
						}
						else
						{
							return this->CSpatialIndexParamFactory::createSpatialIndexParam(stream);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCSpatialIndexParamFactoryProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geodataset_SpatialIndexParamFactory_createSpatialIndexParam_1EVSpatialIndexEnum(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum type = (EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum) type_j;
					EarthView::World::Spatial2D::GeoDataset::CSpatialIndexParamFactory *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CSpatialIndexParamFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSpatialIndexParamFactoryProxy))
					{
						EarthView::World::Spatial::GeoDataset::ISpatialIndexParam* __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CSpatialIndexParamFactory::createSpatialIndexParam(type);
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::ISpatialIndexParam* __values1 = pObjectX->createSpatialIndexParam(type);
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_SpatialIndexParamFactory_register_1createSpatialIndexParam_1EVSpatialIndexEnum(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSpatialIndexParamFactoryProxy *pObjectX = (JCSpatialIndexParamFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createSpatialIndexParam_EVSpatialIndexEnum_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createSpatialIndexParam_EVSpatialIndexEnum_callback", "(I)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geodataset_SpatialIndexParamFactory_createSpatialIndexParam_1EVSpatialIndexEnum_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum type = (EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum) type_j;
					EarthView::World::Spatial2D::GeoDataset::CSpatialIndexParamFactory *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CSpatialIndexParamFactory*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::ISpatialIndexParam* __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CSpatialIndexParamFactory::createSpatialIndexParam(type);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geodataset_SpatialIndexParamFactory_createSpatialIndexParam_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial2D::GeoDataset::CSpatialIndexParamFactory *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CSpatialIndexParamFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSpatialIndexParamFactoryProxy))
					{
						EarthView::World::Spatial::GeoDataset::ISpatialIndexParam* __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CSpatialIndexParamFactory::createSpatialIndexParam(stream);
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::ISpatialIndexParam* __values1 = pObjectX->createSpatialIndexParam(stream);
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_SpatialIndexParamFactory_register_1createSpatialIndexParam_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSpatialIndexParamFactoryProxy *pObjectX = (JCSpatialIndexParamFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createSpatialIndexParam_CDataStream_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createSpatialIndexParam_CDataStream_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geodataset_SpatialIndexParamFactory_createSpatialIndexParam_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial2D::GeoDataset::CSpatialIndexParamFactory *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CSpatialIndexParamFactory*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::ISpatialIndexParam* __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CSpatialIndexParamFactory::createSpatialIndexParam(stream);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
		}
	}
}
