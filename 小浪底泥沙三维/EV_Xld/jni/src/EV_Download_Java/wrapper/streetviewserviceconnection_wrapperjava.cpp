/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "download/streetviewserviceconnection.h"
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
			namespace Download
			{
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_StreetPoint_get_1mEVID_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::CStreetPoint *pObjectX = (EarthView::World::Spatial::Download::CStreetPoint*)pObjXXXX;
					jlong __values1_j = (jlong) (pObjectX->mEVID);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_StreetPoint_set_1mEVID_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial::Download::CStreetPoint *pObjectX = (EarthView::World::Spatial::Download::CStreetPoint*)pObjXXXX;
					pObjectX->mEVID = (ev_uint32)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_StreetPoint_get_1mNearEVID_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::CStreetPoint *pObjectX = (EarthView::World::Spatial::Download::CStreetPoint*)pObjXXXX;
					jlong __values1_j = (jlong) (pObjectX->mNearEVID);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_StreetPoint_set_1mNearEVID_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial::Download::CStreetPoint *pObjectX = (EarthView::World::Spatial::Download::CStreetPoint*)pObjXXXX;
					pObjectX->mNearEVID = (ev_uint32)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_StreetPoint_get_1mTopoID_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::CStreetPoint *pObjectX = (EarthView::World::Spatial::Download::CStreetPoint*)pObjXXXX;
					jlong __values1_j = (jlong) (pObjectX->mTopoID);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_StreetPoint_set_1mTopoID_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial::Download::CStreetPoint *pObjectX = (EarthView::World::Spatial::Download::CStreetPoint*)pObjXXXX;
					pObjectX->mTopoID = (ev_uint32)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_StreetPoint_get_1mID_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::CStreetPoint *pObjectX = (EarthView::World::Spatial::Download::CStreetPoint*)pObjXXXX;
					jlong __values1_j = (jlong) (pObjectX->mID);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_StreetPoint_set_1mID_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial::Download::CStreetPoint *pObjectX = (EarthView::World::Spatial::Download::CStreetPoint*)pObjXXXX;
					pObjectX->mID = (ev_uint32)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_download_StreetPoint_get_1mIsEdge_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::CStreetPoint *pObjectX = (EarthView::World::Spatial::Download::CStreetPoint*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->mIsEdge);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_StreetPoint_set_1mIsEdge_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial::Download::CStreetPoint *pObjectX = (EarthView::World::Spatial::Download::CStreetPoint*)pObjXXXX;
					pObjectX->mIsEdge = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_download_StreetPoint_get_1mIsRepeated_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::CStreetPoint *pObjectX = (EarthView::World::Spatial::Download::CStreetPoint*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->mIsRepeated);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_StreetPoint_set_1mIsRepeated_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial::Download::CStreetPoint *pObjectX = (EarthView::World::Spatial::Download::CStreetPoint*)pObjXXXX;
					pObjectX->mIsRepeated = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_download_StreetPoint_get_1mLon_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::CStreetPoint *pObjectX = (EarthView::World::Spatial::Download::CStreetPoint*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mLon);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_StreetPoint_set_1mLon_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Download::CStreetPoint *pObjectX = (EarthView::World::Spatial::Download::CStreetPoint*)pObjXXXX;
					pObjectX->mLon = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_download_StreetPoint_get_1mLat_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::CStreetPoint *pObjectX = (EarthView::World::Spatial::Download::CStreetPoint*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mLat);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_StreetPoint_set_1mLat_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Download::CStreetPoint *pObjectX = (EarthView::World::Spatial::Download::CStreetPoint*)pObjXXXX;
					pObjectX->mLat = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_download_StreetPoint_get_1mNearLon_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::CStreetPoint *pObjectX = (EarthView::World::Spatial::Download::CStreetPoint*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mNearLon);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_StreetPoint_set_1mNearLon_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Download::CStreetPoint *pObjectX = (EarthView::World::Spatial::Download::CStreetPoint*)pObjXXXX;
					pObjectX->mNearLon = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_download_StreetPoint_get_1mNearLat_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::CStreetPoint *pObjectX = (EarthView::World::Spatial::Download::CStreetPoint*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mNearLat);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_StreetPoint_set_1mNearLat_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Download::CStreetPoint *pObjectX = (EarthView::World::Spatial::Download::CStreetPoint*)pObjXXXX;
					pObjectX->mNearLat = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_download_StreetPoint_get_1mPhotoFile_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::CStreetPoint *pObjectX = (EarthView::World::Spatial::Download::CStreetPoint*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mPhotoFile;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_StreetPoint_set_1mPhotoFile_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial::Download::CStreetPoint *pObjectX = (EarthView::World::Spatial::Download::CStreetPoint*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->mPhotoFile = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_download_StreetPoint_get_1mMapCode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::CStreetPoint *pObjectX = (EarthView::World::Spatial::Download::CStreetPoint*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mMapCode;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_StreetPoint_set_1mMapCode_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial::Download::CStreetPoint *pObjectX = (EarthView::World::Spatial::Download::CStreetPoint*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->mMapCode = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_download_StreetPoint_get_1mNearMapCode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::CStreetPoint *pObjectX = (EarthView::World::Spatial::Download::CStreetPoint*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mNearMapCode;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_StreetPoint_set_1mNearMapCode_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial::Download::CStreetPoint *pObjectX = (EarthView::World::Spatial::Download::CStreetPoint*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->mNearMapCode = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_download_StreetPoint_get_1mExtendAtrri_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::CStreetPoint *pObjectX = (EarthView::World::Spatial::Download::CStreetPoint*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mExtendAtrri;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_StreetPoint_set_1mExtendAtrri_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial::Download::CStreetPoint *pObjectX = (EarthView::World::Spatial::Download::CStreetPoint*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->mExtendAtrri = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_download_StreetPoint_OperatorEquals_1CStreetPoint(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rkStreetPoint_j )
				{
					EarthView::World::Spatial::Download::CStreetPoint& pObjectX = *(EarthView::World::Spatial::Download::CStreetPoint*) pObjXXXX;
					const EarthView::World::Spatial::Download::CStreetPoint &rkStreetPoint = *(EarthView::World::Spatial::Download::CStreetPoint*) rkStreetPoint_j;
					ev_bool __values1 = (pObjectX == rkStreetPoint);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_download_StreetPoint_OperatorNotEquals_1CStreetPoint(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rkStreetPoint_j )
				{
					EarthView::World::Spatial::Download::CStreetPoint& pObjectX = *(EarthView::World::Spatial::Download::CStreetPoint*) pObjXXXX;
					const EarthView::World::Spatial::Download::CStreetPoint &rkStreetPoint = *(EarthView::World::Spatial::Download::CStreetPoint*) rkStreetPoint_j;
					ev_bool __values1 = (pObjectX != rkStreetPoint);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_StreetPointList_push_1back_1CStreetPoint(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Spatial::Download::CStreetPoint &t = *(EarthView::World::Spatial::Download::CStreetPoint*) t_j;
					EarthView::World::Spatial::Download::CStreetPointList *pObjectX = (EarthView::World::Spatial::Download::CStreetPointList*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_StreetPointList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::CStreetPointList *pObjectX = (EarthView::World::Spatial::Download::CStreetPointList*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_StreetPointList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::CStreetPointList *pObjectX = (EarthView::World::Spatial::Download::CStreetPointList*) pObjXXXX;
					EarthView::World::Spatial::Download::CStreetPoint& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_StreetPointList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::CStreetPointList *pObjectX = (EarthView::World::Spatial::Download::CStreetPointList*) pObjXXXX;
					EarthView::World::Spatial::Download::CStreetPoint& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_StreetPointList_at_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial::Download::CStreetPointList *pObjectX = (EarthView::World::Spatial::Download::CStreetPointList*) pObjXXXX;
					EarthView::World::Spatial::Download::CStreetPoint& __values1 = pObjectX->at(pos);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_download_StreetPointList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Download::CStreetPointList *pObjectX = (EarthView::World::Spatial::Download::CStreetPointList*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_StreetPointList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Download::CStreetPointList *pObjectX = (EarthView::World::Spatial::Download::CStreetPointList*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_StreetPointList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Spatial::Download::CStreetPointList *pObjectX = (EarthView::World::Spatial::Download::CStreetPointList*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_StreetPointList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::CStreetPointList *pObjectX = (EarthView::World::Spatial::Download::CStreetPointList*) pObjXXXX;
					pObjectX->clear();
				}
				class JCStreetViewServiceConnectionProxy : public EarthView::World::Spatial::Download::CStreetViewServiceConnection
				{
				 private:
					EarthView::World::Core::ev_string m_readintidata_EVString_MemoryDataStreamPtr_callback;
					EarthView::World::Core::ev_string m_getStreetPoints_EVString_EVString_CStreetPointList_callback;
					EarthView::World::Core::ev_string m_getPicture_EVString_ev_int32_ev_int32_ev_int32_ev_int32_MemoryDataStreamPtr_callback;
					EarthView::World::Core::ev_string m_setConnectionImp_ConnectionImp_callback;
					EarthView::World::Core::ev_string m_closeConnect_void_callback;
					EarthView::World::Core::ev_string m_openConnect_void_callback;
				public:
					JCStreetViewServiceConnectionProxy(EarthView::World::Core::CNameValuePairList *pList) : CStreetViewServiceConnection(pList)
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
					void register_readintidata_EVString_MemoryDataStreamPtr_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_readintidata_EVString_MemoryDataStreamPtr_callback = __method;
					}
					void register_getStreetPoints_EVString_EVString_CStreetPointList_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getStreetPoints_EVString_EVString_CStreetPointList_callback = __method;
					}
					void register_getPicture_EVString_ev_int32_ev_int32_ev_int32_ev_int32_MemoryDataStreamPtr_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getPicture_EVString_ev_int32_ev_int32_ev_int32_ev_int32_MemoryDataStreamPtr_callback = __method;
					}
					void register_setConnectionImp_ConnectionImp_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setConnectionImp_ConnectionImp_callback = __method;
					}
					void register_closeConnect_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_closeConnect_void_callback = __method;
					}
					void register_openConnect_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_openConnect_void_callback = __method;
					}
					virtual void setConnectionImp(EarthView::World::Spatial::Download::ConnectionImp* ref_pImp)
					{
						if (this->_gRef != NULL && this->m_setConnectionImp_ConnectionImp_callback != "" && this->isCustomExtend())
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
							jlong ref_pImp_j = (jlong) ref_pImp;
							jmethodID __method = __gr->getMethod("setConnectionImp_ConnectionImp_callback");
							__env->CallVoidMethod(__obj, __method , ref_pImp_j);
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
							return this->CStreetViewServiceConnection::setConnectionImp(ref_pImp);
						}
					}
					virtual void closeConnect()
					{
						if (this->_gRef != NULL && this->m_closeConnect_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("closeConnect_void_callback");
							__env->CallVoidMethod(__obj, __method );
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
							return this->CStreetViewServiceConnection::closeConnect();
						}
					}
					virtual void openConnect()
					{
						if (this->_gRef != NULL && this->m_openConnect_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("openConnect_void_callback");
							__env->CallVoidMethod(__obj, __method );
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
							return this->CStreetViewServiceConnection::openConnect();
						}
					}
					virtual ev_int32 readintidata(const EVString& servicename, EarthView::World::Core::MemoryDataStreamPtr& stream)
					{
						if (this->_gRef != NULL && this->m_readintidata_EVString_MemoryDataStreamPtr_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring servicename_wch = servicename;
							jstring servicename_j = __env->NewString((const jchar*)servicename_wch.getString(), servicename_wch.size());
							jlong stream_j = (jlong) &stream;
							jmethodID __method = __gr->getMethod("readintidata_EVString_MemoryDataStreamPtr_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , servicename_j, stream_j);
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
							return this->CStreetViewServiceConnection::readintidata(servicename, stream);
						}
					}
					virtual ev_int32 getStreetPoints(const EVString& servicename, const EVString& mapCode, EarthView::World::Spatial::Download::CStreetPointList& streetPoints)
					{
						if (this->_gRef != NULL && this->m_getStreetPoints_EVString_EVString_CStreetPointList_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring servicename_wch = servicename;
							jstring servicename_j = __env->NewString((const jchar*)servicename_wch.getString(), servicename_wch.size());
							EarthView::World::Core::ev_wstring mapCode_wch = mapCode;
							jstring mapCode_j = __env->NewString((const jchar*)mapCode_wch.getString(), mapCode_wch.size());
							jlong streetPoints_j = (jlong) &streetPoints;
							jmethodID __method = __gr->getMethod("getStreetPoints_EVString_EVString_CStreetPointList_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , servicename_j, mapCode_j, streetPoints_j);
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
							return this->CStreetViewServiceConnection::getStreetPoints(servicename, mapCode, streetPoints);
						}
					}
					virtual ev_int32 getPicture(const EVString& servicename, ev_int32 ID, ev_int32 level, ev_int32 row, ev_int32 col, EarthView::World::Core::MemoryDataStreamPtr& picMem)
					{
						if (this->_gRef != NULL && this->m_getPicture_EVString_ev_int32_ev_int32_ev_int32_ev_int32_MemoryDataStreamPtr_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring servicename_wch = servicename;
							jstring servicename_j = __env->NewString((const jchar*)servicename_wch.getString(), servicename_wch.size());
							jint ID_j = (jint) ID;
							jint level_j = (jint) level;
							jint row_j = (jint) row;
							jint col_j = (jint) col;
							jlong picMem_j = (jlong) &picMem;
							jmethodID __method = __gr->getMethod("getPicture_EVString_ev_int32_ev_int32_ev_int32_ev_int32_MemoryDataStreamPtr_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , servicename_j, ID_j, level_j, row_j, col_j, picMem_j);
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
							return this->CStreetViewServiceConnection::getPicture(servicename, ID, level, row, col, picMem);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCStreetViewServiceConnectionProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_StreetViewServiceConnection_setConnectionImp_1ConnectionImp(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pImp_j)
				{
					EarthView::World::Spatial::Download::ConnectionImp *ref_pImp = (EarthView::World::Spatial::Download::ConnectionImp*) ref_pImp_j;
					EarthView::World::Spatial::Download::CStreetViewServiceConnection *pObjectX = (EarthView::World::Spatial::Download::CStreetViewServiceConnection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCStreetViewServiceConnectionProxy))
					{
						pObjectX->EarthView::World::Spatial::Download::CStreetViewServiceConnection::setConnectionImp(ref_pImp);
					}
					else
					{
						pObjectX->setConnectionImp(ref_pImp);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_StreetViewServiceConnection_register_1setConnectionImp_1ConnectionImp(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCStreetViewServiceConnectionProxy *pObjectX = (JCStreetViewServiceConnectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setConnectionImp_ConnectionImp_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setConnectionImp_ConnectionImp_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_StreetViewServiceConnection_setConnectionImp_1ConnectionImp_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pImp_j)
				{
					EarthView::World::Spatial::Download::ConnectionImp *ref_pImp = (EarthView::World::Spatial::Download::ConnectionImp*) ref_pImp_j;
					EarthView::World::Spatial::Download::CStreetViewServiceConnection *pObjectX = (EarthView::World::Spatial::Download::CStreetViewServiceConnection*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Download::CStreetViewServiceConnection::setConnectionImp(ref_pImp);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_StreetViewServiceConnection_closeConnect_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::CStreetViewServiceConnection *pObjectX = (EarthView::World::Spatial::Download::CStreetViewServiceConnection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCStreetViewServiceConnectionProxy))
					{
						pObjectX->EarthView::World::Spatial::Download::CStreetViewServiceConnection::closeConnect();
					}
					else
					{
						pObjectX->closeConnect();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_StreetViewServiceConnection_register_1closeConnect_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCStreetViewServiceConnectionProxy *pObjectX = (JCStreetViewServiceConnectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_closeConnect_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"closeConnect_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_StreetViewServiceConnection_closeConnect_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::CStreetViewServiceConnection *pObjectX = (EarthView::World::Spatial::Download::CStreetViewServiceConnection*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Download::CStreetViewServiceConnection::closeConnect();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_StreetViewServiceConnection_openConnect_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::CStreetViewServiceConnection *pObjectX = (EarthView::World::Spatial::Download::CStreetViewServiceConnection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCStreetViewServiceConnectionProxy))
					{
						pObjectX->EarthView::World::Spatial::Download::CStreetViewServiceConnection::openConnect();
					}
					else
					{
						pObjectX->openConnect();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_StreetViewServiceConnection_register_1openConnect_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCStreetViewServiceConnectionProxy *pObjectX = (JCStreetViewServiceConnectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_openConnect_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"openConnect_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_StreetViewServiceConnection_openConnect_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::CStreetViewServiceConnection *pObjectX = (EarthView::World::Spatial::Download::CStreetViewServiceConnection*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Download::CStreetViewServiceConnection::openConnect();
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_StreetViewServiceConnection_readintidata_1EVString_1MemoryDataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring servicename_j, jlong stream_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* servicename_ch = (const ev_char*)__env->GetStringUTFChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringUTFChars(servicename_j, (const char *)servicename_ch);
					#else
					const ev_wchar* servicename_ch = (const ev_wchar*)__env->GetStringChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringChars(servicename_j, (const jchar *)servicename_ch);
					#endif
					EarthView::World::Core::MemoryDataStreamPtr &stream = *(EarthView::World::Core::MemoryDataStreamPtr*) stream_j;
					EarthView::World::Spatial::Download::CStreetViewServiceConnection *pObjectX = (EarthView::World::Spatial::Download::CStreetViewServiceConnection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCStreetViewServiceConnectionProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Download::CStreetViewServiceConnection::readintidata(servicename, stream);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->readintidata(servicename, stream);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_StreetViewServiceConnection_register_1readintidata_1EVString_1MemoryDataStreamPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCStreetViewServiceConnectionProxy *pObjectX = (JCStreetViewServiceConnectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_readintidata_EVString_MemoryDataStreamPtr_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"readintidata_EVString_MemoryDataStreamPtr_callback", "(Ljava/lang/String;J)I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_StreetViewServiceConnection_readintidata_1EVString_1MemoryDataStreamPtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring servicename_j, jlong stream_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* servicename_ch = (const ev_char*)__env->GetStringUTFChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringUTFChars(servicename_j, (const char *)servicename_ch);
					#else
					const ev_wchar* servicename_ch = (const ev_wchar*)__env->GetStringChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringChars(servicename_j, (const jchar *)servicename_ch);
					#endif
					EarthView::World::Core::MemoryDataStreamPtr &stream = *(EarthView::World::Core::MemoryDataStreamPtr*) stream_j;
					EarthView::World::Spatial::Download::CStreetViewServiceConnection *pObjectX = (EarthView::World::Spatial::Download::CStreetViewServiceConnection*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Download::CStreetViewServiceConnection::readintidata(servicename, stream);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_StreetViewServiceConnection_getStreetPoints_1EVString_1EVString_1CStreetPointList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring servicename_j, jstring mapCode_j, jlong streetPoints_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* servicename_ch = (const ev_char*)__env->GetStringUTFChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringUTFChars(servicename_j, (const char *)servicename_ch);
					#else
					const ev_wchar* servicename_ch = (const ev_wchar*)__env->GetStringChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringChars(servicename_j, (const jchar *)servicename_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* mapCode_ch = (const ev_char*)__env->GetStringUTFChars(mapCode_j,JNI_FALSE);
					const EVString mapCode = mapCode_ch;
					__env->ReleaseStringUTFChars(mapCode_j, (const char *)mapCode_ch);
					#else
					const ev_wchar* mapCode_ch = (const ev_wchar*)__env->GetStringChars(mapCode_j,JNI_FALSE);
					const EVString mapCode = mapCode_ch;
					__env->ReleaseStringChars(mapCode_j, (const jchar *)mapCode_ch);
					#endif
					EarthView::World::Spatial::Download::CStreetPointList &streetPoints = *(EarthView::World::Spatial::Download::CStreetPointList*) streetPoints_j;
					EarthView::World::Spatial::Download::CStreetViewServiceConnection *pObjectX = (EarthView::World::Spatial::Download::CStreetViewServiceConnection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCStreetViewServiceConnectionProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Download::CStreetViewServiceConnection::getStreetPoints(servicename, mapCode, streetPoints);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->getStreetPoints(servicename, mapCode, streetPoints);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_StreetViewServiceConnection_register_1getStreetPoints_1EVString_1EVString_1CStreetPointList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCStreetViewServiceConnectionProxy *pObjectX = (JCStreetViewServiceConnectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getStreetPoints_EVString_EVString_CStreetPointList_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getStreetPoints_EVString_EVString_CStreetPointList_callback", "(Ljava/lang/String;Ljava/lang/String;J)I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_StreetViewServiceConnection_getStreetPoints_1EVString_1EVString_1CStreetPointList_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring servicename_j, jstring mapCode_j, jlong streetPoints_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* servicename_ch = (const ev_char*)__env->GetStringUTFChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringUTFChars(servicename_j, (const char *)servicename_ch);
					#else
					const ev_wchar* servicename_ch = (const ev_wchar*)__env->GetStringChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringChars(servicename_j, (const jchar *)servicename_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* mapCode_ch = (const ev_char*)__env->GetStringUTFChars(mapCode_j,JNI_FALSE);
					const EVString mapCode = mapCode_ch;
					__env->ReleaseStringUTFChars(mapCode_j, (const char *)mapCode_ch);
					#else
					const ev_wchar* mapCode_ch = (const ev_wchar*)__env->GetStringChars(mapCode_j,JNI_FALSE);
					const EVString mapCode = mapCode_ch;
					__env->ReleaseStringChars(mapCode_j, (const jchar *)mapCode_ch);
					#endif
					EarthView::World::Spatial::Download::CStreetPointList &streetPoints = *(EarthView::World::Spatial::Download::CStreetPointList*) streetPoints_j;
					EarthView::World::Spatial::Download::CStreetViewServiceConnection *pObjectX = (EarthView::World::Spatial::Download::CStreetViewServiceConnection*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Download::CStreetViewServiceConnection::getStreetPoints(servicename, mapCode, streetPoints);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_StreetViewServiceConnection_getPicture_1EVString_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1MemoryDataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring servicename_j, jint ID_j, jint level_j, jint row_j, jint col_j, jlong picMem_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* servicename_ch = (const ev_char*)__env->GetStringUTFChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringUTFChars(servicename_j, (const char *)servicename_ch);
					#else
					const ev_wchar* servicename_ch = (const ev_wchar*)__env->GetStringChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringChars(servicename_j, (const jchar *)servicename_ch);
					#endif
					ev_int32 ID = (ev_int32) ID_j;
					ev_int32 level = (ev_int32) level_j;
					ev_int32 row = (ev_int32) row_j;
					ev_int32 col = (ev_int32) col_j;
					EarthView::World::Core::MemoryDataStreamPtr &picMem = *(EarthView::World::Core::MemoryDataStreamPtr*) picMem_j;
					EarthView::World::Spatial::Download::CStreetViewServiceConnection *pObjectX = (EarthView::World::Spatial::Download::CStreetViewServiceConnection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCStreetViewServiceConnectionProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Download::CStreetViewServiceConnection::getPicture(servicename, ID, level, row, col, picMem);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->getPicture(servicename, ID, level, row, col, picMem);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_StreetViewServiceConnection_register_1getPicture_1EVString_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1MemoryDataStreamPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCStreetViewServiceConnectionProxy *pObjectX = (JCStreetViewServiceConnectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getPicture_EVString_ev_int32_ev_int32_ev_int32_ev_int32_MemoryDataStreamPtr_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getPicture_EVString_ev_int32_ev_int32_ev_int32_ev_int32_MemoryDataStreamPtr_callback", "(Ljava/lang/String;IIIIJ)I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_StreetViewServiceConnection_getPicture_1EVString_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1MemoryDataStreamPtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring servicename_j, jint ID_j, jint level_j, jint row_j, jint col_j, jlong picMem_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* servicename_ch = (const ev_char*)__env->GetStringUTFChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringUTFChars(servicename_j, (const char *)servicename_ch);
					#else
					const ev_wchar* servicename_ch = (const ev_wchar*)__env->GetStringChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringChars(servicename_j, (const jchar *)servicename_ch);
					#endif
					ev_int32 ID = (ev_int32) ID_j;
					ev_int32 level = (ev_int32) level_j;
					ev_int32 row = (ev_int32) row_j;
					ev_int32 col = (ev_int32) col_j;
					EarthView::World::Core::MemoryDataStreamPtr &picMem = *(EarthView::World::Core::MemoryDataStreamPtr*) picMem_j;
					EarthView::World::Spatial::Download::CStreetViewServiceConnection *pObjectX = (EarthView::World::Spatial::Download::CStreetViewServiceConnection*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Download::CStreetViewServiceConnection::getPicture(servicename, ID, level, row, col, picMem);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				class JCStreetViewServiceConnectionImpProxy : public EarthView::World::Spatial::Download::CStreetViewServiceConnectionImp
				{
				 private:
					EarthView::World::Core::ev_string m_readintidata_EVString_MemoryDataStreamPtr_callback;
					EarthView::World::Core::ev_string m_getStreetPoints_EVString_EVString_CStreetPointList_callback;
					EarthView::World::Core::ev_string m_getPicture_EVString_ev_int32_ev_int32_ev_int32_ev_int32_MemoryDataStreamPtr_callback;
					EarthView::World::Core::ev_string m_openConnection_void_callback;
					EarthView::World::Core::ev_string m_closeConnection_void_callback;
					EarthView::World::Core::ev_string m_setConnectTimeout_ev_int32_callback;
				public:
					JCStreetViewServiceConnectionImpProxy(EarthView::World::Core::CNameValuePairList *pList) : CStreetViewServiceConnectionImp(pList)
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
					void register_readintidata_EVString_MemoryDataStreamPtr_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_readintidata_EVString_MemoryDataStreamPtr_callback = __method;
					}
					void register_getStreetPoints_EVString_EVString_CStreetPointList_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getStreetPoints_EVString_EVString_CStreetPointList_callback = __method;
					}
					void register_getPicture_EVString_ev_int32_ev_int32_ev_int32_ev_int32_MemoryDataStreamPtr_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getPicture_EVString_ev_int32_ev_int32_ev_int32_ev_int32_MemoryDataStreamPtr_callback = __method;
					}
					void register_openConnection_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_openConnection_void_callback = __method;
					}
					void register_closeConnection_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_closeConnection_void_callback = __method;
					}
					void register_setConnectTimeout_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setConnectTimeout_ev_int32_callback = __method;
					}
					virtual ev_int32 readintidata(const EVString& servicename, EarthView::World::Core::MemoryDataStreamPtr& stream)
					{
						if (this->_gRef != NULL && this->m_readintidata_EVString_MemoryDataStreamPtr_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring servicename_wch = servicename;
							jstring servicename_j = __env->NewString((const jchar*)servicename_wch.getString(), servicename_wch.size());
							jlong stream_j = (jlong) &stream;
							jmethodID __method = __gr->getMethod("readintidata_EVString_MemoryDataStreamPtr_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , servicename_j, stream_j);
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
							return this->CStreetViewServiceConnectionImp::readintidata(servicename, stream);
						}
					}
					virtual ev_int32 getStreetPoints(const EVString& servicename, const EVString& mapCode, EarthView::World::Spatial::Download::CStreetPointList& streetPoints)
					{
						if (this->_gRef != NULL && this->m_getStreetPoints_EVString_EVString_CStreetPointList_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring servicename_wch = servicename;
							jstring servicename_j = __env->NewString((const jchar*)servicename_wch.getString(), servicename_wch.size());
							EarthView::World::Core::ev_wstring mapCode_wch = mapCode;
							jstring mapCode_j = __env->NewString((const jchar*)mapCode_wch.getString(), mapCode_wch.size());
							jlong streetPoints_j = (jlong) &streetPoints;
							jmethodID __method = __gr->getMethod("getStreetPoints_EVString_EVString_CStreetPointList_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , servicename_j, mapCode_j, streetPoints_j);
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
							return this->CStreetViewServiceConnectionImp::getStreetPoints(servicename, mapCode, streetPoints);
						}
					}
					virtual ev_int32 getPicture(const EVString& servicename, ev_int32 ID, ev_int32 level, ev_int32 row, ev_int32 col, EarthView::World::Core::MemoryDataStreamPtr& picMem)
					{
						if (this->_gRef != NULL && this->m_getPicture_EVString_ev_int32_ev_int32_ev_int32_ev_int32_MemoryDataStreamPtr_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring servicename_wch = servicename;
							jstring servicename_j = __env->NewString((const jchar*)servicename_wch.getString(), servicename_wch.size());
							jint ID_j = (jint) ID;
							jint level_j = (jint) level;
							jint row_j = (jint) row;
							jint col_j = (jint) col;
							jlong picMem_j = (jlong) &picMem;
							jmethodID __method = __gr->getMethod("getPicture_EVString_ev_int32_ev_int32_ev_int32_ev_int32_MemoryDataStreamPtr_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , servicename_j, ID_j, level_j, row_j, col_j, picMem_j);
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
							return this->CStreetViewServiceConnectionImp::getPicture(servicename, ID, level, row, col, picMem);
						}
					}
					virtual ev_bool openConnection()
					{
						if (this->_gRef != NULL && this->m_openConnection_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("openConnection_void_callback");
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
							return this->CStreetViewServiceConnectionImp::openConnection();
						}
					}
					virtual ev_bool closeConnection()
					{
						if (this->_gRef != NULL && this->m_closeConnection_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("closeConnection_void_callback");
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
							return this->CStreetViewServiceConnectionImp::closeConnection();
						}
					}
					virtual void setConnectTimeout(ev_int32 timeout)
					{
						if (this->_gRef != NULL && this->m_setConnectTimeout_ev_int32_callback != "" && this->isCustomExtend())
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
							jint timeout_j = (jint) timeout;
							jmethodID __method = __gr->getMethod("setConnectTimeout_ev_int32_callback");
							__env->CallVoidMethod(__obj, __method , timeout_j);
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
							return this->CStreetViewServiceConnectionImp::setConnectTimeout(timeout);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCStreetViewServiceConnectionImpProxy);
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_StreetViewServiceConnectionImp_readintidata_1EVString_1MemoryDataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring servicename_j, jlong stream_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* servicename_ch = (const ev_char*)__env->GetStringUTFChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringUTFChars(servicename_j, (const char *)servicename_ch);
					#else
					const ev_wchar* servicename_ch = (const ev_wchar*)__env->GetStringChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringChars(servicename_j, (const jchar *)servicename_ch);
					#endif
					EarthView::World::Core::MemoryDataStreamPtr &stream = *(EarthView::World::Core::MemoryDataStreamPtr*) stream_j;
					EarthView::World::Spatial::Download::CStreetViewServiceConnectionImp *pObjectX = (EarthView::World::Spatial::Download::CStreetViewServiceConnectionImp*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCStreetViewServiceConnectionImpProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Download::CStreetViewServiceConnectionImp::readintidata(servicename, stream);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->readintidata(servicename, stream);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_StreetViewServiceConnectionImp_register_1readintidata_1EVString_1MemoryDataStreamPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCStreetViewServiceConnectionImpProxy *pObjectX = (JCStreetViewServiceConnectionImpProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_readintidata_EVString_MemoryDataStreamPtr_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"readintidata_EVString_MemoryDataStreamPtr_callback", "(Ljava/lang/String;J)I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_StreetViewServiceConnectionImp_readintidata_1EVString_1MemoryDataStreamPtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring servicename_j, jlong stream_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* servicename_ch = (const ev_char*)__env->GetStringUTFChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringUTFChars(servicename_j, (const char *)servicename_ch);
					#else
					const ev_wchar* servicename_ch = (const ev_wchar*)__env->GetStringChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringChars(servicename_j, (const jchar *)servicename_ch);
					#endif
					EarthView::World::Core::MemoryDataStreamPtr &stream = *(EarthView::World::Core::MemoryDataStreamPtr*) stream_j;
					EarthView::World::Spatial::Download::CStreetViewServiceConnectionImp *pObjectX = (EarthView::World::Spatial::Download::CStreetViewServiceConnectionImp*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Download::CStreetViewServiceConnectionImp::readintidata(servicename, stream);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_StreetViewServiceConnectionImp_getStreetPoints_1EVString_1EVString_1CStreetPointList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring servicename_j, jstring mapCode_j, jlong streetPoints_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* servicename_ch = (const ev_char*)__env->GetStringUTFChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringUTFChars(servicename_j, (const char *)servicename_ch);
					#else
					const ev_wchar* servicename_ch = (const ev_wchar*)__env->GetStringChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringChars(servicename_j, (const jchar *)servicename_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* mapCode_ch = (const ev_char*)__env->GetStringUTFChars(mapCode_j,JNI_FALSE);
					const EVString mapCode = mapCode_ch;
					__env->ReleaseStringUTFChars(mapCode_j, (const char *)mapCode_ch);
					#else
					const ev_wchar* mapCode_ch = (const ev_wchar*)__env->GetStringChars(mapCode_j,JNI_FALSE);
					const EVString mapCode = mapCode_ch;
					__env->ReleaseStringChars(mapCode_j, (const jchar *)mapCode_ch);
					#endif
					EarthView::World::Spatial::Download::CStreetPointList &streetPoints = *(EarthView::World::Spatial::Download::CStreetPointList*) streetPoints_j;
					EarthView::World::Spatial::Download::CStreetViewServiceConnectionImp *pObjectX = (EarthView::World::Spatial::Download::CStreetViewServiceConnectionImp*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCStreetViewServiceConnectionImpProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Download::CStreetViewServiceConnectionImp::getStreetPoints(servicename, mapCode, streetPoints);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->getStreetPoints(servicename, mapCode, streetPoints);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_StreetViewServiceConnectionImp_register_1getStreetPoints_1EVString_1EVString_1CStreetPointList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCStreetViewServiceConnectionImpProxy *pObjectX = (JCStreetViewServiceConnectionImpProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getStreetPoints_EVString_EVString_CStreetPointList_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getStreetPoints_EVString_EVString_CStreetPointList_callback", "(Ljava/lang/String;Ljava/lang/String;J)I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_StreetViewServiceConnectionImp_getStreetPoints_1EVString_1EVString_1CStreetPointList_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring servicename_j, jstring mapCode_j, jlong streetPoints_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* servicename_ch = (const ev_char*)__env->GetStringUTFChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringUTFChars(servicename_j, (const char *)servicename_ch);
					#else
					const ev_wchar* servicename_ch = (const ev_wchar*)__env->GetStringChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringChars(servicename_j, (const jchar *)servicename_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* mapCode_ch = (const ev_char*)__env->GetStringUTFChars(mapCode_j,JNI_FALSE);
					const EVString mapCode = mapCode_ch;
					__env->ReleaseStringUTFChars(mapCode_j, (const char *)mapCode_ch);
					#else
					const ev_wchar* mapCode_ch = (const ev_wchar*)__env->GetStringChars(mapCode_j,JNI_FALSE);
					const EVString mapCode = mapCode_ch;
					__env->ReleaseStringChars(mapCode_j, (const jchar *)mapCode_ch);
					#endif
					EarthView::World::Spatial::Download::CStreetPointList &streetPoints = *(EarthView::World::Spatial::Download::CStreetPointList*) streetPoints_j;
					EarthView::World::Spatial::Download::CStreetViewServiceConnectionImp *pObjectX = (EarthView::World::Spatial::Download::CStreetViewServiceConnectionImp*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Download::CStreetViewServiceConnectionImp::getStreetPoints(servicename, mapCode, streetPoints);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_StreetViewServiceConnectionImp_getPicture_1EVString_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1MemoryDataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring servicename_j, jint ID_j, jint level_j, jint row_j, jint col_j, jlong picMem_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* servicename_ch = (const ev_char*)__env->GetStringUTFChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringUTFChars(servicename_j, (const char *)servicename_ch);
					#else
					const ev_wchar* servicename_ch = (const ev_wchar*)__env->GetStringChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringChars(servicename_j, (const jchar *)servicename_ch);
					#endif
					ev_int32 ID = (ev_int32) ID_j;
					ev_int32 level = (ev_int32) level_j;
					ev_int32 row = (ev_int32) row_j;
					ev_int32 col = (ev_int32) col_j;
					EarthView::World::Core::MemoryDataStreamPtr &picMem = *(EarthView::World::Core::MemoryDataStreamPtr*) picMem_j;
					EarthView::World::Spatial::Download::CStreetViewServiceConnectionImp *pObjectX = (EarthView::World::Spatial::Download::CStreetViewServiceConnectionImp*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCStreetViewServiceConnectionImpProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Download::CStreetViewServiceConnectionImp::getPicture(servicename, ID, level, row, col, picMem);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->getPicture(servicename, ID, level, row, col, picMem);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_StreetViewServiceConnectionImp_register_1getPicture_1EVString_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1MemoryDataStreamPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCStreetViewServiceConnectionImpProxy *pObjectX = (JCStreetViewServiceConnectionImpProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getPicture_EVString_ev_int32_ev_int32_ev_int32_ev_int32_MemoryDataStreamPtr_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getPicture_EVString_ev_int32_ev_int32_ev_int32_ev_int32_MemoryDataStreamPtr_callback", "(Ljava/lang/String;IIIIJ)I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_StreetViewServiceConnectionImp_getPicture_1EVString_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1MemoryDataStreamPtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring servicename_j, jint ID_j, jint level_j, jint row_j, jint col_j, jlong picMem_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* servicename_ch = (const ev_char*)__env->GetStringUTFChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringUTFChars(servicename_j, (const char *)servicename_ch);
					#else
					const ev_wchar* servicename_ch = (const ev_wchar*)__env->GetStringChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringChars(servicename_j, (const jchar *)servicename_ch);
					#endif
					ev_int32 ID = (ev_int32) ID_j;
					ev_int32 level = (ev_int32) level_j;
					ev_int32 row = (ev_int32) row_j;
					ev_int32 col = (ev_int32) col_j;
					EarthView::World::Core::MemoryDataStreamPtr &picMem = *(EarthView::World::Core::MemoryDataStreamPtr*) picMem_j;
					EarthView::World::Spatial::Download::CStreetViewServiceConnectionImp *pObjectX = (EarthView::World::Spatial::Download::CStreetViewServiceConnectionImp*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Download::CStreetViewServiceConnectionImp::getPicture(servicename, ID, level, row, col, picMem);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_StreetViewServiceConnectionImp_register_1openConnection_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCStreetViewServiceConnectionImpProxy *pObjectX = (JCStreetViewServiceConnectionImpProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_openConnection_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"openConnection_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_StreetViewServiceConnectionImp_register_1closeConnection_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCStreetViewServiceConnectionImpProxy *pObjectX = (JCStreetViewServiceConnectionImpProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_closeConnection_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"closeConnection_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_StreetViewServiceConnectionImp_register_1setConnectTimeout_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCStreetViewServiceConnectionImpProxy *pObjectX = (JCStreetViewServiceConnectionImpProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setConnectTimeout_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setConnectTimeout_ev_int32_callback", "(I)V");
						__gr->setMethod(sMethod, __method);
					}
				}
			}
		}
	}
}
