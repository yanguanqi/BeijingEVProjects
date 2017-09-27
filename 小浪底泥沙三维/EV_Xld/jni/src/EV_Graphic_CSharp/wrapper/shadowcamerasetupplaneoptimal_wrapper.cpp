/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/shadowcamerasetupplaneoptimal.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef void  ( _stdcall EarthView_World_Graphic_CPlaneOptimalShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback)(_in const EarthView::World::Graphic::CSceneManager* sm, _in const EarthView::World::Graphic::CCamera* cam, _in const EarthView::World::Graphic::CViewport* vp, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CCamera* texCam, _in ev_uint64  iteration);
			class CPlaneOptimalShadowCameraSetupProxy : public EarthView::World::Graphic::CPlaneOptimalShadowCameraSetup
			{
			private:
				EarthView_World_Graphic_CPlaneOptimalShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback* m_EarthView_World_Graphic_CPlaneOptimalShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback;
			public:
				CPlaneOptimalShadowCameraSetupProxy(EarthView::World::Core::CNameValuePairList *pList) : CPlaneOptimalShadowCameraSetup(pList)
				{
					m_EarthView_World_Graphic_CPlaneOptimalShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CPlaneOptimalShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(EarthView_World_Graphic_CPlaneOptimalShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPlaneOptimalShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback = pCallback;
				}
				virtual void getShadowCamera(_in const EarthView::World::Graphic::CSceneManager* sm, _in const EarthView::World::Graphic::CCamera* cam, _in const EarthView::World::Graphic::CViewport* vp, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CCamera* texCam, _in ev_size_t iteration) const
				{
					if(m_EarthView_World_Graphic_CPlaneOptimalShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CPlaneOptimalShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback(sm, cam, vp, light, texCam, iteration);
					}
					else
						return this->CPlaneOptimalShadowCameraSetup::getShadowCamera(sm, cam, vp, light, texCam, iteration);
				}
			};
			REGISTER_FACTORY_CLASS(CPlaneOptimalShadowCameraSetupProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPlaneOptimalShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(void *pObjectXXXX, _in const EarthView::World::Graphic::CSceneManager* sm, _in const EarthView::World::Graphic::CCamera* cam, _in const EarthView::World::Graphic::CViewport* vp, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CCamera* texCam, _in ev_uint64  iteration )
			{
				const EarthView::World::Graphic::CPlaneOptimalShadowCameraSetup* ptrNativeObject = (EarthView::World::Graphic::CPlaneOptimalShadowCameraSetup*) pObjectXXXX;
				if (dynamic_cast<CPlaneOptimalShadowCameraSetupProxy*>((EarthView::World::Graphic::CPlaneOptimalShadowCameraSetup*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CPlaneOptimalShadowCameraSetup::getShadowCamera(sm, cam, vp, light, texCam, iteration);
				else
					ptrNativeObject->getShadowCamera(sm, cam, vp, light, texCam, iteration);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPlaneOptimalShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CPlaneOptimalShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback* pCallback )
			{
				CPlaneOptimalShadowCameraSetupProxy* ptr = dynamic_cast<CPlaneOptimalShadowCameraSetupProxy*>((EarthView::World::Graphic::CPlaneOptimalShadowCameraSetup*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPlaneOptimalShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPlaneOptimalShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CSceneManager* sm, _in const EarthView::World::Graphic::CCamera* cam, _in const EarthView::World::Graphic::CViewport* vp, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CCamera* texCam, _in ev_uint64  iteration )
			{
				const EarthView::World::Graphic::CPlaneOptimalShadowCameraSetup* ptrNativeObject = (EarthView::World::Graphic::CPlaneOptimalShadowCameraSetup*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CPlaneOptimalShadowCameraSetup::getShadowCamera(sm, cam, vp, light, texCam, iteration);
			}
		}
	}
}
