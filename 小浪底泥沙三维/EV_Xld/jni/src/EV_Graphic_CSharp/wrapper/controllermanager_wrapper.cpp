/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/controllermanager.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CControllerManager_getSingleton_CControllerManager( )
			{
				EarthView::World::Graphic::CControllerManager& objXXXX = EarthView::World::Graphic::CControllerManager::getSingleton();
				EarthView::World::Graphic::CControllerManager *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CControllerManager*  _stdcall EarthView_World_Graphic_CControllerManager_getSingletonPtr_CControllerManager( )
			{
				EarthView::World::Graphic::CControllerManager* objXXXX = EarthView::World::Graphic::CControllerManager::getSingletonPtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CController*  _stdcall EarthView_World_Graphic_CControllerManager_createController_CController_ControllerValueRealPtr_ControllerValueRealPtr_ControllerFunctionRealPtr(void *pObjectXXXX, _in const void* src, _in const void* dest, _in const void* func )
			{
				EarthView::World::Graphic::CControllerManager* ptrNativeObject = (EarthView::World::Graphic::CControllerManager*) pObjectXXXX;
				EarthView::World::Graphic::CController* objXXXX = ptrNativeObject->createController(*(EarthView::World::Graphic::ControllerValueRealPtr*)src, *(EarthView::World::Graphic::ControllerValueRealPtr*)dest, *(EarthView::World::Graphic::ControllerFunctionRealPtr*)func);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CController*  _stdcall EarthView_World_Graphic_CControllerManager_createFrameTimePassthroughController_CController_ControllerValueRealPtr(void *pObjectXXXX, _in const void* dest )
			{
				EarthView::World::Graphic::CControllerManager* ptrNativeObject = (EarthView::World::Graphic::CControllerManager*) pObjectXXXX;
				EarthView::World::Graphic::CController* objXXXX = ptrNativeObject->createFrameTimePassthroughController(*(EarthView::World::Graphic::ControllerValueRealPtr*)dest);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CControllerManager_clearControllers_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CControllerManager* ptrNativeObject = (EarthView::World::Graphic::CControllerManager*) pObjectXXXX;
				ptrNativeObject->clearControllers();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CControllerManager_updateAllControllers_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CControllerManager* ptrNativeObject = (EarthView::World::Graphic::CControllerManager*) pObjectXXXX;
				ptrNativeObject->updateAllControllers();
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CControllerManager_getFrameTimeSource_ControllerValueRealPtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CControllerManager* ptrNativeObject = (EarthView::World::Graphic::CControllerManager*) pObjectXXXX;
				const EarthView::World::Graphic::ControllerValueRealPtr& objXXXX = ptrNativeObject->getFrameTimeSource();
				const EarthView::World::Graphic::ControllerValueRealPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CControllerManager_getPassthroughControllerFunction_ControllerFunctionRealPtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CControllerManager* ptrNativeObject = (EarthView::World::Graphic::CControllerManager*) pObjectXXXX;
				const EarthView::World::Graphic::ControllerFunctionRealPtr& objXXXX = ptrNativeObject->getPassthroughControllerFunction();
				const EarthView::World::Graphic::ControllerFunctionRealPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CController*  _stdcall EarthView_World_Graphic_CControllerManager_createTextureAnimator_CController_CTextureUnitState_Real(void *pObjectXXXX, _in EarthView::World::Graphic::CTextureUnitState* ref_layer, _in Real sequenceTime )
			{
				EarthView::World::Graphic::CControllerManager* ptrNativeObject = (EarthView::World::Graphic::CControllerManager*) pObjectXXXX;
				EarthView::World::Graphic::CController* objXXXX = ptrNativeObject->createTextureAnimator(ref_layer, sequenceTime);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CController*  _stdcall EarthView_World_Graphic_CControllerManager_createTextureUVScroller_CController_CTextureUnitState_Real(void *pObjectXXXX, _in EarthView::World::Graphic::CTextureUnitState* ref_layer, _in Real speed )
			{
				EarthView::World::Graphic::CControllerManager* ptrNativeObject = (EarthView::World::Graphic::CControllerManager*) pObjectXXXX;
				EarthView::World::Graphic::CController* objXXXX = ptrNativeObject->createTextureUVScroller(ref_layer, speed);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CController*  _stdcall EarthView_World_Graphic_CControllerManager_createTextureUScroller_CController_CTextureUnitState_Real(void *pObjectXXXX, _in EarthView::World::Graphic::CTextureUnitState* ref_layer, _in Real uSpeed )
			{
				EarthView::World::Graphic::CControllerManager* ptrNativeObject = (EarthView::World::Graphic::CControllerManager*) pObjectXXXX;
				EarthView::World::Graphic::CController* objXXXX = ptrNativeObject->createTextureUScroller(ref_layer, uSpeed);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CController*  _stdcall EarthView_World_Graphic_CControllerManager_createTextureVScroller_CController_CTextureUnitState_Real(void *pObjectXXXX, _in EarthView::World::Graphic::CTextureUnitState* ref_layer, _in Real vSpeed )
			{
				EarthView::World::Graphic::CControllerManager* ptrNativeObject = (EarthView::World::Graphic::CControllerManager*) pObjectXXXX;
				EarthView::World::Graphic::CController* objXXXX = ptrNativeObject->createTextureVScroller(ref_layer, vSpeed);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CController*  _stdcall EarthView_World_Graphic_CControllerManager_createTextureRotater_CController_CTextureUnitState_Real(void *pObjectXXXX, _in EarthView::World::Graphic::CTextureUnitState* ref_layer, _in Real speed )
			{
				EarthView::World::Graphic::CControllerManager* ptrNativeObject = (EarthView::World::Graphic::CControllerManager*) pObjectXXXX;
				EarthView::World::Graphic::CController* objXXXX = ptrNativeObject->createTextureRotater(ref_layer, speed);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CController*  _stdcall EarthView_World_Graphic_CControllerManager_createTextureWaveTransformer_CController_CTextureUnitState_TextureTransformType_WaveformType(void *pObjectXXXX, _in EarthView::World::Graphic::CTextureUnitState* ref_layer, _in int ttype, _in int waveType )
			{
				EarthView::World::Graphic::CControllerManager* ptrNativeObject = (EarthView::World::Graphic::CControllerManager*) pObjectXXXX;
				EarthView::World::Graphic::CController* objXXXX = ptrNativeObject->createTextureWaveTransformer(ref_layer, (EarthView::World::Graphic::CTextureUnitState::TextureTransformType)ttype, (EarthView::World::Graphic::WaveformType)waveType);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CController*  _stdcall EarthView_World_Graphic_CControllerManager_createTextureWaveTransformer_CController_CTextureUnitState_TextureTransformType_WaveformType_Real(void *pObjectXXXX, _in EarthView::World::Graphic::CTextureUnitState* ref_layer, _in int ttype, _in int waveType, _in Real base )
			{
				EarthView::World::Graphic::CControllerManager* ptrNativeObject = (EarthView::World::Graphic::CControllerManager*) pObjectXXXX;
				EarthView::World::Graphic::CController* objXXXX = ptrNativeObject->createTextureWaveTransformer(ref_layer, (EarthView::World::Graphic::CTextureUnitState::TextureTransformType)ttype, (EarthView::World::Graphic::WaveformType)waveType, base);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CController*  _stdcall EarthView_World_Graphic_CControllerManager_createTextureWaveTransformer_CController_CTextureUnitState_TextureTransformType_WaveformType_Real_Real(void *pObjectXXXX, _in EarthView::World::Graphic::CTextureUnitState* ref_layer, _in int ttype, _in int waveType, _in Real base, _in Real frequency )
			{
				EarthView::World::Graphic::CControllerManager* ptrNativeObject = (EarthView::World::Graphic::CControllerManager*) pObjectXXXX;
				EarthView::World::Graphic::CController* objXXXX = ptrNativeObject->createTextureWaveTransformer(ref_layer, (EarthView::World::Graphic::CTextureUnitState::TextureTransformType)ttype, (EarthView::World::Graphic::WaveformType)waveType, base, frequency);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CController*  _stdcall EarthView_World_Graphic_CControllerManager_createTextureWaveTransformer_CController_CTextureUnitState_TextureTransformType_WaveformType_Real_Real_Real(void *pObjectXXXX, _in EarthView::World::Graphic::CTextureUnitState* ref_layer, _in int ttype, _in int waveType, _in Real base, _in Real frequency, _in Real phase )
			{
				EarthView::World::Graphic::CControllerManager* ptrNativeObject = (EarthView::World::Graphic::CControllerManager*) pObjectXXXX;
				EarthView::World::Graphic::CController* objXXXX = ptrNativeObject->createTextureWaveTransformer(ref_layer, (EarthView::World::Graphic::CTextureUnitState::TextureTransformType)ttype, (EarthView::World::Graphic::WaveformType)waveType, base, frequency, phase);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CController*  _stdcall EarthView_World_Graphic_CControllerManager_createTextureWaveTransformer_CController_CTextureUnitState_TextureTransformType_WaveformType_Real_Real_Real_Real(void *pObjectXXXX, _in EarthView::World::Graphic::CTextureUnitState* ref_layer, _in int ttype, _in int waveType, _in Real base, _in Real frequency, _in Real phase, _in Real amplitude )
			{
				EarthView::World::Graphic::CControllerManager* ptrNativeObject = (EarthView::World::Graphic::CControllerManager*) pObjectXXXX;
				EarthView::World::Graphic::CController* objXXXX = ptrNativeObject->createTextureWaveTransformer(ref_layer, (EarthView::World::Graphic::CTextureUnitState::TextureTransformType)ttype, (EarthView::World::Graphic::WaveformType)waveType, base, frequency, phase, amplitude);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CController*  _stdcall EarthView_World_Graphic_CControllerManager_createGpuProgramTimerParam_CController_GpuProgramParametersSharedPtr_ev_size_t(void *pObjectXXXX, _in void* params, _in ev_uint64  paramIndex )
			{
				EarthView::World::Graphic::CControllerManager* ptrNativeObject = (EarthView::World::Graphic::CControllerManager*) pObjectXXXX;
				EarthView::World::Graphic::CController* objXXXX = ptrNativeObject->createGpuProgramTimerParam(*(EarthView::World::Graphic::GpuProgramParametersSharedPtr*)params, paramIndex);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CController*  _stdcall EarthView_World_Graphic_CControllerManager_createGpuProgramTimerParam_CController_GpuProgramParametersSharedPtr_ev_size_t_Real(void *pObjectXXXX, _in void* params, _in ev_uint64  paramIndex, _in Real timeFactor )
			{
				EarthView::World::Graphic::CControllerManager* ptrNativeObject = (EarthView::World::Graphic::CControllerManager*) pObjectXXXX;
				EarthView::World::Graphic::CController* objXXXX = ptrNativeObject->createGpuProgramTimerParam(*(EarthView::World::Graphic::GpuProgramParametersSharedPtr*)params, paramIndex, timeFactor);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CControllerManager_destroyController_void_CController(void *pObjectXXXX, _in EarthView::World::Graphic::CController* controller )
			{
				EarthView::World::Graphic::CControllerManager* ptrNativeObject = (EarthView::World::Graphic::CControllerManager*) pObjectXXXX;
				ptrNativeObject->destroyController(controller);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CControllerManager_getTimeFactor_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CControllerManager* ptrNativeObject = (EarthView::World::Graphic::CControllerManager*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getTimeFactor();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CControllerManager_setTimeFactor_void_Real(void *pObjectXXXX, _in Real tf )
			{
				EarthView::World::Graphic::CControllerManager* ptrNativeObject = (EarthView::World::Graphic::CControllerManager*) pObjectXXXX;
				ptrNativeObject->setTimeFactor(tf);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CControllerManager_getFrameDelay_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CControllerManager* ptrNativeObject = (EarthView::World::Graphic::CControllerManager*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getFrameDelay();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CControllerManager_setFrameDelay_void_Real(void *pObjectXXXX, _in Real fd )
			{
				EarthView::World::Graphic::CControllerManager* ptrNativeObject = (EarthView::World::Graphic::CControllerManager*) pObjectXXXX;
				ptrNativeObject->setFrameDelay(fd);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CControllerManager_getElapsedTime_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CControllerManager* ptrNativeObject = (EarthView::World::Graphic::CControllerManager*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getElapsedTime();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CControllerManager_setElapsedTime_void_Real(void *pObjectXXXX, _in Real elapsedTime )
			{
				EarthView::World::Graphic::CControllerManager* ptrNativeObject = (EarthView::World::Graphic::CControllerManager*) pObjectXXXX;
				ptrNativeObject->setElapsedTime(elapsedTime);
			}
		}
	}
}
