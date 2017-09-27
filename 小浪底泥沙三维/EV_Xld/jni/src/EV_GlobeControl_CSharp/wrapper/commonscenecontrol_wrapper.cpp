/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "globecontrol/commonscenecontrol.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Controls
			{
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneControl_windowResized_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback)(_in ev_int32 x, _in ev_int32 y, _in ev_uint32 button);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback)(_in ev_int32 x, _in ev_int32 y, _in ev_uint32 button);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32_Callback)(_in ev_int32 x, _in ev_int32 y, _in ev_uint32 button);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseMove_void_ev_int32_ev_int32_Callback)(_in ev_int32 x, _in ev_int32 y);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseWheel_void_ev_real32_Callback)(_in ev_real32 delta);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneControl_eventStage_ev_bool_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneControl_getType_EVSpatialControlType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneControl_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneControl_getTypeString_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneControl_notifyViewChanged_void_IViewArgs_Callback)(_in EarthView::World::Spatial::IViewArgs* args);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneControl_addViewListener_ev_bool_IViewListener_Callback)(_in EarthView::World::Spatial::IViewListener* ref_externalListener);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneControl_getViewListenerCount_ev_uint32_Callback)();
				typedef EarthView::World::Spatial::IViewListener*  ( _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneControl_getViewListener_IViewListener_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneControl_existViewListener_ev_bool_IViewListener_Callback)(_in EarthView::World::Spatial::IViewListener* externalListener);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneControl_removeViewListener_ev_bool_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneControl_removeViewListener_ev_bool_IViewListener_Callback)(_in EarthView::World::Spatial::IViewListener* externalListener);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneControl_clearViewListeners_void_Callback)();
				class CCommonSceneControlProxy : public EarthView::World::Spatial3D::Controls::CCommonSceneControl
				{
				private:
					EarthView_World_Spatial3D_Controls_CCommonSceneControl_windowResized_void_Callback* m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_windowResized_void_Callback;
					EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback* m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback;
					EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback* m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback;
					EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32_Callback* m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32_Callback;
					EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseMove_void_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseMove_void_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseWheel_void_ev_real32_Callback* m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseWheel_void_ev_real32_Callback;
					EarthView_World_Spatial3D_Controls_CCommonSceneControl_eventStage_ev_bool_Callback* m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_eventStage_ev_bool_Callback;
					EarthView_World_Spatial3D_Controls_CCommonSceneControl_getType_EVSpatialControlType_Callback* m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getType_EVSpatialControlType_Callback;
					EarthView_World_Spatial3D_Controls_CCommonSceneControl_getName_EVString_Callback* m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getName_EVString_Callback;
					EarthView_World_Spatial3D_Controls_CCommonSceneControl_getTypeString_EVString_Callback* m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getTypeString_EVString_Callback;
					EarthView_World_Spatial3D_Controls_CCommonSceneControl_notifyViewChanged_void_IViewArgs_Callback* m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_notifyViewChanged_void_IViewArgs_Callback;
					EarthView_World_Spatial3D_Controls_CCommonSceneControl_addViewListener_ev_bool_IViewListener_Callback* m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_addViewListener_ev_bool_IViewListener_Callback;
					EarthView_World_Spatial3D_Controls_CCommonSceneControl_getViewListenerCount_ev_uint32_Callback* m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getViewListenerCount_ev_uint32_Callback;
					EarthView_World_Spatial3D_Controls_CCommonSceneControl_getViewListener_IViewListener_ev_uint32_Callback* m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getViewListener_IViewListener_ev_uint32_Callback;
					EarthView_World_Spatial3D_Controls_CCommonSceneControl_existViewListener_ev_bool_IViewListener_Callback* m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_existViewListener_ev_bool_IViewListener_Callback;
					EarthView_World_Spatial3D_Controls_CCommonSceneControl_removeViewListener_ev_bool_ev_uint32_Callback* m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_removeViewListener_ev_bool_ev_uint32_Callback;
					EarthView_World_Spatial3D_Controls_CCommonSceneControl_removeViewListener_ev_bool_IViewListener_Callback* m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_removeViewListener_ev_bool_IViewListener_Callback;
					EarthView_World_Spatial3D_Controls_CCommonSceneControl_clearViewListeners_void_Callback* m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_clearViewListeners_void_Callback;
				public:
					CCommonSceneControlProxy(EarthView::World::Core::CNameValuePairList *pList) : CCommonSceneControl(pList)
					{
						m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_windowResized_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseMove_void_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseWheel_void_ev_real32_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_eventStage_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getType_EVSpatialControlType_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getTypeString_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_notifyViewChanged_void_IViewArgs_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_addViewListener_ev_bool_IViewListener_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getViewListenerCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getViewListener_IViewListener_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_existViewListener_ev_bool_IViewListener_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_removeViewListener_ev_bool_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_removeViewListener_ev_bool_IViewListener_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_clearViewListeners_void_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_windowResized_void(EarthView_World_Spatial3D_Controls_CCommonSceneControl_windowResized_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_windowResized_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32(EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32(EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32(EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseMove_void_ev_int32_ev_int32(EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseMove_void_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseMove_void_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseWheel_void_ev_real32(EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseWheel_void_ev_real32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseWheel_void_ev_real32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_eventStage_ev_bool(EarthView_World_Spatial3D_Controls_CCommonSceneControl_eventStage_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_eventStage_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getType_EVSpatialControlType(EarthView_World_Spatial3D_Controls_CCommonSceneControl_getType_EVSpatialControlType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getType_EVSpatialControlType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getName_EVString(EarthView_World_Spatial3D_Controls_CCommonSceneControl_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getTypeString_EVString(EarthView_World_Spatial3D_Controls_CCommonSceneControl_getTypeString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getTypeString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_notifyViewChanged_void_IViewArgs(EarthView_World_Spatial3D_Controls_CCommonSceneControl_notifyViewChanged_void_IViewArgs_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_notifyViewChanged_void_IViewArgs_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_addViewListener_ev_bool_IViewListener(EarthView_World_Spatial3D_Controls_CCommonSceneControl_addViewListener_ev_bool_IViewListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_addViewListener_ev_bool_IViewListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getViewListenerCount_ev_uint32(EarthView_World_Spatial3D_Controls_CCommonSceneControl_getViewListenerCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getViewListenerCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getViewListener_IViewListener_ev_uint32(EarthView_World_Spatial3D_Controls_CCommonSceneControl_getViewListener_IViewListener_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getViewListener_IViewListener_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_existViewListener_ev_bool_IViewListener(EarthView_World_Spatial3D_Controls_CCommonSceneControl_existViewListener_ev_bool_IViewListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_existViewListener_ev_bool_IViewListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_removeViewListener_ev_bool_ev_uint32(EarthView_World_Spatial3D_Controls_CCommonSceneControl_removeViewListener_ev_bool_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_removeViewListener_ev_bool_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_removeViewListener_ev_bool_IViewListener(EarthView_World_Spatial3D_Controls_CCommonSceneControl_removeViewListener_ev_bool_IViewListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_removeViewListener_ev_bool_IViewListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_clearViewListeners_void(EarthView_World_Spatial3D_Controls_CCommonSceneControl_clearViewListeners_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_clearViewListeners_void_Callback = pCallback;
					}
					virtual void windowResized()
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_windowResized_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_windowResized_void_Callback();
						}
						else
							return this->CCommonSceneControl::windowResized();
					}
					virtual void mouseButtonPress(_in ev_int32 x, _in ev_int32 y, _in ev_uint32 button)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback(x, y, button);
						}
						else
							return this->CCommonSceneControl::mouseButtonPress(x, y, button);
					}
					virtual void mouseDoubleButtonPress(_in ev_int32 x, _in ev_int32 y, _in ev_uint32 button)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback(x, y, button);
						}
						else
							return this->CCommonSceneControl::mouseDoubleButtonPress(x, y, button);
					}
					virtual void mouseButtonRelease(_in ev_int32 x, _in ev_int32 y, _in ev_uint32 button)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32_Callback(x, y, button);
						}
						else
							return this->CCommonSceneControl::mouseButtonRelease(x, y, button);
					}
					virtual void mouseMove(_in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseMove_void_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseMove_void_ev_int32_ev_int32_Callback(x, y);
						}
						else
							return this->CCommonSceneControl::mouseMove(x, y);
					}
					virtual void mouseWheel(_in ev_real32 delta)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseWheel_void_ev_real32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseWheel_void_ev_real32_Callback(delta);
						}
						else
							return this->CCommonSceneControl::mouseWheel(delta);
					}
					virtual ev_bool eventStage()
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_eventStage_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_eventStage_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCommonSceneControl::eventStage();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CCommonSceneControl::getName();
					}
					virtual EarthView::World::Spatial::Atlas::EVSpatialControlType getType() const
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getType_EVSpatialControlType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVSpatialControlType returnValue = (EarthView::World::Spatial::Atlas::EVSpatialControlType)m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getType_EVSpatialControlType_Callback();
							return returnValue;
						}
						else
							return this->CCommonSceneControl::getType();
					}
					virtual EVString getTypeString() const
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getTypeString_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getTypeString_EVString_Callback();
							return returnValue;
						}
						else
							return this->CCommonSceneControl::getTypeString();
					}
					virtual void notifyViewChanged(_in EarthView::World::Spatial::IViewArgs* args)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_notifyViewChanged_void_IViewArgs_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_notifyViewChanged_void_IViewArgs_Callback(args);
						}
						else
							return this->CCommonSceneControl::notifyViewChanged(args);
					}
					virtual ev_bool addViewListener(_in EarthView::World::Spatial::IViewListener* ref_externalListener)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_addViewListener_ev_bool_IViewListener_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_addViewListener_ev_bool_IViewListener_Callback(ref_externalListener);
							return returnValue;
						}
						else
							return this->CCommonSceneControl::addViewListener(ref_externalListener);
					}
					virtual ev_uint32 getViewListenerCount() const
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getViewListenerCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getViewListenerCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CCommonSceneControl::getViewListenerCount();
					}
					virtual EarthView::World::Spatial::IViewListener* getViewListener(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getViewListener_IViewListener_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::IViewListener* returnValue = m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getViewListener_IViewListener_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CCommonSceneControl::getViewListener(index);
					}
					virtual ev_bool existViewListener(_in EarthView::World::Spatial::IViewListener* externalListener) const
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_existViewListener_ev_bool_IViewListener_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_existViewListener_ev_bool_IViewListener_Callback(externalListener);
							return returnValue;
						}
						else
							return this->CCommonSceneControl::existViewListener(externalListener);
					}
					virtual ev_bool removeViewListener(_in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_removeViewListener_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_removeViewListener_ev_bool_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CCommonSceneControl::removeViewListener(index);
					}
					virtual ev_bool removeViewListener(_in EarthView::World::Spatial::IViewListener* externalListener)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_removeViewListener_ev_bool_IViewListener_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_removeViewListener_ev_bool_IViewListener_Callback(externalListener);
							return returnValue;
						}
						else
							return this->CCommonSceneControl::removeViewListener(externalListener);
					}
					virtual void clearViewListeners()
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_clearViewListeners_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CCommonSceneControl_clearViewListeners_void_Callback();
						}
						else
							return this->CCommonSceneControl::clearViewListeners();
					}
				};
				REGISTER_FACTORY_CLASS(CCommonSceneControlProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneControl_fireSelectionChanged_void_RaySceneQueryResult(void *pObjectXXXX, _in void* result )
				{
					EarthView::World::Spatial3D::Controls::CCommonSceneControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommonSceneControl*) pObjectXXXX;
					ptrNativeObject->fireSelectionChanged(*(EarthView::World::Graphic::RaySceneQueryResult*)result);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneControl_fireSelectionChanged_void_SceneQueryResult(void *pObjectXXXX, _in void* result )
				{
					EarthView::World::Spatial3D::Controls::CCommonSceneControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommonSceneControl*) pObjectXXXX;
					ptrNativeObject->fireSelectionChanged(*(EarthView::World::Graphic::SceneQueryResult*)result);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneControl_fireSelectionChanged_void_CGlobeSelection(void *pObjectXXXX, _in void* result )
				{
					EarthView::World::Spatial3D::Controls::CCommonSceneControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommonSceneControl*) pObjectXXXX;
					ptrNativeObject->fireSelectionChanged(*(EarthView::World::Spatial3D::CGlobeSelection*)result);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneControl_fireSelectedObjectMoved_void_RaySceneQueryResultEntry_CMatrix4_GUIEventType(void *pObjectXXXX, _in void* entry, _in const void* newMatrix, _in int type )
				{
					EarthView::World::Spatial3D::Controls::CCommonSceneControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommonSceneControl*) pObjectXXXX;
					ptrNativeObject->fireSelectedObjectMoved(*(EarthView::World::Graphic::RaySceneQueryResultEntry*)entry, *(EarthView::World::Spatial::Math::CMatrix4*)newMatrix, (EarthView::World::Spatial::SystemUI::CGUIEvent::GUIEventType)type);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneControl_fireDeleteKeyPressed_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CCommonSceneControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommonSceneControl*) pObjectXXXX;
					ptrNativeObject->fireDeleteKeyPressed();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneControl_setCurrentTool_ev_bool_ITool(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::ITool* ref_tool )
				{
					EarthView::World::Spatial3D::Controls::CCommonSceneControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommonSceneControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->setCurrentTool(ref_tool);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::SystemUI::ITool*  _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneControl_getCurrentTool_ITool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CCommonSceneControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommonSceneControl*) pObjectXXXX;
					const EarthView::World::Spatial::SystemUI::ITool* objXXXX = ptrNativeObject->getCurrentTool();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener*  _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneControl_getICommonSceneQueryListener_ICommonSceneQueryListener_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial3D::Controls::CCommonSceneControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommonSceneControl*) pObjectXXXX;
					const EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener* objXXXX = ptrNativeObject->getICommonSceneQueryListener(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneControl_addQueryListener_ev_bool_ICommonSceneQueryListener(void *pObjectXXXX, _in EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener* ref_listener )
				{
					EarthView::World::Spatial3D::Controls::CCommonSceneControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommonSceneControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->addQueryListener(ref_listener);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneControl_removeQueryListener_ev_bool_ICommonSceneQueryListener(void *pObjectXXXX, _in EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener* listener )
				{
					EarthView::World::Spatial3D::Controls::CCommonSceneControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommonSceneControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->removeQueryListener(listener);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneControl_initCommonSceneRayQueryTool_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CCommonSceneControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommonSceneControl*) pObjectXXXX;
					ptrNativeObject->initCommonSceneRayQueryTool();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneControl_setLightCameraMode_void_ev_bool(void *pObjectXXXX, _in ev_bool flag )
				{
					EarthView::World::Spatial3D::Controls::CCommonSceneControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommonSceneControl*) pObjectXXXX;
					ptrNativeObject->setLightCameraMode(flag);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneControl_isLightCameraModel_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CCommonSceneControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommonSceneControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isLightCameraModel();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CCommonSceneControl_resetLightDirection_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CCommonSceneControl* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommonSceneControl*) pObjectXXXX;
					ptrNativeObject->resetLightDirection();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_windowResized_void( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommonSceneControl_windowResized_void_Callback* pCallback )
				{
					CCommonSceneControlProxy* ptr = dynamic_cast<CCommonSceneControlProxy*>((EarthView::World::Spatial3D::Controls::CCommonSceneControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_windowResized_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback* pCallback )
				{
					CCommonSceneControlProxy* ptr = dynamic_cast<CCommonSceneControlProxy*>((EarthView::World::Spatial3D::Controls::CCommonSceneControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32_Callback* pCallback )
				{
					CCommonSceneControlProxy* ptr = dynamic_cast<CCommonSceneControlProxy*>((EarthView::World::Spatial3D::Controls::CCommonSceneControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32_Callback* pCallback )
				{
					CCommonSceneControlProxy* ptr = dynamic_cast<CCommonSceneControlProxy*>((EarthView::World::Spatial3D::Controls::CCommonSceneControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseMove_void_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseMove_void_ev_int32_ev_int32_Callback* pCallback )
				{
					CCommonSceneControlProxy* ptr = dynamic_cast<CCommonSceneControlProxy*>((EarthView::World::Spatial3D::Controls::CCommonSceneControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseMove_void_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseWheel_void_ev_real32( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseWheel_void_ev_real32_Callback* pCallback )
				{
					CCommonSceneControlProxy* ptr = dynamic_cast<CCommonSceneControlProxy*>((EarthView::World::Spatial3D::Controls::CCommonSceneControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseWheel_void_ev_real32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_eventStage_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommonSceneControl_eventStage_ev_bool_Callback* pCallback )
				{
					CCommonSceneControlProxy* ptr = dynamic_cast<CCommonSceneControlProxy*>((EarthView::World::Spatial3D::Controls::CCommonSceneControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_eventStage_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getType_EVSpatialControlType( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommonSceneControl_getType_EVSpatialControlType_Callback* pCallback )
				{
					CCommonSceneControlProxy* ptr = dynamic_cast<CCommonSceneControlProxy*>((EarthView::World::Spatial3D::Controls::CCommonSceneControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getType_EVSpatialControlType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommonSceneControl_getName_EVString_Callback* pCallback )
				{
					CCommonSceneControlProxy* ptr = dynamic_cast<CCommonSceneControlProxy*>((EarthView::World::Spatial3D::Controls::CCommonSceneControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getTypeString_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommonSceneControl_getTypeString_EVString_Callback* pCallback )
				{
					CCommonSceneControlProxy* ptr = dynamic_cast<CCommonSceneControlProxy*>((EarthView::World::Spatial3D::Controls::CCommonSceneControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getTypeString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_notifyViewChanged_void_IViewArgs( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommonSceneControl_notifyViewChanged_void_IViewArgs_Callback* pCallback )
				{
					CCommonSceneControlProxy* ptr = dynamic_cast<CCommonSceneControlProxy*>((EarthView::World::Spatial3D::Controls::CCommonSceneControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_notifyViewChanged_void_IViewArgs(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_addViewListener_ev_bool_IViewListener( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommonSceneControl_addViewListener_ev_bool_IViewListener_Callback* pCallback )
				{
					CCommonSceneControlProxy* ptr = dynamic_cast<CCommonSceneControlProxy*>((EarthView::World::Spatial3D::Controls::CCommonSceneControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_addViewListener_ev_bool_IViewListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getViewListenerCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommonSceneControl_getViewListenerCount_ev_uint32_Callback* pCallback )
				{
					CCommonSceneControlProxy* ptr = dynamic_cast<CCommonSceneControlProxy*>((EarthView::World::Spatial3D::Controls::CCommonSceneControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getViewListenerCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getViewListener_IViewListener_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommonSceneControl_getViewListener_IViewListener_ev_uint32_Callback* pCallback )
				{
					CCommonSceneControlProxy* ptr = dynamic_cast<CCommonSceneControlProxy*>((EarthView::World::Spatial3D::Controls::CCommonSceneControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getViewListener_IViewListener_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_existViewListener_ev_bool_IViewListener( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommonSceneControl_existViewListener_ev_bool_IViewListener_Callback* pCallback )
				{
					CCommonSceneControlProxy* ptr = dynamic_cast<CCommonSceneControlProxy*>((EarthView::World::Spatial3D::Controls::CCommonSceneControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_existViewListener_ev_bool_IViewListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_removeViewListener_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommonSceneControl_removeViewListener_ev_bool_ev_uint32_Callback* pCallback )
				{
					CCommonSceneControlProxy* ptr = dynamic_cast<CCommonSceneControlProxy*>((EarthView::World::Spatial3D::Controls::CCommonSceneControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_removeViewListener_ev_bool_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_removeViewListener_ev_bool_IViewListener( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommonSceneControl_removeViewListener_ev_bool_IViewListener_Callback* pCallback )
				{
					CCommonSceneControlProxy* ptr = dynamic_cast<CCommonSceneControlProxy*>((EarthView::World::Spatial3D::Controls::CCommonSceneControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_removeViewListener_ev_bool_IViewListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_clearViewListeners_void( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommonSceneControl_clearViewListeners_void_Callback* pCallback )
				{
					CCommonSceneControlProxy* ptr = dynamic_cast<CCommonSceneControlProxy*>((EarthView::World::Spatial3D::Controls::CCommonSceneControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_clearViewListeners_void(pCallback);
					}
				}
			}
		}
	}
}
