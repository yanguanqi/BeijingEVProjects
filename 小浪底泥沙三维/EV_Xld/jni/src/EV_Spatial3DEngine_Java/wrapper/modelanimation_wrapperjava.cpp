/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/modelanimation.h"
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
		}
		namespace Spatial3D
		{
			namespace ModelManager
			{
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial3d_modelmanager_TimeRelationShipHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						NONE,
						INSIDE,
						CONTAIN,
						BEGININSIDE,
						ENDINSIDE,
						ALL
					};
					jintArray array = __env->NewIntArray(6);
					__env->SetIntArrayRegion(array, 0, 6, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimationInfomation_00024AnimationTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CModelAnimationInfomation::MODELANIMATION,
						CModelAnimationInfomation::NODEANIMATION,
						CModelAnimationInfomation::UNKNOWN
					};
					jintArray array = __env->NewIntArray(3);
					__env->SetIntArrayRegion(array, 0, 3, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimationInfomation_checkRelationShip_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble startTime_j, jdouble endTime_j)
				{
					ev_real64 startTime = (ev_real64) startTime_j;
					ev_real64 endTime = (ev_real64) endTime_j;
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation*) pObjXXXX;
					EarthView::World::Spatial3D::ModelManager::TimeRelationShip __values1 = pObjectX->checkRelationShip(startTime, endTime);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimationInfomation_get_1manimationState_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->manimationState);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimationInfomation_set_1manimationState_1CAnimationState(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation*)pObjXXXX;
					pObjectX->manimationState = (EarthView::World::Graphic::CAnimationState*) __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimationInfomation_get_1menable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->menable);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimationInfomation_set_1menable_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation*)pObjXXXX;
					pObjectX->menable = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimationInfomation_get_1mpause_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->mpause);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimationInfomation_set_1mpause_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation*)pObjXXXX;
					pObjectX->mpause = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimationInfomation_get_1manimationType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->manimationType);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimationInfomation_set_1manimationType_1AnimationType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation*)pObjXXXX;
					pObjectX->manimationType = (EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation::AnimationType)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimationInfomation_get_1mvalidStartTime_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mvalidStartTime);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimationInfomation_set_1mvalidStartTime_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation*)pObjXXXX;
					pObjectX->mvalidStartTime = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimationInfomation_get_1mvalidEndTime_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mvalidEndTime);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimationInfomation_set_1mvalidEndTime_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation*)pObjXXXX;
					pObjectX->mvalidEndTime = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelNodeAnimation_fromAnimationSeriailzer_1CAnimationSerializer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong animationSeriailzer_j)
				{
					const EarthView::World::Graphic::CAnimationSerializer &animationSeriailzer = *(EarthView::World::Graphic::CAnimationSerializer*) animationSeriailzer_j;
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation*) pObjXXXX;
					pObjectX->fromAnimationSeriailzer(animationSeriailzer);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelNodeAnimation_fromXml_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong xmlElement_j)
				{
					EarthView::World::Core::CXmlElement &xmlElement = *(EarthView::World::Core::CXmlElement*) xmlElement_j;
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation*) pObjXXXX;
					pObjectX->fromXml(xmlElement);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelNodeAnimation_getPostion_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong xmlElement_j)
				{
					EarthView::World::Core::CXmlElement &xmlElement = *(EarthView::World::Core::CXmlElement*) xmlElement_j;
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getPostion(xmlElement);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelNodeAnimation_getQuaternion_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong xmlElement_j)
				{
					EarthView::World::Core::CXmlElement &xmlElement = *(EarthView::World::Core::CXmlElement*) xmlElement_j;
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation*) pObjXXXX;
					EarthView::World::Spatial::Math::CQuaternion __values1 = pObjectX->getQuaternion(xmlElement);
					EarthView::World::Spatial::Math::CQuaternion *returnvalues = new EarthView::World::Spatial::Math::CQuaternion(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelNodeAnimation_getScale_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong xmlElement_j)
				{
					EarthView::World::Core::CXmlElement &xmlElement = *(EarthView::World::Core::CXmlElement*) xmlElement_j;
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getScale(xmlElement);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelNodeAnimation_getAnimationState_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation*) pObjXXXX;
					EarthView::World::Graphic::CAnimationState* __values1 = pObjectX->getAnimationState();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelNodeAnimation_getAnimationName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation*) pObjXXXX;
					const EVString& __values1 = pObjectX->getAnimationName();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelNodeAnimation_getValidStartTime_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getValidStartTime();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelNodeAnimation_getValidEndTime_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getValidEndTime();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelNodeAnimation_getNode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation*) pObjXXXX;
					EarthView::World::Graphic::CNode* __values1 = pObjectX->getNode();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelNodeAnimationList_push_1back_1CModelNodeAnimation(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation *&t = *(EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation**) t_j;
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelNodeAnimationList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelNodeAnimationList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList*) pObjXXXX;
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation*& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelNodeAnimationList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList*) pObjXXXX;
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation*& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelNodeAnimationList_insert_1ev_1uint32_1CModelNodeAnimation(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation *&t = *(EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation**) t_j;
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelNodeAnimationList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelNodeAnimationList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelNodeAnimationList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList& pObjectX = *(EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation*& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelNodeAnimationList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList*) pObjXXXX;
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation*& __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelNodeAnimationList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelNodeAnimationList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelNodeAnimationList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelNodeAnimationList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimationInformationMap_push_1EVString_1CModelAnimationInfomation(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong val_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation *&val = *(EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation**) val_j;
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->push(key, val);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimationInformationMap_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->exist(key);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimationInformationMap_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap& pObjectX = *(EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap*) pObjXXXX;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation*& __values1 = pObjectX[key];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimationInformationMap_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap*) pObjXXXX;
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation*& __values1 = pObjectX->get(key);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimationInformationMap_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap*) pObjXXXX;
					pObjectX->erase(key);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimationInformationMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimationInformationMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimationInformationMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimationInformationMap_getKey_1ev_1int32_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j, jlong key_j)
				{
					ev_int32 index = (ev_int32) index_j;
					EVString &key = *(EVString*) key_j;
					const 					EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->getKey(index, key);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimationInformationMap_getValue_1ev_1int32_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j, jlong succes_j)
				{
					ev_int32 index = (ev_int32) index_j;
					ev_bool &succes = *(ev_bool*) succes_j;
					const 					EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap*) pObjXXXX;
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation* __values1 = pObjectX->getValue(index, succes);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				class JCModelAnimationProxy : public EarthView::World::Spatial3D::ModelManager::CModelAnimation
				{
				 private:
					EarthView::World::Core::ev_string m_frameStarted_FrameEvent_callback;
					EarthView::World::Core::ev_string m_frameRenderingQueued_FrameEvent_callback;
					EarthView::World::Core::ev_string m_frameEnded_FrameEvent_callback;
				public:
					JCModelAnimationProxy(EarthView::World::Core::CNameValuePairList *pList) : CModelAnimation(pList)
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
					void register_frameStarted_FrameEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_frameStarted_FrameEvent_callback = __method;
					}
					void register_frameRenderingQueued_FrameEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_frameRenderingQueued_FrameEvent_callback = __method;
					}
					void register_frameEnded_FrameEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_frameEnded_FrameEvent_callback = __method;
					}
					virtual ev_bool frameRenderingQueued(const EarthView::World::Graphic::FrameEvent& evt)
					{
						if (this->_gRef != NULL && this->m_frameRenderingQueued_FrameEvent_callback != "" && this->isCustomExtend())
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
							jlong evt_j = (jlong) &evt;
							jmethodID __method = __gr->getMethod("frameRenderingQueued_FrameEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , evt_j);
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
							return this->CModelAnimation::frameRenderingQueued(evt);
						}
					}
					virtual ev_bool frameStarted(const EarthView::World::Graphic::FrameEvent& evt)
					{
						if (this->_gRef != NULL && this->m_frameStarted_FrameEvent_callback != "" && this->isCustomExtend())
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
							jlong evt_j = (jlong) &evt;
							jmethodID __method = __gr->getMethod("frameStarted_FrameEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , evt_j);
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
							return this->CModelAnimation::frameStarted(evt);
						}
					}
					virtual ev_bool frameEnded(const EarthView::World::Graphic::FrameEvent& evt)
					{
						if (this->_gRef != NULL && this->m_frameEnded_FrameEvent_callback != "" && this->isCustomExtend())
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
							jlong evt_j = (jlong) &evt;
							jmethodID __method = __gr->getMethod("frameEnded_FrameEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , evt_j);
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
							return this->CModelAnimation::frameEnded(evt);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCModelAnimationProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimation_enableAnimation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjXXXX;
					pObjectX->enableAnimation();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimation_disableAnimation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjXXXX;
					pObjectX->disableAnimation();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimation_addAnimationState_1EVString_1CAnimationState_1AnimationType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring animationName_j, jlong animationState_j, jint animationType_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* animationName_ch = (const ev_char*)__env->GetStringUTFChars(animationName_j,JNI_FALSE);
					const EVString animationName = animationName_ch;
					__env->ReleaseStringUTFChars(animationName_j, (const char *)animationName_ch);
					#else
					const ev_wchar* animationName_ch = (const ev_wchar*)__env->GetStringChars(animationName_j,JNI_FALSE);
					const EVString animationName = animationName_ch;
					__env->ReleaseStringChars(animationName_j, (const jchar *)animationName_ch);
					#endif
					EarthView::World::Graphic::CAnimationState *animationState = (EarthView::World::Graphic::CAnimationState*) animationState_j;
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation::AnimationType animationType = (EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation::AnimationType) animationType_j;
					EarthView::World::Spatial3D::ModelManager::CModelAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjXXXX;
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation* __values1 = pObjectX->addAnimationState(animationName, animationState, animationType);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimation_removeAnimation_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring animationName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* animationName_ch = (const ev_char*)__env->GetStringUTFChars(animationName_j,JNI_FALSE);
					const EVString animationName = animationName_ch;
					__env->ReleaseStringUTFChars(animationName_j, (const char *)animationName_ch);
					#else
					const ev_wchar* animationName_ch = (const ev_wchar*)__env->GetStringChars(animationName_j,JNI_FALSE);
					const EVString animationName = animationName_ch;
					__env->ReleaseStringChars(animationName_j, (const jchar *)animationName_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::CModelAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjXXXX;
					pObjectX->removeAnimation(animationName);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimation_startAllAnimation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjXXXX;
					pObjectX->startAllAnimation();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimation_startAllNodeAnimation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjXXXX;
					pObjectX->startAllNodeAnimation();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimation_stopAllAnimation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjXXXX;
					pObjectX->stopAllAnimation();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimation_stopAllNodeAnimation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjXXXX;
					pObjectX->stopAllNodeAnimation();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimation_stopRangeAnimation_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble timePosition_j)
				{
					Real timePosition = (Real) timePosition_j;
					EarthView::World::Spatial3D::ModelManager::CModelAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjXXXX;
					pObjectX->stopRangeAnimation(timePosition);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimation_pauseAllAnimation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjXXXX;
					pObjectX->pauseAllAnimation();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimation_continueAllAnimation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjXXXX;
					pObjectX->continueAllAnimation();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimation_setAllAnimationLoop_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean loop_j)
				{
					ev_bool loop = (ev_bool) loop_j;
					EarthView::World::Spatial3D::ModelManager::CModelAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjXXXX;
					pObjectX->setAllAnimationLoop(loop);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimation_startAnimation_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring animationName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* animationName_ch = (const ev_char*)__env->GetStringUTFChars(animationName_j,JNI_FALSE);
					const EVString animationName = animationName_ch;
					__env->ReleaseStringUTFChars(animationName_j, (const char *)animationName_ch);
					#else
					const ev_wchar* animationName_ch = (const ev_wchar*)__env->GetStringChars(animationName_j,JNI_FALSE);
					const EVString animationName = animationName_ch;
					__env->ReleaseStringChars(animationName_j, (const jchar *)animationName_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::CModelAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjXXXX;
					pObjectX->startAnimation(animationName);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimation_startAnimation_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring animationName_j, jboolean processChild_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* animationName_ch = (const ev_char*)__env->GetStringUTFChars(animationName_j,JNI_FALSE);
					const EVString animationName = animationName_ch;
					__env->ReleaseStringUTFChars(animationName_j, (const char *)animationName_ch);
					#else
					const ev_wchar* animationName_ch = (const ev_wchar*)__env->GetStringChars(animationName_j,JNI_FALSE);
					const EVString animationName = animationName_ch;
					__env->ReleaseStringChars(animationName_j, (const jchar *)animationName_ch);
					#endif
					ev_bool processChild = (ev_bool) processChild_j;
					EarthView::World::Spatial3D::ModelManager::CModelAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjXXXX;
					pObjectX->startAnimation(animationName, processChild);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimation_stopAnimation_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring animationName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* animationName_ch = (const ev_char*)__env->GetStringUTFChars(animationName_j,JNI_FALSE);
					const EVString animationName = animationName_ch;
					__env->ReleaseStringUTFChars(animationName_j, (const char *)animationName_ch);
					#else
					const ev_wchar* animationName_ch = (const ev_wchar*)__env->GetStringChars(animationName_j,JNI_FALSE);
					const EVString animationName = animationName_ch;
					__env->ReleaseStringChars(animationName_j, (const jchar *)animationName_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::CModelAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjXXXX;
					pObjectX->stopAnimation(animationName);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimation_stopAnimation_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring animationName_j, jboolean processChild_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* animationName_ch = (const ev_char*)__env->GetStringUTFChars(animationName_j,JNI_FALSE);
					const EVString animationName = animationName_ch;
					__env->ReleaseStringUTFChars(animationName_j, (const char *)animationName_ch);
					#else
					const ev_wchar* animationName_ch = (const ev_wchar*)__env->GetStringChars(animationName_j,JNI_FALSE);
					const EVString animationName = animationName_ch;
					__env->ReleaseStringChars(animationName_j, (const jchar *)animationName_ch);
					#endif
					ev_bool processChild = (ev_bool) processChild_j;
					EarthView::World::Spatial3D::ModelManager::CModelAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjXXXX;
					pObjectX->stopAnimation(animationName, processChild);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimation_pauseAnimation_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring animationName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* animationName_ch = (const ev_char*)__env->GetStringUTFChars(animationName_j,JNI_FALSE);
					const EVString animationName = animationName_ch;
					__env->ReleaseStringUTFChars(animationName_j, (const char *)animationName_ch);
					#else
					const ev_wchar* animationName_ch = (const ev_wchar*)__env->GetStringChars(animationName_j,JNI_FALSE);
					const EVString animationName = animationName_ch;
					__env->ReleaseStringChars(animationName_j, (const jchar *)animationName_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::CModelAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjXXXX;
					pObjectX->pauseAnimation(animationName);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimation_pauseAnimation_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring animationName_j, jboolean processChild_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* animationName_ch = (const ev_char*)__env->GetStringUTFChars(animationName_j,JNI_FALSE);
					const EVString animationName = animationName_ch;
					__env->ReleaseStringUTFChars(animationName_j, (const char *)animationName_ch);
					#else
					const ev_wchar* animationName_ch = (const ev_wchar*)__env->GetStringChars(animationName_j,JNI_FALSE);
					const EVString animationName = animationName_ch;
					__env->ReleaseStringChars(animationName_j, (const jchar *)animationName_ch);
					#endif
					ev_bool processChild = (ev_bool) processChild_j;
					EarthView::World::Spatial3D::ModelManager::CModelAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjXXXX;
					pObjectX->pauseAnimation(animationName, processChild);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimation_continueAnimation_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring animationName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* animationName_ch = (const ev_char*)__env->GetStringUTFChars(animationName_j,JNI_FALSE);
					const EVString animationName = animationName_ch;
					__env->ReleaseStringUTFChars(animationName_j, (const char *)animationName_ch);
					#else
					const ev_wchar* animationName_ch = (const ev_wchar*)__env->GetStringChars(animationName_j,JNI_FALSE);
					const EVString animationName = animationName_ch;
					__env->ReleaseStringChars(animationName_j, (const jchar *)animationName_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::CModelAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjXXXX;
					pObjectX->continueAnimation(animationName);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimation_continueAnimation_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring animationName_j, jboolean processChild_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* animationName_ch = (const ev_char*)__env->GetStringUTFChars(animationName_j,JNI_FALSE);
					const EVString animationName = animationName_ch;
					__env->ReleaseStringUTFChars(animationName_j, (const char *)animationName_ch);
					#else
					const ev_wchar* animationName_ch = (const ev_wchar*)__env->GetStringChars(animationName_j,JNI_FALSE);
					const EVString animationName = animationName_ch;
					__env->ReleaseStringChars(animationName_j, (const jchar *)animationName_ch);
					#endif
					ev_bool processChild = (ev_bool) processChild_j;
					EarthView::World::Spatial3D::ModelManager::CModelAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjXXXX;
					pObjectX->continueAnimation(animationName, processChild);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimation_setAnimationLoop_1EVString_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring animationName_j, jboolean loop_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* animationName_ch = (const ev_char*)__env->GetStringUTFChars(animationName_j,JNI_FALSE);
					const EVString animationName = animationName_ch;
					__env->ReleaseStringUTFChars(animationName_j, (const char *)animationName_ch);
					#else
					const ev_wchar* animationName_ch = (const ev_wchar*)__env->GetStringChars(animationName_j,JNI_FALSE);
					const EVString animationName = animationName_ch;
					__env->ReleaseStringChars(animationName_j, (const jchar *)animationName_ch);
					#endif
					bool loop = (bool) loop_j;
					EarthView::World::Spatial3D::ModelManager::CModelAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjXXXX;
					pObjectX->setAnimationLoop(animationName, loop);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimation_setAnimationLoop_1EVString_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring animationName_j, jboolean loop_j, jboolean processChild_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* animationName_ch = (const ev_char*)__env->GetStringUTFChars(animationName_j,JNI_FALSE);
					const EVString animationName = animationName_ch;
					__env->ReleaseStringUTFChars(animationName_j, (const char *)animationName_ch);
					#else
					const ev_wchar* animationName_ch = (const ev_wchar*)__env->GetStringChars(animationName_j,JNI_FALSE);
					const EVString animationName = animationName_ch;
					__env->ReleaseStringChars(animationName_j, (const jchar *)animationName_ch);
					#endif
					bool loop = (bool) loop_j;
					ev_bool processChild = (ev_bool) processChild_j;
					EarthView::World::Spatial3D::ModelManager::CModelAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjXXXX;
					pObjectX->setAnimationLoop(animationName, loop, processChild);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimation_frameRenderingQueued_1FrameEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
				{
					const EarthView::World::Graphic::FrameEvent &evt = *(EarthView::World::Graphic::FrameEvent*) evt_j;
					EarthView::World::Spatial3D::ModelManager::CModelAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCModelAnimationProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CModelAnimation::frameRenderingQueued(evt);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->frameRenderingQueued(evt);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimation_register_1frameRenderingQueued_1FrameEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCModelAnimationProxy *pObjectX = (JCModelAnimationProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_frameRenderingQueued_FrameEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"frameRenderingQueued_FrameEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimation_frameRenderingQueued_1FrameEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
				{
					const EarthView::World::Graphic::FrameEvent &evt = *(EarthView::World::Graphic::FrameEvent*) evt_j;
					EarthView::World::Spatial3D::ModelManager::CModelAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CModelAnimation::frameRenderingQueued(evt);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimation_readNodeAnimation_1CSceneManager_1CNode_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sceneManager_j, jlong node_j, jlong xmlElement_j)
				{
					EarthView::World::Graphic::CSceneManager *sceneManager = (EarthView::World::Graphic::CSceneManager*) sceneManager_j;
					EarthView::World::Graphic::CNode *node = (EarthView::World::Graphic::CNode*) node_j;
					EarthView::World::Core::CXmlElement xmlElement = *(EarthView::World::Core::CXmlElement*) xmlElement_j;
					EarthView::World::Spatial3D::ModelManager::CModelAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjXXXX;
					pObjectX->readNodeAnimation(sceneManager, node, xmlElement);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimation_readNodeAnimation_1CSceneManager_1CNode_1CAnimationSerializer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sceneManager_j, jlong node_j, jlong animation_j)
				{
					EarthView::World::Graphic::CSceneManager *sceneManager = (EarthView::World::Graphic::CSceneManager*) sceneManager_j;
					EarthView::World::Graphic::CNode *node = (EarthView::World::Graphic::CNode*) node_j;
					const EarthView::World::Graphic::CAnimationSerializer &animation = *(EarthView::World::Graphic::CAnimationSerializer*) animation_j;
					EarthView::World::Spatial3D::ModelManager::CModelAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjXXXX;
					pObjectX->readNodeAnimation(sceneManager, node, animation);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimation_getModelAnimationInformationMap_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjXXXX;
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap __values1 = pObjectX->getModelAnimationInformationMap();
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap *returnvalues = new EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimation_setClipToRange_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean clip_j)
				{
					ev_bool clip = (ev_bool) clip_j;
					EarthView::World::Spatial3D::ModelManager::CModelAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjXXXX;
					pObjectX->setClipToRange(clip);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimation_getClipToRange_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::CModelAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjXXXX;
					ev_bool __values1 = pObjectX->getClipToRange();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimation_setRange_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble start_j, jdouble end_j)
				{
					Real start = (Real) start_j;
					Real end = (Real) end_j;
					EarthView::World::Spatial3D::ModelManager::CModelAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjXXXX;
					pObjectX->setRange(start, end);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimation_setRangeStart_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble start_j)
				{
					Real start = (Real) start_j;
					EarthView::World::Spatial3D::ModelManager::CModelAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjXXXX;
					pObjectX->setRangeStart(start);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimation_setRangeEnd_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble end_j)
				{
					Real end = (Real) end_j;
					EarthView::World::Spatial3D::ModelManager::CModelAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjXXXX;
					pObjectX->setRangeEnd(end);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimation_getRangeStart_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::CModelAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjXXXX;
					Real __values1 = pObjectX->getRangeStart();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimation_getRangeEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::CModelAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjXXXX;
					Real __values1 = pObjectX->getRangeEnd();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimation_setFrameTagList_1CFrameTagList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong frameTagList_j)
				{
					EarthView::World::Graphic::CFrameTagList &frameTagList = *(EarthView::World::Graphic::CFrameTagList*) frameTagList_j;
					EarthView::World::Spatial3D::ModelManager::CModelAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjXXXX;
					pObjectX->setFrameTagList(frameTagList);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimation_getFrameTagList_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::CModelAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjXXXX;
					EarthView::World::Graphic::CFrameTagList __values1 = pObjectX->getFrameTagList();
					EarthView::World::Graphic::CFrameTagList *returnvalues = new EarthView::World::Graphic::CFrameTagList(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimation_setNodeAnimtionLength_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble timeLength_j)
				{
					Real timeLength = (Real) timeLength_j;
					EarthView::World::Spatial3D::ModelManager::CModelAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjXXXX;
					pObjectX->setNodeAnimtionLength(timeLength);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimation_getNodeAnimtionLength_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::CModelAnimation *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjXXXX;
					Real __values1 = pObjectX->getNodeAnimtionLength();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimation_register_1frameStarted_1FrameEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCModelAnimationProxy *pObjectX = (JCModelAnimationProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_frameStarted_FrameEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"frameStarted_FrameEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelAnimation_register_1frameEnded_1FrameEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCModelAnimationProxy *pObjectX = (JCModelAnimationProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_frameEnded_FrameEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"frameEnded_FrameEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
			}
		}
	}
}
