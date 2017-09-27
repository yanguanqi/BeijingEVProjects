/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/edittask.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditTask_getName_EVString_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial2D_Controls_CEditTask_getTaskType_EVEditTaskType_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CEditTask_activate_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CEditTask_deactivate_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CEditTask_finish_void_Callback)();
				class CEditTaskProxy : public EarthView::World::Spatial2D::Controls::CEditTask
				{
				private:
					EarthView_World_Spatial2D_Controls_CEditTask_getName_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CEditTask_getName_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CEditTask_getTaskType_EVEditTaskType_Callback* m_EarthView_World_Spatial2D_Controls_CEditTask_getTaskType_EVEditTaskType_Callback;
					EarthView_World_Spatial2D_Controls_CEditTask_activate_void_Callback* m_EarthView_World_Spatial2D_Controls_CEditTask_activate_void_Callback;
					EarthView_World_Spatial2D_Controls_CEditTask_deactivate_void_Callback* m_EarthView_World_Spatial2D_Controls_CEditTask_deactivate_void_Callback;
					EarthView_World_Spatial2D_Controls_CEditTask_finish_void_Callback* m_EarthView_World_Spatial2D_Controls_CEditTask_finish_void_Callback;
				public:
					CEditTaskProxy(EarthView::World::Core::CNameValuePairList *pList) : CEditTask(pList)
					{
						m_EarthView_World_Spatial2D_Controls_CEditTask_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditTask_getTaskType_EVEditTaskType_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditTask_activate_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditTask_deactivate_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditTask_finish_void_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditTask_getName_EVString(EarthView_World_Spatial2D_Controls_CEditTask_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditTask_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditTask_getTaskType_EVEditTaskType(EarthView_World_Spatial2D_Controls_CEditTask_getTaskType_EVEditTaskType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditTask_getTaskType_EVEditTaskType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditTask_activate_void(EarthView_World_Spatial2D_Controls_CEditTask_activate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditTask_activate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditTask_deactivate_void(EarthView_World_Spatial2D_Controls_CEditTask_deactivate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditTask_deactivate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditTask_finish_void(EarthView_World_Spatial2D_Controls_CEditTask_finish_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditTask_finish_void_Callback = pCallback;
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditTask_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CEditTask_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEditTask::getName();
					}
					virtual EarthView::World::Spatial2D::Controls::EVEditTaskType getTaskType() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditTask_getTaskType_EVEditTaskType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial2D::Controls::EVEditTaskType returnValue = (EarthView::World::Spatial2D::Controls::EVEditTaskType)m_EarthView_World_Spatial2D_Controls_CEditTask_getTaskType_EVEditTaskType_Callback();
							return returnValue;
						}
						else
							return this->CEditTask::getTaskType();
					}
					virtual void activate()
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditTask_activate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CEditTask_activate_void_Callback();
						}
						else
							return this->CEditTask::activate();
					}
					virtual void deactivate()
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditTask_deactivate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CEditTask_deactivate_void_Callback();
						}
						else
							return this->CEditTask::deactivate();
					}
					virtual void finish()
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditTask_finish_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CEditTask_finish_void_Callback();
						}
						else
							return this->CEditTask::finish();
					}
				};
				REGISTER_FACTORY_CLASS(CEditTaskProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CEditTask_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditTask*) pObjectXXXX;
					if (dynamic_cast<CEditTaskProxy*>((EarthView::World::Spatial2D::Controls::CEditTask*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditTask::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditTask_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditTask_getName_EVString_Callback* pCallback )
				{
					CEditTaskProxy* ptr = dynamic_cast<CEditTaskProxy*>((EarthView::World::Spatial2D::Controls::CEditTask*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditTask_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CEditTask_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditTask*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditTask::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Controls_CEditTask_getTaskType_EVEditTaskType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditTask*) pObjectXXXX;
					if (dynamic_cast<CEditTaskProxy*>((EarthView::World::Spatial2D::Controls::CEditTask*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial2D::Controls::EVEditTaskType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditTask::getTaskType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial2D::Controls::EVEditTaskType objXXXX = ptrNativeObject->getTaskType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditTask_getTaskType_EVEditTaskType( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditTask_getTaskType_EVEditTaskType_Callback* pCallback )
				{
					CEditTaskProxy* ptr = dynamic_cast<CEditTaskProxy*>((EarthView::World::Spatial2D::Controls::CEditTask*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditTask_getTaskType_EVEditTaskType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Controls_CEditTask_getTaskType_EVEditTaskType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditTask*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::EVEditTaskType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditTask::getTaskType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEditTask_activate_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CEditTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditTask*) pObjectXXXX;
					if (dynamic_cast<CEditTaskProxy*>((EarthView::World::Spatial2D::Controls::CEditTask*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditTask::activate();
					else
						ptrNativeObject->activate();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditTask_activate_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditTask_activate_void_Callback* pCallback )
				{
					CEditTaskProxy* ptr = dynamic_cast<CEditTaskProxy*>((EarthView::World::Spatial2D::Controls::CEditTask*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditTask_activate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEditTask_activate_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CEditTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditTask*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditTask::activate();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEditTask_deactivate_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CEditTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditTask*) pObjectXXXX;
					if (dynamic_cast<CEditTaskProxy*>((EarthView::World::Spatial2D::Controls::CEditTask*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditTask::deactivate();
					else
						ptrNativeObject->deactivate();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditTask_deactivate_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditTask_deactivate_void_Callback* pCallback )
				{
					CEditTaskProxy* ptr = dynamic_cast<CEditTaskProxy*>((EarthView::World::Spatial2D::Controls::CEditTask*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditTask_deactivate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEditTask_deactivate_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CEditTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditTask*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditTask::deactivate();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEditTask_finish_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CEditTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditTask*) pObjectXXXX;
					if (dynamic_cast<CEditTaskProxy*>((EarthView::World::Spatial2D::Controls::CEditTask*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditTask::finish();
					else
						ptrNativeObject->finish();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditTask_finish_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditTask_finish_void_Callback* pCallback )
				{
					CEditTaskProxy* ptr = dynamic_cast<CEditTaskProxy*>((EarthView::World::Spatial2D::Controls::CEditTask*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditTask_finish_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEditTask_finish_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CEditTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditTask*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditTask::finish();
				}
			}
		}
	}
}
