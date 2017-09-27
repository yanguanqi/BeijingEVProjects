/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rtshadersystem/shaderparameter.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			namespace RTShaderSystem
			{
				typedef ev_bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CParameter_isConstParameter_ev_bool_Callback)();
				typedef char*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CParameter_toString_EVString_Callback)();
				class CParameterProxy : public EarthView::World::Graphic::RTShaderSystem::CParameter
				{
				private:
					EarthView_World_Graphic_RTShaderSystem_CParameter_isConstParameter_ev_bool_Callback* m_EarthView_World_Graphic_RTShaderSystem_CParameter_isConstParameter_ev_bool_Callback;
					EarthView_World_Graphic_RTShaderSystem_CParameter_toString_EVString_Callback* m_EarthView_World_Graphic_RTShaderSystem_CParameter_toString_EVString_Callback;
				public:
					CParameterProxy(EarthView::World::Core::CNameValuePairList *pList) : CParameter(pList)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CParameter_isConstParameter_ev_bool_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CParameter_toString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CParameter_isConstParameter_ev_bool(EarthView_World_Graphic_RTShaderSystem_CParameter_isConstParameter_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CParameter_isConstParameter_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CParameter_toString_EVString(EarthView_World_Graphic_RTShaderSystem_CParameter_toString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CParameter_toString_EVString_Callback = pCallback;
					}
					virtual ev_bool isConstParameter() const
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CParameter_isConstParameter_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CParameter_isConstParameter_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CParameter::isConstParameter();
					}
					virtual EVString toString() const
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CParameter_toString_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_RTShaderSystem_CParameter_toString_EVString_Callback();
							return returnValue;
						}
						else
							return this->CParameter::toString();
					}
				};
				REGISTER_FACTORY_CLASS(CParameterProxy);
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CParameter_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CParameter* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CParameter*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_RTShaderSystem_CParameter_getType_GpuConstantType(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CParameter* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CParameter*) pObjectXXXX;
					EarthView::World::Graphic::GpuConstantType objXXXX = ptrNativeObject->getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const int  _stdcall EarthView_World_Graphic_RTShaderSystem_CParameter_getSemantic_Semantic(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CParameter* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CParameter*) pObjectXXXX;
					const EarthView::World::Graphic::RTShaderSystem::CParameter::Semantic& objXXXX = ptrNativeObject->getSemantic();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Graphic_RTShaderSystem_CParameter_getIndex_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CParameter* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CParameter*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getIndex();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_RTShaderSystem_CParameter_getContent_Content(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CParameter* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CParameter*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CParameter::Content objXXXX = ptrNativeObject->getContent();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CParameter_isConstParameter_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CParameter* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CParameter*) pObjectXXXX;
					if (dynamic_cast<CParameterProxy*>((EarthView::World::Graphic::RTShaderSystem::CParameter*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CParameter::isConstParameter();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isConstParameter();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CParameter_isConstParameter_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CParameter_isConstParameter_ev_bool_Callback* pCallback )
				{
					CParameterProxy* ptr = dynamic_cast<CParameterProxy*>((EarthView::World::Graphic::RTShaderSystem::CParameter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CParameter_isConstParameter_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CParameter_isConstParameter_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CParameter* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CParameter*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CParameter::isConstParameter();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CParameter_toString_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CParameter* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CParameter*) pObjectXXXX;
					if (dynamic_cast<CParameterProxy*>((EarthView::World::Graphic::RTShaderSystem::CParameter*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CParameter::toString();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toString();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CParameter_toString_EVString( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CParameter_toString_EVString_Callback* pCallback )
				{
					CParameterProxy* ptr = dynamic_cast<CParameterProxy*>((EarthView::World::Graphic::RTShaderSystem::CParameter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CParameter_toString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CParameter_toString_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CParameter* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CParameter*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CParameter::toString();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CParameter_isArray_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CParameter* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CParameter*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isArray();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_RTShaderSystem_CParameter_getSize_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CParameter* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CParameter*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->getSize();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CParameter_setSize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  size )
				{
					EarthView::World::Graphic::RTShaderSystem::CParameter* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CParameter*) pObjectXXXX;
					ptrNativeObject->setSize(size);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CParameter*  _stdcall EarthView_World_Graphic_RTShaderSystem_ParameterPtr_get_CParameter(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::ParameterPtr* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::ParameterPtr*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CParameter* objXXXX = ptrNativeObject->get();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_ShaderParameterList_push_back_void_ParameterPtr(void *pObjectXXXX, _in void* t )
				{
					EarthView::World::Graphic::RTShaderSystem::ShaderParameterList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::ShaderParameterList*) pObjectXXXX;
					ptrNativeObject->push_back(*(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_ShaderParameterList_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::ShaderParameterList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::ShaderParameterList*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_ShaderParameterList_front_ParameterPtr(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::ShaderParameterList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::ShaderParameterList*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr& objXXXX = ptrNativeObject->front();
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_ShaderParameterList_back_ParameterPtr(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::ShaderParameterList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::ShaderParameterList*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr& objXXXX = ptrNativeObject->back();
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_ShaderParameterList_insert_void_ev_uint32_ParameterPtr(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
				{
					EarthView::World::Graphic::RTShaderSystem::ShaderParameterList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::ShaderParameterList*) pObjectXXXX;
					ptrNativeObject->insert(pos, *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_ShaderParameterList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Graphic::RTShaderSystem::ShaderParameterList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::ShaderParameterList*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RTShaderSystem_ShaderParameterList_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::ShaderParameterList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::ShaderParameterList*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_ShaderParameterList_OperatorIndex_ParameterPtr_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::Graphic::RTShaderSystem::ShaderParameterList& objYYYY = *(EarthView::World::Graphic::RTShaderSystem::ShaderParameterList*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr& objXXXX = objYYYY[n];
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_ShaderParameterList_at_ParameterPtr_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::World::Graphic::RTShaderSystem::ShaderParameterList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::ShaderParameterList*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr& objXXXX = ptrNativeObject->at(n);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_RTShaderSystem_ShaderParameterList_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::ShaderParameterList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::ShaderParameterList*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_ShaderParameterList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Graphic::RTShaderSystem::ShaderParameterList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::ShaderParameterList*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_ShaderParameterList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::Graphic::RTShaderSystem::ShaderParameterList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::ShaderParameterList*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_ShaderParameterList_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::ShaderParameterList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::ShaderParameterList*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				typedef ev_bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CUniformParameter_isConstParameter_ev_bool_Callback)();
				typedef char*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CUniformParameter_toString_EVString_Callback)();
				class CUniformParameterProxy : public EarthView::World::Graphic::RTShaderSystem::CUniformParameter
				{
				private:
					EarthView_World_Graphic_RTShaderSystem_CUniformParameter_isConstParameter_ev_bool_Callback* m_EarthView_World_Graphic_RTShaderSystem_CUniformParameter_isConstParameter_ev_bool_Callback;
					EarthView_World_Graphic_RTShaderSystem_CUniformParameter_toString_EVString_Callback* m_EarthView_World_Graphic_RTShaderSystem_CUniformParameter_toString_EVString_Callback;
				public:
					CUniformParameterProxy(EarthView::World::Core::CNameValuePairList *pList) : CUniformParameter(pList)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CUniformParameter_isConstParameter_ev_bool_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CUniformParameter_toString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CUniformParameter_isConstParameter_ev_bool(EarthView_World_Graphic_RTShaderSystem_CUniformParameter_isConstParameter_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CUniformParameter_isConstParameter_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CUniformParameter_toString_EVString(EarthView_World_Graphic_RTShaderSystem_CUniformParameter_toString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CUniformParameter_toString_EVString_Callback = pCallback;
					}
					virtual ev_bool isConstParameter() const
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CUniformParameter_isConstParameter_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CUniformParameter_isConstParameter_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CUniformParameter::isConstParameter();
					}
					virtual EVString toString() const
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CUniformParameter_toString_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_RTShaderSystem_CUniformParameter_toString_EVString_Callback();
							return returnValue;
						}
						else
							return this->CUniformParameter::toString();
					}
				};
				REGISTER_FACTORY_CLASS(CUniformParameterProxy);
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_RTShaderSystem_CUniformParameter_getAutoConstantIntData_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CUniformParameter* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->getAutoConstantIntData();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_RTShaderSystem_CUniformParameter_getAutoConstantRealData_Real(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CUniformParameter* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->getAutoConstantRealData();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CUniformParameter_isFloat_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CUniformParameter* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isFloat();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CUniformParameter_isSampler_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CUniformParameter* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isSampler();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CUniformParameter_isAutoConstantParameter_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CUniformParameter* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isAutoConstantParameter();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CUniformParameter_isAutoConstantIntParameter_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CUniformParameter* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isAutoConstantIntParameter();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CUniformParameter_isAutoConstantRealParameter_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CUniformParameter* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isAutoConstantRealParameter();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_RTShaderSystem_CUniformParameter_getAutoConstantType_AutoConstantType(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CUniformParameter* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjectXXXX;
					EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType objXXXX = ptrNativeObject->getAutoConstantType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_RTShaderSystem_CUniformParameter_getVariability_ev_uint16(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CUniformParameter* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjectXXXX;
					ev_uint16 objXXXX = ptrNativeObject->getVariability();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CUniformParameter_bind_void_GpuProgramParametersSharedPtr(void *pObjectXXXX, _in void* paramsPtr )
				{
					EarthView::World::Graphic::RTShaderSystem::CUniformParameter* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjectXXXX;
					ptrNativeObject->bind(*(EarthView::World::Graphic::GpuProgramParametersSharedPtr*)paramsPtr);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CUniformParameter_setGpuParameter_void_ev_int32(void *pObjectXXXX, _in ev_int32 val )
				{
					EarthView::World::Graphic::RTShaderSystem::CUniformParameter* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjectXXXX;
					ptrNativeObject->setGpuParameter(val);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CUniformParameter_setGpuParameter_void_Real(void *pObjectXXXX, _in Real val )
				{
					EarthView::World::Graphic::RTShaderSystem::CUniformParameter* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjectXXXX;
					ptrNativeObject->setGpuParameter(val);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CUniformParameter_setGpuParameter_void_CColourValue(void *pObjectXXXX, _in const void* val )
				{
					EarthView::World::Graphic::RTShaderSystem::CUniformParameter* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjectXXXX;
					ptrNativeObject->setGpuParameter(*(EarthView::World::Graphic::CColourValue*)val);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CUniformParameter_setGpuParameter_void_CVector2(void *pObjectXXXX, _in const void* val )
				{
					EarthView::World::Graphic::RTShaderSystem::CUniformParameter* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjectXXXX;
					ptrNativeObject->setGpuParameter(*(EarthView::World::Spatial::Math::CVector2*)val);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CUniformParameter_setGpuParameter_void_CVector3(void *pObjectXXXX, _in const void* val )
				{
					EarthView::World::Graphic::RTShaderSystem::CUniformParameter* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjectXXXX;
					ptrNativeObject->setGpuParameter(*(EarthView::World::Spatial::Math::CVector3*)val);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CUniformParameter_setGpuParameter_void_CVector4(void *pObjectXXXX, _in const void* val )
				{
					EarthView::World::Graphic::RTShaderSystem::CUniformParameter* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjectXXXX;
					ptrNativeObject->setGpuParameter(*(EarthView::World::Spatial::Math::CVector4*)val);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CUniformParameter_setGpuParameter_void_CMatrix4(void *pObjectXXXX, _in const void* val )
				{
					EarthView::World::Graphic::RTShaderSystem::CUniformParameter* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjectXXXX;
					ptrNativeObject->setGpuParameter(*(EarthView::World::Spatial::Math::CMatrix4*)val);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CUniformParameter_setGpuParameter_void_float_ev_size_t_ev_size_t(void *pObjectXXXX, _in const float* val, _in ev_uint64  count, _in ev_uint64  multiple )
				{
					EarthView::World::Graphic::RTShaderSystem::CUniformParameter* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjectXXXX;
					ptrNativeObject->setGpuParameter(val, count, multiple);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CUniformParameter_setGpuParameter_void_float_ev_size_t(void *pObjectXXXX, _in const float* val, _in ev_uint64  count )
				{
					EarthView::World::Graphic::RTShaderSystem::CUniformParameter* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjectXXXX;
					ptrNativeObject->setGpuParameter(val, count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CUniformParameter_setGpuParameter_void_double_ev_size_t_ev_size_t(void *pObjectXXXX, _in const double* val, _in ev_uint64  count, _in ev_uint64  multiple )
				{
					EarthView::World::Graphic::RTShaderSystem::CUniformParameter* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjectXXXX;
					ptrNativeObject->setGpuParameter(val, count, multiple);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CUniformParameter_setGpuParameter_void_double_ev_size_t(void *pObjectXXXX, _in const double* val, _in ev_uint64  count )
				{
					EarthView::World::Graphic::RTShaderSystem::CUniformParameter* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjectXXXX;
					ptrNativeObject->setGpuParameter(val, count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CUniformParameter_setGpuParameter_void_ev_int32_ev_size_t_ev_size_t(void *pObjectXXXX, _in const ev_int32* val, _in ev_uint64  count, _in ev_uint64  multiple )
				{
					EarthView::World::Graphic::RTShaderSystem::CUniformParameter* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjectXXXX;
					ptrNativeObject->setGpuParameter(val, count, multiple);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CUniformParameter_setGpuParameter_void_ev_int32_ev_size_t(void *pObjectXXXX, _in const ev_int32* val, _in ev_uint64  count )
				{
					EarthView::World::Graphic::RTShaderSystem::CUniformParameter* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjectXXXX;
					ptrNativeObject->setGpuParameter(val, count);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CUniformParameter_isConstParameter_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CUniformParameter_isConstParameter_ev_bool_Callback* pCallback )
				{
					CUniformParameterProxy* ptr = dynamic_cast<CUniformParameterProxy*>((EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CUniformParameter_isConstParameter_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CUniformParameter_toString_EVString( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CUniformParameter_toString_EVString_Callback* pCallback )
				{
					CUniformParameterProxy* ptr = dynamic_cast<CUniformParameterProxy*>((EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CUniformParameter_toString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CUniformParameter*  _stdcall EarthView_World_Graphic_RTShaderSystem_UniformParameterPtr_get_CUniformParameter(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CUniformParameter* objXXXX = ptrNativeObject->get();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_UniformParameterPtr_OperatorConvertionParameterPtr_ParameterPtr(void *pObjXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr& objYYYY = *(EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr objXXXX = objYYYY ;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_UniformParameterList_push_back_void_UniformParameterPtr(void *pObjectXXXX, _in void* t )
				{
					EarthView::World::Graphic::RTShaderSystem::UniformParameterList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::UniformParameterList*) pObjectXXXX;
					ptrNativeObject->push_back(*(EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_UniformParameterList_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::UniformParameterList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::UniformParameterList*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_UniformParameterList_front_UniformParameterPtr(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::UniformParameterList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::UniformParameterList*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr& objXXXX = ptrNativeObject->front();
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_UniformParameterList_back_UniformParameterPtr(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::UniformParameterList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::UniformParameterList*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr& objXXXX = ptrNativeObject->back();
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_UniformParameterList_insert_void_ev_uint32_UniformParameterPtr(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
				{
					EarthView::World::Graphic::RTShaderSystem::UniformParameterList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::UniformParameterList*) pObjectXXXX;
					ptrNativeObject->insert(pos, *(EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_UniformParameterList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Graphic::RTShaderSystem::UniformParameterList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::UniformParameterList*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RTShaderSystem_UniformParameterList_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::UniformParameterList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::UniformParameterList*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_UniformParameterList_OperatorIndex_UniformParameterPtr_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::Graphic::RTShaderSystem::UniformParameterList& objYYYY = *(EarthView::World::Graphic::RTShaderSystem::UniformParameterList*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr& objXXXX = objYYYY[n];
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_UniformParameterList_at_UniformParameterPtr_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::World::Graphic::RTShaderSystem::UniformParameterList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::UniformParameterList*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr& objXXXX = ptrNativeObject->at(n);
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_RTShaderSystem_UniformParameterList_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::UniformParameterList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::UniformParameterList*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_UniformParameterList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Graphic::RTShaderSystem::UniformParameterList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::UniformParameterList*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_UniformParameterList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::Graphic::RTShaderSystem::UniformParameterList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::UniformParameterList*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_UniformParameterList_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::UniformParameterList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::UniformParameterList*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CParameterFactory_createInPosition_ParameterPtr_ev_int32(_in ev_int32 index )
				{
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr objXXXX = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createInPosition(index);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CParameterFactory_createOutPosition_ParameterPtr_ev_int32(_in ev_int32 index )
				{
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr objXXXX = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createOutPosition(index);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CParameterFactory_createInNormal_ParameterPtr_ev_int32(_in ev_int32 index )
				{
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr objXXXX = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createInNormal(index);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CParameterFactory_createInWeights_ParameterPtr_ev_int32(_in ev_int32 index )
				{
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr objXXXX = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createInWeights(index);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CParameterFactory_createInIndices_ParameterPtr_ev_int32(_in ev_int32 index )
				{
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr objXXXX = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createInIndices(index);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CParameterFactory_createOutNormal_ParameterPtr_ev_int32(_in ev_int32 index )
				{
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr objXXXX = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createOutNormal(index);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CParameterFactory_createInBiNormal_ParameterPtr_ev_int32(_in ev_int32 index )
				{
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr objXXXX = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createInBiNormal(index);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CParameterFactory_createOutBiNormal_ParameterPtr_ev_int32(_in ev_int32 index )
				{
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr objXXXX = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createOutBiNormal(index);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CParameterFactory_createInTangent_ParameterPtr_ev_int32(_in ev_int32 index )
				{
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr objXXXX = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createInTangent(index);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CParameterFactory_createOutTangent_ParameterPtr_ev_int32(_in ev_int32 index )
				{
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr objXXXX = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createOutTangent(index);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CParameterFactory_createInColor_ParameterPtr_ev_int32(_in ev_int32 index )
				{
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr objXXXX = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createInColor(index);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CParameterFactory_createOutColor_ParameterPtr_ev_int32(_in ev_int32 index )
				{
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr objXXXX = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createOutColor(index);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CParameterFactory_createInTexcoord_ParameterPtr_GpuConstantType_ev_int32_Content(_in int type, _in ev_int32 index, _in int content )
				{
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr objXXXX = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createInTexcoord((EarthView::World::Graphic::GpuConstantType)type, index, (EarthView::World::Graphic::RTShaderSystem::CParameter::Content)content);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CParameterFactory_createOutTexcoord_ParameterPtr_GpuConstantType_ev_int32_Content(_in int type, _in ev_int32 index, _in int content )
				{
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr objXXXX = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createOutTexcoord((EarthView::World::Graphic::GpuConstantType)type, index, (EarthView::World::Graphic::RTShaderSystem::CParameter::Content)content);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CParameterFactory_createInTexcoord1_ParameterPtr_ev_int32_Content(_in ev_int32 index, _in int content )
				{
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr objXXXX = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createInTexcoord1(index, (EarthView::World::Graphic::RTShaderSystem::CParameter::Content)content);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CParameterFactory_createOutTexcoord1_ParameterPtr_ev_int32_Content(_in ev_int32 index, _in int content )
				{
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr objXXXX = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createOutTexcoord1(index, (EarthView::World::Graphic::RTShaderSystem::CParameter::Content)content);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CParameterFactory_createInTexcoord2_ParameterPtr_ev_int32_Content(_in ev_int32 index, _in int content )
				{
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr objXXXX = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createInTexcoord2(index, (EarthView::World::Graphic::RTShaderSystem::CParameter::Content)content);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CParameterFactory_createOutTexcoord2_ParameterPtr_ev_int32_Content(_in ev_int32 index, _in int content )
				{
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr objXXXX = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createOutTexcoord2(index, (EarthView::World::Graphic::RTShaderSystem::CParameter::Content)content);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CParameterFactory_createInTexcoord3_ParameterPtr_ev_int32_Content(_in ev_int32 index, _in int content )
				{
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr objXXXX = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createInTexcoord3(index, (EarthView::World::Graphic::RTShaderSystem::CParameter::Content)content);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CParameterFactory_createOutTexcoord3_ParameterPtr_ev_int32_Content(_in ev_int32 index, _in int content )
				{
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr objXXXX = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createOutTexcoord3(index, (EarthView::World::Graphic::RTShaderSystem::CParameter::Content)content);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CParameterFactory_createInTexcoord4_ParameterPtr_ev_int32_Content(_in ev_int32 index, _in int content )
				{
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr objXXXX = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createInTexcoord4(index, (EarthView::World::Graphic::RTShaderSystem::CParameter::Content)content);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CParameterFactory_createOutTexcoord4_ParameterPtr_ev_int32_Content(_in ev_int32 index, _in int content )
				{
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr objXXXX = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createOutTexcoord4(index, (EarthView::World::Graphic::RTShaderSystem::CParameter::Content)content);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CParameterFactory_createConstParamVector2_ParameterPtr_CVector2(_in void* val )
				{
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr objXXXX = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createConstParamVector2(*(EarthView::World::Spatial::Math::CVector2*)val);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CParameterFactory_createConstParamVector3_ParameterPtr_CVector3(_in void* val )
				{
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr objXXXX = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createConstParamVector3(*(EarthView::World::Spatial::Math::CVector3*)val);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CParameterFactory_createConstParamVector4_ParameterPtr_CVector4(_in void* val )
				{
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr objXXXX = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createConstParamVector4(*(EarthView::World::Spatial::Math::CVector4*)val);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CParameterFactory_createConstParamFloat_ParameterPtr_float(_in float val )
				{
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr objXXXX = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createConstParamFloat(val);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CParameterFactory_createSampler_UniformParameterPtr_GpuConstantType_ev_int32(_in int type, _in ev_int32 index )
				{
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr objXXXX = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createSampler((EarthView::World::Graphic::GpuConstantType)type, index);
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CParameterFactory_createSampler1D_UniformParameterPtr_ev_int32(_in ev_int32 index )
				{
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr objXXXX = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createSampler1D(index);
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CParameterFactory_createSampler2D_UniformParameterPtr_ev_int32(_in ev_int32 index )
				{
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr objXXXX = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createSampler2D(index);
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CParameterFactory_createSampler2DArray_UniformParameterPtr_ev_int32(_in ev_int32 index )
				{
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr objXXXX = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createSampler2DArray(index);
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CParameterFactory_createSampler3D_UniformParameterPtr_ev_int32(_in ev_int32 index )
				{
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr objXXXX = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createSampler3D(index);
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CParameterFactory_createSamplerCUBE_UniformParameterPtr_ev_int32(_in ev_int32 index )
				{
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr objXXXX = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createSamplerCUBE(index);
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CParameterFactory_createUniform_UniformParameterPtr_GpuConstantType_ev_int32_ev_uint16_EVString_ev_size_t(_in int type, _in ev_int32 index, _in ev_uint16 variability, _in const char* suggestedName, _in ev_uint64  size )
				{
					EarthView::World::Core::ev_string suggestedName1 = suggestedName;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr objXXXX = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createUniform((EarthView::World::Graphic::GpuConstantType)type, index, variability, suggestedName1, size);
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
		}
	}
}
