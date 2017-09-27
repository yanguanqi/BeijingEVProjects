/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "color/monitorparameter.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				typedef EarthView::World::Spatial::Display::CMonitorParameter*  ( _stdcall EarthView_World_Spatial_Display_CMonitorParameter_clone_CMonitorParameter_Callback)();
				class CMonitorParameterProxy : public EarthView::World::Spatial::Display::CMonitorParameter
				{
				private:
					EarthView_World_Spatial_Display_CMonitorParameter_clone_CMonitorParameter_Callback* m_EarthView_World_Spatial_Display_CMonitorParameter_clone_CMonitorParameter_Callback;
				public:
					CMonitorParameterProxy(EarthView::World::Core::CNameValuePairList *pList) : CMonitorParameter(pList)
					{
						m_EarthView_World_Spatial_Display_CMonitorParameter_clone_CMonitorParameter_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Display_CMonitorParameter_clone_CMonitorParameter(EarthView_World_Spatial_Display_CMonitorParameter_clone_CMonitorParameter_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CMonitorParameter_clone_CMonitorParameter_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Display::CMonitorParameter* clone() const
					{
						if(m_EarthView_World_Spatial_Display_CMonitorParameter_clone_CMonitorParameter_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::CMonitorParameter* returnValue = m_EarthView_World_Spatial_Display_CMonitorParameter_clone_CMonitorParameter_Callback();
							return returnValue;
						}
						else
							return this->CMonitorParameter::clone();
					}
				};
				REGISTER_FACTORY_CLASS(CMonitorParameterProxy);
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CMonitorParameter_isValid_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CMonitorParameter* ptrNativeObject = (EarthView::World::Spatial::Display::CMonitorParameter*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isValid();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CMonitorParameter_load_ev_bool_EVString(void *pObjectXXXX, _in char* filePath )
				{
					EarthView::World::Core::ev_string filePath1 = filePath;
					EarthView::World::Spatial::Display::CMonitorParameter* ptrNativeObject = (EarthView::World::Spatial::Display::CMonitorParameter*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->load(filePath1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CMonitorParameter_getGamma_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CMonitorParameter* ptrNativeObject = (EarthView::World::Spatial::Display::CMonitorParameter*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getGamma();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CMonitorParameter_getRedPointX_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CMonitorParameter* ptrNativeObject = (EarthView::World::Spatial::Display::CMonitorParameter*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getRedPointX();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CMonitorParameter_getRedPointY_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CMonitorParameter* ptrNativeObject = (EarthView::World::Spatial::Display::CMonitorParameter*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getRedPointY();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CMonitorParameter_getGreenPointX_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CMonitorParameter* ptrNativeObject = (EarthView::World::Spatial::Display::CMonitorParameter*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getGreenPointX();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CMonitorParameter_getGreenPointY_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CMonitorParameter* ptrNativeObject = (EarthView::World::Spatial::Display::CMonitorParameter*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getGreenPointY();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CMonitorParameter_getBluePointX_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CMonitorParameter* ptrNativeObject = (EarthView::World::Spatial::Display::CMonitorParameter*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getBluePointX();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CMonitorParameter_getBluePointY_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CMonitorParameter* ptrNativeObject = (EarthView::World::Spatial::Display::CMonitorParameter*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getBluePointY();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CMonitorParameter_getWhitePointX_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CMonitorParameter* ptrNativeObject = (EarthView::World::Spatial::Display::CMonitorParameter*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getWhitePointX();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CMonitorParameter_getWhitePointY_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CMonitorParameter* ptrNativeObject = (EarthView::World::Spatial::Display::CMonitorParameter*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getWhitePointY();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CMonitorParameter_setGamma_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Display::CMonitorParameter* ptrNativeObject = (EarthView::World::Spatial::Display::CMonitorParameter*) pObjectXXXX;
					ptrNativeObject->setGamma(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CMonitorParameter_setRedPointX_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Display::CMonitorParameter* ptrNativeObject = (EarthView::World::Spatial::Display::CMonitorParameter*) pObjectXXXX;
					ptrNativeObject->setRedPointX(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CMonitorParameter_setRedPointY_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Display::CMonitorParameter* ptrNativeObject = (EarthView::World::Spatial::Display::CMonitorParameter*) pObjectXXXX;
					ptrNativeObject->setRedPointY(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CMonitorParameter_setGreenPointX_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Display::CMonitorParameter* ptrNativeObject = (EarthView::World::Spatial::Display::CMonitorParameter*) pObjectXXXX;
					ptrNativeObject->setGreenPointX(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CMonitorParameter_setGreenPointY_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Display::CMonitorParameter* ptrNativeObject = (EarthView::World::Spatial::Display::CMonitorParameter*) pObjectXXXX;
					ptrNativeObject->setGreenPointY(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CMonitorParameter_setBluePointX_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Display::CMonitorParameter* ptrNativeObject = (EarthView::World::Spatial::Display::CMonitorParameter*) pObjectXXXX;
					ptrNativeObject->setBluePointX(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CMonitorParameter_setBluePointY_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Display::CMonitorParameter* ptrNativeObject = (EarthView::World::Spatial::Display::CMonitorParameter*) pObjectXXXX;
					ptrNativeObject->setBluePointY(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CMonitorParameter_setWhitePointX_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Display::CMonitorParameter* ptrNativeObject = (EarthView::World::Spatial::Display::CMonitorParameter*) pObjectXXXX;
					ptrNativeObject->setWhitePointX(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CMonitorParameter_setWhitePointY_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Display::CMonitorParameter* ptrNativeObject = (EarthView::World::Spatial::Display::CMonitorParameter*) pObjectXXXX;
					ptrNativeObject->setWhitePointY(value);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::CMonitorParameter*  _stdcall EarthView_World_Spatial_Display_CMonitorParameter_clone_CMonitorParameter(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CMonitorParameter* ptrNativeObject = (EarthView::World::Spatial::Display::CMonitorParameter*) pObjectXXXX;
					if (dynamic_cast<CMonitorParameterProxy*>((EarthView::World::Spatial::Display::CMonitorParameter*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::CMonitorParameter* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CMonitorParameter::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::CMonitorParameter* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CMonitorParameter_clone_CMonitorParameter( void *pObjectXXXX, EarthView_World_Spatial_Display_CMonitorParameter_clone_CMonitorParameter_Callback* pCallback )
				{
					CMonitorParameterProxy* ptr = dynamic_cast<CMonitorParameterProxy*>((EarthView::World::Spatial::Display::CMonitorParameter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CMonitorParameter_clone_CMonitorParameter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::CMonitorParameter*  _stdcall EarthView_World_Spatial_Display_CMonitorParameter_clone_CMonitorParameter_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CMonitorParameter* ptrNativeObject = (EarthView::World::Spatial::Display::CMonitorParameter*) pObjectXXXX;
					EarthView::World::Spatial::Display::CMonitorParameter* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CMonitorParameter::clone();
					return objXXXX;
				}
			}
		}
	}
}
