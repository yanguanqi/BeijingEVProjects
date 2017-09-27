/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "kmlserializer/kmlnetworklink.h"
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
			namespace Kml
			{
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_get_1mIsLodPassed_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->mIsLodPassed);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_set_1mIsLodPassed_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjXXXX;
					pObjectX->mIsLodPassed = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_get_1WorkState_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->WorkState);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_set_1WorkState_1CKmlWorkQueueState(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjXXXX;
					pObjectX->WorkState = (EarthView::World::Spatial::Kml::CKmlWorkQueueState*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_get_1mpDoc_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->mpDoc);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_set_1mpDoc_1CKmlDocument(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjXXXX;
					pObjectX->mpDoc = (EarthView::World::Spatial::Kml::CKmlDocument*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_get_1mpParent_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->mpParent);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_set_1mpParent_1CKmlDocument(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjXXXX;
					pObjectX->mpParent = (EarthView::World::Spatial::Kml::CKmlDocument*) __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_setLoadedState_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isLoaded_j)
				{
					ev_bool isLoaded = (ev_bool) isLoaded_j;
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjXXXX;
					pObjectX->setLoadedState(isLoaded);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_getLoadedState_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjXXXX;
					ev_bool __values1 = pObjectX->getLoadedState();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_get_1mName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mName;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_set_1mName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->mName = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_get_1mId_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mId;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_set_1mId_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->mId = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_get_1mLocalPath_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mLocalPath;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_set_1mLocalPath_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->mLocalPath = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_get_1GeoObjectExtAttr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->GeoObjectExtAttr);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_set_1GeoObjectExtAttr_1CGeoObjectExtensionAttribute(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjXXXX;
					pObjectX->GeoObjectExtAttr = *(EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_setEnvelopRef_1CEnvelope(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong envelop_j)
				{
					EarthView::World::Spatial::Geometry::CEnvelope envelop = *(EarthView::World::Spatial::Geometry::CEnvelope*) envelop_j;
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjXXXX;
					pObjectX->setEnvelopRef(envelop);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_getEnvelopRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CEnvelope __values1 = pObjectX->getEnvelopRef();
					EarthView::World::Spatial::Geometry::CEnvelope *returnvalues = new EarthView::World::Spatial::Geometry::CEnvelope(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_get_1mLatitude_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mLatitude);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_set_1mLatitude_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjXXXX;
					pObjectX->mLatitude = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_get_1mLongitude_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mLongitude);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_set_1mLongitude_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjXXXX;
					pObjectX->mLongitude = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_get_1mHeading_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mHeading);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_set_1mHeading_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjXXXX;
					pObjectX->mHeading = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_get_1mTilt_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mTilt);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_set_1mTilt_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjXXXX;
					pObjectX->mTilt = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_get_1mAltitude_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mAltitude);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_set_1mAltitude_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjXXXX;
					pObjectX->mAltitude = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_get_1mOriAltitude_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mOriAltitude);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_set_1mOriAltitude_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjXXXX;
					pObjectX->mOriAltitude = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_get_1mIsDirty_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->mIsDirty);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_set_1mIsDirty_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjXXXX;
					pObjectX->mIsDirty = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_get_1mRange_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mRange);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_set_1mRange_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjXXXX;
					pObjectX->mRange = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_get_1mIsCameraAltComputed_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->mIsCameraAltComputed);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_set_1mIsCameraAltComputed_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjXXXX;
					pObjectX->mIsCameraAltComputed = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjXXXX;
					EarthView::World::Spatial::Kml::CKmlNetworkLink* __values1 = pObjectX->clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_relpace_1CKmlNetworkLink(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong destLink_j)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *destLink = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) destLink_j;
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjXXXX;
					pObjectX->relpace(destLink);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_getLink_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjXXXX;
					const EVString& __values1 = pObjectX->getLink();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_setLink_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring link_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* link_ch = (const ev_char*)__env->GetStringUTFChars(link_j,JNI_FALSE);
					const EVString link = link_ch;
					__env->ReleaseStringUTFChars(link_j, (const char *)link_ch);
					#else
					const ev_wchar* link_ch = (const ev_wchar*)__env->GetStringChars(link_j,JNI_FALSE);
					const EVString link = link_ch;
					__env->ReleaseStringChars(link_j, (const jchar *)link_ch);
					#endif
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjXXXX;
					pObjectX->setLink(link);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_isVisiable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjXXXX;
					ev_bool __values1 = pObjectX->isVisiable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_setVisible_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visiable_j)
				{
					ev_bool visiable = (ev_bool) visiable_j;
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjXXXX;
					pObjectX->setVisible(visiable);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_isOpen_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjXXXX;
					ev_bool __values1 = pObjectX->isOpen();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_setOpened_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean opened_j)
				{
					ev_bool opened = (ev_bool) opened_j;
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjXXXX;
					pObjectX->setOpened(opened);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_getAddress_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjXXXX;
					const EVString& __values1 = pObjectX->getAddress();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_setAddress_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring addr_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* addr_ch = (const ev_char*)__env->GetStringUTFChars(addr_j,JNI_FALSE);
					const EVString addr = addr_ch;
					__env->ReleaseStringUTFChars(addr_j, (const char *)addr_ch);
					#else
					const ev_wchar* addr_ch = (const ev_wchar*)__env->GetStringChars(addr_j,JNI_FALSE);
					const EVString addr = addr_ch;
					__env->ReleaseStringChars(addr_j, (const jchar *)addr_ch);
					#endif
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjXXXX;
					pObjectX->setAddress(addr);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_getPhoneNumber_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjXXXX;
					const EVString& __values1 = pObjectX->getPhoneNumber();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_setPhoneNumber_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring phoneNum_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* phoneNum_ch = (const ev_char*)__env->GetStringUTFChars(phoneNum_j,JNI_FALSE);
					const EVString phoneNum = phoneNum_ch;
					__env->ReleaseStringUTFChars(phoneNum_j, (const char *)phoneNum_ch);
					#else
					const ev_wchar* phoneNum_ch = (const ev_wchar*)__env->GetStringChars(phoneNum_j,JNI_FALSE);
					const EVString phoneNum = phoneNum_ch;
					__env->ReleaseStringChars(phoneNum_j, (const jchar *)phoneNum_ch);
					#endif
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjXXXX;
					pObjectX->setPhoneNumber(phoneNum);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_getDescription_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjXXXX;
					const EVString& __values1 = pObjectX->getDescription();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_setDescription_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring descripton_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* descripton_ch = (const ev_char*)__env->GetStringUTFChars(descripton_j,JNI_FALSE);
					const EVString descripton = descripton_ch;
					__env->ReleaseStringUTFChars(descripton_j, (const char *)descripton_ch);
					#else
					const ev_wchar* descripton_ch = (const ev_wchar*)__env->GetStringChars(descripton_j,JNI_FALSE);
					const EVString descripton = descripton_ch;
					__env->ReleaseStringChars(descripton_j, (const jchar *)descripton_ch);
					#endif
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjXXXX;
					pObjectX->setDescription(descripton);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_getStyleUrl_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjXXXX;
					const EVString& __values1 = pObjectX->getStyleUrl();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_setStyleUrl_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring url_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* url_ch = (const ev_char*)__env->GetStringUTFChars(url_j,JNI_FALSE);
					const EVString url = url_ch;
					__env->ReleaseStringUTFChars(url_j, (const char *)url_ch);
					#else
					const ev_wchar* url_ch = (const ev_wchar*)__env->GetStringChars(url_j,JNI_FALSE);
					const EVString url = url_ch;
					__env->ReleaseStringChars(url_j, (const jchar *)url_ch);
					#endif
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjXXXX;
					pObjectX->setStyleUrl(url);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_isRefreshVisibility_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjXXXX;
					ev_bool __values1 = pObjectX->isRefreshVisibility();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_setRefreshVisibility_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean refreshVisibility_j)
				{
					ev_bool refreshVisibility = (ev_bool) refreshVisibility_j;
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjXXXX;
					pObjectX->setRefreshVisibility(refreshVisibility);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_isFlyToView_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjXXXX;
					ev_bool __values1 = pObjectX->isFlyToView();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_setFlyToView_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean flyToView_j)
				{
					ev_bool flyToView = (ev_bool) flyToView_j;
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjXXXX;
					pObjectX->setFlyToView(flyToView);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_KmlNetworkLink_downloadKmlFile_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pObjectX = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjXXXX;
					ev_bool __values1 = pObjectX->downloadKmlFile();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
		}
	}
}
