/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/particleaffectorfactory.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef char*  ( _stdcall EarthView_World_Graphic_CParticleAffectorFactory_getName_EVString_Callback)();
			typedef EarthView::World::Graphic::CParticleAffector*  ( _stdcall EarthView_World_Graphic_CParticleAffectorFactory_createAffector_CParticleAffector_CParticleSystem_Callback)(_in EarthView::World::Graphic::CParticleSystem* psys);
			typedef void  ( _stdcall EarthView_World_Graphic_CParticleAffectorFactory_destroyAffector_void_CParticleAffector_Callback)(_in EarthView::World::Graphic::CParticleAffector* e);
			class CParticleAffectorFactoryProxy : public EarthView::World::Graphic::CParticleAffectorFactory
			{
			private:
				EarthView_World_Graphic_CParticleAffectorFactory_getName_EVString_Callback* m_EarthView_World_Graphic_CParticleAffectorFactory_getName_EVString_Callback;
				EarthView_World_Graphic_CParticleAffectorFactory_createAffector_CParticleAffector_CParticleSystem_Callback* m_EarthView_World_Graphic_CParticleAffectorFactory_createAffector_CParticleAffector_CParticleSystem_Callback;
				EarthView_World_Graphic_CParticleAffectorFactory_destroyAffector_void_CParticleAffector_Callback* m_EarthView_World_Graphic_CParticleAffectorFactory_destroyAffector_void_CParticleAffector_Callback;
			public:
				CParticleAffectorFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CParticleAffectorFactory(pList)
				{
					m_EarthView_World_Graphic_CParticleAffectorFactory_getName_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CParticleAffectorFactory_createAffector_CParticleAffector_CParticleSystem_Callback = NULL;
					m_EarthView_World_Graphic_CParticleAffectorFactory_destroyAffector_void_CParticleAffector_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CParticleAffectorFactory_getName_EVString(EarthView_World_Graphic_CParticleAffectorFactory_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleAffectorFactory_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleAffectorFactory_createAffector_CParticleAffector_CParticleSystem(EarthView_World_Graphic_CParticleAffectorFactory_createAffector_CParticleAffector_CParticleSystem_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleAffectorFactory_createAffector_CParticleAffector_CParticleSystem_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleAffectorFactory_destroyAffector_void_CParticleAffector(EarthView_World_Graphic_CParticleAffectorFactory_destroyAffector_void_CParticleAffector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleAffectorFactory_destroyAffector_void_CParticleAffector_Callback = pCallback;
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Graphic_CParticleAffectorFactory_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CParticleAffectorFactory_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CParticleAffectorFactory::getName();
				}
				virtual EarthView::World::Graphic::CParticleAffector* createAffector(_in EarthView::World::Graphic::CParticleSystem* psys)
				{
					if(m_EarthView_World_Graphic_CParticleAffectorFactory_createAffector_CParticleAffector_CParticleSystem_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CParticleAffector* returnValue = m_EarthView_World_Graphic_CParticleAffectorFactory_createAffector_CParticleAffector_CParticleSystem_Callback(psys);
						return returnValue;
					}
					else
						return this->CParticleAffectorFactory::createAffector(psys);
				}
				virtual void destroyAffector(_in EarthView::World::Graphic::CParticleAffector* e)
				{
					if(m_EarthView_World_Graphic_CParticleAffectorFactory_destroyAffector_void_CParticleAffector_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CParticleAffectorFactory_destroyAffector_void_CParticleAffector_Callback(e);
					}
					else
						return this->CParticleAffectorFactory::destroyAffector(e);
				}
			};
			REGISTER_FACTORY_CLASS(CParticleAffectorFactoryProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CParticleAffectorFactory_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CParticleAffectorFactory* ptrNativeObject = (EarthView::World::Graphic::CParticleAffectorFactory*) pObjectXXXX;
				if (dynamic_cast<CParticleAffectorFactoryProxy*>((EarthView::World::Graphic::CParticleAffectorFactory*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CParticleAffectorFactory::getName();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleAffectorFactory_getName_EVString( void *pObjectXXXX, EarthView_World_Graphic_CParticleAffectorFactory_getName_EVString_Callback* pCallback )
			{
				CParticleAffectorFactoryProxy* ptr = dynamic_cast<CParticleAffectorFactoryProxy*>((EarthView::World::Graphic::CParticleAffectorFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleAffectorFactory_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CParticleAffectorFactory_getName_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CParticleAffectorFactory* ptrNativeObject = (EarthView::World::Graphic::CParticleAffectorFactory*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CParticleAffectorFactory::getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticleAffector*  _stdcall EarthView_World_Graphic_CParticleAffectorFactory_createAffector_CParticleAffector_CParticleSystem(void *pObjectXXXX, _in EarthView::World::Graphic::CParticleSystem* psys )
			{
				EarthView::World::Graphic::CParticleAffectorFactory* ptrNativeObject = (EarthView::World::Graphic::CParticleAffectorFactory*) pObjectXXXX;
				if (dynamic_cast<CParticleAffectorFactoryProxy*>((EarthView::World::Graphic::CParticleAffectorFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CParticleAffector* objXXXX = ptrNativeObject->EarthView::World::Graphic::CParticleAffectorFactory::createAffector(psys);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CParticleAffector* objXXXX = ptrNativeObject->createAffector(psys);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleAffectorFactory_createAffector_CParticleAffector_CParticleSystem( void *pObjectXXXX, EarthView_World_Graphic_CParticleAffectorFactory_createAffector_CParticleAffector_CParticleSystem_Callback* pCallback )
			{
				CParticleAffectorFactoryProxy* ptr = dynamic_cast<CParticleAffectorFactoryProxy*>((EarthView::World::Graphic::CParticleAffectorFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleAffectorFactory_createAffector_CParticleAffector_CParticleSystem(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticleAffector*  _stdcall EarthView_World_Graphic_CParticleAffectorFactory_createAffector_CParticleAffector_CParticleSystem_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CParticleSystem* psys )
			{
				EarthView::World::Graphic::CParticleAffectorFactory* ptrNativeObject = (EarthView::World::Graphic::CParticleAffectorFactory*) pObjectXXXX;
				EarthView::World::Graphic::CParticleAffector* objXXXX = ptrNativeObject->EarthView::World::Graphic::CParticleAffectorFactory::createAffector(psys);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleAffectorFactory_destroyAffector_void_CParticleAffector(void *pObjectXXXX, _in EarthView::World::Graphic::CParticleAffector* e )
			{
				EarthView::World::Graphic::CParticleAffectorFactory* ptrNativeObject = (EarthView::World::Graphic::CParticleAffectorFactory*) pObjectXXXX;
				if (dynamic_cast<CParticleAffectorFactoryProxy*>((EarthView::World::Graphic::CParticleAffectorFactory*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CParticleAffectorFactory::destroyAffector(e);
				else
					ptrNativeObject->destroyAffector(e);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleAffectorFactory_destroyAffector_void_CParticleAffector( void *pObjectXXXX, EarthView_World_Graphic_CParticleAffectorFactory_destroyAffector_void_CParticleAffector_Callback* pCallback )
			{
				CParticleAffectorFactoryProxy* ptr = dynamic_cast<CParticleAffectorFactoryProxy*>((EarthView::World::Graphic::CParticleAffectorFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleAffectorFactory_destroyAffector_void_CParticleAffector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleAffectorFactory_destroyAffector_void_CParticleAffector_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CParticleAffector* e )
			{
				EarthView::World::Graphic::CParticleAffectorFactory* ptrNativeObject = (EarthView::World::Graphic::CParticleAffectorFactory*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CParticleAffectorFactory::destroyAffector(e);
			}
		}
	}
}
