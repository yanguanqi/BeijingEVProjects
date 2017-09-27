/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/gpuprogramusage.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_backgroundLoadingComplete_void_CResource_Callback)(_in EarthView::World::Graphic::CResource* pResource);
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_backgroundPreparingComplete_void_CResource_Callback)(_in EarthView::World::Graphic::CResource* pResource);
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_loadingComplete_void_CResource_Callback)(_in EarthView::World::Graphic::CResource* pResource);
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_preparingComplete_void_CResource_Callback)(_in EarthView::World::Graphic::CResource* pResource);
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_unloadingComplete_void_CResource_Callback)(_in EarthView::World::Graphic::CResource* pResource);
			class CGpuProgramUsageListenerProxy : public EarthView::World::Graphic::CGpuProgramUsage::CGpuProgramUsageListener
			{
			private:
				EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_backgroundLoadingComplete_void_CResource_Callback* m_EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_backgroundLoadingComplete_void_CResource_Callback;
				EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_backgroundPreparingComplete_void_CResource_Callback* m_EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_backgroundPreparingComplete_void_CResource_Callback;
				EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_loadingComplete_void_CResource_Callback* m_EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_loadingComplete_void_CResource_Callback;
				EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_preparingComplete_void_CResource_Callback* m_EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_preparingComplete_void_CResource_Callback;
				EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_unloadingComplete_void_CResource_Callback* m_EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_unloadingComplete_void_CResource_Callback;
			public:
				CGpuProgramUsageListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CGpuProgramUsageListener(pList)
				{
					m_EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_backgroundLoadingComplete_void_CResource_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_backgroundPreparingComplete_void_CResource_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_loadingComplete_void_CResource_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_preparingComplete_void_CResource_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_unloadingComplete_void_CResource_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_backgroundLoadingComplete_void_CResource(EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_backgroundLoadingComplete_void_CResource_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_backgroundLoadingComplete_void_CResource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_backgroundPreparingComplete_void_CResource(EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_backgroundPreparingComplete_void_CResource_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_backgroundPreparingComplete_void_CResource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_loadingComplete_void_CResource(EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_loadingComplete_void_CResource_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_loadingComplete_void_CResource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_preparingComplete_void_CResource(EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_preparingComplete_void_CResource_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_preparingComplete_void_CResource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_unloadingComplete_void_CResource(EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_unloadingComplete_void_CResource_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_unloadingComplete_void_CResource_Callback = pCallback;
				}
				virtual void unloadingComplete(_in EarthView::World::Graphic::CResource* prog)
				{
					if(m_EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_unloadingComplete_void_CResource_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_unloadingComplete_void_CResource_Callback(prog);
					}
					else
						return this->CGpuProgramUsageListener::unloadingComplete(prog);
				}
				virtual void loadingComplete(_in EarthView::World::Graphic::CResource* prog)
				{
					if(m_EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_loadingComplete_void_CResource_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_loadingComplete_void_CResource_Callback(prog);
					}
					else
						return this->CGpuProgramUsageListener::loadingComplete(prog);
				}
				virtual void backgroundLoadingComplete(_in EarthView::World::Graphic::CResource* pResource)
				{
					if(m_EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_backgroundLoadingComplete_void_CResource_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_backgroundLoadingComplete_void_CResource_Callback(pResource);
					}
					else
						return this->CGpuProgramUsageListener::backgroundLoadingComplete(pResource);
				}
				virtual void backgroundPreparingComplete(_in EarthView::World::Graphic::CResource* pResource)
				{
					if(m_EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_backgroundPreparingComplete_void_CResource_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_backgroundPreparingComplete_void_CResource_Callback(pResource);
					}
					else
						return this->CGpuProgramUsageListener::backgroundPreparingComplete(pResource);
				}
				virtual void preparingComplete(_in EarthView::World::Graphic::CResource* pResource)
				{
					if(m_EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_preparingComplete_void_CResource_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_preparingComplete_void_CResource_Callback(pResource);
					}
					else
						return this->CGpuProgramUsageListener::preparingComplete(pResource);
				}
			};
			REGISTER_FACTORY_CLASS(CGpuProgramUsageListenerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_unloadingComplete_void_CResource(void *pObjectXXXX, _in EarthView::World::Graphic::CResource* prog )
			{
				EarthView::World::Graphic::CGpuProgramUsage::CGpuProgramUsageListener* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramUsage::CGpuProgramUsageListener*) pObjectXXXX;
				if (dynamic_cast<CGpuProgramUsageListenerProxy*>((EarthView::World::Graphic::CGpuProgramUsage::CGpuProgramUsageListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CGpuProgramUsage::CGpuProgramUsageListener::unloadingComplete(prog);
				else
					ptrNativeObject->unloadingComplete(prog);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_unloadingComplete_void_CResource( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_unloadingComplete_void_CResource_Callback* pCallback )
			{
				CGpuProgramUsageListenerProxy* ptr = dynamic_cast<CGpuProgramUsageListenerProxy*>((EarthView::World::Graphic::CGpuProgramUsage::CGpuProgramUsageListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_unloadingComplete_void_CResource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_unloadingComplete_void_CResource_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CResource* prog )
			{
				EarthView::World::Graphic::CGpuProgramUsage::CGpuProgramUsageListener* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramUsage::CGpuProgramUsageListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CGpuProgramUsage::CGpuProgramUsageListener::unloadingComplete(prog);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_loadingComplete_void_CResource(void *pObjectXXXX, _in EarthView::World::Graphic::CResource* prog )
			{
				EarthView::World::Graphic::CGpuProgramUsage::CGpuProgramUsageListener* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramUsage::CGpuProgramUsageListener*) pObjectXXXX;
				if (dynamic_cast<CGpuProgramUsageListenerProxy*>((EarthView::World::Graphic::CGpuProgramUsage::CGpuProgramUsageListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CGpuProgramUsage::CGpuProgramUsageListener::loadingComplete(prog);
				else
					ptrNativeObject->loadingComplete(prog);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_loadingComplete_void_CResource( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_loadingComplete_void_CResource_Callback* pCallback )
			{
				CGpuProgramUsageListenerProxy* ptr = dynamic_cast<CGpuProgramUsageListenerProxy*>((EarthView::World::Graphic::CGpuProgramUsage::CGpuProgramUsageListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_loadingComplete_void_CResource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_loadingComplete_void_CResource_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CResource* prog )
			{
				EarthView::World::Graphic::CGpuProgramUsage::CGpuProgramUsageListener* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramUsage::CGpuProgramUsageListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CGpuProgramUsage::CGpuProgramUsageListener::loadingComplete(prog);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_backgroundLoadingComplete_void_CResource( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_backgroundLoadingComplete_void_CResource_Callback* pCallback )
			{
				CGpuProgramUsageListenerProxy* ptr = dynamic_cast<CGpuProgramUsageListenerProxy*>((EarthView::World::Graphic::CGpuProgramUsage::CGpuProgramUsageListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_backgroundLoadingComplete_void_CResource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_backgroundPreparingComplete_void_CResource( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_backgroundPreparingComplete_void_CResource_Callback* pCallback )
			{
				CGpuProgramUsageListenerProxy* ptr = dynamic_cast<CGpuProgramUsageListenerProxy*>((EarthView::World::Graphic::CGpuProgramUsage::CGpuProgramUsageListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_backgroundPreparingComplete_void_CResource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_preparingComplete_void_CResource( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_preparingComplete_void_CResource_Callback* pCallback )
			{
				CGpuProgramUsageListenerProxy* ptr = dynamic_cast<CGpuProgramUsageListenerProxy*>((EarthView::World::Graphic::CGpuProgramUsage::CGpuProgramUsageListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgramUsage_CGpuProgramUsageListener_preparingComplete_void_CResource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CGpuProgramUsage::CGpuProgramUsageListener*  _stdcall EarthView_World_Graphic_CGpuProgramUsage_getListenerPtr_CGpuProgramUsageListener(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuProgramUsage* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramUsage*) pObjectXXXX;
				const EarthView::World::Graphic::CGpuProgramUsage::CGpuProgramUsageListener* objXXXX = ptrNativeObject->getListenerPtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CGpuProgramUsage_getListener_CGpuProgramUsageListener(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuProgramUsage* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramUsage*) pObjectXXXX;
				const EarthView::World::Graphic::CGpuProgramUsage::CGpuProgramUsageListener& objXXXX = ptrNativeObject->getListener();
				const EarthView::World::Graphic::CGpuProgramUsage::CGpuProgramUsageListener *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CGpuProgramUsage_getType_GpuProgramType(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgramUsage* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramUsage*) pObjectXXXX;
				EarthView::World::Graphic::GpuProgramType objXXXX = ptrNativeObject->getType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramUsage_setProgramName_void_EVString_ev_bool(void *pObjectXXXX, _in const char* name, _in ev_bool resetParams )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CGpuProgramUsage* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramUsage*) pObjectXXXX;
				ptrNativeObject->setProgramName(name1, resetParams);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramUsage_setProgramName_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CGpuProgramUsage* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramUsage*) pObjectXXXX;
				ptrNativeObject->setProgramName(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramUsage_setProgram_void_CGpuProgramPtr(void *pObjectXXXX, _inout void* prog )
			{
				EarthView::World::Graphic::CGpuProgramUsage* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramUsage*) pObjectXXXX;
				ptrNativeObject->setProgram(*(EarthView::World::Graphic::CGpuProgramPtr*)prog);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CGpuProgramUsage_getProgram_CGpuProgramPtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgramUsage* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramUsage*) pObjectXXXX;
				const EarthView::World::Graphic::CGpuProgramPtr& objXXXX = ptrNativeObject->getProgram();
				const EarthView::World::Graphic::CGpuProgramPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CGpuProgramUsage_getProgramName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgramUsage* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramUsage*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getProgramName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramUsage_setParameters_void_GpuProgramParametersSharedPtr(void *pObjectXXXX, _in void* parameters )
			{
				EarthView::World::Graphic::CGpuProgramUsage* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramUsage*) pObjectXXXX;
				ptrNativeObject->setParameters(*(EarthView::World::Graphic::GpuProgramParametersSharedPtr*)parameters);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CGpuProgramUsage_getParameters_GpuProgramParametersSharedPtr(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuProgramUsage* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramUsage*) pObjectXXXX;
				EarthView::World::Graphic::GpuProgramParametersSharedPtr objXXXX = ptrNativeObject->getParameters();
				EarthView::World::Graphic::GpuProgramParametersSharedPtr *pXXXX = new EarthView::World::Graphic::GpuProgramParametersSharedPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramUsage__load_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuProgramUsage* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramUsage*) pObjectXXXX;
				ptrNativeObject->_load();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramUsage__unload_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuProgramUsage* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramUsage*) pObjectXXXX;
				ptrNativeObject->_unload();
			}
		}
	}
}
