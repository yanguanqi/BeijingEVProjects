/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "ga/googlecameramanipulator.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
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
		namespace Spatial3D
		{
			namespace Controls
			{
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* userEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* keyEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* frameEvent);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_reset_void_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_computeViewportMatrix_CMatrix4_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
				class CGoogleCameraManipulatorProxy : public EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator
				{
				private:
					EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_reset_void_Callback* m_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_reset_void_Callback;
					EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_computeViewportMatrix_CMatrix4_Callback* m_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_computeViewportMatrix_CMatrix4_Callback;
					EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleEvent_ev_bool_CGUIEvent_Callback;
				public:
					CGoogleCameraManipulatorProxy(EarthView::World::Core::CNameValuePairList *pList) : CGoogleCameraManipulator(pList)
					{
						m_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_reset_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_computeViewportMatrix_CMatrix4_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleEvent_ev_bool_CGUIEvent_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleUserEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_reset_void(EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_reset_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_reset_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_computeViewportMatrix_CMatrix4(EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_computeViewportMatrix_CMatrix4_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_computeViewportMatrix_CMatrix4_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					virtual ev_bool handleEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleEvent_ev_bool_CGUIEvent_Callback(guiEvent);
							return returnValue;
						}
						else
							return this->CGoogleCameraManipulator::handleEvent(guiEvent);
					}
					virtual ev_bool handleMouseEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_Callback(mouseEvent);
							return returnValue;
						}
						else
							return this->CGoogleCameraManipulator::handleMouseEvent(mouseEvent);
					}
					virtual ev_bool handleKeyEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* keyEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_Callback(keyEvent);
							return returnValue;
						}
						else
							return this->CGoogleCameraManipulator::handleKeyEvent(keyEvent);
					}
					virtual ev_bool handleFrameEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* frameEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_Callback(frameEvent);
							return returnValue;
						}
						else
							return this->CGoogleCameraManipulator::handleFrameEvent(frameEvent);
					}
					virtual ev_bool handleUserEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* userEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_Callback(userEvent);
							return returnValue;
						}
						else
							return this->CGoogleCameraManipulator::handleUserEvent(userEvent);
					}
					virtual void reset()
					{
						if(m_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_reset_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_reset_void_Callback();
						}
						else
							return this->CGoogleCameraManipulator::reset();
					}
					virtual EarthView::World::Spatial::Math::CMatrix4 computeViewportMatrix()
					{
						if(m_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_computeViewportMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Math::CMatrix4 returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_computeViewportMatrix_CMatrix4_Callback();
							return returnValue;
						}
						else
							return this->CGoogleCameraManipulator::computeViewportMatrix();
					}
				};
				REGISTER_FACTORY_CLASS(CGoogleCameraManipulatorProxy);
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator*) pObjectXXXX;
					if (dynamic_cast<CGoogleCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator::handleEvent(guiEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleEvent(guiEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CGoogleCameraManipulatorProxy* ptr = dynamic_cast<CGoogleCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator::handleEvent(guiEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_screenToScene_CRay_ev_real32_ev_real32(void *pObjectXXXX, _in ev_real32 x, _in ev_real32 y )
				{
					EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator*) pObjectXXXX;
					EarthView::World::Spatial::Math::CRay objXXXX = ptrNativeObject->screenToScene(x, y);
					EarthView::World::Spatial::Math::CRay *pXXXX = new EarthView::World::Spatial::Math::CRay(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_intersect_ev_bool_ev_real32_ev_real32_CVector3_ev_bool_ev_bool_ev_bool_ev_bool_ev_bool_ev_bool(void *pObjectXXXX, _in ev_real32 x, _in ev_real32 y, _inout void* interectPoint, _in ev_bool intersecModel, _in ev_bool intersectSea, _in ev_bool positiveSide, _in ev_bool negativeSide, _in ev_bool intersectOBQ, _inout ev_bool& modelIntersected )
				{
					EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->intersect(x, y, *(EarthView::World::Spatial::Math::CVector3*)interectPoint, intersecModel, intersectSea, positiveSide, negativeSide, intersectOBQ, modelIntersected);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent )
				{
					EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator*) pObjectXXXX;
					if (dynamic_cast<CGoogleCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator::handleMouseEvent(mouseEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleMouseEvent(mouseEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CGoogleCameraManipulatorProxy* ptr = dynamic_cast<CGoogleCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent )
				{
					EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator::handleMouseEvent(mouseEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* keyEvent )
				{
					EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator*) pObjectXXXX;
					if (dynamic_cast<CGoogleCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator::handleKeyEvent(keyEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleKeyEvent(keyEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CGoogleCameraManipulatorProxy* ptr = dynamic_cast<CGoogleCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* keyEvent )
				{
					EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator::handleKeyEvent(keyEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* frameEvent )
				{
					EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator*) pObjectXXXX;
					if (dynamic_cast<CGoogleCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator::handleFrameEvent(frameEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleFrameEvent(frameEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CGoogleCameraManipulatorProxy* ptr = dynamic_cast<CGoogleCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* frameEvent )
				{
					EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator::handleFrameEvent(frameEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleUserEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* userEvent )
				{
					EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator*) pObjectXXXX;
					if (dynamic_cast<CGoogleCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator::handleUserEvent(userEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleUserEvent(userEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleUserEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CGoogleCameraManipulatorProxy* ptr = dynamic_cast<CGoogleCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleUserEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* userEvent )
				{
					EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator::handleUserEvent(userEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleMouseDownEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent )
				{
					EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->handleMouseDownEvent(mouseEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleMouseMoveEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent )
				{
					EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->handleMouseMoveEvent(mouseEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleMouseUpEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent )
				{
					EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->handleMouseUpEvent(mouseEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_handleMouseWheelEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent )
				{
					EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->handleMouseWheelEvent(mouseEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_setEnableIntersectModel_void_ev_bool(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator*) pObjectXXXX;
					ptrNativeObject->setEnableIntersectModel(enable);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_getEnableIntersectModel_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getEnableIntersectModel();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_setIntersectOBQ_void_ev_bool(void *pObjectXXXX, _in ev_bool intersectOBQ )
				{
					EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator*) pObjectXXXX;
					ptrNativeObject->setIntersectOBQ(intersectOBQ);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_getIntersectOBQ_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getIntersectOBQ();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_setEnable_void_ev_bool(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator*) pObjectXXXX;
					ptrNativeObject->setEnable(enable);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_getEnable_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getEnable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_reset_void( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_reset_void_Callback* pCallback )
				{
					CGoogleCameraManipulatorProxy* ptr = dynamic_cast<CGoogleCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_reset_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_computeViewportMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_computeViewportMatrix_CMatrix4_Callback* pCallback )
				{
					CGoogleCameraManipulatorProxy* ptr = dynamic_cast<CGoogleCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGoogleCameraManipulator_computeViewportMatrix_CMatrix4(pCallback);
					}
				}
			}
		}
	}
}
