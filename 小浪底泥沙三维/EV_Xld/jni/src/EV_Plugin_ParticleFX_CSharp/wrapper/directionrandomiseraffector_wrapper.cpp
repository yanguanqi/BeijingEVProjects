/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "plugin_particlefx/directionrandomiseraffector.h"
namespace EarthView
{
	namespace World
	{
		namespace Plugin
		{
			namespace ParticleFX
			{
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector__initParticle_void_CParticle_Callback)(_in EarthView::World::Graphic::CParticle* pParticle);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector__affectParticles_void_CParticleSystem_Real_Callback)(_in EarthView::World::Graphic::CParticleSystem* pSystem, _in Real timeElapsed);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_setParameter_ev_bool_EVString_EVString_Callback)(_in char*& name, _in char*& value);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback)(_in char*& name, _in ev_bool readOnly, _in ev_bool enable);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_setParameterList_void_CommonStringPairList_Callback)(_in const void* paramList);
				typedef char*  ( _stdcall EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_getParameter_EVString_EVString_Callback)(_in char*& name);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_copyParametersTo_void_CStringInterface_Callback)(_in EarthView::World::Core::CStringInterface* dest);
				class CDirectionRandomiserAffectorProxy : public EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector
				{
				private:
					EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector__initParticle_void_CParticle_Callback* m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector__initParticle_void_CParticle_Callback;
					EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector__affectParticles_void_CParticleSystem_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector__affectParticles_void_CParticleSystem_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_setParameter_ev_bool_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_setParameter_ev_bool_EVString_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback;
					EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_setParameterList_void_CommonStringPairList_Callback* m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_setParameterList_void_CommonStringPairList_Callback;
					EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_getParameter_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_getParameter_EVString_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_copyParametersTo_void_CStringInterface_Callback* m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_copyParametersTo_void_CStringInterface_Callback;
				public:
					CDirectionRandomiserAffectorProxy(EarthView::World::Core::CNameValuePairList *pList) : CDirectionRandomiserAffector(pList)
					{
						m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector__initParticle_void_CParticle_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector__affectParticles_void_CParticleSystem_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_setParameter_ev_bool_EVString_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_setParameterList_void_CommonStringPairList_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_getParameter_EVString_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_copyParametersTo_void_CStringInterface_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector__initParticle_void_CParticle(EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector__initParticle_void_CParticle_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector__initParticle_void_CParticle_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector__affectParticles_void_CParticleSystem_Real(EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector__affectParticles_void_CParticleSystem_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector__affectParticles_void_CParticleSystem_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_setParameter_ev_bool_EVString_EVString(EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_setParameter_ev_bool_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_setParameter_ev_bool_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool(EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_setParameterList_void_CommonStringPairList(EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_setParameterList_void_CommonStringPairList_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_setParameterList_void_CommonStringPairList_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_getParameter_EVString_EVString(EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_getParameter_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_getParameter_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_copyParametersTo_void_CStringInterface(EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_copyParametersTo_void_CStringInterface_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_copyParametersTo_void_CStringInterface_Callback = pCallback;
					}
					virtual void _affectParticles(_in EarthView::World::Graphic::CParticleSystem* pSystem, _in Real timeElapsed)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector__affectParticles_void_CParticleSystem_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector__affectParticles_void_CParticleSystem_Real_Callback(pSystem, timeElapsed);
						}
						else
							return this->CDirectionRandomiserAffector::_affectParticles(pSystem, timeElapsed);
					}
					virtual void _initParticle(_in EarthView::World::Graphic::CParticle* pParticle)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector__initParticle_void_CParticle_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector__initParticle_void_CParticle_Callback(pParticle);
						}
						else
							return this->CDirectionRandomiserAffector::_initParticle(pParticle);
					}
					virtual ev_bool setParameter(_in const EVString& name, _in const EVString& value)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_setParameter_ev_bool_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							char* value_Char = value.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_setParameter_ev_bool_EVString_EVString_Callback(name_Char, value_Char);
							return returnValue;
						}
						else
							return this->CDirectionRandomiserAffector::setParameter(name, value);
					}
					virtual ev_bool setParameter(_in const EVString& name, _in ev_bool readOnly, _in ev_bool enable)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback(name_Char, readOnly, enable);
							return returnValue;
						}
						else
							return this->CDirectionRandomiserAffector::setParameter(name, readOnly, enable);
					}
					virtual void setParameterList(_in const EarthView::World::Core::CommonStringPairList& paramList)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_setParameterList_void_CommonStringPairList_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_setParameterList_void_CommonStringPairList_Callback(&paramList);
						}
						else
							return this->CDirectionRandomiserAffector::setParameterList(paramList);
					}
					virtual EVString getParameter(_in const EVString& name) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_getParameter_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EVString returnValue = m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_getParameter_EVString_EVString_Callback(name_Char);
							return returnValue;
						}
						else
							return this->CDirectionRandomiserAffector::getParameter(name);
					}
					virtual void copyParametersTo(_in EarthView::World::Core::CStringInterface* dest) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_copyParametersTo_void_CStringInterface_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_copyParametersTo_void_CStringInterface_Callback(dest);
						}
						else
							return this->CDirectionRandomiserAffector::copyParametersTo(dest);
					}
				};
				REGISTER_FACTORY_CLASS(CDirectionRandomiserAffectorProxy);
				typedef char*  ( _stdcall EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdRandomness_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdRandomness_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdRandomness_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdRandomnessProxy : public EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdRandomness
				{
				private:
					EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdRandomness_doGet_EVString_void_Callback* m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdRandomness_doGet_EVString_void_Callback;
					EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdRandomness_doSet_void_void_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdRandomness_doSet_void_void_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdRandomness_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdRandomness_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdRandomnessProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdRandomness(pList)
					{
						m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdRandomness_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdRandomness_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdRandomness_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdRandomness_doGet_EVString_void(EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdRandomness_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdRandomness_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdRandomness_doSet_void_void_EVString(EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdRandomness_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdRandomness_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdRandomness_trySet_ev_bool_void_EVString_EVString(EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdRandomness_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdRandomness_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdRandomness_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdRandomness_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdRandomness::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdRandomness_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdRandomness_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdRandomness::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdRandomness_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdRandomness_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdRandomness::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdRandomnessProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdRandomness_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdRandomness* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdRandomness*) pObjectXXXX;
					if (dynamic_cast<CCmdRandomnessProxy*>((EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdRandomness*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdRandomness::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdRandomness_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdRandomness_doGet_EVString_void_Callback* pCallback )
				{
					CCmdRandomnessProxy* ptr = dynamic_cast<CCmdRandomnessProxy*>((EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdRandomness*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdRandomness_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdRandomness_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdRandomness* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdRandomness*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdRandomness::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdRandomness_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdRandomness* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdRandomness*) pObjectXXXX;
					if (dynamic_cast<CCmdRandomnessProxy*>((EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdRandomness*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdRandomness::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdRandomness_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdRandomness_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdRandomnessProxy* ptr = dynamic_cast<CCmdRandomnessProxy*>((EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdRandomness*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdRandomness_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdRandomness_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdRandomness* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdRandomness*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdRandomness::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdRandomness_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdRandomness_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdRandomnessProxy* ptr = dynamic_cast<CCmdRandomnessProxy*>((EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdRandomness*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdRandomness_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CmdScope_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CmdScope_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CmdScope_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CmdScopeProxy : public EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CmdScope
				{
				private:
					EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CmdScope_doGet_EVString_void_Callback* m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CmdScope_doGet_EVString_void_Callback;
					EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CmdScope_doSet_void_void_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CmdScope_doSet_void_void_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CmdScope_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CmdScope_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CmdScopeProxy(EarthView::World::Core::CNameValuePairList *pList) : CmdScope(pList)
					{
						m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CmdScope_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CmdScope_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CmdScope_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CmdScope_doGet_EVString_void(EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CmdScope_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CmdScope_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CmdScope_doSet_void_void_EVString(EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CmdScope_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CmdScope_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CmdScope_trySet_ev_bool_void_EVString_EVString(EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CmdScope_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CmdScope_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CmdScope_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CmdScope_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CmdScope::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CmdScope_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CmdScope_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CmdScope::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CmdScope_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CmdScope_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CmdScope::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CmdScopeProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CmdScope_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CmdScope* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CmdScope*) pObjectXXXX;
					if (dynamic_cast<CmdScopeProxy*>((EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CmdScope*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CmdScope::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CmdScope_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CmdScope_doGet_EVString_void_Callback* pCallback )
				{
					CmdScopeProxy* ptr = dynamic_cast<CmdScopeProxy*>((EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CmdScope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CmdScope_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CmdScope_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CmdScope* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CmdScope*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CmdScope::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CmdScope_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CmdScope* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CmdScope*) pObjectXXXX;
					if (dynamic_cast<CmdScopeProxy*>((EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CmdScope*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CmdScope::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CmdScope_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CmdScope_doSet_void_void_EVString_Callback* pCallback )
				{
					CmdScopeProxy* ptr = dynamic_cast<CmdScopeProxy*>((EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CmdScope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CmdScope_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CmdScope_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CmdScope* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CmdScope*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CmdScope::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CmdScope_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CmdScope_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CmdScopeProxy* ptr = dynamic_cast<CmdScopeProxy*>((EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CmdScope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CmdScope_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdKeepVelocity_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdKeepVelocity_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdKeepVelocity_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdKeepVelocityProxy : public EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdKeepVelocity
				{
				private:
					EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdKeepVelocity_doGet_EVString_void_Callback* m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdKeepVelocity_doGet_EVString_void_Callback;
					EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdKeepVelocity_doSet_void_void_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdKeepVelocity_doSet_void_void_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdKeepVelocity_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdKeepVelocity_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdKeepVelocityProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdKeepVelocity(pList)
					{
						m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdKeepVelocity_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdKeepVelocity_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdKeepVelocity_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdKeepVelocity_doGet_EVString_void(EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdKeepVelocity_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdKeepVelocity_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdKeepVelocity_doSet_void_void_EVString(EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdKeepVelocity_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdKeepVelocity_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdKeepVelocity_trySet_ev_bool_void_EVString_EVString(EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdKeepVelocity_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdKeepVelocity_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdKeepVelocity_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdKeepVelocity_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdKeepVelocity::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdKeepVelocity_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdKeepVelocity_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdKeepVelocity::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdKeepVelocity_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdKeepVelocity_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdKeepVelocity::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdKeepVelocityProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdKeepVelocity_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdKeepVelocity* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdKeepVelocity*) pObjectXXXX;
					if (dynamic_cast<CCmdKeepVelocityProxy*>((EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdKeepVelocity*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdKeepVelocity::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdKeepVelocity_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdKeepVelocity_doGet_EVString_void_Callback* pCallback )
				{
					CCmdKeepVelocityProxy* ptr = dynamic_cast<CCmdKeepVelocityProxy*>((EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdKeepVelocity*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdKeepVelocity_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdKeepVelocity_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdKeepVelocity* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdKeepVelocity*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdKeepVelocity::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdKeepVelocity_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdKeepVelocity* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdKeepVelocity*) pObjectXXXX;
					if (dynamic_cast<CCmdKeepVelocityProxy*>((EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdKeepVelocity*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdKeepVelocity::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdKeepVelocity_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdKeepVelocity_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdKeepVelocityProxy* ptr = dynamic_cast<CCmdKeepVelocityProxy*>((EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdKeepVelocity*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdKeepVelocity_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdKeepVelocity_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdKeepVelocity* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdKeepVelocity*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdKeepVelocity::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdKeepVelocity_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdKeepVelocity_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdKeepVelocityProxy* ptr = dynamic_cast<CCmdKeepVelocityProxy*>((EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdKeepVelocity*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_CCmdKeepVelocity_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector__affectParticles_void_CParticleSystem_Real(void *pObjectXXXX, _in EarthView::World::Graphic::CParticleSystem* pSystem, _in Real timeElapsed )
				{
					EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector*) pObjectXXXX;
					if (dynamic_cast<CDirectionRandomiserAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::_affectParticles(pSystem, timeElapsed);
					else
						ptrNativeObject->_affectParticles(pSystem, timeElapsed);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector__affectParticles_void_CParticleSystem_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector__affectParticles_void_CParticleSystem_Real_Callback* pCallback )
				{
					CDirectionRandomiserAffectorProxy* ptr = dynamic_cast<CDirectionRandomiserAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector__affectParticles_void_CParticleSystem_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector__affectParticles_void_CParticleSystem_Real_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CParticleSystem* pSystem, _in Real timeElapsed )
				{
					EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::_affectParticles(pSystem, timeElapsed);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_setRandomness_void_Real(void *pObjectXXXX, _in Real force )
				{
					EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector*) pObjectXXXX;
					ptrNativeObject->setRandomness(force);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_setScope_void_Real(void *pObjectXXXX, _in Real force )
				{
					EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector*) pObjectXXXX;
					ptrNativeObject->setScope(force);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_setKeepVelocity_void_bool(void *pObjectXXXX, _in bool keepVelocity )
				{
					EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector*) pObjectXXXX;
					ptrNativeObject->setKeepVelocity(keepVelocity);
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_getRandomness_Real(void *pObjectXXXX )
				{
					const EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->getRandomness();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_getScope_Real(void *pObjectXXXX )
				{
					const EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->getScope();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_getKeepVelocity_bool(void *pObjectXXXX )
				{
					const EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->getKeepVelocity();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_msRandomnessCmd()
				{
					EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdRandomness &objXXXX = EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::msRandomnessCmd;
					EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdRandomness *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_msRandomnessCmd( void*  value )
				{
					EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::msRandomnessCmd = *(EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdRandomness*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_msScopeCmd()
				{
					EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CmdScope &objXXXX = EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::msScopeCmd;
					EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CmdScope *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_msScopeCmd( void*  value )
				{
					EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::msScopeCmd = *(EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CmdScope*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_msKeepVelocityCmd()
				{
					EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdKeepVelocity &objXXXX = EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::msKeepVelocityCmd;
					EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdKeepVelocity *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_msKeepVelocityCmd( void*  value )
				{
					EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::msKeepVelocityCmd = *(EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdKeepVelocity*)value;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector__initParticle_void_CParticle( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector__initParticle_void_CParticle_Callback* pCallback )
				{
					CDirectionRandomiserAffectorProxy* ptr = dynamic_cast<CDirectionRandomiserAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector__initParticle_void_CParticle(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_setParameter_ev_bool_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_setParameter_ev_bool_EVString_EVString_Callback* pCallback )
				{
					CDirectionRandomiserAffectorProxy* ptr = dynamic_cast<CDirectionRandomiserAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_setParameter_ev_bool_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback )
				{
					CDirectionRandomiserAffectorProxy* ptr = dynamic_cast<CDirectionRandomiserAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_setParameterList_void_CommonStringPairList( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_setParameterList_void_CommonStringPairList_Callback* pCallback )
				{
					CDirectionRandomiserAffectorProxy* ptr = dynamic_cast<CDirectionRandomiserAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_setParameterList_void_CommonStringPairList(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_getParameter_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_getParameter_EVString_EVString_Callback* pCallback )
				{
					CDirectionRandomiserAffectorProxy* ptr = dynamic_cast<CDirectionRandomiserAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_getParameter_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_copyParametersTo_void_CStringInterface( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_copyParametersTo_void_CStringInterface_Callback* pCallback )
				{
					CDirectionRandomiserAffectorProxy* ptr = dynamic_cast<CDirectionRandomiserAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CDirectionRandomiserAffector_copyParametersTo_void_CStringInterface(pCallback);
					}
				}
			}
		}
	}
}
