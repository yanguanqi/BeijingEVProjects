/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/shadowcamerasetuplispsm.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef void  ( _stdcall EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setOptimalAdjustFactor_void_Real_Callback)(_in Real n);
			typedef Real  ( _stdcall EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getOptimalAdjustFactor_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setUseSimpleOptimalAdjust_void_ev_bool_Callback)(_in ev_bool s);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getUseSimpleOptimalAdjust_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setCameraLightDirectionThreshold_void_CDegree_Callback)(_in void* angle);
			typedef void*  ( _stdcall EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getCameraLightDirectionThreshold_CDegree_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback)(_in const EarthView::World::Graphic::CSceneManager* sm, _in const EarthView::World::Graphic::CCamera* cam, _in const EarthView::World::Graphic::CViewport* vp, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CCamera* texCam, _in ev_uint64  iteration);
			class CLiSPSMShadowCameraSetupProxy : public EarthView::World::Graphic::CLiSPSMShadowCameraSetup
			{
			private:
				EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setOptimalAdjustFactor_void_Real_Callback* m_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setOptimalAdjustFactor_void_Real_Callback;
				EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getOptimalAdjustFactor_Real_Callback* m_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getOptimalAdjustFactor_Real_Callback;
				EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setUseSimpleOptimalAdjust_void_ev_bool_Callback* m_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setUseSimpleOptimalAdjust_void_ev_bool_Callback;
				EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getUseSimpleOptimalAdjust_ev_bool_Callback* m_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getUseSimpleOptimalAdjust_ev_bool_Callback;
				EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setCameraLightDirectionThreshold_void_CDegree_Callback* m_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setCameraLightDirectionThreshold_void_CDegree_Callback;
				EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getCameraLightDirectionThreshold_CDegree_Callback* m_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getCameraLightDirectionThreshold_CDegree_Callback;
				EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback* m_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback;
			public:
				CLiSPSMShadowCameraSetupProxy(EarthView::World::Core::CNameValuePairList *pList) : CLiSPSMShadowCameraSetup(pList)
				{
					m_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setOptimalAdjustFactor_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getOptimalAdjustFactor_Real_Callback = NULL;
					m_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setUseSimpleOptimalAdjust_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getUseSimpleOptimalAdjust_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setCameraLightDirectionThreshold_void_CDegree_Callback = NULL;
					m_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getCameraLightDirectionThreshold_CDegree_Callback = NULL;
					m_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setOptimalAdjustFactor_void_Real(EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setOptimalAdjustFactor_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setOptimalAdjustFactor_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getOptimalAdjustFactor_Real(EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getOptimalAdjustFactor_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getOptimalAdjustFactor_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setUseSimpleOptimalAdjust_void_ev_bool(EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setUseSimpleOptimalAdjust_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setUseSimpleOptimalAdjust_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getUseSimpleOptimalAdjust_ev_bool(EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getUseSimpleOptimalAdjust_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getUseSimpleOptimalAdjust_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setCameraLightDirectionThreshold_void_CDegree(EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setCameraLightDirectionThreshold_void_CDegree_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setCameraLightDirectionThreshold_void_CDegree_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getCameraLightDirectionThreshold_CDegree(EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getCameraLightDirectionThreshold_CDegree_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getCameraLightDirectionThreshold_CDegree_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback = pCallback;
				}
				virtual void getShadowCamera(_in const EarthView::World::Graphic::CSceneManager* sm, _in const EarthView::World::Graphic::CCamera* cam, _in const EarthView::World::Graphic::CViewport* vp, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CCamera* texCam, _in ev_size_t iteration) const
				{
					if(m_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback(sm, cam, vp, light, texCam, iteration);
					}
					else
						return this->CLiSPSMShadowCameraSetup::getShadowCamera(sm, cam, vp, light, texCam, iteration);
				}
				virtual void setOptimalAdjustFactor(_in Real n)
				{
					if(m_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setOptimalAdjustFactor_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setOptimalAdjustFactor_void_Real_Callback(n);
					}
					else
						return this->CLiSPSMShadowCameraSetup::setOptimalAdjustFactor(n);
				}
				virtual Real getOptimalAdjustFactor() const
				{
					if(m_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getOptimalAdjustFactor_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getOptimalAdjustFactor_Real_Callback();
						return returnValue;
					}
					else
						return this->CLiSPSMShadowCameraSetup::getOptimalAdjustFactor();
				}
				virtual void setUseSimpleOptimalAdjust(_in ev_bool s)
				{
					if(m_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setUseSimpleOptimalAdjust_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setUseSimpleOptimalAdjust_void_ev_bool_Callback(s);
					}
					else
						return this->CLiSPSMShadowCameraSetup::setUseSimpleOptimalAdjust(s);
				}
				virtual ev_bool getUseSimpleOptimalAdjust() const
				{
					if(m_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getUseSimpleOptimalAdjust_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getUseSimpleOptimalAdjust_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CLiSPSMShadowCameraSetup::getUseSimpleOptimalAdjust();
				}
				virtual void setCameraLightDirectionThreshold(_in EarthView::World::Spatial::Math::CDegree angle)
				{
					if(m_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setCameraLightDirectionThreshold_void_CDegree_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setCameraLightDirectionThreshold_void_CDegree_Callback(&angle);
					}
					else
						return this->CLiSPSMShadowCameraSetup::setCameraLightDirectionThreshold(angle);
				}
				virtual EarthView::World::Spatial::Math::CDegree getCameraLightDirectionThreshold() const
				{
					if(m_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getCameraLightDirectionThreshold_CDegree_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CDegree returnValue = *(EarthView::World::Spatial::Math::CDegree*)m_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getCameraLightDirectionThreshold_CDegree_Callback();
						return returnValue;
					}
					else
						return this->CLiSPSMShadowCameraSetup::getCameraLightDirectionThreshold();
				}
			};
			REGISTER_FACTORY_CLASS(CLiSPSMShadowCameraSetupProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(void *pObjectXXXX, _in const EarthView::World::Graphic::CSceneManager* sm, _in const EarthView::World::Graphic::CCamera* cam, _in const EarthView::World::Graphic::CViewport* vp, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CCamera* texCam, _in ev_uint64  iteration )
			{
				const EarthView::World::Graphic::CLiSPSMShadowCameraSetup* ptrNativeObject = (EarthView::World::Graphic::CLiSPSMShadowCameraSetup*) pObjectXXXX;
				if (dynamic_cast<CLiSPSMShadowCameraSetupProxy*>((EarthView::World::Graphic::CLiSPSMShadowCameraSetup*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CLiSPSMShadowCameraSetup::getShadowCamera(sm, cam, vp, light, texCam, iteration);
				else
					ptrNativeObject->getShadowCamera(sm, cam, vp, light, texCam, iteration);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback* pCallback )
			{
				CLiSPSMShadowCameraSetupProxy* ptr = dynamic_cast<CLiSPSMShadowCameraSetupProxy*>((EarthView::World::Graphic::CLiSPSMShadowCameraSetup*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CSceneManager* sm, _in const EarthView::World::Graphic::CCamera* cam, _in const EarthView::World::Graphic::CViewport* vp, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CCamera* texCam, _in ev_uint64  iteration )
			{
				const EarthView::World::Graphic::CLiSPSMShadowCameraSetup* ptrNativeObject = (EarthView::World::Graphic::CLiSPSMShadowCameraSetup*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CLiSPSMShadowCameraSetup::getShadowCamera(sm, cam, vp, light, texCam, iteration);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setOptimalAdjustFactor_void_Real(void *pObjectXXXX, _in Real n )
			{
				EarthView::World::Graphic::CLiSPSMShadowCameraSetup* ptrNativeObject = (EarthView::World::Graphic::CLiSPSMShadowCameraSetup*) pObjectXXXX;
				if (dynamic_cast<CLiSPSMShadowCameraSetupProxy*>((EarthView::World::Graphic::CLiSPSMShadowCameraSetup*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CLiSPSMShadowCameraSetup::setOptimalAdjustFactor(n);
				else
					ptrNativeObject->setOptimalAdjustFactor(n);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setOptimalAdjustFactor_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setOptimalAdjustFactor_void_Real_Callback* pCallback )
			{
				CLiSPSMShadowCameraSetupProxy* ptr = dynamic_cast<CLiSPSMShadowCameraSetupProxy*>((EarthView::World::Graphic::CLiSPSMShadowCameraSetup*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setOptimalAdjustFactor_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setOptimalAdjustFactor_void_Real_NoVirtual(void *pObjectXXXX, _in Real n )
			{
				EarthView::World::Graphic::CLiSPSMShadowCameraSetup* ptrNativeObject = (EarthView::World::Graphic::CLiSPSMShadowCameraSetup*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CLiSPSMShadowCameraSetup::setOptimalAdjustFactor(n);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getOptimalAdjustFactor_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CLiSPSMShadowCameraSetup* ptrNativeObject = (EarthView::World::Graphic::CLiSPSMShadowCameraSetup*) pObjectXXXX;
				if (dynamic_cast<CLiSPSMShadowCameraSetupProxy*>((EarthView::World::Graphic::CLiSPSMShadowCameraSetup*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CLiSPSMShadowCameraSetup::getOptimalAdjustFactor();
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getOptimalAdjustFactor();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getOptimalAdjustFactor_Real( void *pObjectXXXX, EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getOptimalAdjustFactor_Real_Callback* pCallback )
			{
				CLiSPSMShadowCameraSetupProxy* ptr = dynamic_cast<CLiSPSMShadowCameraSetupProxy*>((EarthView::World::Graphic::CLiSPSMShadowCameraSetup*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getOptimalAdjustFactor_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getOptimalAdjustFactor_Real_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CLiSPSMShadowCameraSetup* ptrNativeObject = (EarthView::World::Graphic::CLiSPSMShadowCameraSetup*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CLiSPSMShadowCameraSetup::getOptimalAdjustFactor();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setUseSimpleOptimalAdjust_void_ev_bool(void *pObjectXXXX, _in ev_bool s )
			{
				EarthView::World::Graphic::CLiSPSMShadowCameraSetup* ptrNativeObject = (EarthView::World::Graphic::CLiSPSMShadowCameraSetup*) pObjectXXXX;
				if (dynamic_cast<CLiSPSMShadowCameraSetupProxy*>((EarthView::World::Graphic::CLiSPSMShadowCameraSetup*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CLiSPSMShadowCameraSetup::setUseSimpleOptimalAdjust(s);
				else
					ptrNativeObject->setUseSimpleOptimalAdjust(s);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setUseSimpleOptimalAdjust_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setUseSimpleOptimalAdjust_void_ev_bool_Callback* pCallback )
			{
				CLiSPSMShadowCameraSetupProxy* ptr = dynamic_cast<CLiSPSMShadowCameraSetupProxy*>((EarthView::World::Graphic::CLiSPSMShadowCameraSetup*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setUseSimpleOptimalAdjust_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setUseSimpleOptimalAdjust_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool s )
			{
				EarthView::World::Graphic::CLiSPSMShadowCameraSetup* ptrNativeObject = (EarthView::World::Graphic::CLiSPSMShadowCameraSetup*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CLiSPSMShadowCameraSetup::setUseSimpleOptimalAdjust(s);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getUseSimpleOptimalAdjust_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CLiSPSMShadowCameraSetup* ptrNativeObject = (EarthView::World::Graphic::CLiSPSMShadowCameraSetup*) pObjectXXXX;
				if (dynamic_cast<CLiSPSMShadowCameraSetupProxy*>((EarthView::World::Graphic::CLiSPSMShadowCameraSetup*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CLiSPSMShadowCameraSetup::getUseSimpleOptimalAdjust();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getUseSimpleOptimalAdjust();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getUseSimpleOptimalAdjust_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getUseSimpleOptimalAdjust_ev_bool_Callback* pCallback )
			{
				CLiSPSMShadowCameraSetupProxy* ptr = dynamic_cast<CLiSPSMShadowCameraSetupProxy*>((EarthView::World::Graphic::CLiSPSMShadowCameraSetup*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getUseSimpleOptimalAdjust_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getUseSimpleOptimalAdjust_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CLiSPSMShadowCameraSetup* ptrNativeObject = (EarthView::World::Graphic::CLiSPSMShadowCameraSetup*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CLiSPSMShadowCameraSetup::getUseSimpleOptimalAdjust();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setCameraLightDirectionThreshold_void_CDegree(void *pObjectXXXX, _in void* angle )
			{
				EarthView::World::Graphic::CLiSPSMShadowCameraSetup* ptrNativeObject = (EarthView::World::Graphic::CLiSPSMShadowCameraSetup*) pObjectXXXX;
				if (dynamic_cast<CLiSPSMShadowCameraSetupProxy*>((EarthView::World::Graphic::CLiSPSMShadowCameraSetup*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CLiSPSMShadowCameraSetup::setCameraLightDirectionThreshold(*(EarthView::World::Spatial::Math::CDegree*)angle);
				else
					ptrNativeObject->setCameraLightDirectionThreshold(*(EarthView::World::Spatial::Math::CDegree*)angle);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setCameraLightDirectionThreshold_void_CDegree( void *pObjectXXXX, EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setCameraLightDirectionThreshold_void_CDegree_Callback* pCallback )
			{
				CLiSPSMShadowCameraSetupProxy* ptr = dynamic_cast<CLiSPSMShadowCameraSetupProxy*>((EarthView::World::Graphic::CLiSPSMShadowCameraSetup*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setCameraLightDirectionThreshold_void_CDegree(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setCameraLightDirectionThreshold_void_CDegree_NoVirtual(void *pObjectXXXX, _in void* angle )
			{
				EarthView::World::Graphic::CLiSPSMShadowCameraSetup* ptrNativeObject = (EarthView::World::Graphic::CLiSPSMShadowCameraSetup*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CLiSPSMShadowCameraSetup::setCameraLightDirectionThreshold(*(EarthView::World::Spatial::Math::CDegree*)angle);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getCameraLightDirectionThreshold_CDegree(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CLiSPSMShadowCameraSetup* ptrNativeObject = (EarthView::World::Graphic::CLiSPSMShadowCameraSetup*) pObjectXXXX;
				if (dynamic_cast<CLiSPSMShadowCameraSetupProxy*>((EarthView::World::Graphic::CLiSPSMShadowCameraSetup*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Math::CDegree objXXXX = ptrNativeObject->EarthView::World::Graphic::CLiSPSMShadowCameraSetup::getCameraLightDirectionThreshold();
					EarthView::World::Spatial::Math::CDegree *pXXXX = new EarthView::World::Spatial::Math::CDegree(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Spatial::Math::CDegree objXXXX = ptrNativeObject->getCameraLightDirectionThreshold();
					EarthView::World::Spatial::Math::CDegree *pXXXX = new EarthView::World::Spatial::Math::CDegree(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getCameraLightDirectionThreshold_CDegree( void *pObjectXXXX, EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getCameraLightDirectionThreshold_CDegree_Callback* pCallback )
			{
				CLiSPSMShadowCameraSetupProxy* ptr = dynamic_cast<CLiSPSMShadowCameraSetupProxy*>((EarthView::World::Graphic::CLiSPSMShadowCameraSetup*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getCameraLightDirectionThreshold_CDegree(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getCameraLightDirectionThreshold_CDegree_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CLiSPSMShadowCameraSetup* ptrNativeObject = (EarthView::World::Graphic::CLiSPSMShadowCameraSetup*) pObjectXXXX;
				EarthView::World::Spatial::Math::CDegree objXXXX = ptrNativeObject->EarthView::World::Graphic::CLiSPSMShadowCameraSetup::getCameraLightDirectionThreshold();
				EarthView::World::Spatial::Math::CDegree *pXXXX = new EarthView::World::Spatial::Math::CDegree(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
		}
	}
}
