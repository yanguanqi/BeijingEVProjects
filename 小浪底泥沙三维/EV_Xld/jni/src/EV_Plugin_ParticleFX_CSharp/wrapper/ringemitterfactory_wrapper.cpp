/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "plugin_particlefx/ringemitterfactory.h"
namespace EarthView
{
	namespace World
	{
		namespace Plugin
		{
			namespace ParticleFX
			{
				typedef char*  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitterFactory_getName_EVString_Callback)();
				typedef EarthView::World::Graphic::CParticleEmitter*  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitterFactory_createEmitter_CParticleEmitter_CParticleSystem_Callback)(_in EarthView::World::Graphic::CParticleSystem* psys);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitterFactory_destroyEmitter_void_CParticleEmitter_Callback)(_in EarthView::World::Graphic::CParticleEmitter* e);
				class CRingEmitterFactoryProxy : public EarthView::World::Plugin::ParticleFX::CRingEmitterFactory
				{
				private:
					EarthView_World_Plugin_ParticleFX_CRingEmitterFactory_getName_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitterFactory_getName_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitterFactory_createEmitter_CParticleEmitter_CParticleSystem_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitterFactory_createEmitter_CParticleEmitter_CParticleSystem_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitterFactory_destroyEmitter_void_CParticleEmitter_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitterFactory_destroyEmitter_void_CParticleEmitter_Callback;
				public:
					CRingEmitterFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CRingEmitterFactory(pList)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitterFactory_getName_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitterFactory_createEmitter_CParticleEmitter_CParticleSystem_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitterFactory_destroyEmitter_void_CParticleEmitter_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitterFactory_getName_EVString(EarthView_World_Plugin_ParticleFX_CRingEmitterFactory_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitterFactory_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitterFactory_createEmitter_CParticleEmitter_CParticleSystem(EarthView_World_Plugin_ParticleFX_CRingEmitterFactory_createEmitter_CParticleEmitter_CParticleSystem_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitterFactory_createEmitter_CParticleEmitter_CParticleSystem_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitterFactory_destroyEmitter_void_CParticleEmitter(EarthView_World_Plugin_ParticleFX_CRingEmitterFactory_destroyEmitter_void_CParticleEmitter_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitterFactory_destroyEmitter_void_CParticleEmitter_Callback = pCallback;
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitterFactory_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Plugin_ParticleFX_CRingEmitterFactory_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CRingEmitterFactory::getName();
					}
					virtual EarthView::World::Graphic::CParticleEmitter* createEmitter(_in EarthView::World::Graphic::CParticleSystem* psys)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitterFactory_createEmitter_CParticleEmitter_CParticleSystem_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CParticleEmitter* returnValue = m_EarthView_World_Plugin_ParticleFX_CRingEmitterFactory_createEmitter_CParticleEmitter_CParticleSystem_Callback(psys);
							return returnValue;
						}
						else
							return this->CRingEmitterFactory::createEmitter(psys);
					}
					virtual void destroyEmitter(_in EarthView::World::Graphic::CParticleEmitter* e)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitterFactory_destroyEmitter_void_CParticleEmitter_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CRingEmitterFactory_destroyEmitter_void_CParticleEmitter_Callback(e);
						}
						else
							return this->CRingEmitterFactory::destroyEmitter(e);
					}
				};
				REGISTER_FACTORY_CLASS(CRingEmitterFactoryProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitterFactory_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Plugin::ParticleFX::CRingEmitterFactory* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CRingEmitterFactory*) pObjectXXXX;
					if (dynamic_cast<CRingEmitterFactoryProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitterFactory*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CRingEmitterFactory::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitterFactory_getName_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitterFactory_getName_EVString_Callback* pCallback )
				{
					CRingEmitterFactoryProxy* ptr = dynamic_cast<CRingEmitterFactoryProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitterFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitterFactory_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitterFactory_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Plugin::ParticleFX::CRingEmitterFactory* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CRingEmitterFactory*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CRingEmitterFactory::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticleEmitter*  _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitterFactory_createEmitter_CParticleEmitter_CParticleSystem(void *pObjectXXXX, _in EarthView::World::Graphic::CParticleSystem* psys )
				{
					EarthView::World::Plugin::ParticleFX::CRingEmitterFactory* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CRingEmitterFactory*) pObjectXXXX;
					if (dynamic_cast<CRingEmitterFactoryProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitterFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::CParticleEmitter* objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CRingEmitterFactory::createEmitter(psys);
						return objXXXX;
					}
					else
					{
						EarthView::World::Graphic::CParticleEmitter* objXXXX = ptrNativeObject->createEmitter(psys);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitterFactory_createEmitter_CParticleEmitter_CParticleSystem( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitterFactory_createEmitter_CParticleEmitter_CParticleSystem_Callback* pCallback )
				{
					CRingEmitterFactoryProxy* ptr = dynamic_cast<CRingEmitterFactoryProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitterFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitterFactory_createEmitter_CParticleEmitter_CParticleSystem(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticleEmitter*  _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitterFactory_createEmitter_CParticleEmitter_CParticleSystem_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CParticleSystem* psys )
				{
					EarthView::World::Plugin::ParticleFX::CRingEmitterFactory* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CRingEmitterFactory*) pObjectXXXX;
					EarthView::World::Graphic::CParticleEmitter* objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CRingEmitterFactory::createEmitter(psys);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitterFactory_destroyEmitter_void_CParticleEmitter( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitterFactory_destroyEmitter_void_CParticleEmitter_Callback* pCallback )
				{
					CRingEmitterFactoryProxy* ptr = dynamic_cast<CRingEmitterFactoryProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitterFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitterFactory_destroyEmitter_void_CParticleEmitter(pCallback);
					}
				}
			}
		}
	}
}
