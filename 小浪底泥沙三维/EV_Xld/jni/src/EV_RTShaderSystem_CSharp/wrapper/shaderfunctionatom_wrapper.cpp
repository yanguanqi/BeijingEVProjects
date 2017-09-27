/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rtshadersystem/shaderfunctionatom.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			namespace RTShaderSystem
			{
				typedef char*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CFunctionAtom_getFunctionAtomType_EVString_Callback)();
				class CFunctionAtomProxy : public EarthView::World::Graphic::RTShaderSystem::CFunctionAtom
				{
				private:
					EarthView_World_Graphic_RTShaderSystem_CFunctionAtom_getFunctionAtomType_EVString_Callback* m_EarthView_World_Graphic_RTShaderSystem_CFunctionAtom_getFunctionAtomType_EVString_Callback;
				public:
					CFunctionAtomProxy(EarthView::World::Core::CNameValuePairList *pList) : CFunctionAtom(pList)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFunctionAtom_getFunctionAtomType_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CFunctionAtom_getFunctionAtomType_EVString(EarthView_World_Graphic_RTShaderSystem_CFunctionAtom_getFunctionAtomType_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFunctionAtom_getFunctionAtomType_EVString_Callback = pCallback;
					}
					virtual EVString getFunctionAtomType()
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CFunctionAtom_getFunctionAtomType_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_RTShaderSystem_CFunctionAtom_getFunctionAtomType_EVString_Callback();
							return returnValue;
						}
						else
							return this->CFunctionAtom::getFunctionAtomType();
					}
				};
				REGISTER_FACTORY_CLASS(CFunctionAtomProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunctionAtom_getGroupExecutionOrder_int(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CFunctionAtom* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFunctionAtom*) pObjectXXXX;
					int objXXXX = ptrNativeObject->getGroupExecutionOrder();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunctionAtom_getInternalExecutionOrder_int(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CFunctionAtom* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFunctionAtom*) pObjectXXXX;
					int objXXXX = ptrNativeObject->getInternalExecutionOrder();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunctionAtom_getFunctionAtomType_EVString(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CFunctionAtom* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFunctionAtom*) pObjectXXXX;
					if (dynamic_cast<CFunctionAtomProxy*>((EarthView::World::Graphic::RTShaderSystem::CFunctionAtom*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFunctionAtom::getFunctionAtomType();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getFunctionAtomType();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFunctionAtom_getFunctionAtomType_EVString( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CFunctionAtom_getFunctionAtomType_EVString_Callback* pCallback )
				{
					CFunctionAtomProxy* ptr = dynamic_cast<CFunctionAtomProxy*>((EarthView::World::Graphic::RTShaderSystem::CFunctionAtom*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CFunctionAtom_getFunctionAtomType_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunctionAtom_getFunctionAtomType_EVString_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CFunctionAtom* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFunctionAtom*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFunctionAtom::getFunctionAtomType();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_COperand_OperatorAssign_COperand_COperand(void *pObjXXXX, _in const void* rhs )
				{
					EarthView::World::Graphic::RTShaderSystem::COperand& objXXXX = *((EarthView::World::Graphic::RTShaderSystem::COperand*) pObjXXXX);
					objXXXX = *(EarthView::World::Graphic::RTShaderSystem::COperand*)rhs;
					EarthView::World::Graphic::RTShaderSystem::COperand *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_RTShaderSystem_COperand_getParameter_ParameterPtr(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::COperand* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::COperand*) pObjectXXXX;
					const EarthView::World::Graphic::RTShaderSystem::ParameterPtr& objXXXX = ptrNativeObject->getParameter();
					const EarthView::World::Graphic::RTShaderSystem::ParameterPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_COperand_hasFreeFields_bool(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::COperand* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::COperand*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->hasFreeFields();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_RTShaderSystem_COperand_getMask_int(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::COperand* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::COperand*) pObjectXXXX;
					int objXXXX = ptrNativeObject->getMask();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_RTShaderSystem_COperand_getSemantic_OpSemantic(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::COperand* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::COperand*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::COperand::OpSemantic objXXXX = ptrNativeObject->getSemantic();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_RTShaderSystem_COperand_getIndirectionLevel_ev_uint16(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::COperand* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::COperand*) pObjectXXXX;
					ev_uint16 objXXXX = ptrNativeObject->getIndirectionLevel();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_RTShaderSystem_COperand_toString_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::COperand* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::COperand*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->toString();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_RTShaderSystem_COperand_getMaskAsString_EVString_int(_in int mask )
				{
					EVString objXXXX = EarthView::World::Graphic::RTShaderSystem::COperand::getMaskAsString(mask);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_RTShaderSystem_COperand_getFloatCount_int_int(_in int mask )
				{
					int objXXXX = EarthView::World::Graphic::RTShaderSystem::COperand::getFloatCount(mask);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_RTShaderSystem_COperand_getGpuConstantType_GpuConstantType_int(_in int mask )
				{
					EarthView::World::Graphic::GpuConstantType objXXXX = EarthView::World::Graphic::RTShaderSystem::COperand::getGpuConstantType(mask);
					return (int)objXXXX;
				}
				typedef char*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CFunctionInvocation_getFunctionAtomType_EVString_Callback)();
				class CFunctionInvocationProxy : public EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation
				{
				private:
					EarthView_World_Graphic_RTShaderSystem_CFunctionInvocation_getFunctionAtomType_EVString_Callback* m_EarthView_World_Graphic_RTShaderSystem_CFunctionInvocation_getFunctionAtomType_EVString_Callback;
				public:
					CFunctionInvocationProxy(EarthView::World::Core::CNameValuePairList *pList) : CFunctionInvocation(pList)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFunctionInvocation_getFunctionAtomType_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CFunctionInvocation_getFunctionAtomType_EVString(EarthView_World_Graphic_RTShaderSystem_CFunctionInvocation_getFunctionAtomType_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFunctionInvocation_getFunctionAtomType_EVString_Callback = pCallback;
					}
					virtual EVString getFunctionAtomType()
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CFunctionInvocation_getFunctionAtomType_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_RTShaderSystem_CFunctionInvocation_getFunctionAtomType_EVString_Callback();
							return returnValue;
						}
						else
							return this->CFunctionInvocation::getFunctionAtomType();
					}
				};
				REGISTER_FACTORY_CLASS(CFunctionInvocationProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunctionInvocation_OperandVector_push_back_void_COperand(void *pObjectXXXX, _in void* t )
				{
					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector*) pObjectXXXX;
					ptrNativeObject->push_back(*(EarthView::World::Graphic::RTShaderSystem::COperand*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunctionInvocation_OperandVector_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunctionInvocation_OperandVector_front_COperand(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::COperand& objXXXX = ptrNativeObject->front();
					EarthView::World::Graphic::RTShaderSystem::COperand *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunctionInvocation_OperandVector_back_COperand(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::COperand& objXXXX = ptrNativeObject->back();
					EarthView::World::Graphic::RTShaderSystem::COperand *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunctionInvocation_OperandVector_insert_void_ev_uint32_COperand(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
				{
					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector*) pObjectXXXX;
					ptrNativeObject->insert(pos, *(EarthView::World::Graphic::RTShaderSystem::COperand*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunctionInvocation_OperandVector_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunctionInvocation_OperandVector_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunctionInvocation_OperandVector_OperatorIndex_COperand_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector& objYYYY = *(EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::COperand& objXXXX = objYYYY[n];
					EarthView::World::Graphic::RTShaderSystem::COperand *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunctionInvocation_OperandVector_at_COperand_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::COperand& objXXXX = ptrNativeObject->at(n);
					EarthView::World::Graphic::RTShaderSystem::COperand *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_RTShaderSystem_CFunctionInvocation_OperandVector_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunctionInvocation_OperandVector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunctionInvocation_OperandVector_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunctionInvocation_OperandVector_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunctionInvocation_getFunctionAtomType_EVString(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation*) pObjectXXXX;
					if (dynamic_cast<CFunctionInvocationProxy*>((EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::getFunctionAtomType();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getFunctionAtomType();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFunctionInvocation_getFunctionAtomType_EVString( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CFunctionInvocation_getFunctionAtomType_EVString_Callback* pCallback )
				{
					CFunctionInvocationProxy* ptr = dynamic_cast<CFunctionInvocationProxy*>((EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CFunctionInvocation_getFunctionAtomType_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunctionInvocation_getFunctionAtomType_EVString_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::getFunctionAtomType();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunctionInvocation_getOperandList_OperandVector(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector& objXXXX = ptrNativeObject->getOperandList();
					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunctionInvocation_pushOperand_void_ParameterPtr_OpSemantic_int_int(void *pObjectXXXX, _in void* parameter, _in int opSemantic, _in int opMask, _in int indirectionLevel )
				{
					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation*) pObjectXXXX;
					ptrNativeObject->pushOperand(*(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*)parameter, (EarthView::World::Graphic::RTShaderSystem::COperand::OpSemantic)opSemantic, opMask, indirectionLevel);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunctionInvocation_pushOperand_void_ParameterPtr_OpSemantic_int(void *pObjectXXXX, _in void* parameter, _in int opSemantic, _in int opMask )
				{
					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation*) pObjectXXXX;
					ptrNativeObject->pushOperand(*(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*)parameter, (EarthView::World::Graphic::RTShaderSystem::COperand::OpSemantic)opSemantic, opMask);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunctionInvocation_pushOperand_void_ParameterPtr_OpSemantic(void *pObjectXXXX, _in void* parameter, _in int opSemantic )
				{
					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation*) pObjectXXXX;
					ptrNativeObject->pushOperand(*(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*)parameter, (EarthView::World::Graphic::RTShaderSystem::COperand::OpSemantic)opSemantic);
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunctionInvocation_getFunctionName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getFunctionName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunctionInvocation_getReturnType_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getReturnType();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunctionInvocation_OperatorEquals_bool_CFunctionInvocation(void *pObjXXXX, _in const void* rhs )
				{
					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation& objXXXX = *(EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation*) pObjXXXX;
					const EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation& objXXXX1 = *(EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation*)rhs;
					return objXXXX == objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunctionInvocation_OperatorNotEquals_bool_CFunctionInvocation(void *pObjXXXX, _in const void* rhs )
				{
					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation& objXXXX = *(EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation*) pObjXXXX;
					const EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation& objXXXX1 = *(EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation*)rhs;
					return objXXXX != objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunctionInvocation_OperatorLessThan_bool_CFunctionInvocation(void *pObjXXXX, _in const void* rhs )
				{
					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation& objXXXX = *(EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation*) pObjXXXX;
					const EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation& objXXXX1 = *(EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation*)rhs;
					return objXXXX < objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunctionInvocation_OperatorGreaterThan_bool_CFunctionInvocation(void *pObjXXXX, _in const void* rhs )
				{
					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation& objXXXX = *(EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation*) pObjXXXX;
					const EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation& objXXXX1 = *(EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation*)rhs;
					return objXXXX > objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_RTShaderSystem_CFunctionInvocation_Type()
				{
					EVString objXXXX = EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::Type;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RTShaderSystem_CFunctionInvocation_Type( char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::Type = value1;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_FunctionAtomInstanceList_push_back_void_CFunctionAtom(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CFunctionAtom* t )
				{
					EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList*) pObjectXXXX;
					ptrNativeObject->push_back(t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_FunctionAtomInstanceList_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CFunctionAtom*  _stdcall EarthView_World_Graphic_RTShaderSystem_FunctionAtomInstanceList_front_CFunctionAtom(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CFunctionAtom* objXXXX = ptrNativeObject->front();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CFunctionAtom*  _stdcall EarthView_World_Graphic_RTShaderSystem_FunctionAtomInstanceList_back_CFunctionAtom(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CFunctionAtom* objXXXX = ptrNativeObject->back();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_FunctionAtomInstanceList_insert_void_ev_uint32_CFunctionAtom(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Graphic::RTShaderSystem::CFunctionAtom*& t )
				{
					EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList*) pObjectXXXX;
					ptrNativeObject->insert(pos, t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_FunctionAtomInstanceList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RTShaderSystem_FunctionAtomInstanceList_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CFunctionAtom*  _stdcall EarthView_World_Graphic_RTShaderSystem_FunctionAtomInstanceList_OperatorIndex_CFunctionAtom_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList& objYYYY = *(EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CFunctionAtom* objXXXX = objYYYY[n];
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CFunctionAtom*  _stdcall EarthView_World_Graphic_RTShaderSystem_FunctionAtomInstanceList_at_CFunctionAtom_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CFunctionAtom* objXXXX = ptrNativeObject->at(n);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_RTShaderSystem_FunctionAtomInstanceList_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_FunctionAtomInstanceList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_FunctionAtomInstanceList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_FunctionAtomInstanceList_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList*) pObjectXXXX;
					ptrNativeObject->clear();
				}
			}
		}
	}
}
