/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "plugin_particlefx/colourfaderaffector.h"
namespace EarthView
{
	namespace World
	{
		namespace Plugin
		{
			namespace ParticleFX
			{
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector__initParticle_void_CParticle_Callback)(_in EarthView::World::Graphic::CParticle* pParticle);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector__affectParticles_void_CParticleSystem_Real_Callback)(_in EarthView::World::Graphic::CParticleSystem* pSystem, _in Real timeElapsed);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector_setParameter_ev_bool_EVString_EVString_Callback)(_in char*& name, _in char*& value);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback)(_in char*& name, _in ev_bool readOnly, _in ev_bool enable);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector_setParameterList_void_CommonStringPairList_Callback)(_in const void* paramList);
				typedef char*  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector_getParameter_EVString_EVString_Callback)(_in char*& name);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector_copyParametersTo_void_CStringInterface_Callback)(_in EarthView::World::Core::CStringInterface* dest);
				class CColourFaderAffectorProxy : public EarthView::World::Plugin::ParticleFX::CColourFaderAffector
				{
				private:
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector__initParticle_void_CParticle_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector__initParticle_void_CParticle_Callback;
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector__affectParticles_void_CParticleSystem_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector__affectParticles_void_CParticleSystem_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector_setParameter_ev_bool_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_setParameter_ev_bool_EVString_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback;
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector_setParameterList_void_CommonStringPairList_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_setParameterList_void_CommonStringPairList_Callback;
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector_getParameter_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_getParameter_EVString_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector_copyParametersTo_void_CStringInterface_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_copyParametersTo_void_CStringInterface_Callback;
				public:
					CColourFaderAffectorProxy(EarthView::World::Core::CNameValuePairList *pList) : CColourFaderAffector(pList)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector__initParticle_void_CParticle_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector__affectParticles_void_CParticleSystem_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_setParameter_ev_bool_EVString_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_setParameterList_void_CommonStringPairList_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_getParameter_EVString_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_copyParametersTo_void_CStringInterface_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector__initParticle_void_CParticle(EarthView_World_Plugin_ParticleFX_CColourFaderAffector__initParticle_void_CParticle_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector__initParticle_void_CParticle_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector__affectParticles_void_CParticleSystem_Real(EarthView_World_Plugin_ParticleFX_CColourFaderAffector__affectParticles_void_CParticleSystem_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector__affectParticles_void_CParticleSystem_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_setParameter_ev_bool_EVString_EVString(EarthView_World_Plugin_ParticleFX_CColourFaderAffector_setParameter_ev_bool_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_setParameter_ev_bool_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool(EarthView_World_Plugin_ParticleFX_CColourFaderAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_setParameterList_void_CommonStringPairList(EarthView_World_Plugin_ParticleFX_CColourFaderAffector_setParameterList_void_CommonStringPairList_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_setParameterList_void_CommonStringPairList_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_getParameter_EVString_EVString(EarthView_World_Plugin_ParticleFX_CColourFaderAffector_getParameter_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_getParameter_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_copyParametersTo_void_CStringInterface(EarthView_World_Plugin_ParticleFX_CColourFaderAffector_copyParametersTo_void_CStringInterface_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_copyParametersTo_void_CStringInterface_Callback = pCallback;
					}
					virtual void _affectParticles(_in EarthView::World::Graphic::CParticleSystem* pSystem, _in Real timeElapsed)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector__affectParticles_void_CParticleSystem_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector__affectParticles_void_CParticleSystem_Real_Callback(pSystem, timeElapsed);
						}
						else
							return this->CColourFaderAffector::_affectParticles(pSystem, timeElapsed);
					}
					virtual void _initParticle(_in EarthView::World::Graphic::CParticle* pParticle)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector__initParticle_void_CParticle_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector__initParticle_void_CParticle_Callback(pParticle);
						}
						else
							return this->CColourFaderAffector::_initParticle(pParticle);
					}
					virtual ev_bool setParameter(_in const EVString& name, _in const EVString& value)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_setParameter_ev_bool_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							char* value_Char = value.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_setParameter_ev_bool_EVString_EVString_Callback(name_Char, value_Char);
							return returnValue;
						}
						else
							return this->CColourFaderAffector::setParameter(name, value);
					}
					virtual ev_bool setParameter(_in const EVString& name, _in ev_bool readOnly, _in ev_bool enable)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback(name_Char, readOnly, enable);
							return returnValue;
						}
						else
							return this->CColourFaderAffector::setParameter(name, readOnly, enable);
					}
					virtual void setParameterList(_in const EarthView::World::Core::CommonStringPairList& paramList)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_setParameterList_void_CommonStringPairList_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_setParameterList_void_CommonStringPairList_Callback(&paramList);
						}
						else
							return this->CColourFaderAffector::setParameterList(paramList);
					}
					virtual EVString getParameter(_in const EVString& name) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_getParameter_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EVString returnValue = m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_getParameter_EVString_EVString_Callback(name_Char);
							return returnValue;
						}
						else
							return this->CColourFaderAffector::getParameter(name);
					}
					virtual void copyParametersTo(_in EarthView::World::Core::CStringInterface* dest) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_copyParametersTo_void_CStringInterface_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_copyParametersTo_void_CStringInterface_Callback(dest);
						}
						else
							return this->CColourFaderAffector::copyParametersTo(dest);
					}
				};
				REGISTER_FACTORY_CLASS(CColourFaderAffectorProxy);
				typedef char*  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdRedAdjust_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdRedAdjust_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdRedAdjust_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdRedAdjustProxy : public EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdRedAdjust
				{
				private:
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdRedAdjust_doGet_EVString_void_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdRedAdjust_doGet_EVString_void_Callback;
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdRedAdjust_doSet_void_void_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdRedAdjust_doSet_void_void_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdRedAdjust_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdRedAdjust_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdRedAdjustProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdRedAdjust(pList)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdRedAdjust_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdRedAdjust_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdRedAdjust_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdRedAdjust_doGet_EVString_void(EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdRedAdjust_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdRedAdjust_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdRedAdjust_doSet_void_void_EVString(EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdRedAdjust_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdRedAdjust_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdRedAdjust_trySet_ev_bool_void_EVString_EVString(EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdRedAdjust_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdRedAdjust_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdRedAdjust_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdRedAdjust_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdRedAdjust::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdRedAdjust_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdRedAdjust_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdRedAdjust::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdRedAdjust_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdRedAdjust_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdRedAdjust::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdRedAdjustProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdRedAdjust_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdRedAdjust* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdRedAdjust*) pObjectXXXX;
					if (dynamic_cast<CCmdRedAdjustProxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdRedAdjust*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdRedAdjust::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdRedAdjust_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdRedAdjust_doGet_EVString_void_Callback* pCallback )
				{
					CCmdRedAdjustProxy* ptr = dynamic_cast<CCmdRedAdjustProxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdRedAdjust*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdRedAdjust_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdRedAdjust_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdRedAdjust* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdRedAdjust*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdRedAdjust::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdRedAdjust_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdRedAdjust* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdRedAdjust*) pObjectXXXX;
					if (dynamic_cast<CCmdRedAdjustProxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdRedAdjust*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdRedAdjust::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdRedAdjust_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdRedAdjust_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdRedAdjustProxy* ptr = dynamic_cast<CCmdRedAdjustProxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdRedAdjust*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdRedAdjust_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdRedAdjust_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdRedAdjust* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdRedAdjust*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdRedAdjust::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdRedAdjust_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdRedAdjust_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdRedAdjustProxy* ptr = dynamic_cast<CCmdRedAdjustProxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdRedAdjust*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdRedAdjust_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdGreenAdjust_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdGreenAdjust_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdGreenAdjust_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdGreenAdjustProxy : public EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdGreenAdjust
				{
				private:
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdGreenAdjust_doGet_EVString_void_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdGreenAdjust_doGet_EVString_void_Callback;
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdGreenAdjust_doSet_void_void_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdGreenAdjust_doSet_void_void_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdGreenAdjust_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdGreenAdjust_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdGreenAdjustProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdGreenAdjust(pList)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdGreenAdjust_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdGreenAdjust_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdGreenAdjust_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdGreenAdjust_doGet_EVString_void(EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdGreenAdjust_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdGreenAdjust_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdGreenAdjust_doSet_void_void_EVString(EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdGreenAdjust_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdGreenAdjust_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdGreenAdjust_trySet_ev_bool_void_EVString_EVString(EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdGreenAdjust_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdGreenAdjust_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdGreenAdjust_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdGreenAdjust_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdGreenAdjust::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdGreenAdjust_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdGreenAdjust_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdGreenAdjust::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdGreenAdjust_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdGreenAdjust_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdGreenAdjust::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdGreenAdjustProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdGreenAdjust_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdGreenAdjust* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdGreenAdjust*) pObjectXXXX;
					if (dynamic_cast<CCmdGreenAdjustProxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdGreenAdjust*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdGreenAdjust::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdGreenAdjust_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdGreenAdjust_doGet_EVString_void_Callback* pCallback )
				{
					CCmdGreenAdjustProxy* ptr = dynamic_cast<CCmdGreenAdjustProxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdGreenAdjust*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdGreenAdjust_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdGreenAdjust_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdGreenAdjust* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdGreenAdjust*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdGreenAdjust::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdGreenAdjust_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdGreenAdjust* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdGreenAdjust*) pObjectXXXX;
					if (dynamic_cast<CCmdGreenAdjustProxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdGreenAdjust*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdGreenAdjust::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdGreenAdjust_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdGreenAdjust_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdGreenAdjustProxy* ptr = dynamic_cast<CCmdGreenAdjustProxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdGreenAdjust*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdGreenAdjust_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdGreenAdjust_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdGreenAdjust* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdGreenAdjust*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdGreenAdjust::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdGreenAdjust_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdGreenAdjust_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdGreenAdjustProxy* ptr = dynamic_cast<CCmdGreenAdjustProxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdGreenAdjust*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdGreenAdjust_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdBlueAdjust_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdBlueAdjust_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdBlueAdjust_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdBlueAdjustProxy : public EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdBlueAdjust
				{
				private:
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdBlueAdjust_doGet_EVString_void_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdBlueAdjust_doGet_EVString_void_Callback;
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdBlueAdjust_doSet_void_void_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdBlueAdjust_doSet_void_void_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdBlueAdjust_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdBlueAdjust_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdBlueAdjustProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdBlueAdjust(pList)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdBlueAdjust_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdBlueAdjust_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdBlueAdjust_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdBlueAdjust_doGet_EVString_void(EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdBlueAdjust_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdBlueAdjust_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdBlueAdjust_doSet_void_void_EVString(EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdBlueAdjust_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdBlueAdjust_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdBlueAdjust_trySet_ev_bool_void_EVString_EVString(EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdBlueAdjust_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdBlueAdjust_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdBlueAdjust_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdBlueAdjust_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdBlueAdjust::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdBlueAdjust_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdBlueAdjust_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdBlueAdjust::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdBlueAdjust_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdBlueAdjust_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdBlueAdjust::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdBlueAdjustProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdBlueAdjust_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdBlueAdjust* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdBlueAdjust*) pObjectXXXX;
					if (dynamic_cast<CCmdBlueAdjustProxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdBlueAdjust*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdBlueAdjust::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdBlueAdjust_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdBlueAdjust_doGet_EVString_void_Callback* pCallback )
				{
					CCmdBlueAdjustProxy* ptr = dynamic_cast<CCmdBlueAdjustProxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdBlueAdjust*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdBlueAdjust_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdBlueAdjust_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdBlueAdjust* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdBlueAdjust*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdBlueAdjust::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdBlueAdjust_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdBlueAdjust* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdBlueAdjust*) pObjectXXXX;
					if (dynamic_cast<CCmdBlueAdjustProxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdBlueAdjust*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdBlueAdjust::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdBlueAdjust_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdBlueAdjust_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdBlueAdjustProxy* ptr = dynamic_cast<CCmdBlueAdjustProxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdBlueAdjust*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdBlueAdjust_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdBlueAdjust_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdBlueAdjust* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdBlueAdjust*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdBlueAdjust::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdBlueAdjust_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdBlueAdjust_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdBlueAdjustProxy* ptr = dynamic_cast<CCmdBlueAdjustProxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdBlueAdjust*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdBlueAdjust_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdAlphaAdjust_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdAlphaAdjust_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdAlphaAdjust_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdAlphaAdjustProxy : public EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdAlphaAdjust
				{
				private:
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdAlphaAdjust_doGet_EVString_void_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdAlphaAdjust_doGet_EVString_void_Callback;
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdAlphaAdjust_doSet_void_void_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdAlphaAdjust_doSet_void_void_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdAlphaAdjust_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdAlphaAdjust_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdAlphaAdjustProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdAlphaAdjust(pList)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdAlphaAdjust_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdAlphaAdjust_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdAlphaAdjust_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdAlphaAdjust_doGet_EVString_void(EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdAlphaAdjust_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdAlphaAdjust_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdAlphaAdjust_doSet_void_void_EVString(EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdAlphaAdjust_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdAlphaAdjust_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdAlphaAdjust_trySet_ev_bool_void_EVString_EVString(EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdAlphaAdjust_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdAlphaAdjust_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdAlphaAdjust_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdAlphaAdjust_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdAlphaAdjust::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdAlphaAdjust_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdAlphaAdjust_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdAlphaAdjust::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdAlphaAdjust_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdAlphaAdjust_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdAlphaAdjust::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdAlphaAdjustProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdAlphaAdjust_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdAlphaAdjust* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdAlphaAdjust*) pObjectXXXX;
					if (dynamic_cast<CCmdAlphaAdjustProxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdAlphaAdjust*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdAlphaAdjust::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdAlphaAdjust_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdAlphaAdjust_doGet_EVString_void_Callback* pCallback )
				{
					CCmdAlphaAdjustProxy* ptr = dynamic_cast<CCmdAlphaAdjustProxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdAlphaAdjust*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdAlphaAdjust_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdAlphaAdjust_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdAlphaAdjust* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdAlphaAdjust*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdAlphaAdjust::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdAlphaAdjust_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdAlphaAdjust* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdAlphaAdjust*) pObjectXXXX;
					if (dynamic_cast<CCmdAlphaAdjustProxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdAlphaAdjust*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdAlphaAdjust::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdAlphaAdjust_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdAlphaAdjust_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdAlphaAdjustProxy* ptr = dynamic_cast<CCmdAlphaAdjustProxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdAlphaAdjust*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdAlphaAdjust_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdAlphaAdjust_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdAlphaAdjust* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdAlphaAdjust*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdAlphaAdjust::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdAlphaAdjust_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdAlphaAdjust_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdAlphaAdjustProxy* ptr = dynamic_cast<CCmdAlphaAdjustProxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdAlphaAdjust*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_CCmdAlphaAdjust_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector__affectParticles_void_CParticleSystem_Real(void *pObjectXXXX, _in EarthView::World::Graphic::CParticleSystem* pSystem, _in Real timeElapsed )
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector*) pObjectXXXX;
					if (dynamic_cast<CColourFaderAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector::_affectParticles(pSystem, timeElapsed);
					else
						ptrNativeObject->_affectParticles(pSystem, timeElapsed);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector__affectParticles_void_CParticleSystem_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector__affectParticles_void_CParticleSystem_Real_Callback* pCallback )
				{
					CColourFaderAffectorProxy* ptr = dynamic_cast<CColourFaderAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector__affectParticles_void_CParticleSystem_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector__affectParticles_void_CParticleSystem_Real_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CParticleSystem* pSystem, _in Real timeElapsed )
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourFaderAffector::_affectParticles(pSystem, timeElapsed);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector_setAdjust_void_float_float_float_float(void *pObjectXXXX, _in float red, _in float green, _in float blue, _in float alpha )
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector*) pObjectXXXX;
					ptrNativeObject->setAdjust(red, green, blue, alpha);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector_setAdjust_void_float_float_float(void *pObjectXXXX, _in float red, _in float green, _in float blue )
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector*) pObjectXXXX;
					ptrNativeObject->setAdjust(red, green, blue);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector_setRedAdjust_void_float(void *pObjectXXXX, _in float red )
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector*) pObjectXXXX;
					ptrNativeObject->setRedAdjust(red);
				}
				extern "C" EV_DLL_EXPORT  float  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector_getRedAdjust_float(void *pObjectXXXX )
				{
					const EarthView::World::Plugin::ParticleFX::CColourFaderAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector*) pObjectXXXX;
					float objXXXX = ptrNativeObject->getRedAdjust();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector_setGreenAdjust_void_float(void *pObjectXXXX, _in float green )
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector*) pObjectXXXX;
					ptrNativeObject->setGreenAdjust(green);
				}
				extern "C" EV_DLL_EXPORT  float  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector_getGreenAdjust_float(void *pObjectXXXX )
				{
					const EarthView::World::Plugin::ParticleFX::CColourFaderAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector*) pObjectXXXX;
					float objXXXX = ptrNativeObject->getGreenAdjust();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector_setBlueAdjust_void_float(void *pObjectXXXX, _in float blue )
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector*) pObjectXXXX;
					ptrNativeObject->setBlueAdjust(blue);
				}
				extern "C" EV_DLL_EXPORT  float  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector_getBlueAdjust_float(void *pObjectXXXX )
				{
					const EarthView::World::Plugin::ParticleFX::CColourFaderAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector*) pObjectXXXX;
					float objXXXX = ptrNativeObject->getBlueAdjust();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector_setAlphaAdjust_void_float(void *pObjectXXXX, _in float alpha )
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector*) pObjectXXXX;
					ptrNativeObject->setAlphaAdjust(alpha);
				}
				extern "C" EV_DLL_EXPORT  float  _stdcall EarthView_World_Plugin_ParticleFX_CColourFaderAffector_getAlphaAdjust_float(void *pObjectXXXX )
				{
					const EarthView::World::Plugin::ParticleFX::CColourFaderAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourFaderAffector*) pObjectXXXX;
					float objXXXX = ptrNativeObject->getAlphaAdjust();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_msRedCmd()
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdRedAdjust &objXXXX = EarthView::World::Plugin::ParticleFX::CColourFaderAffector::msRedCmd;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdRedAdjust *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_msRedCmd( void*  value )
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector::msRedCmd = *(EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdRedAdjust*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_msGreenCmd()
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdGreenAdjust &objXXXX = EarthView::World::Plugin::ParticleFX::CColourFaderAffector::msGreenCmd;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdGreenAdjust *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_msGreenCmd( void*  value )
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector::msGreenCmd = *(EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdGreenAdjust*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_msBlueCmd()
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdBlueAdjust &objXXXX = EarthView::World::Plugin::ParticleFX::CColourFaderAffector::msBlueCmd;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdBlueAdjust *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_msBlueCmd( void*  value )
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector::msBlueCmd = *(EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdBlueAdjust*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_msAlphaCmd()
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdAlphaAdjust &objXXXX = EarthView::World::Plugin::ParticleFX::CColourFaderAffector::msAlphaCmd;
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdAlphaAdjust *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_msAlphaCmd( void*  value )
				{
					EarthView::World::Plugin::ParticleFX::CColourFaderAffector::msAlphaCmd = *(EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdAlphaAdjust*)value;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector__initParticle_void_CParticle( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector__initParticle_void_CParticle_Callback* pCallback )
				{
					CColourFaderAffectorProxy* ptr = dynamic_cast<CColourFaderAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector__initParticle_void_CParticle(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_setParameter_ev_bool_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector_setParameter_ev_bool_EVString_EVString_Callback* pCallback )
				{
					CColourFaderAffectorProxy* ptr = dynamic_cast<CColourFaderAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_setParameter_ev_bool_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback )
				{
					CColourFaderAffectorProxy* ptr = dynamic_cast<CColourFaderAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_setParameterList_void_CommonStringPairList( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector_setParameterList_void_CommonStringPairList_Callback* pCallback )
				{
					CColourFaderAffectorProxy* ptr = dynamic_cast<CColourFaderAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_setParameterList_void_CommonStringPairList(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_getParameter_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector_getParameter_EVString_EVString_Callback* pCallback )
				{
					CColourFaderAffectorProxy* ptr = dynamic_cast<CColourFaderAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_getParameter_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_copyParametersTo_void_CStringInterface( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourFaderAffector_copyParametersTo_void_CStringInterface_Callback* pCallback )
				{
					CColourFaderAffectorProxy* ptr = dynamic_cast<CColourFaderAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CColourFaderAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourFaderAffector_copyParametersTo_void_CStringInterface(pCallback);
					}
				}
			}
		}
	}
}
