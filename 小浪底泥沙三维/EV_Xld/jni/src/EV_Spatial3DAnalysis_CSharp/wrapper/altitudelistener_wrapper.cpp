/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3danalysis/altitudelistener.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Analysis
			{
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Analysis_CAltitudeListener_getAltitude_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 latitude, _in ev_real64 longitude);
				class CAltitudeListenerProxy : public EarthView::World::Spatial3D::Analysis::CAltitudeListener
				{
				private:
					EarthView_World_Spatial3D_Analysis_CAltitudeListener_getAltitude_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial3D_Analysis_CAltitudeListener_getAltitude_ev_real64_ev_real64_ev_real64_Callback;
				public:
					CAltitudeListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CAltitudeListener(pList)
					{
						m_EarthView_World_Spatial3D_Analysis_CAltitudeListener_getAltitude_ev_real64_ev_real64_ev_real64_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAltitudeListener_getAltitude_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial3D_Analysis_CAltitudeListener_getAltitude_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAltitudeListener_getAltitude_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					virtual ev_real64 getAltitude(_in ev_real64 latitude, _in ev_real64 longitude) const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAltitudeListener_getAltitude_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Analysis_CAltitudeListener_getAltitude_ev_real64_ev_real64_ev_real64_Callback(latitude, longitude);
							return returnValue;
						}
						else
							return this->CAltitudeListener::getAltitude(latitude, longitude);
					}
				};
				REGISTER_FACTORY_CLASS(CAltitudeListenerProxy);
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CAltitudeListener_getAltitude_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 latitude, _in ev_real64 longitude )
				{
					const EarthView::World::Spatial3D::Analysis::CAltitudeListener* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAltitudeListener*) pObjectXXXX;
					if (dynamic_cast<CAltitudeListenerProxy*>((EarthView::World::Spatial3D::Analysis::CAltitudeListener*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAltitudeListener::getAltitude(latitude, longitude);
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getAltitude(latitude, longitude);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAltitudeListener_getAltitude_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAltitudeListener_getAltitude_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CAltitudeListenerProxy* ptr = dynamic_cast<CAltitudeListenerProxy*>((EarthView::World::Spatial3D::Analysis::CAltitudeListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAltitudeListener_getAltitude_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CAltitudeListener_getAltitude_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 latitude, _in ev_real64 longitude )
				{
					const EarthView::World::Spatial3D::Analysis::CAltitudeListener* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAltitudeListener*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAltitudeListener::getAltitude(latitude, longitude);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAltitudeListener_setGeoSceneManager_void_CGeoSceneManager(void *pObjectXXXX, _in EarthView::World::Spatial3D::CGeoSceneManager* ref_pManager )
				{
					EarthView::World::Spatial3D::Analysis::CAltitudeListener* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAltitudeListener*) pObjectXXXX;
					ptrNativeObject->setGeoSceneManager(ref_pManager);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAltitudeListener_setTerrainLayer_void_ITerrainLayer(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::ITerrainLayer* ref_pTerrainLayer )
				{
					EarthView::World::Spatial3D::Analysis::CAltitudeListener* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAltitudeListener*) pObjectXXXX;
					ptrNativeObject->setTerrainLayer(ref_pTerrainLayer);
				}
			}
		}
	}
}
