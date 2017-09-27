/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "plugin_particlefx/linearforceaffector.h"
namespace EarthView
{
	namespace World
	{
		namespace Plugin
		{
			namespace ParticleFX
			{
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CLinearForceAffector__initParticle_void_CParticle_Callback)(_in EarthView::World::Graphic::CParticle* pParticle);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CLinearForceAffector__affectParticles_void_CParticleSystem_Real_Callback)(_in EarthView::World::Graphic::CParticleSystem* pSystem, _in Real timeElapsed);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setParameter_ev_bool_EVString_EVString_Callback)(_in char*& name, _in char*& value);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback)(_in char*& name, _in ev_bool readOnly, _in ev_bool enable);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setParameterList_void_CommonStringPairList_Callback)(_in const void* paramList);
				typedef char*  ( _stdcall EarthView_World_Plugin_ParticleFX_CLinearForceAffector_getParameter_EVString_EVString_Callback)(_in char*& name);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CLinearForceAffector_copyParametersTo_void_CStringInterface_Callback)(_in EarthView::World::Core::CStringInterface* dest);
				class CLinearForceAffectorProxy : public EarthView::World::Plugin::ParticleFX::CLinearForceAffector
				{
				private:
					EarthView_World_Plugin_ParticleFX_CLinearForceAffector__initParticle_void_CParticle_Callback* m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector__initParticle_void_CParticle_Callback;
					EarthView_World_Plugin_ParticleFX_CLinearForceAffector__affectParticles_void_CParticleSystem_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector__affectParticles_void_CParticleSystem_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setParameter_ev_bool_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setParameter_ev_bool_EVString_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback;
					EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setParameterList_void_CommonStringPairList_Callback* m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setParameterList_void_CommonStringPairList_Callback;
					EarthView_World_Plugin_ParticleFX_CLinearForceAffector_getParameter_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_getParameter_EVString_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CLinearForceAffector_copyParametersTo_void_CStringInterface_Callback* m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_copyParametersTo_void_CStringInterface_Callback;
				public:
					CLinearForceAffectorProxy(EarthView::World::Core::CNameValuePairList *pList) : CLinearForceAffector(pList)
					{
						m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector__initParticle_void_CParticle_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector__affectParticles_void_CParticleSystem_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setParameter_ev_bool_EVString_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setParameterList_void_CommonStringPairList_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_getParameter_EVString_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_copyParametersTo_void_CStringInterface_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector__initParticle_void_CParticle(EarthView_World_Plugin_ParticleFX_CLinearForceAffector__initParticle_void_CParticle_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector__initParticle_void_CParticle_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector__affectParticles_void_CParticleSystem_Real(EarthView_World_Plugin_ParticleFX_CLinearForceAffector__affectParticles_void_CParticleSystem_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector__affectParticles_void_CParticleSystem_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setParameter_ev_bool_EVString_EVString(EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setParameter_ev_bool_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setParameter_ev_bool_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool(EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setParameterList_void_CommonStringPairList(EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setParameterList_void_CommonStringPairList_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setParameterList_void_CommonStringPairList_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_getParameter_EVString_EVString(EarthView_World_Plugin_ParticleFX_CLinearForceAffector_getParameter_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_getParameter_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_copyParametersTo_void_CStringInterface(EarthView_World_Plugin_ParticleFX_CLinearForceAffector_copyParametersTo_void_CStringInterface_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_copyParametersTo_void_CStringInterface_Callback = pCallback;
					}
					virtual void _affectParticles(_in EarthView::World::Graphic::CParticleSystem* pSystem, _in Real timeElapsed)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector__affectParticles_void_CParticleSystem_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector__affectParticles_void_CParticleSystem_Real_Callback(pSystem, timeElapsed);
						}
						else
							return this->CLinearForceAffector::_affectParticles(pSystem, timeElapsed);
					}
					virtual void _initParticle(_in EarthView::World::Graphic::CParticle* pParticle)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector__initParticle_void_CParticle_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector__initParticle_void_CParticle_Callback(pParticle);
						}
						else
							return this->CLinearForceAffector::_initParticle(pParticle);
					}
					virtual ev_bool setParameter(_in const EVString& name, _in const EVString& value)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setParameter_ev_bool_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							char* value_Char = value.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setParameter_ev_bool_EVString_EVString_Callback(name_Char, value_Char);
							return returnValue;
						}
						else
							return this->CLinearForceAffector::setParameter(name, value);
					}
					virtual ev_bool setParameter(_in const EVString& name, _in ev_bool readOnly, _in ev_bool enable)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback(name_Char, readOnly, enable);
							return returnValue;
						}
						else
							return this->CLinearForceAffector::setParameter(name, readOnly, enable);
					}
					virtual void setParameterList(_in const EarthView::World::Core::CommonStringPairList& paramList)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setParameterList_void_CommonStringPairList_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setParameterList_void_CommonStringPairList_Callback(&paramList);
						}
						else
							return this->CLinearForceAffector::setParameterList(paramList);
					}
					virtual EVString getParameter(_in const EVString& name) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_getParameter_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EVString returnValue = m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_getParameter_EVString_EVString_Callback(name_Char);
							return returnValue;
						}
						else
							return this->CLinearForceAffector::getParameter(name);
					}
					virtual void copyParametersTo(_in EarthView::World::Core::CStringInterface* dest) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_copyParametersTo_void_CStringInterface_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_copyParametersTo_void_CStringInterface_Callback(dest);
						}
						else
							return this->CLinearForceAffector::copyParametersTo(dest);
					}
				};
				REGISTER_FACTORY_CLASS(CLinearForceAffectorProxy);
				typedef char*  ( _stdcall EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdForceVectorProxy : public EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceVector
				{
				private:
					EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_doGet_EVString_void_Callback* m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_doGet_EVString_void_Callback;
					EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_doSet_void_void_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_doSet_void_void_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdForceVectorProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdForceVector(pList)
					{
						m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_doGet_EVString_void(EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_doSet_void_void_EVString(EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_trySet_ev_bool_void_EVString_EVString(EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdForceVector::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdForceVector::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdForceVector::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdForceVectorProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceVector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceVector*) pObjectXXXX;
					if (dynamic_cast<CCmdForceVectorProxy*>((EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceVector*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceVector::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_doGet_EVString_void_Callback* pCallback )
				{
					CCmdForceVectorProxy* ptr = dynamic_cast<CCmdForceVectorProxy*>((EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceVector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceVector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceVector*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceVector::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceVector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceVector*) pObjectXXXX;
					if (dynamic_cast<CCmdForceVectorProxy*>((EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceVector*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceVector::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdForceVectorProxy* ptr = dynamic_cast<CCmdForceVectorProxy*>((EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceVector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceVector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceVector*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceVector::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdForceVectorProxy* ptr = dynamic_cast<CCmdForceVectorProxy*>((EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceVector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdForceAppProxy : public EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceApp
				{
				private:
					EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_doGet_EVString_void_Callback* m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_doGet_EVString_void_Callback;
					EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_doSet_void_void_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_doSet_void_void_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdForceAppProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdForceApp(pList)
					{
						m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_doGet_EVString_void(EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_doSet_void_void_EVString(EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_trySet_ev_bool_void_EVString_EVString(EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdForceApp::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdForceApp::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdForceApp::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdForceAppProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceApp* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceApp*) pObjectXXXX;
					if (dynamic_cast<CCmdForceAppProxy*>((EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceApp*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceApp::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_doGet_EVString_void_Callback* pCallback )
				{
					CCmdForceAppProxy* ptr = dynamic_cast<CCmdForceAppProxy*>((EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceApp*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceApp* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceApp*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceApp::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceApp* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceApp*) pObjectXXXX;
					if (dynamic_cast<CCmdForceAppProxy*>((EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceApp*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceApp::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdForceAppProxy* ptr = dynamic_cast<CCmdForceAppProxy*>((EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceApp*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceApp* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceApp*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceApp::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdForceAppProxy* ptr = dynamic_cast<CCmdForceAppProxy*>((EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceApp*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CLinearForceAffector__affectParticles_void_CParticleSystem_Real(void *pObjectXXXX, _in EarthView::World::Graphic::CParticleSystem* pSystem, _in Real timeElapsed )
				{
					EarthView::World::Plugin::ParticleFX::CLinearForceAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CLinearForceAffector*) pObjectXXXX;
					if (dynamic_cast<CLinearForceAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CLinearForceAffector*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Plugin::ParticleFX::CLinearForceAffector::_affectParticles(pSystem, timeElapsed);
					else
						ptrNativeObject->_affectParticles(pSystem, timeElapsed);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector__affectParticles_void_CParticleSystem_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CLinearForceAffector__affectParticles_void_CParticleSystem_Real_Callback* pCallback )
				{
					CLinearForceAffectorProxy* ptr = dynamic_cast<CLinearForceAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CLinearForceAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector__affectParticles_void_CParticleSystem_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CLinearForceAffector__affectParticles_void_CParticleSystem_Real_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CParticleSystem* pSystem, _in Real timeElapsed )
				{
					EarthView::World::Plugin::ParticleFX::CLinearForceAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CLinearForceAffector*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Plugin::ParticleFX::CLinearForceAffector::_affectParticles(pSystem, timeElapsed);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setForceVector_void_CVector3(void *pObjectXXXX, _in const void* force )
				{
					EarthView::World::Plugin::ParticleFX::CLinearForceAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CLinearForceAffector*) pObjectXXXX;
					ptrNativeObject->setForceVector(*(EarthView::World::Spatial::Math::CVector3*)force);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Plugin_ParticleFX_CLinearForceAffector_getForceVector_CVector3(void *pObjectXXXX )
				{
					const EarthView::World::Plugin::ParticleFX::CLinearForceAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CLinearForceAffector*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getForceVector();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setForceApplication_void_ForceApplication(void *pObjectXXXX, _in int fa )
				{
					EarthView::World::Plugin::ParticleFX::CLinearForceAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CLinearForceAffector*) pObjectXXXX;
					ptrNativeObject->setForceApplication((EarthView::World::Plugin::ParticleFX::CLinearForceAffector::ForceApplication)fa);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Plugin_ParticleFX_CLinearForceAffector_getForceApplication_ForceApplication(void *pObjectXXXX )
				{
					const EarthView::World::Plugin::ParticleFX::CLinearForceAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CLinearForceAffector*) pObjectXXXX;
					EarthView::World::Plugin::ParticleFX::CLinearForceAffector::ForceApplication objXXXX = ptrNativeObject->getForceApplication();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_msForceVectorCmd()
				{
					EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceVector &objXXXX = EarthView::World::Plugin::ParticleFX::CLinearForceAffector::msForceVectorCmd;
					EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceVector *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_msForceVectorCmd( void*  value )
				{
					EarthView::World::Plugin::ParticleFX::CLinearForceAffector::msForceVectorCmd = *(EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceVector*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_msForceAppCmd()
				{
					EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceApp &objXXXX = EarthView::World::Plugin::ParticleFX::CLinearForceAffector::msForceAppCmd;
					EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceApp *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_msForceAppCmd( void*  value )
				{
					EarthView::World::Plugin::ParticleFX::CLinearForceAffector::msForceAppCmd = *(EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceApp*)value;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector__initParticle_void_CParticle( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CLinearForceAffector__initParticle_void_CParticle_Callback* pCallback )
				{
					CLinearForceAffectorProxy* ptr = dynamic_cast<CLinearForceAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CLinearForceAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector__initParticle_void_CParticle(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setParameter_ev_bool_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setParameter_ev_bool_EVString_EVString_Callback* pCallback )
				{
					CLinearForceAffectorProxy* ptr = dynamic_cast<CLinearForceAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CLinearForceAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setParameter_ev_bool_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback )
				{
					CLinearForceAffectorProxy* ptr = dynamic_cast<CLinearForceAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CLinearForceAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setParameterList_void_CommonStringPairList( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setParameterList_void_CommonStringPairList_Callback* pCallback )
				{
					CLinearForceAffectorProxy* ptr = dynamic_cast<CLinearForceAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CLinearForceAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setParameterList_void_CommonStringPairList(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_getParameter_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CLinearForceAffector_getParameter_EVString_EVString_Callback* pCallback )
				{
					CLinearForceAffectorProxy* ptr = dynamic_cast<CLinearForceAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CLinearForceAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_getParameter_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_copyParametersTo_void_CStringInterface( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CLinearForceAffector_copyParametersTo_void_CStringInterface_Callback* pCallback )
				{
					CLinearForceAffectorProxy* ptr = dynamic_cast<CLinearForceAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CLinearForceAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_copyParametersTo_void_CStringInterface(pCallback);
					}
				}
			}
		}
	}
}
