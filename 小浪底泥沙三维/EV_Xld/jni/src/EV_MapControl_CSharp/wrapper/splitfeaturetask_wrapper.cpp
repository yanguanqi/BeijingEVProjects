/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/splitfeaturetask.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CSplitFeatureTask_getName_EVString_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial2D_Controls_CSplitFeatureTask_getTaskType_EVEditTaskType_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CSplitFeatureTask_activate_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CSplitFeatureTask_deactivate_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CSplitFeatureTask_finish_void_Callback)();
				class CSplitFeatureTaskProxy : public EarthView::World::Spatial2D::Controls::CSplitFeatureTask
				{
				private:
					EarthView_World_Spatial2D_Controls_CSplitFeatureTask_getName_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CSplitFeatureTask_getName_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CSplitFeatureTask_getTaskType_EVEditTaskType_Callback* m_EarthView_World_Spatial2D_Controls_CSplitFeatureTask_getTaskType_EVEditTaskType_Callback;
					EarthView_World_Spatial2D_Controls_CSplitFeatureTask_activate_void_Callback* m_EarthView_World_Spatial2D_Controls_CSplitFeatureTask_activate_void_Callback;
					EarthView_World_Spatial2D_Controls_CSplitFeatureTask_deactivate_void_Callback* m_EarthView_World_Spatial2D_Controls_CSplitFeatureTask_deactivate_void_Callback;
					EarthView_World_Spatial2D_Controls_CSplitFeatureTask_finish_void_Callback* m_EarthView_World_Spatial2D_Controls_CSplitFeatureTask_finish_void_Callback;
				public:
					CSplitFeatureTaskProxy(EarthView::World::Core::CNameValuePairList *pList) : CSplitFeatureTask(pList)
					{
						m_EarthView_World_Spatial2D_Controls_CSplitFeatureTask_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CSplitFeatureTask_getTaskType_EVEditTaskType_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CSplitFeatureTask_activate_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CSplitFeatureTask_deactivate_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CSplitFeatureTask_finish_void_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CSplitFeatureTask_getName_EVString(EarthView_World_Spatial2D_Controls_CSplitFeatureTask_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CSplitFeatureTask_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CSplitFeatureTask_getTaskType_EVEditTaskType(EarthView_World_Spatial2D_Controls_CSplitFeatureTask_getTaskType_EVEditTaskType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CSplitFeatureTask_getTaskType_EVEditTaskType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CSplitFeatureTask_activate_void(EarthView_World_Spatial2D_Controls_CSplitFeatureTask_activate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CSplitFeatureTask_activate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CSplitFeatureTask_deactivate_void(EarthView_World_Spatial2D_Controls_CSplitFeatureTask_deactivate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CSplitFeatureTask_deactivate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CSplitFeatureTask_finish_void(EarthView_World_Spatial2D_Controls_CSplitFeatureTask_finish_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CSplitFeatureTask_finish_void_Callback = pCallback;
					}
					virtual EarthView::World::Spatial2D::Controls::EVEditTaskType getTaskType() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CSplitFeatureTask_getTaskType_EVEditTaskType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial2D::Controls::EVEditTaskType returnValue = (EarthView::World::Spatial2D::Controls::EVEditTaskType)m_EarthView_World_Spatial2D_Controls_CSplitFeatureTask_getTaskType_EVEditTaskType_Callback();
							return returnValue;
						}
						else
							return this->CSplitFeatureTask::getTaskType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CSplitFeatureTask_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CSplitFeatureTask_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CSplitFeatureTask::getName();
					}
					virtual void activate()
					{
						if(m_EarthView_World_Spatial2D_Controls_CSplitFeatureTask_activate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CSplitFeatureTask_activate_void_Callback();
						}
						else
							return this->CSplitFeatureTask::activate();
					}
					virtual void deactivate()
					{
						if(m_EarthView_World_Spatial2D_Controls_CSplitFeatureTask_deactivate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CSplitFeatureTask_deactivate_void_Callback();
						}
						else
							return this->CSplitFeatureTask::deactivate();
					}
					virtual void finish()
					{
						if(m_EarthView_World_Spatial2D_Controls_CSplitFeatureTask_finish_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CSplitFeatureTask_finish_void_Callback();
						}
						else
							return this->CSplitFeatureTask::finish();
					}
				};
				REGISTER_FACTORY_CLASS(CSplitFeatureTaskProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Controls_CSplitFeatureTask_getTaskType_EVEditTaskType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CSplitFeatureTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CSplitFeatureTask*) pObjectXXXX;
					if (dynamic_cast<CSplitFeatureTaskProxy*>((EarthView::World::Spatial2D::Controls::CSplitFeatureTask*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial2D::Controls::EVEditTaskType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CSplitFeatureTask::getTaskType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial2D::Controls::EVEditTaskType objXXXX = ptrNativeObject->getTaskType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CSplitFeatureTask_getTaskType_EVEditTaskType( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CSplitFeatureTask_getTaskType_EVEditTaskType_Callback* pCallback )
				{
					CSplitFeatureTaskProxy* ptr = dynamic_cast<CSplitFeatureTaskProxy*>((EarthView::World::Spatial2D::Controls::CSplitFeatureTask*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CSplitFeatureTask_getTaskType_EVEditTaskType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Controls_CSplitFeatureTask_getTaskType_EVEditTaskType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CSplitFeatureTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CSplitFeatureTask*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::EVEditTaskType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CSplitFeatureTask::getTaskType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CSplitFeatureTask_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CSplitFeatureTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CSplitFeatureTask*) pObjectXXXX;
					if (dynamic_cast<CSplitFeatureTaskProxy*>((EarthView::World::Spatial2D::Controls::CSplitFeatureTask*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CSplitFeatureTask::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CSplitFeatureTask_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CSplitFeatureTask_getName_EVString_Callback* pCallback )
				{
					CSplitFeatureTaskProxy* ptr = dynamic_cast<CSplitFeatureTaskProxy*>((EarthView::World::Spatial2D::Controls::CSplitFeatureTask*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CSplitFeatureTask_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CSplitFeatureTask_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CSplitFeatureTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CSplitFeatureTask*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CSplitFeatureTask::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CSplitFeatureTask_activate_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CSplitFeatureTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CSplitFeatureTask*) pObjectXXXX;
					if (dynamic_cast<CSplitFeatureTaskProxy*>((EarthView::World::Spatial2D::Controls::CSplitFeatureTask*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CSplitFeatureTask::activate();
					else
						ptrNativeObject->activate();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CSplitFeatureTask_activate_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CSplitFeatureTask_activate_void_Callback* pCallback )
				{
					CSplitFeatureTaskProxy* ptr = dynamic_cast<CSplitFeatureTaskProxy*>((EarthView::World::Spatial2D::Controls::CSplitFeatureTask*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CSplitFeatureTask_activate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CSplitFeatureTask_activate_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CSplitFeatureTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CSplitFeatureTask*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CSplitFeatureTask::activate();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CSplitFeatureTask_deactivate_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CSplitFeatureTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CSplitFeatureTask*) pObjectXXXX;
					if (dynamic_cast<CSplitFeatureTaskProxy*>((EarthView::World::Spatial2D::Controls::CSplitFeatureTask*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CSplitFeatureTask::deactivate();
					else
						ptrNativeObject->deactivate();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CSplitFeatureTask_deactivate_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CSplitFeatureTask_deactivate_void_Callback* pCallback )
				{
					CSplitFeatureTaskProxy* ptr = dynamic_cast<CSplitFeatureTaskProxy*>((EarthView::World::Spatial2D::Controls::CSplitFeatureTask*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CSplitFeatureTask_deactivate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CSplitFeatureTask_deactivate_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CSplitFeatureTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CSplitFeatureTask*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CSplitFeatureTask::deactivate();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CSplitFeatureTask_addSplitFeature_void_ev_int32_IGeometry(void *pObjectXXXX, _in ev_int32 nID, _in EarthView::World::Spatial::Geometry::IGeometry* pGeometry )
				{
					EarthView::World::Spatial2D::Controls::CSplitFeatureTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CSplitFeatureTask*) pObjectXXXX;
					ptrNativeObject->addSplitFeature(nID, pGeometry);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CSplitFeatureTask_finish_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CSplitFeatureTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CSplitFeatureTask*) pObjectXXXX;
					if (dynamic_cast<CSplitFeatureTaskProxy*>((EarthView::World::Spatial2D::Controls::CSplitFeatureTask*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CSplitFeatureTask::finish();
					else
						ptrNativeObject->finish();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CSplitFeatureTask_finish_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CSplitFeatureTask_finish_void_Callback* pCallback )
				{
					CSplitFeatureTaskProxy* ptr = dynamic_cast<CSplitFeatureTaskProxy*>((EarthView::World::Spatial2D::Controls::CSplitFeatureTask*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CSplitFeatureTask_finish_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CSplitFeatureTask_finish_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CSplitFeatureTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CSplitFeatureTask*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CSplitFeatureTask::finish();
				}
			}
		}
	}
}
