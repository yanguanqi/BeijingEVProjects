/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/copyfeaturetask.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CCopyFeatureTask_getName_EVString_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial2D_Controls_CCopyFeatureTask_getTaskType_EVEditTaskType_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CCopyFeatureTask_activate_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CCopyFeatureTask_deactivate_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CCopyFeatureTask_finish_void_Callback)();
				class CCopyFeatureTaskProxy : public EarthView::World::Spatial2D::Controls::CCopyFeatureTask
				{
				private:
					EarthView_World_Spatial2D_Controls_CCopyFeatureTask_getName_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CCopyFeatureTask_getName_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CCopyFeatureTask_getTaskType_EVEditTaskType_Callback* m_EarthView_World_Spatial2D_Controls_CCopyFeatureTask_getTaskType_EVEditTaskType_Callback;
					EarthView_World_Spatial2D_Controls_CCopyFeatureTask_activate_void_Callback* m_EarthView_World_Spatial2D_Controls_CCopyFeatureTask_activate_void_Callback;
					EarthView_World_Spatial2D_Controls_CCopyFeatureTask_deactivate_void_Callback* m_EarthView_World_Spatial2D_Controls_CCopyFeatureTask_deactivate_void_Callback;
					EarthView_World_Spatial2D_Controls_CCopyFeatureTask_finish_void_Callback* m_EarthView_World_Spatial2D_Controls_CCopyFeatureTask_finish_void_Callback;
				public:
					CCopyFeatureTaskProxy(EarthView::World::Core::CNameValuePairList *pList) : CCopyFeatureTask(pList)
					{
						m_EarthView_World_Spatial2D_Controls_CCopyFeatureTask_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CCopyFeatureTask_getTaskType_EVEditTaskType_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CCopyFeatureTask_activate_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CCopyFeatureTask_deactivate_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CCopyFeatureTask_finish_void_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CCopyFeatureTask_getName_EVString(EarthView_World_Spatial2D_Controls_CCopyFeatureTask_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CCopyFeatureTask_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CCopyFeatureTask_getTaskType_EVEditTaskType(EarthView_World_Spatial2D_Controls_CCopyFeatureTask_getTaskType_EVEditTaskType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CCopyFeatureTask_getTaskType_EVEditTaskType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CCopyFeatureTask_activate_void(EarthView_World_Spatial2D_Controls_CCopyFeatureTask_activate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CCopyFeatureTask_activate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CCopyFeatureTask_deactivate_void(EarthView_World_Spatial2D_Controls_CCopyFeatureTask_deactivate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CCopyFeatureTask_deactivate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CCopyFeatureTask_finish_void(EarthView_World_Spatial2D_Controls_CCopyFeatureTask_finish_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CCopyFeatureTask_finish_void_Callback = pCallback;
					}
					virtual EarthView::World::Spatial2D::Controls::EVEditTaskType getTaskType() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CCopyFeatureTask_getTaskType_EVEditTaskType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial2D::Controls::EVEditTaskType returnValue = (EarthView::World::Spatial2D::Controls::EVEditTaskType)m_EarthView_World_Spatial2D_Controls_CCopyFeatureTask_getTaskType_EVEditTaskType_Callback();
							return returnValue;
						}
						else
							return this->CCopyFeatureTask::getTaskType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CCopyFeatureTask_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CCopyFeatureTask_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CCopyFeatureTask::getName();
					}
					virtual void activate()
					{
						if(m_EarthView_World_Spatial2D_Controls_CCopyFeatureTask_activate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CCopyFeatureTask_activate_void_Callback();
						}
						else
							return this->CCopyFeatureTask::activate();
					}
					virtual void deactivate()
					{
						if(m_EarthView_World_Spatial2D_Controls_CCopyFeatureTask_deactivate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CCopyFeatureTask_deactivate_void_Callback();
						}
						else
							return this->CCopyFeatureTask::deactivate();
					}
					virtual void finish()
					{
						if(m_EarthView_World_Spatial2D_Controls_CCopyFeatureTask_finish_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CCopyFeatureTask_finish_void_Callback();
						}
						else
							return this->CCopyFeatureTask::finish();
					}
				};
				REGISTER_FACTORY_CLASS(CCopyFeatureTaskProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Controls_CCopyFeatureTask_getTaskType_EVEditTaskType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CCopyFeatureTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCopyFeatureTask*) pObjectXXXX;
					if (dynamic_cast<CCopyFeatureTaskProxy*>((EarthView::World::Spatial2D::Controls::CCopyFeatureTask*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial2D::Controls::EVEditTaskType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CCopyFeatureTask::getTaskType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial2D::Controls::EVEditTaskType objXXXX = ptrNativeObject->getTaskType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CCopyFeatureTask_getTaskType_EVEditTaskType( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CCopyFeatureTask_getTaskType_EVEditTaskType_Callback* pCallback )
				{
					CCopyFeatureTaskProxy* ptr = dynamic_cast<CCopyFeatureTaskProxy*>((EarthView::World::Spatial2D::Controls::CCopyFeatureTask*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CCopyFeatureTask_getTaskType_EVEditTaskType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Controls_CCopyFeatureTask_getTaskType_EVEditTaskType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CCopyFeatureTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCopyFeatureTask*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::EVEditTaskType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CCopyFeatureTask::getTaskType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CCopyFeatureTask_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CCopyFeatureTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCopyFeatureTask*) pObjectXXXX;
					if (dynamic_cast<CCopyFeatureTaskProxy*>((EarthView::World::Spatial2D::Controls::CCopyFeatureTask*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CCopyFeatureTask::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CCopyFeatureTask_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CCopyFeatureTask_getName_EVString_Callback* pCallback )
				{
					CCopyFeatureTaskProxy* ptr = dynamic_cast<CCopyFeatureTaskProxy*>((EarthView::World::Spatial2D::Controls::CCopyFeatureTask*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CCopyFeatureTask_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CCopyFeatureTask_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CCopyFeatureTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCopyFeatureTask*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CCopyFeatureTask::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CCopyFeatureTask_activate_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CCopyFeatureTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCopyFeatureTask*) pObjectXXXX;
					if (dynamic_cast<CCopyFeatureTaskProxy*>((EarthView::World::Spatial2D::Controls::CCopyFeatureTask*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CCopyFeatureTask::activate();
					else
						ptrNativeObject->activate();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CCopyFeatureTask_activate_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CCopyFeatureTask_activate_void_Callback* pCallback )
				{
					CCopyFeatureTaskProxy* ptr = dynamic_cast<CCopyFeatureTaskProxy*>((EarthView::World::Spatial2D::Controls::CCopyFeatureTask*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CCopyFeatureTask_activate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CCopyFeatureTask_activate_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CCopyFeatureTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCopyFeatureTask*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CCopyFeatureTask::activate();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CCopyFeatureTask_deactivate_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CCopyFeatureTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCopyFeatureTask*) pObjectXXXX;
					if (dynamic_cast<CCopyFeatureTaskProxy*>((EarthView::World::Spatial2D::Controls::CCopyFeatureTask*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CCopyFeatureTask::deactivate();
					else
						ptrNativeObject->deactivate();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CCopyFeatureTask_deactivate_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CCopyFeatureTask_deactivate_void_Callback* pCallback )
				{
					CCopyFeatureTaskProxy* ptr = dynamic_cast<CCopyFeatureTaskProxy*>((EarthView::World::Spatial2D::Controls::CCopyFeatureTask*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CCopyFeatureTask_deactivate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CCopyFeatureTask_deactivate_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CCopyFeatureTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCopyFeatureTask*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CCopyFeatureTask::deactivate();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CCopyFeatureTask_copyFeature_void_IFeature(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IFeature* pFeature )
				{
					EarthView::World::Spatial2D::Controls::CCopyFeatureTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCopyFeatureTask*) pObjectXXXX;
					ptrNativeObject->copyFeature(pFeature);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CCopyFeatureTask_paste_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CCopyFeatureTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCopyFeatureTask*) pObjectXXXX;
					ptrNativeObject->paste();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CCopyFeatureTask_finish_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CCopyFeatureTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCopyFeatureTask*) pObjectXXXX;
					if (dynamic_cast<CCopyFeatureTaskProxy*>((EarthView::World::Spatial2D::Controls::CCopyFeatureTask*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CCopyFeatureTask::finish();
					else
						ptrNativeObject->finish();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CCopyFeatureTask_finish_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CCopyFeatureTask_finish_void_Callback* pCallback )
				{
					CCopyFeatureTaskProxy* ptr = dynamic_cast<CCopyFeatureTaskProxy*>((EarthView::World::Spatial2D::Controls::CCopyFeatureTask*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CCopyFeatureTask_finish_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CCopyFeatureTask_finish_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CCopyFeatureTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCopyFeatureTask*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CCopyFeatureTask::finish();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CCopyFeatureTask_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CCopyFeatureTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCopyFeatureTask*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CCopyFeatureTask_isCopied_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CCopyFeatureTask* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCopyFeatureTask*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isCopied();
					return objXXXX;
				}
			}
		}
	}
}
