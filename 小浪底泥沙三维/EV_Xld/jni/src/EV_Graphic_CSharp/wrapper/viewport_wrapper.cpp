/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/viewport.h"
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
			typedef void  ( _stdcall EarthView_World_Graphic_CViewport_setRenderQueueInvocationSequenceName_void_EVString_Callback)(_in char*& sequenceName);
			typedef char*  ( _stdcall EarthView_World_Graphic_CViewport_getRenderQueueInvocationSequenceName_EVString_Callback)();
			class CViewportProxy : public EarthView::World::Graphic::CViewport
			{
			private:
				EarthView_World_Graphic_CViewport_setRenderQueueInvocationSequenceName_void_EVString_Callback* m_EarthView_World_Graphic_CViewport_setRenderQueueInvocationSequenceName_void_EVString_Callback;
				EarthView_World_Graphic_CViewport_getRenderQueueInvocationSequenceName_EVString_Callback* m_EarthView_World_Graphic_CViewport_getRenderQueueInvocationSequenceName_EVString_Callback;
			public:
				CViewportProxy(EarthView::World::Core::CNameValuePairList *pList) : CViewport(pList)
				{
					m_EarthView_World_Graphic_CViewport_setRenderQueueInvocationSequenceName_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CViewport_getRenderQueueInvocationSequenceName_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CViewport_setRenderQueueInvocationSequenceName_void_EVString(EarthView_World_Graphic_CViewport_setRenderQueueInvocationSequenceName_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CViewport_setRenderQueueInvocationSequenceName_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CViewport_getRenderQueueInvocationSequenceName_EVString(EarthView_World_Graphic_CViewport_getRenderQueueInvocationSequenceName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CViewport_getRenderQueueInvocationSequenceName_EVString_Callback = pCallback;
				}
				virtual void setRenderQueueInvocationSequenceName(_in const EVString& sequenceName)
				{
					if(m_EarthView_World_Graphic_CViewport_setRenderQueueInvocationSequenceName_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* sequenceName_Char = sequenceName.makeBuffer();
						m_EarthView_World_Graphic_CViewport_setRenderQueueInvocationSequenceName_void_EVString_Callback(sequenceName_Char);
					}
					else
						return this->CViewport::setRenderQueueInvocationSequenceName(sequenceName);
				}
				virtual EVString getRenderQueueInvocationSequenceName() const
				{
					if(m_EarthView_World_Graphic_CViewport_getRenderQueueInvocationSequenceName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CViewport_getRenderQueueInvocationSequenceName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CViewport::getRenderQueueInvocationSequenceName();
				}
			};
			REGISTER_FACTORY_CLASS(CViewportProxy);
			typedef void  ( _stdcall EarthView_World_Graphic_CViewport_CViewportListener_viewportCameraChanged_void_CViewport_Callback)(_in EarthView::World::Graphic::CViewport* viewport);
			typedef void  ( _stdcall EarthView_World_Graphic_CViewport_CViewportListener_viewportDimensionsChanged_void_CViewport_Callback)(_in EarthView::World::Graphic::CViewport* viewport);
			typedef void  ( _stdcall EarthView_World_Graphic_CViewport_CViewportListener_viewportDestroyed_void_CViewport_Callback)(_in EarthView::World::Graphic::CViewport* viewport);
			class CViewportListenerProxy : public EarthView::World::Graphic::CViewport::CViewportListener
			{
			private:
				EarthView_World_Graphic_CViewport_CViewportListener_viewportCameraChanged_void_CViewport_Callback* m_EarthView_World_Graphic_CViewport_CViewportListener_viewportCameraChanged_void_CViewport_Callback;
				EarthView_World_Graphic_CViewport_CViewportListener_viewportDimensionsChanged_void_CViewport_Callback* m_EarthView_World_Graphic_CViewport_CViewportListener_viewportDimensionsChanged_void_CViewport_Callback;
				EarthView_World_Graphic_CViewport_CViewportListener_viewportDestroyed_void_CViewport_Callback* m_EarthView_World_Graphic_CViewport_CViewportListener_viewportDestroyed_void_CViewport_Callback;
			public:
				CViewportListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CViewportListener(pList)
				{
					m_EarthView_World_Graphic_CViewport_CViewportListener_viewportCameraChanged_void_CViewport_Callback = NULL;
					m_EarthView_World_Graphic_CViewport_CViewportListener_viewportDimensionsChanged_void_CViewport_Callback = NULL;
					m_EarthView_World_Graphic_CViewport_CViewportListener_viewportDestroyed_void_CViewport_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CViewport_CViewportListener_viewportCameraChanged_void_CViewport(EarthView_World_Graphic_CViewport_CViewportListener_viewportCameraChanged_void_CViewport_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CViewport_CViewportListener_viewportCameraChanged_void_CViewport_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CViewport_CViewportListener_viewportDimensionsChanged_void_CViewport(EarthView_World_Graphic_CViewport_CViewportListener_viewportDimensionsChanged_void_CViewport_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CViewport_CViewportListener_viewportDimensionsChanged_void_CViewport_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CViewport_CViewportListener_viewportDestroyed_void_CViewport(EarthView_World_Graphic_CViewport_CViewportListener_viewportDestroyed_void_CViewport_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CViewport_CViewportListener_viewportDestroyed_void_CViewport_Callback = pCallback;
				}
				virtual void viewportCameraChanged(_in EarthView::World::Graphic::CViewport* viewport)
				{
					if(m_EarthView_World_Graphic_CViewport_CViewportListener_viewportCameraChanged_void_CViewport_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CViewport_CViewportListener_viewportCameraChanged_void_CViewport_Callback(viewport);
					}
					else
						return this->CViewportListener::viewportCameraChanged(viewport);
				}
				virtual void viewportDimensionsChanged(_in EarthView::World::Graphic::CViewport* viewport)
				{
					if(m_EarthView_World_Graphic_CViewport_CViewportListener_viewportDimensionsChanged_void_CViewport_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CViewport_CViewportListener_viewportDimensionsChanged_void_CViewport_Callback(viewport);
					}
					else
						return this->CViewportListener::viewportDimensionsChanged(viewport);
				}
				virtual void viewportDestroyed(_in EarthView::World::Graphic::CViewport* viewport)
				{
					if(m_EarthView_World_Graphic_CViewport_CViewportListener_viewportDestroyed_void_CViewport_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CViewport_CViewportListener_viewportDestroyed_void_CViewport_Callback(viewport);
					}
					else
						return this->CViewportListener::viewportDestroyed(viewport);
				}
			};
			REGISTER_FACTORY_CLASS(CViewportListenerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CViewport_CViewportListener_viewportCameraChanged_void_CViewport(void *pObjectXXXX, _in EarthView::World::Graphic::CViewport* viewport )
			{
				EarthView::World::Graphic::CViewport::CViewportListener* ptrNativeObject = (EarthView::World::Graphic::CViewport::CViewportListener*) pObjectXXXX;
				if (dynamic_cast<CViewportListenerProxy*>((EarthView::World::Graphic::CViewport::CViewportListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CViewport::CViewportListener::viewportCameraChanged(viewport);
				else
					ptrNativeObject->viewportCameraChanged(viewport);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CViewport_CViewportListener_viewportCameraChanged_void_CViewport( void *pObjectXXXX, EarthView_World_Graphic_CViewport_CViewportListener_viewportCameraChanged_void_CViewport_Callback* pCallback )
			{
				CViewportListenerProxy* ptr = dynamic_cast<CViewportListenerProxy*>((EarthView::World::Graphic::CViewport::CViewportListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CViewport_CViewportListener_viewportCameraChanged_void_CViewport(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CViewport_CViewportListener_viewportCameraChanged_void_CViewport_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CViewport* viewport )
			{
				EarthView::World::Graphic::CViewport::CViewportListener* ptrNativeObject = (EarthView::World::Graphic::CViewport::CViewportListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CViewport::CViewportListener::viewportCameraChanged(viewport);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CViewport_CViewportListener_viewportDimensionsChanged_void_CViewport(void *pObjectXXXX, _in EarthView::World::Graphic::CViewport* viewport )
			{
				EarthView::World::Graphic::CViewport::CViewportListener* ptrNativeObject = (EarthView::World::Graphic::CViewport::CViewportListener*) pObjectXXXX;
				if (dynamic_cast<CViewportListenerProxy*>((EarthView::World::Graphic::CViewport::CViewportListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CViewport::CViewportListener::viewportDimensionsChanged(viewport);
				else
					ptrNativeObject->viewportDimensionsChanged(viewport);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CViewport_CViewportListener_viewportDimensionsChanged_void_CViewport( void *pObjectXXXX, EarthView_World_Graphic_CViewport_CViewportListener_viewportDimensionsChanged_void_CViewport_Callback* pCallback )
			{
				CViewportListenerProxy* ptr = dynamic_cast<CViewportListenerProxy*>((EarthView::World::Graphic::CViewport::CViewportListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CViewport_CViewportListener_viewportDimensionsChanged_void_CViewport(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CViewport_CViewportListener_viewportDimensionsChanged_void_CViewport_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CViewport* viewport )
			{
				EarthView::World::Graphic::CViewport::CViewportListener* ptrNativeObject = (EarthView::World::Graphic::CViewport::CViewportListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CViewport::CViewportListener::viewportDimensionsChanged(viewport);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CViewport_CViewportListener_viewportDestroyed_void_CViewport(void *pObjectXXXX, _in EarthView::World::Graphic::CViewport* viewport )
			{
				EarthView::World::Graphic::CViewport::CViewportListener* ptrNativeObject = (EarthView::World::Graphic::CViewport::CViewportListener*) pObjectXXXX;
				if (dynamic_cast<CViewportListenerProxy*>((EarthView::World::Graphic::CViewport::CViewportListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CViewport::CViewportListener::viewportDestroyed(viewport);
				else
					ptrNativeObject->viewportDestroyed(viewport);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CViewport_CViewportListener_viewportDestroyed_void_CViewport( void *pObjectXXXX, EarthView_World_Graphic_CViewport_CViewportListener_viewportDestroyed_void_CViewport_Callback* pCallback )
			{
				CViewportListenerProxy* ptr = dynamic_cast<CViewportListenerProxy*>((EarthView::World::Graphic::CViewport::CViewportListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CViewport_CViewportListener_viewportDestroyed_void_CViewport(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CViewport_CViewportListener_viewportDestroyed_void_CViewport_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CViewport* viewport )
			{
				EarthView::World::Graphic::CViewport::CViewportListener* ptrNativeObject = (EarthView::World::Graphic::CViewport::CViewportListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CViewport::CViewportListener::viewportDestroyed(viewport);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CViewport__updateDimensions_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				ptrNativeObject->_updateDimensions();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CViewport_update_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				ptrNativeObject->update();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CViewport_clear_void_ev_uint32_CColourValue_Real_ev_uint16(void *pObjectXXXX, _in ev_uint32 buffers, _in const void* colour, _in Real depth, _in ev_uint16 stencil )
			{
				EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				ptrNativeObject->clear(buffers, *(EarthView::World::Graphic::CColourValue*)colour, depth, stencil);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CViewport_clear_void_ev_uint32_CColourValue_Real(void *pObjectXXXX, _in ev_uint32 buffers, _in const void* colour, _in Real depth )
			{
				EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				ptrNativeObject->clear(buffers, *(EarthView::World::Graphic::CColourValue*)colour, depth);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CViewport_clear_void_ev_uint32_CColourValue(void *pObjectXXXX, _in ev_uint32 buffers, _in const void* colour )
			{
				EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				ptrNativeObject->clear(buffers, *(EarthView::World::Graphic::CColourValue*)colour);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CViewport_clear_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 buffers )
			{
				EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				ptrNativeObject->clear(buffers);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CViewport_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderTarget*  _stdcall EarthView_World_Graphic_CViewport_getTarget_CRenderTarget(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				EarthView::World::Graphic::CRenderTarget* objXXXX = ptrNativeObject->getTarget();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCamera*  _stdcall EarthView_World_Graphic_CViewport_getCamera_CCamera(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				EarthView::World::Graphic::CCamera* objXXXX = ptrNativeObject->getCamera();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CViewport_setCamera_void_CCamera(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* ref_cam )
			{
				EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				ptrNativeObject->setCamera(ref_cam);
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Graphic_CViewport_getZOrder_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getZOrder();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CViewport_getLeft_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getLeft();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CViewport_getTop_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getTop();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CViewport_getWidth_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getWidth();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CViewport_getHeight_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getHeight();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Graphic_CViewport_getActualLeft_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getActualLeft();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Graphic_CViewport_getActualTop_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getActualTop();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Graphic_CViewport_getActualWidth_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getActualWidth();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Graphic_CViewport_getActualHeight_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getActualHeight();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CViewport_setDimensions_void_Real_Real_Real_Real(void *pObjectXXXX, _in Real left, _in Real top, _in Real width, _in Real height )
			{
				EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				ptrNativeObject->setDimensions(left, top, width, height);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CViewport_setOrientationMode_void_OrientationMode_ev_bool(void *pObjectXXXX, _in int orientationMode, _in ev_bool setDefault )
			{
				EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				ptrNativeObject->setOrientationMode((EarthView::World::Graphic::OrientationMode)orientationMode, setDefault);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CViewport_setOrientationMode_void_OrientationMode(void *pObjectXXXX, _in int orientationMode )
			{
				EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				ptrNativeObject->setOrientationMode((EarthView::World::Graphic::OrientationMode)orientationMode);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CViewport_getOrientationMode_OrientationMode(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				EarthView::World::Graphic::OrientationMode objXXXX = ptrNativeObject->getOrientationMode();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CViewport_setDefaultOrientationMode_void_OrientationMode(_in int orientationMode )
			{
				EarthView::World::Graphic::CViewport::setDefaultOrientationMode((EarthView::World::Graphic::OrientationMode)orientationMode);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CViewport_getDefaultOrientationMode_OrientationMode( )
			{
				EarthView::World::Graphic::OrientationMode objXXXX = EarthView::World::Graphic::CViewport::getDefaultOrientationMode();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CViewport_setBackgroundColour_void_CColourValue(void *pObjectXXXX, _in const void* colour )
			{
				EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				ptrNativeObject->setBackgroundColour(*(EarthView::World::Graphic::CColourValue*)colour);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CViewport_getBackgroundColour_CColourValue(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				const EarthView::World::Graphic::CColourValue& objXXXX = ptrNativeObject->getBackgroundColour();
				const EarthView::World::Graphic::CColourValue *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CViewport_calculateViewportProjectViewMatrix_CMatrix4(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->calculateViewportProjectViewMatrix();
				EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CViewport_setDepthClear_void_Real(void *pObjectXXXX, _in Real depth )
			{
				EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				ptrNativeObject->setDepthClear(depth);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CViewport_getDepthClear_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getDepthClear();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CViewport_setClearEveryFrame_void_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_bool clear, _in ev_uint32 buffers )
			{
				EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				ptrNativeObject->setClearEveryFrame(clear, buffers);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CViewport_setClearEveryFrame_void_ev_bool(void *pObjectXXXX, _in ev_bool clear )
			{
				EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				ptrNativeObject->setClearEveryFrame(clear);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CViewport_getClearEveryFrame_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getClearEveryFrame();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CViewport_getClearBuffers_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getClearBuffers();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CViewport_setAutoUpdated_void_ev_bool(void *pObjectXXXX, _in ev_bool autoupdate )
			{
				EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				ptrNativeObject->setAutoUpdated(autoupdate);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CViewport_isAutoUpdated_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isAutoUpdated();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CViewport_setMaterialScheme_void_EVString(void *pObjectXXXX, _in const char* schemeName )
			{
				EarthView::World::Core::ev_string schemeName1 = schemeName;
				EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				ptrNativeObject->setMaterialScheme(schemeName1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_CViewport_getMaterialScheme_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getMaterialScheme();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CViewport_getActualDimensions_void_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _inout ev_int32& left, _inout ev_int32& top, _inout ev_int32& width, _inout ev_int32& height )
			{
				const EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				ptrNativeObject->getActualDimensions(left, top, width, height);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CViewport__isUpdated_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->_isUpdated();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CViewport__clearUpdatedFlag_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				ptrNativeObject->_clearUpdatedFlag();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CViewport__getNumRenderedFaces_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->_getNumRenderedFaces();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CViewport__getNumRenderedBatches_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->_getNumRenderedBatches();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CViewport__getNumRenderedVertices_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->_getNumRenderedVertices();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CViewport_setOverlaysEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				ptrNativeObject->setOverlaysEnabled(enabled);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CViewport_getOverlaysEnabled_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getOverlaysEnabled();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CViewport_setSkiesEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				ptrNativeObject->setSkiesEnabled(enabled);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CViewport_getSkiesEnabled_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getSkiesEnabled();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CViewport_setShadowsEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				ptrNativeObject->setShadowsEnabled(enabled);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CViewport_getShadowsEnabled_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getShadowsEnabled();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CViewport_setVisibilityMask_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 mask )
			{
				EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				ptrNativeObject->setVisibilityMask(mask);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CViewport_getVisibilityMask_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getVisibilityMask();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CViewport_setRenderQueueInvocationSequenceName_void_EVString(void *pObjectXXXX, _in const char* sequenceName )
			{
				EarthView::World::Core::ev_string sequenceName1 = sequenceName;
				EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				if (dynamic_cast<CViewportProxy*>((EarthView::World::Graphic::CViewport*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CViewport::setRenderQueueInvocationSequenceName(sequenceName1);
				else
					ptrNativeObject->setRenderQueueInvocationSequenceName(sequenceName1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CViewport_setRenderQueueInvocationSequenceName_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CViewport_setRenderQueueInvocationSequenceName_void_EVString_Callback* pCallback )
			{
				CViewportProxy* ptr = dynamic_cast<CViewportProxy*>((EarthView::World::Graphic::CViewport*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CViewport_setRenderQueueInvocationSequenceName_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CViewport_setRenderQueueInvocationSequenceName_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* sequenceName )
			{
				EarthView::World::Core::ev_string sequenceName1 = sequenceName;
				EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CViewport::setRenderQueueInvocationSequenceName(sequenceName1);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CViewport_getRenderQueueInvocationSequenceName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				if (dynamic_cast<CViewportProxy*>((EarthView::World::Graphic::CViewport*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CViewport::getRenderQueueInvocationSequenceName();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getRenderQueueInvocationSequenceName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CViewport_getRenderQueueInvocationSequenceName_EVString( void *pObjectXXXX, EarthView_World_Graphic_CViewport_getRenderQueueInvocationSequenceName_EVString_Callback* pCallback )
			{
				CViewportProxy* ptr = dynamic_cast<CViewportProxy*>((EarthView::World::Graphic::CViewport*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CViewport_getRenderQueueInvocationSequenceName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CViewport_getRenderQueueInvocationSequenceName_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CViewport::getRenderQueueInvocationSequenceName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderQueueInvocationSequence*  _stdcall EarthView_World_Graphic_CViewport__getRenderQueueInvocationSequence_CRenderQueueInvocationSequence(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				EarthView::World::Graphic::CRenderQueueInvocationSequence* objXXXX = ptrNativeObject->_getRenderQueueInvocationSequence();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CViewport_pointOrientedToScreen_void_CVector2_ev_int32_CVector2(void *pObjectXXXX, _in const void* v, _in ev_int32 orientationMode, _inout void* outv )
			{
				EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				ptrNativeObject->pointOrientedToScreen(*(EarthView::World::Spatial::Math::CVector2*)v, orientationMode, *(EarthView::World::Spatial::Math::CVector2*)outv);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CViewport_pointOrientedToScreen_void_Real_Real_ev_int32_Real_Real(void *pObjectXXXX, _in Real orientedX, _in Real orientedY, _in ev_int32 orientationMode, _inout Real& screenX, _inout Real& screenY )
			{
				EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				ptrNativeObject->pointOrientedToScreen(orientedX, orientedY, orientationMode, screenX, screenY);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CViewport_addListener_void_CViewportListener(void *pObjectXXXX, _in EarthView::World::Graphic::CViewport::CViewportListener* ref_l )
			{
				EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				ptrNativeObject->addListener(ref_l);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CViewport_removeListener_void_CViewportListener(void *pObjectXXXX, _in EarthView::World::Graphic::CViewport::CViewportListener* l )
			{
				EarthView::World::Graphic::CViewport* ptrNativeObject = (EarthView::World::Graphic::CViewport*) pObjectXXXX;
				ptrNativeObject->removeListener(l);
			}
		}
	}
}
