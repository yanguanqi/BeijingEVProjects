/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/controllermanager.h"
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ControllerManager_getSingleton_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CControllerManager& __values1 = EarthView::World::Graphic::CControllerManager::getSingleton();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ControllerManager_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CControllerManager* __values1 = EarthView::World::Graphic::CControllerManager::getSingletonPtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ControllerManager_createController_1ControllerValueRealPtr_1ControllerValueRealPtr_1ControllerFunctionRealPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong src_j, jlong dest_j, jlong func_j)
			{
				const EarthView::World::Graphic::ControllerValueRealPtr &src = *(EarthView::World::Graphic::ControllerValueRealPtr*) src_j;
				const EarthView::World::Graphic::ControllerValueRealPtr &dest = *(EarthView::World::Graphic::ControllerValueRealPtr*) dest_j;
				const EarthView::World::Graphic::ControllerFunctionRealPtr &func = *(EarthView::World::Graphic::ControllerFunctionRealPtr*) func_j;
				EarthView::World::Graphic::CControllerManager *pObjectX = (EarthView::World::Graphic::CControllerManager*) pObjXXXX;
				EarthView::World::Graphic::CController* __values1 = pObjectX->createController(src, dest, func);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ControllerManager_createFrameTimePassthroughController_1ControllerValueRealPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dest_j)
			{
				const EarthView::World::Graphic::ControllerValueRealPtr &dest = *(EarthView::World::Graphic::ControllerValueRealPtr*) dest_j;
				EarthView::World::Graphic::CControllerManager *pObjectX = (EarthView::World::Graphic::CControllerManager*) pObjXXXX;
				EarthView::World::Graphic::CController* __values1 = pObjectX->createFrameTimePassthroughController(dest);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ControllerManager_clearControllers_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CControllerManager *pObjectX = (EarthView::World::Graphic::CControllerManager*) pObjXXXX;
				pObjectX->clearControllers();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ControllerManager_updateAllControllers_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CControllerManager *pObjectX = (EarthView::World::Graphic::CControllerManager*) pObjXXXX;
				pObjectX->updateAllControllers();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ControllerManager_getFrameTimeSource_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CControllerManager *pObjectX = (EarthView::World::Graphic::CControllerManager*) pObjXXXX;
				const EarthView::World::Graphic::ControllerValueRealPtr& __values1 = pObjectX->getFrameTimeSource();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ControllerManager_getPassthroughControllerFunction_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CControllerManager *pObjectX = (EarthView::World::Graphic::CControllerManager*) pObjXXXX;
				const EarthView::World::Graphic::ControllerFunctionRealPtr& __values1 = pObjectX->getPassthroughControllerFunction();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ControllerManager_createTextureAnimator_1CTextureUnitState_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_layer_j, jdouble sequenceTime_j)
			{
				EarthView::World::Graphic::CTextureUnitState *ref_layer = (EarthView::World::Graphic::CTextureUnitState*) ref_layer_j;
				Real sequenceTime = (Real) sequenceTime_j;
				EarthView::World::Graphic::CControllerManager *pObjectX = (EarthView::World::Graphic::CControllerManager*) pObjXXXX;
				EarthView::World::Graphic::CController* __values1 = pObjectX->createTextureAnimator(ref_layer, sequenceTime);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ControllerManager_createTextureUVScroller_1CTextureUnitState_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_layer_j, jdouble speed_j)
			{
				EarthView::World::Graphic::CTextureUnitState *ref_layer = (EarthView::World::Graphic::CTextureUnitState*) ref_layer_j;
				Real speed = (Real) speed_j;
				EarthView::World::Graphic::CControllerManager *pObjectX = (EarthView::World::Graphic::CControllerManager*) pObjXXXX;
				EarthView::World::Graphic::CController* __values1 = pObjectX->createTextureUVScroller(ref_layer, speed);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ControllerManager_createTextureUScroller_1CTextureUnitState_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_layer_j, jdouble uSpeed_j)
			{
				EarthView::World::Graphic::CTextureUnitState *ref_layer = (EarthView::World::Graphic::CTextureUnitState*) ref_layer_j;
				Real uSpeed = (Real) uSpeed_j;
				EarthView::World::Graphic::CControllerManager *pObjectX = (EarthView::World::Graphic::CControllerManager*) pObjXXXX;
				EarthView::World::Graphic::CController* __values1 = pObjectX->createTextureUScroller(ref_layer, uSpeed);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ControllerManager_createTextureVScroller_1CTextureUnitState_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_layer_j, jdouble vSpeed_j)
			{
				EarthView::World::Graphic::CTextureUnitState *ref_layer = (EarthView::World::Graphic::CTextureUnitState*) ref_layer_j;
				Real vSpeed = (Real) vSpeed_j;
				EarthView::World::Graphic::CControllerManager *pObjectX = (EarthView::World::Graphic::CControllerManager*) pObjXXXX;
				EarthView::World::Graphic::CController* __values1 = pObjectX->createTextureVScroller(ref_layer, vSpeed);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ControllerManager_createTextureRotater_1CTextureUnitState_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_layer_j, jdouble speed_j)
			{
				EarthView::World::Graphic::CTextureUnitState *ref_layer = (EarthView::World::Graphic::CTextureUnitState*) ref_layer_j;
				Real speed = (Real) speed_j;
				EarthView::World::Graphic::CControllerManager *pObjectX = (EarthView::World::Graphic::CControllerManager*) pObjXXXX;
				EarthView::World::Graphic::CController* __values1 = pObjectX->createTextureRotater(ref_layer, speed);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ControllerManager_createTextureWaveTransformer_1CTextureUnitState_1TextureTransformType_1WaveformType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_layer_j, jint ttype_j, jint waveType_j)
			{
				EarthView::World::Graphic::CTextureUnitState *ref_layer = (EarthView::World::Graphic::CTextureUnitState*) ref_layer_j;
				EarthView::World::Graphic::CTextureUnitState::TextureTransformType ttype = (EarthView::World::Graphic::CTextureUnitState::TextureTransformType) ttype_j;
				EarthView::World::Graphic::WaveformType waveType = (EarthView::World::Graphic::WaveformType) waveType_j;
				EarthView::World::Graphic::CControllerManager *pObjectX = (EarthView::World::Graphic::CControllerManager*) pObjXXXX;
				EarthView::World::Graphic::CController* __values1 = pObjectX->createTextureWaveTransformer(ref_layer, ttype, waveType);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ControllerManager_createTextureWaveTransformer_1CTextureUnitState_1TextureTransformType_1WaveformType_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_layer_j, jint ttype_j, jint waveType_j, jdouble base_j)
			{
				EarthView::World::Graphic::CTextureUnitState *ref_layer = (EarthView::World::Graphic::CTextureUnitState*) ref_layer_j;
				EarthView::World::Graphic::CTextureUnitState::TextureTransformType ttype = (EarthView::World::Graphic::CTextureUnitState::TextureTransformType) ttype_j;
				EarthView::World::Graphic::WaveformType waveType = (EarthView::World::Graphic::WaveformType) waveType_j;
				Real base = (Real) base_j;
				EarthView::World::Graphic::CControllerManager *pObjectX = (EarthView::World::Graphic::CControllerManager*) pObjXXXX;
				EarthView::World::Graphic::CController* __values1 = pObjectX->createTextureWaveTransformer(ref_layer, ttype, waveType, base);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ControllerManager_createTextureWaveTransformer_1CTextureUnitState_1TextureTransformType_1WaveformType_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_layer_j, jint ttype_j, jint waveType_j, jdouble base_j, jdouble frequency_j)
			{
				EarthView::World::Graphic::CTextureUnitState *ref_layer = (EarthView::World::Graphic::CTextureUnitState*) ref_layer_j;
				EarthView::World::Graphic::CTextureUnitState::TextureTransformType ttype = (EarthView::World::Graphic::CTextureUnitState::TextureTransformType) ttype_j;
				EarthView::World::Graphic::WaveformType waveType = (EarthView::World::Graphic::WaveformType) waveType_j;
				Real base = (Real) base_j;
				Real frequency = (Real) frequency_j;
				EarthView::World::Graphic::CControllerManager *pObjectX = (EarthView::World::Graphic::CControllerManager*) pObjXXXX;
				EarthView::World::Graphic::CController* __values1 = pObjectX->createTextureWaveTransformer(ref_layer, ttype, waveType, base, frequency);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ControllerManager_createTextureWaveTransformer_1CTextureUnitState_1TextureTransformType_1WaveformType_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_layer_j, jint ttype_j, jint waveType_j, jdouble base_j, jdouble frequency_j, jdouble phase_j)
			{
				EarthView::World::Graphic::CTextureUnitState *ref_layer = (EarthView::World::Graphic::CTextureUnitState*) ref_layer_j;
				EarthView::World::Graphic::CTextureUnitState::TextureTransformType ttype = (EarthView::World::Graphic::CTextureUnitState::TextureTransformType) ttype_j;
				EarthView::World::Graphic::WaveformType waveType = (EarthView::World::Graphic::WaveformType) waveType_j;
				Real base = (Real) base_j;
				Real frequency = (Real) frequency_j;
				Real phase = (Real) phase_j;
				EarthView::World::Graphic::CControllerManager *pObjectX = (EarthView::World::Graphic::CControllerManager*) pObjXXXX;
				EarthView::World::Graphic::CController* __values1 = pObjectX->createTextureWaveTransformer(ref_layer, ttype, waveType, base, frequency, phase);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ControllerManager_createTextureWaveTransformer_1CTextureUnitState_1TextureTransformType_1WaveformType_1Real_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_layer_j, jint ttype_j, jint waveType_j, jdouble base_j, jdouble frequency_j, jdouble phase_j, jdouble amplitude_j)
			{
				EarthView::World::Graphic::CTextureUnitState *ref_layer = (EarthView::World::Graphic::CTextureUnitState*) ref_layer_j;
				EarthView::World::Graphic::CTextureUnitState::TextureTransformType ttype = (EarthView::World::Graphic::CTextureUnitState::TextureTransformType) ttype_j;
				EarthView::World::Graphic::WaveformType waveType = (EarthView::World::Graphic::WaveformType) waveType_j;
				Real base = (Real) base_j;
				Real frequency = (Real) frequency_j;
				Real phase = (Real) phase_j;
				Real amplitude = (Real) amplitude_j;
				EarthView::World::Graphic::CControllerManager *pObjectX = (EarthView::World::Graphic::CControllerManager*) pObjXXXX;
				EarthView::World::Graphic::CController* __values1 = pObjectX->createTextureWaveTransformer(ref_layer, ttype, waveType, base, frequency, phase, amplitude);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ControllerManager_createGpuProgramTimerParam_1GpuProgramParametersSharedPtr_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong params_j, jlong paramIndex_j)
			{
				EarthView::World::Graphic::GpuProgramParametersSharedPtr params = *(EarthView::World::Graphic::GpuProgramParametersSharedPtr*) params_j;
				ev_size_t paramIndex = (ev_size_t) paramIndex_j;
				EarthView::World::Graphic::CControllerManager *pObjectX = (EarthView::World::Graphic::CControllerManager*) pObjXXXX;
				EarthView::World::Graphic::CController* __values1 = pObjectX->createGpuProgramTimerParam(params, paramIndex);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ControllerManager_createGpuProgramTimerParam_1GpuProgramParametersSharedPtr_1ev_1size_1t_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong params_j, jlong paramIndex_j, jdouble timeFactor_j)
			{
				EarthView::World::Graphic::GpuProgramParametersSharedPtr params = *(EarthView::World::Graphic::GpuProgramParametersSharedPtr*) params_j;
				ev_size_t paramIndex = (ev_size_t) paramIndex_j;
				Real timeFactor = (Real) timeFactor_j;
				EarthView::World::Graphic::CControllerManager *pObjectX = (EarthView::World::Graphic::CControllerManager*) pObjXXXX;
				EarthView::World::Graphic::CController* __values1 = pObjectX->createGpuProgramTimerParam(params, paramIndex, timeFactor);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ControllerManager_destroyController_1CController(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong controller_j)
			{
				EarthView::World::Graphic::CController *controller = (EarthView::World::Graphic::CController*) controller_j;
				EarthView::World::Graphic::CControllerManager *pObjectX = (EarthView::World::Graphic::CControllerManager*) pObjXXXX;
				pObjectX->destroyController(controller);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_ControllerManager_getTimeFactor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CControllerManager *pObjectX = (EarthView::World::Graphic::CControllerManager*) pObjXXXX;
				Real __values1 = pObjectX->getTimeFactor();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ControllerManager_setTimeFactor_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble tf_j)
			{
				Real tf = (Real) tf_j;
				EarthView::World::Graphic::CControllerManager *pObjectX = (EarthView::World::Graphic::CControllerManager*) pObjXXXX;
				pObjectX->setTimeFactor(tf);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_ControllerManager_getFrameDelay_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CControllerManager *pObjectX = (EarthView::World::Graphic::CControllerManager*) pObjXXXX;
				Real __values1 = pObjectX->getFrameDelay();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ControllerManager_setFrameDelay_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble fd_j)
			{
				Real fd = (Real) fd_j;
				EarthView::World::Graphic::CControllerManager *pObjectX = (EarthView::World::Graphic::CControllerManager*) pObjXXXX;
				pObjectX->setFrameDelay(fd);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_ControllerManager_getElapsedTime_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CControllerManager *pObjectX = (EarthView::World::Graphic::CControllerManager*) pObjXXXX;
				Real __values1 = pObjectX->getElapsedTime();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ControllerManager_setElapsedTime_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble elapsedTime_j)
			{
				Real elapsedTime = (Real) elapsedTime_j;
				EarthView::World::Graphic::CControllerManager *pObjectX = (EarthView::World::Graphic::CControllerManager*) pObjXXXX;
				pObjectX->setElapsedTime(elapsedTime);
			}
		}
	}
}
