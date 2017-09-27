/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/compositiontargetpass.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionTargetPass_CompositionPasses_push_back_void_CCompositionPass(void *pObjectXXXX, _in EarthView::World::Graphic::CCompositionPass*& ref_descript )
			{
				EarthView::World::Graphic::CCompositionTargetPass::CompositionPasses* ptrNativeObject = (EarthView::World::Graphic::CCompositionTargetPass::CompositionPasses*) pObjectXXXX;
				ptrNativeObject->push_back(ref_descript);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionTargetPass_CompositionPasses_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CCompositionTargetPass::CompositionPasses* ptrNativeObject = (EarthView::World::Graphic::CCompositionTargetPass::CompositionPasses*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCompositionTargetPass_CompositionPasses_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositionTargetPass::CompositionPasses* ptrNativeObject = (EarthView::World::Graphic::CCompositionTargetPass::CompositionPasses*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositionPass*  _stdcall EarthView_World_Graphic_CCompositionTargetPass_CompositionPasses_OperatorIndex_CCompositionPass_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CCompositionTargetPass::CompositionPasses& objYYYY = *(EarthView::World::Graphic::CCompositionTargetPass::CompositionPasses*) pObjXXXX;
				EarthView::World::Graphic::CCompositionPass* objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositionPass*  _stdcall EarthView_World_Graphic_CCompositionTargetPass_CompositionPasses_at_CCompositionPass_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CCompositionTargetPass::CompositionPasses* ptrNativeObject = (EarthView::World::Graphic::CCompositionTargetPass::CompositionPasses*) pObjectXXXX;
				EarthView::World::Graphic::CCompositionPass* objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CCompositionTargetPass_CompositionPasses_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositionTargetPass::CompositionPasses* ptrNativeObject = (EarthView::World::Graphic::CCompositionTargetPass::CompositionPasses*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionTargetPass_CompositionPasses_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CCompositionTargetPass::CompositionPasses* ptrNativeObject = (EarthView::World::Graphic::CCompositionTargetPass::CompositionPasses*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionTargetPass_CompositionPasses_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CCompositionTargetPass::CompositionPasses* ptrNativeObject = (EarthView::World::Graphic::CCompositionTargetPass::CompositionPasses*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionTargetPass_CompositionPasses_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTargetPass::CompositionPasses* ptrNativeObject = (EarthView::World::Graphic::CCompositionTargetPass::CompositionPasses*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCompositionTargetPass_CompositionPassIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositionTargetPass::CompositionPassIterator* ptrNativeObject = (EarthView::World::Graphic::CCompositionTargetPass::CompositionPassIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionTargetPass_CompositionPassIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTargetPass::CompositionPassIterator* ptrNativeObject = (EarthView::World::Graphic::CCompositionTargetPass::CompositionPassIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositionPass*  _stdcall EarthView_World_Graphic_CCompositionTargetPass_CompositionPassIterator_getCurrent_CCompositionPass(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTargetPass::CompositionPassIterator* ptrNativeObject = (EarthView::World::Graphic::CCompositionTargetPass::CompositionPassIterator*) pObjectXXXX;
				EarthView::World::Graphic::CCompositionPass* objXXXX = ptrNativeObject->getCurrent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositionPass*  _stdcall EarthView_World_Graphic_CCompositionTargetPass_CompositionPassIterator_next_CCompositionPass(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTargetPass::CompositionPassIterator* ptrNativeObject = (EarthView::World::Graphic::CCompositionTargetPass::CompositionPassIterator*) pObjectXXXX;
				EarthView::World::Graphic::CCompositionPass* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositionPass*  _stdcall EarthView_World_Graphic_CCompositionTargetPass_CompositionPassIterator_getBegin_CCompositionPass(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTargetPass::CompositionPassIterator* ptrNativeObject = (EarthView::World::Graphic::CCompositionTargetPass::CompositionPassIterator*) pObjectXXXX;
				EarthView::World::Graphic::CCompositionPass* objXXXX = ptrNativeObject->getBegin();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositionPass*  _stdcall EarthView_World_Graphic_CCompositionTargetPass_CompositionPassIterator_getEnd_CCompositionPass(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTargetPass::CompositionPassIterator* ptrNativeObject = (EarthView::World::Graphic::CCompositionTargetPass::CompositionPassIterator*) pObjectXXXX;
				EarthView::World::Graphic::CCompositionPass* objXXXX = ptrNativeObject->getEnd();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionTargetPass_setInputMode_void_InputMode(void *pObjectXXXX, _in int mode )
			{
				EarthView::World::Graphic::CCompositionTargetPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionTargetPass*) pObjectXXXX;
				ptrNativeObject->setInputMode((EarthView::World::Graphic::CCompositionTargetPass::InputMode)mode);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CCompositionTargetPass_getInputMode_InputMode(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositionTargetPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionTargetPass*) pObjectXXXX;
				EarthView::World::Graphic::CCompositionTargetPass::InputMode objXXXX = ptrNativeObject->getInputMode();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionTargetPass_setOutputName_void_EVString(void *pObjectXXXX, _in const char* out )
			{
				EarthView::World::Core::ev_string out1 = out;
				EarthView::World::Graphic::CCompositionTargetPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionTargetPass*) pObjectXXXX;
				ptrNativeObject->setOutputName(out1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_CCompositionTargetPass_getOutputName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositionTargetPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionTargetPass*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getOutputName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionTargetPass_setOnlyInitial_void_ev_bool(void *pObjectXXXX, _in ev_bool value )
			{
				EarthView::World::Graphic::CCompositionTargetPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionTargetPass*) pObjectXXXX;
				ptrNativeObject->setOnlyInitial(value);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCompositionTargetPass_getOnlyInitial_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTargetPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionTargetPass*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getOnlyInitial();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionTargetPass_setVisibilityMask_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 mask )
			{
				EarthView::World::Graphic::CCompositionTargetPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionTargetPass*) pObjectXXXX;
				ptrNativeObject->setVisibilityMask(mask);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CCompositionTargetPass_getVisibilityMask_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTargetPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionTargetPass*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getVisibilityMask();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionTargetPass_setMaterialScheme_void_EVString(void *pObjectXXXX, _in const char* schemeName )
			{
				EarthView::World::Core::ev_string schemeName1 = schemeName;
				EarthView::World::Graphic::CCompositionTargetPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionTargetPass*) pObjectXXXX;
				ptrNativeObject->setMaterialScheme(schemeName1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_CCompositionTargetPass_getMaterialScheme_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositionTargetPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionTargetPass*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getMaterialScheme();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionTargetPass_setShadowsEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CCompositionTargetPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionTargetPass*) pObjectXXXX;
				ptrNativeObject->setShadowsEnabled(enabled);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCompositionTargetPass_getShadowsEnabled_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositionTargetPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionTargetPass*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getShadowsEnabled();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionTargetPass_setLodBias_void_ev_real32(void *pObjectXXXX, _in ev_real32 bias )
			{
				EarthView::World::Graphic::CCompositionTargetPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionTargetPass*) pObjectXXXX;
				ptrNativeObject->setLodBias(bias);
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Graphic_CCompositionTargetPass_getLodBias_ev_real32(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTargetPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionTargetPass*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->getLodBias();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositionPass*  _stdcall EarthView_World_Graphic_CCompositionTargetPass_createPass_CCompositionPass(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTargetPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionTargetPass*) pObjectXXXX;
				EarthView::World::Graphic::CCompositionPass* objXXXX = ptrNativeObject->createPass();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionTargetPass_removePass_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  idx )
			{
				EarthView::World::Graphic::CCompositionTargetPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionTargetPass*) pObjectXXXX;
				ptrNativeObject->removePass(idx);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositionPass*  _stdcall EarthView_World_Graphic_CCompositionTargetPass_getPass_CCompositionPass_ev_size_t(void *pObjectXXXX, _in ev_uint64  idx )
			{
				EarthView::World::Graphic::CCompositionTargetPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionTargetPass*) pObjectXXXX;
				EarthView::World::Graphic::CCompositionPass* objXXXX = ptrNativeObject->getPass(idx);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CCompositionTargetPass_getNumPasses_ev_size_t(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTargetPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionTargetPass*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getNumPasses();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionTargetPass_removeAllPasses_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTargetPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionTargetPass*) pObjectXXXX;
				ptrNativeObject->removeAllPasses();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCompositionTargetPass_getPassIterator_CompositionPassIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTargetPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionTargetPass*) pObjectXXXX;
				EarthView::World::Graphic::CCompositionTargetPass::CompositionPassIterator objXXXX = ptrNativeObject->getPassIterator();
				EarthView::World::Graphic::CCompositionTargetPass::CompositionPassIterator *pXXXX = new EarthView::World::Graphic::CCompositionTargetPass::CompositionPassIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositionTechnique*  _stdcall EarthView_World_Graphic_CCompositionTargetPass_getParent_CCompositionTechnique(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTargetPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionTargetPass*) pObjectXXXX;
				EarthView::World::Graphic::CCompositionTechnique* objXXXX = ptrNativeObject->getParent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCompositionTargetPass__isSupported_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTargetPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionTargetPass*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->_isSupported();
				return objXXXX;
			}
		}
	}
}
