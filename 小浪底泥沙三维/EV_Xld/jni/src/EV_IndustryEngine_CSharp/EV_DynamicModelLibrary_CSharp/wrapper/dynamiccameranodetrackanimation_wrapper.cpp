/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/dynamicmodellibrary/dynamiccameranodetrackanimation.h"
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace DynamicModelLibrary
		{
		}
	}
}
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace DynamicModelLibrary
		{
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_createAnimation_void_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_refreshAnimation_void_CControlPointMap_Callback)(_in const void* refreshPoints);
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_setCurrentFrameTime_void_ev_real64_Callback)(_in const ev_real64& time);
			typedef ev_real64  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_getCurrentFrameTime_ev_real64_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_clearAllCameraNodeTrackPoints_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_canStart_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_hasRequestCreateAnimation_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_setOnLineModeEnabled_void_ev_bool_Callback)(_in const ev_bool& enable);
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_getOnLineModeEnabled_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_createAnimation_void_CSceneNode_Callback)(_in EarthView::World::Graphic::CSceneNode* ref_node);
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_destoryAnimation_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_frameStarted_ev_bool_FrameEvent_Callback)(_in const EarthView::World::Graphic::FrameEvent& evt);
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback)(_in const EarthView::World::Graphic::FrameEvent& evt);
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_frameEnded_ev_bool_FrameEvent_Callback)(_in const EarthView::World::Graphic::FrameEvent& evt);
			class CDynamicCameraNodeTrackAnimationProxy : public EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation
			{
			private:
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_createAnimation_void_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_createAnimation_void_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_refreshAnimation_void_CControlPointMap_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_refreshAnimation_void_CControlPointMap_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_setCurrentFrameTime_void_ev_real64_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_setCurrentFrameTime_void_ev_real64_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_getCurrentFrameTime_ev_real64_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_getCurrentFrameTime_ev_real64_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_clearAllCameraNodeTrackPoints_void_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_clearAllCameraNodeTrackPoints_void_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_canStart_ev_bool_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_canStart_ev_bool_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_hasRequestCreateAnimation_ev_bool_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_hasRequestCreateAnimation_ev_bool_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_setOnLineModeEnabled_void_ev_bool_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_setOnLineModeEnabled_void_ev_bool_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_getOnLineModeEnabled_ev_bool_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_getOnLineModeEnabled_ev_bool_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_createAnimation_void_CSceneNode_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_createAnimation_void_CSceneNode_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_destoryAnimation_void_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_destoryAnimation_void_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_frameStarted_ev_bool_FrameEvent_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_frameStarted_ev_bool_FrameEvent_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_frameEnded_ev_bool_FrameEvent_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_frameEnded_ev_bool_FrameEvent_Callback;
			public:
				CDynamicCameraNodeTrackAnimationProxy(EarthView::World::Core::CNameValuePairList *pList) : CDynamicCameraNodeTrackAnimation(pList)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_createAnimation_void_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_refreshAnimation_void_CControlPointMap_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_setCurrentFrameTime_void_ev_real64_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_getCurrentFrameTime_ev_real64_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_clearAllCameraNodeTrackPoints_void_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_canStart_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_hasRequestCreateAnimation_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_setOnLineModeEnabled_void_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_getOnLineModeEnabled_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_createAnimation_void_CSceneNode_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_destoryAnimation_void_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_frameStarted_ev_bool_FrameEvent_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_frameEnded_ev_bool_FrameEvent_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_createAnimation_void(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_createAnimation_void_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_createAnimation_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_refreshAnimation_void_CControlPointMap(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_refreshAnimation_void_CControlPointMap_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_refreshAnimation_void_CControlPointMap_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_setCurrentFrameTime_void_ev_real64(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_setCurrentFrameTime_void_ev_real64_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_setCurrentFrameTime_void_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_getCurrentFrameTime_ev_real64(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_getCurrentFrameTime_ev_real64_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_getCurrentFrameTime_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_clearAllCameraNodeTrackPoints_void(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_clearAllCameraNodeTrackPoints_void_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_clearAllCameraNodeTrackPoints_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_canStart_ev_bool(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_canStart_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_canStart_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_hasRequestCreateAnimation_ev_bool(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_hasRequestCreateAnimation_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_hasRequestCreateAnimation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_setOnLineModeEnabled_void_ev_bool(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_setOnLineModeEnabled_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_setOnLineModeEnabled_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_getOnLineModeEnabled_ev_bool(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_getOnLineModeEnabled_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_getOnLineModeEnabled_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_createAnimation_void_CSceneNode(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_createAnimation_void_CSceneNode_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_createAnimation_void_CSceneNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_destoryAnimation_void(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_destoryAnimation_void_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_destoryAnimation_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_frameStarted_ev_bool_FrameEvent(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_frameStarted_ev_bool_FrameEvent_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_frameStarted_ev_bool_FrameEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_frameEnded_ev_bool_FrameEvent(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_frameEnded_ev_bool_FrameEvent_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_frameEnded_ev_bool_FrameEvent_Callback = pCallback;
				}
				virtual void createAnimation()
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_createAnimation_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_createAnimation_void_Callback();
					}
					else
						return this->CDynamicCameraNodeTrackAnimation::createAnimation();
				}
				virtual void refreshAnimation(_in const EarthView::World::Spatial3D::CControlPointMap& refreshPoints)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_refreshAnimation_void_CControlPointMap_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_refreshAnimation_void_CControlPointMap_Callback(&refreshPoints);
					}
					else
						return this->CDynamicCameraNodeTrackAnimation::refreshAnimation(refreshPoints);
				}
				virtual void setCurrentFrameTime(_in const ev_real64& time)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_setCurrentFrameTime_void_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_setCurrentFrameTime_void_ev_real64_Callback(time);
					}
					else
						return this->CDynamicCameraNodeTrackAnimation::setCurrentFrameTime(time);
				}
				virtual ev_real64 getCurrentFrameTime() const
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_getCurrentFrameTime_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_getCurrentFrameTime_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CDynamicCameraNodeTrackAnimation::getCurrentFrameTime();
				}
				virtual void clearAllCameraNodeTrackPoints()
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_clearAllCameraNodeTrackPoints_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_clearAllCameraNodeTrackPoints_void_Callback();
					}
					else
						return this->CDynamicCameraNodeTrackAnimation::clearAllCameraNodeTrackPoints();
				}
				virtual ev_bool canStart() const
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_canStart_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_canStart_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDynamicCameraNodeTrackAnimation::canStart();
				}
				virtual ev_bool hasRequestCreateAnimation() const
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_hasRequestCreateAnimation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_hasRequestCreateAnimation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDynamicCameraNodeTrackAnimation::hasRequestCreateAnimation();
				}
				virtual void setOnLineModeEnabled(_in const ev_bool& enable)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_setOnLineModeEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_setOnLineModeEnabled_void_ev_bool_Callback(enable);
					}
					else
						return this->CDynamicCameraNodeTrackAnimation::setOnLineModeEnabled(enable);
				}
				virtual ev_bool getOnLineModeEnabled() const
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_getOnLineModeEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_getOnLineModeEnabled_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDynamicCameraNodeTrackAnimation::getOnLineModeEnabled();
				}
				virtual ev_bool frameEnded(_in const EarthView::World::Graphic::FrameEvent& evt)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_frameEnded_ev_bool_FrameEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_frameEnded_ev_bool_FrameEvent_Callback(evt);
						return returnValue;
					}
					else
						return this->CDynamicCameraNodeTrackAnimation::frameEnded(evt);
				}
				virtual ev_bool frameRenderingQueued(_in const EarthView::World::Graphic::FrameEvent& evt)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback(evt);
						return returnValue;
					}
					else
						return this->CDynamicCameraNodeTrackAnimation::frameRenderingQueued(evt);
				}
				virtual void destoryAnimation()
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_destoryAnimation_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_destoryAnimation_void_Callback();
					}
					else
						return this->CDynamicCameraNodeTrackAnimation::destoryAnimation();
				}
				virtual ev_bool frameStarted(_in const EarthView::World::Graphic::FrameEvent& evt)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_frameStarted_ev_bool_FrameEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_frameStarted_ev_bool_FrameEvent_Callback(evt);
						return returnValue;
					}
					else
						return this->CDynamicCameraNodeTrackAnimation::frameStarted(evt);
				}
			};
			REGISTER_FACTORY_CLASS(CDynamicCameraNodeTrackAnimationProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_createAnimation_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation*) pObjectXXXX;
				if (dynamic_cast<CDynamicCameraNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation::createAnimation();
				else
					ptrNativeObject->createAnimation();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_createAnimation_void( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_createAnimation_void_Callback* pCallback )
			{
				CDynamicCameraNodeTrackAnimationProxy* ptr = dynamic_cast<CDynamicCameraNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_createAnimation_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_createAnimation_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation::createAnimation();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_refreshAnimation_void_CControlPointMap(void *pObjectXXXX, _in const void* refreshPoints )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation*) pObjectXXXX;
				if (dynamic_cast<CDynamicCameraNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation::refreshAnimation(*(EarthView::World::Spatial3D::CControlPointMap*)refreshPoints);
				else
					ptrNativeObject->refreshAnimation(*(EarthView::World::Spatial3D::CControlPointMap*)refreshPoints);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_refreshAnimation_void_CControlPointMap( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_refreshAnimation_void_CControlPointMap_Callback* pCallback )
			{
				CDynamicCameraNodeTrackAnimationProxy* ptr = dynamic_cast<CDynamicCameraNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_refreshAnimation_void_CControlPointMap(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_refreshAnimation_void_CControlPointMap_NoVirtual(void *pObjectXXXX, _in const void* refreshPoints )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation::refreshAnimation(*(EarthView::World::Spatial3D::CControlPointMap*)refreshPoints);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_setCurrentFrameTime_void_ev_real64(void *pObjectXXXX, _in const ev_real64& time )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation*) pObjectXXXX;
				if (dynamic_cast<CDynamicCameraNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation::setCurrentFrameTime(time);
				else
					ptrNativeObject->setCurrentFrameTime(time);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_setCurrentFrameTime_void_ev_real64( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_setCurrentFrameTime_void_ev_real64_Callback* pCallback )
			{
				CDynamicCameraNodeTrackAnimationProxy* ptr = dynamic_cast<CDynamicCameraNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_setCurrentFrameTime_void_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_setCurrentFrameTime_void_ev_real64_NoVirtual(void *pObjectXXXX, _in const ev_real64& time )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation::setCurrentFrameTime(time);
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_getCurrentFrameTime_ev_real64(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation*) pObjectXXXX;
				if (dynamic_cast<CDynamicCameraNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation*)ptrNativeObject) != NULL)
				{
					ev_real64 objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation::getCurrentFrameTime();
					return objXXXX;
				}
				else
				{
					ev_real64 objXXXX = ptrNativeObject->getCurrentFrameTime();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_getCurrentFrameTime_ev_real64( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_getCurrentFrameTime_ev_real64_Callback* pCallback )
			{
				CDynamicCameraNodeTrackAnimationProxy* ptr = dynamic_cast<CDynamicCameraNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_getCurrentFrameTime_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_getCurrentFrameTime_ev_real64_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation::getCurrentFrameTime();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_clearAllCameraNodeTrackPoints_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation*) pObjectXXXX;
				if (dynamic_cast<CDynamicCameraNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation::clearAllCameraNodeTrackPoints();
				else
					ptrNativeObject->clearAllCameraNodeTrackPoints();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_clearAllCameraNodeTrackPoints_void( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_clearAllCameraNodeTrackPoints_void_Callback* pCallback )
			{
				CDynamicCameraNodeTrackAnimationProxy* ptr = dynamic_cast<CDynamicCameraNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_clearAllCameraNodeTrackPoints_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_clearAllCameraNodeTrackPoints_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation::clearAllCameraNodeTrackPoints();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_canStart_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation*) pObjectXXXX;
				if (dynamic_cast<CDynamicCameraNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation::canStart();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->canStart();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_canStart_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_canStart_ev_bool_Callback* pCallback )
			{
				CDynamicCameraNodeTrackAnimationProxy* ptr = dynamic_cast<CDynamicCameraNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_canStart_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_canStart_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation::canStart();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_hasRequestCreateAnimation_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation*) pObjectXXXX;
				if (dynamic_cast<CDynamicCameraNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation::hasRequestCreateAnimation();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->hasRequestCreateAnimation();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_hasRequestCreateAnimation_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_hasRequestCreateAnimation_ev_bool_Callback* pCallback )
			{
				CDynamicCameraNodeTrackAnimationProxy* ptr = dynamic_cast<CDynamicCameraNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_hasRequestCreateAnimation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_hasRequestCreateAnimation_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation::hasRequestCreateAnimation();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_setOnLineModeEnabled_void_ev_bool(void *pObjectXXXX, _in const ev_bool& enable )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation*) pObjectXXXX;
				if (dynamic_cast<CDynamicCameraNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation::setOnLineModeEnabled(enable);
				else
					ptrNativeObject->setOnLineModeEnabled(enable);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_setOnLineModeEnabled_void_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_setOnLineModeEnabled_void_ev_bool_Callback* pCallback )
			{
				CDynamicCameraNodeTrackAnimationProxy* ptr = dynamic_cast<CDynamicCameraNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_setOnLineModeEnabled_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_setOnLineModeEnabled_void_ev_bool_NoVirtual(void *pObjectXXXX, _in const ev_bool& enable )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation::setOnLineModeEnabled(enable);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_getOnLineModeEnabled_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation*) pObjectXXXX;
				if (dynamic_cast<CDynamicCameraNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation::getOnLineModeEnabled();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getOnLineModeEnabled();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_getOnLineModeEnabled_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_getOnLineModeEnabled_ev_bool_Callback* pCallback )
			{
				CDynamicCameraNodeTrackAnimationProxy* ptr = dynamic_cast<CDynamicCameraNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_getOnLineModeEnabled_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_getOnLineModeEnabled_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation::getOnLineModeEnabled();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_frameEnded_ev_bool_FrameEvent(void *pObjectXXXX, _in const EarthView::World::Graphic::FrameEvent& evt )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation*) pObjectXXXX;
				if (dynamic_cast<CDynamicCameraNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation::frameEnded(evt);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->frameEnded(evt);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_frameEnded_ev_bool_FrameEvent( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_frameEnded_ev_bool_FrameEvent_Callback* pCallback )
			{
				CDynamicCameraNodeTrackAnimationProxy* ptr = dynamic_cast<CDynamicCameraNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_frameEnded_ev_bool_FrameEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_frameEnded_ev_bool_FrameEvent_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::FrameEvent& evt )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation::frameEnded(evt);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent(void *pObjectXXXX, _in const EarthView::World::Graphic::FrameEvent& evt )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation*) pObjectXXXX;
				if (dynamic_cast<CDynamicCameraNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation::frameRenderingQueued(evt);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->frameRenderingQueued(evt);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback* pCallback )
			{
				CDynamicCameraNodeTrackAnimationProxy* ptr = dynamic_cast<CDynamicCameraNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::FrameEvent& evt )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation::frameRenderingQueued(evt);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_createAnimation_void_CSceneNode( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_createAnimation_void_CSceneNode_Callback* pCallback )
			{
				CDynamicCameraNodeTrackAnimationProxy* ptr = dynamic_cast<CDynamicCameraNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_createAnimation_void_CSceneNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_destoryAnimation_void( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_destoryAnimation_void_Callback* pCallback )
			{
				CDynamicCameraNodeTrackAnimationProxy* ptr = dynamic_cast<CDynamicCameraNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_destoryAnimation_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_frameStarted_ev_bool_FrameEvent( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_frameStarted_ev_bool_FrameEvent_Callback* pCallback )
			{
				CDynamicCameraNodeTrackAnimationProxy* ptr = dynamic_cast<CDynamicCameraNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraNodeTrackAnimation_frameStarted_ev_bool_FrameEvent(pCallback);
				}
			}
		}
	}
}
