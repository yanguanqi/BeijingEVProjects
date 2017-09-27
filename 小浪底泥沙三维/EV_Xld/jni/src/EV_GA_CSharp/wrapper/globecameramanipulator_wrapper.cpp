/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "ga/globecameramanipulator.h"
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
		namespace Spatial3D
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
		}
		namespace Spatial3D
		{
			namespace Controls
			{
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CGoToTargetListener_cameraHasGetAtTarget_void_CGlobeCamera_Callback)(_in EarthView::World::Spatial3D::CGlobeCamera* globeCamera);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CGoToTargetListener_stopGoto_void_CGlobeCamera_Callback)(_in EarthView::World::Spatial3D::CGlobeCamera* globeCamera);
				class CGoToTargetListenerProxy : public EarthView::World::Spatial3D::Controls::CGoToTargetListener
				{
				private:
					EarthView_World_Spatial3D_Controls_CGoToTargetListener_cameraHasGetAtTarget_void_CGlobeCamera_Callback* m_EarthView_World_Spatial3D_Controls_CGoToTargetListener_cameraHasGetAtTarget_void_CGlobeCamera_Callback;
					EarthView_World_Spatial3D_Controls_CGoToTargetListener_stopGoto_void_CGlobeCamera_Callback* m_EarthView_World_Spatial3D_Controls_CGoToTargetListener_stopGoto_void_CGlobeCamera_Callback;
				public:
					CGoToTargetListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CGoToTargetListener(pList)
					{
						m_EarthView_World_Spatial3D_Controls_CGoToTargetListener_cameraHasGetAtTarget_void_CGlobeCamera_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGoToTargetListener_stopGoto_void_CGlobeCamera_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGoToTargetListener_cameraHasGetAtTarget_void_CGlobeCamera(EarthView_World_Spatial3D_Controls_CGoToTargetListener_cameraHasGetAtTarget_void_CGlobeCamera_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGoToTargetListener_cameraHasGetAtTarget_void_CGlobeCamera_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGoToTargetListener_stopGoto_void_CGlobeCamera(EarthView_World_Spatial3D_Controls_CGoToTargetListener_stopGoto_void_CGlobeCamera_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGoToTargetListener_stopGoto_void_CGlobeCamera_Callback = pCallback;
					}
					virtual void cameraHasGetAtTarget(_in EarthView::World::Spatial3D::CGlobeCamera* globeCamera)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGoToTargetListener_cameraHasGetAtTarget_void_CGlobeCamera_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CGoToTargetListener_cameraHasGetAtTarget_void_CGlobeCamera_Callback(globeCamera);
						}
						else
							return this->CGoToTargetListener::cameraHasGetAtTarget(globeCamera);
					}
					virtual void stopGoto(_in EarthView::World::Spatial3D::CGlobeCamera* globeCamera)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGoToTargetListener_stopGoto_void_CGlobeCamera_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CGoToTargetListener_stopGoto_void_CGlobeCamera_Callback(globeCamera);
						}
						else
							return this->CGoToTargetListener::stopGoto(globeCamera);
					}
				};
				REGISTER_FACTORY_CLASS(CGoToTargetListenerProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGoToTargetListener_cameraHasGetAtTarget_void_CGlobeCamera(void *pObjectXXXX, _in EarthView::World::Spatial3D::CGlobeCamera* globeCamera )
				{
					EarthView::World::Spatial3D::Controls::CGoToTargetListener* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGoToTargetListener*) pObjectXXXX;
					if (dynamic_cast<CGoToTargetListenerProxy*>((EarthView::World::Spatial3D::Controls::CGoToTargetListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Controls::CGoToTargetListener::cameraHasGetAtTarget(globeCamera);
					else
						ptrNativeObject->cameraHasGetAtTarget(globeCamera);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGoToTargetListener_cameraHasGetAtTarget_void_CGlobeCamera( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGoToTargetListener_cameraHasGetAtTarget_void_CGlobeCamera_Callback* pCallback )
				{
					CGoToTargetListenerProxy* ptr = dynamic_cast<CGoToTargetListenerProxy*>((EarthView::World::Spatial3D::Controls::CGoToTargetListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGoToTargetListener_cameraHasGetAtTarget_void_CGlobeCamera(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGoToTargetListener_cameraHasGetAtTarget_void_CGlobeCamera_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::CGlobeCamera* globeCamera )
				{
					EarthView::World::Spatial3D::Controls::CGoToTargetListener* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGoToTargetListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Controls::CGoToTargetListener::cameraHasGetAtTarget(globeCamera);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGoToTargetListener_stopGoto_void_CGlobeCamera(void *pObjectXXXX, _in EarthView::World::Spatial3D::CGlobeCamera* globeCamera )
				{
					EarthView::World::Spatial3D::Controls::CGoToTargetListener* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGoToTargetListener*) pObjectXXXX;
					if (dynamic_cast<CGoToTargetListenerProxy*>((EarthView::World::Spatial3D::Controls::CGoToTargetListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Controls::CGoToTargetListener::stopGoto(globeCamera);
					else
						ptrNativeObject->stopGoto(globeCamera);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGoToTargetListener_stopGoto_void_CGlobeCamera( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGoToTargetListener_stopGoto_void_CGlobeCamera_Callback* pCallback )
				{
					CGoToTargetListenerProxy* ptr = dynamic_cast<CGoToTargetListenerProxy*>((EarthView::World::Spatial3D::Controls::CGoToTargetListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGoToTargetListener_stopGoto_void_CGlobeCamera(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGoToTargetListener_stopGoto_void_CGlobeCamera_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::CGlobeCamera* globeCamera )
				{
					EarthView::World::Spatial3D::Controls::CGoToTargetListener* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGoToTargetListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Controls::CGoToTargetListener::stopGoto(globeCamera);
				}
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleMouseWheelEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* userEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* keyEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* frameEvent);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_reset_void_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_computeViewportMatrix_CMatrix4_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
				class CGlobeCameraManipulatorProxy : public EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator
				{
				private:
					EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleMouseWheelEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleMouseWheelEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_reset_void_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_reset_void_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_computeViewportMatrix_CMatrix4_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_computeViewportMatrix_CMatrix4_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleEvent_ev_bool_CGUIEvent_Callback;
				public:
					CGlobeCameraManipulatorProxy(EarthView::World::Core::CNameValuePairList *pList) : CGlobeCameraManipulator(pList)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleMouseWheelEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_reset_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_computeViewportMatrix_CMatrix4_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleEvent_ev_bool_CGUIEvent_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleMouseWheelEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleMouseWheelEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleMouseWheelEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleUserEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_reset_void(EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_reset_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_reset_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_computeViewportMatrix_CMatrix4(EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_computeViewportMatrix_CMatrix4_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_computeViewportMatrix_CMatrix4_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					virtual ev_bool handleMouseEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_Callback(mouseEvent);
							return returnValue;
						}
						else
							return this->CGlobeCameraManipulator::handleMouseEvent(mouseEvent);
					}
					virtual ev_bool handleFrameEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* frameEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_Callback(frameEvent);
							return returnValue;
						}
						else
							return this->CGlobeCameraManipulator::handleFrameEvent(frameEvent);
					}
					virtual ev_bool handleKeyEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* keyEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_Callback(keyEvent);
							return returnValue;
						}
						else
							return this->CGlobeCameraManipulator::handleKeyEvent(keyEvent);
					}
					virtual ev_bool handleMouseWheelEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleMouseWheelEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleMouseWheelEvent_ev_bool_CGUIEvent_Callback(mouseEvent);
							return returnValue;
						}
						else
							return this->CGlobeCameraManipulator::handleMouseWheelEvent(mouseEvent);
					}
					virtual ev_bool handleUserEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* useEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_Callback(useEvent);
							return returnValue;
						}
						else
							return this->CGlobeCameraManipulator::handleUserEvent(useEvent);
					}
					virtual ev_bool handleEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleEvent_ev_bool_CGUIEvent_Callback(guiEvent);
							return returnValue;
						}
						else
							return this->CGlobeCameraManipulator::handleEvent(guiEvent);
					}
					virtual void reset()
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_reset_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_reset_void_Callback();
						}
						else
							return this->CGlobeCameraManipulator::reset();
					}
					virtual EarthView::World::Spatial::Math::CMatrix4 computeViewportMatrix()
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_computeViewportMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Math::CMatrix4 returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_computeViewportMatrix_CMatrix4_Callback();
							return returnValue;
						}
						else
							return this->CGlobeCameraManipulator::computeViewportMatrix();
					}
				};
				REGISTER_FACTORY_CLASS(CGlobeCameraManipulatorProxy);
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_screenToScene_CRay_ev_real32_ev_real32(void *pObjectXXXX, _in ev_real32 x, _in ev_real32 y )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					EarthView::World::Spatial::Math::CRay objXXXX = ptrNativeObject->screenToScene(x, y);
					EarthView::World::Spatial::Math::CRay *pXXXX = new EarthView::World::Spatial::Math::CRay(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_createOverlay_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					ptrNativeObject->createOverlay();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_setIntersectModel_void_ev_bool(void *pObjectXXXX, _in ev_bool intersectModel )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					ptrNativeObject->setIntersectModel(intersectModel);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_getIntersectModel_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getIntersectModel();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_setIntersectOBQ_void_ev_bool(void *pObjectXXXX, _in ev_bool intersectOBQ )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					ptrNativeObject->setIntersectOBQ(intersectOBQ);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_getIntersectOBQ_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getIntersectOBQ();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_setIntersectMode_void_IntersectMode(void *pObjectXXXX, _in int intersectMode )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					ptrNativeObject->setIntersectMode((EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator::IntersectMode)intersectMode);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_getIntersectMode_IntersectMode(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator::IntersectMode objXXXX = ptrNativeObject->getIntersectMode();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_intersect_ev_bool_ev_real32_ev_real32_CVector3(void *pObjectXXXX, _in ev_real32 x, _in ev_real32 y, _in void* interectPoint )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->intersect(x, y, *(EarthView::World::Spatial::Math::CVector3*)interectPoint);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_intersect_ev_bool_ev_real32_ev_real32_CVector3_ev_bool_ev_bool_ev_bool_ev_bool(void *pObjectXXXX, _in ev_real32 x, _in ev_real32 y, _in void* interectPoint, _in ev_bool intersecModel, _in ev_bool intersectSea, _in ev_bool positiveSide, _in ev_bool negativeSide )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->intersect(x, y, *(EarthView::World::Spatial::Math::CVector3*)interectPoint, intersecModel, intersectSea, positiveSide, negativeSide);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_intersect_ev_bool_ev_real32_ev_real32_CVector3_ev_bool_ev_bool_ev_bool_ev_bool_ev_bool(void *pObjectXXXX, _in ev_real32 x, _in ev_real32 y, _in void* interectPoint, _in ev_bool intersecModel, _in ev_bool intersectSea, _in ev_bool positiveSide, _in ev_bool negativeSide, _inout ev_bool& modelIntersected )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->intersect(x, y, *(EarthView::World::Spatial::Math::CVector3*)interectPoint, intersecModel, intersectSea, positiveSide, negativeSide, modelIntersected);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_setCameraTiltRange_void_CDegree_CDegree(void *pObjectXXXX, _in const void* min, _in const void* max )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					ptrNativeObject->setCameraTiltRange(*(EarthView::World::Spatial::Math::CDegree*)min, *(EarthView::World::Spatial::Math::CDegree*)max);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_computeAltitudeDelta_ev_real64_CVector3_CGeoSceneManager(void *pObjectXXXX, _in const void* v, _in EarthView::World::Spatial3D::CGeoSceneManager* manager )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->computeAltitudeDelta(*(EarthView::World::Spatial::Math::CVector3*)v, manager);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_needResetCamera_ev_bool_CMatrix4(void *pObjectXXXX, _in const void* m )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->needResetCamera(*(EarthView::World::Spatial::Math::CMatrix4*)m);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_needResetCamera_ev_bool_CMatrix4_ev_real64(void *pObjectXXXX, _in const void* m, _inout ev_real64& distance )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->needResetCamera(*(EarthView::World::Spatial::Math::CMatrix4*)m, distance);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_computeRotationRatio_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 cameraAltitude )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->computeRotationRatio(cameraAltitude);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					if (dynamic_cast<CGlobeCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator::handleMouseEvent(mouseEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleMouseEvent(mouseEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CGlobeCameraManipulatorProxy* ptr = dynamic_cast<CGlobeCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator::handleMouseEvent(mouseEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* frameEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					if (dynamic_cast<CGlobeCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator::handleFrameEvent(frameEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleFrameEvent(frameEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CGlobeCameraManipulatorProxy* ptr = dynamic_cast<CGlobeCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* frameEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator::handleFrameEvent(frameEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* keyEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					if (dynamic_cast<CGlobeCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator::handleKeyEvent(keyEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleKeyEvent(keyEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CGlobeCameraManipulatorProxy* ptr = dynamic_cast<CGlobeCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* keyEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator::handleKeyEvent(keyEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleMouseWheelEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					if (dynamic_cast<CGlobeCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator::handleMouseWheelEvent(mouseEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleMouseWheelEvent(mouseEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleMouseWheelEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleMouseWheelEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CGlobeCameraManipulatorProxy* ptr = dynamic_cast<CGlobeCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleMouseWheelEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleMouseWheelEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator::handleMouseWheelEvent(mouseEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleUserEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* useEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					if (dynamic_cast<CGlobeCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator::handleUserEvent(useEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleUserEvent(useEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleUserEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CGlobeCameraManipulatorProxy* ptr = dynamic_cast<CGlobeCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleUserEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* useEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator::handleUserEvent(useEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_rotationAtCameraRight_void_CRadian(void *pObjectXXXX, _in const void* angleRadian )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					ptrNativeObject->rotationAtCameraRight(*(EarthView::World::Spatial::Math::CRadian*)angleRadian);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_rotationAtTargetRight_void_CRadian(void *pObjectXXXX, _in const void* angleRadian )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					ptrNativeObject->rotationAtTargetRight(*(EarthView::World::Spatial::Math::CRadian*)angleRadian);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_rightButtonMoveImpl_ev_bool_CGUIEvent_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* lastEvent, _in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->rightButtonMoveImpl(lastEvent, mouseEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_leftButtonMoveImpl_ev_bool_CGUIEvent_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* lastEvent, _in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->leftButtonMoveImpl(lastEvent, mouseEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_calculateMoveable_ev_bool_CGUIEvent_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* firstEvent, _in EarthView::World::Spatial::SystemUI::CGUIEvent* secondEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->calculateMoveable(firstEvent, secondEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_calculateZoomFactor_ev_real64_ev_real32(void *pObjectXXXX, _in ev_real32 mouseWheelDelta )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->calculateZoomFactor(mouseWheelDelta);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_computeRoll_ev_real64_CVector3(void *pObjectXXXX, _in const void* currentVector )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->computeRoll(*(EarthView::World::Spatial::Math::CVector3*)currentVector);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::CGlobeCamera*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_getGlobeCamera_CGlobeCamera(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					EarthView::World::Spatial3D::CGlobeCamera* objXXXX = ptrNativeObject->getGlobeCamera();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_rotationAndZoomCamera_void_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64 degree, _in ev_real64 zoomRatio )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					ptrNativeObject->rotationAndZoomCamera(x, y, degree, zoomRatio);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_tiltCamera_void_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64 degree )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					ptrNativeObject->tiltCamera(x, y, degree);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_enterUnderGroundMode_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					ptrNativeObject->enterUnderGroundMode();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_exitUnderGroundMode_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					ptrNativeObject->exitUnderGroundMode();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_resetCamAltitude_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					ptrNativeObject->resetCamAltitude();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_fadeInOut_void_ev_real64(void *pObjectXXXX, _in ev_real64 time )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					ptrNativeObject->fadeInOut(time);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_addGotoListener_void_CGoToTargetListener(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::CGoToTargetListener* ref_listener )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					ptrNativeObject->addGotoListener(ref_listener);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_removeGotoListener_void_CGoToTargetListener(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::CGoToTargetListener* listener )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					ptrNativeObject->removeGotoListener(listener);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_stopInertiaPan_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					ptrNativeObject->stopInertiaPan();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_setInertialPanEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					ptrNativeObject->setInertialPanEnabled(enable);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_setMoveToEnable_void_ev_bool(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					ptrNativeObject->setMoveToEnable(enable);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_getMoveToEnable_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getMoveToEnable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_setMouseWheelRatio_void_ev_real64(void *pObjectXXXX, _in ev_real64 mouseWheelRatio )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					ptrNativeObject->setMouseWheelRatio(mouseWheelRatio);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_getMouseWheelRatio_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getMouseWheelRatio();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_setGotoTimeRatio_void_ev_real64(void *pObjectXXXX, _in ev_real64 gotoRatio )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					ptrNativeObject->setGotoTimeRatio(gotoRatio);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_getGotoTimeRatio_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getGotoTimeRatio();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_calculateTiltAble_ev_bool_CVector3_CMatrix3(void *pObjectXXXX, _in const void* cameraZAxis, _in const void* rotation )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->calculateTiltAble(*(EarthView::World::Spatial::Math::CVector3*)cameraZAxis, *(EarthView::World::Spatial::Math::CMatrix3*)rotation);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_reset_void( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_reset_void_Callback* pCallback )
				{
					CGlobeCameraManipulatorProxy* ptr = dynamic_cast<CGlobeCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_reset_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_computeViewportMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_computeViewportMatrix_CMatrix4_Callback* pCallback )
				{
					CGlobeCameraManipulatorProxy* ptr = dynamic_cast<CGlobeCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_computeViewportMatrix_CMatrix4(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CGlobeCameraManipulatorProxy* ptr = dynamic_cast<CGlobeCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleUseEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* userEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleFrameEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseDownEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseUp_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseWheelEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_computeAltitudeDelta_ev_real64_CVector3_Callback)(_in const void* v);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
				class CGlobeCamUnderGroundHandlerProxy : public EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler
				{
				private:
					EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleUseEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleUseEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleFrameEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleFrameEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseDownEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseDownEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseUp_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseUp_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseWheelEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseWheelEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_computeAltitudeDelta_ev_real64_CVector3_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_computeAltitudeDelta_ev_real64_CVector3_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleEvent_ev_bool_CGUIEvent_Callback;
				public:
					CGlobeCamUnderGroundHandlerProxy(EarthView::World::Core::CNameValuePairList *pList) : CGlobeCamUnderGroundHandler(pList)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleUseEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleFrameEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseDownEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseUp_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseWheelEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_computeAltitudeDelta_ev_real64_CVector3_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleEvent_ev_bool_CGUIEvent_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleUseEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleUseEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleUseEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleFrameEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleFrameEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleFrameEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseDownEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseDownEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseDownEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseMoveEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseUp_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseUp_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseUp_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseWheelEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseWheelEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseWheelEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_computeAltitudeDelta_ev_real64_CVector3(EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_computeAltitudeDelta_ev_real64_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_computeAltitudeDelta_ev_real64_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					virtual ev_bool handleEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleEvent_ev_bool_CGUIEvent_Callback(guiEvent);
							return returnValue;
						}
						else
							return this->CGlobeCamUnderGroundHandler::handleEvent(guiEvent);
					}
					virtual ev_real64 computeAltitudeDelta(_in const EarthView::World::Spatial::Math::CVector3& v)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_computeAltitudeDelta_ev_real64_CVector3_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_computeAltitudeDelta_ev_real64_CVector3_Callback(&v);
							return returnValue;
						}
						else
							return this->CGlobeCamUnderGroundHandler::computeAltitudeDelta(v);
					}
					virtual ev_bool handleMouseMoveEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback(mouseEvent);
							return returnValue;
						}
						else
							return this->CGlobeCamUnderGroundHandler::handleMouseMoveEvent(mouseEvent);
					}
					virtual ev_bool handleMouseWheelEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseWheelEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseWheelEvent_ev_bool_CGUIEvent_Callback(mouseEvent);
							return returnValue;
						}
						else
							return this->CGlobeCamUnderGroundHandler::handleMouseWheelEvent(mouseEvent);
					}
					virtual ev_bool handleMouseDownEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseDownEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseDownEvent_ev_bool_CGUIEvent_Callback(mouseEvent);
							return returnValue;
						}
						else
							return this->CGlobeCamUnderGroundHandler::handleMouseDownEvent(mouseEvent);
					}
					virtual ev_bool handleMouseUp(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseUp_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseUp_ev_bool_CGUIEvent_Callback(mouseEvent);
							return returnValue;
						}
						else
							return this->CGlobeCamUnderGroundHandler::handleMouseUp(mouseEvent);
					}
					virtual ev_bool handleUseEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* userEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleUseEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleUseEvent_ev_bool_CGUIEvent_Callback(userEvent);
							return returnValue;
						}
						else
							return this->CGlobeCamUnderGroundHandler::handleUseEvent(userEvent);
					}
					virtual ev_bool handleFrameEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleFrameEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleFrameEvent_ev_bool_CGUIEvent_Callback(guiEvent);
							return returnValue;
						}
						else
							return this->CGlobeCamUnderGroundHandler::handleFrameEvent(guiEvent);
					}
				};
				REGISTER_FACTORY_CLASS(CGlobeCamUnderGroundHandlerProxy);
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler*) pObjectXXXX;
					if (dynamic_cast<CGlobeCamUnderGroundHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler::handleEvent(guiEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleEvent(guiEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CGlobeCamUnderGroundHandlerProxy* ptr = dynamic_cast<CGlobeCamUnderGroundHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler::handleEvent(guiEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_computeAltitudeDelta_ev_real64_CVector3(void *pObjectXXXX, _in const void* v )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler*) pObjectXXXX;
					if (dynamic_cast<CGlobeCamUnderGroundHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler::computeAltitudeDelta(*(EarthView::World::Spatial::Math::CVector3*)v);
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->computeAltitudeDelta(*(EarthView::World::Spatial::Math::CVector3*)v);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_computeAltitudeDelta_ev_real64_CVector3( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_computeAltitudeDelta_ev_real64_CVector3_Callback* pCallback )
				{
					CGlobeCamUnderGroundHandlerProxy* ptr = dynamic_cast<CGlobeCamUnderGroundHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_computeAltitudeDelta_ev_real64_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_computeAltitudeDelta_ev_real64_CVector3_NoVirtual(void *pObjectXXXX, _in const void* v )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler::computeAltitudeDelta(*(EarthView::World::Spatial::Math::CVector3*)v);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseMoveEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler*) pObjectXXXX;
					if (dynamic_cast<CGlobeCamUnderGroundHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler::handleMouseMoveEvent(mouseEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleMouseMoveEvent(mouseEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseMoveEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CGlobeCamUnderGroundHandlerProxy* ptr = dynamic_cast<CGlobeCamUnderGroundHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseMoveEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseMoveEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler::handleMouseMoveEvent(mouseEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseWheelEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler*) pObjectXXXX;
					if (dynamic_cast<CGlobeCamUnderGroundHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler::handleMouseWheelEvent(mouseEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleMouseWheelEvent(mouseEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseWheelEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseWheelEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CGlobeCamUnderGroundHandlerProxy* ptr = dynamic_cast<CGlobeCamUnderGroundHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseWheelEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseWheelEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler::handleMouseWheelEvent(mouseEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseDownEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler*) pObjectXXXX;
					if (dynamic_cast<CGlobeCamUnderGroundHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler::handleMouseDownEvent(mouseEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleMouseDownEvent(mouseEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseDownEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseDownEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CGlobeCamUnderGroundHandlerProxy* ptr = dynamic_cast<CGlobeCamUnderGroundHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseDownEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseDownEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler::handleMouseDownEvent(mouseEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseUp_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler*) pObjectXXXX;
					if (dynamic_cast<CGlobeCamUnderGroundHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler::handleMouseUp(mouseEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleMouseUp(mouseEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseUp_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseUp_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CGlobeCamUnderGroundHandlerProxy* ptr = dynamic_cast<CGlobeCamUnderGroundHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseUp_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseUp_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler::handleMouseUp(mouseEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleUseEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleUseEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CGlobeCamUnderGroundHandlerProxy* ptr = dynamic_cast<CGlobeCamUnderGroundHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleUseEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleFrameEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleFrameEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CGlobeCamUnderGroundHandlerProxy* ptr = dynamic_cast<CGlobeCamUnderGroundHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleFrameEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
			}
		}
	}
}
