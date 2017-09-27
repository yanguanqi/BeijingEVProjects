/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/globenodetrack.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_createAnimation_void_CSceneNode_Callback)(_in EarthView::World::Graphic::CSceneNode* ref_node);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_destoryAnimation_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_frameStarted_ev_bool_FrameEvent_Callback)(_in const EarthView::World::Graphic::FrameEvent& evt);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback)(_in const EarthView::World::Graphic::FrameEvent& evt);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_frameEnded_ev_bool_FrameEvent_Callback)(_in const EarthView::World::Graphic::FrameEvent& evt);
			class CGlobeNodeTrackAnimationProxy : public EarthView::World::Spatial3D::CGlobeNodeTrackAnimation
			{
			private:
				EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_createAnimation_void_CSceneNode_Callback* m_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_createAnimation_void_CSceneNode_Callback;
				EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_destoryAnimation_void_Callback* m_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_destoryAnimation_void_Callback;
				EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_frameStarted_ev_bool_FrameEvent_Callback* m_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_frameStarted_ev_bool_FrameEvent_Callback;
				EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback* m_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback;
				EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_frameEnded_ev_bool_FrameEvent_Callback* m_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_frameEnded_ev_bool_FrameEvent_Callback;
			public:
				CGlobeNodeTrackAnimationProxy(EarthView::World::Core::CNameValuePairList *pList) : CGlobeNodeTrackAnimation(pList)
				{
					m_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_createAnimation_void_CSceneNode_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_destoryAnimation_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_frameStarted_ev_bool_FrameEvent_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_frameEnded_ev_bool_FrameEvent_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_createAnimation_void_CSceneNode(EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_createAnimation_void_CSceneNode_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_createAnimation_void_CSceneNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_destoryAnimation_void(EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_destoryAnimation_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_destoryAnimation_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_frameStarted_ev_bool_FrameEvent(EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_frameStarted_ev_bool_FrameEvent_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_frameStarted_ev_bool_FrameEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent(EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_frameEnded_ev_bool_FrameEvent(EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_frameEnded_ev_bool_FrameEvent_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_frameEnded_ev_bool_FrameEvent_Callback = pCallback;
				}
				virtual void createAnimation(_in EarthView::World::Graphic::CSceneNode* ref_node)
				{
					if(m_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_createAnimation_void_CSceneNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_createAnimation_void_CSceneNode_Callback(ref_node);
					}
					else
						return this->CGlobeNodeTrackAnimation::createAnimation(ref_node);
				}
				virtual void destoryAnimation()
				{
					if(m_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_destoryAnimation_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_destoryAnimation_void_Callback();
					}
					else
						return this->CGlobeNodeTrackAnimation::destoryAnimation();
				}
				virtual ev_bool frameRenderingQueued(_in const EarthView::World::Graphic::FrameEvent& evt)
				{
					if(m_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback(evt);
						return returnValue;
					}
					else
						return this->CGlobeNodeTrackAnimation::frameRenderingQueued(evt);
				}
				virtual ev_bool frameStarted(_in const EarthView::World::Graphic::FrameEvent& evt)
				{
					if(m_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_frameStarted_ev_bool_FrameEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_frameStarted_ev_bool_FrameEvent_Callback(evt);
						return returnValue;
					}
					else
						return this->CGlobeNodeTrackAnimation::frameStarted(evt);
				}
				virtual ev_bool frameEnded(_in const EarthView::World::Graphic::FrameEvent& evt)
				{
					if(m_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_frameEnded_ev_bool_FrameEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_frameEnded_ev_bool_FrameEvent_Callback(evt);
						return returnValue;
					}
					else
						return this->CGlobeNodeTrackAnimation::frameEnded(evt);
				}
			};
			REGISTER_FACTORY_CLASS(CGlobeNodeTrackAnimationProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_createAnimation_void_CSceneNode(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneNode* ref_node )
			{
				EarthView::World::Spatial3D::CGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeNodeTrackAnimation*) pObjectXXXX;
				if (dynamic_cast<CGlobeNodeTrackAnimationProxy*>((EarthView::World::Spatial3D::CGlobeNodeTrackAnimation*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3D::CGlobeNodeTrackAnimation::createAnimation(ref_node);
				else
					ptrNativeObject->createAnimation(ref_node);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_createAnimation_void_CSceneNode( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_createAnimation_void_CSceneNode_Callback* pCallback )
			{
				CGlobeNodeTrackAnimationProxy* ptr = dynamic_cast<CGlobeNodeTrackAnimationProxy*>((EarthView::World::Spatial3D::CGlobeNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_createAnimation_void_CSceneNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_createAnimation_void_CSceneNode_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneNode* ref_node )
			{
				EarthView::World::Spatial3D::CGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeNodeTrackAnimation*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3D::CGlobeNodeTrackAnimation::createAnimation(ref_node);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_destoryAnimation_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeNodeTrackAnimation*) pObjectXXXX;
				if (dynamic_cast<CGlobeNodeTrackAnimationProxy*>((EarthView::World::Spatial3D::CGlobeNodeTrackAnimation*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3D::CGlobeNodeTrackAnimation::destoryAnimation();
				else
					ptrNativeObject->destoryAnimation();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_destoryAnimation_void( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_destoryAnimation_void_Callback* pCallback )
			{
				CGlobeNodeTrackAnimationProxy* ptr = dynamic_cast<CGlobeNodeTrackAnimationProxy*>((EarthView::World::Spatial3D::CGlobeNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_destoryAnimation_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_destoryAnimation_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeNodeTrackAnimation*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3D::CGlobeNodeTrackAnimation::destoryAnimation();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_setNodeUpAxis_void_EVString(void *pObjectXXXX, _in const char* upAxis )
			{
				EarthView::World::Core::ev_string upAxis1 = upAxis;
				const EarthView::World::Spatial3D::CGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeNodeTrackAnimation*) pObjectXXXX;
				ptrNativeObject->setNodeUpAxis(upAxis1);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_getNodeUpAxis_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeNodeTrackAnimation*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getNodeUpAxis();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_getPosition_CVector3(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeNodeTrackAnimation*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getPosition();
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_getHeading_ev_real64(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeNodeTrackAnimation*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getHeading();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_insertGlobePoint_void_ev_real64_CGlobeControlPoint(void *pObjectXXXX, _in ev_real64 time, _in const void* globeControlPoint )
			{
				EarthView::World::Spatial3D::CGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeNodeTrackAnimation*) pObjectXXXX;
				ptrNativeObject->insertGlobePoint(time, *(EarthView::World::Spatial3D::CGlobeControlPoint*)globeControlPoint);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_frameStarted_ev_bool_FrameEvent( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_frameStarted_ev_bool_FrameEvent_Callback* pCallback )
			{
				CGlobeNodeTrackAnimationProxy* ptr = dynamic_cast<CGlobeNodeTrackAnimationProxy*>((EarthView::World::Spatial3D::CGlobeNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_frameStarted_ev_bool_FrameEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback* pCallback )
			{
				CGlobeNodeTrackAnimationProxy* ptr = dynamic_cast<CGlobeNodeTrackAnimationProxy*>((EarthView::World::Spatial3D::CGlobeNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_frameEnded_ev_bool_FrameEvent( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_frameEnded_ev_bool_FrameEvent_Callback* pCallback )
			{
				CGlobeNodeTrackAnimationProxy* ptr = dynamic_cast<CGlobeNodeTrackAnimationProxy*>((EarthView::World::Spatial3D::CGlobeNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_frameEnded_ev_bool_FrameEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::CGlobeNodeTrackAnimation*  _stdcall EarthView_World_Spatial3D_CGlobeNodeTrackAnimationPtr_get_CGlobeNodeTrackAnimation(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeNodeTrackAnimationPtr* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeNodeTrackAnimationPtr*) pObjectXXXX;
				EarthView::World::Spatial3D::CGlobeNodeTrackAnimation* objXXXX = ptrNativeObject->get();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CGlobeNodeTrackAnimationPtr_OperatorAssign_CGlobeNodeTrackAnimationPtr_CGlobeNodeTrackAnimationPtr(void *pObjXXXX, _in const void* r )
			{
				EarthView::World::Spatial3D::CGlobeNodeTrackAnimationPtr& objXXXX = *((EarthView::World::Spatial3D::CGlobeNodeTrackAnimationPtr*) pObjXXXX);
				objXXXX = *(EarthView::World::Spatial3D::CGlobeNodeTrackAnimationPtr*)r;
				EarthView::World::Spatial3D::CGlobeNodeTrackAnimationPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
		}
	}
}
