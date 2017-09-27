/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/mapcontrol.h"
namespace EarthView
{
	namespace World
	{
		namespace Display
		{
		}
		namespace Spatial
		{
			namespace SystemUI
			{
			}
			namespace GeoDataset
			{
			}
			namespace Display
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial2D_Controls_CInformationBarSettings_m_Visible( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CInformationBarSettings* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CInformationBarSettings*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->m_Visible;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_Controls_CInformationBarSettings_m_Visible( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial2D::Controls::CInformationBarSettings*)pObjectXXXX)->m_Visible = value;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Spatial2D_Controls_CInformationBarSettings_m_R( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CInformationBarSettings* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CInformationBarSettings*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->m_R;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_Controls_CInformationBarSettings_m_R( void *pObjectXXXX, ev_uint32  value )
				{
					((EarthView::World::Spatial2D::Controls::CInformationBarSettings*)pObjectXXXX)->m_R = value;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Spatial2D_Controls_CInformationBarSettings_m_G( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CInformationBarSettings* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CInformationBarSettings*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->m_G;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_Controls_CInformationBarSettings_m_G( void *pObjectXXXX, ev_uint32  value )
				{
					((EarthView::World::Spatial2D::Controls::CInformationBarSettings*)pObjectXXXX)->m_G = value;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Spatial2D_Controls_CInformationBarSettings_m_B( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CInformationBarSettings* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CInformationBarSettings*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->m_B;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_Controls_CInformationBarSettings_m_B( void *pObjectXXXX, ev_uint32  value )
				{
					((EarthView::World::Spatial2D::Controls::CInformationBarSettings*)pObjectXXXX)->m_B = value;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Spatial2D_Controls_CInformationBarSettings_m_A( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CInformationBarSettings* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CInformationBarSettings*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->m_A;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_Controls_CInformationBarSettings_m_A( void *pObjectXXXX, ev_uint32  value )
				{
					((EarthView::World::Spatial2D::Controls::CInformationBarSettings*)pObjectXXXX)->m_A = value;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial2D_Controls_CInformationBarSettings_m_Font( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CInformationBarSettings* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CInformationBarSettings*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->m_Font;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_Controls_CInformationBarSettings_m_Font( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial2D::Controls::CInformationBarSettings*)pObjectXXXX)->m_Font = value1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial2D_Controls_CInformationBarSettings_m_IsBold( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CInformationBarSettings* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CInformationBarSettings*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->m_IsBold;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_Controls_CInformationBarSettings_m_IsBold( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial2D::Controls::CInformationBarSettings*)pObjectXXXX)->m_IsBold = value;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Spatial2D_Controls_CInformationBarSettings_m_FontColor_R( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CInformationBarSettings* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CInformationBarSettings*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->m_FontColor_R;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_Controls_CInformationBarSettings_m_FontColor_R( void *pObjectXXXX, ev_uint32  value )
				{
					((EarthView::World::Spatial2D::Controls::CInformationBarSettings*)pObjectXXXX)->m_FontColor_R = value;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Spatial2D_Controls_CInformationBarSettings_m_FontColor_G( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CInformationBarSettings* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CInformationBarSettings*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->m_FontColor_G;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_Controls_CInformationBarSettings_m_FontColor_G( void *pObjectXXXX, ev_uint32  value )
				{
					((EarthView::World::Spatial2D::Controls::CInformationBarSettings*)pObjectXXXX)->m_FontColor_G = value;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Spatial2D_Controls_CInformationBarSettings_m_FontColor_B( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CInformationBarSettings* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CInformationBarSettings*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->m_FontColor_B;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_Controls_CInformationBarSettings_m_FontColor_B( void *pObjectXXXX, ev_uint32  value )
				{
					((EarthView::World::Spatial2D::Controls::CInformationBarSettings*)pObjectXXXX)->m_FontColor_B = value;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Spatial2D_Controls_CInformationBarSettings_m_FontColor_A( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CInformationBarSettings* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CInformationBarSettings*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->m_FontColor_A;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_Controls_CInformationBarSettings_m_FontColor_A( void *pObjectXXXX, ev_uint32  value )
				{
					((EarthView::World::Spatial2D::Controls::CInformationBarSettings*)pObjectXXXX)->m_FontColor_A = value;
				}
				typedef EarthView::World::Display::IPaintDevice*  ( _stdcall EarthView_World_Spatial2D_Controls_CMapControlAgent_onGetMapCanvas_IPaintDevice_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CMapControlAgent_onRepaint_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CMapControlAgent_onSetCursor_void_ev_int32_Callback)(_in ev_int32 value);
				class CMapControlAgentProxy : public EarthView::World::Spatial2D::Controls::CMapControlAgent
				{
				private:
					EarthView_World_Spatial2D_Controls_CMapControlAgent_onGetMapCanvas_IPaintDevice_Callback* m_EarthView_World_Spatial2D_Controls_CMapControlAgent_onGetMapCanvas_IPaintDevice_Callback;
					EarthView_World_Spatial2D_Controls_CMapControlAgent_onRepaint_void_Callback* m_EarthView_World_Spatial2D_Controls_CMapControlAgent_onRepaint_void_Callback;
					EarthView_World_Spatial2D_Controls_CMapControlAgent_onSetCursor_void_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CMapControlAgent_onSetCursor_void_ev_int32_Callback;
				public:
					CMapControlAgentProxy(EarthView::World::Core::CNameValuePairList *pList) : CMapControlAgent(pList)
					{
						m_EarthView_World_Spatial2D_Controls_CMapControlAgent_onGetMapCanvas_IPaintDevice_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CMapControlAgent_onRepaint_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CMapControlAgent_onSetCursor_void_ev_int32_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CMapControlAgent_onGetMapCanvas_IPaintDevice(EarthView_World_Spatial2D_Controls_CMapControlAgent_onGetMapCanvas_IPaintDevice_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CMapControlAgent_onGetMapCanvas_IPaintDevice_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CMapControlAgent_onRepaint_void(EarthView_World_Spatial2D_Controls_CMapControlAgent_onRepaint_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CMapControlAgent_onRepaint_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CMapControlAgent_onSetCursor_void_ev_int32(EarthView_World_Spatial2D_Controls_CMapControlAgent_onSetCursor_void_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CMapControlAgent_onSetCursor_void_ev_int32_Callback = pCallback;
					}
					virtual EarthView::World::Display::IPaintDevice* onGetMapCanvas() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CMapControlAgent_onGetMapCanvas_IPaintDevice_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IPaintDevice* returnValue = m_EarthView_World_Spatial2D_Controls_CMapControlAgent_onGetMapCanvas_IPaintDevice_Callback();
							return returnValue;
						}
						else
							return this->CMapControlAgent::onGetMapCanvas();
					}
					virtual void onRepaint()
					{
						if(m_EarthView_World_Spatial2D_Controls_CMapControlAgent_onRepaint_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CMapControlAgent_onRepaint_void_Callback();
						}
						else
							return this->CMapControlAgent::onRepaint();
					}
					virtual void onSetCursor(_in ev_int32 value)
					{
						if(m_EarthView_World_Spatial2D_Controls_CMapControlAgent_onSetCursor_void_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CMapControlAgent_onSetCursor_void_ev_int32_Callback(value);
						}
						else
							return this->CMapControlAgent::onSetCursor(value);
					}
				};
				REGISTER_FACTORY_CLASS(CMapControlAgentProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IPaintDevice*  _stdcall EarthView_World_Spatial2D_Controls_CMapControlAgent_onGetMapCanvas_IPaintDevice(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CMapControlAgent* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControlAgent*) pObjectXXXX;
					if (dynamic_cast<CMapControlAgentProxy*>((EarthView::World::Spatial2D::Controls::CMapControlAgent*)ptrNativeObject) != NULL)
					{
						EarthView::World::Display::IPaintDevice* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CMapControlAgent::onGetMapCanvas();
						return objXXXX;
					}
					else
					{
						EarthView::World::Display::IPaintDevice* objXXXX = ptrNativeObject->onGetMapCanvas();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CMapControlAgent_onGetMapCanvas_IPaintDevice( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CMapControlAgent_onGetMapCanvas_IPaintDevice_Callback* pCallback )
				{
					CMapControlAgentProxy* ptr = dynamic_cast<CMapControlAgentProxy*>((EarthView::World::Spatial2D::Controls::CMapControlAgent*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CMapControlAgent_onGetMapCanvas_IPaintDevice(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IPaintDevice*  _stdcall EarthView_World_Spatial2D_Controls_CMapControlAgent_onGetMapCanvas_IPaintDevice_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CMapControlAgent* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControlAgent*) pObjectXXXX;
					EarthView::World::Display::IPaintDevice* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CMapControlAgent::onGetMapCanvas();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControlAgent_onRepaint_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CMapControlAgent* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControlAgent*) pObjectXXXX;
					if (dynamic_cast<CMapControlAgentProxy*>((EarthView::World::Spatial2D::Controls::CMapControlAgent*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CMapControlAgent::onRepaint();
					else
						ptrNativeObject->onRepaint();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CMapControlAgent_onRepaint_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CMapControlAgent_onRepaint_void_Callback* pCallback )
				{
					CMapControlAgentProxy* ptr = dynamic_cast<CMapControlAgentProxy*>((EarthView::World::Spatial2D::Controls::CMapControlAgent*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CMapControlAgent_onRepaint_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControlAgent_onRepaint_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CMapControlAgent* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControlAgent*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CMapControlAgent::onRepaint();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControlAgent_onSetCursor_void_ev_int32(void *pObjectXXXX, _in ev_int32 value )
				{
					EarthView::World::Spatial2D::Controls::CMapControlAgent* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControlAgent*) pObjectXXXX;
					if (dynamic_cast<CMapControlAgentProxy*>((EarthView::World::Spatial2D::Controls::CMapControlAgent*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CMapControlAgent::onSetCursor(value);
					else
						ptrNativeObject->onSetCursor(value);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CMapControlAgent_onSetCursor_void_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CMapControlAgent_onSetCursor_void_ev_int32_Callback* pCallback )
				{
					CMapControlAgentProxy* ptr = dynamic_cast<CMapControlAgentProxy*>((EarthView::World::Spatial2D::Controls::CMapControlAgent*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CMapControlAgent_onSetCursor_void_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControlAgent_onSetCursor_void_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 value )
				{
					EarthView::World::Spatial2D::Controls::CMapControlAgent* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControlAgent*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CMapControlAgent::onSetCursor(value);
				}
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y, _in ev_real64 geoX, _in ev_real64 geoY);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y, _in ev_real64 geoX, _in ev_real64 geoY);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y, _in ev_real64 geoX, _in ev_real64 geoY);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y, _in ev_real64 geoX, _in ev_real64 geoY);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_Callback)(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_real64 geoX, _in ev_real64 geoY, _in ev_int32 flag);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onKeyDown_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onKeyUp_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onResize_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 width, _in ev_int32 height);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeRefresh_void_ISpatialDisplay_IEnvelope_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const EarthView::World::Spatial::Geometry::IEnvelope* viewportEnvelope);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterRefresh_void_ISpatialDisplay_IEnvelope_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const EarthView::World::Spatial::Geometry::IEnvelope* viewportEnvelope);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeDrawTrackingLayer_void_ISpatialDisplay_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterDrawTrackingLayer_void_ISpatialDisplay_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeDrawInterestTrackingItems_void_ISpatialDisplay_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterDrawInterestTrackingItems_void_ISpatialDisplay_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onAnalysisEnd_void_ICommand_Callback)(_in EarthView::World::Spatial::SystemUI::ICommand* command);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeAddLayer_void_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterAddLayer_void_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeRemoveLayer_void_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterRemoveLayer_void_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeMoveLayer_void_ev_int32_ev_int32_Callback)(_in ev_int32 oldIndex, _in ev_int32 newIndex);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterMoveLayer_void_ev_int32_ev_int32_Callback)(_in ev_int32 oldIndex, _in ev_int32 newIndex);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onMapSelectionChanged_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onMapDraw_void_ISpatialDisplay_ILayer_EVVectorLayerRendererType_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::ILayer* layer, _in int type);
				class IMapControlListenerProxy : public EarthView::World::Spatial2D::Controls::IMapControlListener
				{
				private:
					EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial2D_Controls_IMapControlListener_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial2D_Controls_IMapControlListener_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_IMapControlListener_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_IMapControlListener_onKeyDown_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_IMapControlListener_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_IMapControlListener_onKeyUp_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_IMapControlListener_onResize_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_IMapControlListener_onResize_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeRefresh_void_ISpatialDisplay_IEnvelope_Callback* m_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeRefresh_void_ISpatialDisplay_IEnvelope_Callback;
					EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterRefresh_void_ISpatialDisplay_IEnvelope_Callback* m_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterRefresh_void_ISpatialDisplay_IEnvelope_Callback;
					EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeDrawTrackingLayer_void_ISpatialDisplay_Callback* m_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeDrawTrackingLayer_void_ISpatialDisplay_Callback;
					EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterDrawTrackingLayer_void_ISpatialDisplay_Callback* m_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterDrawTrackingLayer_void_ISpatialDisplay_Callback;
					EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeDrawInterestTrackingItems_void_ISpatialDisplay_Callback* m_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeDrawInterestTrackingItems_void_ISpatialDisplay_Callback;
					EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterDrawInterestTrackingItems_void_ISpatialDisplay_Callback* m_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterDrawInterestTrackingItems_void_ISpatialDisplay_Callback;
					EarthView_World_Spatial2D_Controls_IMapControlListener_onAnalysisEnd_void_ICommand_Callback* m_EarthView_World_Spatial2D_Controls_IMapControlListener_onAnalysisEnd_void_ICommand_Callback;
					EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeAddLayer_void_ILayer_Callback* m_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeAddLayer_void_ILayer_Callback;
					EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterAddLayer_void_ILayer_Callback* m_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterAddLayer_void_ILayer_Callback;
					EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeRemoveLayer_void_ILayer_Callback* m_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeRemoveLayer_void_ILayer_Callback;
					EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterRemoveLayer_void_ILayer_Callback* m_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterRemoveLayer_void_ILayer_Callback;
					EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeMoveLayer_void_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeMoveLayer_void_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterMoveLayer_void_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterMoveLayer_void_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_IMapControlListener_onMapSelectionChanged_void_Callback* m_EarthView_World_Spatial2D_Controls_IMapControlListener_onMapSelectionChanged_void_Callback;
					EarthView_World_Spatial2D_Controls_IMapControlListener_onMapDraw_void_ISpatialDisplay_ILayer_EVVectorLayerRendererType_Callback* m_EarthView_World_Spatial2D_Controls_IMapControlListener_onMapDraw_void_ISpatialDisplay_ILayer_EVVectorLayerRendererType_Callback;
				public:
					IMapControlListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : IMapControlListener(pList)
					{
						m_EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_IMapControlListener_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_IMapControlListener_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_IMapControlListener_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_IMapControlListener_onResize_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeRefresh_void_ISpatialDisplay_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterRefresh_void_ISpatialDisplay_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeDrawTrackingLayer_void_ISpatialDisplay_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterDrawTrackingLayer_void_ISpatialDisplay_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeDrawInterestTrackingItems_void_ISpatialDisplay_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterDrawInterestTrackingItems_void_ISpatialDisplay_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_IMapControlListener_onAnalysisEnd_void_ICommand_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeAddLayer_void_ILayer_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterAddLayer_void_ILayer_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeRemoveLayer_void_ILayer_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterRemoveLayer_void_ILayer_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeMoveLayer_void_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterMoveLayer_void_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_IMapControlListener_onMapSelectionChanged_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_IMapControlListener_onMapDraw_void_ISpatialDisplay_ILayer_EVVectorLayerRendererType_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(EarthView_World_Spatial2D_Controls_IMapControlListener_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_IMapControlListener_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32(EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onKeyDown_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_IMapControlListener_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_IMapControlListener_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onKeyUp_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_IMapControlListener_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_IMapControlListener_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onResize_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_IMapControlListener_onResize_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_IMapControlListener_onResize_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeRefresh_void_ISpatialDisplay_IEnvelope(EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeRefresh_void_ISpatialDisplay_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeRefresh_void_ISpatialDisplay_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterRefresh_void_ISpatialDisplay_IEnvelope(EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterRefresh_void_ISpatialDisplay_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterRefresh_void_ISpatialDisplay_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeDrawTrackingLayer_void_ISpatialDisplay(EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeDrawTrackingLayer_void_ISpatialDisplay_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeDrawTrackingLayer_void_ISpatialDisplay_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterDrawTrackingLayer_void_ISpatialDisplay(EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterDrawTrackingLayer_void_ISpatialDisplay_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterDrawTrackingLayer_void_ISpatialDisplay_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeDrawInterestTrackingItems_void_ISpatialDisplay(EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeDrawInterestTrackingItems_void_ISpatialDisplay_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeDrawInterestTrackingItems_void_ISpatialDisplay_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterDrawInterestTrackingItems_void_ISpatialDisplay(EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterDrawInterestTrackingItems_void_ISpatialDisplay_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterDrawInterestTrackingItems_void_ISpatialDisplay_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onAnalysisEnd_void_ICommand(EarthView_World_Spatial2D_Controls_IMapControlListener_onAnalysisEnd_void_ICommand_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_IMapControlListener_onAnalysisEnd_void_ICommand_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeAddLayer_void_ILayer(EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeAddLayer_void_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeAddLayer_void_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterAddLayer_void_ILayer(EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterAddLayer_void_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterAddLayer_void_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeRemoveLayer_void_ILayer(EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeRemoveLayer_void_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeRemoveLayer_void_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterRemoveLayer_void_ILayer(EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterRemoveLayer_void_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterRemoveLayer_void_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeMoveLayer_void_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeMoveLayer_void_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeMoveLayer_void_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterMoveLayer_void_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterMoveLayer_void_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterMoveLayer_void_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onMapSelectionChanged_void(EarthView_World_Spatial2D_Controls_IMapControlListener_onMapSelectionChanged_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_IMapControlListener_onMapSelectionChanged_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onMapDraw_void_ISpatialDisplay_ILayer_EVVectorLayerRendererType(EarthView_World_Spatial2D_Controls_IMapControlListener_onMapDraw_void_ISpatialDisplay_ILayer_EVVectorLayerRendererType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_IMapControlListener_onMapDraw_void_ISpatialDisplay_ILayer_EVVectorLayerRendererType_Callback = pCallback;
					}
					virtual void onBeforeAddLayer(_in EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if(m_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeAddLayer_void_ILayer_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeAddLayer_void_ILayer_Callback(layer);
						}
						else
							return this->IMapControlListener::onBeforeAddLayer(layer);
					}
					virtual void onAfterAddLayer(_in EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if(m_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterAddLayer_void_ILayer_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterAddLayer_void_ILayer_Callback(layer);
						}
						else
							return this->IMapControlListener::onAfterAddLayer(layer);
					}
					virtual void onBeforeRemoveLayer(_in EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if(m_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeRemoveLayer_void_ILayer_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeRemoveLayer_void_ILayer_Callback(layer);
						}
						else
							return this->IMapControlListener::onBeforeRemoveLayer(layer);
					}
					virtual void onAfterRemoveLayer(_in EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if(m_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterRemoveLayer_void_ILayer_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterRemoveLayer_void_ILayer_Callback(layer);
						}
						else
							return this->IMapControlListener::onAfterRemoveLayer(layer);
					}
					virtual void onBeforeMoveLayer(_in ev_int32 oldIndex, _in ev_int32 newIndex)
					{
						if(m_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeMoveLayer_void_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeMoveLayer_void_ev_int32_ev_int32_Callback(oldIndex, newIndex);
						}
						else
							return this->IMapControlListener::onBeforeMoveLayer(oldIndex, newIndex);
					}
					virtual void onAfterMoveLayer(_in ev_int32 oldIndex, _in ev_int32 newIndex)
					{
						if(m_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterMoveLayer_void_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterMoveLayer_void_ev_int32_ev_int32_Callback(oldIndex, newIndex);
						}
						else
							return this->IMapControlListener::onAfterMoveLayer(oldIndex, newIndex);
					}
					virtual void onMapSelectionChanged()
					{
						if(m_EarthView_World_Spatial2D_Controls_IMapControlListener_onMapSelectionChanged_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_IMapControlListener_onMapSelectionChanged_void_Callback();
						}
						else
							return this->IMapControlListener::onMapSelectionChanged();
					}
					virtual void onMapDraw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::ILayer* layer, _in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
					{
						if(m_EarthView_World_Spatial2D_Controls_IMapControlListener_onMapDraw_void_ISpatialDisplay_ILayer_EVVectorLayerRendererType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_IMapControlListener_onMapDraw_void_ISpatialDisplay_ILayer_EVVectorLayerRendererType_Callback(display, layer, (int)type);
						}
						else
							return this->IMapControlListener::onMapDraw(display, layer, type);
					}
					virtual ev_bool onMouseDown(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y, _in ev_real64 geoX, _in ev_real64 geoY)
					{
						if(m_EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback(button, shift, x, y, geoX, geoY);
							return returnValue;
						}
						else
							return this->IMapControlListener::onMouseDown(button, shift, x, y, geoX, geoY);
					}
					virtual ev_bool onMouseUp(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y, _in ev_real64 geoX, _in ev_real64 geoY)
					{
						if(m_EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback(button, shift, x, y, geoX, geoY);
							return returnValue;
						}
						else
							return this->IMapControlListener::onMouseUp(button, shift, x, y, geoX, geoY);
					}
					virtual ev_bool onMouseMove(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y, _in ev_real64 geoX, _in ev_real64 geoY)
					{
						if(m_EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback(button, shift, x, y, geoX, geoY);
							return returnValue;
						}
						else
							return this->IMapControlListener::onMouseMove(button, shift, x, y, geoX, geoY);
					}
					virtual ev_bool onDoubleClick(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y, _in ev_real64 geoX, _in ev_real64 geoY)
					{
						if(m_EarthView_World_Spatial2D_Controls_IMapControlListener_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_IMapControlListener_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback(button, shift, x, y, geoX, geoY);
							return returnValue;
						}
						else
							return this->IMapControlListener::onDoubleClick(button, shift, x, y, geoX, geoY);
					}
					virtual ev_bool onMouseWheel(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_real64 geoX, _in ev_real64 geoY, _in ev_int32 flag)
					{
						if(m_EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_Callback(delta, x, y, geoX, geoY, flag);
							return returnValue;
						}
						else
							return this->IMapControlListener::onMouseWheel(delta, x, y, geoX, geoY, flag);
					}
					virtual ev_bool onKeyDown(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial2D_Controls_IMapControlListener_onKeyDown_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_IMapControlListener_onKeyDown_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->IMapControlListener::onKeyDown(keyCode, shift);
					}
					virtual ev_bool onKeyUp(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial2D_Controls_IMapControlListener_onKeyUp_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_IMapControlListener_onKeyUp_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->IMapControlListener::onKeyUp(keyCode, shift);
					}
					virtual ev_bool onResize(_in ev_int32 width, _in ev_int32 height)
					{
						if(m_EarthView_World_Spatial2D_Controls_IMapControlListener_onResize_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_IMapControlListener_onResize_ev_bool_ev_int32_ev_int32_Callback(width, height);
							return returnValue;
						}
						else
							return this->IMapControlListener::onResize(width, height);
					}
					virtual void onBeforeRefresh(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const EarthView::World::Spatial::Geometry::IEnvelope* viewportEnvelope)
					{
						if(m_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeRefresh_void_ISpatialDisplay_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeRefresh_void_ISpatialDisplay_IEnvelope_Callback(display, viewportEnvelope);
						}
						else
							return this->IMapControlListener::onBeforeRefresh(display, viewportEnvelope);
					}
					virtual void onAfterRefresh(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const EarthView::World::Spatial::Geometry::IEnvelope* viewportEnvelope)
					{
						if(m_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterRefresh_void_ISpatialDisplay_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterRefresh_void_ISpatialDisplay_IEnvelope_Callback(display, viewportEnvelope);
						}
						else
							return this->IMapControlListener::onAfterRefresh(display, viewportEnvelope);
					}
					virtual void onBeforeDrawTrackingLayer(_in EarthView::World::Spatial::Display::ISpatialDisplay* display)
					{
						if(m_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeDrawTrackingLayer_void_ISpatialDisplay_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeDrawTrackingLayer_void_ISpatialDisplay_Callback(display);
						}
						else
							return this->IMapControlListener::onBeforeDrawTrackingLayer(display);
					}
					virtual void onAfterDrawTrackingLayer(_in EarthView::World::Spatial::Display::ISpatialDisplay* display)
					{
						if(m_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterDrawTrackingLayer_void_ISpatialDisplay_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterDrawTrackingLayer_void_ISpatialDisplay_Callback(display);
						}
						else
							return this->IMapControlListener::onAfterDrawTrackingLayer(display);
					}
					virtual void onBeforeDrawInterestTrackingItems(_in EarthView::World::Spatial::Display::ISpatialDisplay* display)
					{
						if(m_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeDrawInterestTrackingItems_void_ISpatialDisplay_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeDrawInterestTrackingItems_void_ISpatialDisplay_Callback(display);
						}
						else
							return this->IMapControlListener::onBeforeDrawInterestTrackingItems(display);
					}
					virtual void onAfterDrawInterestTrackingItems(_in EarthView::World::Spatial::Display::ISpatialDisplay* display)
					{
						if(m_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterDrawInterestTrackingItems_void_ISpatialDisplay_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterDrawInterestTrackingItems_void_ISpatialDisplay_Callback(display);
						}
						else
							return this->IMapControlListener::onAfterDrawInterestTrackingItems(display);
					}
					virtual void onAnalysisEnd(_in EarthView::World::Spatial::SystemUI::ICommand* command)
					{
						if(m_EarthView_World_Spatial2D_Controls_IMapControlListener_onAnalysisEnd_void_ICommand_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_IMapControlListener_onAnalysisEnd_void_ICommand_Callback(command);
						}
						else
							return this->IMapControlListener::onAnalysisEnd(command);
					}
				};
				REGISTER_FACTORY_CLASS(IMapControlListenerProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeAddLayer_void_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX;
					if (dynamic_cast<IMapControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IMapControlListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::IMapControlListener::onBeforeAddLayer(layer);
					else
						ptrNativeObject->onBeforeAddLayer(layer);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeAddLayer_void_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeAddLayer_void_ILayer_Callback* pCallback )
				{
					IMapControlListenerProxy* ptr = dynamic_cast<IMapControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeAddLayer_void_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeAddLayer_void_ILayer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::IMapControlListener::onBeforeAddLayer(layer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterAddLayer_void_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX;
					if (dynamic_cast<IMapControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IMapControlListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::IMapControlListener::onAfterAddLayer(layer);
					else
						ptrNativeObject->onAfterAddLayer(layer);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterAddLayer_void_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterAddLayer_void_ILayer_Callback* pCallback )
				{
					IMapControlListenerProxy* ptr = dynamic_cast<IMapControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterAddLayer_void_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterAddLayer_void_ILayer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::IMapControlListener::onAfterAddLayer(layer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeRemoveLayer_void_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX;
					if (dynamic_cast<IMapControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IMapControlListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::IMapControlListener::onBeforeRemoveLayer(layer);
					else
						ptrNativeObject->onBeforeRemoveLayer(layer);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeRemoveLayer_void_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeRemoveLayer_void_ILayer_Callback* pCallback )
				{
					IMapControlListenerProxy* ptr = dynamic_cast<IMapControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeRemoveLayer_void_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeRemoveLayer_void_ILayer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::IMapControlListener::onBeforeRemoveLayer(layer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterRemoveLayer_void_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX;
					if (dynamic_cast<IMapControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IMapControlListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::IMapControlListener::onAfterRemoveLayer(layer);
					else
						ptrNativeObject->onAfterRemoveLayer(layer);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterRemoveLayer_void_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterRemoveLayer_void_ILayer_Callback* pCallback )
				{
					IMapControlListenerProxy* ptr = dynamic_cast<IMapControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterRemoveLayer_void_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterRemoveLayer_void_ILayer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::IMapControlListener::onAfterRemoveLayer(layer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeMoveLayer_void_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 oldIndex, _in ev_int32 newIndex )
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX;
					if (dynamic_cast<IMapControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IMapControlListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::IMapControlListener::onBeforeMoveLayer(oldIndex, newIndex);
					else
						ptrNativeObject->onBeforeMoveLayer(oldIndex, newIndex);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeMoveLayer_void_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeMoveLayer_void_ev_int32_ev_int32_Callback* pCallback )
				{
					IMapControlListenerProxy* ptr = dynamic_cast<IMapControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeMoveLayer_void_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeMoveLayer_void_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 oldIndex, _in ev_int32 newIndex )
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::IMapControlListener::onBeforeMoveLayer(oldIndex, newIndex);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterMoveLayer_void_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 oldIndex, _in ev_int32 newIndex )
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX;
					if (dynamic_cast<IMapControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IMapControlListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::IMapControlListener::onAfterMoveLayer(oldIndex, newIndex);
					else
						ptrNativeObject->onAfterMoveLayer(oldIndex, newIndex);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterMoveLayer_void_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterMoveLayer_void_ev_int32_ev_int32_Callback* pCallback )
				{
					IMapControlListenerProxy* ptr = dynamic_cast<IMapControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterMoveLayer_void_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterMoveLayer_void_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 oldIndex, _in ev_int32 newIndex )
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::IMapControlListener::onAfterMoveLayer(oldIndex, newIndex);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onMapSelectionChanged_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX;
					if (dynamic_cast<IMapControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IMapControlListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::IMapControlListener::onMapSelectionChanged();
					else
						ptrNativeObject->onMapSelectionChanged();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onMapSelectionChanged_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_IMapControlListener_onMapSelectionChanged_void_Callback* pCallback )
				{
					IMapControlListenerProxy* ptr = dynamic_cast<IMapControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onMapSelectionChanged_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onMapSelectionChanged_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::IMapControlListener::onMapSelectionChanged();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onMapDraw_void_ISpatialDisplay_ILayer_EVVectorLayerRendererType(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::ILayer* layer, _in int type )
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX;
					if (dynamic_cast<IMapControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IMapControlListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::IMapControlListener::onMapDraw(display, layer, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
					else
						ptrNativeObject->onMapDraw(display, layer, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onMapDraw_void_ISpatialDisplay_ILayer_EVVectorLayerRendererType( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_IMapControlListener_onMapDraw_void_ISpatialDisplay_ILayer_EVVectorLayerRendererType_Callback* pCallback )
				{
					IMapControlListenerProxy* ptr = dynamic_cast<IMapControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onMapDraw_void_ISpatialDisplay_ILayer_EVVectorLayerRendererType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onMapDraw_void_ISpatialDisplay_ILayer_EVVectorLayerRendererType_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::ILayer* layer, _in int type )
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::IMapControlListener::onMapDraw(display, layer, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y, _in ev_real64 geoX, _in ev_real64 geoY )
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX;
					if (dynamic_cast<IMapControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IMapControlListener*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::IMapControlListener::onMouseDown(button, shift, x, y, geoX, geoY);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseDown(button, shift, x, y, geoX, geoY);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback* pCallback )
				{
					IMapControlListenerProxy* ptr = dynamic_cast<IMapControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y, _in ev_real64 geoX, _in ev_real64 geoY )
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::IMapControlListener::onMouseDown(button, shift, x, y, geoX, geoY);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y, _in ev_real64 geoX, _in ev_real64 geoY )
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX;
					if (dynamic_cast<IMapControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IMapControlListener*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::IMapControlListener::onMouseUp(button, shift, x, y, geoX, geoY);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseUp(button, shift, x, y, geoX, geoY);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback* pCallback )
				{
					IMapControlListenerProxy* ptr = dynamic_cast<IMapControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y, _in ev_real64 geoX, _in ev_real64 geoY )
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::IMapControlListener::onMouseUp(button, shift, x, y, geoX, geoY);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y, _in ev_real64 geoX, _in ev_real64 geoY )
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX;
					if (dynamic_cast<IMapControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IMapControlListener*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::IMapControlListener::onMouseMove(button, shift, x, y, geoX, geoY);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseMove(button, shift, x, y, geoX, geoY);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback* pCallback )
				{
					IMapControlListenerProxy* ptr = dynamic_cast<IMapControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y, _in ev_real64 geoX, _in ev_real64 geoY )
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::IMapControlListener::onMouseMove(button, shift, x, y, geoX, geoY);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y, _in ev_real64 geoX, _in ev_real64 geoY )
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX;
					if (dynamic_cast<IMapControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IMapControlListener*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::IMapControlListener::onDoubleClick(button, shift, x, y, geoX, geoY);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onDoubleClick(button, shift, x, y, geoX, geoY);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_IMapControlListener_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Callback* pCallback )
				{
					IMapControlListenerProxy* ptr = dynamic_cast<IMapControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y, _in ev_real64 geoX, _in ev_real64 geoY )
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::IMapControlListener::onDoubleClick(button, shift, x, y, geoX, geoY);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32(void *pObjectXXXX, _in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_real64 geoX, _in ev_real64 geoY, _in ev_int32 flag )
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX;
					if (dynamic_cast<IMapControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IMapControlListener*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::IMapControlListener::onMouseWheel(delta, x, y, geoX, geoY, flag);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseWheel(delta, x, y, geoX, geoY, flag);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_Callback* pCallback )
				{
					IMapControlListenerProxy* ptr = dynamic_cast<IMapControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_real64 geoX, _in ev_real64 geoY, _in ev_int32 flag )
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::IMapControlListener::onMouseWheel(delta, x, y, geoX, geoY, flag);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onKeyDown_ev_bool_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 keyCode, _in ev_int32 shift )
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX;
					if (dynamic_cast<IMapControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IMapControlListener*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::IMapControlListener::onKeyDown(keyCode, shift);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onKeyDown(keyCode, shift);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onKeyDown_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_IMapControlListener_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					IMapControlListenerProxy* ptr = dynamic_cast<IMapControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onKeyDown_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onKeyDown_ev_bool_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 keyCode, _in ev_int32 shift )
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::IMapControlListener::onKeyDown(keyCode, shift);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onKeyUp_ev_bool_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 keyCode, _in ev_int32 shift )
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX;
					if (dynamic_cast<IMapControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IMapControlListener*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::IMapControlListener::onKeyUp(keyCode, shift);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onKeyUp(keyCode, shift);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onKeyUp_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_IMapControlListener_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					IMapControlListenerProxy* ptr = dynamic_cast<IMapControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onKeyUp_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onKeyUp_ev_bool_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 keyCode, _in ev_int32 shift )
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::IMapControlListener::onKeyUp(keyCode, shift);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onResize_ev_bool_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 width, _in ev_int32 height )
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX;
					if (dynamic_cast<IMapControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IMapControlListener*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::IMapControlListener::onResize(width, height);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onResize(width, height);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onResize_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_IMapControlListener_onResize_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					IMapControlListenerProxy* ptr = dynamic_cast<IMapControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onResize_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onResize_ev_bool_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 width, _in ev_int32 height )
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::IMapControlListener::onResize(width, height);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeRefresh_void_ISpatialDisplay_IEnvelope(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const EarthView::World::Spatial::Geometry::IEnvelope* viewportEnvelope )
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX;
					if (dynamic_cast<IMapControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IMapControlListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::IMapControlListener::onBeforeRefresh(display, viewportEnvelope);
					else
						ptrNativeObject->onBeforeRefresh(display, viewportEnvelope);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeRefresh_void_ISpatialDisplay_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeRefresh_void_ISpatialDisplay_IEnvelope_Callback* pCallback )
				{
					IMapControlListenerProxy* ptr = dynamic_cast<IMapControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeRefresh_void_ISpatialDisplay_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeRefresh_void_ISpatialDisplay_IEnvelope_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const EarthView::World::Spatial::Geometry::IEnvelope* viewportEnvelope )
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::IMapControlListener::onBeforeRefresh(display, viewportEnvelope);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterRefresh_void_ISpatialDisplay_IEnvelope(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const EarthView::World::Spatial::Geometry::IEnvelope* viewportEnvelope )
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX;
					if (dynamic_cast<IMapControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IMapControlListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::IMapControlListener::onAfterRefresh(display, viewportEnvelope);
					else
						ptrNativeObject->onAfterRefresh(display, viewportEnvelope);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterRefresh_void_ISpatialDisplay_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterRefresh_void_ISpatialDisplay_IEnvelope_Callback* pCallback )
				{
					IMapControlListenerProxy* ptr = dynamic_cast<IMapControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterRefresh_void_ISpatialDisplay_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterRefresh_void_ISpatialDisplay_IEnvelope_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const EarthView::World::Spatial::Geometry::IEnvelope* viewportEnvelope )
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::IMapControlListener::onAfterRefresh(display, viewportEnvelope);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeDrawTrackingLayer_void_ISpatialDisplay(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display )
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX;
					if (dynamic_cast<IMapControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IMapControlListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::IMapControlListener::onBeforeDrawTrackingLayer(display);
					else
						ptrNativeObject->onBeforeDrawTrackingLayer(display);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeDrawTrackingLayer_void_ISpatialDisplay( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeDrawTrackingLayer_void_ISpatialDisplay_Callback* pCallback )
				{
					IMapControlListenerProxy* ptr = dynamic_cast<IMapControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeDrawTrackingLayer_void_ISpatialDisplay(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeDrawTrackingLayer_void_ISpatialDisplay_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display )
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::IMapControlListener::onBeforeDrawTrackingLayer(display);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterDrawTrackingLayer_void_ISpatialDisplay(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display )
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX;
					if (dynamic_cast<IMapControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IMapControlListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::IMapControlListener::onAfterDrawTrackingLayer(display);
					else
						ptrNativeObject->onAfterDrawTrackingLayer(display);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterDrawTrackingLayer_void_ISpatialDisplay( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterDrawTrackingLayer_void_ISpatialDisplay_Callback* pCallback )
				{
					IMapControlListenerProxy* ptr = dynamic_cast<IMapControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterDrawTrackingLayer_void_ISpatialDisplay(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterDrawTrackingLayer_void_ISpatialDisplay_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display )
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::IMapControlListener::onAfterDrawTrackingLayer(display);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeDrawInterestTrackingItems_void_ISpatialDisplay(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display )
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX;
					if (dynamic_cast<IMapControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IMapControlListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::IMapControlListener::onBeforeDrawInterestTrackingItems(display);
					else
						ptrNativeObject->onBeforeDrawInterestTrackingItems(display);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeDrawInterestTrackingItems_void_ISpatialDisplay( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeDrawInterestTrackingItems_void_ISpatialDisplay_Callback* pCallback )
				{
					IMapControlListenerProxy* ptr = dynamic_cast<IMapControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeDrawInterestTrackingItems_void_ISpatialDisplay(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onBeforeDrawInterestTrackingItems_void_ISpatialDisplay_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display )
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::IMapControlListener::onBeforeDrawInterestTrackingItems(display);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterDrawInterestTrackingItems_void_ISpatialDisplay(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display )
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX;
					if (dynamic_cast<IMapControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IMapControlListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::IMapControlListener::onAfterDrawInterestTrackingItems(display);
					else
						ptrNativeObject->onAfterDrawInterestTrackingItems(display);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterDrawInterestTrackingItems_void_ISpatialDisplay( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterDrawInterestTrackingItems_void_ISpatialDisplay_Callback* pCallback )
				{
					IMapControlListenerProxy* ptr = dynamic_cast<IMapControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterDrawInterestTrackingItems_void_ISpatialDisplay(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onAfterDrawInterestTrackingItems_void_ISpatialDisplay_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display )
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::IMapControlListener::onAfterDrawInterestTrackingItems(display);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onAnalysisEnd_void_ICommand(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::ICommand* command )
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX;
					if (dynamic_cast<IMapControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IMapControlListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::IMapControlListener::onAnalysisEnd(command);
					else
						ptrNativeObject->onAnalysisEnd(command);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onAnalysisEnd_void_ICommand( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_IMapControlListener_onAnalysisEnd_void_ICommand_Callback* pCallback )
				{
					IMapControlListenerProxy* ptr = dynamic_cast<IMapControlListenerProxy*>((EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_IMapControlListener_onAnalysisEnd_void_ICommand(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_IMapControlListener_onAnalysisEnd_void_ICommand_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::ICommand* command )
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::IMapControlListener::onAnalysisEnd(command);
				}
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CMapControl_beginDrawing_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CMapControl_endDrawing_void_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial2D_Controls_CMapControl_getType_EVSpatialControlType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CMapControl_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CMapControl_getTypeString_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CMapControl_notifyViewChanged_void_IViewArgs_Callback)(_in EarthView::World::Spatial::IViewArgs* args);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CMapControl_addViewListener_ev_bool_IViewListener_Callback)(_in EarthView::World::Spatial::IViewListener* ref_externalListener);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial2D_Controls_CMapControl_getViewListenerCount_ev_uint32_Callback)();
				typedef EarthView::World::Spatial::IViewListener*  ( _stdcall EarthView_World_Spatial2D_Controls_CMapControl_getViewListener_IViewListener_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CMapControl_existViewListener_ev_bool_IViewListener_Callback)(_in EarthView::World::Spatial::IViewListener* externalListener);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CMapControl_removeViewListener_ev_bool_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CMapControl_removeViewListener_ev_bool_IViewListener_Callback)(_in EarthView::World::Spatial::IViewListener* externalListener);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CMapControl_clearViewListeners_void_Callback)();
				class CMapControlProxy : public EarthView::World::Spatial2D::Controls::CMapControl
				{
				private:
					EarthView_World_Spatial2D_Controls_CMapControl_beginDrawing_void_Callback* m_EarthView_World_Spatial2D_Controls_CMapControl_beginDrawing_void_Callback;
					EarthView_World_Spatial2D_Controls_CMapControl_endDrawing_void_Callback* m_EarthView_World_Spatial2D_Controls_CMapControl_endDrawing_void_Callback;
					EarthView_World_Spatial2D_Controls_CMapControl_getType_EVSpatialControlType_Callback* m_EarthView_World_Spatial2D_Controls_CMapControl_getType_EVSpatialControlType_Callback;
					EarthView_World_Spatial2D_Controls_CMapControl_getName_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CMapControl_getName_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CMapControl_getTypeString_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CMapControl_getTypeString_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CMapControl_notifyViewChanged_void_IViewArgs_Callback* m_EarthView_World_Spatial2D_Controls_CMapControl_notifyViewChanged_void_IViewArgs_Callback;
					EarthView_World_Spatial2D_Controls_CMapControl_addViewListener_ev_bool_IViewListener_Callback* m_EarthView_World_Spatial2D_Controls_CMapControl_addViewListener_ev_bool_IViewListener_Callback;
					EarthView_World_Spatial2D_Controls_CMapControl_getViewListenerCount_ev_uint32_Callback* m_EarthView_World_Spatial2D_Controls_CMapControl_getViewListenerCount_ev_uint32_Callback;
					EarthView_World_Spatial2D_Controls_CMapControl_getViewListener_IViewListener_ev_uint32_Callback* m_EarthView_World_Spatial2D_Controls_CMapControl_getViewListener_IViewListener_ev_uint32_Callback;
					EarthView_World_Spatial2D_Controls_CMapControl_existViewListener_ev_bool_IViewListener_Callback* m_EarthView_World_Spatial2D_Controls_CMapControl_existViewListener_ev_bool_IViewListener_Callback;
					EarthView_World_Spatial2D_Controls_CMapControl_removeViewListener_ev_bool_ev_uint32_Callback* m_EarthView_World_Spatial2D_Controls_CMapControl_removeViewListener_ev_bool_ev_uint32_Callback;
					EarthView_World_Spatial2D_Controls_CMapControl_removeViewListener_ev_bool_IViewListener_Callback* m_EarthView_World_Spatial2D_Controls_CMapControl_removeViewListener_ev_bool_IViewListener_Callback;
					EarthView_World_Spatial2D_Controls_CMapControl_clearViewListeners_void_Callback* m_EarthView_World_Spatial2D_Controls_CMapControl_clearViewListeners_void_Callback;
				public:
					CMapControlProxy(EarthView::World::Core::CNameValuePairList *pList) : CMapControl(pList)
					{
						m_EarthView_World_Spatial2D_Controls_CMapControl_beginDrawing_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CMapControl_endDrawing_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CMapControl_getType_EVSpatialControlType_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CMapControl_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CMapControl_getTypeString_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CMapControl_notifyViewChanged_void_IViewArgs_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CMapControl_addViewListener_ev_bool_IViewListener_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CMapControl_getViewListenerCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CMapControl_getViewListener_IViewListener_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CMapControl_existViewListener_ev_bool_IViewListener_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CMapControl_removeViewListener_ev_bool_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CMapControl_removeViewListener_ev_bool_IViewListener_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CMapControl_clearViewListeners_void_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CMapControlProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CMapControl_beginDrawing_void(EarthView_World_Spatial2D_Controls_CMapControl_beginDrawing_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CMapControl_beginDrawing_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CMapControl_endDrawing_void(EarthView_World_Spatial2D_Controls_CMapControl_endDrawing_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CMapControl_endDrawing_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CMapControl_getType_EVSpatialControlType(EarthView_World_Spatial2D_Controls_CMapControl_getType_EVSpatialControlType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CMapControl_getType_EVSpatialControlType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CMapControl_getName_EVString(EarthView_World_Spatial2D_Controls_CMapControl_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CMapControl_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CMapControl_getTypeString_EVString(EarthView_World_Spatial2D_Controls_CMapControl_getTypeString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CMapControl_getTypeString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CMapControl_notifyViewChanged_void_IViewArgs(EarthView_World_Spatial2D_Controls_CMapControl_notifyViewChanged_void_IViewArgs_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CMapControl_notifyViewChanged_void_IViewArgs_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CMapControl_addViewListener_ev_bool_IViewListener(EarthView_World_Spatial2D_Controls_CMapControl_addViewListener_ev_bool_IViewListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CMapControl_addViewListener_ev_bool_IViewListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CMapControl_getViewListenerCount_ev_uint32(EarthView_World_Spatial2D_Controls_CMapControl_getViewListenerCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CMapControl_getViewListenerCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CMapControl_getViewListener_IViewListener_ev_uint32(EarthView_World_Spatial2D_Controls_CMapControl_getViewListener_IViewListener_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CMapControl_getViewListener_IViewListener_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CMapControl_existViewListener_ev_bool_IViewListener(EarthView_World_Spatial2D_Controls_CMapControl_existViewListener_ev_bool_IViewListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CMapControl_existViewListener_ev_bool_IViewListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CMapControl_removeViewListener_ev_bool_ev_uint32(EarthView_World_Spatial2D_Controls_CMapControl_removeViewListener_ev_bool_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CMapControl_removeViewListener_ev_bool_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CMapControl_removeViewListener_ev_bool_IViewListener(EarthView_World_Spatial2D_Controls_CMapControl_removeViewListener_ev_bool_IViewListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CMapControl_removeViewListener_ev_bool_IViewListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CMapControl_clearViewListeners_void(EarthView_World_Spatial2D_Controls_CMapControl_clearViewListeners_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CMapControl_clearViewListeners_void_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Atlas::EVSpatialControlType getType() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CMapControl_getType_EVSpatialControlType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVSpatialControlType returnValue = (EarthView::World::Spatial::Atlas::EVSpatialControlType)m_EarthView_World_Spatial2D_Controls_CMapControl_getType_EVSpatialControlType_Callback();
							return returnValue;
						}
						else
							return this->CMapControl::getType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CMapControl_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CMapControl_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CMapControl::getName();
					}
					virtual EVString getTypeString() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CMapControl_getTypeString_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CMapControl_getTypeString_EVString_Callback();
							return returnValue;
						}
						else
							return this->CMapControl::getTypeString();
					}
					virtual void notifyViewChanged(_in EarthView::World::Spatial::IViewArgs* args)
					{
						if(m_EarthView_World_Spatial2D_Controls_CMapControl_notifyViewChanged_void_IViewArgs_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CMapControl_notifyViewChanged_void_IViewArgs_Callback(args);
						}
						else
							return this->CMapControl::notifyViewChanged(args);
					}
					virtual void beginDrawing()
					{
						if(m_EarthView_World_Spatial2D_Controls_CMapControl_beginDrawing_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CMapControl_beginDrawing_void_Callback();
						}
						else
							return this->CMapControl::beginDrawing();
					}
					virtual void endDrawing()
					{
						if(m_EarthView_World_Spatial2D_Controls_CMapControl_endDrawing_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CMapControl_endDrawing_void_Callback();
						}
						else
							return this->CMapControl::endDrawing();
					}
					virtual ev_bool addViewListener(_in EarthView::World::Spatial::IViewListener* ref_externalListener)
					{
						if(m_EarthView_World_Spatial2D_Controls_CMapControl_addViewListener_ev_bool_IViewListener_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CMapControl_addViewListener_ev_bool_IViewListener_Callback(ref_externalListener);
							return returnValue;
						}
						else
							return this->CMapControl::addViewListener(ref_externalListener);
					}
					virtual ev_uint32 getViewListenerCount() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CMapControl_getViewListenerCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial2D_Controls_CMapControl_getViewListenerCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CMapControl::getViewListenerCount();
					}
					virtual EarthView::World::Spatial::IViewListener* getViewListener(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CMapControl_getViewListener_IViewListener_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::IViewListener* returnValue = m_EarthView_World_Spatial2D_Controls_CMapControl_getViewListener_IViewListener_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CMapControl::getViewListener(index);
					}
					virtual ev_bool existViewListener(_in EarthView::World::Spatial::IViewListener* externalListener) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CMapControl_existViewListener_ev_bool_IViewListener_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CMapControl_existViewListener_ev_bool_IViewListener_Callback(externalListener);
							return returnValue;
						}
						else
							return this->CMapControl::existViewListener(externalListener);
					}
					virtual ev_bool removeViewListener(_in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial2D_Controls_CMapControl_removeViewListener_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CMapControl_removeViewListener_ev_bool_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CMapControl::removeViewListener(index);
					}
					virtual ev_bool removeViewListener(_in EarthView::World::Spatial::IViewListener* externalListener)
					{
						if(m_EarthView_World_Spatial2D_Controls_CMapControl_removeViewListener_ev_bool_IViewListener_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CMapControl_removeViewListener_ev_bool_IViewListener_Callback(externalListener);
							return returnValue;
						}
						else
							return this->CMapControl::removeViewListener(externalListener);
					}
					virtual void clearViewListeners()
					{
						if(m_EarthView_World_Spatial2D_Controls_CMapControl_clearViewListeners_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CMapControl_clearViewListeners_void_Callback();
						}
						else
							return this->CMapControl::clearViewListeners();
					}
				};
				REGISTER_FACTORY_CLASS(CMapControlProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_getType_EVSpatialControlType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					if (dynamic_cast<CMapControlProxy*>((EarthView::World::Spatial2D::Controls::CMapControl*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVSpatialControlType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CMapControl::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVSpatialControlType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CMapControl_getType_EVSpatialControlType( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CMapControl_getType_EVSpatialControlType_Callback* pCallback )
				{
					CMapControlProxy* ptr = dynamic_cast<CMapControlProxy*>((EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CMapControl_getType_EVSpatialControlType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_getType_EVSpatialControlType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVSpatialControlType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CMapControl::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					if (dynamic_cast<CMapControlProxy*>((EarthView::World::Spatial2D::Controls::CMapControl*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CMapControl::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CMapControl_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CMapControl_getName_EVString_Callback* pCallback )
				{
					CMapControlProxy* ptr = dynamic_cast<CMapControlProxy*>((EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CMapControl_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CMapControl::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_getTypeString_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					if (dynamic_cast<CMapControlProxy*>((EarthView::World::Spatial2D::Controls::CMapControl*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CMapControl::getTypeString();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getTypeString();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CMapControl_getTypeString_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CMapControl_getTypeString_EVString_Callback* pCallback )
				{
					CMapControlProxy* ptr = dynamic_cast<CMapControlProxy*>((EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CMapControl_getTypeString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_getTypeString_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CMapControl::getTypeString();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_notifyViewChanged_void_IViewArgs(void *pObjectXXXX, _in EarthView::World::Spatial::IViewArgs* args )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					if (dynamic_cast<CMapControlProxy*>((EarthView::World::Spatial2D::Controls::CMapControl*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CMapControl::notifyViewChanged(args);
					else
						ptrNativeObject->notifyViewChanged(args);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CMapControl_notifyViewChanged_void_IViewArgs( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CMapControl_notifyViewChanged_void_IViewArgs_Callback* pCallback )
				{
					CMapControlProxy* ptr = dynamic_cast<CMapControlProxy*>((EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CMapControl_notifyViewChanged_void_IViewArgs(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_notifyViewChanged_void_IViewArgs_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::IViewArgs* args )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CMapControl::notifyViewChanged(args);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_setProxy_void_CMapControlAgent(void *pObjectXXXX, _in EarthView::World::Spatial2D::Controls::CMapControlAgent* ref_pxy )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->setProxy(ref_pxy);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_getBackGround_IColor(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getBackGround();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_setBackground_void_IColor(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* background )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->setBackground(background);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISpatialDisplay*  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_getDisplay_ISpatialDisplay(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISpatialDisplay* objXXXX = ptrNativeObject->getDisplay();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISpatialDisplay*  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_getFloatingDisplay_ISpatialDisplay(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISpatialDisplay* objXXXX = ptrNativeObject->getFloatingDisplay();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IMap*  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_getMap_IMap(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::IMap* objXXXX = ptrNativeObject->getMap();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_setMap_void_IMap(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* ref_map )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->setMap(ref_map);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_getSpatialReference_ISpatialReference(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_setSpatialReference_void_ISpatialReference(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::ISpatialReference* sr )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->setSpatialReference(sr);
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_getMargin_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getMargin();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_setMargin_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 margin )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->setMargin(margin);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_getCenter_void_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64* cx, _in ev_real64* cy )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->getCenter(cx, cy);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_setCenter_void_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 cx, _in ev_real64 cy )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->setCenter(cx, cy);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_getGeographicCenter_void_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64* cx, _in ev_real64* cy )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->getGeographicCenter(cx, cy);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_setGeographicCenter_void_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 cx, _in ev_real64 cy )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->setGeographicCenter(cx, cy);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_getCurrentScale_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getCurrentScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_setScaleAt_void_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64 scale )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->setScaleAt(x, y, scale);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_getRotation_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getRotation();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_setRotateAt_void_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 angle, _in ev_real64 x, _in ev_real64 y )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->setRotateAt(angle, x, y);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_gotoMap_void_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 cx, _in ev_real64 cy, _in ev_real64 scale )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->gotoMap(cx, cy, scale);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_changeViewport_void_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 cx, _in ev_real64 cy, _in ev_real64 scale, _in ev_real64 rotation )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->changeViewport(cx, cy, scale, rotation);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_changeGeographicViewport_void_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 cx, _in ev_real64 cy, _in ev_real64 scale, _in ev_real64 rotation )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->changeGeographicViewport(cx, cy, scale, rotation);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_getCurrentCoordinate_void_ev_real64_ev_real64(void *pObjectXXXX, _out ev_real64* x, _out ev_real64* y )
				{
					const EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->getCurrentCoordinate(x, y);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_getMapUnits_EVMapUnits(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVMapUnits objXXXX = ptrNativeObject->getMapUnits();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_setMapUnits_void_EVMapUnits(void *pObjectXXXX, _in int units )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->setMapUnits((EarthView::World::Spatial::Atlas::EVMapUnits)units);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_setCurrentTool_void_ITool(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::ITool* ref_tool )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->setCurrentTool(ref_tool);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::SystemUI::ITool*  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_getCurrentTool_ITool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::ITool* objXXXX = ptrNativeObject->getCurrentTool();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::SystemUI::ITool*  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_getPreviousTool_ITool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::ITool* objXXXX = ptrNativeObject->getPreviousTool();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_getMessage_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getMessage();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::CWorkCommandManager*  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_getViewportManager_CWorkCommandManager(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::CWorkCommandManager* objXXXX = ptrNativeObject->getViewportManager();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Controls::CTrackingLayer*  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_getTrackingLayer_CTrackingLayer(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::CTrackingLayer* objXXXX = ptrNativeObject->getTrackingLayer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Controls::CDataEditor*  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_getDataEditor_CDataEditor(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::CDataEditor* objXXXX = ptrNativeObject->getDataEditor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_select_void_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->select(geometry);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_refresh_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->refresh();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_isDrawing_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isDrawing();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_freezeDraw_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->freezeDraw();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_freezeDraw_void_ev_bool(void *pObjectXXXX, _in ev_bool bWait )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->freezeDraw(bWait);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_beginDrawing_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					if (dynamic_cast<CMapControlProxy*>((EarthView::World::Spatial2D::Controls::CMapControl*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CMapControl::beginDrawing();
					else
						ptrNativeObject->beginDrawing();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CMapControl_beginDrawing_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CMapControl_beginDrawing_void_Callback* pCallback )
				{
					CMapControlProxy* ptr = dynamic_cast<CMapControlProxy*>((EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CMapControl_beginDrawing_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_beginDrawing_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CMapControl::beginDrawing();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_endDrawing_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					if (dynamic_cast<CMapControlProxy*>((EarthView::World::Spatial2D::Controls::CMapControl*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CMapControl::endDrawing();
					else
						ptrNativeObject->endDrawing();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CMapControl_endDrawing_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CMapControl_endDrawing_void_Callback* pCallback )
				{
					CMapControlProxy* ptr = dynamic_cast<CMapControlProxy*>((EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CMapControl_endDrawing_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_endDrawing_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CMapControl::endDrawing();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_updateLayer_void_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->updateLayer(layer);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_isExist_ev_bool_ILayer(void *pObjectXXXX, _in const EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					const EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isExist(layer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_fullExtent_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->fullExtent();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_zoomToLayer_void_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->zoomToLayer(layer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_previousView_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->previousView();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_nextView_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->nextView();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_onContextMenu_ev_bool_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->onContextMenu(x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_onDoubleClick_void_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->onDoubleClick(button, shift, x, y);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_onKeyDown_void_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 keyCode, _in ev_int32 shift )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->onKeyDown(keyCode, shift);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_onKeyUp_void_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 keyCode, _in ev_int32 shift )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->onKeyUp(keyCode, shift);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_onMouseDown_void_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->onMouseDown(button, shift, x, y);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_onMouseMove_void_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->onMouseMove(button, shift, x, y);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_onMouseUp_void_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->onMouseUp(button, shift, x, y);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_onMouseWheel_void_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->onMouseWheel(delta, x, y, flag);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_onResize_void_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 width, _in ev_int32 height )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->onResize(width, height);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_notifySelectionChanged_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->notifySelectionChanged();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_notifyOtherView_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->notifyOtherView();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_onAnalysisEnd_void_ICommand(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::ICommand* command )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->onAnalysisEnd(command);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_addMapControlListener_void_IMapControlListener(void *pObjectXXXX, _in EarthView::World::Spatial2D::Controls::IMapControlListener* ref_listener )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->addMapControlListener(ref_listener);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_removeMapControlListener_void_IMapControlListener(void *pObjectXXXX, _in EarthView::World::Spatial2D::Controls::IMapControlListener* ref_listener )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->removeMapControlListener(ref_listener);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Controls::CMapEagleEye*  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_getEagleEye_CMapEagleEye(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::CMapEagleEye* objXXXX = ptrNativeObject->getEagleEye();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_connectEagleEye_void_CMapEagleEye(void *pObjectXXXX, _in EarthView::World::Spatial2D::Controls::CMapEagleEye* ref_eagleEye )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->connectEagleEye(ref_eagleEye);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_disconnectEagleEye_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->disconnectEagleEye();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IPaintDevice*  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_getMapCanvas_IPaintDevice(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					EarthView::World::Display::IPaintDevice* objXXXX = ptrNativeObject->getMapCanvas();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_repaint_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->repaint();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_setCursor_void_ev_int32(void *pObjectXXXX, _in ev_int32 value )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->setCursor(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_setWheelDelay_void_ev_int32(void *pObjectXXXX, _in ev_int32 time )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->setWheelDelay(time);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_getWheelDelay_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getWheelDelay();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_setViewControlMode_void_EVMapcontrolViewControlMode(void *pObjectXXXX, _in int mode )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->setViewControlMode((EarthView::World::Spatial2D::Controls::EVMapcontrolViewControlMode)mode);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_getViewControlMode_EVMapcontrolViewControlMode(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::EVMapcontrolViewControlMode objXXXX = ptrNativeObject->getViewControlMode();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_setPanClickEnable_void_ev_bool(void *pObjectXXXX, _in ev_bool b )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->setPanClickEnable(b);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_getPanClickEnable_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getPanClickEnable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_setMiddleMouseButtonPanEnable_void_ev_bool(void *pObjectXXXX, _in ev_bool b )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->setMiddleMouseButtonPanEnable(b);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_getMiddleMouseButtonPanEnable_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getMiddleMouseButtonPanEnable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_setCoordinateUnit_void_EVMapcontrolCoordinateUnit(void *pObjectXXXX, _in int unit )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->setCoordinateUnit((EarthView::World::Spatial2D::Controls::EVMapcontrolCoordinateUnit)unit);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_getCoordinateUnit_EVMapcontrolCoordinateUnit(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::EVMapcontrolCoordinateUnit objXXXX = ptrNativeObject->getCoordinateUnit();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_onZoomBegin_void_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 x1, _in ev_int32 y1, _in ev_int32 x2, _in ev_int32 y2 )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->onZoomBegin(x1, y1, x2, y2);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_onZoom_void_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 x1, _in ev_int32 y1, _in ev_int32 x2, _in ev_int32 y2 )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->onZoom(x1, y1, x2, y2);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapControl_onZoomEnd_void_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 x1, _in ev_int32 y1, _in ev_int32 x2, _in ev_int32 y2 )
				{
					EarthView::World::Spatial2D::Controls::CMapControl* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX;
					ptrNativeObject->onZoomEnd(x1, y1, x2, y2);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CMapControl_addViewListener_ev_bool_IViewListener( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CMapControl_addViewListener_ev_bool_IViewListener_Callback* pCallback )
				{
					CMapControlProxy* ptr = dynamic_cast<CMapControlProxy*>((EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CMapControl_addViewListener_ev_bool_IViewListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CMapControl_getViewListenerCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CMapControl_getViewListenerCount_ev_uint32_Callback* pCallback )
				{
					CMapControlProxy* ptr = dynamic_cast<CMapControlProxy*>((EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CMapControl_getViewListenerCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CMapControl_getViewListener_IViewListener_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CMapControl_getViewListener_IViewListener_ev_uint32_Callback* pCallback )
				{
					CMapControlProxy* ptr = dynamic_cast<CMapControlProxy*>((EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CMapControl_getViewListener_IViewListener_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CMapControl_existViewListener_ev_bool_IViewListener( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CMapControl_existViewListener_ev_bool_IViewListener_Callback* pCallback )
				{
					CMapControlProxy* ptr = dynamic_cast<CMapControlProxy*>((EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CMapControl_existViewListener_ev_bool_IViewListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CMapControl_removeViewListener_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CMapControl_removeViewListener_ev_bool_ev_uint32_Callback* pCallback )
				{
					CMapControlProxy* ptr = dynamic_cast<CMapControlProxy*>((EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CMapControl_removeViewListener_ev_bool_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CMapControl_removeViewListener_ev_bool_IViewListener( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CMapControl_removeViewListener_ev_bool_IViewListener_Callback* pCallback )
				{
					CMapControlProxy* ptr = dynamic_cast<CMapControlProxy*>((EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CMapControl_removeViewListener_ev_bool_IViewListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CMapControl_clearViewListeners_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CMapControl_clearViewListeners_void_Callback* pCallback )
				{
					CMapControlProxy* ptr = dynamic_cast<CMapControlProxy*>((EarthView::World::Spatial2D::Controls::CMapControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CMapControl_clearViewListeners_void(pCallback);
					}
				}
			}
		}
	}
}
