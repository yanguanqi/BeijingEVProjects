/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/eagleeyecontrol.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
				typedef EarthView::World::Display::IPaintDevice*  ( _stdcall EarthView_World_Spatial2D_Controls_CEagleEyeControlAgent_getEagleEyeCanvas_IPaintDevice_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CEagleEyeControlAgent_onRepaint_void_Callback)();
				class CEagleEyeControlAgentProxy : public EarthView::World::Spatial2D::Controls::CEagleEyeControlAgent
				{
				private:
					EarthView_World_Spatial2D_Controls_CEagleEyeControlAgent_getEagleEyeCanvas_IPaintDevice_Callback* m_EarthView_World_Spatial2D_Controls_CEagleEyeControlAgent_getEagleEyeCanvas_IPaintDevice_Callback;
					EarthView_World_Spatial2D_Controls_CEagleEyeControlAgent_onRepaint_void_Callback* m_EarthView_World_Spatial2D_Controls_CEagleEyeControlAgent_onRepaint_void_Callback;
				public:
					CEagleEyeControlAgentProxy(EarthView::World::Core::CNameValuePairList *pList) : CEagleEyeControlAgent(pList)
					{
						m_EarthView_World_Spatial2D_Controls_CEagleEyeControlAgent_getEagleEyeCanvas_IPaintDevice_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEagleEyeControlAgent_onRepaint_void_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEagleEyeControlAgent_getEagleEyeCanvas_IPaintDevice(EarthView_World_Spatial2D_Controls_CEagleEyeControlAgent_getEagleEyeCanvas_IPaintDevice_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEagleEyeControlAgent_getEagleEyeCanvas_IPaintDevice_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEagleEyeControlAgent_onRepaint_void(EarthView_World_Spatial2D_Controls_CEagleEyeControlAgent_onRepaint_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEagleEyeControlAgent_onRepaint_void_Callback = pCallback;
					}
					virtual EarthView::World::Display::IPaintDevice* getEagleEyeCanvas() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEagleEyeControlAgent_getEagleEyeCanvas_IPaintDevice_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IPaintDevice* returnValue = m_EarthView_World_Spatial2D_Controls_CEagleEyeControlAgent_getEagleEyeCanvas_IPaintDevice_Callback();
							return returnValue;
						}
						else
							return this->CEagleEyeControlAgent::getEagleEyeCanvas();
					}
					virtual void onRepaint()
					{
						if(m_EarthView_World_Spatial2D_Controls_CEagleEyeControlAgent_onRepaint_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CEagleEyeControlAgent_onRepaint_void_Callback();
						}
						else
							return this->CEagleEyeControlAgent::onRepaint();
					}
				};
				REGISTER_FACTORY_CLASS(CEagleEyeControlAgentProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IPaintDevice*  _stdcall EarthView_World_Spatial2D_Controls_CEagleEyeControlAgent_getEagleEyeCanvas_IPaintDevice(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEagleEyeControlAgent* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEagleEyeControlAgent*) pObjectXXXX;
					if (dynamic_cast<CEagleEyeControlAgentProxy*>((EarthView::World::Spatial2D::Controls::CEagleEyeControlAgent*)ptrNativeObject) != NULL)
					{
						EarthView::World::Display::IPaintDevice* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEagleEyeControlAgent::getEagleEyeCanvas();
						return objXXXX;
					}
					else
					{
						EarthView::World::Display::IPaintDevice* objXXXX = ptrNativeObject->getEagleEyeCanvas();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEagleEyeControlAgent_getEagleEyeCanvas_IPaintDevice( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEagleEyeControlAgent_getEagleEyeCanvas_IPaintDevice_Callback* pCallback )
				{
					CEagleEyeControlAgentProxy* ptr = dynamic_cast<CEagleEyeControlAgentProxy*>((EarthView::World::Spatial2D::Controls::CEagleEyeControlAgent*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEagleEyeControlAgent_getEagleEyeCanvas_IPaintDevice(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IPaintDevice*  _stdcall EarthView_World_Spatial2D_Controls_CEagleEyeControlAgent_getEagleEyeCanvas_IPaintDevice_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEagleEyeControlAgent* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEagleEyeControlAgent*) pObjectXXXX;
					EarthView::World::Display::IPaintDevice* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEagleEyeControlAgent::getEagleEyeCanvas();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEagleEyeControlAgent_onRepaint_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControlAgent* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEagleEyeControlAgent*) pObjectXXXX;
					if (dynamic_cast<CEagleEyeControlAgentProxy*>((EarthView::World::Spatial2D::Controls::CEagleEyeControlAgent*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CEagleEyeControlAgent::onRepaint();
					else
						ptrNativeObject->onRepaint();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEagleEyeControlAgent_onRepaint_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEagleEyeControlAgent_onRepaint_void_Callback* pCallback )
				{
					CEagleEyeControlAgentProxy* ptr = dynamic_cast<CEagleEyeControlAgentProxy*>((EarthView::World::Spatial2D::Controls::CEagleEyeControlAgent*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEagleEyeControlAgent_onRepaint_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEagleEyeControlAgent_onRepaint_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControlAgent* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEagleEyeControlAgent*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CEagleEyeControlAgent::onRepaint();
				}
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y, _in ev_real64 geoX, _in ev_real64 geoY);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y, _in ev_real64 geoX, _in ev_real64 geoY);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y, _in ev_real64 geoX, _in ev_real64 geoY);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y, _in ev_real64 geoX, _in ev_real64 geoY);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_Callback)(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_real64 geoX, _in ev_real64 geoY, _in ev_int32 flag);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onKeyDown_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onKeyUp_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onResize_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 width, _in ev_int32 height);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeRefresh_void_ISpatialDisplay_IEnvelope_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const EarthView::World::Spatial::Geometry::IEnvelope* viewportEnvelope);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterRefresh_void_ISpatialDisplay_IEnvelope_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const EarthView::World::Spatial::Geometry::IEnvelope* viewportEnvelope);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeAddLayer_void_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterAddLayer_void_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeRemoveLayer_void_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterRemoveLayer_void_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeMoveLayer_void_ev_int32_ev_int32_Callback)(_in ev_int32 oldIndex, _in ev_int32 newIndex);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterMoveLayer_void_ev_int32_ev_int32_Callback)(_in ev_int32 oldIndex, _in ev_int32 newIndex);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMapSelectionChanged_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMapDraw_void_ISpatialDisplay_ILayer_EVVectorLayerRendererType_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::ILayer* layer, _in int type);
				class IEagleEyeControlListenerProxy : public EarthView::World::Spatial2D::Controls::IEagleEyeControlListener
				{
				private:
					EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onKeyDown_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onKeyUp_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onResize_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onResize_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeRefresh_void_ISpatialDisplay_IEnvelope_Callback* m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeRefresh_void_ISpatialDisplay_IEnvelope_Callback;
					EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterRefresh_void_ISpatialDisplay_IEnvelope_Callback* m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterRefresh_void_ISpatialDisplay_IEnvelope_Callback;
					EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeAddLayer_void_ILayer_Callback* m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeAddLayer_void_ILayer_Callback;
					EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterAddLayer_void_ILayer_Callback* m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterAddLayer_void_ILayer_Callback;
					EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeRemoveLayer_void_ILayer_Callback* m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeRemoveLayer_void_ILayer_Callback;
					EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterRemoveLayer_void_ILayer_Callback* m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterRemoveLayer_void_ILayer_Callback;
					EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeMoveLayer_void_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeMoveLayer_void_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterMoveLayer_void_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterMoveLayer_void_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMapSelectionChanged_void_Callback* m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMapSelectionChanged_void_Callback;
					EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMapDraw_void_ISpatialDisplay_ILayer_EVVectorLayerRendererType_Callback* m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMapDraw_void_ISpatialDisplay_ILayer_EVVectorLayerRendererType_Callback;
				public:
					IEagleEyeControlListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : IEagleEyeControlListener(pList)
					{
						m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onResize_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeRefresh_void_ISpatialDisplay_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterRefresh_void_ISpatialDisplay_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeAddLayer_void_ILayer_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterAddLayer_void_ILayer_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeRemoveLayer_void_ILayer_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterRemoveLayer_void_ILayer_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeMoveLayer_void_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterMoveLayer_void_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMapSelectionChanged_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMapDraw_void_ISpatialDisplay_ILayer_EVVectorLayerRendererType_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32(EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onKeyDown_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onKeyUp_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onResize_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onResize_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onResize_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeRefresh_void_ISpatialDisplay_IEnvelope(EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeRefresh_void_ISpatialDisplay_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeRefresh_void_ISpatialDisplay_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterRefresh_void_ISpatialDisplay_IEnvelope(EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterRefresh_void_ISpatialDisplay_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterRefresh_void_ISpatialDisplay_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeAddLayer_void_ILayer(EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeAddLayer_void_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeAddLayer_void_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterAddLayer_void_ILayer(EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterAddLayer_void_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterAddLayer_void_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeRemoveLayer_void_ILayer(EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeRemoveLayer_void_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeRemoveLayer_void_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterRemoveLayer_void_ILayer(EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterRemoveLayer_void_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterRemoveLayer_void_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeMoveLayer_void_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeMoveLayer_void_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeMoveLayer_void_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterMoveLayer_void_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterMoveLayer_void_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterMoveLayer_void_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMapSelectionChanged_void(EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMapSelectionChanged_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMapSelectionChanged_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMapDraw_void_ISpatialDisplay_ILayer_EVVectorLayerRendererType(EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMapDraw_void_ISpatialDisplay_ILayer_EVVectorLayerRendererType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMapDraw_void_ISpatialDisplay_ILayer_EVVectorLayerRendererType_Callback = pCallback;
					}
					virtual ev_bool onMouseDown(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y, _in ev_real64 geoX, _in ev_real64 geoY)
					{
						if(m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback(button, shift, x, y, geoX, geoY);
							return returnValue;
						}
						else
							return this->IEagleEyeControlListener::onMouseDown(button, shift, x, y, geoX, geoY);
					}
					virtual ev_bool onMouseUp(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y, _in ev_real64 geoX, _in ev_real64 geoY)
					{
						if(m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback(button, shift, x, y, geoX, geoY);
							return returnValue;
						}
						else
							return this->IEagleEyeControlListener::onMouseUp(button, shift, x, y, geoX, geoY);
					}
					virtual ev_bool onMouseMove(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y, _in ev_real64 geoX, _in ev_real64 geoY)
					{
						if(m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback(button, shift, x, y, geoX, geoY);
							return returnValue;
						}
						else
							return this->IEagleEyeControlListener::onMouseMove(button, shift, x, y, geoX, geoY);
					}
					virtual ev_bool onDoubleClick(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y, _in ev_real64 geoX, _in ev_real64 geoY)
					{
						if(m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback(button, shift, x, y, geoX, geoY);
							return returnValue;
						}
						else
							return this->IEagleEyeControlListener::onDoubleClick(button, shift, x, y, geoX, geoY);
					}
					virtual ev_bool onMouseWheel(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_real64 geoX, _in ev_real64 geoY, _in ev_int32 flag)
					{
						if(m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_Callback(delta, x, y, geoX, geoY, flag);
							return returnValue;
						}
						else
							return this->IEagleEyeControlListener::onMouseWheel(delta, x, y, geoX, geoY, flag);
					}
					virtual ev_bool onKeyDown(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onKeyDown_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onKeyDown_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->IEagleEyeControlListener::onKeyDown(keyCode, shift);
					}
					virtual ev_bool onKeyUp(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onKeyUp_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onKeyUp_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->IEagleEyeControlListener::onKeyUp(keyCode, shift);
					}
					virtual ev_bool onResize(_in ev_int32 width, _in ev_int32 height)
					{
						if(m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onResize_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onResize_ev_bool_ev_int32_ev_int32_Callback(width, height);
							return returnValue;
						}
						else
							return this->IEagleEyeControlListener::onResize(width, height);
					}
					virtual void onBeforeRefresh(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const EarthView::World::Spatial::Geometry::IEnvelope* viewportEnvelope)
					{
						if(m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeRefresh_void_ISpatialDisplay_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeRefresh_void_ISpatialDisplay_IEnvelope_Callback(display, viewportEnvelope);
						}
						else
							return this->IEagleEyeControlListener::onBeforeRefresh(display, viewportEnvelope);
					}
					virtual void onAfterRefresh(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const EarthView::World::Spatial::Geometry::IEnvelope* viewportEnvelope)
					{
						if(m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterRefresh_void_ISpatialDisplay_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterRefresh_void_ISpatialDisplay_IEnvelope_Callback(display, viewportEnvelope);
						}
						else
							return this->IEagleEyeControlListener::onAfterRefresh(display, viewportEnvelope);
					}
					virtual void onBeforeAddLayer(_in EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if(m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeAddLayer_void_ILayer_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeAddLayer_void_ILayer_Callback(layer);
						}
						else
							return this->IEagleEyeControlListener::onBeforeAddLayer(layer);
					}
					virtual void onAfterAddLayer(_in EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if(m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterAddLayer_void_ILayer_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterAddLayer_void_ILayer_Callback(layer);
						}
						else
							return this->IEagleEyeControlListener::onAfterAddLayer(layer);
					}
					virtual void onBeforeRemoveLayer(_in EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if(m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeRemoveLayer_void_ILayer_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeRemoveLayer_void_ILayer_Callback(layer);
						}
						else
							return this->IEagleEyeControlListener::onBeforeRemoveLayer(layer);
					}
					virtual void onAfterRemoveLayer(_in EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if(m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterRemoveLayer_void_ILayer_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterRemoveLayer_void_ILayer_Callback(layer);
						}
						else
							return this->IEagleEyeControlListener::onAfterRemoveLayer(layer);
					}
					virtual void onBeforeMoveLayer(_in ev_int32 oldIndex, _in ev_int32 newIndex)
					{
						if(m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeMoveLayer_void_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeMoveLayer_void_ev_int32_ev_int32_Callback(oldIndex, newIndex);
						}
						else
							return this->IEagleEyeControlListener::onBeforeMoveLayer(oldIndex, newIndex);
					}
					virtual void onAfterMoveLayer(_in ev_int32 oldIndex, _in ev_int32 newIndex)
					{
						if(m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterMoveLayer_void_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterMoveLayer_void_ev_int32_ev_int32_Callback(oldIndex, newIndex);
						}
						else
							return this->IEagleEyeControlListener::onAfterMoveLayer(oldIndex, newIndex);
					}
					virtual void onMapSelectionChanged()
					{
						if(m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMapSelectionChanged_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMapSelectionChanged_void_Callback();
						}
						else
							return this->IEagleEyeControlListener::onMapSelectionChanged();
					}
					virtual void onMapDraw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::ILayer* layer, _in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
					{
						if(m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMapDraw_void_ISpatialDisplay_ILayer_EVVectorLayerRendererType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMapDraw_void_ISpatialDisplay_ILayer_EVVectorLayerRendererType_Callback(display, layer, (int)type);
						}
						else
							return this->IEagleEyeControlListener::onMapDraw(display, layer, type);
					}
				};
				REGISTER_FACTORY_CLASS(IEagleEyeControlListenerProxy);
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y, _in ev_real64 geoX, _in ev_real64 geoY )
				{
					EarthView::World::Spatial2D::Controls::IEagleEyeControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjectXXXX;
					if (dynamic_cast<IEagleEyeControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::IEagleEyeControlListener::onMouseDown(button, shift, x, y, geoX, geoY);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseDown(button, shift, x, y, geoX, geoY);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback* pCallback )
				{
					IEagleEyeControlListenerProxy* ptr = dynamic_cast<IEagleEyeControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y, _in ev_real64 geoX, _in ev_real64 geoY )
				{
					EarthView::World::Spatial2D::Controls::IEagleEyeControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::IEagleEyeControlListener::onMouseDown(button, shift, x, y, geoX, geoY);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y, _in ev_real64 geoX, _in ev_real64 geoY )
				{
					EarthView::World::Spatial2D::Controls::IEagleEyeControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjectXXXX;
					if (dynamic_cast<IEagleEyeControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::IEagleEyeControlListener::onMouseUp(button, shift, x, y, geoX, geoY);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseUp(button, shift, x, y, geoX, geoY);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback* pCallback )
				{
					IEagleEyeControlListenerProxy* ptr = dynamic_cast<IEagleEyeControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y, _in ev_real64 geoX, _in ev_real64 geoY )
				{
					EarthView::World::Spatial2D::Controls::IEagleEyeControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::IEagleEyeControlListener::onMouseUp(button, shift, x, y, geoX, geoY);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y, _in ev_real64 geoX, _in ev_real64 geoY )
				{
					EarthView::World::Spatial2D::Controls::IEagleEyeControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjectXXXX;
					if (dynamic_cast<IEagleEyeControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::IEagleEyeControlListener::onMouseMove(button, shift, x, y, geoX, geoY);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseMove(button, shift, x, y, geoX, geoY);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback* pCallback )
				{
					IEagleEyeControlListenerProxy* ptr = dynamic_cast<IEagleEyeControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y, _in ev_real64 geoX, _in ev_real64 geoY )
				{
					EarthView::World::Spatial2D::Controls::IEagleEyeControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::IEagleEyeControlListener::onMouseMove(button, shift, x, y, geoX, geoY);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y, _in ev_real64 geoX, _in ev_real64 geoY )
				{
					EarthView::World::Spatial2D::Controls::IEagleEyeControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjectXXXX;
					if (dynamic_cast<IEagleEyeControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::IEagleEyeControlListener::onDoubleClick(button, shift, x, y, geoX, geoY);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onDoubleClick(button, shift, x, y, geoX, geoY);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback* pCallback )
				{
					IEagleEyeControlListenerProxy* ptr = dynamic_cast<IEagleEyeControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y, _in ev_real64 geoX, _in ev_real64 geoY )
				{
					EarthView::World::Spatial2D::Controls::IEagleEyeControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::IEagleEyeControlListener::onDoubleClick(button, shift, x, y, geoX, geoY);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32(void *pObjectXXXX, _in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_real64 geoX, _in ev_real64 geoY, _in ev_int32 flag )
				{
					EarthView::World::Spatial2D::Controls::IEagleEyeControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjectXXXX;
					if (dynamic_cast<IEagleEyeControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::IEagleEyeControlListener::onMouseWheel(delta, x, y, geoX, geoY, flag);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseWheel(delta, x, y, geoX, geoY, flag);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_Callback* pCallback )
				{
					IEagleEyeControlListenerProxy* ptr = dynamic_cast<IEagleEyeControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_real64 geoX, _in ev_real64 geoY, _in ev_int32 flag )
				{
					EarthView::World::Spatial2D::Controls::IEagleEyeControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::IEagleEyeControlListener::onMouseWheel(delta, x, y, geoX, geoY, flag);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onKeyDown_ev_bool_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 keyCode, _in ev_int32 shift )
				{
					EarthView::World::Spatial2D::Controls::IEagleEyeControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjectXXXX;
					if (dynamic_cast<IEagleEyeControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::IEagleEyeControlListener::onKeyDown(keyCode, shift);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onKeyDown(keyCode, shift);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onKeyDown_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					IEagleEyeControlListenerProxy* ptr = dynamic_cast<IEagleEyeControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onKeyDown_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onKeyDown_ev_bool_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 keyCode, _in ev_int32 shift )
				{
					EarthView::World::Spatial2D::Controls::IEagleEyeControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::IEagleEyeControlListener::onKeyDown(keyCode, shift);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onKeyUp_ev_bool_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 keyCode, _in ev_int32 shift )
				{
					EarthView::World::Spatial2D::Controls::IEagleEyeControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjectXXXX;
					if (dynamic_cast<IEagleEyeControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::IEagleEyeControlListener::onKeyUp(keyCode, shift);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onKeyUp(keyCode, shift);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onKeyUp_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					IEagleEyeControlListenerProxy* ptr = dynamic_cast<IEagleEyeControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onKeyUp_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onKeyUp_ev_bool_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 keyCode, _in ev_int32 shift )
				{
					EarthView::World::Spatial2D::Controls::IEagleEyeControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::IEagleEyeControlListener::onKeyUp(keyCode, shift);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onResize_ev_bool_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 width, _in ev_int32 height )
				{
					EarthView::World::Spatial2D::Controls::IEagleEyeControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjectXXXX;
					if (dynamic_cast<IEagleEyeControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::IEagleEyeControlListener::onResize(width, height);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onResize(width, height);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onResize_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onResize_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					IEagleEyeControlListenerProxy* ptr = dynamic_cast<IEagleEyeControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onResize_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onResize_ev_bool_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 width, _in ev_int32 height )
				{
					EarthView::World::Spatial2D::Controls::IEagleEyeControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::IEagleEyeControlListener::onResize(width, height);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeRefresh_void_ISpatialDisplay_IEnvelope(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const EarthView::World::Spatial::Geometry::IEnvelope* viewportEnvelope )
				{
					EarthView::World::Spatial2D::Controls::IEagleEyeControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjectXXXX;
					if (dynamic_cast<IEagleEyeControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::IEagleEyeControlListener::onBeforeRefresh(display, viewportEnvelope);
					else
						ptrNativeObject->onBeforeRefresh(display, viewportEnvelope);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeRefresh_void_ISpatialDisplay_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeRefresh_void_ISpatialDisplay_IEnvelope_Callback* pCallback )
				{
					IEagleEyeControlListenerProxy* ptr = dynamic_cast<IEagleEyeControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeRefresh_void_ISpatialDisplay_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeRefresh_void_ISpatialDisplay_IEnvelope_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const EarthView::World::Spatial::Geometry::IEnvelope* viewportEnvelope )
				{
					EarthView::World::Spatial2D::Controls::IEagleEyeControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::IEagleEyeControlListener::onBeforeRefresh(display, viewportEnvelope);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterRefresh_void_ISpatialDisplay_IEnvelope(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const EarthView::World::Spatial::Geometry::IEnvelope* viewportEnvelope )
				{
					EarthView::World::Spatial2D::Controls::IEagleEyeControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjectXXXX;
					if (dynamic_cast<IEagleEyeControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::IEagleEyeControlListener::onAfterRefresh(display, viewportEnvelope);
					else
						ptrNativeObject->onAfterRefresh(display, viewportEnvelope);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterRefresh_void_ISpatialDisplay_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterRefresh_void_ISpatialDisplay_IEnvelope_Callback* pCallback )
				{
					IEagleEyeControlListenerProxy* ptr = dynamic_cast<IEagleEyeControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterRefresh_void_ISpatialDisplay_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterRefresh_void_ISpatialDisplay_IEnvelope_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const EarthView::World::Spatial::Geometry::IEnvelope* viewportEnvelope )
				{
					EarthView::World::Spatial2D::Controls::IEagleEyeControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::IEagleEyeControlListener::onAfterRefresh(display, viewportEnvelope);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeAddLayer_void_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeAddLayer_void_ILayer_Callback* pCallback )
				{
					IEagleEyeControlListenerProxy* ptr = dynamic_cast<IEagleEyeControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeAddLayer_void_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterAddLayer_void_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterAddLayer_void_ILayer_Callback* pCallback )
				{
					IEagleEyeControlListenerProxy* ptr = dynamic_cast<IEagleEyeControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterAddLayer_void_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeRemoveLayer_void_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeRemoveLayer_void_ILayer_Callback* pCallback )
				{
					IEagleEyeControlListenerProxy* ptr = dynamic_cast<IEagleEyeControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeRemoveLayer_void_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterRemoveLayer_void_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterRemoveLayer_void_ILayer_Callback* pCallback )
				{
					IEagleEyeControlListenerProxy* ptr = dynamic_cast<IEagleEyeControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterRemoveLayer_void_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeMoveLayer_void_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeMoveLayer_void_ev_int32_ev_int32_Callback* pCallback )
				{
					IEagleEyeControlListenerProxy* ptr = dynamic_cast<IEagleEyeControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeMoveLayer_void_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterMoveLayer_void_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterMoveLayer_void_ev_int32_ev_int32_Callback* pCallback )
				{
					IEagleEyeControlListenerProxy* ptr = dynamic_cast<IEagleEyeControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterMoveLayer_void_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMapSelectionChanged_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMapSelectionChanged_void_Callback* pCallback )
				{
					IEagleEyeControlListenerProxy* ptr = dynamic_cast<IEagleEyeControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMapSelectionChanged_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMapDraw_void_ISpatialDisplay_ILayer_EVVectorLayerRendererType( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMapDraw_void_ISpatialDisplay_ILayer_EVVectorLayerRendererType_Callback* pCallback )
				{
					IEagleEyeControlListenerProxy* ptr = dynamic_cast<IEagleEyeControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMapDraw_void_ISpatialDisplay_ILayer_EVVectorLayerRendererType(pCallback);
					}
				}
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CEagleEyeControl_onRepaint_void_Callback)();
				class CEagleEyeControlProxy : public EarthView::World::Spatial2D::Controls::CEagleEyeControl
				{
				private:
					EarthView_World_Spatial2D_Controls_CEagleEyeControl_onRepaint_void_Callback* m_EarthView_World_Spatial2D_Controls_CEagleEyeControl_onRepaint_void_Callback;
				public:
					CEagleEyeControlProxy(EarthView::World::Core::CNameValuePairList *pList) : CEagleEyeControl(pList)
					{
						m_EarthView_World_Spatial2D_Controls_CEagleEyeControl_onRepaint_void_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CEagleEyeControlProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEagleEyeControl_onRepaint_void(EarthView_World_Spatial2D_Controls_CEagleEyeControl_onRepaint_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEagleEyeControl_onRepaint_void_Callback = pCallback;
					}
					virtual void onRepaint()
					{
						if(m_EarthView_World_Spatial2D_Controls_CEagleEyeControl_onRepaint_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CEagleEyeControl_onRepaint_void_Callback();
						}
						else
							return this->CEagleEyeControl::onRepaint();
					}
				};
				REGISTER_FACTORY_CLASS(CEagleEyeControlProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IPaintDevice*  _stdcall EarthView_World_Spatial2D_Controls_CEagleEyeControl_getEagleEyeCanvas_IPaintDevice(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEagleEyeControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjectXXXX;
					EarthView::World::Display::IPaintDevice* objXXXX = ptrNativeObject->getEagleEyeCanvas();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEagleEyeControl_addMapControl_void_CMapControl(void *pObjectXXXX, _in EarthView::World::Spatial2D::Controls::CMapControl* pControl )
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjectXXXX;
					ptrNativeObject->addMapControl(pControl);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEagleEyeControl_removeMapControl_void_CMapControl(void *pObjectXXXX, _in EarthView::World::Spatial2D::Controls::CMapControl* pControl )
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjectXXXX;
					ptrNativeObject->removeMapControl(pControl);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Controls::CMapControl*  _stdcall EarthView_World_Spatial2D_Controls_CEagleEyeControl_getMapControl_CMapControl_ev_int32(void *pObjectXXXX, _in ev_int32 nIndex )
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::CMapControl* objXXXX = ptrNativeObject->getMapControl(nIndex);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CEagleEyeControl_isExist_ev_bool_CMapControl(void *pObjectXXXX, _in EarthView::World::Spatial2D::Controls::CMapControl* pControl )
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isExist(pControl);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CEagleEyeControl_setActiveControl_ev_bool_CMapControl(void *pObjectXXXX, _in EarthView::World::Spatial2D::Controls::CMapControl* pControl )
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->setActiveControl(pControl);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEagleEyeControl_setAllControlUnActive_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjectXXXX;
					ptrNativeObject->setAllControlUnActive();
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Controls_CEagleEyeControl_getMapControlCount_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getMapControlCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEagleEyeControl_addMap_void_IMap(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* pMap )
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjectXXXX;
					ptrNativeObject->addMap(pMap);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEagleEyeControl_removeMap_void_IMap(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* pMap )
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjectXXXX;
					ptrNativeObject->removeMap(pMap);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEagleEyeControl_setMapCacheDirty_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjectXXXX;
					ptrNativeObject->setMapCacheDirty();
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Controls_CEagleEyeControl_getMapCount_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getMapCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IMap*  _stdcall EarthView_World_Spatial2D_Controls_CEagleEyeControl_getMap_IMap_ev_int32(void *pObjectXXXX, _in ev_int32 nIndex )
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::IMap* objXXXX = ptrNativeObject->getMap(nIndex);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CEagleEyeControl_isExist_ev_bool_IMap(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* pMap )
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isExist(pMap);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEagleEyeControl_addGeometry_void_IGeometry_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* pGeometry, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjectXXXX;
					ptrNativeObject->addGeometry(pGeometry, pSymbol);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEagleEyeControl_clearGeometry_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjectXXXX;
					ptrNativeObject->clearGeometry();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEagleEyeControl_onRepaint_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjectXXXX;
					if (dynamic_cast<CEagleEyeControlProxy*>((EarthView::World::Spatial2D::Controls::CEagleEyeControl*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CEagleEyeControl::onRepaint();
					else
						ptrNativeObject->onRepaint();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEagleEyeControl_onRepaint_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEagleEyeControl_onRepaint_void_Callback* pCallback )
				{
					CEagleEyeControlProxy* ptr = dynamic_cast<CEagleEyeControlProxy*>((EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEagleEyeControl_onRepaint_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEagleEyeControl_onRepaint_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CEagleEyeControl::onRepaint();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEagleEyeControl_refresh_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjectXXXX;
					ptrNativeObject->refresh();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEagleEyeControl_setUnActiveRectSymbol_void_ISymbol(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjectXXXX;
					ptrNativeObject->setUnActiveRectSymbol(pSymbol);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial2D_Controls_CEagleEyeControl_getUnActiveRectSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEagleEyeControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getUnActiveRectSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEagleEyeControl_setActiveRectSymbol_void_ISymbol(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjectXXXX;
					ptrNativeObject->setActiveRectSymbol(pSymbol);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial2D_Controls_CEagleEyeControl_getActiveRectSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEagleEyeControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getActiveRectSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEagleEyeControl_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CEagleEyeControl_isDrawing_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isDrawing();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEagleEyeControl_onResize_void_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 nWidth, _in ev_int32 nHeight )
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjectXXXX;
					ptrNativeObject->onResize(nWidth, nHeight);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEagleEyeControl_onDoubleClick_void_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjectXXXX;
					ptrNativeObject->onDoubleClick(button, shift, x, y);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEagleEyeControl_onKeyDown_void_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 keyCode, _in ev_int32 shift )
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjectXXXX;
					ptrNativeObject->onKeyDown(keyCode, shift);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEagleEyeControl_onKeyUp_void_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 keyCode, _in ev_int32 shift )
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjectXXXX;
					ptrNativeObject->onKeyUp(keyCode, shift);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEagleEyeControl_onMouseDown_void_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjectXXXX;
					ptrNativeObject->onMouseDown(button, shift, x, y);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEagleEyeControl_onMouseMove_void_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjectXXXX;
					ptrNativeObject->onMouseMove(button, shift, x, y);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEagleEyeControl_onMouseUp_void_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjectXXXX;
					ptrNativeObject->onMouseUp(button, shift, x, y);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEagleEyeControl_onMouseWheel_void_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag )
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjectXXXX;
					ptrNativeObject->onMouseWheel(delta, x, y, flag);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEagleEyeControl_addEagleEyeControlListener_void_IEagleEyeControlListener(void *pObjectXXXX, _in EarthView::World::Spatial2D::Controls::IEagleEyeControlListener* ref_listener )
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjectXXXX;
					ptrNativeObject->addEagleEyeControlListener(ref_listener);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEagleEyeControl_removeEagleEyeControlListener_void_IEagleEyeControlListener(void *pObjectXXXX, _in EarthView::World::Spatial2D::Controls::IEagleEyeControlListener* ref_listener )
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjectXXXX;
					ptrNativeObject->removeEagleEyeControlListener(ref_listener);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISpatialDisplay*  _stdcall EarthView_World_Spatial2D_Controls_CEagleEyeControl_getDisplay_ISpatialDisplay(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEagleEyeControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISpatialDisplay* objXXXX = ptrNativeObject->getDisplay();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEagleEyeControl_setProxy_void_CEagleEyeControlAgent(void *pObjectXXXX, _in EarthView::World::Spatial2D::Controls::CEagleEyeControlAgent* ref_pxy )
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjectXXXX;
					ptrNativeObject->setProxy(ref_pxy);
				}
			}
		}
	}
}
