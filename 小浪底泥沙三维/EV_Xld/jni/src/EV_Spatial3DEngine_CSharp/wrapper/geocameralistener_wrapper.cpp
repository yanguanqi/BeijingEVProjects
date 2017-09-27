/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/geocameralistener.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGeoCameraListener_cameraParamChanged_void_CCamera_Callback)(_in EarthView::World::Graphic::CCamera* camera);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGeoCameraListener_cameraPreRenderScene_void_CCamera_Callback)(_in EarthView::World::Graphic::CCamera* cam);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGeoCameraListener_cameraPostRenderScene_void_CCamera_Callback)(_in EarthView::World::Graphic::CCamera* cam);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGeoCameraListener_cameraDestroyed_void_CCamera_Callback)(_in EarthView::World::Graphic::CCamera* cam);
			class CGeoCameraListenerProxy : public EarthView::World::Spatial3D::CGeoCameraListener
			{
			private:
				EarthView_World_Spatial3D_CGeoCameraListener_cameraParamChanged_void_CCamera_Callback* m_EarthView_World_Spatial3D_CGeoCameraListener_cameraParamChanged_void_CCamera_Callback;
				EarthView_World_Spatial3D_CGeoCameraListener_cameraPreRenderScene_void_CCamera_Callback* m_EarthView_World_Spatial3D_CGeoCameraListener_cameraPreRenderScene_void_CCamera_Callback;
				EarthView_World_Spatial3D_CGeoCameraListener_cameraPostRenderScene_void_CCamera_Callback* m_EarthView_World_Spatial3D_CGeoCameraListener_cameraPostRenderScene_void_CCamera_Callback;
				EarthView_World_Spatial3D_CGeoCameraListener_cameraDestroyed_void_CCamera_Callback* m_EarthView_World_Spatial3D_CGeoCameraListener_cameraDestroyed_void_CCamera_Callback;
			public:
				CGeoCameraListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CGeoCameraListener(pList)
				{
					m_EarthView_World_Spatial3D_CGeoCameraListener_cameraParamChanged_void_CCamera_Callback = NULL;
					m_EarthView_World_Spatial3D_CGeoCameraListener_cameraPreRenderScene_void_CCamera_Callback = NULL;
					m_EarthView_World_Spatial3D_CGeoCameraListener_cameraPostRenderScene_void_CCamera_Callback = NULL;
					m_EarthView_World_Spatial3D_CGeoCameraListener_cameraDestroyed_void_CCamera_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial3D_CGeoCameraListener_cameraParamChanged_void_CCamera(EarthView_World_Spatial3D_CGeoCameraListener_cameraParamChanged_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGeoCameraListener_cameraParamChanged_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGeoCameraListener_cameraPreRenderScene_void_CCamera(EarthView_World_Spatial3D_CGeoCameraListener_cameraPreRenderScene_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGeoCameraListener_cameraPreRenderScene_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGeoCameraListener_cameraPostRenderScene_void_CCamera(EarthView_World_Spatial3D_CGeoCameraListener_cameraPostRenderScene_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGeoCameraListener_cameraPostRenderScene_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGeoCameraListener_cameraDestroyed_void_CCamera(EarthView_World_Spatial3D_CGeoCameraListener_cameraDestroyed_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGeoCameraListener_cameraDestroyed_void_CCamera_Callback = pCallback;
				}
				virtual void cameraParamChanged(_in EarthView::World::Graphic::CCamera* camera)
				{
					if(m_EarthView_World_Spatial3D_CGeoCameraListener_cameraParamChanged_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGeoCameraListener_cameraParamChanged_void_CCamera_Callback(camera);
					}
					else
						return this->CGeoCameraListener::cameraParamChanged(camera);
				}
				virtual void cameraPreRenderScene(_in EarthView::World::Graphic::CCamera* cam)
				{
					if(m_EarthView_World_Spatial3D_CGeoCameraListener_cameraPreRenderScene_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGeoCameraListener_cameraPreRenderScene_void_CCamera_Callback(cam);
					}
					else
						return this->CGeoCameraListener::cameraPreRenderScene(cam);
				}
				virtual void cameraPostRenderScene(_in EarthView::World::Graphic::CCamera* cam)
				{
					if(m_EarthView_World_Spatial3D_CGeoCameraListener_cameraPostRenderScene_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGeoCameraListener_cameraPostRenderScene_void_CCamera_Callback(cam);
					}
					else
						return this->CGeoCameraListener::cameraPostRenderScene(cam);
				}
				virtual void cameraDestroyed(_in EarthView::World::Graphic::CCamera* cam)
				{
					if(m_EarthView_World_Spatial3D_CGeoCameraListener_cameraDestroyed_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGeoCameraListener_cameraDestroyed_void_CCamera_Callback(cam);
					}
					else
						return this->CGeoCameraListener::cameraDestroyed(cam);
				}
			};
			REGISTER_FACTORY_CLASS(CGeoCameraListenerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGeoCameraListener_cameraParamChanged_void_CCamera(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* camera )
			{
				EarthView::World::Spatial3D::CGeoCameraListener* ptrNativeObject = (EarthView::World::Spatial3D::CGeoCameraListener*) pObjectXXXX;
				if (dynamic_cast<CGeoCameraListenerProxy*>((EarthView::World::Spatial3D::CGeoCameraListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3D::CGeoCameraListener::cameraParamChanged(camera);
				else
					ptrNativeObject->cameraParamChanged(camera);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGeoCameraListener_cameraParamChanged_void_CCamera( void *pObjectXXXX, EarthView_World_Spatial3D_CGeoCameraListener_cameraParamChanged_void_CCamera_Callback* pCallback )
			{
				CGeoCameraListenerProxy* ptr = dynamic_cast<CGeoCameraListenerProxy*>((EarthView::World::Spatial3D::CGeoCameraListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGeoCameraListener_cameraParamChanged_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGeoCameraListener_cameraParamChanged_void_CCamera_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* camera )
			{
				EarthView::World::Spatial3D::CGeoCameraListener* ptrNativeObject = (EarthView::World::Spatial3D::CGeoCameraListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3D::CGeoCameraListener::cameraParamChanged(camera);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::CGlobeCamera*  _stdcall Get_EarthView_World_Spatial3D_CGeoCameraListener_mCamera( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGeoCameraListener* ptrNativeObject = (EarthView::World::Spatial3D::CGeoCameraListener*) pObjectXXXX;
				EarthView::World::Spatial3D::CGlobeCamera* objXXXX = ptrNativeObject->mCamera;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGeoCameraListener_mCamera( void *pObjectXXXX, EarthView::World::Spatial3D::CGlobeCamera*  value )
			{
				((EarthView::World::Spatial3D::CGeoCameraListener*)pObjectXXXX)->mCamera = value;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGeoCameraListener_cameraPreRenderScene_void_CCamera( void *pObjectXXXX, EarthView_World_Spatial3D_CGeoCameraListener_cameraPreRenderScene_void_CCamera_Callback* pCallback )
			{
				CGeoCameraListenerProxy* ptr = dynamic_cast<CGeoCameraListenerProxy*>((EarthView::World::Spatial3D::CGeoCameraListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGeoCameraListener_cameraPreRenderScene_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGeoCameraListener_cameraPostRenderScene_void_CCamera( void *pObjectXXXX, EarthView_World_Spatial3D_CGeoCameraListener_cameraPostRenderScene_void_CCamera_Callback* pCallback )
			{
				CGeoCameraListenerProxy* ptr = dynamic_cast<CGeoCameraListenerProxy*>((EarthView::World::Spatial3D::CGeoCameraListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGeoCameraListener_cameraPostRenderScene_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGeoCameraListener_cameraDestroyed_void_CCamera( void *pObjectXXXX, EarthView_World_Spatial3D_CGeoCameraListener_cameraDestroyed_void_CCamera_Callback* pCallback )
			{
				CGeoCameraListenerProxy* ptr = dynamic_cast<CGeoCameraListenerProxy*>((EarthView::World::Spatial3D::CGeoCameraListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGeoCameraListener_cameraDestroyed_void_CCamera(pCallback);
				}
			}
		}
	}
}
