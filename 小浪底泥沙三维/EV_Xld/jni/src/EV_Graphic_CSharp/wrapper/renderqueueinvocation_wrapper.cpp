/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/renderqueueinvocation.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef ev_uint8  ( _stdcall EarthView_World_Graphic_CRenderQueueInvocation_getRenderQueueGroupID_ev_uint8_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CRenderQueueInvocation_getInvocationName_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderQueueInvocation_setSolidsOrganisation_void_OrganisationMode_Callback)(_in int org);
			typedef int  ( _stdcall EarthView_World_Graphic_CRenderQueueInvocation_getSolidsOrganisation_OrganisationMode_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderQueueInvocation_setSuppressShadows_void_ev_bool_Callback)(_in ev_bool suppress);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRenderQueueInvocation_getSuppressShadows_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderQueueInvocation_setSuppressRenderStateChanges_void_ev_bool_Callback)(_in ev_bool suppress);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRenderQueueInvocation_getSuppressRenderStateChanges_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderQueueInvocation_invoke_void_CRenderQueueGroup_CSceneManager_Callback)(_in EarthView::World::Graphic::CRenderQueueGroup* group, _in EarthView::World::Graphic::CSceneManager* targetSceneManager);
			class CRenderQueueInvocationProxy : public EarthView::World::Graphic::CRenderQueueInvocation
			{
			private:
				EarthView_World_Graphic_CRenderQueueInvocation_getRenderQueueGroupID_ev_uint8_Callback* m_EarthView_World_Graphic_CRenderQueueInvocation_getRenderQueueGroupID_ev_uint8_Callback;
				EarthView_World_Graphic_CRenderQueueInvocation_getInvocationName_EVString_Callback* m_EarthView_World_Graphic_CRenderQueueInvocation_getInvocationName_EVString_Callback;
				EarthView_World_Graphic_CRenderQueueInvocation_setSolidsOrganisation_void_OrganisationMode_Callback* m_EarthView_World_Graphic_CRenderQueueInvocation_setSolidsOrganisation_void_OrganisationMode_Callback;
				EarthView_World_Graphic_CRenderQueueInvocation_getSolidsOrganisation_OrganisationMode_Callback* m_EarthView_World_Graphic_CRenderQueueInvocation_getSolidsOrganisation_OrganisationMode_Callback;
				EarthView_World_Graphic_CRenderQueueInvocation_setSuppressShadows_void_ev_bool_Callback* m_EarthView_World_Graphic_CRenderQueueInvocation_setSuppressShadows_void_ev_bool_Callback;
				EarthView_World_Graphic_CRenderQueueInvocation_getSuppressShadows_ev_bool_Callback* m_EarthView_World_Graphic_CRenderQueueInvocation_getSuppressShadows_ev_bool_Callback;
				EarthView_World_Graphic_CRenderQueueInvocation_setSuppressRenderStateChanges_void_ev_bool_Callback* m_EarthView_World_Graphic_CRenderQueueInvocation_setSuppressRenderStateChanges_void_ev_bool_Callback;
				EarthView_World_Graphic_CRenderQueueInvocation_getSuppressRenderStateChanges_ev_bool_Callback* m_EarthView_World_Graphic_CRenderQueueInvocation_getSuppressRenderStateChanges_ev_bool_Callback;
				EarthView_World_Graphic_CRenderQueueInvocation_invoke_void_CRenderQueueGroup_CSceneManager_Callback* m_EarthView_World_Graphic_CRenderQueueInvocation_invoke_void_CRenderQueueGroup_CSceneManager_Callback;
			public:
				CRenderQueueInvocationProxy(EarthView::World::Core::CNameValuePairList *pList) : CRenderQueueInvocation(pList)
				{
					m_EarthView_World_Graphic_CRenderQueueInvocation_getRenderQueueGroupID_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_CRenderQueueInvocation_getInvocationName_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CRenderQueueInvocation_setSolidsOrganisation_void_OrganisationMode_Callback = NULL;
					m_EarthView_World_Graphic_CRenderQueueInvocation_getSolidsOrganisation_OrganisationMode_Callback = NULL;
					m_EarthView_World_Graphic_CRenderQueueInvocation_setSuppressShadows_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderQueueInvocation_getSuppressShadows_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderQueueInvocation_setSuppressRenderStateChanges_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderQueueInvocation_getSuppressRenderStateChanges_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderQueueInvocation_invoke_void_CRenderQueueGroup_CSceneManager_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CRenderQueueInvocation_getRenderQueueGroupID_ev_uint8(EarthView_World_Graphic_CRenderQueueInvocation_getRenderQueueGroupID_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderQueueInvocation_getRenderQueueGroupID_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderQueueInvocation_getInvocationName_EVString(EarthView_World_Graphic_CRenderQueueInvocation_getInvocationName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderQueueInvocation_getInvocationName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderQueueInvocation_setSolidsOrganisation_void_OrganisationMode(EarthView_World_Graphic_CRenderQueueInvocation_setSolidsOrganisation_void_OrganisationMode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderQueueInvocation_setSolidsOrganisation_void_OrganisationMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderQueueInvocation_getSolidsOrganisation_OrganisationMode(EarthView_World_Graphic_CRenderQueueInvocation_getSolidsOrganisation_OrganisationMode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderQueueInvocation_getSolidsOrganisation_OrganisationMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderQueueInvocation_setSuppressShadows_void_ev_bool(EarthView_World_Graphic_CRenderQueueInvocation_setSuppressShadows_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderQueueInvocation_setSuppressShadows_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderQueueInvocation_getSuppressShadows_ev_bool(EarthView_World_Graphic_CRenderQueueInvocation_getSuppressShadows_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderQueueInvocation_getSuppressShadows_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderQueueInvocation_setSuppressRenderStateChanges_void_ev_bool(EarthView_World_Graphic_CRenderQueueInvocation_setSuppressRenderStateChanges_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderQueueInvocation_setSuppressRenderStateChanges_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderQueueInvocation_getSuppressRenderStateChanges_ev_bool(EarthView_World_Graphic_CRenderQueueInvocation_getSuppressRenderStateChanges_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderQueueInvocation_getSuppressRenderStateChanges_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderQueueInvocation_invoke_void_CRenderQueueGroup_CSceneManager(EarthView_World_Graphic_CRenderQueueInvocation_invoke_void_CRenderQueueGroup_CSceneManager_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderQueueInvocation_invoke_void_CRenderQueueGroup_CSceneManager_Callback = pCallback;
				}
				virtual ev_uint8 getRenderQueueGroupID() const
				{
					if(m_EarthView_World_Graphic_CRenderQueueInvocation_getRenderQueueGroupID_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Graphic_CRenderQueueInvocation_getRenderQueueGroupID_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->CRenderQueueInvocation::getRenderQueueGroupID();
				}
				virtual EVString getInvocationName() const
				{
					if(m_EarthView_World_Graphic_CRenderQueueInvocation_getInvocationName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CRenderQueueInvocation_getInvocationName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CRenderQueueInvocation::getInvocationName();
				}
				virtual void setSolidsOrganisation(_in EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode org)
				{
					if(m_EarthView_World_Graphic_CRenderQueueInvocation_setSolidsOrganisation_void_OrganisationMode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderQueueInvocation_setSolidsOrganisation_void_OrganisationMode_Callback((int)org);
					}
					else
						return this->CRenderQueueInvocation::setSolidsOrganisation(org);
				}
				virtual EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode getSolidsOrganisation() const
				{
					if(m_EarthView_World_Graphic_CRenderQueueInvocation_getSolidsOrganisation_OrganisationMode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode returnValue = (EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode)m_EarthView_World_Graphic_CRenderQueueInvocation_getSolidsOrganisation_OrganisationMode_Callback();
						return returnValue;
					}
					else
						return this->CRenderQueueInvocation::getSolidsOrganisation();
				}
				virtual void setSuppressShadows(_in ev_bool suppress)
				{
					if(m_EarthView_World_Graphic_CRenderQueueInvocation_setSuppressShadows_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderQueueInvocation_setSuppressShadows_void_ev_bool_Callback(suppress);
					}
					else
						return this->CRenderQueueInvocation::setSuppressShadows(suppress);
				}
				virtual ev_bool getSuppressShadows() const
				{
					if(m_EarthView_World_Graphic_CRenderQueueInvocation_getSuppressShadows_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRenderQueueInvocation_getSuppressShadows_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CRenderQueueInvocation::getSuppressShadows();
				}
				virtual void setSuppressRenderStateChanges(_in ev_bool suppress)
				{
					if(m_EarthView_World_Graphic_CRenderQueueInvocation_setSuppressRenderStateChanges_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderQueueInvocation_setSuppressRenderStateChanges_void_ev_bool_Callback(suppress);
					}
					else
						return this->CRenderQueueInvocation::setSuppressRenderStateChanges(suppress);
				}
				virtual ev_bool getSuppressRenderStateChanges() const
				{
					if(m_EarthView_World_Graphic_CRenderQueueInvocation_getSuppressRenderStateChanges_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRenderQueueInvocation_getSuppressRenderStateChanges_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CRenderQueueInvocation::getSuppressRenderStateChanges();
				}
				virtual void invoke(_in EarthView::World::Graphic::CRenderQueueGroup* group, _in EarthView::World::Graphic::CSceneManager* targetSceneManager)
				{
					if(m_EarthView_World_Graphic_CRenderQueueInvocation_invoke_void_CRenderQueueGroup_CSceneManager_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderQueueInvocation_invoke_void_CRenderQueueGroup_CSceneManager_Callback(group, targetSceneManager);
					}
					else
						return this->CRenderQueueInvocation::invoke(group, targetSceneManager);
				}
			};
			REGISTER_FACTORY_CLASS(CRenderQueueInvocationProxy);
			extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall EarthView_World_Graphic_CRenderQueueInvocation_getRenderQueueGroupID_ev_uint8(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderQueueInvocation* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueInvocation*) pObjectXXXX;
				if (dynamic_cast<CRenderQueueInvocationProxy*>((EarthView::World::Graphic::CRenderQueueInvocation*)ptrNativeObject) != NULL)
				{
					ev_uint8 objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderQueueInvocation::getRenderQueueGroupID();
					return objXXXX;
				}
				else
				{
					ev_uint8 objXXXX = ptrNativeObject->getRenderQueueGroupID();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderQueueInvocation_getRenderQueueGroupID_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CRenderQueueInvocation_getRenderQueueGroupID_ev_uint8_Callback* pCallback )
			{
				CRenderQueueInvocationProxy* ptr = dynamic_cast<CRenderQueueInvocationProxy*>((EarthView::World::Graphic::CRenderQueueInvocation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderQueueInvocation_getRenderQueueGroupID_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall EarthView_World_Graphic_CRenderQueueInvocation_getRenderQueueGroupID_ev_uint8_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderQueueInvocation* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueInvocation*) pObjectXXXX;
				ev_uint8 objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderQueueInvocation::getRenderQueueGroupID();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CRenderQueueInvocation_getInvocationName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderQueueInvocation* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueInvocation*) pObjectXXXX;
				if (dynamic_cast<CRenderQueueInvocationProxy*>((EarthView::World::Graphic::CRenderQueueInvocation*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderQueueInvocation::getInvocationName();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getInvocationName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderQueueInvocation_getInvocationName_EVString( void *pObjectXXXX, EarthView_World_Graphic_CRenderQueueInvocation_getInvocationName_EVString_Callback* pCallback )
			{
				CRenderQueueInvocationProxy* ptr = dynamic_cast<CRenderQueueInvocationProxy*>((EarthView::World::Graphic::CRenderQueueInvocation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderQueueInvocation_getInvocationName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CRenderQueueInvocation_getInvocationName_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderQueueInvocation* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueInvocation*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderQueueInvocation::getInvocationName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueueInvocation_setSolidsOrganisation_void_OrganisationMode(void *pObjectXXXX, _in int org )
			{
				EarthView::World::Graphic::CRenderQueueInvocation* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueInvocation*) pObjectXXXX;
				if (dynamic_cast<CRenderQueueInvocationProxy*>((EarthView::World::Graphic::CRenderQueueInvocation*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderQueueInvocation::setSolidsOrganisation((EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode)org);
				else
					ptrNativeObject->setSolidsOrganisation((EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode)org);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderQueueInvocation_setSolidsOrganisation_void_OrganisationMode( void *pObjectXXXX, EarthView_World_Graphic_CRenderQueueInvocation_setSolidsOrganisation_void_OrganisationMode_Callback* pCallback )
			{
				CRenderQueueInvocationProxy* ptr = dynamic_cast<CRenderQueueInvocationProxy*>((EarthView::World::Graphic::CRenderQueueInvocation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderQueueInvocation_setSolidsOrganisation_void_OrganisationMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueueInvocation_setSolidsOrganisation_void_OrganisationMode_NoVirtual(void *pObjectXXXX, _in int org )
			{
				EarthView::World::Graphic::CRenderQueueInvocation* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueInvocation*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderQueueInvocation::setSolidsOrganisation((EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode)org);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CRenderQueueInvocation_getSolidsOrganisation_OrganisationMode(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderQueueInvocation* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueInvocation*) pObjectXXXX;
				if (dynamic_cast<CRenderQueueInvocationProxy*>((EarthView::World::Graphic::CRenderQueueInvocation*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderQueueInvocation::getSolidsOrganisation();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode objXXXX = ptrNativeObject->getSolidsOrganisation();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderQueueInvocation_getSolidsOrganisation_OrganisationMode( void *pObjectXXXX, EarthView_World_Graphic_CRenderQueueInvocation_getSolidsOrganisation_OrganisationMode_Callback* pCallback )
			{
				CRenderQueueInvocationProxy* ptr = dynamic_cast<CRenderQueueInvocationProxy*>((EarthView::World::Graphic::CRenderQueueInvocation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderQueueInvocation_getSolidsOrganisation_OrganisationMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CRenderQueueInvocation_getSolidsOrganisation_OrganisationMode_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderQueueInvocation* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueInvocation*) pObjectXXXX;
				EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderQueueInvocation::getSolidsOrganisation();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueueInvocation_setSuppressShadows_void_ev_bool(void *pObjectXXXX, _in ev_bool suppress )
			{
				EarthView::World::Graphic::CRenderQueueInvocation* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueInvocation*) pObjectXXXX;
				if (dynamic_cast<CRenderQueueInvocationProxy*>((EarthView::World::Graphic::CRenderQueueInvocation*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderQueueInvocation::setSuppressShadows(suppress);
				else
					ptrNativeObject->setSuppressShadows(suppress);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderQueueInvocation_setSuppressShadows_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderQueueInvocation_setSuppressShadows_void_ev_bool_Callback* pCallback )
			{
				CRenderQueueInvocationProxy* ptr = dynamic_cast<CRenderQueueInvocationProxy*>((EarthView::World::Graphic::CRenderQueueInvocation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderQueueInvocation_setSuppressShadows_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueueInvocation_setSuppressShadows_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool suppress )
			{
				EarthView::World::Graphic::CRenderQueueInvocation* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueInvocation*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderQueueInvocation::setSuppressShadows(suppress);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderQueueInvocation_getSuppressShadows_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderQueueInvocation* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueInvocation*) pObjectXXXX;
				if (dynamic_cast<CRenderQueueInvocationProxy*>((EarthView::World::Graphic::CRenderQueueInvocation*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderQueueInvocation::getSuppressShadows();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getSuppressShadows();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderQueueInvocation_getSuppressShadows_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderQueueInvocation_getSuppressShadows_ev_bool_Callback* pCallback )
			{
				CRenderQueueInvocationProxy* ptr = dynamic_cast<CRenderQueueInvocationProxy*>((EarthView::World::Graphic::CRenderQueueInvocation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderQueueInvocation_getSuppressShadows_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderQueueInvocation_getSuppressShadows_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderQueueInvocation* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueInvocation*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderQueueInvocation::getSuppressShadows();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueueInvocation_setSuppressRenderStateChanges_void_ev_bool(void *pObjectXXXX, _in ev_bool suppress )
			{
				EarthView::World::Graphic::CRenderQueueInvocation* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueInvocation*) pObjectXXXX;
				if (dynamic_cast<CRenderQueueInvocationProxy*>((EarthView::World::Graphic::CRenderQueueInvocation*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderQueueInvocation::setSuppressRenderStateChanges(suppress);
				else
					ptrNativeObject->setSuppressRenderStateChanges(suppress);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderQueueInvocation_setSuppressRenderStateChanges_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderQueueInvocation_setSuppressRenderStateChanges_void_ev_bool_Callback* pCallback )
			{
				CRenderQueueInvocationProxy* ptr = dynamic_cast<CRenderQueueInvocationProxy*>((EarthView::World::Graphic::CRenderQueueInvocation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderQueueInvocation_setSuppressRenderStateChanges_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueueInvocation_setSuppressRenderStateChanges_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool suppress )
			{
				EarthView::World::Graphic::CRenderQueueInvocation* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueInvocation*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderQueueInvocation::setSuppressRenderStateChanges(suppress);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderQueueInvocation_getSuppressRenderStateChanges_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderQueueInvocation* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueInvocation*) pObjectXXXX;
				if (dynamic_cast<CRenderQueueInvocationProxy*>((EarthView::World::Graphic::CRenderQueueInvocation*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderQueueInvocation::getSuppressRenderStateChanges();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getSuppressRenderStateChanges();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderQueueInvocation_getSuppressRenderStateChanges_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderQueueInvocation_getSuppressRenderStateChanges_ev_bool_Callback* pCallback )
			{
				CRenderQueueInvocationProxy* ptr = dynamic_cast<CRenderQueueInvocationProxy*>((EarthView::World::Graphic::CRenderQueueInvocation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderQueueInvocation_getSuppressRenderStateChanges_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderQueueInvocation_getSuppressRenderStateChanges_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderQueueInvocation* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueInvocation*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderQueueInvocation::getSuppressRenderStateChanges();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueueInvocation_invoke_void_CRenderQueueGroup_CSceneManager(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderQueueGroup* group, _in EarthView::World::Graphic::CSceneManager* targetSceneManager )
			{
				EarthView::World::Graphic::CRenderQueueInvocation* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueInvocation*) pObjectXXXX;
				if (dynamic_cast<CRenderQueueInvocationProxy*>((EarthView::World::Graphic::CRenderQueueInvocation*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderQueueInvocation::invoke(group, targetSceneManager);
				else
					ptrNativeObject->invoke(group, targetSceneManager);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderQueueInvocation_invoke_void_CRenderQueueGroup_CSceneManager( void *pObjectXXXX, EarthView_World_Graphic_CRenderQueueInvocation_invoke_void_CRenderQueueGroup_CSceneManager_Callback* pCallback )
			{
				CRenderQueueInvocationProxy* ptr = dynamic_cast<CRenderQueueInvocationProxy*>((EarthView::World::Graphic::CRenderQueueInvocation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderQueueInvocation_invoke_void_CRenderQueueGroup_CSceneManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueueInvocation_invoke_void_CRenderQueueGroup_CSceneManager_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderQueueGroup* group, _in EarthView::World::Graphic::CSceneManager* targetSceneManager )
			{
				EarthView::World::Graphic::CRenderQueueInvocation* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueInvocation*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderQueueInvocation::invoke(group, targetSceneManager);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CRenderQueueInvocation_RENDER_QUEUE_INVOCATION_SHADOWS()
			{
				EVString objXXXX = EarthView::World::Graphic::CRenderQueueInvocation::RENDER_QUEUE_INVOCATION_SHADOWS;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CRenderQueueInvocation_RENDER_QUEUE_INVOCATION_SHADOWS( char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Graphic::CRenderQueueInvocation::RENDER_QUEUE_INVOCATION_SHADOWS = value1;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RenderQueueInvocationList_push_back_void_CRenderQueueInvocation(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderQueueInvocation*& ref_t )
			{
				EarthView::World::Graphic::RenderQueueInvocationList* ptrNativeObject = (EarthView::World::Graphic::RenderQueueInvocationList*) pObjectXXXX;
				ptrNativeObject->push_back(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RenderQueueInvocationList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::RenderQueueInvocationList* ptrNativeObject = (EarthView::World::Graphic::RenderQueueInvocationList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderQueueInvocation*  _stdcall EarthView_World_Graphic_RenderQueueInvocationList_front_CRenderQueueInvocation(void *pObjectXXXX )
			{
				EarthView::World::Graphic::RenderQueueInvocationList* ptrNativeObject = (EarthView::World::Graphic::RenderQueueInvocationList*) pObjectXXXX;
				EarthView::World::Graphic::CRenderQueueInvocation* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderQueueInvocation*  _stdcall EarthView_World_Graphic_RenderQueueInvocationList_back_CRenderQueueInvocation(void *pObjectXXXX )
			{
				EarthView::World::Graphic::RenderQueueInvocationList* ptrNativeObject = (EarthView::World::Graphic::RenderQueueInvocationList*) pObjectXXXX;
				EarthView::World::Graphic::CRenderQueueInvocation* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RenderQueueInvocationList_insert_void_ev_uint32_CRenderQueueInvocation(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Graphic::CRenderQueueInvocation*& ref_t )
			{
				EarthView::World::Graphic::RenderQueueInvocationList* ptrNativeObject = (EarthView::World::Graphic::RenderQueueInvocationList*) pObjectXXXX;
				ptrNativeObject->insert(pos, ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RenderQueueInvocationList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::RenderQueueInvocationList* ptrNativeObject = (EarthView::World::Graphic::RenderQueueInvocationList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RenderQueueInvocationList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::RenderQueueInvocationList* ptrNativeObject = (EarthView::World::Graphic::RenderQueueInvocationList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderQueueInvocation*  _stdcall EarthView_World_Graphic_RenderQueueInvocationList_OperatorIndex_CRenderQueueInvocation_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::RenderQueueInvocationList& objYYYY = *(EarthView::World::Graphic::RenderQueueInvocationList*) pObjXXXX;
				EarthView::World::Graphic::CRenderQueueInvocation* objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderQueueInvocation*  _stdcall EarthView_World_Graphic_RenderQueueInvocationList_at_CRenderQueueInvocation_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::RenderQueueInvocationList* ptrNativeObject = (EarthView::World::Graphic::RenderQueueInvocationList*) pObjectXXXX;
				EarthView::World::Graphic::CRenderQueueInvocation* objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_RenderQueueInvocationList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::RenderQueueInvocationList* ptrNativeObject = (EarthView::World::Graphic::RenderQueueInvocationList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RenderQueueInvocationList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::RenderQueueInvocationList* ptrNativeObject = (EarthView::World::Graphic::RenderQueueInvocationList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RenderQueueInvocationList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::RenderQueueInvocationList* ptrNativeObject = (EarthView::World::Graphic::RenderQueueInvocationList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RenderQueueInvocationList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::RenderQueueInvocationList* ptrNativeObject = (EarthView::World::Graphic::RenderQueueInvocationList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RenderQueueInvocationIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::RenderQueueInvocationIterator* ptrNativeObject = (EarthView::World::Graphic::RenderQueueInvocationIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RenderQueueInvocationIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::RenderQueueInvocationIterator* ptrNativeObject = (EarthView::World::Graphic::RenderQueueInvocationIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderQueueInvocation*  _stdcall EarthView_World_Graphic_RenderQueueInvocationIterator_getCurrent_CRenderQueueInvocation(void *pObjectXXXX )
			{
				EarthView::World::Graphic::RenderQueueInvocationIterator* ptrNativeObject = (EarthView::World::Graphic::RenderQueueInvocationIterator*) pObjectXXXX;
				EarthView::World::Graphic::CRenderQueueInvocation* objXXXX = ptrNativeObject->getCurrent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderQueueInvocation*  _stdcall EarthView_World_Graphic_RenderQueueInvocationIterator_next_CRenderQueueInvocation(void *pObjectXXXX )
			{
				EarthView::World::Graphic::RenderQueueInvocationIterator* ptrNativeObject = (EarthView::World::Graphic::RenderQueueInvocationIterator*) pObjectXXXX;
				EarthView::World::Graphic::CRenderQueueInvocation* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderQueueInvocation*  _stdcall EarthView_World_Graphic_RenderQueueInvocationIterator_getBegin_CRenderQueueInvocation(void *pObjectXXXX )
			{
				EarthView::World::Graphic::RenderQueueInvocationIterator* ptrNativeObject = (EarthView::World::Graphic::RenderQueueInvocationIterator*) pObjectXXXX;
				EarthView::World::Graphic::CRenderQueueInvocation* objXXXX = ptrNativeObject->getBegin();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderQueueInvocation*  _stdcall EarthView_World_Graphic_RenderQueueInvocationIterator_getEnd_CRenderQueueInvocation(void *pObjectXXXX )
			{
				EarthView::World::Graphic::RenderQueueInvocationIterator* ptrNativeObject = (EarthView::World::Graphic::RenderQueueInvocationIterator*) pObjectXXXX;
				EarthView::World::Graphic::CRenderQueueInvocation* objXXXX = ptrNativeObject->getEnd();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_CRenderQueueInvocationSequence_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderQueueInvocationSequence* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueInvocationSequence*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderQueueInvocation*  _stdcall EarthView_World_Graphic_CRenderQueueInvocationSequence_add_CRenderQueueInvocation_ev_uint8_EVString(void *pObjectXXXX, _in ev_uint8 renderQueueGroupID, _in const char* invocationName )
			{
				EarthView::World::Core::ev_string invocationName1 = invocationName;
				EarthView::World::Graphic::CRenderQueueInvocationSequence* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueInvocationSequence*) pObjectXXXX;
				EarthView::World::Graphic::CRenderQueueInvocation* objXXXX = ptrNativeObject->add(renderQueueGroupID, invocationName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueueInvocationSequence_add_void_CRenderQueueInvocation(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderQueueInvocation* ref_i )
			{
				EarthView::World::Graphic::CRenderQueueInvocationSequence* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueInvocationSequence*) pObjectXXXX;
				ptrNativeObject->add(ref_i);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CRenderQueueInvocationSequence_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderQueueInvocationSequence* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueInvocationSequence*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueueInvocationSequence_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderQueueInvocationSequence* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueInvocationSequence*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderQueueInvocation*  _stdcall EarthView_World_Graphic_CRenderQueueInvocationSequence_get_CRenderQueueInvocation_ev_size_t(void *pObjectXXXX, _in ev_uint64  index )
			{
				EarthView::World::Graphic::CRenderQueueInvocationSequence* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueInvocationSequence*) pObjectXXXX;
				EarthView::World::Graphic::CRenderQueueInvocation* objXXXX = ptrNativeObject->get(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueueInvocationSequence_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  index )
			{
				EarthView::World::Graphic::CRenderQueueInvocationSequence* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueInvocationSequence*) pObjectXXXX;
				ptrNativeObject->remove(index);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CRenderQueueInvocationSequence_iterator_RenderQueueInvocationIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderQueueInvocationSequence* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueInvocationSequence*) pObjectXXXX;
				EarthView::World::Graphic::RenderQueueInvocationIterator objXXXX = ptrNativeObject->iterator();
				EarthView::World::Graphic::RenderQueueInvocationIterator *pXXXX = new EarthView::World::Graphic::RenderQueueInvocationIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
		}
	}
}
