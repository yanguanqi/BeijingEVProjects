/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/particleaffector.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef void  ( _stdcall EarthView_World_Graphic_CParticleAffector__initParticle_void_CParticle_Callback)(_in EarthView::World::Graphic::CParticle* pParticle);
			typedef void  ( _stdcall EarthView_World_Graphic_CParticleAffector__affectParticles_void_CParticleSystem_Real_Callback)(_in EarthView::World::Graphic::CParticleSystem* pSystem, _in Real timeElapsed);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CParticleAffector_setParameter_ev_bool_EVString_EVString_Callback)(_in char*& name, _in char*& value);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CParticleAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback)(_in char*& name, _in ev_bool readOnly, _in ev_bool enable);
			typedef void  ( _stdcall EarthView_World_Graphic_CParticleAffector_setParameterList_void_CommonStringPairList_Callback)(_in const void* paramList);
			typedef char*  ( _stdcall EarthView_World_Graphic_CParticleAffector_getParameter_EVString_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CParticleAffector_copyParametersTo_void_CStringInterface_Callback)(_in EarthView::World::Core::CStringInterface* dest);
			class CParticleAffectorProxy : public EarthView::World::Graphic::CParticleAffector
			{
			private:
				EarthView_World_Graphic_CParticleAffector__initParticle_void_CParticle_Callback* m_EarthView_World_Graphic_CParticleAffector__initParticle_void_CParticle_Callback;
				EarthView_World_Graphic_CParticleAffector__affectParticles_void_CParticleSystem_Real_Callback* m_EarthView_World_Graphic_CParticleAffector__affectParticles_void_CParticleSystem_Real_Callback;
				EarthView_World_Graphic_CParticleAffector_setParameter_ev_bool_EVString_EVString_Callback* m_EarthView_World_Graphic_CParticleAffector_setParameter_ev_bool_EVString_EVString_Callback;
				EarthView_World_Graphic_CParticleAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_CParticleAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_CParticleAffector_setParameterList_void_CommonStringPairList_Callback* m_EarthView_World_Graphic_CParticleAffector_setParameterList_void_CommonStringPairList_Callback;
				EarthView_World_Graphic_CParticleAffector_getParameter_EVString_EVString_Callback* m_EarthView_World_Graphic_CParticleAffector_getParameter_EVString_EVString_Callback;
				EarthView_World_Graphic_CParticleAffector_copyParametersTo_void_CStringInterface_Callback* m_EarthView_World_Graphic_CParticleAffector_copyParametersTo_void_CStringInterface_Callback;
			public:
				CParticleAffectorProxy(EarthView::World::Core::CNameValuePairList *pList) : CParticleAffector(pList)
				{
					m_EarthView_World_Graphic_CParticleAffector__initParticle_void_CParticle_Callback = NULL;
					m_EarthView_World_Graphic_CParticleAffector__affectParticles_void_CParticleSystem_Real_Callback = NULL;
					m_EarthView_World_Graphic_CParticleAffector_setParameter_ev_bool_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CParticleAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CParticleAffector_setParameterList_void_CommonStringPairList_Callback = NULL;
					m_EarthView_World_Graphic_CParticleAffector_getParameter_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CParticleAffector_copyParametersTo_void_CStringInterface_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CParticleAffector__initParticle_void_CParticle(EarthView_World_Graphic_CParticleAffector__initParticle_void_CParticle_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleAffector__initParticle_void_CParticle_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleAffector__affectParticles_void_CParticleSystem_Real(EarthView_World_Graphic_CParticleAffector__affectParticles_void_CParticleSystem_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleAffector__affectParticles_void_CParticleSystem_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleAffector_setParameter_ev_bool_EVString_EVString(EarthView_World_Graphic_CParticleAffector_setParameter_ev_bool_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleAffector_setParameter_ev_bool_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool(EarthView_World_Graphic_CParticleAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleAffector_setParameterList_void_CommonStringPairList(EarthView_World_Graphic_CParticleAffector_setParameterList_void_CommonStringPairList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleAffector_setParameterList_void_CommonStringPairList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleAffector_getParameter_EVString_EVString(EarthView_World_Graphic_CParticleAffector_getParameter_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleAffector_getParameter_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleAffector_copyParametersTo_void_CStringInterface(EarthView_World_Graphic_CParticleAffector_copyParametersTo_void_CStringInterface_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleAffector_copyParametersTo_void_CStringInterface_Callback = pCallback;
				}
				virtual void _initParticle(_in EarthView::World::Graphic::CParticle* pParticle)
				{
					if(m_EarthView_World_Graphic_CParticleAffector__initParticle_void_CParticle_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CParticleAffector__initParticle_void_CParticle_Callback(pParticle);
					}
					else
						return this->CParticleAffector::_initParticle(pParticle);
				}
				virtual void _affectParticles(_in EarthView::World::Graphic::CParticleSystem* pSystem, _in Real timeElapsed)
				{
					if(m_EarthView_World_Graphic_CParticleAffector__affectParticles_void_CParticleSystem_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CParticleAffector__affectParticles_void_CParticleSystem_Real_Callback(pSystem, timeElapsed);
					}
					else
						return this->CParticleAffector::_affectParticles(pSystem, timeElapsed);
				}
				virtual ev_bool setParameter(_in const EVString& name, _in const EVString& value)
				{
					if(m_EarthView_World_Graphic_CParticleAffector_setParameter_ev_bool_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* value_Char = value.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CParticleAffector_setParameter_ev_bool_EVString_EVString_Callback(name_Char, value_Char);
						return returnValue;
					}
					else
						return this->CParticleAffector::setParameter(name, value);
				}
				virtual ev_bool setParameter(_in const EVString& name, _in ev_bool readOnly, _in ev_bool enable)
				{
					if(m_EarthView_World_Graphic_CParticleAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CParticleAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback(name_Char, readOnly, enable);
						return returnValue;
					}
					else
						return this->CParticleAffector::setParameter(name, readOnly, enable);
				}
				virtual void setParameterList(_in const EarthView::World::Core::CommonStringPairList& paramList)
				{
					if(m_EarthView_World_Graphic_CParticleAffector_setParameterList_void_CommonStringPairList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CParticleAffector_setParameterList_void_CommonStringPairList_Callback(&paramList);
					}
					else
						return this->CParticleAffector::setParameterList(paramList);
				}
				virtual EVString getParameter(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CParticleAffector_getParameter_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EVString returnValue = m_EarthView_World_Graphic_CParticleAffector_getParameter_EVString_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CParticleAffector::getParameter(name);
				}
				virtual void copyParametersTo(_in EarthView::World::Core::CStringInterface* dest) const
				{
					if(m_EarthView_World_Graphic_CParticleAffector_copyParametersTo_void_CStringInterface_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CParticleAffector_copyParametersTo_void_CStringInterface_Callback(dest);
					}
					else
						return this->CParticleAffector::copyParametersTo(dest);
				}
			};
			REGISTER_FACTORY_CLASS(CParticleAffectorProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleAffector_addBaseParameters_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleAffector* ptrNativeObject = (EarthView::World::Graphic::CParticleAffector*) pObjectXXXX;
				ptrNativeObject->addBaseParameters();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleAffector__initParticle_void_CParticle(void *pObjectXXXX, _in EarthView::World::Graphic::CParticle* pParticle )
			{
				EarthView::World::Graphic::CParticleAffector* ptrNativeObject = (EarthView::World::Graphic::CParticleAffector*) pObjectXXXX;
				if (dynamic_cast<CParticleAffectorProxy*>((EarthView::World::Graphic::CParticleAffector*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CParticleAffector::_initParticle(pParticle);
				else
					ptrNativeObject->_initParticle(pParticle);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleAffector__initParticle_void_CParticle( void *pObjectXXXX, EarthView_World_Graphic_CParticleAffector__initParticle_void_CParticle_Callback* pCallback )
			{
				CParticleAffectorProxy* ptr = dynamic_cast<CParticleAffectorProxy*>((EarthView::World::Graphic::CParticleAffector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleAffector__initParticle_void_CParticle(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleAffector__initParticle_void_CParticle_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CParticle* pParticle )
			{
				EarthView::World::Graphic::CParticleAffector* ptrNativeObject = (EarthView::World::Graphic::CParticleAffector*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CParticleAffector::_initParticle(pParticle);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleAffector__affectParticles_void_CParticleSystem_Real(void *pObjectXXXX, _in EarthView::World::Graphic::CParticleSystem* pSystem, _in Real timeElapsed )
			{
				EarthView::World::Graphic::CParticleAffector* ptrNativeObject = (EarthView::World::Graphic::CParticleAffector*) pObjectXXXX;
				if (dynamic_cast<CParticleAffectorProxy*>((EarthView::World::Graphic::CParticleAffector*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CParticleAffector::_affectParticles(pSystem, timeElapsed);
				else
					ptrNativeObject->_affectParticles(pSystem, timeElapsed);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleAffector__affectParticles_void_CParticleSystem_Real( void *pObjectXXXX, EarthView_World_Graphic_CParticleAffector__affectParticles_void_CParticleSystem_Real_Callback* pCallback )
			{
				CParticleAffectorProxy* ptr = dynamic_cast<CParticleAffectorProxy*>((EarthView::World::Graphic::CParticleAffector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleAffector__affectParticles_void_CParticleSystem_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleAffector__affectParticles_void_CParticleSystem_Real_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CParticleSystem* pSystem, _in Real timeElapsed )
			{
				EarthView::World::Graphic::CParticleAffector* ptrNativeObject = (EarthView::World::Graphic::CParticleAffector*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CParticleAffector::_affectParticles(pSystem, timeElapsed);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_CParticleAffector_getType_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CParticleAffector* ptrNativeObject = (EarthView::World::Graphic::CParticleAffector*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getType();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleAffector_setParameter_ev_bool_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CParticleAffector_setParameter_ev_bool_EVString_EVString_Callback* pCallback )
			{
				CParticleAffectorProxy* ptr = dynamic_cast<CParticleAffectorProxy*>((EarthView::World::Graphic::CParticleAffector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleAffector_setParameter_ev_bool_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CParticleAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback )
			{
				CParticleAffectorProxy* ptr = dynamic_cast<CParticleAffectorProxy*>((EarthView::World::Graphic::CParticleAffector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleAffector_setParameterList_void_CommonStringPairList( void *pObjectXXXX, EarthView_World_Graphic_CParticleAffector_setParameterList_void_CommonStringPairList_Callback* pCallback )
			{
				CParticleAffectorProxy* ptr = dynamic_cast<CParticleAffectorProxy*>((EarthView::World::Graphic::CParticleAffector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleAffector_setParameterList_void_CommonStringPairList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleAffector_getParameter_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CParticleAffector_getParameter_EVString_EVString_Callback* pCallback )
			{
				CParticleAffectorProxy* ptr = dynamic_cast<CParticleAffectorProxy*>((EarthView::World::Graphic::CParticleAffector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleAffector_getParameter_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleAffector_copyParametersTo_void_CStringInterface( void *pObjectXXXX, EarthView_World_Graphic_CParticleAffector_copyParametersTo_void_CStringInterface_Callback* pCallback )
			{
				CParticleAffectorProxy* ptr = dynamic_cast<CParticleAffectorProxy*>((EarthView::World::Graphic::CParticleAffector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleAffector_copyParametersTo_void_CStringInterface(pCallback);
				}
			}
		}
	}
}
