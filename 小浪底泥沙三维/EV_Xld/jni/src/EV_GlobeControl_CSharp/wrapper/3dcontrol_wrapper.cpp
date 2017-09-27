/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "globecontrol/3dcontrol.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
		}
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
		namespace Spatial
		{
			namespace Atlas
			{
			}
		}
		namespace Spatial3D
		{
			namespace Controls
			{
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_C3DControl_windowResized_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_C3DControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback)(_in ev_int32 x, _in ev_int32 y, _in ev_uint32 button);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_C3DControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback)(_in ev_int32 x, _in ev_int32 y, _in ev_uint32 button);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_C3DControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32_Callback)(_in ev_int32 x, _in ev_int32 y, _in ev_uint32 button);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_C3DControl_mouseMove_void_ev_int32_ev_int32_Callback)(_in ev_int32 x, _in ev_int32 y);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_C3DControl_mouseWheel_void_ev_real32_Callback)(_in ev_real32 delta);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_C3DControl_eventStage_ev_bool_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_Controls_C3DControl_getType_EVSpatialControlType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Controls_C3DControl_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Controls_C3DControl_getTypeString_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_C3DControl_notifyViewChanged_void_IViewArgs_Callback)(_in EarthView::World::Spatial::IViewArgs* args);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_C3DControl_addViewListener_ev_bool_IViewListener_Callback)(_in EarthView::World::Spatial::IViewListener* ref_externalListener);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Controls_C3DControl_getViewListenerCount_ev_uint32_Callback)();
				typedef EarthView::World::Spatial::IViewListener*  ( _stdcall EarthView_World_Spatial3D_Controls_C3DControl_getViewListener_IViewListener_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_C3DControl_existViewListener_ev_bool_IViewListener_Callback)(_in EarthView::World::Spatial::IViewListener* externalListener);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_C3DControl_removeViewListener_ev_bool_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_C3DControl_removeViewListener_ev_bool_IViewListener_Callback)(_in EarthView::World::Spatial::IViewListener* externalListener);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_C3DControl_clearViewListeners_void_Callback)();
				class C3DControlProxy : public EarthView::World::Spatial3D::Controls::C3DControl
				{
				private:
					EarthView_World_Spatial3D_Controls_C3DControl_windowResized_void_Callback* m_EarthView_World_Spatial3D_Controls_C3DControl_windowResized_void_Callback;
					EarthView_World_Spatial3D_Controls_C3DControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback* m_EarthView_World_Spatial3D_Controls_C3DControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback;
					EarthView_World_Spatial3D_Controls_C3DControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback* m_EarthView_World_Spatial3D_Controls_C3DControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback;
					EarthView_World_Spatial3D_Controls_C3DControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32_Callback* m_EarthView_World_Spatial3D_Controls_C3DControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32_Callback;
					EarthView_World_Spatial3D_Controls_C3DControl_mouseMove_void_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_Controls_C3DControl_mouseMove_void_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_Controls_C3DControl_mouseWheel_void_ev_real32_Callback* m_EarthView_World_Spatial3D_Controls_C3DControl_mouseWheel_void_ev_real32_Callback;
					EarthView_World_Spatial3D_Controls_C3DControl_eventStage_ev_bool_Callback* m_EarthView_World_Spatial3D_Controls_C3DControl_eventStage_ev_bool_Callback;
					EarthView_World_Spatial3D_Controls_C3DControl_getType_EVSpatialControlType_Callback* m_EarthView_World_Spatial3D_Controls_C3DControl_getType_EVSpatialControlType_Callback;
					EarthView_World_Spatial3D_Controls_C3DControl_getName_EVString_Callback* m_EarthView_World_Spatial3D_Controls_C3DControl_getName_EVString_Callback;
					EarthView_World_Spatial3D_Controls_C3DControl_getTypeString_EVString_Callback* m_EarthView_World_Spatial3D_Controls_C3DControl_getTypeString_EVString_Callback;
					EarthView_World_Spatial3D_Controls_C3DControl_notifyViewChanged_void_IViewArgs_Callback* m_EarthView_World_Spatial3D_Controls_C3DControl_notifyViewChanged_void_IViewArgs_Callback;
					EarthView_World_Spatial3D_Controls_C3DControl_addViewListener_ev_bool_IViewListener_Callback* m_EarthView_World_Spatial3D_Controls_C3DControl_addViewListener_ev_bool_IViewListener_Callback;
					EarthView_World_Spatial3D_Controls_C3DControl_getViewListenerCount_ev_uint32_Callback* m_EarthView_World_Spatial3D_Controls_C3DControl_getViewListenerCount_ev_uint32_Callback;
					EarthView_World_Spatial3D_Controls_C3DControl_getViewListener_IViewListener_ev_uint32_Callback* m_EarthView_World_Spatial3D_Controls_C3DControl_getViewListener_IViewListener_ev_uint32_Callback;
					EarthView_World_Spatial3D_Controls_C3DControl_existViewListener_ev_bool_IViewListener_Callback* m_EarthView_World_Spatial3D_Controls_C3DControl_existViewListener_ev_bool_IViewListener_Callback;
					EarthView_World_Spatial3D_Controls_C3DControl_removeViewListener_ev_bool_ev_uint32_Callback* m_EarthView_World_Spatial3D_Controls_C3DControl_removeViewListener_ev_bool_ev_uint32_Callback;
					EarthView_World_Spatial3D_Controls_C3DControl_removeViewListener_ev_bool_IViewListener_Callback* m_EarthView_World_Spatial3D_Controls_C3DControl_removeViewListener_ev_bool_IViewListener_Callback;
					EarthView_World_Spatial3D_Controls_C3DControl_clearViewListeners_void_Callback* m_EarthView_World_Spatial3D_Controls_C3DControl_clearViewListeners_void_Callback;
				public:
					C3DControlProxy(EarthView::World::Core::CNameValuePairList *pList) : C3DControl(pList)
					{
						m_EarthView_World_Spatial3D_Controls_C3DControl_windowResized_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_C3DControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_C3DControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_C3DControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_C3DControl_mouseMove_void_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_C3DControl_mouseWheel_void_ev_real32_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_C3DControl_eventStage_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_C3DControl_getType_EVSpatialControlType_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_C3DControl_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_C3DControl_getTypeString_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_C3DControl_notifyViewChanged_void_IViewArgs_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_C3DControl_addViewListener_ev_bool_IViewListener_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_C3DControl_getViewListenerCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_C3DControl_getViewListener_IViewListener_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_C3DControl_existViewListener_ev_bool_IViewListener_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_C3DControl_removeViewListener_ev_bool_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_C3DControl_removeViewListener_ev_bool_IViewListener_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_C3DControl_clearViewListeners_void_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_C3DControl_windowResized_void(EarthView_World_Spatial3D_Controls_C3DControl_windowResized_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_C3DControl_windowResized_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_C3DControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32(EarthView_World_Spatial3D_Controls_C3DControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_C3DControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_C3DControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32(EarthView_World_Spatial3D_Controls_C3DControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_C3DControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_C3DControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32(EarthView_World_Spatial3D_Controls_C3DControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_C3DControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_C3DControl_mouseMove_void_ev_int32_ev_int32(EarthView_World_Spatial3D_Controls_C3DControl_mouseMove_void_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_C3DControl_mouseMove_void_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_C3DControl_mouseWheel_void_ev_real32(EarthView_World_Spatial3D_Controls_C3DControl_mouseWheel_void_ev_real32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_C3DControl_mouseWheel_void_ev_real32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_C3DControl_eventStage_ev_bool(EarthView_World_Spatial3D_Controls_C3DControl_eventStage_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_C3DControl_eventStage_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_C3DControl_getType_EVSpatialControlType(EarthView_World_Spatial3D_Controls_C3DControl_getType_EVSpatialControlType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_C3DControl_getType_EVSpatialControlType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_C3DControl_getName_EVString(EarthView_World_Spatial3D_Controls_C3DControl_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_C3DControl_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_C3DControl_getTypeString_EVString(EarthView_World_Spatial3D_Controls_C3DControl_getTypeString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_C3DControl_getTypeString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_C3DControl_notifyViewChanged_void_IViewArgs(EarthView_World_Spatial3D_Controls_C3DControl_notifyViewChanged_void_IViewArgs_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_C3DControl_notifyViewChanged_void_IViewArgs_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_C3DControl_addViewListener_ev_bool_IViewListener(EarthView_World_Spatial3D_Controls_C3DControl_addViewListener_ev_bool_IViewListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_C3DControl_addViewListener_ev_bool_IViewListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_C3DControl_getViewListenerCount_ev_uint32(EarthView_World_Spatial3D_Controls_C3DControl_getViewListenerCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_C3DControl_getViewListenerCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_C3DControl_getViewListener_IViewListener_ev_uint32(EarthView_World_Spatial3D_Controls_C3DControl_getViewListener_IViewListener_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_C3DControl_getViewListener_IViewListener_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_C3DControl_existViewListener_ev_bool_IViewListener(EarthView_World_Spatial3D_Controls_C3DControl_existViewListener_ev_bool_IViewListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_C3DControl_existViewListener_ev_bool_IViewListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_C3DControl_removeViewListener_ev_bool_ev_uint32(EarthView_World_Spatial3D_Controls_C3DControl_removeViewListener_ev_bool_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_C3DControl_removeViewListener_ev_bool_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_C3DControl_removeViewListener_ev_bool_IViewListener(EarthView_World_Spatial3D_Controls_C3DControl_removeViewListener_ev_bool_IViewListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_C3DControl_removeViewListener_ev_bool_IViewListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_C3DControl_clearViewListeners_void(EarthView_World_Spatial3D_Controls_C3DControl_clearViewListeners_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_C3DControl_clearViewListeners_void_Callback = pCallback;
					}
					virtual void windowResized()
					{
						if(m_EarthView_World_Spatial3D_Controls_C3DControl_windowResized_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_C3DControl_windowResized_void_Callback();
						}
						else
							return this->C3DControl::windowResized();
					}
					virtual void mouseButtonPress(_in ev_int32 x, _in ev_int32 y, _in ev_uint32 button)
					{
						if(m_EarthView_World_Spatial3D_Controls_C3DControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_C3DControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback(x, y, button);
						}
						else
							return this->C3DControl::mouseButtonPress(x, y, button);
					}
					virtual void mouseDoubleButtonPress(_in ev_int32 x, _in ev_int32 y, _in ev_uint32 button)
					{
						if(m_EarthView_World_Spatial3D_Controls_C3DControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_C3DControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback(x, y, button);
						}
						else
							return this->C3DControl::mouseDoubleButtonPress(x, y, button);
					}
					virtual void mouseButtonRelease(_in ev_int32 x, _in ev_int32 y, _in ev_uint32 button)
					{
						if(m_EarthView_World_Spatial3D_Controls_C3DControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_C3DControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32_Callback(x, y, button);
						}
						else
							return this->C3DControl::mouseButtonRelease(x, y, button);
					}
					virtual void mouseMove(_in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_Controls_C3DControl_mouseMove_void_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_C3DControl_mouseMove_void_ev_int32_ev_int32_Callback(x, y);
						}
						else
							return this->C3DControl::mouseMove(x, y);
					}
					virtual void mouseWheel(_in ev_real32 delta)
					{
						if(m_EarthView_World_Spatial3D_Controls_C3DControl_mouseWheel_void_ev_real32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_C3DControl_mouseWheel_void_ev_real32_Callback(delta);
						}
						else
							return this->C3DControl::mouseWheel(delta);
					}
					virtual ev_bool eventStage()
					{
						if(m_EarthView_World_Spatial3D_Controls_C3DControl_eventStage_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_C3DControl_eventStage_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->C3DControl::eventStage();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_Controls_C3DControl_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Controls_C3DControl_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->C3DControl::getName();
					}
					virtual EarthView::World::Spatial::Atlas::EVSpatialControlType getType() const
					{
						if(m_EarthView_World_Spatial3D_Controls_C3DControl_getType_EVSpatialControlType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVSpatialControlType returnValue = (EarthView::World::Spatial::Atlas::EVSpatialControlType)m_EarthView_World_Spatial3D_Controls_C3DControl_getType_EVSpatialControlType_Callback();
							return returnValue;
						}
						else
							return this->C3DControl::getType();
					}
					virtual EVString getTypeString() const
					{
						if(m_EarthView_World_Spatial3D_Controls_C3DControl_getTypeString_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Controls_C3DControl_getTypeString_EVString_Callback();
							return returnValue;
						}
						else
							return this->C3DControl::getTypeString();
					}
					virtual void notifyViewChanged(_in EarthView::World::Spatial::IViewArgs* args)
					{
						if(m_EarthView_World_Spatial3D_Controls_C3DControl_notifyViewChanged_void_IViewArgs_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_C3DControl_notifyViewChanged_void_IViewArgs_Callback(args);
						}
						else
							return this->C3DControl::notifyViewChanged(args);
					}
					virtual ev_bool addViewListener(_in EarthView::World::Spatial::IViewListener* ref_externalListener)
					{
						if(m_EarthView_World_Spatial3D_Controls_C3DControl_addViewListener_ev_bool_IViewListener_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_C3DControl_addViewListener_ev_bool_IViewListener_Callback(ref_externalListener);
							return returnValue;
						}
						else
							return this->C3DControl::addViewListener(ref_externalListener);
					}
					virtual ev_uint32 getViewListenerCount() const
					{
						if(m_EarthView_World_Spatial3D_Controls_C3DControl_getViewListenerCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Controls_C3DControl_getViewListenerCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->C3DControl::getViewListenerCount();
					}
					virtual EarthView::World::Spatial::IViewListener* getViewListener(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial3D_Controls_C3DControl_getViewListener_IViewListener_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::IViewListener* returnValue = m_EarthView_World_Spatial3D_Controls_C3DControl_getViewListener_IViewListener_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->C3DControl::getViewListener(index);
					}
					virtual ev_bool existViewListener(_in EarthView::World::Spatial::IViewListener* externalListener) const
					{
						if(m_EarthView_World_Spatial3D_Controls_C3DControl_existViewListener_ev_bool_IViewListener_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_C3DControl_existViewListener_ev_bool_IViewListener_Callback(externalListener);
							return returnValue;
						}
						else
							return this->C3DControl::existViewListener(externalListener);
					}
					virtual ev_bool removeViewListener(_in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial3D_Controls_C3DControl_removeViewListener_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_C3DControl_removeViewListener_ev_bool_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->C3DControl::removeViewListener(index);
					}
					virtual ev_bool removeViewListener(_in EarthView::World::Spatial::IViewListener* externalListener)
					{
						if(m_EarthView_World_Spatial3D_Controls_C3DControl_removeViewListener_ev_bool_IViewListener_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_C3DControl_removeViewListener_ev_bool_IViewListener_Callback(externalListener);
							return returnValue;
						}
						else
							return this->C3DControl::removeViewListener(externalListener);
					}
					virtual void clearViewListeners()
					{
						if(m_EarthView_World_Spatial3D_Controls_C3DControl_clearViewListeners_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_C3DControl_clearViewListeners_void_Callback();
						}
						else
							return this->C3DControl::clearViewListeners();
					}
				};
				REGISTER_FACTORY_CLASS(C3DControlProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_C3DControl_addGuiHandler_void_CGUIEventHandler(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::CGUIEventHandler* ref_guiEventHandler )
				{
					EarthView::World::Spatial3D::Controls::C3DControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX;
					ptrNativeObject->addGuiHandler(ref_guiEventHandler);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_C3DControl_removeHandler_void_CGUIEventHandler(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::CGUIEventHandler* guiEventHandler )
				{
					EarthView::World::Spatial3D::Controls::C3DControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX;
					ptrNativeObject->removeHandler(guiEventHandler);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_C3DControl_addMovable_void_CMovableObject_CVector3(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* ref_movable, _in const void* pos )
				{
					EarthView::World::Spatial3D::Controls::C3DControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX;
					ptrNativeObject->addMovable(ref_movable, *(EarthView::World::Spatial::Math::CVector3*)pos);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_C3DControl_removeMovable_void_CMovableObject(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* movable )
				{
					EarthView::World::Spatial3D::Controls::C3DControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX;
					ptrNativeObject->removeMovable(movable);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_C3DControl_removeMovable_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Controls::C3DControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX;
					ptrNativeObject->removeMovable(name1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_C3DControl_windowResized_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::C3DControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX;
					if (dynamic_cast<C3DControlProxy*>((EarthView::World::Spatial3D::Controls::C3DControl*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Controls::C3DControl::windowResized();
					else
						ptrNativeObject->windowResized();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_windowResized_void( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_C3DControl_windowResized_void_Callback* pCallback )
				{
					C3DControlProxy* ptr = dynamic_cast<C3DControlProxy*>((EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_C3DControl_windowResized_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_C3DControl_windowResized_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::C3DControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Controls::C3DControl::windowResized();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_C3DControl_resize_void_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 width, _in ev_uint32 height )
				{
					EarthView::World::Spatial3D::Controls::C3DControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX;
					ptrNativeObject->resize(width, height);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_C3DControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32(void *pObjectXXXX, _in ev_int32 x, _in ev_int32 y, _in ev_uint32 button )
				{
					EarthView::World::Spatial3D::Controls::C3DControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX;
					if (dynamic_cast<C3DControlProxy*>((EarthView::World::Spatial3D::Controls::C3DControl*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Controls::C3DControl::mouseButtonPress(x, y, button);
					else
						ptrNativeObject->mouseButtonPress(x, y, button);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_C3DControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback* pCallback )
				{
					C3DControlProxy* ptr = dynamic_cast<C3DControlProxy*>((EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_C3DControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_C3DControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_int32 x, _in ev_int32 y, _in ev_uint32 button )
				{
					EarthView::World::Spatial3D::Controls::C3DControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Controls::C3DControl::mouseButtonPress(x, y, button);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_C3DControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32(void *pObjectXXXX, _in ev_int32 x, _in ev_int32 y, _in ev_uint32 button )
				{
					EarthView::World::Spatial3D::Controls::C3DControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX;
					if (dynamic_cast<C3DControlProxy*>((EarthView::World::Spatial3D::Controls::C3DControl*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Controls::C3DControl::mouseDoubleButtonPress(x, y, button);
					else
						ptrNativeObject->mouseDoubleButtonPress(x, y, button);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_C3DControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback* pCallback )
				{
					C3DControlProxy* ptr = dynamic_cast<C3DControlProxy*>((EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_C3DControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_C3DControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_int32 x, _in ev_int32 y, _in ev_uint32 button )
				{
					EarthView::World::Spatial3D::Controls::C3DControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Controls::C3DControl::mouseDoubleButtonPress(x, y, button);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_C3DControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32(void *pObjectXXXX, _in ev_int32 x, _in ev_int32 y, _in ev_uint32 button )
				{
					EarthView::World::Spatial3D::Controls::C3DControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX;
					if (dynamic_cast<C3DControlProxy*>((EarthView::World::Spatial3D::Controls::C3DControl*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Controls::C3DControl::mouseButtonRelease(x, y, button);
					else
						ptrNativeObject->mouseButtonRelease(x, y, button);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_C3DControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32_Callback* pCallback )
				{
					C3DControlProxy* ptr = dynamic_cast<C3DControlProxy*>((EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_C3DControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_C3DControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_int32 x, _in ev_int32 y, _in ev_uint32 button )
				{
					EarthView::World::Spatial3D::Controls::C3DControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Controls::C3DControl::mouseButtonRelease(x, y, button);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_C3DControl_mouseMove_void_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::Controls::C3DControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX;
					if (dynamic_cast<C3DControlProxy*>((EarthView::World::Spatial3D::Controls::C3DControl*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Controls::C3DControl::mouseMove(x, y);
					else
						ptrNativeObject->mouseMove(x, y);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_mouseMove_void_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_C3DControl_mouseMove_void_ev_int32_ev_int32_Callback* pCallback )
				{
					C3DControlProxy* ptr = dynamic_cast<C3DControlProxy*>((EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_C3DControl_mouseMove_void_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_C3DControl_mouseMove_void_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::Controls::C3DControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Controls::C3DControl::mouseMove(x, y);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_C3DControl_mouseWheel_void_ev_real32(void *pObjectXXXX, _in ev_real32 delta )
				{
					EarthView::World::Spatial3D::Controls::C3DControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX;
					if (dynamic_cast<C3DControlProxy*>((EarthView::World::Spatial3D::Controls::C3DControl*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Controls::C3DControl::mouseWheel(delta);
					else
						ptrNativeObject->mouseWheel(delta);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_mouseWheel_void_ev_real32( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_C3DControl_mouseWheel_void_ev_real32_Callback* pCallback )
				{
					C3DControlProxy* ptr = dynamic_cast<C3DControlProxy*>((EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_C3DControl_mouseWheel_void_ev_real32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_C3DControl_mouseWheel_void_ev_real32_NoVirtual(void *pObjectXXXX, _in ev_real32 delta )
				{
					EarthView::World::Spatial3D::Controls::C3DControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Controls::C3DControl::mouseWheel(delta);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_C3DControl_keyPress_void_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 key, _in ev_int32 virtualKey )
				{
					EarthView::World::Spatial3D::Controls::C3DControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX;
					ptrNativeObject->keyPress(key, virtualKey);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_C3DControl_keyRelease_void_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 key, _in ev_int32 virtualKey )
				{
					EarthView::World::Spatial3D::Controls::C3DControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX;
					ptrNativeObject->keyRelease(key, virtualKey);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_C3DControl_windowLoseFocus_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::C3DControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX;
					ptrNativeObject->windowLoseFocus();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_C3DControl_eventStage_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::C3DControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX;
					if (dynamic_cast<C3DControlProxy*>((EarthView::World::Spatial3D::Controls::C3DControl*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::C3DControl::eventStage();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->eventStage();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_eventStage_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_C3DControl_eventStage_ev_bool_Callback* pCallback )
				{
					C3DControlProxy* ptr = dynamic_cast<C3DControlProxy*>((EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_C3DControl_eventStage_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_C3DControl_eventStage_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::C3DControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::C3DControl::eventStage();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderWindow*  _stdcall EarthView_World_Spatial3D_Controls_C3DControl_getRenderWindow_CRenderWindow(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::C3DControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX;
					EarthView::World::Graphic::CRenderWindow* objXXXX = ptrNativeObject->getRenderWindow();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneManager*  _stdcall EarthView_World_Spatial3D_Controls_C3DControl_getSceneManager_CSceneManager(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::C3DControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX;
					EarthView::World::Graphic::CSceneManager* objXXXX = ptrNativeObject->getSceneManager();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCamera*  _stdcall EarthView_World_Spatial3D_Controls_C3DControl_getCamera_CCamera(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::C3DControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX;
					EarthView::World::Graphic::CCamera* objXXXX = ptrNativeObject->getCamera();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CViewport*  _stdcall EarthView_World_Spatial3D_Controls_C3DControl_getViewport_CViewport(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::C3DControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX;
					EarthView::World::Graphic::CViewport* objXXXX = ptrNativeObject->getViewport();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IScene*  _stdcall EarthView_World_Spatial3D_Controls_C3DControl_getScene_IScene(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::C3DControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::IScene* objXXXX = ptrNativeObject->getScene();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Controls_C3DControl_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::C3DControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX;
					if (dynamic_cast<C3DControlProxy*>((EarthView::World::Spatial3D::Controls::C3DControl*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::C3DControl::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_C3DControl_getName_EVString_Callback* pCallback )
				{
					C3DControlProxy* ptr = dynamic_cast<C3DControlProxy*>((EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_C3DControl_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Controls_C3DControl_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::C3DControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::C3DControl::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_C3DControl_userEvent_void_CGUIEventPtr(void *pObjectXXXX, _in const void* e )
				{
					EarthView::World::Spatial3D::Controls::C3DControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX;
					ptrNativeObject->userEvent(*(EarthView::World::Spatial::SystemUI::CGUIEventPtr*)e);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_getType_EVSpatialControlType( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_C3DControl_getType_EVSpatialControlType_Callback* pCallback )
				{
					C3DControlProxy* ptr = dynamic_cast<C3DControlProxy*>((EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_C3DControl_getType_EVSpatialControlType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_getTypeString_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_C3DControl_getTypeString_EVString_Callback* pCallback )
				{
					C3DControlProxy* ptr = dynamic_cast<C3DControlProxy*>((EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_C3DControl_getTypeString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_notifyViewChanged_void_IViewArgs( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_C3DControl_notifyViewChanged_void_IViewArgs_Callback* pCallback )
				{
					C3DControlProxy* ptr = dynamic_cast<C3DControlProxy*>((EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_C3DControl_notifyViewChanged_void_IViewArgs(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_addViewListener_ev_bool_IViewListener( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_C3DControl_addViewListener_ev_bool_IViewListener_Callback* pCallback )
				{
					C3DControlProxy* ptr = dynamic_cast<C3DControlProxy*>((EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_C3DControl_addViewListener_ev_bool_IViewListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_getViewListenerCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_C3DControl_getViewListenerCount_ev_uint32_Callback* pCallback )
				{
					C3DControlProxy* ptr = dynamic_cast<C3DControlProxy*>((EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_C3DControl_getViewListenerCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_getViewListener_IViewListener_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_C3DControl_getViewListener_IViewListener_ev_uint32_Callback* pCallback )
				{
					C3DControlProxy* ptr = dynamic_cast<C3DControlProxy*>((EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_C3DControl_getViewListener_IViewListener_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_existViewListener_ev_bool_IViewListener( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_C3DControl_existViewListener_ev_bool_IViewListener_Callback* pCallback )
				{
					C3DControlProxy* ptr = dynamic_cast<C3DControlProxy*>((EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_C3DControl_existViewListener_ev_bool_IViewListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_removeViewListener_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_C3DControl_removeViewListener_ev_bool_ev_uint32_Callback* pCallback )
				{
					C3DControlProxy* ptr = dynamic_cast<C3DControlProxy*>((EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_C3DControl_removeViewListener_ev_bool_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_removeViewListener_ev_bool_IViewListener( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_C3DControl_removeViewListener_ev_bool_IViewListener_Callback* pCallback )
				{
					C3DControlProxy* ptr = dynamic_cast<C3DControlProxy*>((EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_C3DControl_removeViewListener_ev_bool_IViewListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_clearViewListeners_void( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_C3DControl_clearViewListeners_void_Callback* pCallback )
				{
					C3DControlProxy* ptr = dynamic_cast<C3DControlProxy*>((EarthView::World::Spatial3D::Controls::C3DControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_C3DControl_clearViewListeners_void(pCallback);
					}
				}
			}
		}
	}
}
