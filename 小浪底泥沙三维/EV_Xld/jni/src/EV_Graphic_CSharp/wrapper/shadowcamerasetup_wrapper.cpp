/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/shadowcamerasetup.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef void  ( _stdcall EarthView_World_Graphic_CShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback)(_in const EarthView::World::Graphic::CSceneManager* sm, _in const EarthView::World::Graphic::CCamera* cam, _in const EarthView::World::Graphic::CViewport* vp, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CCamera* texCam, _in ev_uint64  iteration);
			class CShadowCameraSetupProxy : public EarthView::World::Graphic::CShadowCameraSetup
			{
			private:
				EarthView_World_Graphic_CShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback* m_EarthView_World_Graphic_CShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback;
			public:
				CShadowCameraSetupProxy(EarthView::World::Core::CNameValuePairList *pList) : CShadowCameraSetup(pList)
				{
					m_EarthView_World_Graphic_CShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(EarthView_World_Graphic_CShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback = pCallback;
				}
				virtual void getShadowCamera(_in const EarthView::World::Graphic::CSceneManager* sm, _in const EarthView::World::Graphic::CCamera* cam, _in const EarthView::World::Graphic::CViewport* vp, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CCamera* texCam, _in ev_size_t iteration) const
				{
					if(m_EarthView_World_Graphic_CShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback(sm, cam, vp, light, texCam, iteration);
					}
					else
						return this->CShadowCameraSetup::getShadowCamera(sm, cam, vp, light, texCam, iteration);
				}
			};
			REGISTER_FACTORY_CLASS(CShadowCameraSetupProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(void *pObjectXXXX, _in const EarthView::World::Graphic::CSceneManager* sm, _in const EarthView::World::Graphic::CCamera* cam, _in const EarthView::World::Graphic::CViewport* vp, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CCamera* texCam, _in ev_uint64  iteration )
			{
				const EarthView::World::Graphic::CShadowCameraSetup* ptrNativeObject = (EarthView::World::Graphic::CShadowCameraSetup*) pObjectXXXX;
				if (dynamic_cast<CShadowCameraSetupProxy*>((EarthView::World::Graphic::CShadowCameraSetup*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CShadowCameraSetup::getShadowCamera(sm, cam, vp, light, texCam, iteration);
				else
					ptrNativeObject->getShadowCamera(sm, cam, vp, light, texCam, iteration);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback* pCallback )
			{
				CShadowCameraSetupProxy* ptr = dynamic_cast<CShadowCameraSetupProxy*>((EarthView::World::Graphic::CShadowCameraSetup*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CSceneManager* sm, _in const EarthView::World::Graphic::CCamera* cam, _in const EarthView::World::Graphic::CViewport* vp, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CCamera* texCam, _in ev_uint64  iteration )
			{
				const EarthView::World::Graphic::CShadowCameraSetup* ptrNativeObject = (EarthView::World::Graphic::CShadowCameraSetup*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CShadowCameraSetup::getShadowCamera(sm, cam, vp, light, texCam, iteration);
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback)(_in const EarthView::World::Graphic::CSceneManager* sm, _in const EarthView::World::Graphic::CCamera* cam, _in const EarthView::World::Graphic::CViewport* vp, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CCamera* texCam, _in ev_uint64  iteration);
			class CDefaultShadowCameraSetupProxy : public EarthView::World::Graphic::CDefaultShadowCameraSetup
			{
			private:
				EarthView_World_Graphic_CDefaultShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback* m_EarthView_World_Graphic_CDefaultShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback;
			public:
				CDefaultShadowCameraSetupProxy(EarthView::World::Core::CNameValuePairList *pList) : CDefaultShadowCameraSetup(pList)
				{
					m_EarthView_World_Graphic_CDefaultShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CDefaultShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(EarthView_World_Graphic_CDefaultShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback = pCallback;
				}
				virtual void getShadowCamera(_in const EarthView::World::Graphic::CSceneManager* sm, _in const EarthView::World::Graphic::CCamera* cam, _in const EarthView::World::Graphic::CViewport* vp, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CCamera* texCam, _in ev_size_t iteration) const
				{
					if(m_EarthView_World_Graphic_CDefaultShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback(sm, cam, vp, light, texCam, iteration);
					}
					else
						return this->CDefaultShadowCameraSetup::getShadowCamera(sm, cam, vp, light, texCam, iteration);
				}
			};
			REGISTER_FACTORY_CLASS(CDefaultShadowCameraSetupProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDefaultShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(void *pObjectXXXX, _in const EarthView::World::Graphic::CSceneManager* sm, _in const EarthView::World::Graphic::CCamera* cam, _in const EarthView::World::Graphic::CViewport* vp, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CCamera* texCam, _in ev_uint64  iteration )
			{
				const EarthView::World::Graphic::CDefaultShadowCameraSetup* ptrNativeObject = (EarthView::World::Graphic::CDefaultShadowCameraSetup*) pObjectXXXX;
				if (dynamic_cast<CDefaultShadowCameraSetupProxy*>((EarthView::World::Graphic::CDefaultShadowCameraSetup*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CDefaultShadowCameraSetup::getShadowCamera(sm, cam, vp, light, texCam, iteration);
				else
					ptrNativeObject->getShadowCamera(sm, cam, vp, light, texCam, iteration);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CDefaultShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback* pCallback )
			{
				CDefaultShadowCameraSetupProxy* ptr = dynamic_cast<CDefaultShadowCameraSetupProxy*>((EarthView::World::Graphic::CDefaultShadowCameraSetup*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDefaultShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CSceneManager* sm, _in const EarthView::World::Graphic::CCamera* cam, _in const EarthView::World::Graphic::CViewport* vp, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CCamera* texCam, _in ev_uint64  iteration )
			{
				const EarthView::World::Graphic::CDefaultShadowCameraSetup* ptrNativeObject = (EarthView::World::Graphic::CDefaultShadowCameraSetup*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CDefaultShadowCameraSetup::getShadowCamera(sm, cam, vp, light, texCam, iteration);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CShadowCameraSetup*  _stdcall EarthView_World_Graphic_ShadowCameraSetupPtr_get_CShadowCameraSetup(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::ShadowCameraSetupPtr* ptrNativeObject = (EarthView::World::Graphic::ShadowCameraSetupPtr*) pObjectXXXX;
				EarthView::World::Graphic::CShadowCameraSetup* objXXXX = ptrNativeObject->get();
				return objXXXX;
			}
		}
	}
}
