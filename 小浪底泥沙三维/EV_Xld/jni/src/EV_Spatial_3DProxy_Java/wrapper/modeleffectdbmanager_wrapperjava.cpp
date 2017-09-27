/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dproxy/modeleffectdbmanager.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial3DProxy
		{
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_get_1mpRenderWindow_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->mpRenderWindow);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_set_1mpRenderWindow_1CRenderWindow(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*)pObjXXXX;
				pObjectX->mpRenderWindow = (EarthView::World::Graphic::CRenderWindow*) __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_setModelDataSource_1CModelDataSource(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pDatasource_j)
			{
				EarthView::World::Spatial3D::Dataset::CModelDataSource *ref_pDatasource = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) ref_pDatasource_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				pObjectX->setModelDataSource(ref_pDatasource);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_ev_1import_1CModelDataSource_1CModelDataSource_1CModelPublishToolListener_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong src_j, jlong dest_j, jlong listener_j, jboolean bClear_j, jboolean bCoverOrInstead_j)
			{
				EarthView::World::Spatial3D::Dataset::CModelDataSource *src = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) src_j;
				EarthView::World::Spatial3D::Dataset::CModelDataSource *dest = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) dest_j;
				EarthView::World::Spatial3D::CModelPublishToolListener *listener = (EarthView::World::Spatial3D::CModelPublishToolListener*) listener_j;
				ev_bool bClear = (ev_bool) bClear_j;
				ev_bool bCoverOrInstead = (ev_bool) bCoverOrInstead_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->import(src, dest, listener, bClear, bCoverOrInstead);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_ev_1import_1CModelDataSource_1CModelDataSource_1CModelPublishToolListener_1ev_1bool_1ev_1bool_1ModelIdAndNameMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong src_j, jlong dest_j, jlong listener_j, jboolean bClear_j, jboolean bCoverOrInstead_j, jlong idAndNameMap_j)
			{
				EarthView::World::Spatial3D::Dataset::CModelDataSource *src = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) src_j;
				EarthView::World::Spatial3D::Dataset::CModelDataSource *dest = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) dest_j;
				EarthView::World::Spatial3D::CModelPublishToolListener *listener = (EarthView::World::Spatial3D::CModelPublishToolListener*) listener_j;
				ev_bool bClear = (ev_bool) bClear_j;
				ev_bool bCoverOrInstead = (ev_bool) bCoverOrInstead_j;
				EarthView::World::Spatial3D::ModelIdAndNameMap &idAndNameMap = *(EarthView::World::Spatial3D::ModelIdAndNameMap*) idAndNameMap_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->import(src, dest, listener, bClear, bCoverOrInstead, idAndNameMap);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_ev_1import_1CModelDataSource_1CModelDataSource_1CModelPublishToolListener_1IntVector_1StringVector_1CEffectInfoVector_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong src_j, jlong dest_j, jlong listener_j, jlong modelIDVec_j, jlong typeCodesVec_j, jlong effectInfoVec_j, jboolean bClear_j, jboolean bCoverOrInstead_j)
			{
				EarthView::World::Spatial3D::Dataset::CModelDataSource *src = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) src_j;
				EarthView::World::Spatial3D::Dataset::CModelDataSource *dest = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) dest_j;
				EarthView::World::Spatial3D::CModelPublishToolListener *listener = (EarthView::World::Spatial3D::CModelPublishToolListener*) listener_j;
				EarthView::World::Core::IntVector modelIDVec = *(EarthView::World::Core::IntVector*) modelIDVec_j;
				const EarthView::World::Core::StringVector &typeCodesVec = *(EarthView::World::Core::StringVector*) typeCodesVec_j;
				const EarthView::World::Spatial3D::Dataset::CEffectInfoVector &effectInfoVec = *(EarthView::World::Spatial3D::Dataset::CEffectInfoVector*) effectInfoVec_j;
				ev_bool bClear = (ev_bool) bClear_j;
				ev_bool bCoverOrInstead = (ev_bool) bCoverOrInstead_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->import(src, dest, listener, modelIDVec, typeCodesVec, effectInfoVec, bClear, bCoverOrInstead);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_ev_1import_1CModelDataSource_1CModelDataSource_1CModelPublishToolListener_1IntVector_1StringVector_1CEffectInfoVector_1ev_1bool_1ev_1bool_1ModelIdAndNameMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong src_j, jlong dest_j, jlong listener_j, jlong modelIDVec_j, jlong typeCodesVec_j, jlong effectInfoVec_j, jboolean bClear_j, jboolean bCoverOrInstead_j, jlong idAndNameMap_j)
			{
				EarthView::World::Spatial3D::Dataset::CModelDataSource *src = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) src_j;
				EarthView::World::Spatial3D::Dataset::CModelDataSource *dest = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) dest_j;
				EarthView::World::Spatial3D::CModelPublishToolListener *listener = (EarthView::World::Spatial3D::CModelPublishToolListener*) listener_j;
				EarthView::World::Core::IntVector modelIDVec = *(EarthView::World::Core::IntVector*) modelIDVec_j;
				const EarthView::World::Core::StringVector &typeCodesVec = *(EarthView::World::Core::StringVector*) typeCodesVec_j;
				const EarthView::World::Spatial3D::Dataset::CEffectInfoVector &effectInfoVec = *(EarthView::World::Spatial3D::Dataset::CEffectInfoVector*) effectInfoVec_j;
				ev_bool bClear = (ev_bool) bClear_j;
				ev_bool bCoverOrInstead = (ev_bool) bCoverOrInstead_j;
				EarthView::World::Spatial3D::ModelIdAndNameMap &idAndNameMap = *(EarthView::World::Spatial3D::ModelIdAndNameMap*) idAndNameMap_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->import(src, dest, listener, modelIDVec, typeCodesVec, effectInfoVec, bClear, bCoverOrInstead, idAndNameMap);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_importModelDBFromLocalFiles_1EVString_1CModelDataSource_1CSceneManager_1CModelPublishToolListener_1ev_1bool_1ev_1bool_1ev_1bool_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring dataFolder_j, jlong pModelDBDataSource_j, jlong mgr_j, jlong listener_j, jboolean bClear_j, jboolean bCoverOrInstead_j, jboolean bCompositorSubmesh_j, jstring userTypeNodecode_j, jboolean isLeftHand_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* dataFolder_ch = (const ev_char*)__env->GetStringUTFChars(dataFolder_j,JNI_FALSE);
				const EVString dataFolder = dataFolder_ch;
				__env->ReleaseStringUTFChars(dataFolder_j, (const char *)dataFolder_ch);
				#else
				const ev_wchar* dataFolder_ch = (const ev_wchar*)__env->GetStringChars(dataFolder_j,JNI_FALSE);
				const EVString dataFolder = dataFolder_ch;
				__env->ReleaseStringChars(dataFolder_j, (const jchar *)dataFolder_ch);
				#endif
				EarthView::World::Spatial3D::Dataset::CModelDataSource *pModelDBDataSource = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pModelDBDataSource_j;
				EarthView::World::Graphic::CSceneManager *mgr = (EarthView::World::Graphic::CSceneManager*) mgr_j;
				EarthView::World::Spatial3D::CModelPublishToolListener *listener = (EarthView::World::Spatial3D::CModelPublishToolListener*) listener_j;
				ev_bool bClear = (ev_bool) bClear_j;
				ev_bool bCoverOrInstead = (ev_bool) bCoverOrInstead_j;
				ev_bool bCompositorSubmesh = (ev_bool) bCompositorSubmesh_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* userTypeNodecode_ch = (const ev_char*)__env->GetStringUTFChars(userTypeNodecode_j,JNI_FALSE);
				const EVString userTypeNodecode = userTypeNodecode_ch;
				__env->ReleaseStringUTFChars(userTypeNodecode_j, (const char *)userTypeNodecode_ch);
				#else
				const ev_wchar* userTypeNodecode_ch = (const ev_wchar*)__env->GetStringChars(userTypeNodecode_j,JNI_FALSE);
				const EVString userTypeNodecode = userTypeNodecode_ch;
				__env->ReleaseStringChars(userTypeNodecode_j, (const jchar *)userTypeNodecode_ch);
				#endif
				ev_bool isLeftHand = (ev_bool) isLeftHand_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->importModelDBFromLocalFiles(dataFolder, pModelDBDataSource, mgr, listener, bClear, bCoverOrInstead, bCompositorSubmesh, userTypeNodecode, isLeftHand);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_importModelDBFromLocalFiles_1EVString_1CModelDataSource_1CSceneManager_1CModelPublishToolListener_1ev_1bool_1ev_1bool_1ev_1bool_1EVString_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring dataFolder_j, jlong pModelDBDataSource_j, jlong mgr_j, jlong listener_j, jboolean bClear_j, jboolean bCoverOrInstead_j, jboolean bCompositorSubmesh_j, jstring userTypeNodecode_j, jboolean isLeftHand_j, jboolean doubleSideLight_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* dataFolder_ch = (const ev_char*)__env->GetStringUTFChars(dataFolder_j,JNI_FALSE);
				const EVString dataFolder = dataFolder_ch;
				__env->ReleaseStringUTFChars(dataFolder_j, (const char *)dataFolder_ch);
				#else
				const ev_wchar* dataFolder_ch = (const ev_wchar*)__env->GetStringChars(dataFolder_j,JNI_FALSE);
				const EVString dataFolder = dataFolder_ch;
				__env->ReleaseStringChars(dataFolder_j, (const jchar *)dataFolder_ch);
				#endif
				EarthView::World::Spatial3D::Dataset::CModelDataSource *pModelDBDataSource = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pModelDBDataSource_j;
				EarthView::World::Graphic::CSceneManager *mgr = (EarthView::World::Graphic::CSceneManager*) mgr_j;
				EarthView::World::Spatial3D::CModelPublishToolListener *listener = (EarthView::World::Spatial3D::CModelPublishToolListener*) listener_j;
				ev_bool bClear = (ev_bool) bClear_j;
				ev_bool bCoverOrInstead = (ev_bool) bCoverOrInstead_j;
				ev_bool bCompositorSubmesh = (ev_bool) bCompositorSubmesh_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* userTypeNodecode_ch = (const ev_char*)__env->GetStringUTFChars(userTypeNodecode_j,JNI_FALSE);
				const EVString userTypeNodecode = userTypeNodecode_ch;
				__env->ReleaseStringUTFChars(userTypeNodecode_j, (const char *)userTypeNodecode_ch);
				#else
				const ev_wchar* userTypeNodecode_ch = (const ev_wchar*)__env->GetStringChars(userTypeNodecode_j,JNI_FALSE);
				const EVString userTypeNodecode = userTypeNodecode_ch;
				__env->ReleaseStringChars(userTypeNodecode_j, (const jchar *)userTypeNodecode_ch);
				#endif
				ev_bool isLeftHand = (ev_bool) isLeftHand_j;
				ev_bool doubleSideLight = (ev_bool) doubleSideLight_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->importModelDBFromLocalFiles(dataFolder, pModelDBDataSource, mgr, listener, bClear, bCoverOrInstead, bCompositorSubmesh, userTypeNodecode, isLeftHand, doubleSideLight);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_importModelDBFromLocalFiles_1EVString_1CModelDataSource_1CSceneManager_1CModelPublishToolListener_1ev_1bool_1ev_1bool_1ev_1bool_1EVString_1ev_1bool_1ModelIdAndNameMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring dataFolder_j, jlong pModelDBDataSource_j, jlong mgr_j, jlong listener_j, jboolean bClear_j, jboolean bCoverOrInstead_j, jboolean bCompositorSubmesh_j, jstring userTypeNodecode_j, jboolean isLeftHand_j, jlong idAndNameMap_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* dataFolder_ch = (const ev_char*)__env->GetStringUTFChars(dataFolder_j,JNI_FALSE);
				const EVString dataFolder = dataFolder_ch;
				__env->ReleaseStringUTFChars(dataFolder_j, (const char *)dataFolder_ch);
				#else
				const ev_wchar* dataFolder_ch = (const ev_wchar*)__env->GetStringChars(dataFolder_j,JNI_FALSE);
				const EVString dataFolder = dataFolder_ch;
				__env->ReleaseStringChars(dataFolder_j, (const jchar *)dataFolder_ch);
				#endif
				EarthView::World::Spatial3D::Dataset::CModelDataSource *pModelDBDataSource = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pModelDBDataSource_j;
				EarthView::World::Graphic::CSceneManager *mgr = (EarthView::World::Graphic::CSceneManager*) mgr_j;
				EarthView::World::Spatial3D::CModelPublishToolListener *listener = (EarthView::World::Spatial3D::CModelPublishToolListener*) listener_j;
				ev_bool bClear = (ev_bool) bClear_j;
				ev_bool bCoverOrInstead = (ev_bool) bCoverOrInstead_j;
				ev_bool bCompositorSubmesh = (ev_bool) bCompositorSubmesh_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* userTypeNodecode_ch = (const ev_char*)__env->GetStringUTFChars(userTypeNodecode_j,JNI_FALSE);
				const EVString userTypeNodecode = userTypeNodecode_ch;
				__env->ReleaseStringUTFChars(userTypeNodecode_j, (const char *)userTypeNodecode_ch);
				#else
				const ev_wchar* userTypeNodecode_ch = (const ev_wchar*)__env->GetStringChars(userTypeNodecode_j,JNI_FALSE);
				const EVString userTypeNodecode = userTypeNodecode_ch;
				__env->ReleaseStringChars(userTypeNodecode_j, (const jchar *)userTypeNodecode_ch);
				#endif
				ev_bool isLeftHand = (ev_bool) isLeftHand_j;
				EarthView::World::Spatial3D::ModelIdAndNameMap &idAndNameMap = *(EarthView::World::Spatial3D::ModelIdAndNameMap*) idAndNameMap_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->importModelDBFromLocalFiles(dataFolder, pModelDBDataSource, mgr, listener, bClear, bCoverOrInstead, bCompositorSubmesh, userTypeNodecode, isLeftHand, idAndNameMap);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_clearModelTemplDataSource_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				pObjectX->clearModelTemplDataSource();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_stopImport_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				pObjectX->stopImport();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_stopModelFileImport_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				pObjectX->stopModelFileImport();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_destroyModelFileImport_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				pObjectX->destroyModelFileImport();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_getRootUserType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				EarthView::World::Spatial3D::Dataset::CUserTypeInfo __values1 = pObjectX->getRootUserType();
				EarthView::World::Spatial3D::Dataset::CUserTypeInfo *returnvalues = new EarthView::World::Spatial3D::Dataset::CUserTypeInfo(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_getEffectRootUserType_1CEffectUserTypeInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rootUserTypeInfo_j)
			{
				EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo &rootUserTypeInfo = *(EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo*) rootUserTypeInfo_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->getEffectRootUserType(rootUserTypeInfo);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_getChildUserType_1EVString_1CUserTypeInfoList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring nodeCode_j, jlong typeList_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* nodeCode_ch = (const ev_char*)__env->GetStringUTFChars(nodeCode_j,JNI_FALSE);
				const EVString nodeCode = nodeCode_ch;
				__env->ReleaseStringUTFChars(nodeCode_j, (const char *)nodeCode_ch);
				#else
				const ev_wchar* nodeCode_ch = (const ev_wchar*)__env->GetStringChars(nodeCode_j,JNI_FALSE);
				const EVString nodeCode = nodeCode_ch;
				__env->ReleaseStringChars(nodeCode_j, (const jchar *)nodeCode_ch);
				#endif
				EarthView::World::Spatial3D::Dataset::CUserTypeInfoList &typeList = *(EarthView::World::Spatial3D::Dataset::CUserTypeInfoList*) typeList_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->getChildUserType(nodeCode, typeList);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_getEffectInfos_1CEffectInfoVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vec_j)
			{
				EarthView::World::Spatial3D::Dataset::CEffectInfoVector &vec = *(EarthView::World::Spatial3D::Dataset::CEffectInfoVector*) vec_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->getEffectInfos(vec);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_getEffectChildUserType_1EVString_1CEffectUserTypeInfoVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring nodeCode_j, jlong typeList_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* nodeCode_ch = (const ev_char*)__env->GetStringUTFChars(nodeCode_j,JNI_FALSE);
				const EVString nodeCode = nodeCode_ch;
				__env->ReleaseStringUTFChars(nodeCode_j, (const char *)nodeCode_ch);
				#else
				const ev_wchar* nodeCode_ch = (const ev_wchar*)__env->GetStringChars(nodeCode_j,JNI_FALSE);
				const EVString nodeCode = nodeCode_ch;
				__env->ReleaseStringChars(nodeCode_j, (const jchar *)nodeCode_ch);
				#endif
				EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector &typeList = *(EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector*) typeList_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->getEffectChildUserType(nodeCode, typeList);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_createUserType_1EVString_1EVString_1IFields(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring parentnodeCode_j, jstring nwType_j, jlong pFilds_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* parentnodeCode_ch = (const ev_char*)__env->GetStringUTFChars(parentnodeCode_j,JNI_FALSE);
				const EVString parentnodeCode = parentnodeCode_ch;
				__env->ReleaseStringUTFChars(parentnodeCode_j, (const char *)parentnodeCode_ch);
				#else
				const ev_wchar* parentnodeCode_ch = (const ev_wchar*)__env->GetStringChars(parentnodeCode_j,JNI_FALSE);
				const EVString parentnodeCode = parentnodeCode_ch;
				__env->ReleaseStringChars(parentnodeCode_j, (const jchar *)parentnodeCode_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* nwType_ch = (const ev_char*)__env->GetStringUTFChars(nwType_j,JNI_FALSE);
				const EVString nwType = nwType_ch;
				__env->ReleaseStringUTFChars(nwType_j, (const char *)nwType_ch);
				#else
				const ev_wchar* nwType_ch = (const ev_wchar*)__env->GetStringChars(nwType_j,JNI_FALSE);
				const EVString nwType = nwType_ch;
				__env->ReleaseStringChars(nwType_j, (const jchar *)nwType_ch);
				#endif
				EarthView::World::Spatial::GeoDataset::IFields *pFilds = (EarthView::World::Spatial::GeoDataset::IFields*) pFilds_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				EarthView::World::Spatial3D::Dataset::CUserTypeInfo __values1 = pObjectX->createUserType(parentnodeCode, nwType, pFilds);
				EarthView::World::Spatial3D::Dataset::CUserTypeInfo *returnvalues = new EarthView::World::Spatial3D::Dataset::CUserTypeInfo(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_deleteUserType_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring nodeCode_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* nodeCode_ch = (const ev_char*)__env->GetStringUTFChars(nodeCode_j,JNI_FALSE);
				const EVString nodeCode = nodeCode_ch;
				__env->ReleaseStringUTFChars(nodeCode_j, (const char *)nodeCode_ch);
				#else
				const ev_wchar* nodeCode_ch = (const ev_wchar*)__env->GetStringChars(nodeCode_j,JNI_FALSE);
				const EVString nodeCode = nodeCode_ch;
				__env->ReleaseStringChars(nodeCode_j, (const jchar *)nodeCode_ch);
				#endif
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->deleteUserType(nodeCode);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_clearUserType_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring nodeCode_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* nodeCode_ch = (const ev_char*)__env->GetStringUTFChars(nodeCode_j,JNI_FALSE);
				const EVString nodeCode = nodeCode_ch;
				__env->ReleaseStringUTFChars(nodeCode_j, (const char *)nodeCode_ch);
				#else
				const ev_wchar* nodeCode_ch = (const ev_wchar*)__env->GetStringChars(nodeCode_j,JNI_FALSE);
				const EVString nodeCode = nodeCode_ch;
				__env->ReleaseStringChars(nodeCode_j, (const jchar *)nodeCode_ch);
				#endif
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->clearUserType(nodeCode);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_deleteMesh_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint MeshID_j)
			{
				ev_int32 MeshID = (ev_int32) MeshID_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->deleteMesh(MeshID);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_findUserType_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring nodeCode_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* nodeCode_ch = (const ev_char*)__env->GetStringUTFChars(nodeCode_j,JNI_FALSE);
				const EVString nodeCode = nodeCode_ch;
				__env->ReleaseStringUTFChars(nodeCode_j, (const char *)nodeCode_ch);
				#else
				const ev_wchar* nodeCode_ch = (const ev_wchar*)__env->GetStringChars(nodeCode_j,JNI_FALSE);
				const EVString nodeCode = nodeCode_ch;
				__env->ReleaseStringChars(nodeCode_j, (const jchar *)nodeCode_ch);
				#endif
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				EarthView::World::Spatial3D::Dataset::CUserTypeInfo __values1 = pObjectX->findUserType(nodeCode);
				EarthView::World::Spatial3D::Dataset::CUserTypeInfo *returnvalues = new EarthView::World::Spatial3D::Dataset::CUserTypeInfo(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_changeType_1EVString_1ev_1uint32_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring nodeCode_j, jlong id_j, jstring nwNodeCode_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* nodeCode_ch = (const ev_char*)__env->GetStringUTFChars(nodeCode_j,JNI_FALSE);
				const EVString nodeCode = nodeCode_ch;
				__env->ReleaseStringUTFChars(nodeCode_j, (const char *)nodeCode_ch);
				#else
				const ev_wchar* nodeCode_ch = (const ev_wchar*)__env->GetStringChars(nodeCode_j,JNI_FALSE);
				const EVString nodeCode = nodeCode_ch;
				__env->ReleaseStringChars(nodeCode_j, (const jchar *)nodeCode_ch);
				#endif
				ev_uint32 id = (ev_uint32) id_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* nwNodeCode_ch = (const ev_char*)__env->GetStringUTFChars(nwNodeCode_j,JNI_FALSE);
				const EVString nwNodeCode = nwNodeCode_ch;
				__env->ReleaseStringUTFChars(nwNodeCode_j, (const char *)nwNodeCode_ch);
				#else
				const ev_wchar* nwNodeCode_ch = (const ev_wchar*)__env->GetStringChars(nwNodeCode_j,JNI_FALSE);
				const EVString nwNodeCode = nwNodeCode_ch;
				__env->ReleaseStringChars(nwNodeCode_j, (const jchar *)nwNodeCode_ch);
				#endif
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->changeType(nodeCode, id, nwNodeCode);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_isExist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring typeName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* typeName_ch = (const ev_char*)__env->GetStringUTFChars(typeName_j,JNI_FALSE);
				const EVString typeName = typeName_ch;
				__env->ReleaseStringUTFChars(typeName_j, (const char *)typeName_ch);
				#else
				const ev_wchar* typeName_ch = (const ev_wchar*)__env->GetStringChars(typeName_j,JNI_FALSE);
				const EVString typeName = typeName_ch;
				__env->ReleaseStringChars(typeName_j, (const jchar *)typeName_ch);
				#endif
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->isExist(typeName);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_getMeshName_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong meshID_j)
			{
				ev_uint32 meshID = (ev_uint32) meshID_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				EVString __values1 = pObjectX->getMeshName(meshID);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_getMeshTemplateName_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong meshID_j)
			{
				ev_uint32 meshID = (ev_uint32) meshID_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				EVString __values1 = pObjectX->getMeshTemplateName(meshID);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_renameType_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong nodecode_j, jlong nwTypename_j)
			{
				EVString &nodecode = *(EVString*) nodecode_j;
				EVString &nwTypename = *(EVString*) nwTypename_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->renameType(nodecode, nwTypename);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_renameMeshName_1ev_1int32_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint meshID_j, jlong nwMeshname_j)
			{
				ev_int32 meshID = (ev_int32) meshID_j;
				EVString &nwMeshname = *(EVString*) nwMeshname_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->renameMeshName(meshID, nwMeshname);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_renameAttachComponent_1ev_1int32_1ev_1int32_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint evid_j, jint mainModelId_j, jstring nwComponentName_j)
			{
				ev_int32 evid = (ev_int32) evid_j;
				ev_int32 mainModelId = (ev_int32) mainModelId_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* nwComponentName_ch = (const ev_char*)__env->GetStringUTFChars(nwComponentName_j,JNI_FALSE);
				const EVString nwComponentName = nwComponentName_ch;
				__env->ReleaseStringUTFChars(nwComponentName_j, (const char *)nwComponentName_ch);
				#else
				const ev_wchar* nwComponentName_ch = (const ev_wchar*)__env->GetStringChars(nwComponentName_j,JNI_FALSE);
				const EVString nwComponentName = nwComponentName_ch;
				__env->ReleaseStringChars(nwComponentName_j, (const jchar *)nwComponentName_ch);
				#endif
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->renameAttachComponent(evid, mainModelId, nwComponentName);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_getObjectIDs_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring nodecode_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* nodecode_ch = (const ev_char*)__env->GetStringUTFChars(nodecode_j,JNI_FALSE);
				const EVString nodecode = nodecode_ch;
				__env->ReleaseStringUTFChars(nodecode_j, (const char *)nodecode_ch);
				#else
				const ev_wchar* nodecode_ch = (const ev_wchar*)__env->GetStringChars(nodecode_j,JNI_FALSE);
				const EVString nodecode = nodecode_ch;
				__env->ReleaseStringChars(nodecode_j, (const jchar *)nodecode_ch);
				#endif
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				EarthView::World::Core::IntVector __values1 = pObjectX->getObjectIDs(nodecode);
				EarthView::World::Core::IntVector *returnvalues = new EarthView::World::Core::IntVector(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_getObjectIDAndNames_1EVString_1ModelIdAndNameMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring nodecode_j, jlong idAndNameMap_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* nodecode_ch = (const ev_char*)__env->GetStringUTFChars(nodecode_j,JNI_FALSE);
				const EVString nodecode = nodecode_ch;
				__env->ReleaseStringUTFChars(nodecode_j, (const char *)nodecode_ch);
				#else
				const ev_wchar* nodecode_ch = (const ev_wchar*)__env->GetStringChars(nodecode_j,JNI_FALSE);
				const EVString nodecode = nodecode_ch;
				__env->ReleaseStringChars(nodecode_j, (const jchar *)nodecode_ch);
				#endif
				EarthView::World::Spatial3D::ModelIdAndNameMap &idAndNameMap = *(EarthView::World::Spatial3D::ModelIdAndNameMap*) idAndNameMap_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				pObjectX->getObjectIDAndNames(nodecode, idAndNameMap);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_getEffectObjectIDs_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring nodecode_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* nodecode_ch = (const ev_char*)__env->GetStringUTFChars(nodecode_j,JNI_FALSE);
				const EVString nodecode = nodecode_ch;
				__env->ReleaseStringUTFChars(nodecode_j, (const char *)nodecode_ch);
				#else
				const ev_wchar* nodecode_ch = (const ev_wchar*)__env->GetStringChars(nodecode_j,JNI_FALSE);
				const EVString nodecode = nodecode_ch;
				__env->ReleaseStringChars(nodecode_j, (const jchar *)nodecode_ch);
				#endif
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				EarthView::World::Core::IntVector __values1 = pObjectX->getEffectObjectIDs(nodecode);
				EarthView::World::Core::IntVector *returnvalues = new EarthView::World::Core::IntVector(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_getEffectObjectIDs_1EVString_1CEffectInfoVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring nodecode_j, jlong vec_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* nodecode_ch = (const ev_char*)__env->GetStringUTFChars(nodecode_j,JNI_FALSE);
				const EVString nodecode = nodecode_ch;
				__env->ReleaseStringUTFChars(nodecode_j, (const char *)nodecode_ch);
				#else
				const ev_wchar* nodecode_ch = (const ev_wchar*)__env->GetStringChars(nodecode_j,JNI_FALSE);
				const EVString nodecode = nodecode_ch;
				__env->ReleaseStringChars(nodecode_j, (const jchar *)nodecode_ch);
				#endif
				EarthView::World::Spatial3D::Dataset::CEffectInfoVector &vec = *(EarthView::World::Spatial3D::Dataset::CEffectInfoVector*) vec_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				pObjectX->getEffectObjectIDs(nodecode, vec);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_getMeshID_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring meshName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* meshName_ch = (const ev_char*)__env->GetStringUTFChars(meshName_j,JNI_FALSE);
				const EVString meshName = meshName_ch;
				__env->ReleaseStringUTFChars(meshName_j, (const char *)meshName_ch);
				#else
				const ev_wchar* meshName_ch = (const ev_wchar*)__env->GetStringChars(meshName_j,JNI_FALSE);
				const EVString meshName = meshName_ch;
				__env->ReleaseStringChars(meshName_j, (const jchar *)meshName_ch);
				#endif
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getMeshID(meshName);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_getModelUserTypeByNodeDesc_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring desc_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* desc_ch = (const ev_char*)__env->GetStringUTFChars(desc_j,JNI_FALSE);
				const EVString desc = desc_ch;
				__env->ReleaseStringUTFChars(desc_j, (const char *)desc_ch);
				#else
				const ev_wchar* desc_ch = (const ev_wchar*)__env->GetStringChars(desc_j,JNI_FALSE);
				const EVString desc = desc_ch;
				__env->ReleaseStringChars(desc_j, (const jchar *)desc_ch);
				#endif
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				EarthView::World::Spatial3D::Dataset::CUserTypeInfo __values1 = pObjectX->getModelUserTypeByNodeDesc(desc);
				EarthView::World::Spatial3D::Dataset::CUserTypeInfo *returnvalues = new EarthView::World::Spatial3D::Dataset::CUserTypeInfo(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_getModelUserTypeByNodeCode_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring nodeCode_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* nodeCode_ch = (const ev_char*)__env->GetStringUTFChars(nodeCode_j,JNI_FALSE);
				const EVString nodeCode = nodeCode_ch;
				__env->ReleaseStringUTFChars(nodeCode_j, (const char *)nodeCode_ch);
				#else
				const ev_wchar* nodeCode_ch = (const ev_wchar*)__env->GetStringChars(nodeCode_j,JNI_FALSE);
				const EVString nodeCode = nodeCode_ch;
				__env->ReleaseStringChars(nodeCode_j, (const jchar *)nodeCode_ch);
				#endif
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				EarthView::World::Spatial3D::Dataset::CUserTypeInfo __values1 = pObjectX->getModelUserTypeByNodeCode(nodeCode);
				EarthView::World::Spatial3D::Dataset::CUserTypeInfo *returnvalues = new EarthView::World::Spatial3D::Dataset::CUserTypeInfo(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_getAttrTypeFields_1EVString_1CFields(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring nodeCode_j, jlong flds_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* nodeCode_ch = (const ev_char*)__env->GetStringUTFChars(nodeCode_j,JNI_FALSE);
				const EVString nodeCode = nodeCode_ch;
				__env->ReleaseStringUTFChars(nodeCode_j, (const char *)nodeCode_ch);
				#else
				const ev_wchar* nodeCode_ch = (const ev_wchar*)__env->GetStringChars(nodeCode_j,JNI_FALSE);
				const EVString nodeCode = nodeCode_ch;
				__env->ReleaseStringChars(nodeCode_j, (const jchar *)nodeCode_ch);
				#endif
				EarthView::World::Spatial::GeoDataset::CFields *flds = (EarthView::World::Spatial::GeoDataset::CFields*) flds_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->getAttrTypeFields(nodeCode, flds);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_getMeshAttr_1EVString_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring nodeCode_j, jlong meshID_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* nodeCode_ch = (const ev_char*)__env->GetStringUTFChars(nodeCode_j,JNI_FALSE);
				const EVString nodeCode = nodeCode_ch;
				__env->ReleaseStringUTFChars(nodeCode_j, (const char *)nodeCode_ch);
				#else
				const ev_wchar* nodeCode_ch = (const ev_wchar*)__env->GetStringChars(nodeCode_j,JNI_FALSE);
				const EVString nodeCode = nodeCode_ch;
				__env->ReleaseStringChars(nodeCode_j, (const jchar *)nodeCode_ch);
				#endif
				ev_uint32 meshID = (ev_uint32) meshID_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				EarthView::World::Spatial::GeoDataset::CPropertySet __values1 = pObjectX->getMeshAttr(nodeCode, meshID);
				EarthView::World::Spatial::GeoDataset::CPropertySet *returnvalues = new EarthView::World::Spatial::GeoDataset::CPropertySet(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_updateAttrTypeFields_1EVString_1CFields(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring typeName_j, jlong flds_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* typeName_ch = (const ev_char*)__env->GetStringUTFChars(typeName_j,JNI_FALSE);
				const EVString typeName = typeName_ch;
				__env->ReleaseStringUTFChars(typeName_j, (const char *)typeName_ch);
				#else
				const ev_wchar* typeName_ch = (const ev_wchar*)__env->GetStringChars(typeName_j,JNI_FALSE);
				const EVString typeName = typeName_ch;
				__env->ReleaseStringChars(typeName_j, (const jchar *)typeName_ch);
				#endif
				EarthView::World::Spatial::GeoDataset::CFields *flds = (EarthView::World::Spatial::GeoDataset::CFields*) flds_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->updateAttrTypeFields(typeName, flds);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_updateMeshAttr_1EVString_1ev_1uint32_1CPropertySet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring nodeCode_j, jlong meshID_j, jlong vals_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* nodeCode_ch = (const ev_char*)__env->GetStringUTFChars(nodeCode_j,JNI_FALSE);
				const EVString nodeCode = nodeCode_ch;
				__env->ReleaseStringUTFChars(nodeCode_j, (const char *)nodeCode_ch);
				#else
				const ev_wchar* nodeCode_ch = (const ev_wchar*)__env->GetStringChars(nodeCode_j,JNI_FALSE);
				const EVString nodeCode = nodeCode_ch;
				__env->ReleaseStringChars(nodeCode_j, (const jchar *)nodeCode_ch);
				#endif
				ev_uint32 meshID = (ev_uint32) meshID_j;
				EarthView::World::Spatial::GeoDataset::CPropertySet *vals = (EarthView::World::Spatial::GeoDataset::CPropertySet*) vals_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->updateMeshAttr(nodeCode, meshID, vals);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_getModelInfoFromDB_1ev_1uint32_1CVector3_1CVector3_1CVector3_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j, jlong quater_j, jlong position_j, jlong scale_j, jlong nodeCode_j)
			{
				ev_uint32 id = (ev_uint32) id_j;
				EarthView::World::Spatial::Math::CVector3 &quater = *(EarthView::World::Spatial::Math::CVector3*) quater_j;
				EarthView::World::Spatial::Math::CVector3 &position = *(EarthView::World::Spatial::Math::CVector3*) position_j;
				EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
				EVString &nodeCode = *(EVString*) nodeCode_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->getModelInfoFromDB(id, quater, position, scale, nodeCode);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_getAttachInfoFromDB_1ev_1uint32_1CVector3_1CVector3_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j, jlong quater_j, jlong position_j, jlong scale_j)
			{
				ev_uint32 id = (ev_uint32) id_j;
				EarthView::World::Spatial::Math::CVector3 &quater = *(EarthView::World::Spatial::Math::CVector3*) quater_j;
				EarthView::World::Spatial::Math::CVector3 &position = *(EarthView::World::Spatial::Math::CVector3*) position_j;
				EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->getAttachInfoFromDB(id, quater, position, scale);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_isExistBindID_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mainID_j, jint BindID_j)
			{
				ev_int32 mainID = (ev_int32) mainID_j;
				ev_int32 BindID = (ev_int32) BindID_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->isExistBindID(mainID, BindID);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_copyModel_1EVString_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring nodeCode_j, jint copyID_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* nodeCode_ch = (const ev_char*)__env->GetStringUTFChars(nodeCode_j,JNI_FALSE);
				const EVString nodeCode = nodeCode_ch;
				__env->ReleaseStringUTFChars(nodeCode_j, (const char *)nodeCode_ch);
				#else
				const ev_wchar* nodeCode_ch = (const ev_wchar*)__env->GetStringChars(nodeCode_j,JNI_FALSE);
				const EVString nodeCode = nodeCode_ch;
				__env->ReleaseStringChars(nodeCode_j, (const jchar *)nodeCode_ch);
				#endif
				ev_int32 copyID = (ev_int32) copyID_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->copyModel(nodeCode, copyID);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_copyModel_1EVString_1ev_1int32_1ev_1int32_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring nodeCode_j, jint copyID_j, jlong newID_j, jlong newName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* nodeCode_ch = (const ev_char*)__env->GetStringUTFChars(nodeCode_j,JNI_FALSE);
				const EVString nodeCode = nodeCode_ch;
				__env->ReleaseStringUTFChars(nodeCode_j, (const char *)nodeCode_ch);
				#else
				const ev_wchar* nodeCode_ch = (const ev_wchar*)__env->GetStringChars(nodeCode_j,JNI_FALSE);
				const EVString nodeCode = nodeCode_ch;
				__env->ReleaseStringChars(nodeCode_j, (const jchar *)nodeCode_ch);
				#endif
				ev_int32 copyID = (ev_int32) copyID_j;
				ev_int32 &newID = *(ev_int32*) newID_j;
				EVString &newName = *(EVString*) newName_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->copyModel(nodeCode, copyID, newID, newName);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_copyModelAndBindInfo_1EVString_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring nodeCode_j, jint copyID_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* nodeCode_ch = (const ev_char*)__env->GetStringUTFChars(nodeCode_j,JNI_FALSE);
				const EVString nodeCode = nodeCode_ch;
				__env->ReleaseStringUTFChars(nodeCode_j, (const char *)nodeCode_ch);
				#else
				const ev_wchar* nodeCode_ch = (const ev_wchar*)__env->GetStringChars(nodeCode_j,JNI_FALSE);
				const EVString nodeCode = nodeCode_ch;
				__env->ReleaseStringChars(nodeCode_j, (const jchar *)nodeCode_ch);
				#endif
				ev_int32 copyID = (ev_int32) copyID_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->copyModelAndBindInfo(nodeCode, copyID);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_copyModelAndBindInfo_1EVString_1ev_1int32_1ev_1int32_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring nodeCode_j, jint copyID_j, jlong newID_j, jlong newName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* nodeCode_ch = (const ev_char*)__env->GetStringUTFChars(nodeCode_j,JNI_FALSE);
				const EVString nodeCode = nodeCode_ch;
				__env->ReleaseStringUTFChars(nodeCode_j, (const char *)nodeCode_ch);
				#else
				const ev_wchar* nodeCode_ch = (const ev_wchar*)__env->GetStringChars(nodeCode_j,JNI_FALSE);
				const EVString nodeCode = nodeCode_ch;
				__env->ReleaseStringChars(nodeCode_j, (const jchar *)nodeCode_ch);
				#endif
				ev_int32 copyID = (ev_int32) copyID_j;
				ev_int32 &newID = *(ev_int32*) newID_j;
				EVString &newName = *(EVString*) newName_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->copyModelAndBindInfo(nodeCode, copyID, newID, newName);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_getAttrTableNames_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				EarthView::World::Core::StringVector __values1 = pObjectX->getAttrTableNames();
				EarthView::World::Core::StringVector *returnvalues = new EarthView::World::Core::StringVector(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_getAttrTableFileds_1EVString_1CFields(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring typeName_j, jlong flds_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* typeName_ch = (const ev_char*)__env->GetStringUTFChars(typeName_j,JNI_FALSE);
				const EVString typeName = typeName_ch;
				__env->ReleaseStringUTFChars(typeName_j, (const char *)typeName_ch);
				#else
				const ev_wchar* typeName_ch = (const ev_wchar*)__env->GetStringChars(typeName_j,JNI_FALSE);
				const EVString typeName = typeName_ch;
				__env->ReleaseStringChars(typeName_j, (const jchar *)typeName_ch);
				#endif
				EarthView::World::Spatial::GeoDataset::CFields *flds = (EarthView::World::Spatial::GeoDataset::CFields*) flds_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				pObjectX->getAttrTableFileds(typeName, flds);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_createModelObject_1ModelType_1CSceneManager_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint modelType_j, jlong pSceneManager_j, jstring meshName_j)
			{
				EarthView::World::Spatial3D::ModelType modelType = (EarthView::World::Spatial3D::ModelType) modelType_j;
				EarthView::World::Graphic::CSceneManager *pSceneManager = (EarthView::World::Graphic::CSceneManager*) pSceneManager_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* meshName_ch = (const ev_char*)__env->GetStringUTFChars(meshName_j,JNI_FALSE);
				const EVString meshName = meshName_ch;
				__env->ReleaseStringUTFChars(meshName_j, (const char *)meshName_ch);
				#else
				const ev_wchar* meshName_ch = (const ev_wchar*)__env->GetStringChars(meshName_j,JNI_FALSE);
				const EVString meshName = meshName_ch;
				__env->ReleaseStringChars(meshName_j, (const jchar *)meshName_ch);
				#endif
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				EarthView::World::Spatial3D::ModelManager::CModelBaseObject* __values1 = pObjectX->createModelObject(modelType, pSceneManager, meshName);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_createModelObject_1ModelType_1CSceneManager_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint modelType_j, jlong pSceneManager_j, jlong meshID_j)
			{
				EarthView::World::Spatial3D::ModelType modelType = (EarthView::World::Spatial3D::ModelType) modelType_j;
				EarthView::World::Graphic::CSceneManager *pSceneManager = (EarthView::World::Graphic::CSceneManager*) pSceneManager_j;
				ev_uint32 meshID = (ev_uint32) meshID_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				EarthView::World::Spatial3D::ModelManager::CModelBaseObject* __values1 = pObjectX->createModelObject(modelType, pSceneManager, meshID);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_destroyModelObject_1CModelBaseObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pModel_j)
			{
				EarthView::World::Spatial3D::ModelManager::CModelBaseObject *pModel = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pModel_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->destroyModelObject(pModel);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_createEffect_1CSceneManager_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSceneManager_j, jstring effectName_j)
			{
				EarthView::World::Graphic::CSceneManager *pSceneManager = (EarthView::World::Graphic::CSceneManager*) pSceneManager_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* effectName_ch = (const ev_char*)__env->GetStringUTFChars(effectName_j,JNI_FALSE);
				const EVString effectName = effectName_ch;
				__env->ReleaseStringUTFChars(effectName_j, (const char *)effectName_ch);
				#else
				const ev_wchar* effectName_ch = (const ev_wchar*)__env->GetStringChars(effectName_j,JNI_FALSE);
				const EVString effectName = effectName_ch;
				__env->ReleaseStringChars(effectName_j, (const jchar *)effectName_ch);
				#endif
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				EarthView::World::Spatial3D::EffectManager::CEffect* __values1 = pObjectX->createEffect(pSceneManager, effectName);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_createEffect_1CSceneManager_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSceneManager_j, jlong effectId_j)
			{
				EarthView::World::Graphic::CSceneManager *pSceneManager = (EarthView::World::Graphic::CSceneManager*) pSceneManager_j;
				ev_uint32 effectId = (ev_uint32) effectId_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				EarthView::World::Spatial3D::EffectManager::CEffect* __values1 = pObjectX->createEffect(pSceneManager, effectId);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_destroyEffect_1CEffect(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong effect_j)
			{
				EarthView::World::Spatial3D::EffectManager::CEffect *effect = (EarthView::World::Spatial3D::EffectManager::CEffect*) effect_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->destroyEffect(effect);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_getBindedInfo_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong meshID_j)
			{
				ev_uint32 meshID = (ev_uint32) meshID_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector __values1 = pObjectX->getBindedInfo(meshID);
				EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector *returnvalues = new EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_getBindedModelInfo_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong meshID_j)
			{
				ev_uint32 meshID = (ev_uint32) meshID_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector __values1 = pObjectX->getBindedModelInfo(meshID);
				EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector *returnvalues = new EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_getBindedEffectInfo_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong meshID_j)
			{
				ev_uint32 meshID = (ev_uint32) meshID_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector __values1 = pObjectX->getBindedEffectInfo(meshID);
				EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector *returnvalues = new EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_getBindedLightInfo_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong meshID_j)
			{
				ev_uint32 meshID = (ev_uint32) meshID_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector __values1 = pObjectX->getBindedLightInfo(meshID);
				EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector *returnvalues = new EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_insertBindedInfo_1ev_1uint32_1CMeshEffectRefInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong meshID_j, jlong info_j)
			{
				ev_uint32 meshID = (ev_uint32) meshID_j;
				EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo *info = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*) info_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->insertBindedInfo(meshID, info);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_deleteBindedInfoByEVID_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evID_j)
			{
				ev_uint32 evID = (ev_uint32) evID_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->deleteBindedInfoByEVID(evID);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_deleteBindedInfo_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong meshID_j)
			{
				ev_uint32 meshID = (ev_uint32) meshID_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->deleteBindedInfo(meshID);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_deleteBindedModelInfo_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong meshID_j)
			{
				ev_uint32 meshID = (ev_uint32) meshID_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->deleteBindedModelInfo(meshID);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_deleteBindedEffectInfo_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong meshID_j)
			{
				ev_uint32 meshID = (ev_uint32) meshID_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->deleteBindedEffectInfo(meshID);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_bindModelAtSubEntity_1CModelBaseObject_1ev_1uint32_1ev_1uint32_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pMainObj_j, jlong bindedMeshID_j, jlong subEntityIndex_j, jlong mat4_j)
			{
				EarthView::World::Spatial3D::ModelManager::CModelBaseObject *pMainObj = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pMainObj_j;
				ev_uint32 bindedMeshID = (ev_uint32) bindedMeshID_j;
				ev_uint32 subEntityIndex = (ev_uint32) subEntityIndex_j;
				const EarthView::World::Spatial::Math::CMatrix4 &mat4 = *(EarthView::World::Spatial::Math::CMatrix4*) mat4_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				EarthView::World::Spatial3D::ModelManager::CModelBaseObject* __values1 = pObjectX->bindModelAtSubEntity(pMainObj, bindedMeshID, subEntityIndex, mat4);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_bindModelAtBone_1CModelBaseObject_1ev_1uint32_1EVString_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pMainObj_j, jlong bindedMeshID_j, jstring boneName_j, jlong mat4_j)
			{
				EarthView::World::Spatial3D::ModelManager::CModelBaseObject *pMainObj = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pMainObj_j;
				ev_uint32 bindedMeshID = (ev_uint32) bindedMeshID_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* boneName_ch = (const ev_char*)__env->GetStringUTFChars(boneName_j,JNI_FALSE);
				const EVString boneName = boneName_ch;
				__env->ReleaseStringUTFChars(boneName_j, (const char *)boneName_ch);
				#else
				const ev_wchar* boneName_ch = (const ev_wchar*)__env->GetStringChars(boneName_j,JNI_FALSE);
				const EVString boneName = boneName_ch;
				__env->ReleaseStringChars(boneName_j, (const jchar *)boneName_ch);
				#endif
				const EarthView::World::Spatial::Math::CMatrix4 &mat4 = *(EarthView::World::Spatial::Math::CMatrix4*) mat4_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				EarthView::World::Spatial3D::ModelManager::CModelBaseObject* __values1 = pObjectX->bindModelAtBone(pMainObj, bindedMeshID, boneName, mat4);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_bindModelAtNode_1CModelBaseObject_1ev_1uint32_1EVString_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pMainObj_j, jlong bindedMeshID_j, jstring nodeName_j, jlong mat4_j)
			{
				EarthView::World::Spatial3D::ModelManager::CModelBaseObject *pMainObj = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pMainObj_j;
				ev_uint32 bindedMeshID = (ev_uint32) bindedMeshID_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* nodeName_ch = (const ev_char*)__env->GetStringUTFChars(nodeName_j,JNI_FALSE);
				const EVString nodeName = nodeName_ch;
				__env->ReleaseStringUTFChars(nodeName_j, (const char *)nodeName_ch);
				#else
				const ev_wchar* nodeName_ch = (const ev_wchar*)__env->GetStringChars(nodeName_j,JNI_FALSE);
				const EVString nodeName = nodeName_ch;
				__env->ReleaseStringChars(nodeName_j, (const jchar *)nodeName_ch);
				#endif
				const EarthView::World::Spatial::Math::CMatrix4 &mat4 = *(EarthView::World::Spatial::Math::CMatrix4*) mat4_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				EarthView::World::Spatial3D::ModelManager::CModelBaseObject* __values1 = pObjectX->bindModelAtNode(pMainObj, bindedMeshID, nodeName, mat4);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_bindEffectAtSubEntity_1CModelBaseObject_1ev_1uint32_1ev_1uint32_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pMainObj_j, jlong bindedEffectID_j, jlong subEntityIndex_j, jlong mat4_j)
			{
				EarthView::World::Spatial3D::ModelManager::CModelBaseObject *pMainObj = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pMainObj_j;
				ev_uint32 bindedEffectID = (ev_uint32) bindedEffectID_j;
				ev_uint32 subEntityIndex = (ev_uint32) subEntityIndex_j;
				const EarthView::World::Spatial::Math::CMatrix4 &mat4 = *(EarthView::World::Spatial::Math::CMatrix4*) mat4_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				EarthView::World::Spatial3D::EffectManager::CEffect* __values1 = pObjectX->bindEffectAtSubEntity(pMainObj, bindedEffectID, subEntityIndex, mat4);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_bindLightAtSubEntity_1CModelBaseObject_1CLight_1ev_1uint32_1ev_1uint32_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pMainObj_j, jlong l_j, jlong bindedLightID_j, jlong subEntityIndex_j, jlong mat4_j)
			{
				EarthView::World::Spatial3D::ModelManager::CModelBaseObject *pMainObj = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pMainObj_j;
				EarthView::World::Graphic::CLight *l = (EarthView::World::Graphic::CLight*) l_j;
				ev_uint32 bindedLightID = (ev_uint32) bindedLightID_j;
				ev_uint32 subEntityIndex = (ev_uint32) subEntityIndex_j;
				const EarthView::World::Spatial::Math::CMatrix4 &mat4 = *(EarthView::World::Spatial::Math::CMatrix4*) mat4_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				ev_int32 __values1 = pObjectX->bindLightAtSubEntity(pMainObj, l, bindedLightID, subEntityIndex, mat4);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_bindEffectAtBone_1CModelBaseObject_1ev_1uint32_1EVString_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pMainObj_j, jlong bindedEffectID_j, jstring boneName_j, jlong mat4_j)
			{
				EarthView::World::Spatial3D::ModelManager::CModelBaseObject *pMainObj = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pMainObj_j;
				ev_uint32 bindedEffectID = (ev_uint32) bindedEffectID_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* boneName_ch = (const ev_char*)__env->GetStringUTFChars(boneName_j,JNI_FALSE);
				const EVString boneName = boneName_ch;
				__env->ReleaseStringUTFChars(boneName_j, (const char *)boneName_ch);
				#else
				const ev_wchar* boneName_ch = (const ev_wchar*)__env->GetStringChars(boneName_j,JNI_FALSE);
				const EVString boneName = boneName_ch;
				__env->ReleaseStringChars(boneName_j, (const jchar *)boneName_ch);
				#endif
				const EarthView::World::Spatial::Math::CMatrix4 &mat4 = *(EarthView::World::Spatial::Math::CMatrix4*) mat4_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				EarthView::World::Spatial3D::EffectManager::CEffect* __values1 = pObjectX->bindEffectAtBone(pMainObj, bindedEffectID, boneName, mat4);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_bindEffectAtNode_1CModelBaseObject_1ev_1uint32_1EVString_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pMainObj_j, jlong bindedEffectID_j, jstring nodeName_j, jlong mat4_j)
			{
				EarthView::World::Spatial3D::ModelManager::CModelBaseObject *pMainObj = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pMainObj_j;
				ev_uint32 bindedEffectID = (ev_uint32) bindedEffectID_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* nodeName_ch = (const ev_char*)__env->GetStringUTFChars(nodeName_j,JNI_FALSE);
				const EVString nodeName = nodeName_ch;
				__env->ReleaseStringUTFChars(nodeName_j, (const char *)nodeName_ch);
				#else
				const ev_wchar* nodeName_ch = (const ev_wchar*)__env->GetStringChars(nodeName_j,JNI_FALSE);
				const EVString nodeName = nodeName_ch;
				__env->ReleaseStringChars(nodeName_j, (const jchar *)nodeName_ch);
				#endif
				const EarthView::World::Spatial::Math::CMatrix4 &mat4 = *(EarthView::World::Spatial::Math::CMatrix4*) mat4_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				EarthView::World::Spatial3D::EffectManager::CEffect* __values1 = pObjectX->bindEffectAtNode(pMainObj, bindedEffectID, nodeName, mat4);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_unBindAndDestoryModel_1CModelBaseObject_1CModelBaseObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pMainObj_j, jlong pBindedObj_j)
			{
				EarthView::World::Spatial3D::ModelManager::CModelBaseObject *pMainObj = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pMainObj_j;
				EarthView::World::Spatial3D::ModelManager::CModelBaseObject *pBindedObj = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pBindedObj_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->unBindAndDestoryModel(pMainObj, pBindedObj);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_unBindAndDestoryEffect_1CModelBaseObject_1CEffect(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pMainObj_j, jlong pBindedObj_j)
			{
				EarthView::World::Spatial3D::ModelManager::CModelBaseObject *pMainObj = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pMainObj_j;
				EarthView::World::Spatial3D::EffectManager::CEffect *pBindedObj = (EarthView::World::Spatial3D::EffectManager::CEffect*) pBindedObj_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->unBindAndDestoryEffect(pMainObj, pBindedObj);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_unBindAndDestoryLight_1CModelBaseObject_1CLight_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pMainObj_j, jlong pBindedObj_j, jlong bindID_j)
			{
				EarthView::World::Spatial3D::ModelManager::CModelBaseObject *pMainObj = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pMainObj_j;
				EarthView::World::Graphic::CLight *pBindedObj = (EarthView::World::Graphic::CLight*) pBindedObj_j;
				ev_uint32 bindID = (ev_uint32) bindID_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->unBindAndDestoryLight(pMainObj, pBindedObj, bindID);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_updateBindedModelPosition_1CModelBaseObject_1CModelBaseObject_1CVector3_1CVector3_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pMainObj_j, jlong pBindedObj_j, jlong pos_j, jlong scale_j, jlong rotate_j)
			{
				EarthView::World::Spatial3D::ModelManager::CModelBaseObject *pMainObj = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pMainObj_j;
				EarthView::World::Spatial3D::ModelManager::CModelBaseObject *pBindedObj = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pBindedObj_j;
				const EarthView::World::Spatial::Math::CVector3 &pos = *(EarthView::World::Spatial::Math::CVector3*) pos_j;
				const EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
				const EarthView::World::Spatial::Math::CVector3 &rotate = *(EarthView::World::Spatial::Math::CVector3*) rotate_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->updateBindedModelPosition(pMainObj, pBindedObj, pos, scale, rotate);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_updateBindedEffectPosition_1CModelBaseObject_1CEffect_1CVector3_1CVector3_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pMainObj_j, jlong pBindedObj_j, jlong pos_j, jlong scale_j, jlong rotate_j)
			{
				EarthView::World::Spatial3D::ModelManager::CModelBaseObject *pMainObj = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pMainObj_j;
				EarthView::World::Spatial3D::EffectManager::CEffect *pBindedObj = (EarthView::World::Spatial3D::EffectManager::CEffect*) pBindedObj_j;
				const EarthView::World::Spatial::Math::CVector3 &pos = *(EarthView::World::Spatial::Math::CVector3*) pos_j;
				const EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
				const EarthView::World::Spatial::Math::CVector3 &rotate = *(EarthView::World::Spatial::Math::CVector3*) rotate_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->updateBindedEffectPosition(pMainObj, pBindedObj, pos, scale, rotate);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_updateBindedLightPosition_1CModelBaseObject_1ev_1uint32_1CVector3_1CVector3_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pMainObj_j, jlong bindID_j, jlong pos_j, jlong scale_j, jlong rotate_j)
			{
				EarthView::World::Spatial3D::ModelManager::CModelBaseObject *pMainObj = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pMainObj_j;
				ev_uint32 bindID = (ev_uint32) bindID_j;
				const EarthView::World::Spatial::Math::CVector3 &pos = *(EarthView::World::Spatial::Math::CVector3*) pos_j;
				const EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
				const EarthView::World::Spatial::Math::CVector3 &rotate = *(EarthView::World::Spatial::Math::CVector3*) rotate_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->updateBindedLightPosition(pMainObj, bindID, pos, scale, rotate);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_updateBindedLightProperty_1ev_1uint32_1CLight(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong bindID_j, jlong l_j)
			{
				ev_uint32 bindID = (ev_uint32) bindID_j;
				EarthView::World::Graphic::CLight *l = (EarthView::World::Graphic::CLight*) l_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->updateBindedLightProperty(bindID, l);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_updateMainModelLocalMatrix_1CModelBaseObject_1CVector3_1CVector3_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pMainObj_j, jlong pos_j, jlong scale_j, jlong rotate_j)
			{
				EarthView::World::Spatial3D::ModelManager::CModelBaseObject *pMainObj = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pMainObj_j;
				const EarthView::World::Spatial::Math::CVector3 &pos = *(EarthView::World::Spatial::Math::CVector3*) pos_j;
				const EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
				const EarthView::World::Spatial::Math::CVector3 &rotate = *(EarthView::World::Spatial::Math::CVector3*) rotate_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->updateMainModelLocalMatrix(pMainObj, pos, scale, rotate);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelEffectDBManager_updateMaterial_1CModelBaseObject_1CMaterialPtr_1StringVector_1StringVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pModel_j, jlong matPtr_j, jlong replacedTextures_j, jlong newTextureFilesPath_j)
			{
				EarthView::World::Spatial3D::ModelManager::CModelBaseObject *pModel = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pModel_j;
				EarthView::World::Graphic::CMaterialPtr &matPtr = *(EarthView::World::Graphic::CMaterialPtr*) matPtr_j;
				const EarthView::World::Core::StringVector &replacedTextures = *(EarthView::World::Core::StringVector*) replacedTextures_j;
				const EarthView::World::Core::StringVector &newTextureFilesPath = *(EarthView::World::Core::StringVector*) newTextureFilesPath_j;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->updateMaterial(pModel, matPtr, replacedTextures, newTextureFilesPath);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
		}
	}
}
