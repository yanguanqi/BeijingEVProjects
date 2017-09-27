/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/combineparttask.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CCombinePartTask_getName_EVString_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial2D_Controls_CCombinePartTask_getTaskType_EVEditTaskType_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CCombinePartTask_activate_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CCombinePartTask_deactivate_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CCombinePartTask_finish_void_Callback)();
				class CCombinePartTaskProxy : public EarthView::World::Spatial2D::Controls::CCombinePartTask
				{
				private:
					EarthView_World_Spatial2D_Controls_CCombinePartTask_getName_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CCombinePartTask_getName_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CCombinePartTask_getTaskType_EVEditTaskType_Callback* m_EarthView_World_Spatial2D_Controls_CCombinePartTask_getTaskType_EVEditTaskType_Callback;
					EarthView_World_Spatial2D_Controls_CCombinePartTask_activate_void_Callback* m_EarthView_World_Spatial2D_Controls_CCombinePartTask_activate_void_Callback;
					EarthView_World_Spatial2D_Controls_CCombinePartTask_deactivate_void_Callback* m_EarthView_World_Spatial2D_Controls_CCombinePartTask_deactivate_void_Callback;
					EarthView_World_Spatial2D_Controls_CCombinePartTask_finish_void_Callback* m_EarthView_World_Spatial2D_Controls_CCombinePartTask_finish_void_Callback;
				public:
					CCombinePartTaskProxy(EarthView::World::Core::CNameValuePairList *pList) : CCombinePartTask(pList)
					{
						m_EarthView_World_Spatial2D_Controls_CCombinePartTask_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CCombinePartTask_getTaskType_EVEditTaskType_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CCombinePartTask_activate_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CCombinePartTask_deactivate_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CCombinePartTask_finish_void_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CCombinePartTask_getName_EVString(EarthView_World_Spatial2D_Controls_CCombinePartTask_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CCombinePartTask_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CCombinePartTask_getTaskType_EVEditTaskType(EarthView_World_Spatial2D_Controls_CCombinePartTask_getTaskType_EVEditTaskType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CCombinePartTask_getTaskType_EVEditTaskType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CCombinePartTask_activate_void(EarthView_World_Spatial2D_Controls_CCombinePartTask_activate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CCombinePartTask_activate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CCombinePartTask_deactivate_void(EarthView_World_Spatial2D_Controls_CCombinePartTask_deactivate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CCombinePartTask_deactivate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CCombinePartTask_finish_void(EarthView_World_Spatial2D_Controls_CCombinePartTask_finish_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CCombinePartTask_finish_void_Callback = pCallback;
					}
					virtual EarthView::World::Spatial2D::Controls::EVEditTaskType getTaskType() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CCombinePartTask_getTaskType_EVEditTaskType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial2D::Controls::EVEditTaskType returnValue = (EarthView::World::Spatial2D::Controls::EVEditTaskType)m_EarthView_World_Spatial2D_Controls_CCombinePartTask_getTaskType_EVEditTaskType_Callback();
							return returnValue;
						}
						else
							return this->CCombinePartTask::getTaskType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CCombinePartTask_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CCombinePartTask_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CCombinePartTask::getName();
					}
					virtual void activate()
					{
						if(m_EarthView_World_Spatial2D_Controls_CCombinePartTask_activate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CCombinePartTask_activate_void_Callback();
						}
						else
							return this->CCombinePartTask::activate();
					}
					virtual void deactivate()
					{
						if(m_EarthView_World_Spatial2D_Controls_CCombinePartTask_deactivate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CCombinePartTask_deactivate_void_Callback();
						}
						else
							return this->CCombinePartTask::deactivate();
					}
					virtual void finish()
					{
						if(m_EarthView_World_Spatial2D_Controls_CCombinePartTask_finish_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CCombinePartTask_finish_void_Callback();
						}
						else
							return this->CCombinePartTask::finish();
					}
				};
				REGISTER_FACTORY_CLASS(CCombinePartTaskProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Controls_CCombinePartTask_getTaskType_EVEditTaskType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CCombinePartTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCombinePartTask*) pObjectXXXX;
					if (dynamic_cast<CCombinePartTaskProxy*>((EarthView::World::Spatial2D::Controls::CCombinePartTask*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial2D::Controls::EVEditTaskType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CCombinePartTask::getTaskType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial2D::Controls::EVEditTaskType objXXXX = ptrNativeObject->getTaskType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CCombinePartTask_getTaskType_EVEditTaskType( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CCombinePartTask_getTaskType_EVEditTaskType_Callback* pCallback )
				{
					CCombinePartTaskProxy* ptr = dynamic_cast<CCombinePartTaskProxy*>((EarthView::World::Spatial2D::Controls::CCombinePartTask*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CCombinePartTask_getTaskType_EVEditTaskType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Controls_CCombinePartTask_getTaskType_EVEditTaskType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CCombinePartTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCombinePartTask*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::EVEditTaskType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CCombinePartTask::getTaskType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CCombinePartTask_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CCombinePartTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCombinePartTask*) pObjectXXXX;
					if (dynamic_cast<CCombinePartTaskProxy*>((EarthView::World::Spatial2D::Controls::CCombinePartTask*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CCombinePartTask::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CCombinePartTask_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CCombinePartTask_getName_EVString_Callback* pCallback )
				{
					CCombinePartTaskProxy* ptr = dynamic_cast<CCombinePartTaskProxy*>((EarthView::World::Spatial2D::Controls::CCombinePartTask*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CCombinePartTask_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CCombinePartTask_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CCombinePartTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCombinePartTask*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CCombinePartTask::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CCombinePartTask_activate_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CCombinePartTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCombinePartTask*) pObjectXXXX;
					if (dynamic_cast<CCombinePartTaskProxy*>((EarthView::World::Spatial2D::Controls::CCombinePartTask*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CCombinePartTask::activate();
					else
						ptrNativeObject->activate();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CCombinePartTask_activate_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CCombinePartTask_activate_void_Callback* pCallback )
				{
					CCombinePartTaskProxy* ptr = dynamic_cast<CCombinePartTaskProxy*>((EarthView::World::Spatial2D::Controls::CCombinePartTask*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CCombinePartTask_activate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CCombinePartTask_activate_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CCombinePartTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCombinePartTask*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CCombinePartTask::activate();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CCombinePartTask_deactivate_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CCombinePartTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCombinePartTask*) pObjectXXXX;
					if (dynamic_cast<CCombinePartTaskProxy*>((EarthView::World::Spatial2D::Controls::CCombinePartTask*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CCombinePartTask::deactivate();
					else
						ptrNativeObject->deactivate();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CCombinePartTask_deactivate_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CCombinePartTask_deactivate_void_Callback* pCallback )
				{
					CCombinePartTaskProxy* ptr = dynamic_cast<CCombinePartTaskProxy*>((EarthView::World::Spatial2D::Controls::CCombinePartTask*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CCombinePartTask_deactivate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CCombinePartTask_deactivate_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CCombinePartTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCombinePartTask*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CCombinePartTask::deactivate();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CCombinePartTask_finish_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CCombinePartTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCombinePartTask*) pObjectXXXX;
					if (dynamic_cast<CCombinePartTaskProxy*>((EarthView::World::Spatial2D::Controls::CCombinePartTask*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CCombinePartTask::finish();
					else
						ptrNativeObject->finish();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CCombinePartTask_finish_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CCombinePartTask_finish_void_Callback* pCallback )
				{
					CCombinePartTaskProxy* ptr = dynamic_cast<CCombinePartTaskProxy*>((EarthView::World::Spatial2D::Controls::CCombinePartTask*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CCombinePartTask_finish_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CCombinePartTask_finish_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CCombinePartTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCombinePartTask*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CCombinePartTask::finish();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CCombinePartTask_storageChangedFeature_void_ev_int32_IGeometry(void *pObjectXXXX, _in ev_int32 nID, _in EarthView::World::Spatial::Geometry::IGeometry* pGeometry )
				{
					EarthView::World::Spatial2D::Controls::CCombinePartTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCombinePartTask*) pObjectXXXX;
					ptrNativeObject->storageChangedFeature(nID, pGeometry);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CCombinePartTask_storageDeletedFeatures_void_ev_int32(void *pObjectXXXX, _in ev_int32 nID )
				{
					EarthView::World::Spatial2D::Controls::CCombinePartTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCombinePartTask*) pObjectXXXX;
					ptrNativeObject->storageDeletedFeatures(nID);
				}
			}
		}
	}
}
