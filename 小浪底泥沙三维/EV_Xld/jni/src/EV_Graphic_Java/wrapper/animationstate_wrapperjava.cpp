/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/animationstate.h"
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationState_00024BoneBlendMask_push_1back_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat t_j)
			{
				const ev_real32 t = (const ev_real32) t_j;
				EarthView::World::Graphic::CAnimationState::BoneBlendMask *pObjectX = (EarthView::World::Graphic::CAnimationState::BoneBlendMask*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationState_00024BoneBlendMask_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimationState::BoneBlendMask *pObjectX = (EarthView::World::Graphic::CAnimationState::BoneBlendMask*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationState_00024BoneBlendMask_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimationState::BoneBlendMask *pObjectX = (EarthView::World::Graphic::CAnimationState::BoneBlendMask*) pObjXXXX;
				ev_real32& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationState_00024BoneBlendMask_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimationState::BoneBlendMask *pObjectX = (EarthView::World::Graphic::CAnimationState::BoneBlendMask*) pObjXXXX;
				ev_real32& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationState_00024BoneBlendMask_insert_1ev_1uint32_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jfloat t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				ev_real32 t = (ev_real32) t_j;
				EarthView::World::Graphic::CAnimationState::BoneBlendMask *pObjectX = (EarthView::World::Graphic::CAnimationState::BoneBlendMask*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationState_00024BoneBlendMask_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::CAnimationState::BoneBlendMask *pObjectX = (EarthView::World::Graphic::CAnimationState::BoneBlendMask*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_AnimationState_00024BoneBlendMask_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimationState::BoneBlendMask *pObjectX = (EarthView::World::Graphic::CAnimationState::BoneBlendMask*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationState_00024BoneBlendMask_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::CAnimationState::BoneBlendMask& pObjectX = *(EarthView::World::Graphic::CAnimationState::BoneBlendMask*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				ev_real32& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationState_00024BoneBlendMask_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CAnimationState::BoneBlendMask *pObjectX = (EarthView::World::Graphic::CAnimationState::BoneBlendMask*) pObjXXXX;
				ev_real32& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationState_00024BoneBlendMask_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimationState::BoneBlendMask *pObjectX = (EarthView::World::Graphic::CAnimationState::BoneBlendMask*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationState_00024BoneBlendMask_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::CAnimationState::BoneBlendMask *pObjectX = (EarthView::World::Graphic::CAnimationState::BoneBlendMask*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationState_00024BoneBlendMask_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CAnimationState::BoneBlendMask *pObjectX = (EarthView::World::Graphic::CAnimationState::BoneBlendMask*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationState_00024BoneBlendMask_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimationState::BoneBlendMask *pObjectX = (EarthView::World::Graphic::CAnimationState::BoneBlendMask*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationState_getAnimationName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimationState *pObjectX = (EarthView::World::Graphic::CAnimationState*) pObjXXXX;
				const EVString& __values1 = pObjectX->getAnimationName();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AnimationState_getTimePosition_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimationState *pObjectX = (EarthView::World::Graphic::CAnimationState*) pObjXXXX;
				Real __values1 = pObjectX->getTimePosition();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationState_setTimePosition_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble timePos_j)
			{
				Real timePos = (Real) timePos_j;
				EarthView::World::Graphic::CAnimationState *pObjectX = (EarthView::World::Graphic::CAnimationState*) pObjXXXX;
				pObjectX->setTimePosition(timePos);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationState_setTimePositionInRange_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble timePos_j)
			{
				Real timePos = (Real) timePos_j;
				EarthView::World::Graphic::CAnimationState *pObjectX = (EarthView::World::Graphic::CAnimationState*) pObjXXXX;
				pObjectX->setTimePositionInRange(timePos);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AnimationState_getLength_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimationState *pObjectX = (EarthView::World::Graphic::CAnimationState*) pObjXXXX;
				Real __values1 = pObjectX->getLength();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationState_setLength_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble len_j)
			{
				Real len = (Real) len_j;
				EarthView::World::Graphic::CAnimationState *pObjectX = (EarthView::World::Graphic::CAnimationState*) pObjXXXX;
				pObjectX->setLength(len);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AnimationState_getWeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimationState *pObjectX = (EarthView::World::Graphic::CAnimationState*) pObjXXXX;
				Real __values1 = pObjectX->getWeight();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationState_setWeight_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble weight_j)
			{
				Real weight = (Real) weight_j;
				EarthView::World::Graphic::CAnimationState *pObjectX = (EarthView::World::Graphic::CAnimationState*) pObjXXXX;
				pObjectX->setWeight(weight);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationState_addTime_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble offset_j)
			{
				Real offset = (Real) offset_j;
				EarthView::World::Graphic::CAnimationState *pObjectX = (EarthView::World::Graphic::CAnimationState*) pObjXXXX;
				pObjectX->addTime(offset);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_AnimationState_hasEnded_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimationState *pObjectX = (EarthView::World::Graphic::CAnimationState*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasEnded();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_AnimationState_getEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimationState *pObjectX = (EarthView::World::Graphic::CAnimationState*) pObjXXXX;
				ev_bool __values1 = pObjectX->getEnabled();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationState_setEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CAnimationState *pObjectX = (EarthView::World::Graphic::CAnimationState*) pObjXXXX;
				pObjectX->setEnabled(enabled);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_AnimationState_OperatorEquals_1CAnimationState(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
			{
				EarthView::World::Graphic::CAnimationState& pObjectX = *(EarthView::World::Graphic::CAnimationState*) pObjXXXX;
				const EarthView::World::Graphic::CAnimationState &rhs = *(EarthView::World::Graphic::CAnimationState*) rhs_j;
				ev_bool __values1 = (pObjectX == rhs);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_AnimationState_OperatorNotEquals_1CAnimationState(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
			{
				EarthView::World::Graphic::CAnimationState& pObjectX = *(EarthView::World::Graphic::CAnimationState*) pObjXXXX;
				const EarthView::World::Graphic::CAnimationState &rhs = *(EarthView::World::Graphic::CAnimationState*) rhs_j;
				ev_bool __values1 = (pObjectX != rhs);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationState_setLoop_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean loop_j)
			{
				ev_bool loop = (ev_bool) loop_j;
				EarthView::World::Graphic::CAnimationState *pObjectX = (EarthView::World::Graphic::CAnimationState*) pObjXXXX;
				pObjectX->setLoop(loop);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_AnimationState_getLoop_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimationState *pObjectX = (EarthView::World::Graphic::CAnimationState*) pObjXXXX;
				ev_bool __values1 = pObjectX->getLoop();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_AnimationState_isFinished_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimationState *pObjectX = (EarthView::World::Graphic::CAnimationState*) pObjXXXX;
				ev_bool __values1 = pObjectX->isFinished();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationState_copyStateFrom_1CAnimationState(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong animState_j)
			{
				const EarthView::World::Graphic::CAnimationState &animState = *(EarthView::World::Graphic::CAnimationState*) animState_j;
				EarthView::World::Graphic::CAnimationState *pObjectX = (EarthView::World::Graphic::CAnimationState*) pObjXXXX;
				pObjectX->copyStateFrom(animState);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationState_getParent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimationState *pObjectX = (EarthView::World::Graphic::CAnimationState*) pObjXXXX;
				EarthView::World::Graphic::CAnimationStateSet* __values1 = pObjectX->getParent();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationState_createBlendMask_1ev_1size_1t_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong blendMaskSizeHint_j, jfloat initialWeight_j)
			{
				ev_size_t blendMaskSizeHint = (ev_size_t) blendMaskSizeHint_j;
				ev_real32 initialWeight = (ev_real32) initialWeight_j;
				EarthView::World::Graphic::CAnimationState *pObjectX = (EarthView::World::Graphic::CAnimationState*) pObjXXXX;
				pObjectX->createBlendMask(blendMaskSizeHint, initialWeight);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationState_createBlendMask_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong blendMaskSizeHint_j)
			{
				ev_size_t blendMaskSizeHint = (ev_size_t) blendMaskSizeHint_j;
				EarthView::World::Graphic::CAnimationState *pObjectX = (EarthView::World::Graphic::CAnimationState*) pObjXXXX;
				pObjectX->createBlendMask(blendMaskSizeHint);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationState_destroyBlendMask_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimationState *pObjectX = (EarthView::World::Graphic::CAnimationState*) pObjXXXX;
				pObjectX->destroyBlendMask();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationState__1setBlendMaskData_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong blendMaskData_j)
			{
				const ev_real32 *blendMaskData = (const ev_real32*) blendMaskData_j;
				EarthView::World::Graphic::CAnimationState *pObjectX = (EarthView::World::Graphic::CAnimationState*) pObjXXXX;
				pObjectX->_setBlendMaskData(blendMaskData);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationState__1setBlendMask_1BoneBlendMask(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong blendMask_j)
			{
				const EarthView::World::Graphic::CAnimationState::BoneBlendMask *blendMask = (const EarthView::World::Graphic::CAnimationState::BoneBlendMask*) blendMask_j;
				EarthView::World::Graphic::CAnimationState *pObjectX = (EarthView::World::Graphic::CAnimationState*) pObjXXXX;
				pObjectX->_setBlendMask(blendMask);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationState_getBlendMask_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimationState *pObjectX = (EarthView::World::Graphic::CAnimationState*) pObjXXXX;
				const EarthView::World::Graphic::CAnimationState::BoneBlendMask* __values1 = pObjectX->getBlendMask();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_AnimationState_hasBlendMask_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimationState *pObjectX = (EarthView::World::Graphic::CAnimationState*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasBlendMask();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationState_setBlendMaskEntry_1ev_1size_1t_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong boneHandle_j, jfloat weight_j)
			{
				ev_size_t boneHandle = (ev_size_t) boneHandle_j;
				ev_real32 weight = (ev_real32) weight_j;
				EarthView::World::Graphic::CAnimationState *pObjectX = (EarthView::World::Graphic::CAnimationState*) pObjXXXX;
				pObjectX->setBlendMaskEntry(boneHandle, weight);
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_AnimationState_getBlendMaskEntry_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong boneHandle_j)
			{
				ev_size_t boneHandle = (ev_size_t) boneHandle_j;
				const 				EarthView::World::Graphic::CAnimationState *pObjectX = (EarthView::World::Graphic::CAnimationState*) pObjXXXX;
				ev_real32 __values1 = pObjectX->getBlendMaskEntry(boneHandle);
				jfloat __values1_j = (jfloat)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationState_setClipToRange_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean clip_j)
			{
				ev_bool clip = (ev_bool) clip_j;
				EarthView::World::Graphic::CAnimationState *pObjectX = (EarthView::World::Graphic::CAnimationState*) pObjXXXX;
				pObjectX->setClipToRange(clip);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_AnimationState_getClipToRange_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimationState *pObjectX = (EarthView::World::Graphic::CAnimationState*) pObjXXXX;
				ev_bool __values1 = pObjectX->getClipToRange();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationState_setRange_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble start_j, jdouble end_j)
			{
				Real start = (Real) start_j;
				Real end = (Real) end_j;
				EarthView::World::Graphic::CAnimationState *pObjectX = (EarthView::World::Graphic::CAnimationState*) pObjXXXX;
				pObjectX->setRange(start, end);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AnimationState_getRangeStart_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimationState *pObjectX = (EarthView::World::Graphic::CAnimationState*) pObjXXXX;
				Real __values1 = pObjectX->getRangeStart();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AnimationState_getRangeEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimationState *pObjectX = (EarthView::World::Graphic::CAnimationState*) pObjXXXX;
				Real __values1 = pObjectX->getRangeEnd();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_AnimationStateMap_push_1EVString_1CAnimationState(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong ref_val_j)
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
				EarthView::World::Graphic::CAnimationState *&ref_val = *(EarthView::World::Graphic::CAnimationState**) ref_val_j;
				EarthView::World::Graphic::AnimationStateMap *pObjectX = (EarthView::World::Graphic::AnimationStateMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, ref_val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_AnimationStateMap_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Graphic::AnimationStateMap *pObjectX = (EarthView::World::Graphic::AnimationStateMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationStateMap_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
			{
				EarthView::World::Graphic::AnimationStateMap& pObjectX = *(EarthView::World::Graphic::AnimationStateMap*) pObjXXXX;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CAnimationState*& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationStateMap_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Graphic::AnimationStateMap *pObjectX = (EarthView::World::Graphic::AnimationStateMap*) pObjXXXX;
				EarthView::World::Graphic::CAnimationState*& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationStateMap_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Graphic::AnimationStateMap *pObjectX = (EarthView::World::Graphic::AnimationStateMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationStateMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::AnimationStateMap *pObjectX = (EarthView::World::Graphic::AnimationStateMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationStateMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::AnimationStateMap *pObjectX = (EarthView::World::Graphic::AnimationStateMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_AnimationStateMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::AnimationStateMap *pObjectX = (EarthView::World::Graphic::AnimationStateMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_AnimationStatePair_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::AnimationStatePair *pObjectX = (EarthView::World::Graphic::AnimationStatePair*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->first;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationStatePair_set_1first_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::AnimationStatePair *pObjectX = (EarthView::World::Graphic::AnimationStatePair*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->first = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationStatePair_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::AnimationStatePair *pObjectX = (EarthView::World::Graphic::AnimationStatePair*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->second);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationStatePair_set_1second_1CAnimationState(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::AnimationStatePair *pObjectX = (EarthView::World::Graphic::AnimationStatePair*)pObjXXXX;
				pObjectX->second = (EarthView::World::Graphic::CAnimationState*) __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_AnimationStateMapIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::AnimationStateMapIterator *pObjectX = (EarthView::World::Graphic::AnimationStateMapIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationStateMapIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::AnimationStateMapIterator *pObjectX = (EarthView::World::Graphic::AnimationStateMapIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_AnimationStateMapIterator_nextKey_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::AnimationStateMapIterator *pObjectX = (EarthView::World::Graphic::AnimationStateMapIterator*) pObjXXXX;
				EVString __values1 = pObjectX->nextKey();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationStateMapIterator_nextValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::AnimationStateMapIterator *pObjectX = (EarthView::World::Graphic::AnimationStateMapIterator*) pObjXXXX;
				EarthView::World::Graphic::CAnimationState* __values1 = pObjectX->nextValue();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationStateMapIterator_nextValuePtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::AnimationStateMapIterator *pObjectX = (EarthView::World::Graphic::AnimationStateMapIterator*) pObjXXXX;
				EarthView::World::Graphic::CAnimationState** __values1 = pObjectX->nextValuePtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationStateMapIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::AnimationStateMapIterator *pObjectX = (EarthView::World::Graphic::AnimationStateMapIterator*) pObjXXXX;
				EarthView::World::Graphic::CAnimationState* __values1 = pObjectX->next();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationStateMapIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::AnimationStateMapIterator *pObjectX = (EarthView::World::Graphic::AnimationStateMapIterator*) pObjXXXX;
				const EarthView::World::Graphic::AnimationStatePair& __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationStateMapIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::AnimationStateMapIterator *pObjectX = (EarthView::World::Graphic::AnimationStateMapIterator*) pObjXXXX;
				const EarthView::World::Graphic::AnimationStatePair& __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationStateMapIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::AnimationStateMapIterator *pObjectX = (EarthView::World::Graphic::AnimationStateMapIterator*) pObjXXXX;
				const EarthView::World::Graphic::AnimationStatePair& __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ConstAnimationStateMapIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::ConstAnimationStateMapIterator *pObjectX = (EarthView::World::Graphic::ConstAnimationStateMapIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConstAnimationStateMapIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ConstAnimationStateMapIterator *pObjectX = (EarthView::World::Graphic::ConstAnimationStateMapIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ConstAnimationStateMapIterator_nextKey_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::ConstAnimationStateMapIterator *pObjectX = (EarthView::World::Graphic::ConstAnimationStateMapIterator*) pObjXXXX;
				EVString __values1 = pObjectX->nextKey();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConstAnimationStateMapIterator_nextValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::ConstAnimationStateMapIterator *pObjectX = (EarthView::World::Graphic::ConstAnimationStateMapIterator*) pObjXXXX;
				EarthView::World::Graphic::CAnimationState* __values1 = pObjectX->nextValue();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConstAnimationStateMapIterator_nextValuePtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ConstAnimationStateMapIterator *pObjectX = (EarthView::World::Graphic::ConstAnimationStateMapIterator*) pObjXXXX;
				EarthView::World::Graphic::CAnimationState** __values1 = pObjectX->nextValuePtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConstAnimationStateMapIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ConstAnimationStateMapIterator *pObjectX = (EarthView::World::Graphic::ConstAnimationStateMapIterator*) pObjXXXX;
				EarthView::World::Graphic::CAnimationState* __values1 = pObjectX->next();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConstAnimationStateMapIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ConstAnimationStateMapIterator *pObjectX = (EarthView::World::Graphic::ConstAnimationStateMapIterator*) pObjXXXX;
				const EarthView::World::Graphic::AnimationStatePair& __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConstAnimationStateMapIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ConstAnimationStateMapIterator *pObjectX = (EarthView::World::Graphic::ConstAnimationStateMapIterator*) pObjXXXX;
				const EarthView::World::Graphic::AnimationStatePair& __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConstAnimationStateMapIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ConstAnimationStateMapIterator *pObjectX = (EarthView::World::Graphic::ConstAnimationStateMapIterator*) pObjXXXX;
				const EarthView::World::Graphic::AnimationStatePair& __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationStateList_push_1back_1CAnimationState(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::CAnimationState *&t = *(EarthView::World::Graphic::CAnimationState**) t_j;
				EarthView::World::Graphic::AnimationStateList *pObjectX = (EarthView::World::Graphic::AnimationStateList*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationStateList_push_1front_1CAnimationState(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::CAnimationState *&t = *(EarthView::World::Graphic::CAnimationState**) t_j;
				EarthView::World::Graphic::AnimationStateList *pObjectX = (EarthView::World::Graphic::AnimationStateList*) pObjXXXX;
				pObjectX->push_front(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationStateList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::AnimationStateList *pObjectX = (EarthView::World::Graphic::AnimationStateList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationStateList_pop_1front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::AnimationStateList *pObjectX = (EarthView::World::Graphic::AnimationStateList*) pObjXXXX;
				pObjectX->pop_front();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationStateList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::AnimationStateList *pObjectX = (EarthView::World::Graphic::AnimationStateList*) pObjXXXX;
				EarthView::World::Graphic::CAnimationState*& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationStateList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::AnimationStateList *pObjectX = (EarthView::World::Graphic::AnimationStateList*) pObjXXXX;
				EarthView::World::Graphic::CAnimationState*& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationStateList_at_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::AnimationStateList *pObjectX = (EarthView::World::Graphic::AnimationStateList*) pObjXXXX;
				EarthView::World::Graphic::CAnimationState*& __values1 = pObjectX->at(pos);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationStateList_insert_1ev_1uint32_1CAnimationState(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::CAnimationState *&t = *(EarthView::World::Graphic::CAnimationState**) t_j;
				EarthView::World::Graphic::AnimationStateList *pObjectX = (EarthView::World::Graphic::AnimationStateList*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationStateList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::AnimationStateList *pObjectX = (EarthView::World::Graphic::AnimationStateList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationStateList_remove_1CAnimationState(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				EarthView::World::Graphic::CAnimationState *&val = *(EarthView::World::Graphic::CAnimationState**) val_j;
				EarthView::World::Graphic::AnimationStateList *pObjectX = (EarthView::World::Graphic::AnimationStateList*) pObjXXXX;
				pObjectX->remove(val);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_AnimationStateList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::AnimationStateList *pObjectX = (EarthView::World::Graphic::AnimationStateList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationStateList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::AnimationStateList *pObjectX = (EarthView::World::Graphic::AnimationStateList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationStateList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::AnimationStateList *pObjectX = (EarthView::World::Graphic::AnimationStateList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationStateList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::AnimationStateList *pObjectX = (EarthView::World::Graphic::AnimationStateList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ConstAnimationStateListIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::ConstAnimationStateListIterator *pObjectX = (EarthView::World::Graphic::ConstAnimationStateListIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConstAnimationStateListIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ConstAnimationStateListIterator *pObjectX = (EarthView::World::Graphic::ConstAnimationStateListIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConstAnimationStateListIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ConstAnimationStateListIterator *pObjectX = (EarthView::World::Graphic::ConstAnimationStateListIterator*) pObjXXXX;
				EarthView::World::Graphic::CAnimationState* __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConstAnimationStateListIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ConstAnimationStateListIterator *pObjectX = (EarthView::World::Graphic::ConstAnimationStateListIterator*) pObjXXXX;
				EarthView::World::Graphic::CAnimationState* __values1 = pObjectX->next();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConstAnimationStateListIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ConstAnimationStateListIterator *pObjectX = (EarthView::World::Graphic::ConstAnimationStateListIterator*) pObjXXXX;
				EarthView::World::Graphic::CAnimationState* __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConstAnimationStateListIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ConstAnimationStateListIterator *pObjectX = (EarthView::World::Graphic::ConstAnimationStateListIterator*) pObjXXXX;
				EarthView::World::Graphic::CAnimationState* __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationStateSet_createAnimationState_1EVString_1Real_1Real_1Real_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring animName_j, jdouble timePos_j, jdouble length_j, jdouble weight_j, jboolean enabled_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* animName_ch = (const ev_char*)__env->GetStringUTFChars(animName_j,JNI_FALSE);
				const EVString animName = animName_ch;
				__env->ReleaseStringUTFChars(animName_j, (const char *)animName_ch);
				#else
				const ev_wchar* animName_ch = (const ev_wchar*)__env->GetStringChars(animName_j,JNI_FALSE);
				const EVString animName = animName_ch;
				__env->ReleaseStringChars(animName_j, (const jchar *)animName_ch);
				#endif
				Real timePos = (Real) timePos_j;
				Real length = (Real) length_j;
				Real weight = (Real) weight_j;
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CAnimationStateSet *pObjectX = (EarthView::World::Graphic::CAnimationStateSet*) pObjXXXX;
				EarthView::World::Graphic::CAnimationState* __values1 = pObjectX->createAnimationState(animName, timePos, length, weight, enabled);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationStateSet_createAnimationState_1EVString_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring animName_j, jdouble timePos_j, jdouble length_j, jdouble weight_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* animName_ch = (const ev_char*)__env->GetStringUTFChars(animName_j,JNI_FALSE);
				const EVString animName = animName_ch;
				__env->ReleaseStringUTFChars(animName_j, (const char *)animName_ch);
				#else
				const ev_wchar* animName_ch = (const ev_wchar*)__env->GetStringChars(animName_j,JNI_FALSE);
				const EVString animName = animName_ch;
				__env->ReleaseStringChars(animName_j, (const jchar *)animName_ch);
				#endif
				Real timePos = (Real) timePos_j;
				Real length = (Real) length_j;
				Real weight = (Real) weight_j;
				EarthView::World::Graphic::CAnimationStateSet *pObjectX = (EarthView::World::Graphic::CAnimationStateSet*) pObjXXXX;
				EarthView::World::Graphic::CAnimationState* __values1 = pObjectX->createAnimationState(animName, timePos, length, weight);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationStateSet_createAnimationState_1EVString_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring animName_j, jdouble timePos_j, jdouble length_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* animName_ch = (const ev_char*)__env->GetStringUTFChars(animName_j,JNI_FALSE);
				const EVString animName = animName_ch;
				__env->ReleaseStringUTFChars(animName_j, (const char *)animName_ch);
				#else
				const ev_wchar* animName_ch = (const ev_wchar*)__env->GetStringChars(animName_j,JNI_FALSE);
				const EVString animName = animName_ch;
				__env->ReleaseStringChars(animName_j, (const jchar *)animName_ch);
				#endif
				Real timePos = (Real) timePos_j;
				Real length = (Real) length_j;
				EarthView::World::Graphic::CAnimationStateSet *pObjectX = (EarthView::World::Graphic::CAnimationStateSet*) pObjXXXX;
				EarthView::World::Graphic::CAnimationState* __values1 = pObjectX->createAnimationState(animName, timePos, length);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationStateSet_getAnimationState_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				const 				EarthView::World::Graphic::CAnimationStateSet *pObjectX = (EarthView::World::Graphic::CAnimationStateSet*) pObjXXXX;
				EarthView::World::Graphic::CAnimationState* __values1 = pObjectX->getAnimationState(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_AnimationStateSet_hasAnimationState_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				const 				EarthView::World::Graphic::CAnimationStateSet *pObjectX = (EarthView::World::Graphic::CAnimationStateSet*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasAnimationState(name);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationStateSet_removeAnimationState_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CAnimationStateSet *pObjectX = (EarthView::World::Graphic::CAnimationStateSet*) pObjXXXX;
				pObjectX->removeAnimationState(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationStateSet_removeAllAnimationStates_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimationStateSet *pObjectX = (EarthView::World::Graphic::CAnimationStateSet*) pObjXXXX;
				pObjectX->removeAllAnimationStates();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationStateSet_getAnimationStateIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimationStateSet *pObjectX = (EarthView::World::Graphic::CAnimationStateSet*) pObjXXXX;
				EarthView::World::Graphic::AnimationStateMapIterator __values1 = pObjectX->getAnimationStateIterator();
				EarthView::World::Graphic::AnimationStateMapIterator *returnvalues = new EarthView::World::Graphic::AnimationStateMapIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationStateSet_copyMatchingState_1CAnimationStateSet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
			{
				EarthView::World::Graphic::CAnimationStateSet *target = (EarthView::World::Graphic::CAnimationStateSet*) target_j;
				const 				EarthView::World::Graphic::CAnimationStateSet *pObjectX = (EarthView::World::Graphic::CAnimationStateSet*) pObjXXXX;
				pObjectX->copyMatchingState(target);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationStateSet__1notifyDirty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimationStateSet *pObjectX = (EarthView::World::Graphic::CAnimationStateSet*) pObjXXXX;
				pObjectX->_notifyDirty();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationStateSet_getDirtyFrameNumber_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimationStateSet *pObjectX = (EarthView::World::Graphic::CAnimationStateSet*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getDirtyFrameNumber();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationStateSet__1notifyAnimationStateEnabled_1CAnimationState_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_target_j, jboolean enabled_j)
			{
				EarthView::World::Graphic::CAnimationState *ref_target = (EarthView::World::Graphic::CAnimationState*) ref_target_j;
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CAnimationStateSet *pObjectX = (EarthView::World::Graphic::CAnimationStateSet*) pObjXXXX;
				pObjectX->_notifyAnimationStateEnabled(ref_target, enabled);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_AnimationStateSet_hasEnabledAnimationState_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimationStateSet *pObjectX = (EarthView::World::Graphic::CAnimationStateSet*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasEnabledAnimationState();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationStateSet_getEnabledAnimationStateIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimationStateSet *pObjectX = (EarthView::World::Graphic::CAnimationStateSet*) pObjXXXX;
				EarthView::World::Graphic::ConstAnimationStateListIterator __values1 = pObjectX->getEnabledAnimationStateIterator();
				EarthView::World::Graphic::ConstAnimationStateListIterator *returnvalues = new EarthView::World::Graphic::ConstAnimationStateListIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationStateSet_getNumOfEnabledAnimationStates_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimationStateSet *pObjectX = (EarthView::World::Graphic::CAnimationStateSet*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getNumOfEnabledAnimationStates();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCAnimationStateControllerValueProxy : public EarthView::World::Graphic::CAnimationStateControllerValue
			{
			 private:
				EarthView::World::Core::ev_string m_getValue_void_callback;
				EarthView::World::Core::ev_string m_setValue_Real_callback;
			public:
				JCAnimationStateControllerValueProxy(EarthView::World::Core::CNameValuePairList *pList) : CAnimationStateControllerValue(pList)
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
				void register_getValue_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getValue_void_callback = __method;
				}
				void register_setValue_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setValue_Real_callback = __method;
				}
				virtual Real getValue() const
				{
					if (this->_gRef != NULL && this->m_getValue_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getValue_void_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAnimationStateControllerValue::getValue();
					}
				}
				virtual void setValue(Real value)
				{
					if (this->_gRef != NULL && this->m_setValue_Real_callback != "" && this->isCustomExtend())
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
						jdouble value_j = (jdouble) value;
						jmethodID __method = __gr->getMethod("setValue_Real_callback");
						__env->CallVoidMethod(__obj, __method , value_j);
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
						return this->CAnimationStateControllerValue::setValue(value);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCAnimationStateControllerValueProxy);
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AnimationStateControllerValue_getValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimationStateControllerValue *pObjectX = (EarthView::World::Graphic::CAnimationStateControllerValue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimationStateControllerValueProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CAnimationStateControllerValue::getValue();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getValue();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationStateControllerValue_register_1getValue_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimationStateControllerValueProxy *pObjectX = (JCAnimationStateControllerValueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getValue_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getValue_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AnimationStateControllerValue_getValue_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimationStateControllerValue *pObjectX = (EarthView::World::Graphic::CAnimationStateControllerValue*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CAnimationStateControllerValue::getValue();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationStateControllerValue_setValue_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
			{
				Real value = (Real) value_j;
				EarthView::World::Graphic::CAnimationStateControllerValue *pObjectX = (EarthView::World::Graphic::CAnimationStateControllerValue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimationStateControllerValueProxy))
				{
					pObjectX->EarthView::World::Graphic::CAnimationStateControllerValue::setValue(value);
				}
				else
				{
					pObjectX->setValue(value);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationStateControllerValue_register_1setValue_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimationStateControllerValueProxy *pObjectX = (JCAnimationStateControllerValueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setValue_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setValue_Real_callback", "(D)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationStateControllerValue_setValue_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
			{
				Real value = (Real) value_j;
				EarthView::World::Graphic::CAnimationStateControllerValue *pObjectX = (EarthView::World::Graphic::CAnimationStateControllerValue*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAnimationStateControllerValue::setValue(value);
			}
		}
	}
}
