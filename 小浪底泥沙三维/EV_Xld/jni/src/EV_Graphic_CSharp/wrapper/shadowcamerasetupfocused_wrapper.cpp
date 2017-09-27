/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/shadowcamerasetupfocused.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef void  ( _stdcall EarthView_World_Graphic_CFocusedShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback)(_in const EarthView::World::Graphic::CSceneManager* sm, _in const EarthView::World::Graphic::CCamera* cam, _in const EarthView::World::Graphic::CViewport* vp, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CCamera* texCam, _in ev_uint64  iteration);
			class CFocusedShadowCameraSetupProxy : public EarthView::World::Graphic::CFocusedShadowCameraSetup
			{
			private:
				EarthView_World_Graphic_CFocusedShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback* m_EarthView_World_Graphic_CFocusedShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback;
			public:
				CFocusedShadowCameraSetupProxy(EarthView::World::Core::CNameValuePairList *pList) : CFocusedShadowCameraSetup(pList)
				{
					m_EarthView_World_Graphic_CFocusedShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CFocusedShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(EarthView_World_Graphic_CFocusedShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFocusedShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback = pCallback;
				}
				virtual void getShadowCamera(_in const EarthView::World::Graphic::CSceneManager* sm, _in const EarthView::World::Graphic::CCamera* cam, _in const EarthView::World::Graphic::CViewport* vp, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CCamera* texCam, _in ev_size_t iteration) const
				{
					if(m_EarthView_World_Graphic_CFocusedShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFocusedShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback(sm, cam, vp, light, texCam, iteration);
					}
					else
						return this->CFocusedShadowCameraSetup::getShadowCamera(sm, cam, vp, light, texCam, iteration);
				}
			};
			REGISTER_FACTORY_CLASS(CFocusedShadowCameraSetupProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFocusedShadowCameraSetup_CPointListBody_merge_void_CPointListBody(void *pObjectXXXX, _in const void* plb )
			{
				EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody* ptrNativeObject = (EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody*) pObjectXXXX;
				ptrNativeObject->merge(*(EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody*)plb);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFocusedShadowCameraSetup_CPointListBody_build_void_CConvexBody_ev_bool(void *pObjectXXXX, _in const void* body, _in ev_bool filterDuplicates )
			{
				EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody* ptrNativeObject = (EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody*) pObjectXXXX;
				ptrNativeObject->build(*(EarthView::World::Graphic::CConvexBody*)body, filterDuplicates);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFocusedShadowCameraSetup_CPointListBody_buildAndIncludeDirection_void_CConvexBody_Real_CVector3(void *pObjectXXXX, _in const void* body, _in Real extrudeDist, _in const void* dir )
			{
				EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody* ptrNativeObject = (EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody*) pObjectXXXX;
				ptrNativeObject->buildAndIncludeDirection(*(EarthView::World::Graphic::CConvexBody*)body, extrudeDist, *(EarthView::World::Spatial::Math::CVector3*)dir);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CFocusedShadowCameraSetup_CPointListBody_getAAB_CAxisAlignedBox(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody* ptrNativeObject = (EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CAxisAlignedBox& objXXXX = ptrNativeObject->getAAB();
				const EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFocusedShadowCameraSetup_CPointListBody_addPoint_void_CVector3(void *pObjectXXXX, _in const void* point )
			{
				EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody* ptrNativeObject = (EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody*) pObjectXXXX;
				ptrNativeObject->addPoint(*(EarthView::World::Spatial::Math::CVector3*)point);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFocusedShadowCameraSetup_CPointListBody_addAAB_void_CAxisAlignedBox(void *pObjectXXXX, _in const void* aab )
			{
				EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody* ptrNativeObject = (EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody*) pObjectXXXX;
				ptrNativeObject->addAAB(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)aab);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CFocusedShadowCameraSetup_CPointListBody_getPoint_CVector3_ev_size_t(void *pObjectXXXX, _in ev_uint64  cnt )
			{
				const EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody* ptrNativeObject = (EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getPoint(cnt);
				const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CFocusedShadowCameraSetup_CPointListBody_getPointCount_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody* ptrNativeObject = (EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getPointCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFocusedShadowCameraSetup_CPointListBody_reset_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody* ptrNativeObject = (EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody*) pObjectXXXX;
				ptrNativeObject->reset();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CFocusedShadowCameraSetup_mBodyB( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFocusedShadowCameraSetup* ptrNativeObject = (EarthView::World::Graphic::CFocusedShadowCameraSetup*) pObjectXXXX;
				EarthView::World::Graphic::CConvexBody &objXXXX = ptrNativeObject->mBodyB;
				EarthView::World::Graphic::CConvexBody *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CFocusedShadowCameraSetup_mBodyB( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CFocusedShadowCameraSetup*)pObjectXXXX)->mBodyB = *(EarthView::World::Graphic::CConvexBody*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CFocusedShadowCameraSetup_mPointListBodyB( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFocusedShadowCameraSetup* ptrNativeObject = (EarthView::World::Graphic::CFocusedShadowCameraSetup*) pObjectXXXX;
				EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody &objXXXX = ptrNativeObject->mPointListBodyB;
				EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CFocusedShadowCameraSetup_mPointListBodyB( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CFocusedShadowCameraSetup*)pObjectXXXX)->mPointListBodyB = *(EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CFocusedShadowCameraSetup_mPointListBodyLVS( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFocusedShadowCameraSetup* ptrNativeObject = (EarthView::World::Graphic::CFocusedShadowCameraSetup*) pObjectXXXX;
				EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody &objXXXX = ptrNativeObject->mPointListBodyLVS;
				EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CFocusedShadowCameraSetup_mPointListBodyLVS( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CFocusedShadowCameraSetup*)pObjectXXXX)->mPointListBodyLVS = *(EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody*)value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFocusedShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(void *pObjectXXXX, _in const EarthView::World::Graphic::CSceneManager* sm, _in const EarthView::World::Graphic::CCamera* cam, _in const EarthView::World::Graphic::CViewport* vp, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CCamera* texCam, _in ev_uint64  iteration )
			{
				const EarthView::World::Graphic::CFocusedShadowCameraSetup* ptrNativeObject = (EarthView::World::Graphic::CFocusedShadowCameraSetup*) pObjectXXXX;
				if (dynamic_cast<CFocusedShadowCameraSetupProxy*>((EarthView::World::Graphic::CFocusedShadowCameraSetup*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFocusedShadowCameraSetup::getShadowCamera(sm, cam, vp, light, texCam, iteration);
				else
					ptrNativeObject->getShadowCamera(sm, cam, vp, light, texCam, iteration);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFocusedShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CFocusedShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback* pCallback )
			{
				CFocusedShadowCameraSetupProxy* ptr = dynamic_cast<CFocusedShadowCameraSetupProxy*>((EarthView::World::Graphic::CFocusedShadowCameraSetup*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFocusedShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFocusedShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CSceneManager* sm, _in const EarthView::World::Graphic::CCamera* cam, _in const EarthView::World::Graphic::CViewport* vp, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CCamera* texCam, _in ev_uint64  iteration )
			{
				const EarthView::World::Graphic::CFocusedShadowCameraSetup* ptrNativeObject = (EarthView::World::Graphic::CFocusedShadowCameraSetup*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFocusedShadowCameraSetup::getShadowCamera(sm, cam, vp, light, texCam, iteration);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFocusedShadowCameraSetup_setUseAggressiveFocusRegion_void_ev_bool(void *pObjectXXXX, _in ev_bool aggressive )
			{
				EarthView::World::Graphic::CFocusedShadowCameraSetup* ptrNativeObject = (EarthView::World::Graphic::CFocusedShadowCameraSetup*) pObjectXXXX;
				ptrNativeObject->setUseAggressiveFocusRegion(aggressive);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFocusedShadowCameraSetup_getUseAggressiveFocusRegion_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFocusedShadowCameraSetup* ptrNativeObject = (EarthView::World::Graphic::CFocusedShadowCameraSetup*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getUseAggressiveFocusRegion();
				return objXXXX;
			}
		}
	}
}
