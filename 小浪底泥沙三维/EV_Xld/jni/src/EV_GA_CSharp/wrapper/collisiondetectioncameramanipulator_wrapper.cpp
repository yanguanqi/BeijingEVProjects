/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "ga/collisiondetectioncameramanipulator.h"
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
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* userEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* keyEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* frameEvent);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_reset_void_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_computeViewportMatrix_CMatrix4_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
				class CCollisionDetectionCameraManipulatorProxy : public EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator
				{
				private:
					EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_reset_void_Callback* m_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_reset_void_Callback;
					EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_computeViewportMatrix_CMatrix4_Callback* m_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_computeViewportMatrix_CMatrix4_Callback;
					EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleEvent_ev_bool_CGUIEvent_Callback;
				public:
					CCollisionDetectionCameraManipulatorProxy(EarthView::World::Core::CNameValuePairList *pList) : CCollisionDetectionCameraManipulator(pList)
					{
						m_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_reset_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_computeViewportMatrix_CMatrix4_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleEvent_ev_bool_CGUIEvent_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleUserEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_reset_void(EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_reset_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_reset_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_computeViewportMatrix_CMatrix4(EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_computeViewportMatrix_CMatrix4_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_computeViewportMatrix_CMatrix4_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					virtual ev_bool handleMouseEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_Callback(mouseEvent);
							return returnValue;
						}
						else
							return this->CCollisionDetectionCameraManipulator::handleMouseEvent(mouseEvent);
					}
					virtual ev_bool handleFrameEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* frameEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_Callback(frameEvent);
							return returnValue;
						}
						else
							return this->CCollisionDetectionCameraManipulator::handleFrameEvent(frameEvent);
					}
					virtual ev_bool handleKeyEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* keyEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_Callback(keyEvent);
							return returnValue;
						}
						else
							return this->CCollisionDetectionCameraManipulator::handleKeyEvent(keyEvent);
					}
					virtual ev_bool handleEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleEvent_ev_bool_CGUIEvent_Callback(guiEvent);
							return returnValue;
						}
						else
							return this->CCollisionDetectionCameraManipulator::handleEvent(guiEvent);
					}
					virtual ev_bool handleUserEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* userEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_Callback(userEvent);
							return returnValue;
						}
						else
							return this->CCollisionDetectionCameraManipulator::handleUserEvent(userEvent);
					}
					virtual void reset()
					{
						if(m_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_reset_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_reset_void_Callback();
						}
						else
							return this->CCollisionDetectionCameraManipulator::reset();
					}
					virtual EarthView::World::Spatial::Math::CMatrix4 computeViewportMatrix()
					{
						if(m_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_computeViewportMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Math::CMatrix4 returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_computeViewportMatrix_CMatrix4_Callback();
							return returnValue;
						}
						else
							return this->CCollisionDetectionCameraManipulator::computeViewportMatrix();
					}
				};
				REGISTER_FACTORY_CLASS(CCollisionDetectionCameraManipulatorProxy);
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent )
				{
					EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator*) pObjectXXXX;
					if (dynamic_cast<CCollisionDetectionCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator::handleMouseEvent(mouseEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleMouseEvent(mouseEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CCollisionDetectionCameraManipulatorProxy* ptr = dynamic_cast<CCollisionDetectionCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent )
				{
					EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator::handleMouseEvent(mouseEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleMouseDownEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent )
				{
					EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->handleMouseDownEvent(mouseEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleMouseMoveEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent )
				{
					EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->handleMouseMoveEvent(mouseEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleMouseUpEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent )
				{
					EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->handleMouseUpEvent(mouseEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* frameEvent )
				{
					EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator*) pObjectXXXX;
					if (dynamic_cast<CCollisionDetectionCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator::handleFrameEvent(frameEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleFrameEvent(frameEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CCollisionDetectionCameraManipulatorProxy* ptr = dynamic_cast<CCollisionDetectionCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* frameEvent )
				{
					EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator::handleFrameEvent(frameEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* keyEvent )
				{
					EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator*) pObjectXXXX;
					if (dynamic_cast<CCollisionDetectionCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator::handleKeyEvent(keyEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleKeyEvent(keyEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CCollisionDetectionCameraManipulatorProxy* ptr = dynamic_cast<CCollisionDetectionCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* keyEvent )
				{
					EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator::handleKeyEvent(keyEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleKeyDownEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* keyEvent )
				{
					EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->handleKeyDownEvent(keyEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleKeyUpEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* keyEvent )
				{
					EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->handleKeyUpEvent(keyEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_screenToScene_CRay_ev_real32_ev_real32(void *pObjectXXXX, _in ev_real32 x, _in ev_real32 y )
				{
					EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator*) pObjectXXXX;
					EarthView::World::Spatial::Math::CRay objXXXX = ptrNativeObject->screenToScene(x, y);
					EarthView::World::Spatial::Math::CRay *pXXXX = new EarthView::World::Spatial::Math::CRay(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleUserEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CCollisionDetectionCameraManipulatorProxy* ptr = dynamic_cast<CCollisionDetectionCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleUserEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_reset_void( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_reset_void_Callback* pCallback )
				{
					CCollisionDetectionCameraManipulatorProxy* ptr = dynamic_cast<CCollisionDetectionCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_reset_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_computeViewportMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_computeViewportMatrix_CMatrix4_Callback* pCallback )
				{
					CCollisionDetectionCameraManipulatorProxy* ptr = dynamic_cast<CCollisionDetectionCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_computeViewportMatrix_CMatrix4(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CCollisionDetectionCameraManipulatorProxy* ptr = dynamic_cast<CCollisionDetectionCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCollisionDetectionCameraManipulator_handleEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
			}
		}
	}
}
