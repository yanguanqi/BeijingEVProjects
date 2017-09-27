/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "plugin_particlefx/colourimageaffector.h"
namespace EarthView
{
	namespace World
	{
		namespace Plugin
		{
			namespace ParticleFX
			{
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourImageAffector__initParticle_void_CParticle_Callback)(_in EarthView::World::Graphic::CParticle* pParticle);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourImageAffector__affectParticles_void_CParticleSystem_Real_Callback)(_in EarthView::World::Graphic::CParticleSystem* pSystem, _in Real timeElapsed);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourImageAffector_setParameter_ev_bool_EVString_EVString_Callback)(_in char*& name, _in char*& value);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourImageAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback)(_in char*& name, _in ev_bool readOnly, _in ev_bool enable);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourImageAffector_setParameterList_void_CommonStringPairList_Callback)(_in const void* paramList);
				typedef char*  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourImageAffector_getParameter_EVString_EVString_Callback)(_in char*& name);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourImageAffector_copyParametersTo_void_CStringInterface_Callback)(_in EarthView::World::Core::CStringInterface* dest);
				class CColourImageAffectorProxy : public EarthView::World::Plugin::ParticleFX::CColourImageAffector
				{
				private:
					EarthView_World_Plugin_ParticleFX_CColourImageAffector__initParticle_void_CParticle_Callback* m_EarthView_World_Plugin_ParticleFX_CColourImageAffector__initParticle_void_CParticle_Callback;
					EarthView_World_Plugin_ParticleFX_CColourImageAffector__affectParticles_void_CParticleSystem_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CColourImageAffector__affectParticles_void_CParticleSystem_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CColourImageAffector_setParameter_ev_bool_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CColourImageAffector_setParameter_ev_bool_EVString_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CColourImageAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* m_EarthView_World_Plugin_ParticleFX_CColourImageAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback;
					EarthView_World_Plugin_ParticleFX_CColourImageAffector_setParameterList_void_CommonStringPairList_Callback* m_EarthView_World_Plugin_ParticleFX_CColourImageAffector_setParameterList_void_CommonStringPairList_Callback;
					EarthView_World_Plugin_ParticleFX_CColourImageAffector_getParameter_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CColourImageAffector_getParameter_EVString_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CColourImageAffector_copyParametersTo_void_CStringInterface_Callback* m_EarthView_World_Plugin_ParticleFX_CColourImageAffector_copyParametersTo_void_CStringInterface_Callback;
				public:
					CColourImageAffectorProxy(EarthView::World::Core::CNameValuePairList *pList) : CColourImageAffector(pList)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourImageAffector__initParticle_void_CParticle_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourImageAffector__affectParticles_void_CParticleSystem_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourImageAffector_setParameter_ev_bool_EVString_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourImageAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourImageAffector_setParameterList_void_CommonStringPairList_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourImageAffector_getParameter_EVString_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourImageAffector_copyParametersTo_void_CStringInterface_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourImageAffector__initParticle_void_CParticle(EarthView_World_Plugin_ParticleFX_CColourImageAffector__initParticle_void_CParticle_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourImageAffector__initParticle_void_CParticle_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourImageAffector__affectParticles_void_CParticleSystem_Real(EarthView_World_Plugin_ParticleFX_CColourImageAffector__affectParticles_void_CParticleSystem_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourImageAffector__affectParticles_void_CParticleSystem_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourImageAffector_setParameter_ev_bool_EVString_EVString(EarthView_World_Plugin_ParticleFX_CColourImageAffector_setParameter_ev_bool_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourImageAffector_setParameter_ev_bool_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourImageAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool(EarthView_World_Plugin_ParticleFX_CColourImageAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourImageAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourImageAffector_setParameterList_void_CommonStringPairList(EarthView_World_Plugin_ParticleFX_CColourImageAffector_setParameterList_void_CommonStringPairList_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourImageAffector_setParameterList_void_CommonStringPairList_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourImageAffector_getParameter_EVString_EVString(EarthView_World_Plugin_ParticleFX_CColourImageAffector_getParameter_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourImageAffector_getParameter_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourImageAffector_copyParametersTo_void_CStringInterface(EarthView_World_Plugin_ParticleFX_CColourImageAffector_copyParametersTo_void_CStringInterface_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourImageAffector_copyParametersTo_void_CStringInterface_Callback = pCallback;
					}
					virtual void _initParticle(_in EarthView::World::Graphic::CParticle* pParticle)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourImageAffector__initParticle_void_CParticle_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CColourImageAffector__initParticle_void_CParticle_Callback(pParticle);
						}
						else
							return this->CColourImageAffector::_initParticle(pParticle);
					}
					virtual void _affectParticles(_in EarthView::World::Graphic::CParticleSystem* pSystem, _in Real timeElapsed)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourImageAffector__affectParticles_void_CParticleSystem_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CColourImageAffector__affectParticles_void_CParticleSystem_Real_Callback(pSystem, timeElapsed);
						}
						else
							return this->CColourImageAffector::_affectParticles(pSystem, timeElapsed);
					}
					virtual ev_bool setParameter(_in const EVString& name, _in const EVString& value)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourImageAffector_setParameter_ev_bool_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							char* value_Char = value.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CColourImageAffector_setParameter_ev_bool_EVString_EVString_Callback(name_Char, value_Char);
							return returnValue;
						}
						else
							return this->CColourImageAffector::setParameter(name, value);
					}
					virtual ev_bool setParameter(_in const EVString& name, _in ev_bool readOnly, _in ev_bool enable)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourImageAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CColourImageAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback(name_Char, readOnly, enable);
							return returnValue;
						}
						else
							return this->CColourImageAffector::setParameter(name, readOnly, enable);
					}
					virtual void setParameterList(_in const EarthView::World::Core::CommonStringPairList& paramList)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourImageAffector_setParameterList_void_CommonStringPairList_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CColourImageAffector_setParameterList_void_CommonStringPairList_Callback(&paramList);
						}
						else
							return this->CColourImageAffector::setParameterList(paramList);
					}
					virtual EVString getParameter(_in const EVString& name) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourImageAffector_getParameter_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EVString returnValue = m_EarthView_World_Plugin_ParticleFX_CColourImageAffector_getParameter_EVString_EVString_Callback(name_Char);
							return returnValue;
						}
						else
							return this->CColourImageAffector::getParameter(name);
					}
					virtual void copyParametersTo(_in EarthView::World::Core::CStringInterface* dest) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourImageAffector_copyParametersTo_void_CStringInterface_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CColourImageAffector_copyParametersTo_void_CStringInterface_Callback(dest);
						}
						else
							return this->CColourImageAffector::copyParametersTo(dest);
					}
				};
				REGISTER_FACTORY_CLASS(CColourImageAffectorProxy);
				typedef char*  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourImageAffector_CCmdImageAdjust_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourImageAffector_CCmdImageAdjust_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourImageAffector_CCmdImageAdjust_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdImageAdjustProxy : public EarthView::World::Plugin::ParticleFX::CColourImageAffector::CCmdImageAdjust
				{
				private:
					EarthView_World_Plugin_ParticleFX_CColourImageAffector_CCmdImageAdjust_doGet_EVString_void_Callback* m_EarthView_World_Plugin_ParticleFX_CColourImageAffector_CCmdImageAdjust_doGet_EVString_void_Callback;
					EarthView_World_Plugin_ParticleFX_CColourImageAffector_CCmdImageAdjust_doSet_void_void_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CColourImageAffector_CCmdImageAdjust_doSet_void_void_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CColourImageAffector_CCmdImageAdjust_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CColourImageAffector_CCmdImageAdjust_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdImageAdjustProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdImageAdjust(pList)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourImageAffector_CCmdImageAdjust_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourImageAffector_CCmdImageAdjust_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourImageAffector_CCmdImageAdjust_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourImageAffector_CCmdImageAdjust_doGet_EVString_void(EarthView_World_Plugin_ParticleFX_CColourImageAffector_CCmdImageAdjust_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourImageAffector_CCmdImageAdjust_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourImageAffector_CCmdImageAdjust_doSet_void_void_EVString(EarthView_World_Plugin_ParticleFX_CColourImageAffector_CCmdImageAdjust_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourImageAffector_CCmdImageAdjust_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourImageAffector_CCmdImageAdjust_trySet_ev_bool_void_EVString_EVString(EarthView_World_Plugin_ParticleFX_CColourImageAffector_CCmdImageAdjust_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourImageAffector_CCmdImageAdjust_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourImageAffector_CCmdImageAdjust_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Plugin_ParticleFX_CColourImageAffector_CCmdImageAdjust_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdImageAdjust::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourImageAffector_CCmdImageAdjust_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Plugin_ParticleFX_CColourImageAffector_CCmdImageAdjust_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdImageAdjust::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourImageAffector_CCmdImageAdjust_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CColourImageAffector_CCmdImageAdjust_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdImageAdjust::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdImageAdjustProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CColourImageAffector_CCmdImageAdjust_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CColourImageAffector::CCmdImageAdjust* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourImageAffector::CCmdImageAdjust*) pObjectXXXX;
					if (dynamic_cast<CCmdImageAdjustProxy*>((EarthView::World::Plugin::ParticleFX::CColourImageAffector::CCmdImageAdjust*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourImageAffector::CCmdImageAdjust::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourImageAffector_CCmdImageAdjust_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourImageAffector_CCmdImageAdjust_doGet_EVString_void_Callback* pCallback )
				{
					CCmdImageAdjustProxy* ptr = dynamic_cast<CCmdImageAdjustProxy*>((EarthView::World::Plugin::ParticleFX::CColourImageAffector::CCmdImageAdjust*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourImageAffector_CCmdImageAdjust_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CColourImageAffector_CCmdImageAdjust_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CColourImageAffector::CCmdImageAdjust* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourImageAffector::CCmdImageAdjust*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourImageAffector::CCmdImageAdjust::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourImageAffector_CCmdImageAdjust_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CColourImageAffector::CCmdImageAdjust* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourImageAffector::CCmdImageAdjust*) pObjectXXXX;
					if (dynamic_cast<CCmdImageAdjustProxy*>((EarthView::World::Plugin::ParticleFX::CColourImageAffector::CCmdImageAdjust*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourImageAffector::CCmdImageAdjust::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourImageAffector_CCmdImageAdjust_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourImageAffector_CCmdImageAdjust_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdImageAdjustProxy* ptr = dynamic_cast<CCmdImageAdjustProxy*>((EarthView::World::Plugin::ParticleFX::CColourImageAffector::CCmdImageAdjust*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourImageAffector_CCmdImageAdjust_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourImageAffector_CCmdImageAdjust_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CColourImageAffector::CCmdImageAdjust* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourImageAffector::CCmdImageAdjust*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourImageAffector::CCmdImageAdjust::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourImageAffector_CCmdImageAdjust_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourImageAffector_CCmdImageAdjust_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdImageAdjustProxy* ptr = dynamic_cast<CCmdImageAdjustProxy*>((EarthView::World::Plugin::ParticleFX::CColourImageAffector::CCmdImageAdjust*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourImageAffector_CCmdImageAdjust_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourImageAffector__initParticle_void_CParticle(void *pObjectXXXX, _in EarthView::World::Graphic::CParticle* pParticle )
				{
					EarthView::World::Plugin::ParticleFX::CColourImageAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourImageAffector*) pObjectXXXX;
					if (dynamic_cast<CColourImageAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CColourImageAffector*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourImageAffector::_initParticle(pParticle);
					else
						ptrNativeObject->_initParticle(pParticle);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourImageAffector__initParticle_void_CParticle( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourImageAffector__initParticle_void_CParticle_Callback* pCallback )
				{
					CColourImageAffectorProxy* ptr = dynamic_cast<CColourImageAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CColourImageAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourImageAffector__initParticle_void_CParticle(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourImageAffector__initParticle_void_CParticle_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CParticle* pParticle )
				{
					EarthView::World::Plugin::ParticleFX::CColourImageAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourImageAffector*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourImageAffector::_initParticle(pParticle);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourImageAffector__affectParticles_void_CParticleSystem_Real(void *pObjectXXXX, _in EarthView::World::Graphic::CParticleSystem* pSystem, _in Real timeElapsed )
				{
					EarthView::World::Plugin::ParticleFX::CColourImageAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourImageAffector*) pObjectXXXX;
					if (dynamic_cast<CColourImageAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CColourImageAffector*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourImageAffector::_affectParticles(pSystem, timeElapsed);
					else
						ptrNativeObject->_affectParticles(pSystem, timeElapsed);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourImageAffector__affectParticles_void_CParticleSystem_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourImageAffector__affectParticles_void_CParticleSystem_Real_Callback* pCallback )
				{
					CColourImageAffectorProxy* ptr = dynamic_cast<CColourImageAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CColourImageAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourImageAffector__affectParticles_void_CParticleSystem_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourImageAffector__affectParticles_void_CParticleSystem_Real_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CParticleSystem* pSystem, _in Real timeElapsed )
				{
					EarthView::World::Plugin::ParticleFX::CColourImageAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourImageAffector*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourImageAffector::_affectParticles(pSystem, timeElapsed);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourImageAffector_setImageAdjust_void_EVString(void *pObjectXXXX, _in char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Plugin::ParticleFX::CColourImageAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourImageAffector*) pObjectXXXX;
					ptrNativeObject->setImageAdjust(name1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CColourImageAffector_getImageAdjust_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Plugin::ParticleFX::CColourImageAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourImageAffector*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getImageAdjust();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourImageAffector__loadImage_void_EVString_CImage(void *pObjectXXXX, _in char* imgName, _inout void* img )
				{
					EarthView::World::Core::ev_string imgName1 = imgName;
					EarthView::World::Plugin::ParticleFX::CColourImageAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourImageAffector*) pObjectXXXX;
					ptrNativeObject->_loadImage(imgName1, *(EarthView::World::Graphic::CImage*)img);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Plugin_ParticleFX_CColourImageAffector_msImageCmd()
				{
					EarthView::World::Plugin::ParticleFX::CColourImageAffector::CCmdImageAdjust &objXXXX = EarthView::World::Plugin::ParticleFX::CColourImageAffector::msImageCmd;
					EarthView::World::Plugin::ParticleFX::CColourImageAffector::CCmdImageAdjust *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Plugin_ParticleFX_CColourImageAffector_msImageCmd( void*  value )
				{
					EarthView::World::Plugin::ParticleFX::CColourImageAffector::msImageCmd = *(EarthView::World::Plugin::ParticleFX::CColourImageAffector::CCmdImageAdjust*)value;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourImageAffector_setParameter_ev_bool_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourImageAffector_setParameter_ev_bool_EVString_EVString_Callback* pCallback )
				{
					CColourImageAffectorProxy* ptr = dynamic_cast<CColourImageAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CColourImageAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourImageAffector_setParameter_ev_bool_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourImageAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourImageAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback )
				{
					CColourImageAffectorProxy* ptr = dynamic_cast<CColourImageAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CColourImageAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourImageAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourImageAffector_setParameterList_void_CommonStringPairList( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourImageAffector_setParameterList_void_CommonStringPairList_Callback* pCallback )
				{
					CColourImageAffectorProxy* ptr = dynamic_cast<CColourImageAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CColourImageAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourImageAffector_setParameterList_void_CommonStringPairList(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourImageAffector_getParameter_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourImageAffector_getParameter_EVString_EVString_Callback* pCallback )
				{
					CColourImageAffectorProxy* ptr = dynamic_cast<CColourImageAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CColourImageAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourImageAffector_getParameter_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourImageAffector_copyParametersTo_void_CStringInterface( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourImageAffector_copyParametersTo_void_CStringInterface_Callback* pCallback )
				{
					CColourImageAffectorProxy* ptr = dynamic_cast<CColourImageAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CColourImageAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourImageAffector_copyParametersTo_void_CStringInterface(pCallback);
					}
				}
			}
		}
	}
}
