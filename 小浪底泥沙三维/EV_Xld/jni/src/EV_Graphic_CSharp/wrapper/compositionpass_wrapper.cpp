/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/compositionpass.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionPass_setType_void_PassType(void *pObjectXXXX, _in int type )
			{
				EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				ptrNativeObject->setType((EarthView::World::Graphic::CCompositionPass::PassType)type);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CCompositionPass_getType_PassType(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				EarthView::World::Graphic::CCompositionPass::PassType objXXXX = ptrNativeObject->getType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionPass_setIdentifier_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
			{
				EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				ptrNativeObject->setIdentifier(id);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CCompositionPass_getIdentifier_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getIdentifier();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionPass_setMaterial_void_CMaterialPtr(void *pObjectXXXX, _in const void* mat )
			{
				EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				ptrNativeObject->setMaterial(*(EarthView::World::Graphic::CMaterialPtr*)mat);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionPass_setMaterialName_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				ptrNativeObject->setMaterialName(name1);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CCompositionPass_getMaterial_CMaterialPtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				const EarthView::World::Graphic::CMaterialPtr& objXXXX = ptrNativeObject->getMaterial();
				const EarthView::World::Graphic::CMaterialPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionPass_setFirstRenderQueue_void_ev_uint8(void *pObjectXXXX, _in ev_uint8 id )
			{
				EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				ptrNativeObject->setFirstRenderQueue(id);
			}
			extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall EarthView_World_Graphic_CCompositionPass_getFirstRenderQueue_ev_uint8(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				ev_uint8 objXXXX = ptrNativeObject->getFirstRenderQueue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionPass_setLastRenderQueue_void_ev_uint8(void *pObjectXXXX, _in ev_uint8 id )
			{
				EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				ptrNativeObject->setLastRenderQueue(id);
			}
			extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall EarthView_World_Graphic_CCompositionPass_getLastRenderQueue_ev_uint8(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				ev_uint8 objXXXX = ptrNativeObject->getLastRenderQueue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionPass_setMaterialScheme_void_EVString(void *pObjectXXXX, _in const char* schemeName )
			{
				EarthView::World::Core::ev_string schemeName1 = schemeName;
				EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				ptrNativeObject->setMaterialScheme(schemeName1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_CCompositionPass_getMaterialScheme_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getMaterialScheme();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionPass_setClearBuffers_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 val )
			{
				EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				ptrNativeObject->setClearBuffers(val);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CCompositionPass_getClearBuffers_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getClearBuffers();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionPass_setClearColour_void_CColourValue(void *pObjectXXXX, _in void* val )
			{
				EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				ptrNativeObject->setClearColour(*(EarthView::World::Graphic::CColourValue*)val);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CCompositionPass_getClearColour_CColourValue(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				const EarthView::World::Graphic::CColourValue& objXXXX = ptrNativeObject->getClearColour();
				const EarthView::World::Graphic::CColourValue *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionPass_setClearDepth_void_Real(void *pObjectXXXX, _in Real depth )
			{
				EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				ptrNativeObject->setClearDepth(depth);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CCompositionPass_getClearDepth_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getClearDepth();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionPass_setClearStencil_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 value )
			{
				EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				ptrNativeObject->setClearStencil(value);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CCompositionPass_getClearStencil_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getClearStencil();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionPass_setStencilCheck_void_ev_bool(void *pObjectXXXX, _in ev_bool value )
			{
				EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				ptrNativeObject->setStencilCheck(value);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCompositionPass_getStencilCheck_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getStencilCheck();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionPass_setStencilFunc_void_CompareFunction(void *pObjectXXXX, _in int value )
			{
				EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				ptrNativeObject->setStencilFunc((EarthView::World::Graphic::CompareFunction)value);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CCompositionPass_getStencilFunc_CompareFunction(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				EarthView::World::Graphic::CompareFunction objXXXX = ptrNativeObject->getStencilFunc();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionPass_setStencilRefValue_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 value )
			{
				EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				ptrNativeObject->setStencilRefValue(value);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CCompositionPass_getStencilRefValue_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getStencilRefValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionPass_setStencilMask_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 value )
			{
				EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				ptrNativeObject->setStencilMask(value);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CCompositionPass_getStencilMask_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getStencilMask();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionPass_setStencilFailOp_void_StencilOperation(void *pObjectXXXX, _in int value )
			{
				EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				ptrNativeObject->setStencilFailOp((StencilOperation)value);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CCompositionPass_getStencilFailOp_StencilOperation(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				StencilOperation objXXXX = ptrNativeObject->getStencilFailOp();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionPass_setStencilDepthFailOp_void_StencilOperation(void *pObjectXXXX, _in int value )
			{
				EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				ptrNativeObject->setStencilDepthFailOp((StencilOperation)value);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CCompositionPass_getStencilDepthFailOp_StencilOperation(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				StencilOperation objXXXX = ptrNativeObject->getStencilDepthFailOp();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionPass_setStencilPassOp_void_StencilOperation(void *pObjectXXXX, _in int value )
			{
				EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				ptrNativeObject->setStencilPassOp((StencilOperation)value);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CCompositionPass_getStencilPassOp_StencilOperation(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				StencilOperation objXXXX = ptrNativeObject->getStencilPassOp();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionPass_setStencilTwoSidedOperation_void_ev_bool(void *pObjectXXXX, _in ev_bool value )
			{
				EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				ptrNativeObject->setStencilTwoSidedOperation(value);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCompositionPass_getStencilTwoSidedOperation_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getStencilTwoSidedOperation();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CCompositionPass_InputTex_name( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionPass::InputTex* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass::InputTex*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->name;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCompositionPass_InputTex_name( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CCompositionPass::InputTex*)pObjectXXXX)->name = value1;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_CCompositionPass_InputTex_mrtIndex( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionPass::InputTex* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass::InputTex*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->mrtIndex;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCompositionPass_InputTex_mrtIndex( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Graphic::CCompositionPass::InputTex*)pObjectXXXX)->mrtIndex = value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionPass_setInput_void_ev_size_t_EVString_ev_size_t(void *pObjectXXXX, _in ev_uint64  id, _in const char* input, _in ev_uint64  mrtIndex )
			{
				EarthView::World::Core::ev_string input1 = input;
				EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				ptrNativeObject->setInput(id, input1, mrtIndex);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionPass_setInput_void_ev_size_t_EVString(void *pObjectXXXX, _in ev_uint64  id, _in const char* input )
			{
				EarthView::World::Core::ev_string input1 = input;
				EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				ptrNativeObject->setInput(id, input1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionPass_setInput_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  id )
			{
				EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				ptrNativeObject->setInput(id);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CCompositionPass_getInput_InputTex_ev_size_t(void *pObjectXXXX, _in ev_uint64  id )
			{
				const EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				const EarthView::World::Graphic::CCompositionPass::InputTex& objXXXX = ptrNativeObject->getInput(id);
				const EarthView::World::Graphic::CCompositionPass::InputTex *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CCompositionPass_getNumInputs_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getNumInputs();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionPass_clearAllInputs_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				ptrNativeObject->clearAllInputs();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositionTargetPass*  _stdcall EarthView_World_Graphic_CCompositionPass_getParent_CCompositionTargetPass(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				EarthView::World::Graphic::CCompositionTargetPass* objXXXX = ptrNativeObject->getParent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCompositionPass__isSupported_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->_isSupported();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionPass_setQuadCorners_void_Real_Real_Real_Real(void *pObjectXXXX, _in Real left, _in Real top, _in Real right, _in Real bottom )
			{
				EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				ptrNativeObject->setQuadCorners(left, top, right, bottom);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCompositionPass_getQuadCorners_ev_bool_Real_Real_Real_Real(void *pObjectXXXX, _inout Real& left, _inout Real& top, _inout Real& right, _inout Real& bottom )
			{
				const EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getQuadCorners(left, top, right, bottom);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionPass_setQuadFarCorners_void_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool farCorners, _in ev_bool farCornersViewSpace )
			{
				EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				ptrNativeObject->setQuadFarCorners(farCorners, farCornersViewSpace);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCompositionPass_getQuadFarCorners_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getQuadFarCorners();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCompositionPass_getQuadFarCornersViewSpace_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getQuadFarCornersViewSpace();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionPass_setCustomType_void_EVString(void *pObjectXXXX, _in const char* customType )
			{
				EarthView::World::Core::ev_string customType1 = customType;
				EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				ptrNativeObject->setCustomType(customType1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_CCompositionPass_getCustomType_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCompositionPass*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getCustomType();
				return objXXXX.makeBuffer();
			}
		}
	}
}
