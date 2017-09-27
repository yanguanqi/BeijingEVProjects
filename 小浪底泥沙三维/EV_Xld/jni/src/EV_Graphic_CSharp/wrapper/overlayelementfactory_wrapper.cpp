/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/overlayelementfactory.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef EarthView::World::Graphic::COverlayElement*  ( _stdcall EarthView_World_Graphic_COverlayElementFactory_createOverlayElement_COverlayElement_EVString_Callback)(_in char*& instanceName);
			typedef void  ( _stdcall EarthView_World_Graphic_COverlayElementFactory_destroyOverlayElement_void_COverlayElement_Callback)(_in EarthView::World::Graphic::COverlayElement* pElement);
			typedef char*  ( _stdcall EarthView_World_Graphic_COverlayElementFactory_getTypeName_EVString_Callback)();
			class COverlayElementFactoryProxy : public EarthView::World::Graphic::COverlayElementFactory
			{
			private:
				EarthView_World_Graphic_COverlayElementFactory_createOverlayElement_COverlayElement_EVString_Callback* m_EarthView_World_Graphic_COverlayElementFactory_createOverlayElement_COverlayElement_EVString_Callback;
				EarthView_World_Graphic_COverlayElementFactory_destroyOverlayElement_void_COverlayElement_Callback* m_EarthView_World_Graphic_COverlayElementFactory_destroyOverlayElement_void_COverlayElement_Callback;
				EarthView_World_Graphic_COverlayElementFactory_getTypeName_EVString_Callback* m_EarthView_World_Graphic_COverlayElementFactory_getTypeName_EVString_Callback;
			public:
				COverlayElementFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : COverlayElementFactory(pList)
				{
					m_EarthView_World_Graphic_COverlayElementFactory_createOverlayElement_COverlayElement_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COverlayElementFactory_destroyOverlayElement_void_COverlayElement_Callback = NULL;
					m_EarthView_World_Graphic_COverlayElementFactory_getTypeName_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_COverlayElementFactory_createOverlayElement_COverlayElement_EVString(EarthView_World_Graphic_COverlayElementFactory_createOverlayElement_COverlayElement_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COverlayElementFactory_createOverlayElement_COverlayElement_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COverlayElementFactory_destroyOverlayElement_void_COverlayElement(EarthView_World_Graphic_COverlayElementFactory_destroyOverlayElement_void_COverlayElement_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COverlayElementFactory_destroyOverlayElement_void_COverlayElement_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COverlayElementFactory_getTypeName_EVString(EarthView_World_Graphic_COverlayElementFactory_getTypeName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COverlayElementFactory_getTypeName_EVString_Callback = pCallback;
				}
				virtual EarthView::World::Graphic::COverlayElement* createOverlayElement(_in const EVString& instanceName)
				{
					if(m_EarthView_World_Graphic_COverlayElementFactory_createOverlayElement_COverlayElement_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* instanceName_Char = instanceName.makeBuffer();
						EarthView::World::Graphic::COverlayElement* returnValue = m_EarthView_World_Graphic_COverlayElementFactory_createOverlayElement_COverlayElement_EVString_Callback(instanceName_Char);
						return returnValue;
					}
					else
						return this->COverlayElementFactory::createOverlayElement(instanceName);
				}
				virtual void destroyOverlayElement(_in EarthView::World::Graphic::COverlayElement* pElement)
				{
					if(m_EarthView_World_Graphic_COverlayElementFactory_destroyOverlayElement_void_COverlayElement_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COverlayElementFactory_destroyOverlayElement_void_COverlayElement_Callback(pElement);
					}
					else
						return this->COverlayElementFactory::destroyOverlayElement(pElement);
				}
				virtual EVString getTypeName() const
				{
					if(m_EarthView_World_Graphic_COverlayElementFactory_getTypeName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_COverlayElementFactory_getTypeName_EVString_Callback();
						return returnValue;
					}
					else
						return this->COverlayElementFactory::getTypeName();
				}
			};
			REGISTER_FACTORY_CLASS(COverlayElementFactoryProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlayElement*  _stdcall EarthView_World_Graphic_COverlayElementFactory_createOverlayElement_COverlayElement_EVString(void *pObjectXXXX, _in const char* instanceName )
			{
				EarthView::World::Core::ev_string instanceName1 = instanceName;
				EarthView::World::Graphic::COverlayElementFactory* ptrNativeObject = (EarthView::World::Graphic::COverlayElementFactory*) pObjectXXXX;
				if (dynamic_cast<COverlayElementFactoryProxy*>((EarthView::World::Graphic::COverlayElementFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::COverlayElement* objXXXX = ptrNativeObject->EarthView::World::Graphic::COverlayElementFactory::createOverlayElement(instanceName1);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::COverlayElement* objXXXX = ptrNativeObject->createOverlayElement(instanceName1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COverlayElementFactory_createOverlayElement_COverlayElement_EVString( void *pObjectXXXX, EarthView_World_Graphic_COverlayElementFactory_createOverlayElement_COverlayElement_EVString_Callback* pCallback )
			{
				COverlayElementFactoryProxy* ptr = dynamic_cast<COverlayElementFactoryProxy*>((EarthView::World::Graphic::COverlayElementFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COverlayElementFactory_createOverlayElement_COverlayElement_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlayElement*  _stdcall EarthView_World_Graphic_COverlayElementFactory_createOverlayElement_COverlayElement_EVString_NoVirtual(void *pObjectXXXX, _in const char* instanceName )
			{
				EarthView::World::Core::ev_string instanceName1 = instanceName;
				EarthView::World::Graphic::COverlayElementFactory* ptrNativeObject = (EarthView::World::Graphic::COverlayElementFactory*) pObjectXXXX;
				EarthView::World::Graphic::COverlayElement* objXXXX = ptrNativeObject->EarthView::World::Graphic::COverlayElementFactory::createOverlayElement(instanceName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlayElementFactory_destroyOverlayElement_void_COverlayElement(void *pObjectXXXX, _in EarthView::World::Graphic::COverlayElement* pElement )
			{
				EarthView::World::Graphic::COverlayElementFactory* ptrNativeObject = (EarthView::World::Graphic::COverlayElementFactory*) pObjectXXXX;
				if (dynamic_cast<COverlayElementFactoryProxy*>((EarthView::World::Graphic::COverlayElementFactory*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::COverlayElementFactory::destroyOverlayElement(pElement);
				else
					ptrNativeObject->destroyOverlayElement(pElement);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COverlayElementFactory_destroyOverlayElement_void_COverlayElement( void *pObjectXXXX, EarthView_World_Graphic_COverlayElementFactory_destroyOverlayElement_void_COverlayElement_Callback* pCallback )
			{
				COverlayElementFactoryProxy* ptr = dynamic_cast<COverlayElementFactoryProxy*>((EarthView::World::Graphic::COverlayElementFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COverlayElementFactory_destroyOverlayElement_void_COverlayElement(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlayElementFactory_destroyOverlayElement_void_COverlayElement_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::COverlayElement* pElement )
			{
				EarthView::World::Graphic::COverlayElementFactory* ptrNativeObject = (EarthView::World::Graphic::COverlayElementFactory*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::COverlayElementFactory::destroyOverlayElement(pElement);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_COverlayElementFactory_getTypeName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::COverlayElementFactory* ptrNativeObject = (EarthView::World::Graphic::COverlayElementFactory*) pObjectXXXX;
				if (dynamic_cast<COverlayElementFactoryProxy*>((EarthView::World::Graphic::COverlayElementFactory*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::COverlayElementFactory::getTypeName();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getTypeName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COverlayElementFactory_getTypeName_EVString( void *pObjectXXXX, EarthView_World_Graphic_COverlayElementFactory_getTypeName_EVString_Callback* pCallback )
			{
				COverlayElementFactoryProxy* ptr = dynamic_cast<COverlayElementFactoryProxy*>((EarthView::World::Graphic::COverlayElementFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COverlayElementFactory_getTypeName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_COverlayElementFactory_getTypeName_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::COverlayElementFactory* ptrNativeObject = (EarthView::World::Graphic::COverlayElementFactory*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::COverlayElementFactory::getTypeName();
				return objXXXX.makeBuffer();
			}
			typedef EarthView::World::Graphic::COverlayElement*  ( _stdcall EarthView_World_Graphic_CPanelOverlayElementFactory_createOverlayElement_COverlayElement_EVString_Callback)(_in char*& instanceName);
			typedef void  ( _stdcall EarthView_World_Graphic_CPanelOverlayElementFactory_destroyOverlayElement_void_COverlayElement_Callback)(_in EarthView::World::Graphic::COverlayElement* pElement);
			typedef char*  ( _stdcall EarthView_World_Graphic_CPanelOverlayElementFactory_getTypeName_EVString_Callback)();
			class CPanelOverlayElementFactoryProxy : public EarthView::World::Graphic::CPanelOverlayElementFactory
			{
			private:
				EarthView_World_Graphic_CPanelOverlayElementFactory_createOverlayElement_COverlayElement_EVString_Callback* m_EarthView_World_Graphic_CPanelOverlayElementFactory_createOverlayElement_COverlayElement_EVString_Callback;
				EarthView_World_Graphic_CPanelOverlayElementFactory_destroyOverlayElement_void_COverlayElement_Callback* m_EarthView_World_Graphic_CPanelOverlayElementFactory_destroyOverlayElement_void_COverlayElement_Callback;
				EarthView_World_Graphic_CPanelOverlayElementFactory_getTypeName_EVString_Callback* m_EarthView_World_Graphic_CPanelOverlayElementFactory_getTypeName_EVString_Callback;
			public:
				CPanelOverlayElementFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CPanelOverlayElementFactory(pList)
				{
					m_EarthView_World_Graphic_CPanelOverlayElementFactory_createOverlayElement_COverlayElement_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CPanelOverlayElementFactory_destroyOverlayElement_void_COverlayElement_Callback = NULL;
					m_EarthView_World_Graphic_CPanelOverlayElementFactory_getTypeName_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CPanelOverlayElementFactory_createOverlayElement_COverlayElement_EVString(EarthView_World_Graphic_CPanelOverlayElementFactory_createOverlayElement_COverlayElement_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPanelOverlayElementFactory_createOverlayElement_COverlayElement_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPanelOverlayElementFactory_destroyOverlayElement_void_COverlayElement(EarthView_World_Graphic_CPanelOverlayElementFactory_destroyOverlayElement_void_COverlayElement_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPanelOverlayElementFactory_destroyOverlayElement_void_COverlayElement_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPanelOverlayElementFactory_getTypeName_EVString(EarthView_World_Graphic_CPanelOverlayElementFactory_getTypeName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPanelOverlayElementFactory_getTypeName_EVString_Callback = pCallback;
				}
				virtual EarthView::World::Graphic::COverlayElement* createOverlayElement(_in const EVString& instanceName)
				{
					if(m_EarthView_World_Graphic_CPanelOverlayElementFactory_createOverlayElement_COverlayElement_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* instanceName_Char = instanceName.makeBuffer();
						EarthView::World::Graphic::COverlayElement* returnValue = m_EarthView_World_Graphic_CPanelOverlayElementFactory_createOverlayElement_COverlayElement_EVString_Callback(instanceName_Char);
						return returnValue;
					}
					else
						return this->CPanelOverlayElementFactory::createOverlayElement(instanceName);
				}
				virtual EVString getTypeName() const
				{
					if(m_EarthView_World_Graphic_CPanelOverlayElementFactory_getTypeName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CPanelOverlayElementFactory_getTypeName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CPanelOverlayElementFactory::getTypeName();
				}
				virtual void destroyOverlayElement(_in EarthView::World::Graphic::COverlayElement* pElement)
				{
					if(m_EarthView_World_Graphic_CPanelOverlayElementFactory_destroyOverlayElement_void_COverlayElement_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CPanelOverlayElementFactory_destroyOverlayElement_void_COverlayElement_Callback(pElement);
					}
					else
						return this->CPanelOverlayElementFactory::destroyOverlayElement(pElement);
				}
			};
			REGISTER_FACTORY_CLASS(CPanelOverlayElementFactoryProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlayElement*  _stdcall EarthView_World_Graphic_CPanelOverlayElementFactory_createOverlayElement_COverlayElement_EVString(void *pObjectXXXX, _in const char* instanceName )
			{
				EarthView::World::Core::ev_string instanceName1 = instanceName;
				EarthView::World::Graphic::CPanelOverlayElementFactory* ptrNativeObject = (EarthView::World::Graphic::CPanelOverlayElementFactory*) pObjectXXXX;
				if (dynamic_cast<CPanelOverlayElementFactoryProxy*>((EarthView::World::Graphic::CPanelOverlayElementFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::COverlayElement* objXXXX = ptrNativeObject->EarthView::World::Graphic::CPanelOverlayElementFactory::createOverlayElement(instanceName1);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::COverlayElement* objXXXX = ptrNativeObject->createOverlayElement(instanceName1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPanelOverlayElementFactory_createOverlayElement_COverlayElement_EVString( void *pObjectXXXX, EarthView_World_Graphic_CPanelOverlayElementFactory_createOverlayElement_COverlayElement_EVString_Callback* pCallback )
			{
				CPanelOverlayElementFactoryProxy* ptr = dynamic_cast<CPanelOverlayElementFactoryProxy*>((EarthView::World::Graphic::CPanelOverlayElementFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPanelOverlayElementFactory_createOverlayElement_COverlayElement_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlayElement*  _stdcall EarthView_World_Graphic_CPanelOverlayElementFactory_createOverlayElement_COverlayElement_EVString_NoVirtual(void *pObjectXXXX, _in const char* instanceName )
			{
				EarthView::World::Core::ev_string instanceName1 = instanceName;
				EarthView::World::Graphic::CPanelOverlayElementFactory* ptrNativeObject = (EarthView::World::Graphic::CPanelOverlayElementFactory*) pObjectXXXX;
				EarthView::World::Graphic::COverlayElement* objXXXX = ptrNativeObject->EarthView::World::Graphic::CPanelOverlayElementFactory::createOverlayElement(instanceName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CPanelOverlayElementFactory_getTypeName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPanelOverlayElementFactory* ptrNativeObject = (EarthView::World::Graphic::CPanelOverlayElementFactory*) pObjectXXXX;
				if (dynamic_cast<CPanelOverlayElementFactoryProxy*>((EarthView::World::Graphic::CPanelOverlayElementFactory*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CPanelOverlayElementFactory::getTypeName();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getTypeName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPanelOverlayElementFactory_getTypeName_EVString( void *pObjectXXXX, EarthView_World_Graphic_CPanelOverlayElementFactory_getTypeName_EVString_Callback* pCallback )
			{
				CPanelOverlayElementFactoryProxy* ptr = dynamic_cast<CPanelOverlayElementFactoryProxy*>((EarthView::World::Graphic::CPanelOverlayElementFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPanelOverlayElementFactory_getTypeName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CPanelOverlayElementFactory_getTypeName_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPanelOverlayElementFactory* ptrNativeObject = (EarthView::World::Graphic::CPanelOverlayElementFactory*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CPanelOverlayElementFactory::getTypeName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPanelOverlayElementFactory_destroyOverlayElement_void_COverlayElement( void *pObjectXXXX, EarthView_World_Graphic_CPanelOverlayElementFactory_destroyOverlayElement_void_COverlayElement_Callback* pCallback )
			{
				CPanelOverlayElementFactoryProxy* ptr = dynamic_cast<CPanelOverlayElementFactoryProxy*>((EarthView::World::Graphic::CPanelOverlayElementFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPanelOverlayElementFactory_destroyOverlayElement_void_COverlayElement(pCallback);
				}
			}
			typedef EarthView::World::Graphic::COverlayElement*  ( _stdcall EarthView_World_Graphic_CBorderPanelOverlayElementFactory_createOverlayElement_COverlayElement_EVString_Callback)(_in char*& instanceName);
			typedef void  ( _stdcall EarthView_World_Graphic_CBorderPanelOverlayElementFactory_destroyOverlayElement_void_COverlayElement_Callback)(_in EarthView::World::Graphic::COverlayElement* pElement);
			typedef char*  ( _stdcall EarthView_World_Graphic_CBorderPanelOverlayElementFactory_getTypeName_EVString_Callback)();
			class CBorderPanelOverlayElementFactoryProxy : public EarthView::World::Graphic::CBorderPanelOverlayElementFactory
			{
			private:
				EarthView_World_Graphic_CBorderPanelOverlayElementFactory_createOverlayElement_COverlayElement_EVString_Callback* m_EarthView_World_Graphic_CBorderPanelOverlayElementFactory_createOverlayElement_COverlayElement_EVString_Callback;
				EarthView_World_Graphic_CBorderPanelOverlayElementFactory_destroyOverlayElement_void_COverlayElement_Callback* m_EarthView_World_Graphic_CBorderPanelOverlayElementFactory_destroyOverlayElement_void_COverlayElement_Callback;
				EarthView_World_Graphic_CBorderPanelOverlayElementFactory_getTypeName_EVString_Callback* m_EarthView_World_Graphic_CBorderPanelOverlayElementFactory_getTypeName_EVString_Callback;
			public:
				CBorderPanelOverlayElementFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CBorderPanelOverlayElementFactory(pList)
				{
					m_EarthView_World_Graphic_CBorderPanelOverlayElementFactory_createOverlayElement_COverlayElement_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CBorderPanelOverlayElementFactory_destroyOverlayElement_void_COverlayElement_Callback = NULL;
					m_EarthView_World_Graphic_CBorderPanelOverlayElementFactory_getTypeName_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CBorderPanelOverlayElementFactory_createOverlayElement_COverlayElement_EVString(EarthView_World_Graphic_CBorderPanelOverlayElementFactory_createOverlayElement_COverlayElement_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBorderPanelOverlayElementFactory_createOverlayElement_COverlayElement_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CBorderPanelOverlayElementFactory_destroyOverlayElement_void_COverlayElement(EarthView_World_Graphic_CBorderPanelOverlayElementFactory_destroyOverlayElement_void_COverlayElement_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBorderPanelOverlayElementFactory_destroyOverlayElement_void_COverlayElement_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CBorderPanelOverlayElementFactory_getTypeName_EVString(EarthView_World_Graphic_CBorderPanelOverlayElementFactory_getTypeName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBorderPanelOverlayElementFactory_getTypeName_EVString_Callback = pCallback;
				}
				virtual EarthView::World::Graphic::COverlayElement* createOverlayElement(_in const EVString& instanceName)
				{
					if(m_EarthView_World_Graphic_CBorderPanelOverlayElementFactory_createOverlayElement_COverlayElement_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* instanceName_Char = instanceName.makeBuffer();
						EarthView::World::Graphic::COverlayElement* returnValue = m_EarthView_World_Graphic_CBorderPanelOverlayElementFactory_createOverlayElement_COverlayElement_EVString_Callback(instanceName_Char);
						return returnValue;
					}
					else
						return this->CBorderPanelOverlayElementFactory::createOverlayElement(instanceName);
				}
				virtual EVString getTypeName() const
				{
					if(m_EarthView_World_Graphic_CBorderPanelOverlayElementFactory_getTypeName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CBorderPanelOverlayElementFactory_getTypeName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CBorderPanelOverlayElementFactory::getTypeName();
				}
				virtual void destroyOverlayElement(_in EarthView::World::Graphic::COverlayElement* pElement)
				{
					if(m_EarthView_World_Graphic_CBorderPanelOverlayElementFactory_destroyOverlayElement_void_COverlayElement_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CBorderPanelOverlayElementFactory_destroyOverlayElement_void_COverlayElement_Callback(pElement);
					}
					else
						return this->CBorderPanelOverlayElementFactory::destroyOverlayElement(pElement);
				}
			};
			REGISTER_FACTORY_CLASS(CBorderPanelOverlayElementFactoryProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlayElement*  _stdcall EarthView_World_Graphic_CBorderPanelOverlayElementFactory_createOverlayElement_COverlayElement_EVString(void *pObjectXXXX, _in const char* instanceName )
			{
				EarthView::World::Core::ev_string instanceName1 = instanceName;
				EarthView::World::Graphic::CBorderPanelOverlayElementFactory* ptrNativeObject = (EarthView::World::Graphic::CBorderPanelOverlayElementFactory*) pObjectXXXX;
				if (dynamic_cast<CBorderPanelOverlayElementFactoryProxy*>((EarthView::World::Graphic::CBorderPanelOverlayElementFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::COverlayElement* objXXXX = ptrNativeObject->EarthView::World::Graphic::CBorderPanelOverlayElementFactory::createOverlayElement(instanceName1);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::COverlayElement* objXXXX = ptrNativeObject->createOverlayElement(instanceName1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBorderPanelOverlayElementFactory_createOverlayElement_COverlayElement_EVString( void *pObjectXXXX, EarthView_World_Graphic_CBorderPanelOverlayElementFactory_createOverlayElement_COverlayElement_EVString_Callback* pCallback )
			{
				CBorderPanelOverlayElementFactoryProxy* ptr = dynamic_cast<CBorderPanelOverlayElementFactoryProxy*>((EarthView::World::Graphic::CBorderPanelOverlayElementFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBorderPanelOverlayElementFactory_createOverlayElement_COverlayElement_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlayElement*  _stdcall EarthView_World_Graphic_CBorderPanelOverlayElementFactory_createOverlayElement_COverlayElement_EVString_NoVirtual(void *pObjectXXXX, _in const char* instanceName )
			{
				EarthView::World::Core::ev_string instanceName1 = instanceName;
				EarthView::World::Graphic::CBorderPanelOverlayElementFactory* ptrNativeObject = (EarthView::World::Graphic::CBorderPanelOverlayElementFactory*) pObjectXXXX;
				EarthView::World::Graphic::COverlayElement* objXXXX = ptrNativeObject->EarthView::World::Graphic::CBorderPanelOverlayElementFactory::createOverlayElement(instanceName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CBorderPanelOverlayElementFactory_getTypeName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CBorderPanelOverlayElementFactory* ptrNativeObject = (EarthView::World::Graphic::CBorderPanelOverlayElementFactory*) pObjectXXXX;
				if (dynamic_cast<CBorderPanelOverlayElementFactoryProxy*>((EarthView::World::Graphic::CBorderPanelOverlayElementFactory*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CBorderPanelOverlayElementFactory::getTypeName();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getTypeName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBorderPanelOverlayElementFactory_getTypeName_EVString( void *pObjectXXXX, EarthView_World_Graphic_CBorderPanelOverlayElementFactory_getTypeName_EVString_Callback* pCallback )
			{
				CBorderPanelOverlayElementFactoryProxy* ptr = dynamic_cast<CBorderPanelOverlayElementFactoryProxy*>((EarthView::World::Graphic::CBorderPanelOverlayElementFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBorderPanelOverlayElementFactory_getTypeName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CBorderPanelOverlayElementFactory_getTypeName_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CBorderPanelOverlayElementFactory* ptrNativeObject = (EarthView::World::Graphic::CBorderPanelOverlayElementFactory*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CBorderPanelOverlayElementFactory::getTypeName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBorderPanelOverlayElementFactory_destroyOverlayElement_void_COverlayElement( void *pObjectXXXX, EarthView_World_Graphic_CBorderPanelOverlayElementFactory_destroyOverlayElement_void_COverlayElement_Callback* pCallback )
			{
				CBorderPanelOverlayElementFactoryProxy* ptr = dynamic_cast<CBorderPanelOverlayElementFactoryProxy*>((EarthView::World::Graphic::CBorderPanelOverlayElementFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBorderPanelOverlayElementFactory_destroyOverlayElement_void_COverlayElement(pCallback);
				}
			}
			typedef EarthView::World::Graphic::COverlayElement*  ( _stdcall EarthView_World_Graphic_CTextAreaOverlayElementFactory_createOverlayElement_COverlayElement_EVString_Callback)(_in char*& instanceName);
			typedef void  ( _stdcall EarthView_World_Graphic_CTextAreaOverlayElementFactory_destroyOverlayElement_void_COverlayElement_Callback)(_in EarthView::World::Graphic::COverlayElement* pElement);
			typedef char*  ( _stdcall EarthView_World_Graphic_CTextAreaOverlayElementFactory_getTypeName_EVString_Callback)();
			class CTextAreaOverlayElementFactoryProxy : public EarthView::World::Graphic::CTextAreaOverlayElementFactory
			{
			private:
				EarthView_World_Graphic_CTextAreaOverlayElementFactory_createOverlayElement_COverlayElement_EVString_Callback* m_EarthView_World_Graphic_CTextAreaOverlayElementFactory_createOverlayElement_COverlayElement_EVString_Callback;
				EarthView_World_Graphic_CTextAreaOverlayElementFactory_destroyOverlayElement_void_COverlayElement_Callback* m_EarthView_World_Graphic_CTextAreaOverlayElementFactory_destroyOverlayElement_void_COverlayElement_Callback;
				EarthView_World_Graphic_CTextAreaOverlayElementFactory_getTypeName_EVString_Callback* m_EarthView_World_Graphic_CTextAreaOverlayElementFactory_getTypeName_EVString_Callback;
			public:
				CTextAreaOverlayElementFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CTextAreaOverlayElementFactory(pList)
				{
					m_EarthView_World_Graphic_CTextAreaOverlayElementFactory_createOverlayElement_COverlayElement_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CTextAreaOverlayElementFactory_destroyOverlayElement_void_COverlayElement_Callback = NULL;
					m_EarthView_World_Graphic_CTextAreaOverlayElementFactory_getTypeName_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CTextAreaOverlayElementFactory_createOverlayElement_COverlayElement_EVString(EarthView_World_Graphic_CTextAreaOverlayElementFactory_createOverlayElement_COverlayElement_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextAreaOverlayElementFactory_createOverlayElement_COverlayElement_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextAreaOverlayElementFactory_destroyOverlayElement_void_COverlayElement(EarthView_World_Graphic_CTextAreaOverlayElementFactory_destroyOverlayElement_void_COverlayElement_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextAreaOverlayElementFactory_destroyOverlayElement_void_COverlayElement_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextAreaOverlayElementFactory_getTypeName_EVString(EarthView_World_Graphic_CTextAreaOverlayElementFactory_getTypeName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextAreaOverlayElementFactory_getTypeName_EVString_Callback = pCallback;
				}
				virtual EarthView::World::Graphic::COverlayElement* createOverlayElement(_in const EVString& instanceName)
				{
					if(m_EarthView_World_Graphic_CTextAreaOverlayElementFactory_createOverlayElement_COverlayElement_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* instanceName_Char = instanceName.makeBuffer();
						EarthView::World::Graphic::COverlayElement* returnValue = m_EarthView_World_Graphic_CTextAreaOverlayElementFactory_createOverlayElement_COverlayElement_EVString_Callback(instanceName_Char);
						return returnValue;
					}
					else
						return this->CTextAreaOverlayElementFactory::createOverlayElement(instanceName);
				}
				virtual EVString getTypeName() const
				{
					if(m_EarthView_World_Graphic_CTextAreaOverlayElementFactory_getTypeName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CTextAreaOverlayElementFactory_getTypeName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CTextAreaOverlayElementFactory::getTypeName();
				}
				virtual void destroyOverlayElement(_in EarthView::World::Graphic::COverlayElement* pElement)
				{
					if(m_EarthView_World_Graphic_CTextAreaOverlayElementFactory_destroyOverlayElement_void_COverlayElement_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTextAreaOverlayElementFactory_destroyOverlayElement_void_COverlayElement_Callback(pElement);
					}
					else
						return this->CTextAreaOverlayElementFactory::destroyOverlayElement(pElement);
				}
			};
			REGISTER_FACTORY_CLASS(CTextAreaOverlayElementFactoryProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlayElement*  _stdcall EarthView_World_Graphic_CTextAreaOverlayElementFactory_createOverlayElement_COverlayElement_EVString(void *pObjectXXXX, _in const char* instanceName )
			{
				EarthView::World::Core::ev_string instanceName1 = instanceName;
				EarthView::World::Graphic::CTextAreaOverlayElementFactory* ptrNativeObject = (EarthView::World::Graphic::CTextAreaOverlayElementFactory*) pObjectXXXX;
				if (dynamic_cast<CTextAreaOverlayElementFactoryProxy*>((EarthView::World::Graphic::CTextAreaOverlayElementFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::COverlayElement* objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextAreaOverlayElementFactory::createOverlayElement(instanceName1);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::COverlayElement* objXXXX = ptrNativeObject->createOverlayElement(instanceName1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextAreaOverlayElementFactory_createOverlayElement_COverlayElement_EVString( void *pObjectXXXX, EarthView_World_Graphic_CTextAreaOverlayElementFactory_createOverlayElement_COverlayElement_EVString_Callback* pCallback )
			{
				CTextAreaOverlayElementFactoryProxy* ptr = dynamic_cast<CTextAreaOverlayElementFactoryProxy*>((EarthView::World::Graphic::CTextAreaOverlayElementFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextAreaOverlayElementFactory_createOverlayElement_COverlayElement_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlayElement*  _stdcall EarthView_World_Graphic_CTextAreaOverlayElementFactory_createOverlayElement_COverlayElement_EVString_NoVirtual(void *pObjectXXXX, _in const char* instanceName )
			{
				EarthView::World::Core::ev_string instanceName1 = instanceName;
				EarthView::World::Graphic::CTextAreaOverlayElementFactory* ptrNativeObject = (EarthView::World::Graphic::CTextAreaOverlayElementFactory*) pObjectXXXX;
				EarthView::World::Graphic::COverlayElement* objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextAreaOverlayElementFactory::createOverlayElement(instanceName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CTextAreaOverlayElementFactory_getTypeName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextAreaOverlayElementFactory* ptrNativeObject = (EarthView::World::Graphic::CTextAreaOverlayElementFactory*) pObjectXXXX;
				if (dynamic_cast<CTextAreaOverlayElementFactoryProxy*>((EarthView::World::Graphic::CTextAreaOverlayElementFactory*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextAreaOverlayElementFactory::getTypeName();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getTypeName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextAreaOverlayElementFactory_getTypeName_EVString( void *pObjectXXXX, EarthView_World_Graphic_CTextAreaOverlayElementFactory_getTypeName_EVString_Callback* pCallback )
			{
				CTextAreaOverlayElementFactoryProxy* ptr = dynamic_cast<CTextAreaOverlayElementFactoryProxy*>((EarthView::World::Graphic::CTextAreaOverlayElementFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextAreaOverlayElementFactory_getTypeName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CTextAreaOverlayElementFactory_getTypeName_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextAreaOverlayElementFactory* ptrNativeObject = (EarthView::World::Graphic::CTextAreaOverlayElementFactory*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextAreaOverlayElementFactory::getTypeName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextAreaOverlayElementFactory_destroyOverlayElement_void_COverlayElement( void *pObjectXXXX, EarthView_World_Graphic_CTextAreaOverlayElementFactory_destroyOverlayElement_void_COverlayElement_Callback* pCallback )
			{
				CTextAreaOverlayElementFactoryProxy* ptr = dynamic_cast<CTextAreaOverlayElementFactoryProxy*>((EarthView::World::Graphic::CTextAreaOverlayElementFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextAreaOverlayElementFactory_destroyOverlayElement_void_COverlayElement(pCallback);
				}
			}
			typedef EarthView::World::Graphic::COverlayElement*  ( _stdcall EarthView_World_Graphic_CCharOverlayElementFactory_createOverlayElement_COverlayElement_EVString_Callback)(_in char*& instanceName);
			typedef void  ( _stdcall EarthView_World_Graphic_CCharOverlayElementFactory_destroyOverlayElement_void_COverlayElement_Callback)(_in EarthView::World::Graphic::COverlayElement* pElement);
			typedef char*  ( _stdcall EarthView_World_Graphic_CCharOverlayElementFactory_getTypeName_EVString_Callback)();
			class CCharOverlayElementFactoryProxy : public EarthView::World::Graphic::CCharOverlayElementFactory
			{
			private:
				EarthView_World_Graphic_CCharOverlayElementFactory_createOverlayElement_COverlayElement_EVString_Callback* m_EarthView_World_Graphic_CCharOverlayElementFactory_createOverlayElement_COverlayElement_EVString_Callback;
				EarthView_World_Graphic_CCharOverlayElementFactory_destroyOverlayElement_void_COverlayElement_Callback* m_EarthView_World_Graphic_CCharOverlayElementFactory_destroyOverlayElement_void_COverlayElement_Callback;
				EarthView_World_Graphic_CCharOverlayElementFactory_getTypeName_EVString_Callback* m_EarthView_World_Graphic_CCharOverlayElementFactory_getTypeName_EVString_Callback;
			public:
				CCharOverlayElementFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CCharOverlayElementFactory(pList)
				{
					m_EarthView_World_Graphic_CCharOverlayElementFactory_createOverlayElement_COverlayElement_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CCharOverlayElementFactory_destroyOverlayElement_void_COverlayElement_Callback = NULL;
					m_EarthView_World_Graphic_CCharOverlayElementFactory_getTypeName_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CCharOverlayElementFactory_createOverlayElement_COverlayElement_EVString(EarthView_World_Graphic_CCharOverlayElementFactory_createOverlayElement_COverlayElement_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCharOverlayElementFactory_createOverlayElement_COverlayElement_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCharOverlayElementFactory_destroyOverlayElement_void_COverlayElement(EarthView_World_Graphic_CCharOverlayElementFactory_destroyOverlayElement_void_COverlayElement_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCharOverlayElementFactory_destroyOverlayElement_void_COverlayElement_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCharOverlayElementFactory_getTypeName_EVString(EarthView_World_Graphic_CCharOverlayElementFactory_getTypeName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCharOverlayElementFactory_getTypeName_EVString_Callback = pCallback;
				}
				virtual EarthView::World::Graphic::COverlayElement* createOverlayElement(_in const EVString& instanceName)
				{
					if(m_EarthView_World_Graphic_CCharOverlayElementFactory_createOverlayElement_COverlayElement_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* instanceName_Char = instanceName.makeBuffer();
						EarthView::World::Graphic::COverlayElement* returnValue = m_EarthView_World_Graphic_CCharOverlayElementFactory_createOverlayElement_COverlayElement_EVString_Callback(instanceName_Char);
						return returnValue;
					}
					else
						return this->CCharOverlayElementFactory::createOverlayElement(instanceName);
				}
				virtual EVString getTypeName() const
				{
					if(m_EarthView_World_Graphic_CCharOverlayElementFactory_getTypeName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CCharOverlayElementFactory_getTypeName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CCharOverlayElementFactory::getTypeName();
				}
				virtual void destroyOverlayElement(_in EarthView::World::Graphic::COverlayElement* pElement)
				{
					if(m_EarthView_World_Graphic_CCharOverlayElementFactory_destroyOverlayElement_void_COverlayElement_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCharOverlayElementFactory_destroyOverlayElement_void_COverlayElement_Callback(pElement);
					}
					else
						return this->CCharOverlayElementFactory::destroyOverlayElement(pElement);
				}
			};
			REGISTER_FACTORY_CLASS(CCharOverlayElementFactoryProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlayElement*  _stdcall EarthView_World_Graphic_CCharOverlayElementFactory_createOverlayElement_COverlayElement_EVString(void *pObjectXXXX, _in const char* instanceName )
			{
				EarthView::World::Core::ev_string instanceName1 = instanceName;
				EarthView::World::Graphic::CCharOverlayElementFactory* ptrNativeObject = (EarthView::World::Graphic::CCharOverlayElementFactory*) pObjectXXXX;
				if (dynamic_cast<CCharOverlayElementFactoryProxy*>((EarthView::World::Graphic::CCharOverlayElementFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::COverlayElement* objXXXX = ptrNativeObject->EarthView::World::Graphic::CCharOverlayElementFactory::createOverlayElement(instanceName1);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::COverlayElement* objXXXX = ptrNativeObject->createOverlayElement(instanceName1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCharOverlayElementFactory_createOverlayElement_COverlayElement_EVString( void *pObjectXXXX, EarthView_World_Graphic_CCharOverlayElementFactory_createOverlayElement_COverlayElement_EVString_Callback* pCallback )
			{
				CCharOverlayElementFactoryProxy* ptr = dynamic_cast<CCharOverlayElementFactoryProxy*>((EarthView::World::Graphic::CCharOverlayElementFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCharOverlayElementFactory_createOverlayElement_COverlayElement_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlayElement*  _stdcall EarthView_World_Graphic_CCharOverlayElementFactory_createOverlayElement_COverlayElement_EVString_NoVirtual(void *pObjectXXXX, _in const char* instanceName )
			{
				EarthView::World::Core::ev_string instanceName1 = instanceName;
				EarthView::World::Graphic::CCharOverlayElementFactory* ptrNativeObject = (EarthView::World::Graphic::CCharOverlayElementFactory*) pObjectXXXX;
				EarthView::World::Graphic::COverlayElement* objXXXX = ptrNativeObject->EarthView::World::Graphic::CCharOverlayElementFactory::createOverlayElement(instanceName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CCharOverlayElementFactory_getTypeName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCharOverlayElementFactory* ptrNativeObject = (EarthView::World::Graphic::CCharOverlayElementFactory*) pObjectXXXX;
				if (dynamic_cast<CCharOverlayElementFactoryProxy*>((EarthView::World::Graphic::CCharOverlayElementFactory*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CCharOverlayElementFactory::getTypeName();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getTypeName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCharOverlayElementFactory_getTypeName_EVString( void *pObjectXXXX, EarthView_World_Graphic_CCharOverlayElementFactory_getTypeName_EVString_Callback* pCallback )
			{
				CCharOverlayElementFactoryProxy* ptr = dynamic_cast<CCharOverlayElementFactoryProxy*>((EarthView::World::Graphic::CCharOverlayElementFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCharOverlayElementFactory_getTypeName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CCharOverlayElementFactory_getTypeName_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCharOverlayElementFactory* ptrNativeObject = (EarthView::World::Graphic::CCharOverlayElementFactory*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CCharOverlayElementFactory::getTypeName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCharOverlayElementFactory_destroyOverlayElement_void_COverlayElement( void *pObjectXXXX, EarthView_World_Graphic_CCharOverlayElementFactory_destroyOverlayElement_void_COverlayElement_Callback* pCallback )
			{
				CCharOverlayElementFactoryProxy* ptr = dynamic_cast<CCharOverlayElementFactoryProxy*>((EarthView::World::Graphic::CCharOverlayElementFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCharOverlayElementFactory_destroyOverlayElement_void_COverlayElement(pCallback);
				}
			}
		}
	}
}
