/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/featuremirrortask.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_getName_EVString_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_getTaskType_EVEditTaskType_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_activate_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_deactivate_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_finish_void_Callback)();
				class CFeatureMirrorTaskProxy : public EarthView::World::Spatial2D::Controls::CFeatureMirrorTask
				{
				private:
					EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_getName_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_getName_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_getTaskType_EVEditTaskType_Callback* m_EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_getTaskType_EVEditTaskType_Callback;
					EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_activate_void_Callback* m_EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_activate_void_Callback;
					EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_deactivate_void_Callback* m_EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_deactivate_void_Callback;
					EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_finish_void_Callback* m_EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_finish_void_Callback;
				public:
					CFeatureMirrorTaskProxy(EarthView::World::Core::CNameValuePairList *pList) : CFeatureMirrorTask(pList)
					{
						m_EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_getTaskType_EVEditTaskType_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_activate_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_deactivate_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_finish_void_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_getName_EVString(EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_getTaskType_EVEditTaskType(EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_getTaskType_EVEditTaskType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_getTaskType_EVEditTaskType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_activate_void(EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_activate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_activate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_deactivate_void(EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_deactivate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_deactivate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_finish_void(EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_finish_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_finish_void_Callback = pCallback;
					}
					virtual EarthView::World::Spatial2D::Controls::EVEditTaskType getTaskType() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_getTaskType_EVEditTaskType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial2D::Controls::EVEditTaskType returnValue = (EarthView::World::Spatial2D::Controls::EVEditTaskType)m_EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_getTaskType_EVEditTaskType_Callback();
							return returnValue;
						}
						else
							return this->CFeatureMirrorTask::getTaskType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CFeatureMirrorTask::getName();
					}
					virtual void activate()
					{
						if(m_EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_activate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_activate_void_Callback();
						}
						else
							return this->CFeatureMirrorTask::activate();
					}
					virtual void deactivate()
					{
						if(m_EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_deactivate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_deactivate_void_Callback();
						}
						else
							return this->CFeatureMirrorTask::deactivate();
					}
					virtual void finish()
					{
						if(m_EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_finish_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_finish_void_Callback();
						}
						else
							return this->CFeatureMirrorTask::finish();
					}
				};
				REGISTER_FACTORY_CLASS(CFeatureMirrorTaskProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_getTaskType_EVEditTaskType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CFeatureMirrorTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CFeatureMirrorTask*) pObjectXXXX;
					if (dynamic_cast<CFeatureMirrorTaskProxy*>((EarthView::World::Spatial2D::Controls::CFeatureMirrorTask*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial2D::Controls::EVEditTaskType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CFeatureMirrorTask::getTaskType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial2D::Controls::EVEditTaskType objXXXX = ptrNativeObject->getTaskType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_getTaskType_EVEditTaskType( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_getTaskType_EVEditTaskType_Callback* pCallback )
				{
					CFeatureMirrorTaskProxy* ptr = dynamic_cast<CFeatureMirrorTaskProxy*>((EarthView::World::Spatial2D::Controls::CFeatureMirrorTask*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_getTaskType_EVEditTaskType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_getTaskType_EVEditTaskType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CFeatureMirrorTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CFeatureMirrorTask*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::EVEditTaskType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CFeatureMirrorTask::getTaskType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CFeatureMirrorTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CFeatureMirrorTask*) pObjectXXXX;
					if (dynamic_cast<CFeatureMirrorTaskProxy*>((EarthView::World::Spatial2D::Controls::CFeatureMirrorTask*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CFeatureMirrorTask::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_getName_EVString_Callback* pCallback )
				{
					CFeatureMirrorTaskProxy* ptr = dynamic_cast<CFeatureMirrorTaskProxy*>((EarthView::World::Spatial2D::Controls::CFeatureMirrorTask*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CFeatureMirrorTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CFeatureMirrorTask*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CFeatureMirrorTask::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_activate_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CFeatureMirrorTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CFeatureMirrorTask*) pObjectXXXX;
					if (dynamic_cast<CFeatureMirrorTaskProxy*>((EarthView::World::Spatial2D::Controls::CFeatureMirrorTask*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CFeatureMirrorTask::activate();
					else
						ptrNativeObject->activate();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_activate_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_activate_void_Callback* pCallback )
				{
					CFeatureMirrorTaskProxy* ptr = dynamic_cast<CFeatureMirrorTaskProxy*>((EarthView::World::Spatial2D::Controls::CFeatureMirrorTask*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_activate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_activate_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CFeatureMirrorTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CFeatureMirrorTask*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CFeatureMirrorTask::activate();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_deactivate_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CFeatureMirrorTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CFeatureMirrorTask*) pObjectXXXX;
					if (dynamic_cast<CFeatureMirrorTaskProxy*>((EarthView::World::Spatial2D::Controls::CFeatureMirrorTask*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CFeatureMirrorTask::deactivate();
					else
						ptrNativeObject->deactivate();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_deactivate_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_deactivate_void_Callback* pCallback )
				{
					CFeatureMirrorTaskProxy* ptr = dynamic_cast<CFeatureMirrorTaskProxy*>((EarthView::World::Spatial2D::Controls::CFeatureMirrorTask*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_deactivate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_deactivate_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CFeatureMirrorTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CFeatureMirrorTask*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CFeatureMirrorTask::deactivate();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_setGeometry_void_IGeometry(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IGeometry* pGeometry )
				{
					EarthView::World::Spatial2D::Controls::CFeatureMirrorTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CFeatureMirrorTask*) pObjectXXXX;
					ptrNativeObject->setGeometry(pGeometry);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_finish_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CFeatureMirrorTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CFeatureMirrorTask*) pObjectXXXX;
					if (dynamic_cast<CFeatureMirrorTaskProxy*>((EarthView::World::Spatial2D::Controls::CFeatureMirrorTask*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CFeatureMirrorTask::finish();
					else
						ptrNativeObject->finish();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_finish_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_finish_void_Callback* pCallback )
				{
					CFeatureMirrorTaskProxy* ptr = dynamic_cast<CFeatureMirrorTaskProxy*>((EarthView::World::Spatial2D::Controls::CFeatureMirrorTask*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_finish_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CFeatureMirrorTask_finish_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CFeatureMirrorTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CFeatureMirrorTask*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CFeatureMirrorTask::finish();
				}
			}
		}
	}
}
