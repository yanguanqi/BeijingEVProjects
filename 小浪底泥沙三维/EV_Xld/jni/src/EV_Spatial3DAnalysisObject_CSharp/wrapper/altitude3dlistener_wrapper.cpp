/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3danalysisobject/altitude3dlistener.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Analysis
			{
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Analysis_CAltitude3DListener_getAltitude_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 latitude, _in ev_real64 longitude);
				class CAltitude3DListenerProxy : public EarthView::World::Spatial3D::Analysis::CAltitude3DListener
				{
				private:
					EarthView_World_Spatial3D_Analysis_CAltitude3DListener_getAltitude_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial3D_Analysis_CAltitude3DListener_getAltitude_ev_real64_ev_real64_ev_real64_Callback;
				public:
					CAltitude3DListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CAltitude3DListener(pList)
					{
						m_EarthView_World_Spatial3D_Analysis_CAltitude3DListener_getAltitude_ev_real64_ev_real64_ev_real64_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAltitude3DListener_getAltitude_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial3D_Analysis_CAltitude3DListener_getAltitude_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAltitude3DListener_getAltitude_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					virtual ev_real64 getAltitude(_in ev_real64 latitude, _in ev_real64 longitude) const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAltitude3DListener_getAltitude_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Analysis_CAltitude3DListener_getAltitude_ev_real64_ev_real64_ev_real64_Callback(latitude, longitude);
							return returnValue;
						}
						else
							return this->CAltitude3DListener::getAltitude(latitude, longitude);
					}
				};
				REGISTER_FACTORY_CLASS(CAltitude3DListenerProxy);
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CAltitude3DListener_getAltitude_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 latitude, _in ev_real64 longitude )
				{
					const EarthView::World::Spatial3D::Analysis::CAltitude3DListener* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAltitude3DListener*) pObjectXXXX;
					if (dynamic_cast<CAltitude3DListenerProxy*>((EarthView::World::Spatial3D::Analysis::CAltitude3DListener*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAltitude3DListener::getAltitude(latitude, longitude);
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getAltitude(latitude, longitude);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAltitude3DListener_getAltitude_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAltitude3DListener_getAltitude_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CAltitude3DListenerProxy* ptr = dynamic_cast<CAltitude3DListenerProxy*>((EarthView::World::Spatial3D::Analysis::CAltitude3DListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAltitude3DListener_getAltitude_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CAltitude3DListener_getAltitude_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 latitude, _in ev_real64 longitude )
				{
					const EarthView::World::Spatial3D::Analysis::CAltitude3DListener* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAltitude3DListener*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAltitude3DListener::getAltitude(latitude, longitude);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Analysis_CAltitude3DListener_getDemMode_GetAltitudeStyle(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAltitude3DListener* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAltitude3DListener*) pObjectXXXX;
					EarthView::World::Spatial3D::Analysis::GetAltitudeStyle objXXXX = ptrNativeObject->getDemMode();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAltitude3DListener_setDemMode_void_GetAltitudeStyle(void *pObjectXXXX, _in int value )
				{
					EarthView::World::Spatial3D::Analysis::CAltitude3DListener* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAltitude3DListener*) pObjectXXXX;
					ptrNativeObject->setDemMode((EarthView::World::Spatial3D::Analysis::GetAltitudeStyle)value);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CAltitude3DListener_getInterval_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAltitude3DListener* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAltitude3DListener*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getInterval();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAltitude3DListener_setInterval_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial3D::Analysis::CAltitude3DListener* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAltitude3DListener*) pObjectXXXX;
					ptrNativeObject->setInterval(value);
				}
			}
		}
	}
}
