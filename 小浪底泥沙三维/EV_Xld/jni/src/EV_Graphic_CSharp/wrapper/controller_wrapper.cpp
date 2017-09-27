/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/controller.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef Real  ( _stdcall EarthView_World_Graphic_CControllerFunction_calculate_Real_Real_Callback)(_in Real sourceValue);
			class CControllerFunctionProxy : public EarthView::World::Graphic::CControllerFunction
			{
			private:
				EarthView_World_Graphic_CControllerFunction_calculate_Real_Real_Callback* m_EarthView_World_Graphic_CControllerFunction_calculate_Real_Real_Callback;
			public:
				CControllerFunctionProxy(EarthView::World::Core::CNameValuePairList *pList) : CControllerFunction(pList)
				{
					m_EarthView_World_Graphic_CControllerFunction_calculate_Real_Real_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CControllerFunction_calculate_Real_Real(EarthView_World_Graphic_CControllerFunction_calculate_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CControllerFunction_calculate_Real_Real_Callback = pCallback;
				}
				virtual Real calculate(_in Real sourceValue)
				{
					if(m_EarthView_World_Graphic_CControllerFunction_calculate_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CControllerFunction_calculate_Real_Real_Callback(sourceValue);
						return returnValue;
					}
					else
						return this->CControllerFunction::calculate(sourceValue);
				}
			};
			REGISTER_FACTORY_CLASS(CControllerFunctionProxy);
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CControllerFunction_calculate_Real_Real(void *pObjectXXXX, _in Real sourceValue )
			{
				EarthView::World::Graphic::CControllerFunction* ptrNativeObject = (EarthView::World::Graphic::CControllerFunction*) pObjectXXXX;
				if (dynamic_cast<CControllerFunctionProxy*>((EarthView::World::Graphic::CControllerFunction*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CControllerFunction::calculate(sourceValue);
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->calculate(sourceValue);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CControllerFunction_calculate_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CControllerFunction_calculate_Real_Real_Callback* pCallback )
			{
				CControllerFunctionProxy* ptr = dynamic_cast<CControllerFunctionProxy*>((EarthView::World::Graphic::CControllerFunction*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CControllerFunction_calculate_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CControllerFunction_calculate_Real_Real_NoVirtual(void *pObjectXXXX, _in Real sourceValue )
			{
				EarthView::World::Graphic::CControllerFunction* ptrNativeObject = (EarthView::World::Graphic::CControllerFunction*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CControllerFunction::calculate(sourceValue);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CControllerFunction*  _stdcall EarthView_World_Graphic_ControllerFunctionRealPtr_get_CControllerFunction(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::ControllerFunctionRealPtr* ptrNativeObject = (EarthView::World::Graphic::ControllerFunctionRealPtr*) pObjectXXXX;
				EarthView::World::Graphic::CControllerFunction* objXXXX = ptrNativeObject->get();
				return objXXXX;
			}
			typedef Real  ( _stdcall EarthView_World_Graphic_CControllerValue_getValue_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CControllerValue_setValue_void_Real_Callback)(_in Real value);
			class CControllerValueProxy : public EarthView::World::Graphic::CControllerValue
			{
			private:
				EarthView_World_Graphic_CControllerValue_getValue_Real_Callback* m_EarthView_World_Graphic_CControllerValue_getValue_Real_Callback;
				EarthView_World_Graphic_CControllerValue_setValue_void_Real_Callback* m_EarthView_World_Graphic_CControllerValue_setValue_void_Real_Callback;
			public:
				CControllerValueProxy(EarthView::World::Core::CNameValuePairList *pList) : CControllerValue(pList)
				{
					m_EarthView_World_Graphic_CControllerValue_getValue_Real_Callback = NULL;
					m_EarthView_World_Graphic_CControllerValue_setValue_void_Real_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CControllerValue_getValue_Real(EarthView_World_Graphic_CControllerValue_getValue_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CControllerValue_getValue_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CControllerValue_setValue_void_Real(EarthView_World_Graphic_CControllerValue_setValue_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CControllerValue_setValue_void_Real_Callback = pCallback;
				}
				virtual Real getValue() const
				{
					if(m_EarthView_World_Graphic_CControllerValue_getValue_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CControllerValue_getValue_Real_Callback();
						return returnValue;
					}
					else
						return this->CControllerValue::getValue();
				}
				virtual void setValue(_in Real value)
				{
					if(m_EarthView_World_Graphic_CControllerValue_setValue_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CControllerValue_setValue_void_Real_Callback(value);
					}
					else
						return this->CControllerValue::setValue(value);
				}
			};
			REGISTER_FACTORY_CLASS(CControllerValueProxy);
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CControllerValue_getValue_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CControllerValue* ptrNativeObject = (EarthView::World::Graphic::CControllerValue*) pObjectXXXX;
				if (dynamic_cast<CControllerValueProxy*>((EarthView::World::Graphic::CControllerValue*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CControllerValue::getValue();
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getValue();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CControllerValue_getValue_Real( void *pObjectXXXX, EarthView_World_Graphic_CControllerValue_getValue_Real_Callback* pCallback )
			{
				CControllerValueProxy* ptr = dynamic_cast<CControllerValueProxy*>((EarthView::World::Graphic::CControllerValue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CControllerValue_getValue_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CControllerValue_getValue_Real_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CControllerValue* ptrNativeObject = (EarthView::World::Graphic::CControllerValue*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CControllerValue::getValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CControllerValue_setValue_void_Real(void *pObjectXXXX, _in Real value )
			{
				EarthView::World::Graphic::CControllerValue* ptrNativeObject = (EarthView::World::Graphic::CControllerValue*) pObjectXXXX;
				if (dynamic_cast<CControllerValueProxy*>((EarthView::World::Graphic::CControllerValue*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CControllerValue::setValue(value);
				else
					ptrNativeObject->setValue(value);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CControllerValue_setValue_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CControllerValue_setValue_void_Real_Callback* pCallback )
			{
				CControllerValueProxy* ptr = dynamic_cast<CControllerValueProxy*>((EarthView::World::Graphic::CControllerValue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CControllerValue_setValue_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CControllerValue_setValue_void_Real_NoVirtual(void *pObjectXXXX, _in Real value )
			{
				EarthView::World::Graphic::CControllerValue* ptrNativeObject = (EarthView::World::Graphic::CControllerValue*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CControllerValue::setValue(value);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CControllerValue*  _stdcall EarthView_World_Graphic_ControllerValueRealPtr_get_CControllerValue(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::ControllerValueRealPtr* ptrNativeObject = (EarthView::World::Graphic::ControllerValueRealPtr*) pObjectXXXX;
				EarthView::World::Graphic::CControllerValue* objXXXX = ptrNativeObject->get();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CController_setSource_void_ControllerValueRealPtr(void *pObjectXXXX, _in const void* src )
			{
				EarthView::World::Graphic::CController* ptrNativeObject = (EarthView::World::Graphic::CController*) pObjectXXXX;
				ptrNativeObject->setSource(*(EarthView::World::Graphic::ControllerValueRealPtr*)src);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CController_getSource_ControllerValueRealPtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CController* ptrNativeObject = (EarthView::World::Graphic::CController*) pObjectXXXX;
				const EarthView::World::Graphic::ControllerValueRealPtr& objXXXX = ptrNativeObject->getSource();
				const EarthView::World::Graphic::ControllerValueRealPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CController_setDestination_void_ControllerValueRealPtr(void *pObjectXXXX, _in const void* dest )
			{
				EarthView::World::Graphic::CController* ptrNativeObject = (EarthView::World::Graphic::CController*) pObjectXXXX;
				ptrNativeObject->setDestination(*(EarthView::World::Graphic::ControllerValueRealPtr*)dest);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CController_getDestination_ControllerValueRealPtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CController* ptrNativeObject = (EarthView::World::Graphic::CController*) pObjectXXXX;
				const EarthView::World::Graphic::ControllerValueRealPtr& objXXXX = ptrNativeObject->getDestination();
				const EarthView::World::Graphic::ControllerValueRealPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CController_getEnabled_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CController* ptrNativeObject = (EarthView::World::Graphic::CController*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getEnabled();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CController_setEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CController* ptrNativeObject = (EarthView::World::Graphic::CController*) pObjectXXXX;
				ptrNativeObject->setEnabled(enabled);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CController_setFunction_void_ControllerFunctionRealPtr(void *pObjectXXXX, _in const void* func )
			{
				EarthView::World::Graphic::CController* ptrNativeObject = (EarthView::World::Graphic::CController*) pObjectXXXX;
				ptrNativeObject->setFunction(*(EarthView::World::Graphic::ControllerFunctionRealPtr*)func);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CController_getFunction_ControllerFunctionRealPtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CController* ptrNativeObject = (EarthView::World::Graphic::CController*) pObjectXXXX;
				const EarthView::World::Graphic::ControllerFunctionRealPtr& objXXXX = ptrNativeObject->getFunction();
				const EarthView::World::Graphic::ControllerFunctionRealPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CController_update_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CController* ptrNativeObject = (EarthView::World::Graphic::CController*) pObjectXXXX;
				ptrNativeObject->update();
			}
		}
	}
}
