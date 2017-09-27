/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/nodetrack.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
		}
		namespace Spatial3D
		{
			typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_CTrackAnimationTimeListener_calculateTimeRatio_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 timePostion, _in ev_real64 timeLength);
			class CTrackAnimationTimeListenerProxy : public EarthView::World::Spatial3D::CTrackAnimationTimeListener
			{
			private:
				EarthView_World_Spatial3D_CTrackAnimationTimeListener_calculateTimeRatio_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial3D_CTrackAnimationTimeListener_calculateTimeRatio_ev_real64_ev_real64_ev_real64_Callback;
			public:
				CTrackAnimationTimeListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CTrackAnimationTimeListener(pList)
				{
					m_EarthView_World_Spatial3D_CTrackAnimationTimeListener_calculateTimeRatio_ev_real64_ev_real64_ev_real64_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial3D_CTrackAnimationTimeListener_calculateTimeRatio_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial3D_CTrackAnimationTimeListener_calculateTimeRatio_ev_real64_ev_real64_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CTrackAnimationTimeListener_calculateTimeRatio_ev_real64_ev_real64_ev_real64_Callback = pCallback;
				}
				virtual ev_real64 calculateTimeRatio(_in ev_real64 timePostion, _in ev_real64 timeLength)
				{
					if(m_EarthView_World_Spatial3D_CTrackAnimationTimeListener_calculateTimeRatio_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Spatial3D_CTrackAnimationTimeListener_calculateTimeRatio_ev_real64_ev_real64_ev_real64_Callback(timePostion, timeLength);
						return returnValue;
					}
					else
						return this->CTrackAnimationTimeListener::calculateTimeRatio(timePostion, timeLength);
				}
			};
			REGISTER_FACTORY_CLASS(CTrackAnimationTimeListenerProxy);
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_CTrackAnimationTimeListener_calculateTimeRatio_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 timePostion, _in ev_real64 timeLength )
			{
				EarthView::World::Spatial3D::CTrackAnimationTimeListener* ptrNativeObject = (EarthView::World::Spatial3D::CTrackAnimationTimeListener*) pObjectXXXX;
				if (dynamic_cast<CTrackAnimationTimeListenerProxy*>((EarthView::World::Spatial3D::CTrackAnimationTimeListener*)ptrNativeObject) != NULL)
				{
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CTrackAnimationTimeListener::calculateTimeRatio(timePostion, timeLength);
					return objXXXX;
				}
				else
				{
					ev_real64 objXXXX = ptrNativeObject->calculateTimeRatio(timePostion, timeLength);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CTrackAnimationTimeListener_calculateTimeRatio_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_CTrackAnimationTimeListener_calculateTimeRatio_ev_real64_ev_real64_ev_real64_Callback* pCallback )
			{
				CTrackAnimationTimeListenerProxy* ptr = dynamic_cast<CTrackAnimationTimeListenerProxy*>((EarthView::World::Spatial3D::CTrackAnimationTimeListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CTrackAnimationTimeListener_calculateTimeRatio_ev_real64_ev_real64_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_CTrackAnimationTimeListener_calculateTimeRatio_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 timePostion, _in ev_real64 timeLength )
			{
				EarthView::World::Spatial3D::CTrackAnimationTimeListener* ptrNativeObject = (EarthView::World::Spatial3D::CTrackAnimationTimeListener*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CTrackAnimationTimeListener::calculateTimeRatio(timePostion, timeLength);
				return objXXXX;
			}
			typedef void  ( _stdcall EarthView_World_Spatial3D_CTrackAnimation_createAnimation_void_CSceneNode_Callback)(_in EarthView::World::Graphic::CSceneNode* ref_node);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CTrackAnimation_destoryAnimation_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CTrackAnimation_frameStarted_ev_bool_FrameEvent_Callback)(_in const EarthView::World::Graphic::FrameEvent& evt);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback)(_in const EarthView::World::Graphic::FrameEvent& evt);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CTrackAnimation_frameEnded_ev_bool_FrameEvent_Callback)(_in const EarthView::World::Graphic::FrameEvent& evt);
			class CTrackAnimationProxy : public EarthView::World::Spatial3D::CTrackAnimation
			{
			private:
				EarthView_World_Spatial3D_CTrackAnimation_createAnimation_void_CSceneNode_Callback* m_EarthView_World_Spatial3D_CTrackAnimation_createAnimation_void_CSceneNode_Callback;
				EarthView_World_Spatial3D_CTrackAnimation_destoryAnimation_void_Callback* m_EarthView_World_Spatial3D_CTrackAnimation_destoryAnimation_void_Callback;
				EarthView_World_Spatial3D_CTrackAnimation_frameStarted_ev_bool_FrameEvent_Callback* m_EarthView_World_Spatial3D_CTrackAnimation_frameStarted_ev_bool_FrameEvent_Callback;
				EarthView_World_Spatial3D_CTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback* m_EarthView_World_Spatial3D_CTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback;
				EarthView_World_Spatial3D_CTrackAnimation_frameEnded_ev_bool_FrameEvent_Callback* m_EarthView_World_Spatial3D_CTrackAnimation_frameEnded_ev_bool_FrameEvent_Callback;
			public:
				CTrackAnimationProxy(EarthView::World::Core::CNameValuePairList *pList) : CTrackAnimation(pList)
				{
					m_EarthView_World_Spatial3D_CTrackAnimation_createAnimation_void_CSceneNode_Callback = NULL;
					m_EarthView_World_Spatial3D_CTrackAnimation_destoryAnimation_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CTrackAnimation_frameStarted_ev_bool_FrameEvent_Callback = NULL;
					m_EarthView_World_Spatial3D_CTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback = NULL;
					m_EarthView_World_Spatial3D_CTrackAnimation_frameEnded_ev_bool_FrameEvent_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial3D_CTrackAnimation_createAnimation_void_CSceneNode(EarthView_World_Spatial3D_CTrackAnimation_createAnimation_void_CSceneNode_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CTrackAnimation_createAnimation_void_CSceneNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CTrackAnimation_destoryAnimation_void(EarthView_World_Spatial3D_CTrackAnimation_destoryAnimation_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CTrackAnimation_destoryAnimation_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CTrackAnimation_frameStarted_ev_bool_FrameEvent(EarthView_World_Spatial3D_CTrackAnimation_frameStarted_ev_bool_FrameEvent_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CTrackAnimation_frameStarted_ev_bool_FrameEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent(EarthView_World_Spatial3D_CTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CTrackAnimation_frameEnded_ev_bool_FrameEvent(EarthView_World_Spatial3D_CTrackAnimation_frameEnded_ev_bool_FrameEvent_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CTrackAnimation_frameEnded_ev_bool_FrameEvent_Callback = pCallback;
				}
				virtual void createAnimation(_in EarthView::World::Graphic::CSceneNode* ref_node)
				{
					if(m_EarthView_World_Spatial3D_CTrackAnimation_createAnimation_void_CSceneNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CTrackAnimation_createAnimation_void_CSceneNode_Callback(ref_node);
					}
					else
						return this->CTrackAnimation::createAnimation(ref_node);
				}
				virtual void destoryAnimation()
				{
					if(m_EarthView_World_Spatial3D_CTrackAnimation_destoryAnimation_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CTrackAnimation_destoryAnimation_void_Callback();
					}
					else
						return this->CTrackAnimation::destoryAnimation();
				}
				virtual ev_bool frameRenderingQueued(_in const EarthView::World::Graphic::FrameEvent& evt)
				{
					if(m_EarthView_World_Spatial3D_CTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback(evt);
						return returnValue;
					}
					else
						return this->CTrackAnimation::frameRenderingQueued(evt);
				}
				virtual ev_bool frameStarted(_in const EarthView::World::Graphic::FrameEvent& evt)
				{
					if(m_EarthView_World_Spatial3D_CTrackAnimation_frameStarted_ev_bool_FrameEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CTrackAnimation_frameStarted_ev_bool_FrameEvent_Callback(evt);
						return returnValue;
					}
					else
						return this->CTrackAnimation::frameStarted(evt);
				}
				virtual ev_bool frameEnded(_in const EarthView::World::Graphic::FrameEvent& evt)
				{
					if(m_EarthView_World_Spatial3D_CTrackAnimation_frameEnded_ev_bool_FrameEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CTrackAnimation_frameEnded_ev_bool_FrameEvent_Callback(evt);
						return returnValue;
					}
					else
						return this->CTrackAnimation::frameEnded(evt);
				}
			};
			REGISTER_FACTORY_CLASS(CTrackAnimationProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CTrackAnimation_createAnimation_void_CSceneNode(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneNode* ref_node )
			{
				EarthView::World::Spatial3D::CTrackAnimation* ptrNativeObject = (EarthView::World::Spatial3D::CTrackAnimation*) pObjectXXXX;
				if (dynamic_cast<CTrackAnimationProxy*>((EarthView::World::Spatial3D::CTrackAnimation*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3D::CTrackAnimation::createAnimation(ref_node);
				else
					ptrNativeObject->createAnimation(ref_node);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CTrackAnimation_createAnimation_void_CSceneNode( void *pObjectXXXX, EarthView_World_Spatial3D_CTrackAnimation_createAnimation_void_CSceneNode_Callback* pCallback )
			{
				CTrackAnimationProxy* ptr = dynamic_cast<CTrackAnimationProxy*>((EarthView::World::Spatial3D::CTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CTrackAnimation_createAnimation_void_CSceneNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CTrackAnimation_createAnimation_void_CSceneNode_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneNode* ref_node )
			{
				EarthView::World::Spatial3D::CTrackAnimation* ptrNativeObject = (EarthView::World::Spatial3D::CTrackAnimation*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3D::CTrackAnimation::createAnimation(ref_node);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CTrackAnimation_destoryAnimation_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CTrackAnimation* ptrNativeObject = (EarthView::World::Spatial3D::CTrackAnimation*) pObjectXXXX;
				if (dynamic_cast<CTrackAnimationProxy*>((EarthView::World::Spatial3D::CTrackAnimation*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3D::CTrackAnimation::destoryAnimation();
				else
					ptrNativeObject->destoryAnimation();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CTrackAnimation_destoryAnimation_void( void *pObjectXXXX, EarthView_World_Spatial3D_CTrackAnimation_destoryAnimation_void_Callback* pCallback )
			{
				CTrackAnimationProxy* ptr = dynamic_cast<CTrackAnimationProxy*>((EarthView::World::Spatial3D::CTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CTrackAnimation_destoryAnimation_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CTrackAnimation_destoryAnimation_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CTrackAnimation* ptrNativeObject = (EarthView::World::Spatial3D::CTrackAnimation*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3D::CTrackAnimation::destoryAnimation();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CTrackAnimation_startAnimation_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CTrackAnimation* ptrNativeObject = (EarthView::World::Spatial3D::CTrackAnimation*) pObjectXXXX;
				ptrNativeObject->startAnimation();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CTrackAnimation_stopAnimation_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CTrackAnimation* ptrNativeObject = (EarthView::World::Spatial3D::CTrackAnimation*) pObjectXXXX;
				ptrNativeObject->stopAnimation();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CTrackAnimation_pauseAnimation_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CTrackAnimation* ptrNativeObject = (EarthView::World::Spatial3D::CTrackAnimation*) pObjectXXXX;
				ptrNativeObject->pauseAnimation();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CTrackAnimation_continueAnimation_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CTrackAnimation* ptrNativeObject = (EarthView::World::Spatial3D::CTrackAnimation*) pObjectXXXX;
				ptrNativeObject->continueAnimation();
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_CTrackAnimation_getLength_ev_real64(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CTrackAnimation* ptrNativeObject = (EarthView::World::Spatial3D::CTrackAnimation*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getLength();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CTrackAnimation_setTimeListener_void_CTrackAnimationTimeListener(void *pObjectXXXX, _in EarthView::World::Spatial3D::CTrackAnimationTimeListener* ref_listener )
			{
				EarthView::World::Spatial3D::CTrackAnimation* ptrNativeObject = (EarthView::World::Spatial3D::CTrackAnimation*) pObjectXXXX;
				ptrNativeObject->setTimeListener(ref_listener);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneNode*  _stdcall EarthView_World_Spatial3D_CTrackAnimation_getSceneNode_CSceneNode(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CTrackAnimation* ptrNativeObject = (EarthView::World::Spatial3D::CTrackAnimation*) pObjectXXXX;
				EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->getSceneNode();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CTrackAnimation_setLoop_void_bool(void *pObjectXXXX, _in bool loop )
			{
				EarthView::World::Spatial3D::CTrackAnimation* ptrNativeObject = (EarthView::World::Spatial3D::CTrackAnimation*) pObjectXXXX;
				ptrNativeObject->setLoop(loop);
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Spatial3D_CTrackAnimation_getLoop_bool(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CTrackAnimation* ptrNativeObject = (EarthView::World::Spatial3D::CTrackAnimation*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->getLoop();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CTrackAnimation_setTimeRatiio_void_ev_real64(void *pObjectXXXX, _in ev_real64 timeRatio )
			{
				EarthView::World::Spatial3D::CTrackAnimation* ptrNativeObject = (EarthView::World::Spatial3D::CTrackAnimation*) pObjectXXXX;
				ptrNativeObject->setTimeRatiio(timeRatio);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CTrackAnimation_setTrackListener_void_CAnimationTrackListener(void *pObjectXXXX, _in EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener* ref_listener )
			{
				EarthView::World::Spatial3D::CTrackAnimation* ptrNativeObject = (EarthView::World::Spatial3D::CTrackAnimation*) pObjectXXXX;
				ptrNativeObject->setTrackListener(ref_listener);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent(void *pObjectXXXX, _in const EarthView::World::Graphic::FrameEvent& evt )
			{
				EarthView::World::Spatial3D::CTrackAnimation* ptrNativeObject = (EarthView::World::Spatial3D::CTrackAnimation*) pObjectXXXX;
				if (dynamic_cast<CTrackAnimationProxy*>((EarthView::World::Spatial3D::CTrackAnimation*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CTrackAnimation::frameRenderingQueued(evt);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->frameRenderingQueued(evt);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent( void *pObjectXXXX, EarthView_World_Spatial3D_CTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback* pCallback )
			{
				CTrackAnimationProxy* ptr = dynamic_cast<CTrackAnimationProxy*>((EarthView::World::Spatial3D::CTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::FrameEvent& evt )
			{
				EarthView::World::Spatial3D::CTrackAnimation* ptrNativeObject = (EarthView::World::Spatial3D::CTrackAnimation*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CTrackAnimation::frameRenderingQueued(evt);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimationState*  _stdcall EarthView_World_Spatial3D_CTrackAnimation_getAnimationState_CAnimationState(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CTrackAnimation* ptrNativeObject = (EarthView::World::Spatial3D::CTrackAnimation*) pObjectXXXX;
				EarthView::World::Graphic::CAnimationState* objXXXX = ptrNativeObject->getAnimationState();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CTrackAnimation_frameStarted_ev_bool_FrameEvent( void *pObjectXXXX, EarthView_World_Spatial3D_CTrackAnimation_frameStarted_ev_bool_FrameEvent_Callback* pCallback )
			{
				CTrackAnimationProxy* ptr = dynamic_cast<CTrackAnimationProxy*>((EarthView::World::Spatial3D::CTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CTrackAnimation_frameStarted_ev_bool_FrameEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CTrackAnimation_frameEnded_ev_bool_FrameEvent( void *pObjectXXXX, EarthView_World_Spatial3D_CTrackAnimation_frameEnded_ev_bool_FrameEvent_Callback* pCallback )
			{
				CTrackAnimationProxy* ptr = dynamic_cast<CTrackAnimationProxy*>((EarthView::World::Spatial3D::CTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CTrackAnimation_frameEnded_ev_bool_FrameEvent(pCallback);
				}
			}
			typedef void  ( _stdcall EarthView_World_Spatial3D_CNodeTrackAnimation_createAnimation_void_CSceneNode_Callback)(_in EarthView::World::Graphic::CSceneNode* ref_node);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CNodeTrackAnimation_destoryAnimation_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CNodeTrackAnimation_frameStarted_ev_bool_FrameEvent_Callback)(_in const EarthView::World::Graphic::FrameEvent& evt);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback)(_in const EarthView::World::Graphic::FrameEvent& evt);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CNodeTrackAnimation_frameEnded_ev_bool_FrameEvent_Callback)(_in const EarthView::World::Graphic::FrameEvent& evt);
			class CNodeTrackAnimationProxy : public EarthView::World::Spatial3D::CNodeTrackAnimation
			{
			private:
				EarthView_World_Spatial3D_CNodeTrackAnimation_createAnimation_void_CSceneNode_Callback* m_EarthView_World_Spatial3D_CNodeTrackAnimation_createAnimation_void_CSceneNode_Callback;
				EarthView_World_Spatial3D_CNodeTrackAnimation_destoryAnimation_void_Callback* m_EarthView_World_Spatial3D_CNodeTrackAnimation_destoryAnimation_void_Callback;
				EarthView_World_Spatial3D_CNodeTrackAnimation_frameStarted_ev_bool_FrameEvent_Callback* m_EarthView_World_Spatial3D_CNodeTrackAnimation_frameStarted_ev_bool_FrameEvent_Callback;
				EarthView_World_Spatial3D_CNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback* m_EarthView_World_Spatial3D_CNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback;
				EarthView_World_Spatial3D_CNodeTrackAnimation_frameEnded_ev_bool_FrameEvent_Callback* m_EarthView_World_Spatial3D_CNodeTrackAnimation_frameEnded_ev_bool_FrameEvent_Callback;
			public:
				CNodeTrackAnimationProxy(EarthView::World::Core::CNameValuePairList *pList) : CNodeTrackAnimation(pList)
				{
					m_EarthView_World_Spatial3D_CNodeTrackAnimation_createAnimation_void_CSceneNode_Callback = NULL;
					m_EarthView_World_Spatial3D_CNodeTrackAnimation_destoryAnimation_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CNodeTrackAnimation_frameStarted_ev_bool_FrameEvent_Callback = NULL;
					m_EarthView_World_Spatial3D_CNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback = NULL;
					m_EarthView_World_Spatial3D_CNodeTrackAnimation_frameEnded_ev_bool_FrameEvent_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial3D_CNodeTrackAnimation_createAnimation_void_CSceneNode(EarthView_World_Spatial3D_CNodeTrackAnimation_createAnimation_void_CSceneNode_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CNodeTrackAnimation_createAnimation_void_CSceneNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CNodeTrackAnimation_destoryAnimation_void(EarthView_World_Spatial3D_CNodeTrackAnimation_destoryAnimation_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CNodeTrackAnimation_destoryAnimation_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CNodeTrackAnimation_frameStarted_ev_bool_FrameEvent(EarthView_World_Spatial3D_CNodeTrackAnimation_frameStarted_ev_bool_FrameEvent_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CNodeTrackAnimation_frameStarted_ev_bool_FrameEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent(EarthView_World_Spatial3D_CNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CNodeTrackAnimation_frameEnded_ev_bool_FrameEvent(EarthView_World_Spatial3D_CNodeTrackAnimation_frameEnded_ev_bool_FrameEvent_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CNodeTrackAnimation_frameEnded_ev_bool_FrameEvent_Callback = pCallback;
				}
				virtual void createAnimation(_in EarthView::World::Graphic::CSceneNode* ref_node)
				{
					if(m_EarthView_World_Spatial3D_CNodeTrackAnimation_createAnimation_void_CSceneNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CNodeTrackAnimation_createAnimation_void_CSceneNode_Callback(ref_node);
					}
					else
						return this->CNodeTrackAnimation::createAnimation(ref_node);
				}
				virtual void destoryAnimation()
				{
					if(m_EarthView_World_Spatial3D_CNodeTrackAnimation_destoryAnimation_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CNodeTrackAnimation_destoryAnimation_void_Callback();
					}
					else
						return this->CNodeTrackAnimation::destoryAnimation();
				}
				virtual ev_bool frameRenderingQueued(_in const EarthView::World::Graphic::FrameEvent& evt)
				{
					if(m_EarthView_World_Spatial3D_CNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback(evt);
						return returnValue;
					}
					else
						return this->CNodeTrackAnimation::frameRenderingQueued(evt);
				}
				virtual ev_bool frameStarted(_in const EarthView::World::Graphic::FrameEvent& evt)
				{
					if(m_EarthView_World_Spatial3D_CNodeTrackAnimation_frameStarted_ev_bool_FrameEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CNodeTrackAnimation_frameStarted_ev_bool_FrameEvent_Callback(evt);
						return returnValue;
					}
					else
						return this->CNodeTrackAnimation::frameStarted(evt);
				}
				virtual ev_bool frameEnded(_in const EarthView::World::Graphic::FrameEvent& evt)
				{
					if(m_EarthView_World_Spatial3D_CNodeTrackAnimation_frameEnded_ev_bool_FrameEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CNodeTrackAnimation_frameEnded_ev_bool_FrameEvent_Callback(evt);
						return returnValue;
					}
					else
						return this->CNodeTrackAnimation::frameEnded(evt);
				}
			};
			REGISTER_FACTORY_CLASS(CNodeTrackAnimationProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CNodeTrackAnimation_createAnimation_void_CSceneNode(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneNode* ref_node )
			{
				EarthView::World::Spatial3D::CNodeTrackAnimation* ptrNativeObject = (EarthView::World::Spatial3D::CNodeTrackAnimation*) pObjectXXXX;
				if (dynamic_cast<CNodeTrackAnimationProxy*>((EarthView::World::Spatial3D::CNodeTrackAnimation*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3D::CNodeTrackAnimation::createAnimation(ref_node);
				else
					ptrNativeObject->createAnimation(ref_node);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CNodeTrackAnimation_createAnimation_void_CSceneNode( void *pObjectXXXX, EarthView_World_Spatial3D_CNodeTrackAnimation_createAnimation_void_CSceneNode_Callback* pCallback )
			{
				CNodeTrackAnimationProxy* ptr = dynamic_cast<CNodeTrackAnimationProxy*>((EarthView::World::Spatial3D::CNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CNodeTrackAnimation_createAnimation_void_CSceneNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CNodeTrackAnimation_createAnimation_void_CSceneNode_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneNode* ref_node )
			{
				EarthView::World::Spatial3D::CNodeTrackAnimation* ptrNativeObject = (EarthView::World::Spatial3D::CNodeTrackAnimation*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3D::CNodeTrackAnimation::createAnimation(ref_node);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CNodeTrackAnimation_setInterpolationMode_void_InterpolationMode(void *pObjectXXXX, _in int interpolationMode )
			{
				EarthView::World::Spatial3D::CNodeTrackAnimation* ptrNativeObject = (EarthView::World::Spatial3D::CNodeTrackAnimation*) pObjectXXXX;
				ptrNativeObject->setInterpolationMode((EarthView::World::Graphic::CAnimation::InterpolationMode)interpolationMode);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CNodeTrackAnimation_setRotationInterpolationMode_void_RotationInterpolationMode(void *pObjectXXXX, _in int rotationInterpolationMode )
			{
				EarthView::World::Spatial3D::CNodeTrackAnimation* ptrNativeObject = (EarthView::World::Spatial3D::CNodeTrackAnimation*) pObjectXXXX;
				ptrNativeObject->setRotationInterpolationMode((EarthView::World::Graphic::CAnimation::RotationInterpolationMode)rotationInterpolationMode);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CNodeTrackAnimation_insertControlPoint_void_ev_real64_CControlPoint(void *pObjectXXXX, _in ev_real64 time, _in const void* controlPoint )
			{
				EarthView::World::Spatial3D::CNodeTrackAnimation* ptrNativeObject = (EarthView::World::Spatial3D::CNodeTrackAnimation*) pObjectXXXX;
				ptrNativeObject->insertControlPoint(time, *(EarthView::World::Spatial3D::CControlPoint*)controlPoint);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CNodeTrackAnimation_setControlPointMap_void_CControlPointMap(void *pObjectXXXX, _in const void* controlPointMap )
			{
				EarthView::World::Spatial3D::CNodeTrackAnimation* ptrNativeObject = (EarthView::World::Spatial3D::CNodeTrackAnimation*) pObjectXXXX;
				ptrNativeObject->setControlPointMap(*(EarthView::World::Spatial3D::CControlPointMap*)controlPointMap);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CNodeTrackAnimation_destoryAnimation_void( void *pObjectXXXX, EarthView_World_Spatial3D_CNodeTrackAnimation_destoryAnimation_void_Callback* pCallback )
			{
				CNodeTrackAnimationProxy* ptr = dynamic_cast<CNodeTrackAnimationProxy*>((EarthView::World::Spatial3D::CNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CNodeTrackAnimation_destoryAnimation_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CNodeTrackAnimation_frameStarted_ev_bool_FrameEvent( void *pObjectXXXX, EarthView_World_Spatial3D_CNodeTrackAnimation_frameStarted_ev_bool_FrameEvent_Callback* pCallback )
			{
				CNodeTrackAnimationProxy* ptr = dynamic_cast<CNodeTrackAnimationProxy*>((EarthView::World::Spatial3D::CNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CNodeTrackAnimation_frameStarted_ev_bool_FrameEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent( void *pObjectXXXX, EarthView_World_Spatial3D_CNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback* pCallback )
			{
				CNodeTrackAnimationProxy* ptr = dynamic_cast<CNodeTrackAnimationProxy*>((EarthView::World::Spatial3D::CNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CNodeTrackAnimation_frameEnded_ev_bool_FrameEvent( void *pObjectXXXX, EarthView_World_Spatial3D_CNodeTrackAnimation_frameEnded_ev_bool_FrameEvent_Callback* pCallback )
			{
				CNodeTrackAnimationProxy* ptr = dynamic_cast<CNodeTrackAnimationProxy*>((EarthView::World::Spatial3D::CNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CNodeTrackAnimation_frameEnded_ev_bool_FrameEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::CNodeTrackAnimation*  _stdcall EarthView_World_Spatial3D_CNodeTrackAnimationPtr_get_CNodeTrackAnimation(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CNodeTrackAnimationPtr* ptrNativeObject = (EarthView::World::Spatial3D::CNodeTrackAnimationPtr*) pObjectXXXX;
				EarthView::World::Spatial3D::CNodeTrackAnimation* objXXXX = ptrNativeObject->get();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CNodeTrackAnimationPtr_OperatorAssign_CNodeTrackAnimationPtr_CNodeTrackAnimationPtr(void *pObjXXXX, _in const void* r )
			{
				EarthView::World::Spatial3D::CNodeTrackAnimationPtr& objXXXX = *((EarthView::World::Spatial3D::CNodeTrackAnimationPtr*) pObjXXXX);
				objXXXX = *(EarthView::World::Spatial3D::CNodeTrackAnimationPtr*)r;
				EarthView::World::Spatial3D::CNodeTrackAnimationPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CTrackAnimationVector_push_back_void_CTrackAnimation(void *pObjectXXXX, _in EarthView::World::Spatial3D::CTrackAnimation*& t )
			{
				EarthView::World::Spatial3D::CTrackAnimationVector* ptrNativeObject = (EarthView::World::Spatial3D::CTrackAnimationVector*) pObjectXXXX;
				ptrNativeObject->push_back(t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CTrackAnimationVector_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CTrackAnimationVector* ptrNativeObject = (EarthView::World::Spatial3D::CTrackAnimationVector*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::CTrackAnimation*  _stdcall EarthView_World_Spatial3D_CTrackAnimationVector_front_CTrackAnimation(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CTrackAnimationVector* ptrNativeObject = (EarthView::World::Spatial3D::CTrackAnimationVector*) pObjectXXXX;
				EarthView::World::Spatial3D::CTrackAnimation* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::CTrackAnimation*  _stdcall EarthView_World_Spatial3D_CTrackAnimationVector_back_CTrackAnimation(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CTrackAnimationVector* ptrNativeObject = (EarthView::World::Spatial3D::CTrackAnimationVector*) pObjectXXXX;
				EarthView::World::Spatial3D::CTrackAnimation* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CTrackAnimationVector_insert_void_ev_uint32_CTrackAnimation(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Spatial3D::CTrackAnimation*& t )
			{
				EarthView::World::Spatial3D::CTrackAnimationVector* ptrNativeObject = (EarthView::World::Spatial3D::CTrackAnimationVector*) pObjectXXXX;
				ptrNativeObject->insert(pos, t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CTrackAnimationVector_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Spatial3D::CTrackAnimationVector* ptrNativeObject = (EarthView::World::Spatial3D::CTrackAnimationVector*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CTrackAnimationVector_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CTrackAnimationVector* ptrNativeObject = (EarthView::World::Spatial3D::CTrackAnimationVector*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::CTrackAnimation*  _stdcall EarthView_World_Spatial3D_CTrackAnimationVector_OperatorIndex_CTrackAnimation_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Spatial3D::CTrackAnimationVector& objYYYY = *(EarthView::World::Spatial3D::CTrackAnimationVector*) pObjXXXX;
				EarthView::World::Spatial3D::CTrackAnimation* objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::CTrackAnimation*  _stdcall EarthView_World_Spatial3D_CTrackAnimationVector_at_CTrackAnimation_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Spatial3D::CTrackAnimationVector* ptrNativeObject = (EarthView::World::Spatial3D::CTrackAnimationVector*) pObjectXXXX;
				EarthView::World::Spatial3D::CTrackAnimation* objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_CTrackAnimationVector_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CTrackAnimationVector* ptrNativeObject = (EarthView::World::Spatial3D::CTrackAnimationVector*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CTrackAnimationVector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Spatial3D::CTrackAnimationVector* ptrNativeObject = (EarthView::World::Spatial3D::CTrackAnimationVector*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CTrackAnimationVector_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Spatial3D::CTrackAnimationVector* ptrNativeObject = (EarthView::World::Spatial3D::CTrackAnimationVector*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CTrackAnimationVector_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CTrackAnimationVector* ptrNativeObject = (EarthView::World::Spatial3D::CTrackAnimationVector*) pObjectXXXX;
				ptrNativeObject->clear();
			}
		}
	}
}
