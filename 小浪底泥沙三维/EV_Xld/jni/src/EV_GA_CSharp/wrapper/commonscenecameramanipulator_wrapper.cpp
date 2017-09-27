/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "ga/commonscenecameramanipulator.h"
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
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial3D_Controls_CControlPointEvent_msecond( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CControlPointEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CControlPointEvent*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->msecond;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CControlPointEvent_msecond( void *pObjectXXXX, ev_real32  value )
				{
					((EarthView::World::Spatial3D::Controls::CControlPointEvent*)pObjectXXXX)->msecond = value;
				}
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* userEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* keyEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* frameEvent);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_reset_void_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_computeViewportMatrix_CMatrix4_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
				class CCommonSceneCameraManipulatorProxy : public EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator
				{
				private:
					EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_reset_void_Callback* m_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_reset_void_Callback;
					EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_computeViewportMatrix_CMatrix4_Callback* m_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_computeViewportMatrix_CMatrix4_Callback;
					EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleEvent_ev_bool_CGUIEvent_Callback;
				public:
					CCommonSceneCameraManipulatorProxy(EarthView::World::Core::CNameValuePairList *pList) : CCommonSceneCameraManipulator(pList)
					{
						m_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_reset_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_computeViewportMatrix_CMatrix4_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleEvent_ev_bool_CGUIEvent_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleUserEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_reset_void(EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_reset_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_reset_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_computeViewportMatrix_CMatrix4(EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_computeViewportMatrix_CMatrix4_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_computeViewportMatrix_CMatrix4_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					virtual ev_bool handleFrameEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* useEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_Callback(useEvent);
							return returnValue;
						}
						else
							return this->CCommonSceneCameraManipulator::handleFrameEvent(useEvent);
					}
					virtual ev_bool handleEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleEvent_ev_bool_CGUIEvent_Callback(guiEvent);
							return returnValue;
						}
						else
							return this->CCommonSceneCameraManipulator::handleEvent(guiEvent);
					}
					virtual ev_bool handleUserEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* userEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_Callback(userEvent);
							return returnValue;
						}
						else
							return this->CCommonSceneCameraManipulator::handleUserEvent(userEvent);
					}
					virtual ev_bool handleMouseEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_Callback(mouseEvent);
							return returnValue;
						}
						else
							return this->CCommonSceneCameraManipulator::handleMouseEvent(mouseEvent);
					}
					virtual ev_bool handleKeyEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* keyEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_Callback(keyEvent);
							return returnValue;
						}
						else
							return this->CCommonSceneCameraManipulator::handleKeyEvent(keyEvent);
					}
					virtual void reset()
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_reset_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_reset_void_Callback();
						}
						else
							return this->CCommonSceneCameraManipulator::reset();
					}
					virtual EarthView::World::Spatial::Math::CMatrix4 computeViewportMatrix()
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_computeViewportMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Math::CMatrix4 returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_computeViewportMatrix_CMatrix4_Callback();
							return returnValue;
						}
						else
							return this->CCommonSceneCameraManipulator::computeViewportMatrix();
					}
				};
				REGISTER_FACTORY_CLASS(CCommonSceneCameraManipulatorProxy);
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_screenToScene_CRay_ev_real32_ev_real32(void *pObjectXXXX, _in ev_real32 x, _in ev_real32 y )
				{
					EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*) pObjectXXXX;
					EarthView::World::Spatial::Math::CRay objXXXX = ptrNativeObject->screenToScene(x, y);
					EarthView::World::Spatial::Math::CRay *pXXXX = new EarthView::World::Spatial::Math::CRay(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_intersect_ev_bool_CRay_CPlane_CVector3(void *pObjectXXXX, _in const void* ray, _in const void* plane, _out void* intersectPoint )
				{
					EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->intersect(*(EarthView::World::Spatial::Math::CRay*)ray, *(EarthView::World::Spatial::Math::CPlane*)plane, *(EarthView::World::Spatial::Math::CVector3*)intersectPoint);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_intersect_ev_bool_CRay_CVector3_CVector3_CVector3(void *pObjectXXXX, _in const void* ray, _in const void* normal, _in const void* point, _out void* intersectPoint )
				{
					EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->intersect(*(EarthView::World::Spatial::Math::CRay*)ray, *(EarthView::World::Spatial::Math::CVector3*)normal, *(EarthView::World::Spatial::Math::CVector3*)point, *(EarthView::World::Spatial::Math::CVector3*)intersectPoint);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_computeRotationRatio_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 cameraAltitude )
				{
					EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->computeRotationRatio(cameraAltitude);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_calculateZoomFactor_ev_real64_ev_real32(void *pObjectXXXX, _in ev_real32 mouseWheelDelta )
				{
					EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->calculateZoomFactor(mouseWheelDelta);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_calculateMoveable_ev_bool_CGUIEvent_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* firstEvent, _in EarthView::World::Spatial::SystemUI::CGUIEvent* secondEvent )
				{
					EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->calculateMoveable(firstEvent, secondEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_roamCamera_void_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 moriginX, _in ev_real64 moriginY, _in ev_real64 mlastX, _in ev_real64 mlastY )
				{
					EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*) pObjectXXXX;
					ptrNativeObject->roamCamera(moriginX, moriginY, mlastX, mlastY);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_zoomCamera_void_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64 zoomRatio )
				{
					EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*) pObjectXXXX;
					ptrNativeObject->zoomCamera(x, y, zoomRatio);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_rotationCamera_void_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64 degree )
				{
					EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*) pObjectXXXX;
					ptrNativeObject->rotationCamera(x, y, degree);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_tiltCamera_void_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64 degree )
				{
					EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*) pObjectXXXX;
					ptrNativeObject->tiltCamera(x, y, degree);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_rotationAtPoint_ev_bool_CVector3_ev_real64_ev_real64(void *pObjectXXXX, _in void* ratationPoint, _in ev_real64 head, _in ev_real64 tilt )
				{
					EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->rotationAtPoint(*(EarthView::World::Spatial::Math::CVector3*)ratationPoint, head, tilt);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* useEvent )
				{
					EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*) pObjectXXXX;
					if (dynamic_cast<CCommonSceneCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator::handleFrameEvent(useEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleFrameEvent(useEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CCommonSceneCameraManipulatorProxy* ptr = dynamic_cast<CCommonSceneCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* useEvent )
				{
					EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator::handleFrameEvent(useEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*) pObjectXXXX;
					if (dynamic_cast<CCommonSceneCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator::handleEvent(guiEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleEvent(guiEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CCommonSceneCameraManipulatorProxy* ptr = dynamic_cast<CCommonSceneCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator::handleEvent(guiEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleUserEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* userEvent )
				{
					EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*) pObjectXXXX;
					if (dynamic_cast<CCommonSceneCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator::handleUserEvent(userEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleUserEvent(userEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleUserEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CCommonSceneCameraManipulatorProxy* ptr = dynamic_cast<CCommonSceneCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleUserEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* userEvent )
				{
					EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator::handleUserEvent(userEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_createAnimation_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*) pObjectXXXX;
					ptrNativeObject->createAnimation();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_addControlPoint_void_ev_real32(void *pObjectXXXX, _in ev_real32 second )
				{
					EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*) pObjectXXXX;
					ptrNativeObject->addControlPoint(second);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::CCommonSceneCamera*  _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_getCommonSceneCamera_CCommonSceneCamera(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*) pObjectXXXX;
					EarthView::World::Spatial3D::CCommonSceneCamera* objXXXX = ptrNativeObject->getCommonSceneCamera();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CCommonSceneCameraManipulatorProxy* ptr = dynamic_cast<CCommonSceneCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CCommonSceneCameraManipulatorProxy* ptr = dynamic_cast<CCommonSceneCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_reset_void( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_reset_void_Callback* pCallback )
				{
					CCommonSceneCameraManipulatorProxy* ptr = dynamic_cast<CCommonSceneCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_reset_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_computeViewportMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_computeViewportMatrix_CMatrix4_Callback* pCallback )
				{
					CCommonSceneCameraManipulatorProxy* ptr = dynamic_cast<CCommonSceneCameraManipulatorProxy*>((EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_computeViewportMatrix_CMatrix4(pCallback);
					}
				}
			}
		}
	}
}
