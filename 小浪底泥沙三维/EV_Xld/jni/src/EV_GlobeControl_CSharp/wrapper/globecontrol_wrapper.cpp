/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "globecontrol/globecontrol.h"
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
			}
			namespace Atlas
			{
			}
		}
		namespace Spatial
		{
			namespace Atlas
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Effect3D
			{
			}
		}
		namespace Spatial3D
		{
			namespace Controls
			{
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_createGlobeScene_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_destroyGlobeScene_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_real64_ev_real64_Callback)(_in ev_int32 screenX, _in ev_int32 screenY, _inout ev_real64& latitude, _inout ev_real64& longitude);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_real64_ev_real64_ev_bool_Callback)(_in ev_int32 screenX, _in ev_int32 screenY, _inout ev_real64& latitude, _inout ev_real64& longitude, _in ev_bool intersectModel);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_Callback)(_in ev_int32 screenX, _in ev_int32 screenY, _in ev_bool intersectModel, _in ev_bool intersectSea, _inout ev_real64& latitude, _inout ev_real64& longitude, _inout ev_real64& altitude, _inout ev_bool& modelIntersected);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_bool_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_ev_bool_Callback)(_in ev_int32 screenX, _in ev_int32 screenY, _in ev_bool intersectModel, _in ev_bool intersectSea, _in ev_bool intersectOBQ, _inout ev_real64& latitude, _inout ev_real64& longitude, _inout ev_real64& altitude, _inout ev_bool& modelIntersected, _inout ev_bool& seaIntersected, _inout ev_bool& OBQIntersected);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_Callback)(_in ev_int32 screenX, _in ev_int32 screenY, _in ev_bool intersectModel, _in ev_bool intersectSea, _inout ev_real64& latitude, _inout ev_real64& longitude, _inout ev_real64& altitude, _inout ev_bool& modelIntersected, _inout ev_bool& seaIntersected);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_windowResized_void_int_int_Callback)(_in int width, _in int height);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_setCurrentTool_ev_bool_ITool_Callback)(_in EarthView::World::Spatial::SystemUI::ITool* ref_tool);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_windowResized_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback)(_in ev_int32 x, _in ev_int32 y, _in ev_uint32 button);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback)(_in ev_int32 x, _in ev_int32 y, _in ev_uint32 button);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32_Callback)(_in ev_int32 x, _in ev_int32 y, _in ev_uint32 button);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_mouseMove_void_ev_int32_ev_int32_Callback)(_in ev_int32 x, _in ev_int32 y);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_mouseWheel_void_ev_real32_Callback)(_in ev_real32 delta);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_eventStage_ev_bool_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getType_EVSpatialControlType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getTypeString_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_notifyViewChanged_void_IViewArgs_Callback)(_in EarthView::World::Spatial::IViewArgs* args);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_addViewListener_ev_bool_IViewListener_Callback)(_in EarthView::World::Spatial::IViewListener* ref_externalListener);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getViewListenerCount_ev_uint32_Callback)();
				typedef EarthView::World::Spatial::IViewListener*  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getViewListener_IViewListener_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_existViewListener_ev_bool_IViewListener_Callback)(_in EarthView::World::Spatial::IViewListener* externalListener);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_removeViewListener_ev_bool_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_removeViewListener_ev_bool_IViewListener_Callback)(_in EarthView::World::Spatial::IViewListener* externalListener);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_clearViewListeners_void_Callback)();
				class CGlobeControlProxy : public EarthView::World::Spatial3D::Controls::CGlobeControl
				{
				private:
					EarthView_World_Spatial3D_Controls_CGlobeControl_createGlobeScene_void_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeControl_createGlobeScene_void_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeControl_destroyGlobeScene_void_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeControl_destroyGlobeScene_void_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_real64_ev_real64_ev_bool_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_real64_ev_real64_ev_bool_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_bool_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_bool_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_ev_bool_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeControl_windowResized_void_int_int_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeControl_windowResized_void_int_int_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeControl_setCurrentTool_ev_bool_ITool_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeControl_setCurrentTool_ev_bool_ITool_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeControl_windowResized_void_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeControl_windowResized_void_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeControl_mouseMove_void_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeControl_mouseMove_void_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeControl_mouseWheel_void_ev_real32_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeControl_mouseWheel_void_ev_real32_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeControl_eventStage_ev_bool_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeControl_eventStage_ev_bool_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeControl_getType_EVSpatialControlType_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeControl_getType_EVSpatialControlType_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeControl_getName_EVString_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeControl_getName_EVString_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeControl_getTypeString_EVString_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeControl_getTypeString_EVString_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeControl_notifyViewChanged_void_IViewArgs_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeControl_notifyViewChanged_void_IViewArgs_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeControl_addViewListener_ev_bool_IViewListener_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeControl_addViewListener_ev_bool_IViewListener_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeControl_getViewListenerCount_ev_uint32_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeControl_getViewListenerCount_ev_uint32_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeControl_getViewListener_IViewListener_ev_uint32_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeControl_getViewListener_IViewListener_ev_uint32_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeControl_existViewListener_ev_bool_IViewListener_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeControl_existViewListener_ev_bool_IViewListener_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeControl_removeViewListener_ev_bool_ev_uint32_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeControl_removeViewListener_ev_bool_ev_uint32_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeControl_removeViewListener_ev_bool_IViewListener_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeControl_removeViewListener_ev_bool_IViewListener_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeControl_clearViewListeners_void_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeControl_clearViewListeners_void_Callback;
				public:
					CGlobeControlProxy(EarthView::World::Core::CNameValuePairList *pList) : CGlobeControl(pList)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_createGlobeScene_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_destroyGlobeScene_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_real64_ev_real64_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_bool_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_windowResized_void_int_int_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_setCurrentTool_ev_bool_ITool_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_windowResized_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_mouseMove_void_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_mouseWheel_void_ev_real32_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_eventStage_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_getType_EVSpatialControlType_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_getTypeString_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_notifyViewChanged_void_IViewArgs_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_addViewListener_ev_bool_IViewListener_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_getViewListenerCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_getViewListener_IViewListener_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_existViewListener_ev_bool_IViewListener_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_removeViewListener_ev_bool_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_removeViewListener_ev_bool_IViewListener_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_clearViewListeners_void_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CGlobeControlProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_createGlobeScene_void(EarthView_World_Spatial3D_Controls_CGlobeControl_createGlobeScene_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_createGlobeScene_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_destroyGlobeScene_void(EarthView_World_Spatial3D_Controls_CGlobeControl_destroyGlobeScene_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_destroyGlobeScene_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_real64_ev_real64(EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_real64_ev_real64_ev_bool(EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_real64_ev_real64_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_real64_ev_real64_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool(EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_bool_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_ev_bool(EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_bool_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_bool_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool(EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_windowResized_void_int_int(EarthView_World_Spatial3D_Controls_CGlobeControl_windowResized_void_int_int_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_windowResized_void_int_int_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_setCurrentTool_ev_bool_ITool(EarthView_World_Spatial3D_Controls_CGlobeControl_setCurrentTool_ev_bool_ITool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_setCurrentTool_ev_bool_ITool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_windowResized_void(EarthView_World_Spatial3D_Controls_CGlobeControl_windowResized_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_windowResized_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32(EarthView_World_Spatial3D_Controls_CGlobeControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32(EarthView_World_Spatial3D_Controls_CGlobeControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32(EarthView_World_Spatial3D_Controls_CGlobeControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_mouseMove_void_ev_int32_ev_int32(EarthView_World_Spatial3D_Controls_CGlobeControl_mouseMove_void_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_mouseMove_void_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_mouseWheel_void_ev_real32(EarthView_World_Spatial3D_Controls_CGlobeControl_mouseWheel_void_ev_real32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_mouseWheel_void_ev_real32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_eventStage_ev_bool(EarthView_World_Spatial3D_Controls_CGlobeControl_eventStage_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_eventStage_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_getType_EVSpatialControlType(EarthView_World_Spatial3D_Controls_CGlobeControl_getType_EVSpatialControlType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_getType_EVSpatialControlType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_getName_EVString(EarthView_World_Spatial3D_Controls_CGlobeControl_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_getTypeString_EVString(EarthView_World_Spatial3D_Controls_CGlobeControl_getTypeString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_getTypeString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_notifyViewChanged_void_IViewArgs(EarthView_World_Spatial3D_Controls_CGlobeControl_notifyViewChanged_void_IViewArgs_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_notifyViewChanged_void_IViewArgs_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_addViewListener_ev_bool_IViewListener(EarthView_World_Spatial3D_Controls_CGlobeControl_addViewListener_ev_bool_IViewListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_addViewListener_ev_bool_IViewListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_getViewListenerCount_ev_uint32(EarthView_World_Spatial3D_Controls_CGlobeControl_getViewListenerCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_getViewListenerCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_getViewListener_IViewListener_ev_uint32(EarthView_World_Spatial3D_Controls_CGlobeControl_getViewListener_IViewListener_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_getViewListener_IViewListener_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_existViewListener_ev_bool_IViewListener(EarthView_World_Spatial3D_Controls_CGlobeControl_existViewListener_ev_bool_IViewListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_existViewListener_ev_bool_IViewListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_removeViewListener_ev_bool_ev_uint32(EarthView_World_Spatial3D_Controls_CGlobeControl_removeViewListener_ev_bool_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_removeViewListener_ev_bool_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_removeViewListener_ev_bool_IViewListener(EarthView_World_Spatial3D_Controls_CGlobeControl_removeViewListener_ev_bool_IViewListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_removeViewListener_ev_bool_IViewListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_clearViewListeners_void(EarthView_World_Spatial3D_Controls_CGlobeControl_clearViewListeners_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeControl_clearViewListeners_void_Callback = pCallback;
					}
					virtual void notifyViewChanged(_in EarthView::World::Spatial::IViewArgs* args)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeControl_notifyViewChanged_void_IViewArgs_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CGlobeControl_notifyViewChanged_void_IViewArgs_Callback(args);
						}
						else
							return this->CGlobeControl::notifyViewChanged(args);
					}
					virtual void mouseButtonPress(_in ev_int32 x, _in ev_int32 y, _in ev_uint32 button)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CGlobeControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback(x, y, button);
						}
						else
							return this->CGlobeControl::mouseButtonPress(x, y, button);
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeControl_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeControl_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CGlobeControl::getName();
					}
					virtual EarthView::World::Spatial::Atlas::EVSpatialControlType getType() const
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeControl_getType_EVSpatialControlType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVSpatialControlType returnValue = (EarthView::World::Spatial::Atlas::EVSpatialControlType)m_EarthView_World_Spatial3D_Controls_CGlobeControl_getType_EVSpatialControlType_Callback();
							return returnValue;
						}
						else
							return this->CGlobeControl::getType();
					}
					virtual EVString getTypeString() const
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeControl_getTypeString_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeControl_getTypeString_EVString_Callback();
							return returnValue;
						}
						else
							return this->CGlobeControl::getTypeString();
					}
					virtual void createGlobeScene()
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeControl_createGlobeScene_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CGlobeControl_createGlobeScene_void_Callback();
						}
						else
							return this->CGlobeControl::createGlobeScene();
					}
					virtual void destroyGlobeScene()
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeControl_destroyGlobeScene_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CGlobeControl_destroyGlobeScene_void_Callback();
						}
						else
							return this->CGlobeControl::destroyGlobeScene();
					}
					virtual ev_bool pickingRayIntersection(_in ev_int32 screenX, _in ev_int32 screenY, _inout ev_real64& latitude, _inout ev_real64& longitude)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_real64_ev_real64_Callback(screenX, screenY, latitude, longitude);
							return returnValue;
						}
						else
							return this->CGlobeControl::pickingRayIntersection(screenX, screenY, latitude, longitude);
					}
					virtual ev_bool pickingRayIntersection(_in ev_int32 screenX, _in ev_int32 screenY, _inout ev_real64& latitude, _inout ev_real64& longitude, _in ev_bool intersectModel)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_real64_ev_real64_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_real64_ev_real64_ev_bool_Callback(screenX, screenY, latitude, longitude, intersectModel);
							return returnValue;
						}
						else
							return this->CGlobeControl::pickingRayIntersection(screenX, screenY, latitude, longitude, intersectModel);
					}
					virtual ev_bool pickingRayIntersection(_in ev_int32 screenX, _in ev_int32 screenY, _in ev_bool intersectModel, _in ev_bool intersectSea, _inout ev_real64& latitude, _inout ev_real64& longitude, _inout ev_real64& altitude, _inout ev_bool& modelIntersected)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_Callback(screenX, screenY, intersectModel, intersectSea, latitude, longitude, altitude, modelIntersected);
							return returnValue;
						}
						else
							return this->CGlobeControl::pickingRayIntersection(screenX, screenY, intersectModel, intersectSea, latitude, longitude, altitude, modelIntersected);
					}
					virtual ev_bool pickingRayIntersection(_in ev_int32 screenX, _in ev_int32 screenY, _in ev_bool intersectModel, _in ev_bool intersectSea, _in ev_bool intersectOBQ, _inout ev_real64& latitude, _inout ev_real64& longitude, _inout ev_real64& altitude, _inout ev_bool& modelIntersected, _inout ev_bool& seaIntersected, _inout ev_bool& OBQIntersected)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_bool_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_bool_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_ev_bool_Callback(screenX, screenY, intersectModel, intersectSea, intersectOBQ, latitude, longitude, altitude, modelIntersected, seaIntersected, OBQIntersected);
							return returnValue;
						}
						else
							return this->CGlobeControl::pickingRayIntersection(screenX, screenY, intersectModel, intersectSea, intersectOBQ, latitude, longitude, altitude, modelIntersected, seaIntersected, OBQIntersected);
					}
					virtual ev_bool pickingRayIntersection(_in ev_int32 screenX, _in ev_int32 screenY, _in ev_bool intersectModel, _in ev_bool intersectSea, _inout ev_real64& latitude, _inout ev_real64& longitude, _inout ev_real64& altitude, _inout ev_bool& modelIntersected, _inout ev_bool& seaIntersected)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_Callback(screenX, screenY, intersectModel, intersectSea, latitude, longitude, altitude, modelIntersected, seaIntersected);
							return returnValue;
						}
						else
							return this->CGlobeControl::pickingRayIntersection(screenX, screenY, intersectModel, intersectSea, latitude, longitude, altitude, modelIntersected, seaIntersected);
					}
					virtual void windowResized(_in int width, _in int height)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeControl_windowResized_void_int_int_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CGlobeControl_windowResized_void_int_int_Callback(width, height);
						}
						else
							return this->CGlobeControl::windowResized(width, height);
					}
					virtual void windowResized()
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeControl_windowResized_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CGlobeControl_windowResized_void_Callback();
						}
						else
							return this->CGlobeControl::windowResized();
					}
					virtual ev_bool eventStage()
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeControl_eventStage_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeControl_eventStage_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CGlobeControl::eventStage();
					}
					virtual ev_bool setCurrentTool(_in EarthView::World::Spatial::SystemUI::ITool* ref_tool)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeControl_setCurrentTool_ev_bool_ITool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeControl_setCurrentTool_ev_bool_ITool_Callback(ref_tool);
							return returnValue;
						}
						else
							return this->CGlobeControl::setCurrentTool(ref_tool);
					}
					virtual void mouseDoubleButtonPress(_in ev_int32 x, _in ev_int32 y, _in ev_uint32 button)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CGlobeControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback(x, y, button);
						}
						else
							return this->CGlobeControl::mouseDoubleButtonPress(x, y, button);
					}
					virtual void mouseButtonRelease(_in ev_int32 x, _in ev_int32 y, _in ev_uint32 button)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CGlobeControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32_Callback(x, y, button);
						}
						else
							return this->CGlobeControl::mouseButtonRelease(x, y, button);
					}
					virtual void mouseMove(_in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeControl_mouseMove_void_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CGlobeControl_mouseMove_void_ev_int32_ev_int32_Callback(x, y);
						}
						else
							return this->CGlobeControl::mouseMove(x, y);
					}
					virtual void mouseWheel(_in ev_real32 delta)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeControl_mouseWheel_void_ev_real32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CGlobeControl_mouseWheel_void_ev_real32_Callback(delta);
						}
						else
							return this->CGlobeControl::mouseWheel(delta);
					}
					virtual ev_bool addViewListener(_in EarthView::World::Spatial::IViewListener* ref_externalListener)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeControl_addViewListener_ev_bool_IViewListener_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeControl_addViewListener_ev_bool_IViewListener_Callback(ref_externalListener);
							return returnValue;
						}
						else
							return this->CGlobeControl::addViewListener(ref_externalListener);
					}
					virtual ev_uint32 getViewListenerCount() const
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeControl_getViewListenerCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeControl_getViewListenerCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CGlobeControl::getViewListenerCount();
					}
					virtual EarthView::World::Spatial::IViewListener* getViewListener(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeControl_getViewListener_IViewListener_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::IViewListener* returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeControl_getViewListener_IViewListener_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CGlobeControl::getViewListener(index);
					}
					virtual ev_bool existViewListener(_in EarthView::World::Spatial::IViewListener* externalListener) const
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeControl_existViewListener_ev_bool_IViewListener_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeControl_existViewListener_ev_bool_IViewListener_Callback(externalListener);
							return returnValue;
						}
						else
							return this->CGlobeControl::existViewListener(externalListener);
					}
					virtual ev_bool removeViewListener(_in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeControl_removeViewListener_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeControl_removeViewListener_ev_bool_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CGlobeControl::removeViewListener(index);
					}
					virtual ev_bool removeViewListener(_in EarthView::World::Spatial::IViewListener* externalListener)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeControl_removeViewListener_ev_bool_IViewListener_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeControl_removeViewListener_ev_bool_IViewListener_Callback(externalListener);
							return returnValue;
						}
						else
							return this->CGlobeControl::removeViewListener(externalListener);
					}
					virtual void clearViewListeners()
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeControl_clearViewListeners_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CGlobeControl_clearViewListeners_void_Callback();
						}
						else
							return this->CGlobeControl::clearViewListeners();
					}
				};
				REGISTER_FACTORY_CLASS(CGlobeControlProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_notifyViewChanged_void_IViewArgs(void *pObjectXXXX, _in EarthView::World::Spatial::IViewArgs* args )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					if (dynamic_cast<CGlobeControlProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControl*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeControl::notifyViewChanged(args);
					else
						ptrNativeObject->notifyViewChanged(args);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_notifyViewChanged_void_IViewArgs( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeControl_notifyViewChanged_void_IViewArgs_Callback* pCallback )
				{
					CGlobeControlProxy* ptr = dynamic_cast<CGlobeControlProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_notifyViewChanged_void_IViewArgs(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_notifyViewChanged_void_IViewArgs_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::IViewArgs* args )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeControl::notifyViewChanged(args);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32(void *pObjectXXXX, _in ev_int32 x, _in ev_int32 y, _in ev_uint32 button )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					if (dynamic_cast<CGlobeControlProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControl*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeControl::mouseButtonPress(x, y, button);
					else
						ptrNativeObject->mouseButtonPress(x, y, button);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback* pCallback )
				{
					CGlobeControlProxy* ptr = dynamic_cast<CGlobeControlProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_int32 x, _in ev_int32 y, _in ev_uint32 button )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeControl::mouseButtonPress(x, y, button);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_goTo_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 heading, _in ev_real64 tilt, _in ev_real64 altitude )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->goTo(latitude, longitude, heading, tilt, altitude);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_stopGoto_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->stopGoto();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_setCameraTiltRange_void_CDegree_CDegree(void *pObjectXXXX, _in const void* min, _in const void* max )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->setCameraTiltRange(*(EarthView::World::Spatial::Math::CDegree*)min, *(EarthView::World::Spatial::Math::CDegree*)max);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_notifyAnalysisStart_void_ITool(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::ITool* tool )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->notifyAnalysisStart(tool);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_notifyAnalysisEnd_void_ITool(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::ITool* tool )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->notifyAnalysisEnd(tool);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_addGlobeControlListener_void_CGlobeControlListener(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::CGlobeControlListener* ref_listener )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->addGlobeControlListener(ref_listener);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_removeGlobeControlListener_void_CGlobeControlListener(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::CGlobeControlListener* listener )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->removeGlobeControlListener(listener);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_addGotoListener_void_CGoToTargetListener(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::CGoToTargetListener* ref_listener )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->addGotoListener(ref_listener);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_removeGotoListener_void_CGoToTargetListener(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::CGoToTargetListener* listener )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->removeGotoListener(listener);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_addRouteFlyListener_void_CRouteFlyListener(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::CRouteFlyListener* ref_listener )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->addRouteFlyListener(ref_listener);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_removeRouteFlyListener_void_CRouteFlyListener(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::CRouteFlyListener* ref_listener )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->removeRouteFlyListener(ref_listener);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_goTo_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 heading, _in ev_real64 tilt, _in ev_real64 altitude, _in ev_real64 moditifAltitude )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->goTo(latitude, longitude, heading, tilt, altitude, moditifAltitude);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_goTo_void_CDegree_CDegree_ev_real64_CDegree_CDegree_ev_real64(void *pObjectXXXX, _in const void* latitude, _in const void* longitude, _in ev_real64 targetAltitude, _in const void* heading, _in const void* tilt, _in ev_real64 distance )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->goTo(*(EarthView::World::Spatial::Math::CDegree*)latitude, *(EarthView::World::Spatial::Math::CDegree*)longitude, targetAltitude, *(EarthView::World::Spatial::Math::CDegree*)heading, *(EarthView::World::Spatial::Math::CDegree*)tilt, distance);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_setScene_ev_bool_IScene(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IScene* ref_scene )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->setScene(ref_scene);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IScene*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getScene_IScene(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::IScene* objXXXX = ptrNativeObject->getScene();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getCameraIsLocked_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getCameraIsLocked();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_lockCameraToTarget_void_CSceneNode_CDegree_CDegree_ev_real64(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneNode* target, _in const void* heading, _in const void* tilt, _in ev_real64 distance )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->lockCameraToTarget(target, *(EarthView::World::Spatial::Math::CDegree*)heading, *(EarthView::World::Spatial::Math::CDegree*)tilt, distance);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_lockCameraToTarget_void_CSceneNode_CDegree_CDegree_ev_real64_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneNode* target, _in const void* heading, _in const void* tilt, _in ev_real64 distance, _in ev_bool isThirdPersonMode )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->lockCameraToTarget(target, *(EarthView::World::Spatial::Math::CDegree*)heading, *(EarthView::World::Spatial::Math::CDegree*)tilt, distance, isThirdPersonMode);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_lockCameraToTarget_void_CSceneNode_CDegree_CDegree_ev_real64_ev_bool_ev_bool_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneNode* target, _in const void* heading, _in const void* tilt, _in ev_real64 distance, _in ev_bool canChangeTilt, _in ev_bool canChangeHeading, _in ev_bool canChangeDistance )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->lockCameraToTarget(target, *(EarthView::World::Spatial::Math::CDegree*)heading, *(EarthView::World::Spatial::Math::CDegree*)tilt, distance, canChangeTilt, canChangeHeading, canChangeDistance);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_lockCameraToTarget_void_CSceneNode_CDegree_CDegree_ev_real64_ev_bool_ev_bool_ev_bool_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneNode* target, _in const void* heading, _in const void* tilt, _in ev_real64 distance, _in ev_bool canChangeTilt, _in ev_bool canChangeHeading, _in ev_bool canChangeDistance, _in ev_bool isThirdPersonMode )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->lockCameraToTarget(target, *(EarthView::World::Spatial::Math::CDegree*)heading, *(EarthView::World::Spatial::Math::CDegree*)tilt, distance, canChangeTilt, canChangeHeading, canChangeDistance, isThirdPersonMode);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_setCameraLockHeading_void_CDegree(void *pObjectXXXX, _in const void* heading )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->setCameraLockHeading(*(EarthView::World::Spatial::Math::CDegree*)heading);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_setCameraLockTilt_void_CDegree(void *pObjectXXXX, _in const void* tilt )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->setCameraLockTilt(*(EarthView::World::Spatial::Math::CDegree*)tilt);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_setCameraLockDistance_void_ev_real64(void *pObjectXXXX, _in ev_real64 distance )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->setCameraLockDistance(distance);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_setCameraLockMode_void_ev_bool(void *pObjectXXXX, _in ev_bool isThirdPersonMode )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->setCameraLockMode(isThirdPersonMode);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_unlockCamera_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->unlockCamera();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_setCameraManipulatorIntersectModel_void_ev_bool(void *pObjectXXXX, _in ev_bool intersectModel )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->setCameraManipulatorIntersectModel(intersectModel);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getCameraManipulatorIntersectModel_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getCameraManipulatorIntersectModel();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_setCameraManipulatorIntersectOBQ_void_ev_bool(void *pObjectXXXX, _in ev_bool intersectOBQ )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->setCameraManipulatorIntersectOBQ(intersectOBQ);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getCameraManipulatorIntersectOBQ_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getCameraManipulatorIntersectOBQ();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_setCameraManipulatorIntersectFloor_void_ev_bool(void *pObjectXXXX, _in ev_bool intersectFloor )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->setCameraManipulatorIntersectFloor(intersectFloor);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getCameraManipulatorIntersectFloor_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getCameraManipulatorIntersectFloor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getCameraPostion_void_CDegree_CDegree_CDegree_CDegree_ev_real64(void *pObjectXXXX, _in void* lat, _in void* lon, _in void* heading, _in void* tilt, _in ev_real64& altitude )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->getCameraPostion(*(EarthView::World::Spatial::Math::CDegree*)lat, *(EarthView::World::Spatial::Math::CDegree*)lon, *(EarthView::World::Spatial::Math::CDegree*)heading, *(EarthView::World::Spatial::Math::CDegree*)tilt, altitude);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_setCameraPostion_void_CDegree_CDegree_CDegree_CDegree_ev_real64(void *pObjectXXXX, _in const void* lat, _in const void* lon, _in const void* heading, _in const void* tilt, _in ev_real64 altitude )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->setCameraPostion(*(EarthView::World::Spatial::Math::CDegree*)lat, *(EarthView::World::Spatial::Math::CDegree*)lon, *(EarthView::World::Spatial::Math::CDegree*)heading, *(EarthView::World::Spatial::Math::CDegree*)tilt, altitude);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getCameraIsUnderGroundMode_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getCameraIsUnderGroundMode();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_setCameraIsUnderGroundMode_void_ev_bool(void *pObjectXXXX, _in ev_bool underGroundMode )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->setCameraIsUnderGroundMode(underGroundMode);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getCameraIsPlaneBase_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getCameraIsPlaneBase();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_setCameraIsPlaneBase_void_ev_bool(void *pObjectXXXX, _in ev_bool planeBase )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->setCameraIsPlaneBase(planeBase);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getCameraControlDepth_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getCameraControlDepth();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_setCameraControlDepth_void_ev_real64(void *pObjectXXXX, _in ev_real64 cameraDepth )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->setCameraControlDepth(cameraDepth);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					if (dynamic_cast<CGlobeControlProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControl*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeControl::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeControl_getName_EVString_Callback* pCallback )
				{
					CGlobeControlProxy* ptr = dynamic_cast<CGlobeControlProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeControl::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getType_EVSpatialControlType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					if (dynamic_cast<CGlobeControlProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControl*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVSpatialControlType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeControl::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVSpatialControlType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_getType_EVSpatialControlType( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeControl_getType_EVSpatialControlType_Callback* pCallback )
				{
					CGlobeControlProxy* ptr = dynamic_cast<CGlobeControlProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_getType_EVSpatialControlType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getType_EVSpatialControlType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVSpatialControlType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeControl::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getTypeString_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					if (dynamic_cast<CGlobeControlProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControl*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeControl::getTypeString();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getTypeString();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_getTypeString_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeControl_getTypeString_EVString_Callback* pCallback )
				{
					CGlobeControlProxy* ptr = dynamic_cast<CGlobeControlProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_getTypeString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getTypeString_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeControl::getTypeString();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_addViewport_ev_bool_EVString_ev_int32_ev_real32_ev_real32_ev_real32_ev_real32_ev_real64_ev_real64(void *pObjectXXXX, _in const char* cameraName, _in ev_int32 zorder, _in ev_real32 left, _in ev_real32 top, _in ev_real32 width, _in ev_real32 height, _in ev_real64 cameraTilt, _in ev_real64 cameraHeading )
				{
					EarthView::World::Core::ev_string cameraName1 = cameraName;
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->addViewport(cameraName1, zorder, left, top, width, height, cameraTilt, cameraHeading);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_removeViewport_ev_bool_EVString(void *pObjectXXXX, _in const char* cameraName )
				{
					EarthView::World::Core::ev_string cameraName1 = cameraName;
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->removeViewport(cameraName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CViewport*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getViewport_CViewport_EVString(void *pObjectXXXX, _in const char* cameraName )
				{
					EarthView::World::Core::ev_string cameraName1 = cameraName;
					const EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					EarthView::World::Graphic::CViewport* objXXXX = ptrNativeObject->getViewport(cameraName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CViewport*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getViewport_CViewport(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					EarthView::World::Graphic::CViewport* objXXXX = ptrNativeObject->getViewport();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_setChildViewportCameraPosition_void_EVString_CDegree_CDegree_CDegree_CDegree_ev_real64_ev_real64(void *pObjectXXXX, _in const char* cameraName, _in const void* latitude, _in const void* longitude, _in const void* heading, _in const void* tilt, _in ev_real64 altitude, _in ev_real64 moditifAltitude )
				{
					EarthView::World::Core::ev_string cameraName1 = cameraName;
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->setChildViewportCameraPosition(cameraName1, *(EarthView::World::Spatial::Math::CDegree*)latitude, *(EarthView::World::Spatial::Math::CDegree*)longitude, *(EarthView::World::Spatial::Math::CDegree*)heading, *(EarthView::World::Spatial::Math::CDegree*)tilt, altitude, moditifAltitude);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_setNeedCopyMasterCameraTarget_void_EVString_ev_bool(void *pObjectXXXX, _in const char* cameraName, _in ev_bool needCopyMasterCameraTarget )
				{
					EarthView::World::Core::ev_string cameraName1 = cameraName;
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->setNeedCopyMasterCameraTarget(cameraName1, needCopyMasterCameraTarget);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getNeedCopyMasterCameraTarget_ev_bool_EVString(void *pObjectXXXX, _in const char* cameraName )
				{
					EarthView::World::Core::ev_string cameraName1 = cameraName;
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getNeedCopyMasterCameraTarget(cameraName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_setCurrentFlyPath_void_CGlobeFlyPathPtr(void *pObjectXXXX, _in const void* flyPath )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->setCurrentFlyPath(*(EarthView::World::Spatial3D::CGlobeFlyPathPtr*)flyPath);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_showModelAxis_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->showModelAxis();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_hideModelAxis_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->hideModelAxis();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_startEditControlPoint_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->startEditControlPoint();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_stopEditControlPoint_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->stopEditControlPoint();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_startFly_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->startFly();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_stopFly_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->stopFly();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_pauseFly_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->pauseFly();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_setLockHandleRotationMode_void_RotationMode(void *pObjectXXXX, _in int rotationMode )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->setLockHandleRotationMode((EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler::RotationMode)rotationMode);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getLockHandleRotationMode_RotationMode(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler::RotationMode objXXXX = ptrNativeObject->getLockHandleRotationMode();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_setGotoTimeRatio_void_ev_real64(void *pObjectXXXX, _in ev_real64 gotoRatio )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->setGotoTimeRatio(gotoRatio);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getGotoTimeRatio_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getGotoTimeRatio();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_createGlobeScene_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					if (dynamic_cast<CGlobeControlProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControl*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeControl::createGlobeScene();
					else
						ptrNativeObject->createGlobeScene();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_createGlobeScene_void( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeControl_createGlobeScene_void_Callback* pCallback )
				{
					CGlobeControlProxy* ptr = dynamic_cast<CGlobeControlProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_createGlobeScene_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_createGlobeScene_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeControl::createGlobeScene();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_destroyGlobeScene_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					if (dynamic_cast<CGlobeControlProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControl*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeControl::destroyGlobeScene();
					else
						ptrNativeObject->destroyGlobeScene();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_destroyGlobeScene_void( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeControl_destroyGlobeScene_void_Callback* pCallback )
				{
					CGlobeControlProxy* ptr = dynamic_cast<CGlobeControlProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_destroyGlobeScene_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_destroyGlobeScene_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeControl::destroyGlobeScene();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_setCameraManipulatorMoveToEnable_void_ev_bool(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->setCameraManipulatorMoveToEnable(enable);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getCameraManipulatorMoveToEnable_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getCameraManipulatorMoveToEnable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_setCameraManipulatorMouseWheelRatio_void_ev_real64(void *pObjectXXXX, _in ev_real64 mouseWheelRatio )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->setCameraManipulatorMouseWheelRatio(mouseWheelRatio);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getCameraManipulatorMouseWheelRatio_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getCameraManipulatorMouseWheelRatio();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_screenToScene_CRay_ev_real32_ev_real32(void *pObjectXXXX, _in ev_real32 x, _in ev_real32 y )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					EarthView::World::Spatial::Math::CRay objXXXX = ptrNativeObject->screenToScene(x, y);
					EarthView::World::Spatial::Math::CRay *pXXXX = new EarthView::World::Spatial::Math::CRay(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_real64_ev_real64(void *pObjectXXXX, _in ev_int32 screenX, _in ev_int32 screenY, _inout ev_real64& latitude, _inout ev_real64& longitude )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					if (dynamic_cast<CGlobeControlProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControl*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeControl::pickingRayIntersection(screenX, screenY, latitude, longitude);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->pickingRayIntersection(screenX, screenY, latitude, longitude);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_real64_ev_real64_Callback* pCallback )
				{
					CGlobeControlProxy* ptr = dynamic_cast<CGlobeControlProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_int32 screenX, _in ev_int32 screenY, _inout ev_real64& latitude, _inout ev_real64& longitude )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeControl::pickingRayIntersection(screenX, screenY, latitude, longitude);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_real64_ev_real64_ev_bool(void *pObjectXXXX, _in ev_int32 screenX, _in ev_int32 screenY, _inout ev_real64& latitude, _inout ev_real64& longitude, _in ev_bool intersectModel )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					if (dynamic_cast<CGlobeControlProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControl*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeControl::pickingRayIntersection(screenX, screenY, latitude, longitude, intersectModel);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->pickingRayIntersection(screenX, screenY, latitude, longitude, intersectModel);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_real64_ev_real64_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_real64_ev_real64_ev_bool_Callback* pCallback )
				{
					CGlobeControlProxy* ptr = dynamic_cast<CGlobeControlProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_real64_ev_real64_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_real64_ev_real64_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_int32 screenX, _in ev_int32 screenY, _inout ev_real64& latitude, _inout ev_real64& longitude, _in ev_bool intersectModel )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeControl::pickingRayIntersection(screenX, screenY, latitude, longitude, intersectModel);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool(void *pObjectXXXX, _in ev_int32 screenX, _in ev_int32 screenY, _in ev_bool intersectModel, _in ev_bool intersectSea, _inout ev_real64& latitude, _inout ev_real64& longitude, _inout ev_real64& altitude, _inout ev_bool& modelIntersected )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					if (dynamic_cast<CGlobeControlProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControl*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeControl::pickingRayIntersection(screenX, screenY, intersectModel, intersectSea, latitude, longitude, altitude, modelIntersected);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->pickingRayIntersection(screenX, screenY, intersectModel, intersectSea, latitude, longitude, altitude, modelIntersected);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_Callback* pCallback )
				{
					CGlobeControlProxy* ptr = dynamic_cast<CGlobeControlProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_int32 screenX, _in ev_int32 screenY, _in ev_bool intersectModel, _in ev_bool intersectSea, _inout ev_real64& latitude, _inout ev_real64& longitude, _inout ev_real64& altitude, _inout ev_bool& modelIntersected )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeControl::pickingRayIntersection(screenX, screenY, intersectModel, intersectSea, latitude, longitude, altitude, modelIntersected);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_bool_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_ev_bool(void *pObjectXXXX, _in ev_int32 screenX, _in ev_int32 screenY, _in ev_bool intersectModel, _in ev_bool intersectSea, _in ev_bool intersectOBQ, _inout ev_real64& latitude, _inout ev_real64& longitude, _inout ev_real64& altitude, _inout ev_bool& modelIntersected, _inout ev_bool& seaIntersected, _inout ev_bool& OBQIntersected )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					if (dynamic_cast<CGlobeControlProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControl*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeControl::pickingRayIntersection(screenX, screenY, intersectModel, intersectSea, intersectOBQ, latitude, longitude, altitude, modelIntersected, seaIntersected, OBQIntersected);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->pickingRayIntersection(screenX, screenY, intersectModel, intersectSea, intersectOBQ, latitude, longitude, altitude, modelIntersected, seaIntersected, OBQIntersected);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_bool_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_bool_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_ev_bool_Callback* pCallback )
				{
					CGlobeControlProxy* ptr = dynamic_cast<CGlobeControlProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_bool_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_bool_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_int32 screenX, _in ev_int32 screenY, _in ev_bool intersectModel, _in ev_bool intersectSea, _in ev_bool intersectOBQ, _inout ev_real64& latitude, _inout ev_real64& longitude, _inout ev_real64& altitude, _inout ev_bool& modelIntersected, _inout ev_bool& seaIntersected, _inout ev_bool& OBQIntersected )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeControl::pickingRayIntersection(screenX, screenY, intersectModel, intersectSea, intersectOBQ, latitude, longitude, altitude, modelIntersected, seaIntersected, OBQIntersected);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool(void *pObjectXXXX, _in ev_int32 screenX, _in ev_int32 screenY, _in ev_bool intersectModel, _in ev_bool intersectSea, _inout ev_real64& latitude, _inout ev_real64& longitude, _inout ev_real64& altitude, _inout ev_bool& modelIntersected, _inout ev_bool& seaIntersected )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					if (dynamic_cast<CGlobeControlProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControl*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeControl::pickingRayIntersection(screenX, screenY, intersectModel, intersectSea, latitude, longitude, altitude, modelIntersected, seaIntersected);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->pickingRayIntersection(screenX, screenY, intersectModel, intersectSea, latitude, longitude, altitude, modelIntersected, seaIntersected);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_Callback* pCallback )
				{
					CGlobeControlProxy* ptr = dynamic_cast<CGlobeControlProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_int32 screenX, _in ev_int32 screenY, _in ev_bool intersectModel, _in ev_bool intersectSea, _inout ev_real64& latitude, _inout ev_real64& longitude, _inout ev_real64& altitude, _inout ev_bool& modelIntersected, _inout ev_bool& seaIntersected )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeControl::pickingRayIntersection(screenX, screenY, intersectModel, intersectSea, latitude, longitude, altitude, modelIntersected, seaIntersected);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_windowResized_void_int_int(void *pObjectXXXX, _in int width, _in int height )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					if (dynamic_cast<CGlobeControlProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControl*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeControl::windowResized(width, height);
					else
						ptrNativeObject->windowResized(width, height);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_windowResized_void_int_int( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeControl_windowResized_void_int_int_Callback* pCallback )
				{
					CGlobeControlProxy* ptr = dynamic_cast<CGlobeControlProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_windowResized_void_int_int(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_windowResized_void_int_int_NoVirtual(void *pObjectXXXX, _in int width, _in int height )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeControl::windowResized(width, height);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_windowResized_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					if (dynamic_cast<CGlobeControlProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControl*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeControl::windowResized();
					else
						ptrNativeObject->windowResized();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_windowResized_void( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeControl_windowResized_void_Callback* pCallback )
				{
					CGlobeControlProxy* ptr = dynamic_cast<CGlobeControlProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_windowResized_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_windowResized_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeControl::windowResized();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_setCompassWidgetVisibleMode_void_VisibleMode(void *pObjectXXXX, _in int visibleMode )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->setCompassWidgetVisibleMode((EarthView::World::Spatial3D::Controls::VisibleMode)visibleMode);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_setCompassWidgetPosition_void_GuiHorizontalAlignment_GuiVerticalAlignment_ev_int32_ev_int32(void *pObjectXXXX, _in int gha, _in int gva, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->setCompassWidgetPosition((EarthView::World::Graphic::GuiHorizontalAlignment)gha, (EarthView::World::Graphic::GuiVerticalAlignment)gva, x, y);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_setLatitudeLonitudeTextBoxVisibleMode_void_VisibleMode(void *pObjectXXXX, _in int visibleMode )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->setLatitudeLonitudeTextBoxVisibleMode((EarthView::World::Spatial3D::Controls::VisibleMode)visibleMode);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_tiltCamera_void_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64 tiltDegree )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->tiltCamera(x, y, tiltDegree);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_beginCameraFadeInFadeOut_void_ev_real64(void *pObjectXXXX, _in ev_real64 time )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->beginCameraFadeInFadeOut(time);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_endCameraFadeInFadeOut_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->endCameraFadeInFadeOut();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_rotationCamera_void_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64 rotationDegree, _in ev_real64 zoomRatio )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->rotationCamera(x, y, rotationDegree, zoomRatio);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_setCameraRatio_void_ev_real64(void *pObjectXXXX, _in ev_real64 cameraRatio )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->setCameraRatio(cameraRatio);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_eventStage_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					if (dynamic_cast<CGlobeControlProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControl*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeControl::eventStage();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->eventStage();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_eventStage_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeControl_eventStage_ev_bool_Callback* pCallback )
				{
					CGlobeControlProxy* ptr = dynamic_cast<CGlobeControlProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_eventStage_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_eventStage_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeControl::eventStage();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_setCurrentTool_ev_bool_ITool(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::ITool* ref_tool )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					if (dynamic_cast<CGlobeControlProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControl*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeControl::setCurrentTool(ref_tool);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->setCurrentTool(ref_tool);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_setCurrentTool_ev_bool_ITool( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeControl_setCurrentTool_ev_bool_ITool_Callback* pCallback )
				{
					CGlobeControlProxy* ptr = dynamic_cast<CGlobeControlProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_setCurrentTool_ev_bool_ITool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_setCurrentTool_ev_bool_ITool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::ITool* ref_tool )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeControl::setCurrentTool(ref_tool);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::SystemUI::ITool*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getCurrentTool_ITool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::ITool* objXXXX = ptrNativeObject->getCurrentTool();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getCurrentAtmosphere_CGlobeAtmosphere(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere* objXXXX = ptrNativeObject->getCurrentAtmosphere();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_cartesion2pixel_ev_bool_CVector3_ev_real64_ev_real64(void *pObjectXXXX, _in const void* worldPt, _out ev_real64& px, _out ev_real64& py )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->cartesion2pixel(*(EarthView::World::Spatial::Math::CVector3*)worldPt, px, py);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_cartesion2pixel_ev_bool_CVector3_CViewport_ev_real64_ev_real64(void *pObjectXXXX, _in const void* worldPt, _in EarthView::World::Graphic::CViewport* vp, _out ev_real64& px, _out ev_real64& py )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->cartesion2pixel(*(EarthView::World::Spatial::Math::CVector3*)worldPt, vp, px, py);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_setCustomStatusbarTextEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->setCustomStatusbarTextEnabled(enabled);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_setCustomStatusbarText_void_EVString(void *pObjectXXXX, _in const char* text )
				{
					EarthView::World::Core::ev_string text1 = text;
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->setCustomStatusbarText(text1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_setCustomStatusbarTextFontName_void_EVString(void *pObjectXXXX, _in const char* fontName )
				{
					EarthView::World::Core::ev_string fontName1 = fontName;
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->setCustomStatusbarTextFontName(fontName1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_setCustomStatusbarTextFontColor_void_CColourValue(void *pObjectXXXX, _in const void* color )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->setCustomStatusbarTextFontColor(*(EarthView::World::Graphic::CColourValue*)color);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_setCustomStatusbarText_void_EVString_EVString_CColourValue(void *pObjectXXXX, _in const char* text, _in const char* fontName, _in const void* color )
				{
					EarthView::World::Core::ev_string text1 = text;
					EarthView::World::Core::ev_string fontName1 = fontName;
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->setCustomStatusbarText(text1, fontName1, *(EarthView::World::Graphic::CColourValue*)color);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_setCustomStatusbarPosition_void_Real_Real_Real_Real_Real_Real_GuiHorizontalAlignment_GuiVerticalAlignment(void *pObjectXXXX, _in Real x, _in Real y, _in Real width, _in Real height, _in Real textOffsetX, _in Real textOffsetY, _in int gha, _in int gva )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->setCustomStatusbarPosition(x, y, width, height, textOffsetX, textOffsetY, (EarthView::World::Graphic::GuiHorizontalAlignment)gha, (EarthView::World::Graphic::GuiVerticalAlignment)gva);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_addQueryListener_ev_bool_IGlobeQueryListener(void *pObjectXXXX, _in EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener* ref_listener )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->addQueryListener(ref_listener);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_removeQueryListener_ev_bool_IGlobeQueryListener(void *pObjectXXXX, _in EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener* listener )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->removeQueryListener(listener);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getQueryListenerCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getQueryListenerCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getQueryListener_IGlobeQueryListener_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener* objXXXX = ptrNativeObject->getQueryListener(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_clearQueryListeners_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->clearQueryListeners();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_fireSelectionChanged_void_RaySceneQueryResult(void *pObjectXXXX, _inout void* result )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->fireSelectionChanged(*(EarthView::World::Graphic::RaySceneQueryResult*)result);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_fireSelectionChanged_void_SceneQueryResult(void *pObjectXXXX, _inout void* result )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->fireSelectionChanged(*(EarthView::World::Graphic::SceneQueryResult*)result);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_fireSelectionChanged_void_CGlobeSelection(void *pObjectXXXX, _inout void* result )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->fireSelectionChanged(*(EarthView::World::Spatial3D::CGlobeSelection*)result);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_fireSelectionChanged_void_RaySceneQueryResult_CGlobeSelection(void *pObjectXXXX, _inout void* rayResult, _inout void* clamplayerResult )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->fireSelectionChanged(*(EarthView::World::Graphic::RaySceneQueryResult*)rayResult, *(EarthView::World::Spatial3D::CGlobeSelection*)clamplayerResult);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getGlobeSelection_CGlobeSelection(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					EarthView::World::Spatial3D::CGlobeSelection objXXXX = ptrNativeObject->getGlobeSelection();
					EarthView::World::Spatial3D::CGlobeSelection *pXXXX = new EarthView::World::Spatial3D::CGlobeSelection(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_fireSelectedObjectMoved_void_RaySceneQueryResultEntry_CMatrix4_MouseOpType(void *pObjectXXXX, _inout void* entry, _in const void* newMatrix, _in int type )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->fireSelectedObjectMoved(*(EarthView::World::Graphic::RaySceneQueryResultEntry*)entry, *(EarthView::World::Spatial::Math::CMatrix4*)newMatrix, (EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener::MouseOpType)type);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_fireDeleteKeyPressed_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->fireDeleteKeyPressed();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_setGridVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->setGridVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getGridVisible_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getGridVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_setSeaType_void_SeaType(void *pObjectXXXX, _in int seaType )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->setSeaType((EarthView::World::Spatial3D::SeaType)seaType);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getSeaType_SeaType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					EarthView::World::Spatial3D::SeaType objXXXX = ptrNativeObject->getSeaType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_setSeaVertexNum_void_ev_int32(void *pObjectXXXX, _in ev_int32 vertexNum )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->setSeaVertexNum(vertexNum);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getSeaVertexNum_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getSeaVertexNum();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_refreshSeaQuadMapType_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->refreshSeaQuadMapType();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CWidgetManager*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getWidgetManager_CWidgetManager(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CWidgetManager* objXXXX = ptrNativeObject->getWidgetManager();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::CLayer3DEditor*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getModelLayerEditor_CLayer3DEditor(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					EarthView::World::Spatial3D::CLayer3DEditor* objXXXX = ptrNativeObject->getModelLayerEditor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::CLayer3DEditor*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getEffectLayerEditor_CLayer3DEditor(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					EarthView::World::Spatial3D::CLayer3DEditor* objXXXX = ptrNativeObject->getEffectLayerEditor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_endEditing_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->endEditing();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_clearLayerSelection_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->clearLayerSelection();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_setIsFlying_void_ev_bool(void *pObjectXXXX, _in const ev_bool flying )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->setIsFlying(flying);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getIsFlying_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getIsFlying();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getCompositorEnabled_ev_bool_Compositor3DType(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getCompositorEnabled((EarthView::World::Spatial3D::Compositor3DType)type);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_setCompositorEnabled_ev_bool_Compositor3DType_ev_bool(void *pObjectXXXX, _in int type, _in ev_bool enabled )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->setCompositorEnabled((EarthView::World::Spatial3D::Compositor3DType)type, enabled);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getNumEnabledCompositors_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getNumEnabledCompositors();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getEnabledCompositor_Compositor3DType_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					EarthView::World::Spatial3D::Compositor3DType objXXXX = ptrNativeObject->getEnabledCompositor(index);
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_locate2_void_CVector3_CDegree_CDegree_ev_real64(void *pObjectXXXX, _in const void* target, _in const void* tilt, _in const void* heading, _in ev_real64 distance )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->locate2(*(EarthView::World::Spatial::Math::CVector3*)target, *(EarthView::World::Spatial::Math::CDegree*)tilt, *(EarthView::World::Spatial::Math::CDegree*)heading, distance);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_disableAllCompositors_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->disableAllCompositors();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_setCameraMaxLimitAltitude_void_ev_real64(void *pObjectXXXX, _in ev_real64 maxAltitude )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->setCameraMaxLimitAltitude(maxAltitude);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getCameraMaxLimitAltitude_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getCameraMaxLimitAltitude();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_setGlobeLockCameraHandlerEnable_void_ev_bool(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->setGlobeLockCameraHandlerEnable(enable);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getGlobeLockCameraHandlerEnable_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getGlobeLockCameraHandlerEnable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_setGlobeCamUnderGroundHandlerEnable_void_ev_bool(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->setGlobeCamUnderGroundHandlerEnable(enable);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getGlobeCamUnderGroundHandlerEnable_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getGlobeCamUnderGroundHandlerEnable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_setGoogleCameraManipulatorEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->setGoogleCameraManipulatorEnabled(enable);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getGoogleCameraManipulatorEnabled_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getGoogleCameraManipulatorEnabled();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_setInertialPanEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->setInertialPanEnabled(enable);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_setUnderGroundCameraMoveAtPlane_void_ev_bool(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->setUnderGroundCameraMoveAtPlane(enable);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getUnderGroundCameraMoveAtPlane_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getUnderGroundCameraMoveAtPlane();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_setShowLayerInfo_void_ev_bool(void *pObjectXXXX, _in ev_bool show )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->setShowLayerInfo(show);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_setAutoCalculateCameraFov_void_ev_bool(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->setAutoCalculateCameraFov(enable);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getAutoCalculateCameraFov_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getAutoCalculateCameraFov();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_resetCamera_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->resetCamera();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_setCameraUpToNorth_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ptrNativeObject->setCameraUpToNorth();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::CGlobeGrid*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getGrid_CGlobeGrid(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					EarthView::World::Spatial3D::CGlobeGrid* objXXXX = ptrNativeObject->getGrid();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Spatial3D_Controls_CGlobeControl_winId( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->winId;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CGlobeControl_winId( void *pObjectXXXX, ev_uint32  value )
				{
					((EarthView::World::Spatial3D::Controls::CGlobeControl*)pObjectXXXX)->winId = value;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControl_getStringInterface_CStringInterface(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX;
					const EarthView::World::Core::CStringInterface& objXXXX = ptrNativeObject->getStringInterface();
					const EarthView::World::Core::CStringInterface *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback* pCallback )
				{
					CGlobeControlProxy* ptr = dynamic_cast<CGlobeControlProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32_Callback* pCallback )
				{
					CGlobeControlProxy* ptr = dynamic_cast<CGlobeControlProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_mouseMove_void_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeControl_mouseMove_void_ev_int32_ev_int32_Callback* pCallback )
				{
					CGlobeControlProxy* ptr = dynamic_cast<CGlobeControlProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_mouseMove_void_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_mouseWheel_void_ev_real32( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeControl_mouseWheel_void_ev_real32_Callback* pCallback )
				{
					CGlobeControlProxy* ptr = dynamic_cast<CGlobeControlProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_mouseWheel_void_ev_real32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_addViewListener_ev_bool_IViewListener( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeControl_addViewListener_ev_bool_IViewListener_Callback* pCallback )
				{
					CGlobeControlProxy* ptr = dynamic_cast<CGlobeControlProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_addViewListener_ev_bool_IViewListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_getViewListenerCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeControl_getViewListenerCount_ev_uint32_Callback* pCallback )
				{
					CGlobeControlProxy* ptr = dynamic_cast<CGlobeControlProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_getViewListenerCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_getViewListener_IViewListener_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeControl_getViewListener_IViewListener_ev_uint32_Callback* pCallback )
				{
					CGlobeControlProxy* ptr = dynamic_cast<CGlobeControlProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_getViewListener_IViewListener_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_existViewListener_ev_bool_IViewListener( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeControl_existViewListener_ev_bool_IViewListener_Callback* pCallback )
				{
					CGlobeControlProxy* ptr = dynamic_cast<CGlobeControlProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_existViewListener_ev_bool_IViewListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_removeViewListener_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeControl_removeViewListener_ev_bool_ev_uint32_Callback* pCallback )
				{
					CGlobeControlProxy* ptr = dynamic_cast<CGlobeControlProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_removeViewListener_ev_bool_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_removeViewListener_ev_bool_IViewListener( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeControl_removeViewListener_ev_bool_IViewListener_Callback* pCallback )
				{
					CGlobeControlProxy* ptr = dynamic_cast<CGlobeControlProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_removeViewListener_ev_bool_IViewListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_clearViewListeners_void( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeControl_clearViewListeners_void_Callback* pCallback )
				{
					CGlobeControlProxy* ptr = dynamic_cast<CGlobeControlProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControl_clearViewListeners_void(pCallback);
					}
				}
			}
		}
	}
}
