/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialobject/coordinatesystem/transformation.h"
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
			namespace Utility
			{
				class JCCoordinateTransformationProxy : public EarthView::World::Spatial::Utility::CCoordinateTransformation
				{
				 private:
					EarthView::World::Core::ev_string m_setSourceCS_CSpatialReference_callback;
					EarthView::World::Core::ev_string m_setTargetCS_CSpatialReference_callback;
					EarthView::World::Core::ev_string m_setTransParameter_CTransParameter_callback;
					EarthView::World::Core::ev_string m_transform_ev_int32_ev_real64_ev_real64_ev_real64_callback;
					EarthView::World::Core::ev_string m_transfromEx_ev_int32_ev_real64_ev_real64_ev_real64_ev_bool_callback;
				public:
					JCCoordinateTransformationProxy(EarthView::World::Core::CNameValuePairList *pList) : CCoordinateTransformation(pList)
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
					void register_setSourceCS_CSpatialReference_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSourceCS_CSpatialReference_callback = __method;
					}
					void register_setTargetCS_CSpatialReference_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setTargetCS_CSpatialReference_callback = __method;
					}
					void register_setTransParameter_CTransParameter_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setTransParameter_CTransParameter_callback = __method;
					}
					void register_transform_ev_int32_ev_real64_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_transform_ev_int32_ev_real64_ev_real64_ev_real64_callback = __method;
					}
					void register_transfromEx_ev_int32_ev_real64_ev_real64_ev_real64_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_transfromEx_ev_int32_ev_real64_ev_real64_ev_real64_ev_bool_callback = __method;
					}
					virtual void setSourceCS(const EarthView::World::Spatial::Utility::CSpatialReference* ref_objSrcCrdSys)
					{
						if (this->_gRef != NULL && this->m_setSourceCS_CSpatialReference_callback != "" && this->isCustomExtend())
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
							jlong ref_objSrcCrdSys_j = (jlong) ref_objSrcCrdSys;
							jmethodID __method = __gr->getMethod("setSourceCS_CSpatialReference_callback");
							__env->CallVoidMethod(__obj, __method , ref_objSrcCrdSys_j);
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
							return this->CCoordinateTransformation::setSourceCS(ref_objSrcCrdSys);
						}
					}
					virtual void setTargetCS(const EarthView::World::Spatial::Utility::CSpatialReference* ref_objDstCrdSys)
					{
						if (this->_gRef != NULL && this->m_setTargetCS_CSpatialReference_callback != "" && this->isCustomExtend())
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
							jlong ref_objDstCrdSys_j = (jlong) ref_objDstCrdSys;
							jmethodID __method = __gr->getMethod("setTargetCS_CSpatialReference_callback");
							__env->CallVoidMethod(__obj, __method , ref_objDstCrdSys_j);
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
							return this->CCoordinateTransformation::setTargetCS(ref_objDstCrdSys);
						}
					}
					virtual void setTransParameter(const EarthView::World::Spatial::Utility::CTransParameter* objTransParameter)
					{
						if (this->_gRef != NULL && this->m_setTransParameter_CTransParameter_callback != "" && this->isCustomExtend())
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
							jlong objTransParameter_j = (jlong) objTransParameter;
							jmethodID __method = __gr->getMethod("setTransParameter_CTransParameter_callback");
							__env->CallVoidMethod(__obj, __method , objTransParameter_j);
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
							return this->CCoordinateTransformation::setTransParameter(objTransParameter);
						}
					}
					virtual ev_int32 transform(ev_int32 nCount, ev_real64* pdfX, ev_real64* pdfY, ev_real64* pdfZ)
					{
						if (this->_gRef != NULL && this->m_transform_ev_int32_ev_real64_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
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
							jint nCount_j = (jint) nCount;
							jlong pdfX_j = (jlong) pdfX;
							jlong pdfY_j = (jlong) pdfY;
							jlong pdfZ_j = (jlong) pdfZ;
							jmethodID __method = __gr->getMethod("transform_ev_int32_ev_real64_ev_real64_ev_real64_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , nCount_j, pdfX_j, pdfY_j, pdfZ_j);
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
							return this->CCoordinateTransformation::transform(nCount, pdfX, pdfY, pdfZ);
						}
					}
					virtual ev_int32 transfromEx(ev_int32 nCount, ev_real64* pdfX, ev_real64* pdfY, ev_real64* pdfZ, ev_bool* pBSuccesss)
					{
						if (this->_gRef != NULL && this->m_transfromEx_ev_int32_ev_real64_ev_real64_ev_real64_ev_bool_callback != "" && this->isCustomExtend())
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
							jint nCount_j = (jint) nCount;
							jlong pdfX_j = (jlong) pdfX;
							jlong pdfY_j = (jlong) pdfY;
							jlong pdfZ_j = (jlong) pdfZ;
							jlong pBSuccesss_j = (jlong) pBSuccesss;
							jmethodID __method = __gr->getMethod("transfromEx_ev_int32_ev_real64_ev_real64_ev_real64_ev_bool_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , nCount_j, pdfX_j, pdfY_j, pdfZ_j, pBSuccesss_j);
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
							return this->CCoordinateTransformation::transfromEx(nCount, pdfX, pdfY, pdfZ, pBSuccesss);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCCoordinateTransformationProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_CoordinateTransformation_setSourceCS_1CSpatialReference(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_objSrcCrdSys_j)
				{
					const EarthView::World::Spatial::Utility::CSpatialReference *ref_objSrcCrdSys = (const EarthView::World::Spatial::Utility::CSpatialReference*) ref_objSrcCrdSys_j;
					EarthView::World::Spatial::Utility::CCoordinateTransformation *pObjectX = (EarthView::World::Spatial::Utility::CCoordinateTransformation*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCoordinateTransformationProxy))
					{
						pObjectX->EarthView::World::Spatial::Utility::CCoordinateTransformation::setSourceCS(ref_objSrcCrdSys);
					}
					else
					{
						pObjectX->setSourceCS(ref_objSrcCrdSys);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_CoordinateTransformation_register_1setSourceCS_1CSpatialReference(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCoordinateTransformationProxy *pObjectX = (JCCoordinateTransformationProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setSourceCS_CSpatialReference_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setSourceCS_CSpatialReference_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_CoordinateTransformation_setSourceCS_1CSpatialReference_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_objSrcCrdSys_j)
				{
					const EarthView::World::Spatial::Utility::CSpatialReference *ref_objSrcCrdSys = (const EarthView::World::Spatial::Utility::CSpatialReference*) ref_objSrcCrdSys_j;
					EarthView::World::Spatial::Utility::CCoordinateTransformation *pObjectX = (EarthView::World::Spatial::Utility::CCoordinateTransformation*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Utility::CCoordinateTransformation::setSourceCS(ref_objSrcCrdSys);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_CoordinateTransformation_setTargetCS_1CSpatialReference(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_objDstCrdSys_j)
				{
					const EarthView::World::Spatial::Utility::CSpatialReference *ref_objDstCrdSys = (const EarthView::World::Spatial::Utility::CSpatialReference*) ref_objDstCrdSys_j;
					EarthView::World::Spatial::Utility::CCoordinateTransformation *pObjectX = (EarthView::World::Spatial::Utility::CCoordinateTransformation*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCoordinateTransformationProxy))
					{
						pObjectX->EarthView::World::Spatial::Utility::CCoordinateTransformation::setTargetCS(ref_objDstCrdSys);
					}
					else
					{
						pObjectX->setTargetCS(ref_objDstCrdSys);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_CoordinateTransformation_register_1setTargetCS_1CSpatialReference(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCoordinateTransformationProxy *pObjectX = (JCCoordinateTransformationProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setTargetCS_CSpatialReference_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setTargetCS_CSpatialReference_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_CoordinateTransformation_setTargetCS_1CSpatialReference_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_objDstCrdSys_j)
				{
					const EarthView::World::Spatial::Utility::CSpatialReference *ref_objDstCrdSys = (const EarthView::World::Spatial::Utility::CSpatialReference*) ref_objDstCrdSys_j;
					EarthView::World::Spatial::Utility::CCoordinateTransformation *pObjectX = (EarthView::World::Spatial::Utility::CCoordinateTransformation*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Utility::CCoordinateTransformation::setTargetCS(ref_objDstCrdSys);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_CoordinateTransformation_setTransParameter_1CTransParameter(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong objTransParameter_j)
				{
					const EarthView::World::Spatial::Utility::CTransParameter *objTransParameter = (const EarthView::World::Spatial::Utility::CTransParameter*) objTransParameter_j;
					EarthView::World::Spatial::Utility::CCoordinateTransformation *pObjectX = (EarthView::World::Spatial::Utility::CCoordinateTransformation*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCoordinateTransformationProxy))
					{
						pObjectX->EarthView::World::Spatial::Utility::CCoordinateTransformation::setTransParameter(objTransParameter);
					}
					else
					{
						pObjectX->setTransParameter(objTransParameter);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_CoordinateTransformation_register_1setTransParameter_1CTransParameter(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCoordinateTransformationProxy *pObjectX = (JCCoordinateTransformationProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setTransParameter_CTransParameter_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setTransParameter_CTransParameter_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_CoordinateTransformation_setTransParameter_1CTransParameter_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong objTransParameter_j)
				{
					const EarthView::World::Spatial::Utility::CTransParameter *objTransParameter = (const EarthView::World::Spatial::Utility::CTransParameter*) objTransParameter_j;
					EarthView::World::Spatial::Utility::CCoordinateTransformation *pObjectX = (EarthView::World::Spatial::Utility::CCoordinateTransformation*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Utility::CCoordinateTransformation::setTransParameter(objTransParameter);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_utility_CoordinateTransformation_getSourceCS_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Utility::CCoordinateTransformation *pObjectX = (EarthView::World::Spatial::Utility::CCoordinateTransformation*) pObjXXXX;
					const EarthView::World::Spatial::Utility::CSpatialReference* __values1 = pObjectX->getSourceCS();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_utility_CoordinateTransformation_getTargetCS_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Utility::CCoordinateTransformation *pObjectX = (EarthView::World::Spatial::Utility::CCoordinateTransformation*) pObjXXXX;
					const EarthView::World::Spatial::Utility::CSpatialReference* __values1 = pObjectX->getTargetCS();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_utility_CoordinateTransformation_getTransParameter_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Utility::CCoordinateTransformation *pObjectX = (EarthView::World::Spatial::Utility::CCoordinateTransformation*) pObjXXXX;
					const EarthView::World::Spatial::Utility::CTransParameter* __values1 = pObjectX->getTransParameter();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_utility_CoordinateTransformation_transform_1ev_1int32_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint nCount_j, jlong pdfX_j, jlong pdfY_j, jlong pdfZ_j)
				{
					ev_int32 nCount = (ev_int32) nCount_j;
					ev_real64 *pdfX = (ev_real64*) pdfX_j;
					ev_real64 *pdfY = (ev_real64*) pdfY_j;
					ev_real64 *pdfZ = (ev_real64*) pdfZ_j;
					EarthView::World::Spatial::Utility::CCoordinateTransformation *pObjectX = (EarthView::World::Spatial::Utility::CCoordinateTransformation*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCoordinateTransformationProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Utility::CCoordinateTransformation::transform(nCount, pdfX, pdfY, pdfZ);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->transform(nCount, pdfX, pdfY, pdfZ);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_CoordinateTransformation_register_1transform_1ev_1int32_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCoordinateTransformationProxy *pObjectX = (JCCoordinateTransformationProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_transform_ev_int32_ev_real64_ev_real64_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"transform_ev_int32_ev_real64_ev_real64_ev_real64_callback", "(IJJJ)I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_utility_CoordinateTransformation_transform_1ev_1int32_1ev_1real64_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint nCount_j, jlong pdfX_j, jlong pdfY_j, jlong pdfZ_j)
				{
					ev_int32 nCount = (ev_int32) nCount_j;
					ev_real64 *pdfX = (ev_real64*) pdfX_j;
					ev_real64 *pdfY = (ev_real64*) pdfY_j;
					ev_real64 *pdfZ = (ev_real64*) pdfZ_j;
					EarthView::World::Spatial::Utility::CCoordinateTransformation *pObjectX = (EarthView::World::Spatial::Utility::CCoordinateTransformation*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Utility::CCoordinateTransformation::transform(nCount, pdfX, pdfY, pdfZ);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_utility_CoordinateTransformation_transfromEx_1ev_1int32_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint nCount_j, jlong pdfX_j, jlong pdfY_j, jlong pdfZ_j, jlong pBSuccesss_j)
				{
					ev_int32 nCount = (ev_int32) nCount_j;
					ev_real64 *pdfX = (ev_real64*) pdfX_j;
					ev_real64 *pdfY = (ev_real64*) pdfY_j;
					ev_real64 *pdfZ = (ev_real64*) pdfZ_j;
					ev_bool *pBSuccesss = (ev_bool*) pBSuccesss_j;
					EarthView::World::Spatial::Utility::CCoordinateTransformation *pObjectX = (EarthView::World::Spatial::Utility::CCoordinateTransformation*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCoordinateTransformationProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Utility::CCoordinateTransformation::transfromEx(nCount, pdfX, pdfY, pdfZ, pBSuccesss);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->transfromEx(nCount, pdfX, pdfY, pdfZ, pBSuccesss);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_CoordinateTransformation_register_1transfromEx_1ev_1int32_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCoordinateTransformationProxy *pObjectX = (JCCoordinateTransformationProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_transfromEx_ev_int32_ev_real64_ev_real64_ev_real64_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"transfromEx_ev_int32_ev_real64_ev_real64_ev_real64_ev_bool_callback", "(IJJJJ)I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_utility_CoordinateTransformation_transfromEx_1ev_1int32_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint nCount_j, jlong pdfX_j, jlong pdfY_j, jlong pdfZ_j, jlong pBSuccesss_j)
				{
					ev_int32 nCount = (ev_int32) nCount_j;
					ev_real64 *pdfX = (ev_real64*) pdfX_j;
					ev_real64 *pdfY = (ev_real64*) pdfY_j;
					ev_real64 *pdfZ = (ev_real64*) pdfZ_j;
					ev_bool *pBSuccesss = (ev_bool*) pBSuccesss_j;
					EarthView::World::Spatial::Utility::CCoordinateTransformation *pObjectX = (EarthView::World::Spatial::Utility::CCoordinateTransformation*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Utility::CCoordinateTransformation::transfromEx(nCount, pdfX, pdfY, pdfZ, pBSuccesss);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_utility_CoordinateTransformation_transform_1CSpatialReference_1ev_1int32_1ev_1real64_1ev_1real64_1ev_1bool(JNIEnv *__env , jclass __clazz, jlong objSrcCrdSys_j, jint nCount_j, jlong pdfX_j, jlong pdfY_j, jboolean pForwardFlag_j)
				{
					const EarthView::World::Spatial::Utility::CSpatialReference *objSrcCrdSys = (const EarthView::World::Spatial::Utility::CSpatialReference*) objSrcCrdSys_j;
					ev_int32 nCount = (ev_int32) nCount_j;
					ev_real64 *pdfX = (ev_real64*) pdfX_j;
					ev_real64 *pdfY = (ev_real64*) pdfY_j;
					ev_bool pForwardFlag = (ev_bool) pForwardFlag_j;
					ev_int32 __values1 = EarthView::World::Spatial::Utility::CCoordinateTransformation::transform(objSrcCrdSys, nCount, pdfX, pdfY, pForwardFlag);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
			}
		}
	}
}
