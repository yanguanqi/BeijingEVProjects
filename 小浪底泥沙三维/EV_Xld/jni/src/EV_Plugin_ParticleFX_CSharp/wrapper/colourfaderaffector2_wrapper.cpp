/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "plugin_particlefx/colourfaderaffector2.h"
namespace EarthView
{
	namespace World
	{
		namespace Plugin
		{
			namespace ParticleFX
			{
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2__initParticle_void_CParticle_Callback)(_in EarthView::World::Graphic::CParticle* pParticle);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2__affectParticles_void_CParticleSystem_Real_Callback)(_in EarthView::World::Graphic::CParticleSystem* pSystem, _in Real timeElapsed);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setParameter_ev_bool_EVString_EVString_Callback)(_in char*& name, _in char*& value);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback)(_in char*& name, _in ev_bool readOnly, _in ev_bool enable);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setParameterList_void_CommonStringPairList_Callback)(_in const void* paramList);
				typedef char*  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_getParameter_EVString_EVString_Callback)(_in char*& name);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_copyParametersTo_void_CStringInterface_Callback)(_in EarthView::World::Core::CStringInterface* dest);
				class CColourFaderAffector2Proxy : public EarthView::World::Plugin::ParticleFX::CColourFaderAffector2
				{
				private:
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector2__initParticle_void_CParticle_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2__initParticle_void_CParticle_Callback;
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector2__affectParticles_void_CParticleSystem_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2__affectParticles_void_CParticleSystem_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setParameter_ev_bool_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setParameter_ev_bool_EVString_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback;
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setParameterList_void_CommonStringPairList_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setParameterList_void_CommonStringPairList_Callback;
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_getParameter_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_getParameter_EVString_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_copyParametersTo_void_CStringInterface_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_copyParametersTo_void_CStringInterface_Callback;
				public:
					CColourFaderAffector2Proxy(EarthView::World::Core::CNameValuePairList *pList) : CColourFaderAffector2(pList)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2__initParticle_void_CParticle_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2__affectParticles_void_CParticleSystem_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setParameter_ev_bool_EVString_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setParameterList_void_CommonStringPairList_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_getParameter_EVString_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_copyParametersTo_void_CStringInterface_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2__initParticle_void_CParticle(EarthView_World_Plugin_ParticleFX_CColourFaderAffector2__initParticle_void_CParticle_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2__initParticle_void_CParticle_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2__affectParticles_void_CParticleSystem_Real(EarthView_World_Plugin_ParticleFX_CColourFaderAffector2__affectParticles_void_CParticleSystem_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2__affectParticles_void_CParticleSystem_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setParameter_ev_bool_EVString_EVString(EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setParameter_ev_bool_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setParameter_ev_bool_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setParameter_ev_bool_EVString_ev_bool_ev_bool(EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setParameterList_void_CommonStringPairList(EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setParameterList_void_CommonStringPairList_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setParameterList_void_CommonStringPairList_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_getParameter_EVString_EVString(EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_getParameter_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_getParameter_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_copyParametersTo_void_CStringInterface(EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_copyParametersTo_void_CStringInterface_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_copyParametersTo_void_CStringInterface_Callback = pCallback;
					}
					virtual void _affectParticles(_in EarthView::World::Graphic::CParticleSystem* pSystem, _in Real timeElapsed)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2__affectParticles_void_CParticleSystem_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2__affectParticles_void_CParticleSystem_Real_Callback(pSystem, timeElapsed);
						}
						else
							return this->CColourFaderAffector2::_affectParticles(pSystem, timeElapsed);
					}
					virtual void _initParticle(_in EarthView::World::Graphic::CParticle* pParticle)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2__initParticle_void_CParticle_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2__initParticle_void_CParticle_Callback(pParticle);
						}
						else
							return this->CColourFaderAffector2::_initParticle(pParticle);
					}
					virtual ev_bool setParameter(_in const EVString& name, _in const EVString& value)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setParameter_ev_bool_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							char* value_Char = value.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setParameter_ev_bool_EVString_EVString_Callback(name_Char, value_Char);
							return returnValue;
						}
						else
							return this->CColourFaderAffector2::setParameter(name, value);
					}
					virtual ev_bool setParameter(_in const EVString& name, _in ev_bool readOnly, _in ev_bool enable)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback(name_Char, readOnly, enable);
							return returnValue;
						}
						else
							return this->CColourFaderAffector2::setParameter(name, readOnly, enable);
					}
					virtual void setParameterList(_in const EarthView::World::Core::CommonStringPairList& paramList)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setParameterList_void_CommonStringPairList_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setParameterList_void_CommonStringPairList_Callback(&paramList);
						}
						else
							return this->CColourFaderAffector2::setParameterList(paramList);
					}
					virtual EVString getParameter(_in const EVString& name) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_getParameter_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EVString returnValue = m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_getParameter_EVString_EVString_Callback(name_Char);
							return returnValue;
						}
						else
							return this->CColourFaderAffector2::getParameter(name);
					}
					virtual void copyParametersTo(_in EarthView::World::Core::CStringInterface* dest) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_copyParametersTo_void_CStringInterface_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_copyParametersTo_void_CStringInterface_Callback(dest);
						}
						else
							return this->CColourFaderAffector2::copyParametersTo(dest);
					}
				};
				REGISTER_FACTORY_CLASS(CColourFaderAffector2Proxy);
				typedef char*  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust1_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust1_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust1_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdRedAdjust1Proxy : public EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust1
				{
				private:
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust1_doGet_EVString_void_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust1_doGet_EVString_void_Callback;
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust1_doSet_void_void_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust1_doSet_void_void_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust1_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust1_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdRedAdjust1Proxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdRedAdjust1(pList)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust1_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust1_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust1_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust1_doGet_EVString_void(EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust1_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust1_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust1_doSet_void_void_EVString(EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust1_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust1_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust1_trySet_ev_bool_void_EVString_EVString(EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust1_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust1_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust1_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust1_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdRedAdjust1::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust1_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust1_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdRedAdjust1::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust1_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust1_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdRedAdjust1::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdRedAdjust1Proxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust1_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust1* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust1*) pObjectXXXX;
					if (dynamic_cast<CCmdRedAdjust1Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust1*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust1::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust1_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust1_doGet_EVString_void_Callback* pCallback )
				{
					CCmdRedAdjust1Proxy* ptr = dynamic_cast<CCmdRedAdjust1Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust1*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust1_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust1_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust1* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust1*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust1::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust1_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust1* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust1*) pObjectXXXX;
					if (dynamic_cast<CCmdRedAdjust1Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust1*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust1::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust1_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust1_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdRedAdjust1Proxy* ptr = dynamic_cast<CCmdRedAdjust1Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust1*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust1_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust1_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust1* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust1*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust1::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust1_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust1_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdRedAdjust1Proxy* ptr = dynamic_cast<CCmdRedAdjust1Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust1*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust1_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust1_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust1_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust1_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdGreenAdjust1Proxy : public EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust1
				{
				private:
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust1_doGet_EVString_void_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust1_doGet_EVString_void_Callback;
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust1_doSet_void_void_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust1_doSet_void_void_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust1_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust1_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdGreenAdjust1Proxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdGreenAdjust1(pList)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust1_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust1_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust1_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust1_doGet_EVString_void(EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust1_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust1_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust1_doSet_void_void_EVString(EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust1_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust1_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust1_trySet_ev_bool_void_EVString_EVString(EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust1_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust1_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust1_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust1_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdGreenAdjust1::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust1_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust1_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdGreenAdjust1::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust1_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust1_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdGreenAdjust1::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdGreenAdjust1Proxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust1_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust1* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust1*) pObjectXXXX;
					if (dynamic_cast<CCmdGreenAdjust1Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust1*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust1::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust1_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust1_doGet_EVString_void_Callback* pCallback )
				{
					CCmdGreenAdjust1Proxy* ptr = dynamic_cast<CCmdGreenAdjust1Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust1*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust1_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust1_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust1* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust1*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust1::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust1_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust1* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust1*) pObjectXXXX;
					if (dynamic_cast<CCmdGreenAdjust1Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust1*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust1::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust1_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust1_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdGreenAdjust1Proxy* ptr = dynamic_cast<CCmdGreenAdjust1Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust1*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust1_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust1_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust1* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust1*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust1::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust1_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust1_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdGreenAdjust1Proxy* ptr = dynamic_cast<CCmdGreenAdjust1Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust1*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust1_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust1_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust1_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust1_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdBlueAdjust1Proxy : public EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust1
				{
				private:
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust1_doGet_EVString_void_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust1_doGet_EVString_void_Callback;
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust1_doSet_void_void_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust1_doSet_void_void_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust1_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust1_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdBlueAdjust1Proxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdBlueAdjust1(pList)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust1_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust1_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust1_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust1_doGet_EVString_void(EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust1_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust1_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust1_doSet_void_void_EVString(EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust1_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust1_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust1_trySet_ev_bool_void_EVString_EVString(EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust1_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust1_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust1_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust1_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdBlueAdjust1::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust1_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust1_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdBlueAdjust1::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust1_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust1_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdBlueAdjust1::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdBlueAdjust1Proxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust1_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust1* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust1*) pObjectXXXX;
					if (dynamic_cast<CCmdBlueAdjust1Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust1*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust1::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust1_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust1_doGet_EVString_void_Callback* pCallback )
				{
					CCmdBlueAdjust1Proxy* ptr = dynamic_cast<CCmdBlueAdjust1Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust1*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust1_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust1_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust1* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust1*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust1::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust1_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust1* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust1*) pObjectXXXX;
					if (dynamic_cast<CCmdBlueAdjust1Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust1*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust1::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust1_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust1_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdBlueAdjust1Proxy* ptr = dynamic_cast<CCmdBlueAdjust1Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust1*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust1_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust1_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust1* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust1*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust1::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust1_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust1_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdBlueAdjust1Proxy* ptr = dynamic_cast<CCmdBlueAdjust1Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust1*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust1_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust1_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust1_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust1_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdAlphaAdjust1Proxy : public EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust1
				{
				private:
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust1_doGet_EVString_void_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust1_doGet_EVString_void_Callback;
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust1_doSet_void_void_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust1_doSet_void_void_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust1_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust1_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdAlphaAdjust1Proxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdAlphaAdjust1(pList)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust1_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust1_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust1_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust1_doGet_EVString_void(EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust1_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust1_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust1_doSet_void_void_EVString(EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust1_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust1_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust1_trySet_ev_bool_void_EVString_EVString(EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust1_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust1_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust1_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust1_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdAlphaAdjust1::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust1_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust1_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdAlphaAdjust1::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust1_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust1_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdAlphaAdjust1::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdAlphaAdjust1Proxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust1_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust1* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust1*) pObjectXXXX;
					if (dynamic_cast<CCmdAlphaAdjust1Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust1*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust1::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust1_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust1_doGet_EVString_void_Callback* pCallback )
				{
					CCmdAlphaAdjust1Proxy* ptr = dynamic_cast<CCmdAlphaAdjust1Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust1*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust1_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust1_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust1* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust1*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust1::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust1_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust1* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust1*) pObjectXXXX;
					if (dynamic_cast<CCmdAlphaAdjust1Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust1*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust1::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust1_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust1_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdAlphaAdjust1Proxy* ptr = dynamic_cast<CCmdAlphaAdjust1Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust1*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust1_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust1_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust1* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust1*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust1::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust1_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust1_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdAlphaAdjust1Proxy* ptr = dynamic_cast<CCmdAlphaAdjust1Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust1*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust1_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust2_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust2_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust2_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdRedAdjust2Proxy : public EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust2
				{
				private:
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust2_doGet_EVString_void_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust2_doGet_EVString_void_Callback;
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust2_doSet_void_void_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust2_doSet_void_void_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust2_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust2_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdRedAdjust2Proxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdRedAdjust2(pList)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust2_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust2_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust2_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust2_doGet_EVString_void(EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust2_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust2_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust2_doSet_void_void_EVString(EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust2_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust2_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust2_trySet_ev_bool_void_EVString_EVString(EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust2_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust2_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust2_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust2_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdRedAdjust2::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust2_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust2_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdRedAdjust2::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust2_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust2_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdRedAdjust2::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdRedAdjust2Proxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust2_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust2* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust2*) pObjectXXXX;
					if (dynamic_cast<CCmdRedAdjust2Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust2*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust2::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust2_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust2_doGet_EVString_void_Callback* pCallback )
				{
					CCmdRedAdjust2Proxy* ptr = dynamic_cast<CCmdRedAdjust2Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust2*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust2_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust2_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust2* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust2*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust2::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust2_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust2* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust2*) pObjectXXXX;
					if (dynamic_cast<CCmdRedAdjust2Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust2*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust2::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust2_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust2_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdRedAdjust2Proxy* ptr = dynamic_cast<CCmdRedAdjust2Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust2*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust2_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust2_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust2* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust2*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust2::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust2_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust2_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdRedAdjust2Proxy* ptr = dynamic_cast<CCmdRedAdjust2Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust2*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdRedAdjust2_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust2_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust2_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust2_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdGreenAdjust2Proxy : public EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust2
				{
				private:
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust2_doGet_EVString_void_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust2_doGet_EVString_void_Callback;
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust2_doSet_void_void_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust2_doSet_void_void_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust2_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust2_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdGreenAdjust2Proxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdGreenAdjust2(pList)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust2_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust2_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust2_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust2_doGet_EVString_void(EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust2_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust2_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust2_doSet_void_void_EVString(EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust2_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust2_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust2_trySet_ev_bool_void_EVString_EVString(EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust2_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust2_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust2_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust2_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdGreenAdjust2::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust2_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust2_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdGreenAdjust2::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust2_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust2_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdGreenAdjust2::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdGreenAdjust2Proxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust2_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust2* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust2*) pObjectXXXX;
					if (dynamic_cast<CCmdGreenAdjust2Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust2*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust2::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust2_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust2_doGet_EVString_void_Callback* pCallback )
				{
					CCmdGreenAdjust2Proxy* ptr = dynamic_cast<CCmdGreenAdjust2Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust2*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust2_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust2_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust2* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust2*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust2::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust2_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust2* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust2*) pObjectXXXX;
					if (dynamic_cast<CCmdGreenAdjust2Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust2*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust2::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust2_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust2_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdGreenAdjust2Proxy* ptr = dynamic_cast<CCmdGreenAdjust2Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust2*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust2_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust2_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust2* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust2*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust2::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust2_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust2_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdGreenAdjust2Proxy* ptr = dynamic_cast<CCmdGreenAdjust2Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust2*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdGreenAdjust2_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust2_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust2_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust2_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdBlueAdjust2Proxy : public EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust2
				{
				private:
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust2_doGet_EVString_void_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust2_doGet_EVString_void_Callback;
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust2_doSet_void_void_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust2_doSet_void_void_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust2_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust2_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdBlueAdjust2Proxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdBlueAdjust2(pList)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust2_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust2_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust2_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust2_doGet_EVString_void(EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust2_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust2_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust2_doSet_void_void_EVString(EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust2_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust2_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust2_trySet_ev_bool_void_EVString_EVString(EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust2_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust2_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust2_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust2_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdBlueAdjust2::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust2_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust2_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdBlueAdjust2::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust2_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust2_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdBlueAdjust2::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdBlueAdjust2Proxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust2_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust2* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust2*) pObjectXXXX;
					if (dynamic_cast<CCmdBlueAdjust2Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust2*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust2::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust2_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust2_doGet_EVString_void_Callback* pCallback )
				{
					CCmdBlueAdjust2Proxy* ptr = dynamic_cast<CCmdBlueAdjust2Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust2*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust2_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust2_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust2* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust2*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust2::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust2_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust2* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust2*) pObjectXXXX;
					if (dynamic_cast<CCmdBlueAdjust2Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust2*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust2::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust2_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust2_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdBlueAdjust2Proxy* ptr = dynamic_cast<CCmdBlueAdjust2Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust2*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust2_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust2_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust2* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust2*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust2::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust2_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust2_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdBlueAdjust2Proxy* ptr = dynamic_cast<CCmdBlueAdjust2Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust2*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdBlueAdjust2_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust2_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust2_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust2_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdAlphaAdjust2Proxy : public EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust2
				{
				private:
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust2_doGet_EVString_void_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust2_doGet_EVString_void_Callback;
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust2_doSet_void_void_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust2_doSet_void_void_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust2_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust2_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdAlphaAdjust2Proxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdAlphaAdjust2(pList)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust2_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust2_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust2_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust2_doGet_EVString_void(EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust2_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust2_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust2_doSet_void_void_EVString(EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust2_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust2_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust2_trySet_ev_bool_void_EVString_EVString(EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust2_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust2_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust2_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust2_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdAlphaAdjust2::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust2_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust2_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdAlphaAdjust2::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust2_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust2_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdAlphaAdjust2::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdAlphaAdjust2Proxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust2_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust2* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust2*) pObjectXXXX;
					if (dynamic_cast<CCmdAlphaAdjust2Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust2*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust2::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust2_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust2_doGet_EVString_void_Callback* pCallback )
				{
					CCmdAlphaAdjust2Proxy* ptr = dynamic_cast<CCmdAlphaAdjust2Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust2*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust2_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust2_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust2* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust2*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust2::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust2_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust2* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust2*) pObjectXXXX;
					if (dynamic_cast<CCmdAlphaAdjust2Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust2*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust2::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust2_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust2_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdAlphaAdjust2Proxy* ptr = dynamic_cast<CCmdAlphaAdjust2Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust2*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust2_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust2_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust2* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust2*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust2::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust2_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust2_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdAlphaAdjust2Proxy* ptr = dynamic_cast<CCmdAlphaAdjust2Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust2*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdAlphaAdjust2_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdStateChange_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdStateChange_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdStateChange_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdStateChangeProxy : public EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdStateChange
				{
				private:
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdStateChange_doGet_EVString_void_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdStateChange_doGet_EVString_void_Callback;
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdStateChange_doSet_void_void_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdStateChange_doSet_void_void_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdStateChange_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdStateChange_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdStateChangeProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdStateChange(pList)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdStateChange_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdStateChange_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdStateChange_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdStateChange_doGet_EVString_void(EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdStateChange_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdStateChange_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdStateChange_doSet_void_void_EVString(EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdStateChange_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdStateChange_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdStateChange_trySet_ev_bool_void_EVString_EVString(EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdStateChange_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdStateChange_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdStateChange_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdStateChange_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdStateChange::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdStateChange_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdStateChange_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdStateChange::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdStateChange_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdStateChange_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdStateChange::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdStateChangeProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdStateChange_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdStateChange* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdStateChange*) pObjectXXXX;
					if (dynamic_cast<CCmdStateChangeProxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdStateChange*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdStateChange::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdStateChange_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdStateChange_doGet_EVString_void_Callback* pCallback )
				{
					CCmdStateChangeProxy* ptr = dynamic_cast<CCmdStateChangeProxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdStateChange*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdStateChange_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdStateChange_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdStateChange* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdStateChange*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdStateChange::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdStateChange_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdStateChange* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdStateChange*) pObjectXXXX;
					if (dynamic_cast<CCmdStateChangeProxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdStateChange*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdStateChange::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdStateChange_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdStateChange_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdStateChangeProxy* ptr = dynamic_cast<CCmdStateChangeProxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdStateChange*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdStateChange_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdStateChange_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdStateChange* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdStateChange*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdStateChange::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdStateChange_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdStateChange_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdStateChangeProxy* ptr = dynamic_cast<CCmdStateChangeProxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdStateChange*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_CCmdStateChange_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2__affectParticles_void_CParticleSystem_Real(void *pObjectXXXX, _in EarthView::World::Graphic::CParticleSystem* pSystem, _in Real timeElapsed )
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjectXXXX;
					if (dynamic_cast<CColourFaderAffector2Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::_affectParticles(pSystem, timeElapsed);
					else
						ptrNativeObject->_affectParticles(pSystem, timeElapsed);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2__affectParticles_void_CParticleSystem_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector2__affectParticles_void_CParticleSystem_Real_Callback* pCallback )
				{
					CColourFaderAffector2Proxy* ptr = dynamic_cast<CColourFaderAffector2Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2__affectParticles_void_CParticleSystem_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2__affectParticles_void_CParticleSystem_Real_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CParticleSystem* pSystem, _in Real timeElapsed )
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::_affectParticles(pSystem, timeElapsed);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setAdjust1_void_float_float_float_float(void *pObjectXXXX, _in float red, _in float green, _in float blue, _in float alpha )
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjectXXXX;
					ptrNativeObject->setAdjust1(red, green, blue, alpha);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setAdjust1_void_float_float_float(void *pObjectXXXX, _in float red, _in float green, _in float blue )
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjectXXXX;
					ptrNativeObject->setAdjust1(red, green, blue);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setAdjust2_void_float_float_float_float(void *pObjectXXXX, _in float red, _in float green, _in float blue, _in float alpha )
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjectXXXX;
					ptrNativeObject->setAdjust2(red, green, blue, alpha);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setAdjust2_void_float_float_float(void *pObjectXXXX, _in float red, _in float green, _in float blue )
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjectXXXX;
					ptrNativeObject->setAdjust2(red, green, blue);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setRedAdjust1_void_float(void *pObjectXXXX, _in float red )
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjectXXXX;
					ptrNativeObject->setRedAdjust1(red);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setRedAdjust2_void_float(void *pObjectXXXX, _in float red )
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjectXXXX;
					ptrNativeObject->setRedAdjust2(red);
				}
				extern "C" EV_DLL_EXPORT  float  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_getRedAdjust1_float(void *pObjectXXXX )
				{
					const EarthView::World::Plugin::ParticleFX::CColourFaderAffector2* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjectXXXX;
					float objXXXX = ptrNativeObject->getRedAdjust1();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  float  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_getRedAdjust2_float(void *pObjectXXXX )
				{
					const EarthView::World::Plugin::ParticleFX::CColourFaderAffector2* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjectXXXX;
					float objXXXX = ptrNativeObject->getRedAdjust2();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setGreenAdjust1_void_float(void *pObjectXXXX, _in float green )
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjectXXXX;
					ptrNativeObject->setGreenAdjust1(green);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setGreenAdjust2_void_float(void *pObjectXXXX, _in float green )
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjectXXXX;
					ptrNativeObject->setGreenAdjust2(green);
				}
				extern "C" EV_DLL_EXPORT  float  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_getGreenAdjust1_float(void *pObjectXXXX )
				{
					const EarthView::World::Plugin::ParticleFX::CColourFaderAffector2* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjectXXXX;
					float objXXXX = ptrNativeObject->getGreenAdjust1();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  float  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_getGreenAdjust2_float(void *pObjectXXXX )
				{
					const EarthView::World::Plugin::ParticleFX::CColourFaderAffector2* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjectXXXX;
					float objXXXX = ptrNativeObject->getGreenAdjust2();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setBlueAdjust1_void_float(void *pObjectXXXX, _in float blue )
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjectXXXX;
					ptrNativeObject->setBlueAdjust1(blue);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setBlueAdjust2_void_float(void *pObjectXXXX, _in float blue )
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjectXXXX;
					ptrNativeObject->setBlueAdjust2(blue);
				}
				extern "C" EV_DLL_EXPORT  float  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_getBlueAdjust1_float(void *pObjectXXXX )
				{
					const EarthView::World::Plugin::ParticleFX::CColourFaderAffector2* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjectXXXX;
					float objXXXX = ptrNativeObject->getBlueAdjust1();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  float  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_getBlueAdjust2_float(void *pObjectXXXX )
				{
					const EarthView::World::Plugin::ParticleFX::CColourFaderAffector2* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjectXXXX;
					float objXXXX = ptrNativeObject->getBlueAdjust2();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setAlphaAdjust1_void_float(void *pObjectXXXX, _in float alpha )
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjectXXXX;
					ptrNativeObject->setAlphaAdjust1(alpha);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setAlphaAdjust2_void_float(void *pObjectXXXX, _in float alpha )
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjectXXXX;
					ptrNativeObject->setAlphaAdjust2(alpha);
				}
				extern "C" EV_DLL_EXPORT  float  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_getAlphaAdjust1_float(void *pObjectXXXX )
				{
					const EarthView::World::Plugin::ParticleFX::CColourFaderAffector2* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjectXXXX;
					float objXXXX = ptrNativeObject->getAlphaAdjust1();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  float  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_getAlphaAdjust2_float(void *pObjectXXXX )
				{
					const EarthView::World::Plugin::ParticleFX::CColourFaderAffector2* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjectXXXX;
					float objXXXX = ptrNativeObject->getAlphaAdjust2();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setStateChange_void_Real(void *pObjectXXXX, _in Real NewValue )
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjectXXXX;
					ptrNativeObject->setStateChange(NewValue);
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_getStateChange_Real(void *pObjectXXXX )
				{
					const EarthView::World::Plugin::ParticleFX::CColourFaderAffector2* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->getStateChange();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_msRedCmd1()
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust1 &objXXXX = EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::msRedCmd1;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust1 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_msRedCmd1( void*  value )
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::msRedCmd1 = *(EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust1*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_msRedCmd2()
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust2 &objXXXX = EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::msRedCmd2;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust2 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_msRedCmd2( void*  value )
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::msRedCmd2 = *(EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust2*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_msGreenCmd1()
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust1 &objXXXX = EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::msGreenCmd1;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust1 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_msGreenCmd1( void*  value )
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::msGreenCmd1 = *(EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust1*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_msGreenCmd2()
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust2 &objXXXX = EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::msGreenCmd2;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust2 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_msGreenCmd2( void*  value )
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::msGreenCmd2 = *(EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust2*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_msBlueCmd1()
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust1 &objXXXX = EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::msBlueCmd1;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust1 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_msBlueCmd1( void*  value )
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::msBlueCmd1 = *(EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust1*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_msBlueCmd2()
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust2 &objXXXX = EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::msBlueCmd2;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust2 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_msBlueCmd2( void*  value )
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::msBlueCmd2 = *(EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust2*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_msAlphaCmd1()
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust1 &objXXXX = EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::msAlphaCmd1;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust1 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_msAlphaCmd1( void*  value )
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::msAlphaCmd1 = *(EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust1*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_msAlphaCmd2()
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust2 &objXXXX = EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::msAlphaCmd2;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust2 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_msAlphaCmd2( void*  value )
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::msAlphaCmd2 = *(EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust2*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_msStateCmd()
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdStateChange &objXXXX = EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::msStateCmd;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdStateChange *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_msStateCmd( void*  value )
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::msStateCmd = *(EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdStateChange*)value;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2__initParticle_void_CParticle( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector2__initParticle_void_CParticle_Callback* pCallback )
				{
					CColourFaderAffector2Proxy* ptr = dynamic_cast<CColourFaderAffector2Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2__initParticle_void_CParticle(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setParameter_ev_bool_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setParameter_ev_bool_EVString_EVString_Callback* pCallback )
				{
					CColourFaderAffector2Proxy* ptr = dynamic_cast<CColourFaderAffector2Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setParameter_ev_bool_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setParameter_ev_bool_EVString_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback )
				{
					CColourFaderAffector2Proxy* ptr = dynamic_cast<CColourFaderAffector2Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setParameter_ev_bool_EVString_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setParameterList_void_CommonStringPairList( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setParameterList_void_CommonStringPairList_Callback* pCallback )
				{
					CColourFaderAffector2Proxy* ptr = dynamic_cast<CColourFaderAffector2Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_setParameterList_void_CommonStringPairList(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_getParameter_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_getParameter_EVString_EVString_Callback* pCallback )
				{
					CColourFaderAffector2Proxy* ptr = dynamic_cast<CColourFaderAffector2Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_getParameter_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_copyParametersTo_void_CStringInterface( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_copyParametersTo_void_CStringInterface_Callback* pCallback )
				{
					CColourFaderAffector2Proxy* ptr = dynamic_cast<CColourFaderAffector2Proxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector2*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector2_copyParametersTo_void_CStringInterface(pCallback);
					}
				}
			}
		}
	}
}
