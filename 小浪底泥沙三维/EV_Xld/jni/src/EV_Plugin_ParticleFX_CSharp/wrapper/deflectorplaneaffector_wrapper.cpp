/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "plugin_particlefx/deflectorplaneaffector.h"
namespace EarthView
{
	namespace World
	{
		namespace Plugin
		{
			namespace ParticleFX
			{
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector__initParticle_void_CParticle_Callback)(_in EarthView::World::Graphic::CParticle* pParticle);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector__affectParticles_void_CParticleSystem_Real_Callback)(_in EarthView::World::Graphic::CParticleSystem* pSystem, _in Real timeElapsed);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_setParameter_ev_bool_EVString_EVString_Callback)(_in char*& name, _in char*& value);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback)(_in char*& name, _in ev_bool readOnly, _in ev_bool enable);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_setParameterList_void_CommonStringPairList_Callback)(_in const void* paramList);
				typedef char*  ( _stdcall EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_getParameter_EVString_EVString_Callback)(_in char*& name);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_copyParametersTo_void_CStringInterface_Callback)(_in EarthView::World::Core::CStringInterface* dest);
				class CDeflectorPlaneAffectorProxy : public EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector
				{
				private:
					EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector__initParticle_void_CParticle_Callback* m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector__initParticle_void_CParticle_Callback;
					EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector__affectParticles_void_CParticleSystem_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector__affectParticles_void_CParticleSystem_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_setParameter_ev_bool_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_setParameter_ev_bool_EVString_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback;
					EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_setParameterList_void_CommonStringPairList_Callback* m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_setParameterList_void_CommonStringPairList_Callback;
					EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_getParameter_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_getParameter_EVString_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_copyParametersTo_void_CStringInterface_Callback* m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_copyParametersTo_void_CStringInterface_Callback;
				public:
					CDeflectorPlaneAffectorProxy(EarthView::World::Core::CNameValuePairList *pList) : CDeflectorPlaneAffector(pList)
					{
						m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector__initParticle_void_CParticle_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector__affectParticles_void_CParticleSystem_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_setParameter_ev_bool_EVString_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_setParameterList_void_CommonStringPairList_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_getParameter_EVString_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_copyParametersTo_void_CStringInterface_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector__initParticle_void_CParticle(EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector__initParticle_void_CParticle_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector__initParticle_void_CParticle_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector__affectParticles_void_CParticleSystem_Real(EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector__affectParticles_void_CParticleSystem_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector__affectParticles_void_CParticleSystem_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_setParameter_ev_bool_EVString_EVString(EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_setParameter_ev_bool_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_setParameter_ev_bool_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool(EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_setParameterList_void_CommonStringPairList(EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_setParameterList_void_CommonStringPairList_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_setParameterList_void_CommonStringPairList_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_getParameter_EVString_EVString(EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_getParameter_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_getParameter_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_copyParametersTo_void_CStringInterface(EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_copyParametersTo_void_CStringInterface_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_copyParametersTo_void_CStringInterface_Callback = pCallback;
					}
					virtual void _affectParticles(_in EarthView::World::Graphic::CParticleSystem* pSystem, _in Real timeElapsed)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector__affectParticles_void_CParticleSystem_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector__affectParticles_void_CParticleSystem_Real_Callback(pSystem, timeElapsed);
						}
						else
							return this->CDeflectorPlaneAffector::_affectParticles(pSystem, timeElapsed);
					}
					virtual void _initParticle(_in EarthView::World::Graphic::CParticle* pParticle)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector__initParticle_void_CParticle_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector__initParticle_void_CParticle_Callback(pParticle);
						}
						else
							return this->CDeflectorPlaneAffector::_initParticle(pParticle);
					}
					virtual ev_bool setParameter(_in const EVString& name, _in const EVString& value)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_setParameter_ev_bool_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							char* value_Char = value.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_setParameter_ev_bool_EVString_EVString_Callback(name_Char, value_Char);
							return returnValue;
						}
						else
							return this->CDeflectorPlaneAffector::setParameter(name, value);
					}
					virtual ev_bool setParameter(_in const EVString& name, _in ev_bool readOnly, _in ev_bool enable)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback(name_Char, readOnly, enable);
							return returnValue;
						}
						else
							return this->CDeflectorPlaneAffector::setParameter(name, readOnly, enable);
					}
					virtual void setParameterList(_in const EarthView::World::Core::CommonStringPairList& paramList)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_setParameterList_void_CommonStringPairList_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_setParameterList_void_CommonStringPairList_Callback(&paramList);
						}
						else
							return this->CDeflectorPlaneAffector::setParameterList(paramList);
					}
					virtual EVString getParameter(_in const EVString& name) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_getParameter_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EVString returnValue = m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_getParameter_EVString_EVString_Callback(name_Char);
							return returnValue;
						}
						else
							return this->CDeflectorPlaneAffector::getParameter(name);
					}
					virtual void copyParametersTo(_in EarthView::World::Core::CStringInterface* dest) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_copyParametersTo_void_CStringInterface_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_copyParametersTo_void_CStringInterface_Callback(dest);
						}
						else
							return this->CDeflectorPlaneAffector::copyParametersTo(dest);
					}
				};
				REGISTER_FACTORY_CLASS(CDeflectorPlaneAffectorProxy);
				typedef char*  ( _stdcall EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlanePoint_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlanePoint_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlanePoint_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdPlanePointProxy : public EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlanePoint
				{
				private:
					EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlanePoint_doGet_EVString_void_Callback* m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlanePoint_doGet_EVString_void_Callback;
					EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlanePoint_doSet_void_void_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlanePoint_doSet_void_void_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlanePoint_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlanePoint_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdPlanePointProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdPlanePoint(pList)
					{
						m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlanePoint_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlanePoint_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlanePoint_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlanePoint_doGet_EVString_void(EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlanePoint_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlanePoint_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlanePoint_doSet_void_void_EVString(EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlanePoint_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlanePoint_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlanePoint_trySet_ev_bool_void_EVString_EVString(EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlanePoint_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlanePoint_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlanePoint_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlanePoint_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdPlanePoint::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlanePoint_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlanePoint_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdPlanePoint::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlanePoint_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlanePoint_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdPlanePoint::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdPlanePointProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlanePoint_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlanePoint* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlanePoint*) pObjectXXXX;
					if (dynamic_cast<CCmdPlanePointProxy*>((EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlanePoint*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlanePoint::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlanePoint_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlanePoint_doGet_EVString_void_Callback* pCallback )
				{
					CCmdPlanePointProxy* ptr = dynamic_cast<CCmdPlanePointProxy*>((EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlanePoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlanePoint_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlanePoint_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlanePoint* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlanePoint*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlanePoint::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlanePoint_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlanePoint* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlanePoint*) pObjectXXXX;
					if (dynamic_cast<CCmdPlanePointProxy*>((EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlanePoint*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlanePoint::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlanePoint_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlanePoint_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdPlanePointProxy* ptr = dynamic_cast<CCmdPlanePointProxy*>((EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlanePoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlanePoint_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlanePoint_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlanePoint* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlanePoint*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlanePoint::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlanePoint_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlanePoint_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdPlanePointProxy* ptr = dynamic_cast<CCmdPlanePointProxy*>((EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlanePoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlanePoint_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlaneNormal_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlaneNormal_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlaneNormal_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdPlaneNormalProxy : public EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlaneNormal
				{
				private:
					EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlaneNormal_doGet_EVString_void_Callback* m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlaneNormal_doGet_EVString_void_Callback;
					EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlaneNormal_doSet_void_void_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlaneNormal_doSet_void_void_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlaneNormal_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlaneNormal_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdPlaneNormalProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdPlaneNormal(pList)
					{
						m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlaneNormal_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlaneNormal_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlaneNormal_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlaneNormal_doGet_EVString_void(EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlaneNormal_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlaneNormal_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlaneNormal_doSet_void_void_EVString(EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlaneNormal_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlaneNormal_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlaneNormal_trySet_ev_bool_void_EVString_EVString(EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlaneNormal_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlaneNormal_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlaneNormal_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlaneNormal_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdPlaneNormal::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlaneNormal_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlaneNormal_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdPlaneNormal::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlaneNormal_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlaneNormal_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdPlaneNormal::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdPlaneNormalProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlaneNormal_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlaneNormal* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlaneNormal*) pObjectXXXX;
					if (dynamic_cast<CCmdPlaneNormalProxy*>((EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlaneNormal*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlaneNormal::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlaneNormal_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlaneNormal_doGet_EVString_void_Callback* pCallback )
				{
					CCmdPlaneNormalProxy* ptr = dynamic_cast<CCmdPlaneNormalProxy*>((EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlaneNormal*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlaneNormal_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlaneNormal_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlaneNormal* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlaneNormal*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlaneNormal::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlaneNormal_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlaneNormal* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlaneNormal*) pObjectXXXX;
					if (dynamic_cast<CCmdPlaneNormalProxy*>((EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlaneNormal*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlaneNormal::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlaneNormal_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlaneNormal_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdPlaneNormalProxy* ptr = dynamic_cast<CCmdPlaneNormalProxy*>((EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlaneNormal*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlaneNormal_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlaneNormal_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlaneNormal* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlaneNormal*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlaneNormal::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlaneNormal_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlaneNormal_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdPlaneNormalProxy* ptr = dynamic_cast<CCmdPlaneNormalProxy*>((EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlaneNormal*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdPlaneNormal_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdBounce_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdBounce_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdBounce_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdBounceProxy : public EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdBounce
				{
				private:
					EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdBounce_doGet_EVString_void_Callback* m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdBounce_doGet_EVString_void_Callback;
					EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdBounce_doSet_void_void_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdBounce_doSet_void_void_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdBounce_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdBounce_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdBounceProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdBounce(pList)
					{
						m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdBounce_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdBounce_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdBounce_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdBounce_doGet_EVString_void(EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdBounce_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdBounce_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdBounce_doSet_void_void_EVString(EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdBounce_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdBounce_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdBounce_trySet_ev_bool_void_EVString_EVString(EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdBounce_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdBounce_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdBounce_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdBounce_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdBounce::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdBounce_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdBounce_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdBounce::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdBounce_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdBounce_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdBounce::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdBounceProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdBounce_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdBounce* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdBounce*) pObjectXXXX;
					if (dynamic_cast<CCmdBounceProxy*>((EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdBounce*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdBounce::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdBounce_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdBounce_doGet_EVString_void_Callback* pCallback )
				{
					CCmdBounceProxy* ptr = dynamic_cast<CCmdBounceProxy*>((EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdBounce*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdBounce_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdBounce_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdBounce* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdBounce*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdBounce::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdBounce_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdBounce* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdBounce*) pObjectXXXX;
					if (dynamic_cast<CCmdBounceProxy*>((EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdBounce*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdBounce::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdBounce_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdBounce_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdBounceProxy* ptr = dynamic_cast<CCmdBounceProxy*>((EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdBounce*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdBounce_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdBounce_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdBounce* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdBounce*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdBounce::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdBounce_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdBounce_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdBounceProxy* ptr = dynamic_cast<CCmdBounceProxy*>((EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdBounce*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_CCmdBounce_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector__affectParticles_void_CParticleSystem_Real(void *pObjectXXXX, _in EarthView::World::Graphic::CParticleSystem* pSystem, _in Real timeElapsed )
				{
					EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector*) pObjectXXXX;
					if (dynamic_cast<CDeflectorPlaneAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::_affectParticles(pSystem, timeElapsed);
					else
						ptrNativeObject->_affectParticles(pSystem, timeElapsed);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector__affectParticles_void_CParticleSystem_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector__affectParticles_void_CParticleSystem_Real_Callback* pCallback )
				{
					CDeflectorPlaneAffectorProxy* ptr = dynamic_cast<CDeflectorPlaneAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector__affectParticles_void_CParticleSystem_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector__affectParticles_void_CParticleSystem_Real_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CParticleSystem* pSystem, _in Real timeElapsed )
				{
					EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::_affectParticles(pSystem, timeElapsed);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_setPlanePoint_void_CVector3(void *pObjectXXXX, _in const void* pos )
				{
					EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector*) pObjectXXXX;
					ptrNativeObject->setPlanePoint(*(EarthView::World::Spatial::Math::CVector3*)pos);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_getPlanePoint_CVector3(void *pObjectXXXX )
				{
					const EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getPlanePoint();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_setPlaneNormal_void_CVector3(void *pObjectXXXX, _in const void* normal )
				{
					EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector*) pObjectXXXX;
					ptrNativeObject->setPlaneNormal(*(EarthView::World::Spatial::Math::CVector3*)normal);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_getPlaneNormal_CVector3(void *pObjectXXXX )
				{
					const EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getPlaneNormal();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_setBounce_void_Real(void *pObjectXXXX, _in Real bounce )
				{
					EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector*) pObjectXXXX;
					ptrNativeObject->setBounce(bounce);
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_getBounce_Real(void *pObjectXXXX )
				{
					const EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->getBounce();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_msPlanePointCmd()
				{
					EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlanePoint &objXXXX = EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::msPlanePointCmd;
					EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlanePoint *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_msPlanePointCmd( void*  value )
				{
					EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::msPlanePointCmd = *(EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlanePoint*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_msPlaneNormalCmd()
				{
					EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlaneNormal &objXXXX = EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::msPlaneNormalCmd;
					EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlaneNormal *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_msPlaneNormalCmd( void*  value )
				{
					EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::msPlaneNormalCmd = *(EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlaneNormal*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_msBounceCmd()
				{
					EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdBounce &objXXXX = EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::msBounceCmd;
					EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdBounce *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_msBounceCmd( void*  value )
				{
					EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::msBounceCmd = *(EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdBounce*)value;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector__initParticle_void_CParticle( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector__initParticle_void_CParticle_Callback* pCallback )
				{
					CDeflectorPlaneAffectorProxy* ptr = dynamic_cast<CDeflectorPlaneAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector__initParticle_void_CParticle(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_setParameter_ev_bool_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_setParameter_ev_bool_EVString_EVString_Callback* pCallback )
				{
					CDeflectorPlaneAffectorProxy* ptr = dynamic_cast<CDeflectorPlaneAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_setParameter_ev_bool_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback )
				{
					CDeflectorPlaneAffectorProxy* ptr = dynamic_cast<CDeflectorPlaneAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_setParameterList_void_CommonStringPairList( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_setParameterList_void_CommonStringPairList_Callback* pCallback )
				{
					CDeflectorPlaneAffectorProxy* ptr = dynamic_cast<CDeflectorPlaneAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_setParameterList_void_CommonStringPairList(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_getParameter_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_getParameter_EVString_EVString_Callback* pCallback )
				{
					CDeflectorPlaneAffectorProxy* ptr = dynamic_cast<CDeflectorPlaneAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_getParameter_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_copyParametersTo_void_CStringInterface( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_copyParametersTo_void_CStringInterface_Callback* pCallback )
				{
					CDeflectorPlaneAffectorProxy* ptr = dynamic_cast<CDeflectorPlaneAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CDeflectorPlaneAffector_copyParametersTo_void_CStringInterface(pCallback);
					}
				}
			}
		}
	}
}
