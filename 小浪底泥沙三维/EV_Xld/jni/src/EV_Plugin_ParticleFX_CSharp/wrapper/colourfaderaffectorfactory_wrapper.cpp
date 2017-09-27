/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "plugin_particlefx/colourfaderaffectorfactory.h"
namespace EarthView
{
	namespace World
	{
		namespace Plugin
		{
			namespace ParticleFX
			{
				typedef char*  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffectorFactory_getName_EVString_Callback)();
				typedef EarthView::World::Graphic::CParticleAffector*  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffectorFactory_createAffector_CParticleAffector_CParticleSystem_Callback)(_in EarthView::World::Graphic::CParticleSystem* psys);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffectorFactory_destroyAffector_void_CParticleAffector_Callback)(_in EarthView::World::Graphic::CParticleAffector* e);
				class CColourFaderAffectorFactoryProxy : public EarthView::World::Plugin::ParticleFX::CColourFaderAffectorFactory
				{
				private:
					EarthView_World_Plugin_ParticleFX_CColourFaderAffectorFactory_getName_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffectorFactory_getName_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CColourFaderAffectorFactory_createAffector_CParticleAffector_CParticleSystem_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffectorFactory_createAffector_CParticleAffector_CParticleSystem_Callback;
					EarthView_World_Plugin_ParticleFX_CColourFaderAffectorFactory_destroyAffector_void_CParticleAffector_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffectorFactory_destroyAffector_void_CParticleAffector_Callback;
				public:
					CColourFaderAffectorFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CColourFaderAffectorFactory(pList)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffectorFactory_getName_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffectorFactory_createAffector_CParticleAffector_CParticleSystem_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffectorFactory_destroyAffector_void_CParticleAffector_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffectorFactory_getName_EVString(EarthView_World_Plugin_ParticleFX_CColourFaderAffectorFactory_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffectorFactory_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffectorFactory_createAffector_CParticleAffector_CParticleSystem(EarthView_World_Plugin_ParticleFX_CColourFaderAffectorFactory_createAffector_CParticleAffector_CParticleSystem_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffectorFactory_createAffector_CParticleAffector_CParticleSystem_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffectorFactory_destroyAffector_void_CParticleAffector(EarthView_World_Plugin_ParticleFX_CColourFaderAffectorFactory_destroyAffector_void_CParticleAffector_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffectorFactory_destroyAffector_void_CParticleAffector_Callback = pCallback;
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffectorFactory_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Plugin_ParticleFX_CColourFaderAffectorFactory_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CColourFaderAffectorFactory::getName();
					}
					virtual EarthView::World::Graphic::CParticleAffector* createAffector(_in EarthView::World::Graphic::CParticleSystem* psys)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffectorFactory_createAffector_CParticleAffector_CParticleSystem_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CParticleAffector* returnValue = m_EarthView_World_Plugin_ParticleFX_CColourFaderAffectorFactory_createAffector_CParticleAffector_CParticleSystem_Callback(psys);
							return returnValue;
						}
						else
							return this->CColourFaderAffectorFactory::createAffector(psys);
					}
					virtual void destroyAffector(_in EarthView::World::Graphic::CParticleAffector* e)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffectorFactory_destroyAffector_void_CParticleAffector_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CColourFaderAffectorFactory_destroyAffector_void_CParticleAffector_Callback(e);
						}
						else
							return this->CColourFaderAffectorFactory::destroyAffector(e);
					}
				};
				REGISTER_FACTORY_CLASS(CColourFaderAffectorFactoryProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffectorFactory_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Plugin::ParticleFX::CColourFaderAffectorFactory* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffectorFactory*) pObjectXXXX;
					if (dynamic_cast<CColourFaderAffectorFactoryProxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffectorFactory*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffectorFactory::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffectorFactory_getName_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffectorFactory_getName_EVString_Callback* pCallback )
				{
					CColourFaderAffectorFactoryProxy* ptr = dynamic_cast<CColourFaderAffectorFactoryProxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffectorFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffectorFactory_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffectorFactory_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Plugin::ParticleFX::CColourFaderAffectorFactory* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffectorFactory*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffectorFactory::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticleAffector*  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffectorFactory_createAffector_CParticleAffector_CParticleSystem(void *pObjectXXXX, _in EarthView::World::Graphic::CParticleSystem* psys )
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffectorFactory* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffectorFactory*) pObjectXXXX;
					if (dynamic_cast<CColourFaderAffectorFactoryProxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffectorFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::CParticleAffector* objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffectorFactory::createAffector(psys);
						return objXXXX;
					}
					else
					{
						EarthView::World::Graphic::CParticleAffector* objXXXX = ptrNativeObject->createAffector(psys);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffectorFactory_createAffector_CParticleAffector_CParticleSystem( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffectorFactory_createAffector_CParticleAffector_CParticleSystem_Callback* pCallback )
				{
					CColourFaderAffectorFactoryProxy* ptr = dynamic_cast<CColourFaderAffectorFactoryProxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffectorFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffectorFactory_createAffector_CParticleAffector_CParticleSystem(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticleAffector*  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffectorFactory_createAffector_CParticleAffector_CParticleSystem_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CParticleSystem* psys )
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffectorFactory* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffectorFactory*) pObjectXXXX;
					EarthView::World::Graphic::CParticleAffector* objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffectorFactory::createAffector(psys);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffectorFactory_destroyAffector_void_CParticleAffector( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffectorFactory_destroyAffector_void_CParticleAffector_Callback* pCallback )
				{
					CColourFaderAffectorFactoryProxy* ptr = dynamic_cast<CColourFaderAffectorFactoryProxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffectorFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffectorFactory_destroyAffector_void_CParticleAffector(pCallback);
					}
				}
			}
		}
	}
}
