/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "ga/cameramanipulator.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
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
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* userEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* keyEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* frameEvent);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CCameraManipulator_reset_void_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial3D_Controls_CCameraManipulator_computeViewportMatrix_CMatrix4_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CCameraManipulator_handleEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
				class CCameraManipulatorProxy : public EarthView::World::Spatial3D::Controls::CCameraManipulator
				{
				private:
					EarthView_World_Spatial3D_Controls_CCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CCameraManipulator_reset_void_Callback* m_EarthView_World_Spatial3D_Controls_CCameraManipulator_reset_void_Callback;
					EarthView_World_Spatial3D_Controls_CCameraManipulator_computeViewportMatrix_CMatrix4_Callback* m_EarthView_World_Spatial3D_Controls_CCameraManipulator_computeViewportMatrix_CMatrix4_Callback;
					EarthView_World_Spatial3D_Controls_CCameraManipulator_handleEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CCameraManipulator_handleEvent_ev_bool_CGUIEvent_Callback;
				public:
					CCameraManipulatorProxy(EarthView::World::Core::CNameValuePairList *pList) : CCameraManipulator(pList)
					{
						m_EarthView_World_Spatial3D_Controls_CCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCameraManipulator_reset_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCameraManipulator_computeViewportMatrix_CMatrix4_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCameraManipulator_handleEvent_ev_bool_CGUIEvent_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCameraManipulator_handleUserEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCameraManipulator_reset_void(EarthView_World_Spatial3D_Controls_CCameraManipulator_reset_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCameraManipulator_reset_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCameraManipulator_computeViewportMatrix_CMatrix4(EarthView_World_Spatial3D_Controls_CCameraManipulator_computeViewportMatrix_CMatrix4_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCameraManipulator_computeViewportMatrix_CMatrix4_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCameraManipulator_handleEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CCameraManipulator_handleEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCameraManipulator_handleEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					virtual ev_bool handleEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCameraManipulator_handleEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CCameraManipulator_handleEvent_ev_bool_CGUIEvent_Callback(guiEvent);
							return returnValue;
						}
						else
							return this->CCameraManipulator::handleEvent(guiEvent);
					}
					virtual ev_bool handleMouseEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_Callback(mouseEvent);
							return returnValue;
						}
						else
							return this->CCameraManipulator::handleMouseEvent(mouseEvent);
					}
					virtual ev_bool handleUserEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* userEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_Callback(userEvent);
							return returnValue;
						}
						else
							return this->CCameraManipulator::handleUserEvent(userEvent);
					}
					virtual ev_bool handleKeyEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* keyEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_Callback(keyEvent);
							return returnValue;
						}
						else
							return this->CCameraManipulator::handleKeyEvent(keyEvent);
					}
					virtual ev_bool handleFrameEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* frameEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_Callback(frameEvent);
							return returnValue;
						}
						else
							return this->CCameraManipulator::handleFrameEvent(frameEvent);
					}
					virtual void reset()
					{
						if(m_EarthView_World_Spatial3D_Controls_CCameraManipulator_reset_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CCameraManipulator_reset_void_Callback();
						}
						else
							return this->CCameraManipulator::reset();
					}
					virtual EarthView::World::Spatial::Math::CMatrix4 computeViewportMatrix()
					{
						if(m_EarthView_World_Spatial3D_Controls_CCameraManipulator_computeViewportMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Math::CMatrix4 returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Spatial3D_Controls_CCameraManipulator_computeViewportMatrix_CMatrix4_Callback();
							return returnValue;
						}
						else
							return this->CCameraManipulator::computeViewportMatrix();
					}
				};
				REGISTER_FACTORY_CLASS(CCameraManipulatorProxy);
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCameraManipulator_handleEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCameraManipulator*) pObjectXXXX;
					if (dynamic_cast<CCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CCameraManipulator*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCameraManipulator::handleEvent(guiEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleEvent(guiEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCameraManipulator_handleEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCameraManipulator_handleEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CCameraManipulatorProxy* ptr = dynamic_cast<CCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CCameraManipulator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCameraManipulator_handleEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCameraManipulator_handleEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCameraManipulator::handleEvent(guiEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent )
				{
					EarthView::World::Spatial3D::Controls::CCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCameraManipulator*) pObjectXXXX;
					if (dynamic_cast<CCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CCameraManipulator*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCameraManipulator::handleMouseEvent(mouseEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleMouseEvent(mouseEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CCameraManipulatorProxy* ptr = dynamic_cast<CCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CCameraManipulator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent )
				{
					EarthView::World::Spatial3D::Controls::CCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCameraManipulator::handleMouseEvent(mouseEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCameraManipulator_handleUserEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* userEvent )
				{
					EarthView::World::Spatial3D::Controls::CCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCameraManipulator*) pObjectXXXX;
					if (dynamic_cast<CCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CCameraManipulator*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCameraManipulator::handleUserEvent(userEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleUserEvent(userEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCameraManipulator_handleUserEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CCameraManipulatorProxy* ptr = dynamic_cast<CCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CCameraManipulator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCameraManipulator_handleUserEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* userEvent )
				{
					EarthView::World::Spatial3D::Controls::CCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCameraManipulator::handleUserEvent(userEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* keyEvent )
				{
					EarthView::World::Spatial3D::Controls::CCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCameraManipulator*) pObjectXXXX;
					if (dynamic_cast<CCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CCameraManipulator*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCameraManipulator::handleKeyEvent(keyEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleKeyEvent(keyEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CCameraManipulatorProxy* ptr = dynamic_cast<CCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CCameraManipulator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* keyEvent )
				{
					EarthView::World::Spatial3D::Controls::CCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCameraManipulator::handleKeyEvent(keyEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* frameEvent )
				{
					EarthView::World::Spatial3D::Controls::CCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCameraManipulator*) pObjectXXXX;
					if (dynamic_cast<CCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CCameraManipulator*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCameraManipulator::handleFrameEvent(frameEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleFrameEvent(frameEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CCameraManipulatorProxy* ptr = dynamic_cast<CCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CCameraManipulator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* frameEvent )
				{
					EarthView::World::Spatial3D::Controls::CCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCameraManipulator::handleFrameEvent(frameEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CCameraManipulator_reset_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCameraManipulator*) pObjectXXXX;
					if (dynamic_cast<CCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CCameraManipulator*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Controls::CCameraManipulator::reset();
					else
						ptrNativeObject->reset();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCameraManipulator_reset_void( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCameraManipulator_reset_void_Callback* pCallback )
				{
					CCameraManipulatorProxy* ptr = dynamic_cast<CCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CCameraManipulator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCameraManipulator_reset_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CCameraManipulator_reset_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCameraManipulator*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Controls::CCameraManipulator::reset();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CCameraManipulator_computeViewportMatrix_CMatrix4(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCameraManipulator*) pObjectXXXX;
					if (dynamic_cast<CCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CCameraManipulator*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCameraManipulator::computeViewportMatrix();
						EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->computeViewportMatrix();
						EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCameraManipulator_computeViewportMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCameraManipulator_computeViewportMatrix_CMatrix4_Callback* pCallback )
				{
					CCameraManipulatorProxy* ptr = dynamic_cast<CCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CCameraManipulator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCameraManipulator_computeViewportMatrix_CMatrix4(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CCameraManipulator_computeViewportMatrix_CMatrix4_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCameraManipulator*) pObjectXXXX;
					EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCameraManipulator::computeViewportMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCamera*  _stdcall Get_EarthView_World_Spatial3D_Controls_CCameraManipulator_mcamera( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCameraManipulator*) pObjectXXXX;
					EarthView::World::Graphic::CCamera* objXXXX = ptrNativeObject->mcamera;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CCameraManipulator_mcamera( void *pObjectXXXX, EarthView::World::Graphic::CCamera*  value )
				{
					((EarthView::World::Spatial3D::Controls::CCameraManipulator*)pObjectXXXX)->mcamera = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CViewport*  _stdcall Get_EarthView_World_Spatial3D_Controls_CCameraManipulator_mviewport( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCameraManipulator*) pObjectXXXX;
					EarthView::World::Graphic::CViewport* objXXXX = ptrNativeObject->mviewport;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CCameraManipulator_mviewport( void *pObjectXXXX, EarthView::World::Graphic::CViewport*  value )
				{
					((EarthView::World::Spatial3D::Controls::CCameraManipulator*)pObjectXXXX)->mviewport = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::SystemUI::CGUIEvent*  _stdcall Get_EarthView_World_Spatial3D_Controls_CCameraManipulator_mlastGuiEvent( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCameraManipulator*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEvent* objXXXX = ptrNativeObject->mlastGuiEvent;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CCameraManipulator_mlastGuiEvent( void *pObjectXXXX, EarthView::World::Spatial::SystemUI::CGUIEvent*  value )
				{
					((EarthView::World::Spatial3D::Controls::CCameraManipulator*)pObjectXXXX)->mlastGuiEvent = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::SystemUI::CGUIEvent*  _stdcall Get_EarthView_World_Spatial3D_Controls_CCameraManipulator_mcurrentEvent( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCameraManipulator*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEvent* objXXXX = ptrNativeObject->mcurrentEvent;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CCameraManipulator_mcurrentEvent( void *pObjectXXXX, EarthView::World::Spatial::SystemUI::CGUIEvent*  value )
				{
					((EarthView::World::Spatial3D::Controls::CCameraManipulator*)pObjectXXXX)->mcurrentEvent = value;
				}
			}
		}
	}
}
