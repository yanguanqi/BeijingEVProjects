/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "plugin_particlefx/rotationaffector.h"
namespace EarthView
{
	namespace World
	{
		namespace Plugin
		{
			namespace ParticleFX
			{
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CRotationAffector__initParticle_void_CParticle_Callback)(_in EarthView::World::Graphic::CParticle* pParticle);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CRotationAffector__affectParticles_void_CParticleSystem_Real_Callback)(_in EarthView::World::Graphic::CParticleSystem* pSystem, _in Real timeElapsed);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CRotationAffector_setParameter_ev_bool_EVString_EVString_Callback)(_in char*& name, _in char*& value);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CRotationAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback)(_in char*& name, _in ev_bool readOnly, _in ev_bool enable);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CRotationAffector_setParameterList_void_CommonStringPairList_Callback)(_in const void* paramList);
				typedef char*  ( _stdcall EarthView_World_Plugin_ParticleFX_CRotationAffector_getParameter_EVString_EVString_Callback)(_in char*& name);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CRotationAffector_copyParametersTo_void_CStringInterface_Callback)(_in EarthView::World::Core::CStringInterface* dest);
				class CRotationAffectorProxy : public EarthView::World::Plugin::ParticleFX::CRotationAffector
				{
				private:
					EarthView_World_Plugin_ParticleFX_CRotationAffector__initParticle_void_CParticle_Callback* m_EarthView_World_Plugin_ParticleFX_CRotationAffector__initParticle_void_CParticle_Callback;
					EarthView_World_Plugin_ParticleFX_CRotationAffector__affectParticles_void_CParticleSystem_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CRotationAffector__affectParticles_void_CParticleSystem_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CRotationAffector_setParameter_ev_bool_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CRotationAffector_setParameter_ev_bool_EVString_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CRotationAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* m_EarthView_World_Plugin_ParticleFX_CRotationAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback;
					EarthView_World_Plugin_ParticleFX_CRotationAffector_setParameterList_void_CommonStringPairList_Callback* m_EarthView_World_Plugin_ParticleFX_CRotationAffector_setParameterList_void_CommonStringPairList_Callback;
					EarthView_World_Plugin_ParticleFX_CRotationAffector_getParameter_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CRotationAffector_getParameter_EVString_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CRotationAffector_copyParametersTo_void_CStringInterface_Callback* m_EarthView_World_Plugin_ParticleFX_CRotationAffector_copyParametersTo_void_CStringInterface_Callback;
				public:
					CRotationAffectorProxy(EarthView::World::Core::CNameValuePairList *pList) : CRotationAffector(pList)
					{
						m_EarthView_World_Plugin_ParticleFX_CRotationAffector__initParticle_void_CParticle_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRotationAffector__affectParticles_void_CParticleSystem_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRotationAffector_setParameter_ev_bool_EVString_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRotationAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRotationAffector_setParameterList_void_CommonStringPairList_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRotationAffector_getParameter_EVString_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRotationAffector_copyParametersTo_void_CStringInterface_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector__initParticle_void_CParticle(EarthView_World_Plugin_ParticleFX_CRotationAffector__initParticle_void_CParticle_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRotationAffector__initParticle_void_CParticle_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector__affectParticles_void_CParticleSystem_Real(EarthView_World_Plugin_ParticleFX_CRotationAffector__affectParticles_void_CParticleSystem_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRotationAffector__affectParticles_void_CParticleSystem_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_setParameter_ev_bool_EVString_EVString(EarthView_World_Plugin_ParticleFX_CRotationAffector_setParameter_ev_bool_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRotationAffector_setParameter_ev_bool_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool(EarthView_World_Plugin_ParticleFX_CRotationAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRotationAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_setParameterList_void_CommonStringPairList(EarthView_World_Plugin_ParticleFX_CRotationAffector_setParameterList_void_CommonStringPairList_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRotationAffector_setParameterList_void_CommonStringPairList_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_getParameter_EVString_EVString(EarthView_World_Plugin_ParticleFX_CRotationAffector_getParameter_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRotationAffector_getParameter_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_copyParametersTo_void_CStringInterface(EarthView_World_Plugin_ParticleFX_CRotationAffector_copyParametersTo_void_CStringInterface_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRotationAffector_copyParametersTo_void_CStringInterface_Callback = pCallback;
					}
					virtual void _initParticle(_in EarthView::World::Graphic::CParticle* pParticle)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRotationAffector__initParticle_void_CParticle_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CRotationAffector__initParticle_void_CParticle_Callback(pParticle);
						}
						else
							return this->CRotationAffector::_initParticle(pParticle);
					}
					virtual void _affectParticles(_in EarthView::World::Graphic::CParticleSystem* pSystem, _in Real timeElapsed)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRotationAffector__affectParticles_void_CParticleSystem_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CRotationAffector__affectParticles_void_CParticleSystem_Real_Callback(pSystem, timeElapsed);
						}
						else
							return this->CRotationAffector::_affectParticles(pSystem, timeElapsed);
					}
					virtual ev_bool setParameter(_in const EVString& name, _in const EVString& value)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRotationAffector_setParameter_ev_bool_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							char* value_Char = value.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CRotationAffector_setParameter_ev_bool_EVString_EVString_Callback(name_Char, value_Char);
							return returnValue;
						}
						else
							return this->CRotationAffector::setParameter(name, value);
					}
					virtual ev_bool setParameter(_in const EVString& name, _in ev_bool readOnly, _in ev_bool enable)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRotationAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CRotationAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback(name_Char, readOnly, enable);
							return returnValue;
						}
						else
							return this->CRotationAffector::setParameter(name, readOnly, enable);
					}
					virtual void setParameterList(_in const EarthView::World::Core::CommonStringPairList& paramList)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRotationAffector_setParameterList_void_CommonStringPairList_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CRotationAffector_setParameterList_void_CommonStringPairList_Callback(&paramList);
						}
						else
							return this->CRotationAffector::setParameterList(paramList);
					}
					virtual EVString getParameter(_in const EVString& name) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRotationAffector_getParameter_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EVString returnValue = m_EarthView_World_Plugin_ParticleFX_CRotationAffector_getParameter_EVString_EVString_Callback(name_Char);
							return returnValue;
						}
						else
							return this->CRotationAffector::getParameter(name);
					}
					virtual void copyParametersTo(_in EarthView::World::Core::CStringInterface* dest) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRotationAffector_copyParametersTo_void_CStringInterface_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CRotationAffector_copyParametersTo_void_CStringInterface_Callback(dest);
						}
						else
							return this->CRotationAffector::copyParametersTo(dest);
					}
				};
				REGISTER_FACTORY_CLASS(CRotationAffectorProxy);
				typedef char*  ( _stdcall EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdRotationSpeedRangeStartProxy : public EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeStart
				{
				private:
					EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_doGet_EVString_void_Callback* m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_doGet_EVString_void_Callback;
					EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_doSet_void_void_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_doSet_void_void_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdRotationSpeedRangeStartProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdRotationSpeedRangeStart(pList)
					{
						m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_doGet_EVString_void(EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_doSet_void_void_EVString(EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_trySet_ev_bool_void_EVString_EVString(EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdRotationSpeedRangeStart::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdRotationSpeedRangeStart::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdRotationSpeedRangeStart::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdRotationSpeedRangeStartProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeStart* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeStart*) pObjectXXXX;
					if (dynamic_cast<CCmdRotationSpeedRangeStartProxy*>((EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeStart*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeStart::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_doGet_EVString_void_Callback* pCallback )
				{
					CCmdRotationSpeedRangeStartProxy* ptr = dynamic_cast<CCmdRotationSpeedRangeStartProxy*>((EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeStart*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeStart* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeStart*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeStart::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeStart* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeStart*) pObjectXXXX;
					if (dynamic_cast<CCmdRotationSpeedRangeStartProxy*>((EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeStart*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeStart::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdRotationSpeedRangeStartProxy* ptr = dynamic_cast<CCmdRotationSpeedRangeStartProxy*>((EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeStart*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeStart* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeStart*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeStart::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdRotationSpeedRangeStartProxy* ptr = dynamic_cast<CCmdRotationSpeedRangeStartProxy*>((EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeStart*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdRotationSpeedRangeEndProxy : public EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeEnd
				{
				private:
					EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_doGet_EVString_void_Callback* m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_doGet_EVString_void_Callback;
					EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_doSet_void_void_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_doSet_void_void_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdRotationSpeedRangeEndProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdRotationSpeedRangeEnd(pList)
					{
						m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_doGet_EVString_void(EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_doSet_void_void_EVString(EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_trySet_ev_bool_void_EVString_EVString(EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdRotationSpeedRangeEnd::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdRotationSpeedRangeEnd::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdRotationSpeedRangeEnd::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdRotationSpeedRangeEndProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeEnd* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeEnd*) pObjectXXXX;
					if (dynamic_cast<CCmdRotationSpeedRangeEndProxy*>((EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeEnd*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeEnd::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_doGet_EVString_void_Callback* pCallback )
				{
					CCmdRotationSpeedRangeEndProxy* ptr = dynamic_cast<CCmdRotationSpeedRangeEndProxy*>((EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeEnd*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeEnd* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeEnd*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeEnd::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeEnd* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeEnd*) pObjectXXXX;
					if (dynamic_cast<CCmdRotationSpeedRangeEndProxy*>((EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeEnd*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeEnd::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdRotationSpeedRangeEndProxy* ptr = dynamic_cast<CCmdRotationSpeedRangeEndProxy*>((EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeEnd*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeEnd* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeEnd*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeEnd::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdRotationSpeedRangeEndProxy* ptr = dynamic_cast<CCmdRotationSpeedRangeEndProxy*>((EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeEnd*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdRotationRangeStartProxy : public EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeStart
				{
				private:
					EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_doGet_EVString_void_Callback* m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_doGet_EVString_void_Callback;
					EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_doSet_void_void_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_doSet_void_void_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdRotationRangeStartProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdRotationRangeStart(pList)
					{
						m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_doGet_EVString_void(EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_doSet_void_void_EVString(EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_trySet_ev_bool_void_EVString_EVString(EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdRotationRangeStart::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdRotationRangeStart::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdRotationRangeStart::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdRotationRangeStartProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeStart* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeStart*) pObjectXXXX;
					if (dynamic_cast<CCmdRotationRangeStartProxy*>((EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeStart*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeStart::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_doGet_EVString_void_Callback* pCallback )
				{
					CCmdRotationRangeStartProxy* ptr = dynamic_cast<CCmdRotationRangeStartProxy*>((EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeStart*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeStart* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeStart*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeStart::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeStart* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeStart*) pObjectXXXX;
					if (dynamic_cast<CCmdRotationRangeStartProxy*>((EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeStart*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeStart::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdRotationRangeStartProxy* ptr = dynamic_cast<CCmdRotationRangeStartProxy*>((EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeStart*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeStart* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeStart*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeStart::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdRotationRangeStartProxy* ptr = dynamic_cast<CCmdRotationRangeStartProxy*>((EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeStart*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdRotationRangeEndProxy : public EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeEnd
				{
				private:
					EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_doGet_EVString_void_Callback* m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_doGet_EVString_void_Callback;
					EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_doSet_void_void_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_doSet_void_void_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdRotationRangeEndProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdRotationRangeEnd(pList)
					{
						m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_doGet_EVString_void(EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_doSet_void_void_EVString(EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_trySet_ev_bool_void_EVString_EVString(EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdRotationRangeEnd::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdRotationRangeEnd::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdRotationRangeEnd::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdRotationRangeEndProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeEnd* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeEnd*) pObjectXXXX;
					if (dynamic_cast<CCmdRotationRangeEndProxy*>((EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeEnd*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeEnd::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_doGet_EVString_void_Callback* pCallback )
				{
					CCmdRotationRangeEndProxy* ptr = dynamic_cast<CCmdRotationRangeEndProxy*>((EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeEnd*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeEnd* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeEnd*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeEnd::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeEnd* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeEnd*) pObjectXXXX;
					if (dynamic_cast<CCmdRotationRangeEndProxy*>((EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeEnd*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeEnd::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdRotationRangeEndProxy* ptr = dynamic_cast<CCmdRotationRangeEndProxy*>((EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeEnd*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeEnd* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeEnd*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeEnd::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdRotationRangeEndProxy* ptr = dynamic_cast<CCmdRotationRangeEndProxy*>((EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeEnd*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CRotationAffector__initParticle_void_CParticle(void *pObjectXXXX, _in EarthView::World::Graphic::CParticle* pParticle )
				{
					EarthView::World::Plugin::ParticleFX::CRotationAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CRotationAffector*) pObjectXXXX;
					if (dynamic_cast<CRotationAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CRotationAffector*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Plugin::ParticleFX::CRotationAffector::_initParticle(pParticle);
					else
						ptrNativeObject->_initParticle(pParticle);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector__initParticle_void_CParticle( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRotationAffector__initParticle_void_CParticle_Callback* pCallback )
				{
					CRotationAffectorProxy* ptr = dynamic_cast<CRotationAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CRotationAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector__initParticle_void_CParticle(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CRotationAffector__initParticle_void_CParticle_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CParticle* pParticle )
				{
					EarthView::World::Plugin::ParticleFX::CRotationAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CRotationAffector*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Plugin::ParticleFX::CRotationAffector::_initParticle(pParticle);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CRotationAffector__affectParticles_void_CParticleSystem_Real(void *pObjectXXXX, _in EarthView::World::Graphic::CParticleSystem* pSystem, _in Real timeElapsed )
				{
					EarthView::World::Plugin::ParticleFX::CRotationAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CRotationAffector*) pObjectXXXX;
					if (dynamic_cast<CRotationAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CRotationAffector*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Plugin::ParticleFX::CRotationAffector::_affectParticles(pSystem, timeElapsed);
					else
						ptrNativeObject->_affectParticles(pSystem, timeElapsed);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector__affectParticles_void_CParticleSystem_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRotationAffector__affectParticles_void_CParticleSystem_Real_Callback* pCallback )
				{
					CRotationAffectorProxy* ptr = dynamic_cast<CRotationAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CRotationAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector__affectParticles_void_CParticleSystem_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CRotationAffector__affectParticles_void_CParticleSystem_Real_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CParticleSystem* pSystem, _in Real timeElapsed )
				{
					EarthView::World::Plugin::ParticleFX::CRotationAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CRotationAffector*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Plugin::ParticleFX::CRotationAffector::_affectParticles(pSystem, timeElapsed);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CRotationAffector_setRotationSpeedRangeStart_void_CRadian(void *pObjectXXXX, _in const void* angle )
				{
					EarthView::World::Plugin::ParticleFX::CRotationAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CRotationAffector*) pObjectXXXX;
					ptrNativeObject->setRotationSpeedRangeStart(*(EarthView::World::Spatial::Math::CRadian*)angle);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CRotationAffector_setRotationSpeedRangeEnd_void_CRadian(void *pObjectXXXX, _in const void* angle )
				{
					EarthView::World::Plugin::ParticleFX::CRotationAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CRotationAffector*) pObjectXXXX;
					ptrNativeObject->setRotationSpeedRangeEnd(*(EarthView::World::Spatial::Math::CRadian*)angle);
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Plugin_ParticleFX_CRotationAffector_getRotationSpeedRangeStart_CRadian(void *pObjectXXXX )
				{
					const EarthView::World::Plugin::ParticleFX::CRotationAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CRotationAffector*) pObjectXXXX;
					const EarthView::World::Spatial::Math::CRadian& objXXXX = ptrNativeObject->getRotationSpeedRangeStart();
					const EarthView::World::Spatial::Math::CRadian *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Plugin_ParticleFX_CRotationAffector_getRotationSpeedRangeEnd_CRadian(void *pObjectXXXX )
				{
					const EarthView::World::Plugin::ParticleFX::CRotationAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CRotationAffector*) pObjectXXXX;
					const EarthView::World::Spatial::Math::CRadian& objXXXX = ptrNativeObject->getRotationSpeedRangeEnd();
					const EarthView::World::Spatial::Math::CRadian *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CRotationAffector_setRotationRangeStart_void_CRadian(void *pObjectXXXX, _in const void* angle )
				{
					EarthView::World::Plugin::ParticleFX::CRotationAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CRotationAffector*) pObjectXXXX;
					ptrNativeObject->setRotationRangeStart(*(EarthView::World::Spatial::Math::CRadian*)angle);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CRotationAffector_setRotationRangeEnd_void_CRadian(void *pObjectXXXX, _in const void* angle )
				{
					EarthView::World::Plugin::ParticleFX::CRotationAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CRotationAffector*) pObjectXXXX;
					ptrNativeObject->setRotationRangeEnd(*(EarthView::World::Spatial::Math::CRadian*)angle);
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Plugin_ParticleFX_CRotationAffector_getRotationRangeStart_CRadian(void *pObjectXXXX )
				{
					const EarthView::World::Plugin::ParticleFX::CRotationAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CRotationAffector*) pObjectXXXX;
					const EarthView::World::Spatial::Math::CRadian& objXXXX = ptrNativeObject->getRotationRangeStart();
					const EarthView::World::Spatial::Math::CRadian *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Plugin_ParticleFX_CRotationAffector_getRotationRangeEnd_CRadian(void *pObjectXXXX )
				{
					const EarthView::World::Plugin::ParticleFX::CRotationAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CRotationAffector*) pObjectXXXX;
					const EarthView::World::Spatial::Math::CRadian& objXXXX = ptrNativeObject->getRotationRangeEnd();
					const EarthView::World::Spatial::Math::CRadian *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Plugin_ParticleFX_CRotationAffector_msRotationSpeedRangeStartCmd()
				{
					EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeStart &objXXXX = EarthView::World::Plugin::ParticleFX::CRotationAffector::msRotationSpeedRangeStartCmd;
					EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeStart *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Plugin_ParticleFX_CRotationAffector_msRotationSpeedRangeStartCmd( void*  value )
				{
					EarthView::World::Plugin::ParticleFX::CRotationAffector::msRotationSpeedRangeStartCmd = *(EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeStart*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Plugin_ParticleFX_CRotationAffector_msRotationSpeedRangeEndCmd()
				{
					EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeEnd &objXXXX = EarthView::World::Plugin::ParticleFX::CRotationAffector::msRotationSpeedRangeEndCmd;
					EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeEnd *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Plugin_ParticleFX_CRotationAffector_msRotationSpeedRangeEndCmd( void*  value )
				{
					EarthView::World::Plugin::ParticleFX::CRotationAffector::msRotationSpeedRangeEndCmd = *(EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeEnd*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Plugin_ParticleFX_CRotationAffector_msRotationRangeStartCmd()
				{
					EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeStart &objXXXX = EarthView::World::Plugin::ParticleFX::CRotationAffector::msRotationRangeStartCmd;
					EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeStart *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Plugin_ParticleFX_CRotationAffector_msRotationRangeStartCmd( void*  value )
				{
					EarthView::World::Plugin::ParticleFX::CRotationAffector::msRotationRangeStartCmd = *(EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeStart*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Plugin_ParticleFX_CRotationAffector_msRotationRangeEndCmd()
				{
					EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeEnd &objXXXX = EarthView::World::Plugin::ParticleFX::CRotationAffector::msRotationRangeEndCmd;
					EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeEnd *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Plugin_ParticleFX_CRotationAffector_msRotationRangeEndCmd( void*  value )
				{
					EarthView::World::Plugin::ParticleFX::CRotationAffector::msRotationRangeEndCmd = *(EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeEnd*)value;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_setParameter_ev_bool_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRotationAffector_setParameter_ev_bool_EVString_EVString_Callback* pCallback )
				{
					CRotationAffectorProxy* ptr = dynamic_cast<CRotationAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CRotationAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_setParameter_ev_bool_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRotationAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback )
				{
					CRotationAffectorProxy* ptr = dynamic_cast<CRotationAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CRotationAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_setParameterList_void_CommonStringPairList( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRotationAffector_setParameterList_void_CommonStringPairList_Callback* pCallback )
				{
					CRotationAffectorProxy* ptr = dynamic_cast<CRotationAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CRotationAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_setParameterList_void_CommonStringPairList(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_getParameter_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRotationAffector_getParameter_EVString_EVString_Callback* pCallback )
				{
					CRotationAffectorProxy* ptr = dynamic_cast<CRotationAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CRotationAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_getParameter_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_copyParametersTo_void_CStringInterface( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRotationAffector_copyParametersTo_void_CStringInterface_Callback* pCallback )
				{
					CRotationAffectorProxy* ptr = dynamic_cast<CRotationAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CRotationAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_copyParametersTo_void_CStringInterface(pCallback);
					}
				}
			}
		}
	}
}
