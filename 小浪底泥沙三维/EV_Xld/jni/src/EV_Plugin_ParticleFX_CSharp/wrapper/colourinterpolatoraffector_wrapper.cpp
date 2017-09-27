/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "plugin_particlefx/colourinterpolatoraffector.h"
namespace EarthView
{
	namespace World
	{
		namespace Plugin
		{
			namespace ParticleFX
			{
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector__initParticle_void_CParticle_Callback)(_in EarthView::World::Graphic::CParticle* pParticle);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector__affectParticles_void_CParticleSystem_Real_Callback)(_in EarthView::World::Graphic::CParticleSystem* pSystem, _in Real timeElapsed);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_setParameter_ev_bool_EVString_EVString_Callback)(_in char*& name, _in char*& value);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback)(_in char*& name, _in ev_bool readOnly, _in ev_bool enable);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_setParameterList_void_CommonStringPairList_Callback)(_in const void* paramList);
				typedef char*  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_getParameter_EVString_EVString_Callback)(_in char*& name);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_copyParametersTo_void_CStringInterface_Callback)(_in EarthView::World::Core::CStringInterface* dest);
				class CColourInterpolatorAffectorProxy : public EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector
				{
				private:
					EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector__initParticle_void_CParticle_Callback* m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector__initParticle_void_CParticle_Callback;
					EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector__affectParticles_void_CParticleSystem_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector__affectParticles_void_CParticleSystem_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_setParameter_ev_bool_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_setParameter_ev_bool_EVString_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback;
					EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_setParameterList_void_CommonStringPairList_Callback* m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_setParameterList_void_CommonStringPairList_Callback;
					EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_getParameter_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_getParameter_EVString_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_copyParametersTo_void_CStringInterface_Callback* m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_copyParametersTo_void_CStringInterface_Callback;
				public:
					CColourInterpolatorAffectorProxy(EarthView::World::Core::CNameValuePairList *pList) : CColourInterpolatorAffector(pList)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector__initParticle_void_CParticle_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector__affectParticles_void_CParticleSystem_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_setParameter_ev_bool_EVString_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_setParameterList_void_CommonStringPairList_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_getParameter_EVString_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_copyParametersTo_void_CStringInterface_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector__initParticle_void_CParticle(EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector__initParticle_void_CParticle_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector__initParticle_void_CParticle_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector__affectParticles_void_CParticleSystem_Real(EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector__affectParticles_void_CParticleSystem_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector__affectParticles_void_CParticleSystem_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_setParameter_ev_bool_EVString_EVString(EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_setParameter_ev_bool_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_setParameter_ev_bool_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool(EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_setParameterList_void_CommonStringPairList(EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_setParameterList_void_CommonStringPairList_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_setParameterList_void_CommonStringPairList_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_getParameter_EVString_EVString(EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_getParameter_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_getParameter_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_copyParametersTo_void_CStringInterface(EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_copyParametersTo_void_CStringInterface_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_copyParametersTo_void_CStringInterface_Callback = pCallback;
					}
					virtual void _affectParticles(_in EarthView::World::Graphic::CParticleSystem* pSystem, _in Real timeElapsed)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector__affectParticles_void_CParticleSystem_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector__affectParticles_void_CParticleSystem_Real_Callback(pSystem, timeElapsed);
						}
						else
							return this->CColourInterpolatorAffector::_affectParticles(pSystem, timeElapsed);
					}
					virtual void _initParticle(_in EarthView::World::Graphic::CParticle* pParticle)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector__initParticle_void_CParticle_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector__initParticle_void_CParticle_Callback(pParticle);
						}
						else
							return this->CColourInterpolatorAffector::_initParticle(pParticle);
					}
					virtual ev_bool setParameter(_in const EVString& name, _in const EVString& value)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_setParameter_ev_bool_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							char* value_Char = value.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_setParameter_ev_bool_EVString_EVString_Callback(name_Char, value_Char);
							return returnValue;
						}
						else
							return this->CColourInterpolatorAffector::setParameter(name, value);
					}
					virtual ev_bool setParameter(_in const EVString& name, _in ev_bool readOnly, _in ev_bool enable)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback(name_Char, readOnly, enable);
							return returnValue;
						}
						else
							return this->CColourInterpolatorAffector::setParameter(name, readOnly, enable);
					}
					virtual void setParameterList(_in const EarthView::World::Core::CommonStringPairList& paramList)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_setParameterList_void_CommonStringPairList_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_setParameterList_void_CommonStringPairList_Callback(&paramList);
						}
						else
							return this->CColourInterpolatorAffector::setParameterList(paramList);
					}
					virtual EVString getParameter(_in const EVString& name) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_getParameter_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EVString returnValue = m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_getParameter_EVString_EVString_Callback(name_Char);
							return returnValue;
						}
						else
							return this->CColourInterpolatorAffector::getParameter(name);
					}
					virtual void copyParametersTo(_in EarthView::World::Core::CStringInterface* dest) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_copyParametersTo_void_CStringInterface_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_copyParametersTo_void_CStringInterface_Callback(dest);
						}
						else
							return this->CColourInterpolatorAffector::copyParametersTo(dest);
					}
				};
				REGISTER_FACTORY_CLASS(CColourInterpolatorAffectorProxy);
				typedef char*  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdColourAdjust_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdColourAdjust_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdColourAdjust_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdColourAdjustProxy : public EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdColourAdjust
				{
				private:
					EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdColourAdjust_doGet_EVString_void_Callback* m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdColourAdjust_doGet_EVString_void_Callback;
					EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdColourAdjust_doSet_void_void_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdColourAdjust_doSet_void_void_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdColourAdjust_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdColourAdjust_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdColourAdjustProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdColourAdjust(pList)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdColourAdjust_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdColourAdjust_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdColourAdjust_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdColourAdjust_doGet_EVString_void(EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdColourAdjust_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdColourAdjust_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdColourAdjust_doSet_void_void_EVString(EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdColourAdjust_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdColourAdjust_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdColourAdjust_trySet_ev_bool_void_EVString_EVString(EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdColourAdjust_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdColourAdjust_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdColourAdjust_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdColourAdjust_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdColourAdjust::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdColourAdjust_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdColourAdjust_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdColourAdjust::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdColourAdjust_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdColourAdjust_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdColourAdjust::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdColourAdjustProxy);
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdColourAdjust_mIndex( void *pObjectXXXX )
				{
					EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdColourAdjust* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdColourAdjust*) pObjectXXXX;
					size_t objXXXX = ptrNativeObject->mIndex;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdColourAdjust_mIndex( void *pObjectXXXX, ev_uint64   value )
				{
					((EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdColourAdjust*)pObjectXXXX)->mIndex = value;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdColourAdjust_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdColourAdjust* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdColourAdjust*) pObjectXXXX;
					if (dynamic_cast<CCmdColourAdjustProxy*>((EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdColourAdjust*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdColourAdjust::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdColourAdjust_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdColourAdjust_doGet_EVString_void_Callback* pCallback )
				{
					CCmdColourAdjustProxy* ptr = dynamic_cast<CCmdColourAdjustProxy*>((EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdColourAdjust*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdColourAdjust_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdColourAdjust_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdColourAdjust* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdColourAdjust*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdColourAdjust::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdColourAdjust_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdColourAdjust* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdColourAdjust*) pObjectXXXX;
					if (dynamic_cast<CCmdColourAdjustProxy*>((EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdColourAdjust*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdColourAdjust::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdColourAdjust_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdColourAdjust_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdColourAdjustProxy* ptr = dynamic_cast<CCmdColourAdjustProxy*>((EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdColourAdjust*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdColourAdjust_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdColourAdjust_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdColourAdjust* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdColourAdjust*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdColourAdjust::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdColourAdjust_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdColourAdjust_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdColourAdjustProxy* ptr = dynamic_cast<CCmdColourAdjustProxy*>((EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdColourAdjust*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdColourAdjust_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdTimeAdjust_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdTimeAdjust_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdTimeAdjust_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdTimeAdjustProxy : public EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdTimeAdjust
				{
				private:
					EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdTimeAdjust_doGet_EVString_void_Callback* m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdTimeAdjust_doGet_EVString_void_Callback;
					EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdTimeAdjust_doSet_void_void_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdTimeAdjust_doSet_void_void_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdTimeAdjust_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdTimeAdjust_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdTimeAdjustProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdTimeAdjust(pList)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdTimeAdjust_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdTimeAdjust_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdTimeAdjust_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdTimeAdjust_doGet_EVString_void(EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdTimeAdjust_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdTimeAdjust_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdTimeAdjust_doSet_void_void_EVString(EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdTimeAdjust_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdTimeAdjust_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdTimeAdjust_trySet_ev_bool_void_EVString_EVString(EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdTimeAdjust_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdTimeAdjust_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdTimeAdjust_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdTimeAdjust_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdTimeAdjust::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdTimeAdjust_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdTimeAdjust_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdTimeAdjust::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdTimeAdjust_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdTimeAdjust_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdTimeAdjust::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdTimeAdjustProxy);
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdTimeAdjust_mIndex( void *pObjectXXXX )
				{
					EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdTimeAdjust* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdTimeAdjust*) pObjectXXXX;
					size_t objXXXX = ptrNativeObject->mIndex;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdTimeAdjust_mIndex( void *pObjectXXXX, ev_uint64   value )
				{
					((EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdTimeAdjust*)pObjectXXXX)->mIndex = value;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdTimeAdjust_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdTimeAdjust* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdTimeAdjust*) pObjectXXXX;
					if (dynamic_cast<CCmdTimeAdjustProxy*>((EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdTimeAdjust*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdTimeAdjust::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdTimeAdjust_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdTimeAdjust_doGet_EVString_void_Callback* pCallback )
				{
					CCmdTimeAdjustProxy* ptr = dynamic_cast<CCmdTimeAdjustProxy*>((EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdTimeAdjust*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdTimeAdjust_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdTimeAdjust_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdTimeAdjust* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdTimeAdjust*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdTimeAdjust::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdTimeAdjust_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdTimeAdjust* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdTimeAdjust*) pObjectXXXX;
					if (dynamic_cast<CCmdTimeAdjustProxy*>((EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdTimeAdjust*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdTimeAdjust::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdTimeAdjust_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdTimeAdjust_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdTimeAdjustProxy* ptr = dynamic_cast<CCmdTimeAdjustProxy*>((EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdTimeAdjust*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdTimeAdjust_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdTimeAdjust_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdTimeAdjust* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdTimeAdjust*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdTimeAdjust::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdTimeAdjust_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdTimeAdjust_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdTimeAdjustProxy* ptr = dynamic_cast<CCmdTimeAdjustProxy*>((EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdTimeAdjust*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_CCmdTimeAdjust_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector__affectParticles_void_CParticleSystem_Real(void *pObjectXXXX, _in EarthView::World::Graphic::CParticleSystem* pSystem, _in Real timeElapsed )
				{
					EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector*) pObjectXXXX;
					if (dynamic_cast<CColourInterpolatorAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::_affectParticles(pSystem, timeElapsed);
					else
						ptrNativeObject->_affectParticles(pSystem, timeElapsed);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector__affectParticles_void_CParticleSystem_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector__affectParticles_void_CParticleSystem_Real_Callback* pCallback )
				{
					CColourInterpolatorAffectorProxy* ptr = dynamic_cast<CColourInterpolatorAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector__affectParticles_void_CParticleSystem_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector__affectParticles_void_CParticleSystem_Real_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CParticleSystem* pSystem, _in Real timeElapsed )
				{
					EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::_affectParticles(pSystem, timeElapsed);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_setColourAdjust_void_size_t_CColourValue(void *pObjectXXXX, _in ev_uint64  index, _in void* colour )
				{
					EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector*) pObjectXXXX;
					ptrNativeObject->setColourAdjust(index, *(EarthView::World::Graphic::CColourValue*)colour);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_getColourAdjust_CColourValue_size_t(void *pObjectXXXX, _in ev_uint64  index )
				{
					const EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector*) pObjectXXXX;
					EarthView::World::Graphic::CColourValue objXXXX = ptrNativeObject->getColourAdjust(index);
					EarthView::World::Graphic::CColourValue *pXXXX = new EarthView::World::Graphic::CColourValue(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_setTimeAdjust_void_size_t_Real(void *pObjectXXXX, _in ev_uint64  index, _in Real time )
				{
					EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector*) pObjectXXXX;
					ptrNativeObject->setTimeAdjust(index, time);
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_getTimeAdjust_Real_size_t(void *pObjectXXXX, _in ev_uint64  index )
				{
					const EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->getTimeAdjust(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector__initParticle_void_CParticle( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector__initParticle_void_CParticle_Callback* pCallback )
				{
					CColourInterpolatorAffectorProxy* ptr = dynamic_cast<CColourInterpolatorAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector__initParticle_void_CParticle(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_setParameter_ev_bool_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_setParameter_ev_bool_EVString_EVString_Callback* pCallback )
				{
					CColourInterpolatorAffectorProxy* ptr = dynamic_cast<CColourInterpolatorAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_setParameter_ev_bool_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback )
				{
					CColourInterpolatorAffectorProxy* ptr = dynamic_cast<CColourInterpolatorAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_setParameterList_void_CommonStringPairList( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_setParameterList_void_CommonStringPairList_Callback* pCallback )
				{
					CColourInterpolatorAffectorProxy* ptr = dynamic_cast<CColourInterpolatorAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_setParameterList_void_CommonStringPairList(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_getParameter_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_getParameter_EVString_EVString_Callback* pCallback )
				{
					CColourInterpolatorAffectorProxy* ptr = dynamic_cast<CColourInterpolatorAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_getParameter_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_copyParametersTo_void_CStringInterface( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_copyParametersTo_void_CStringInterface_Callback* pCallback )
				{
					CColourInterpolatorAffectorProxy* ptr = dynamic_cast<CColourInterpolatorAffectorProxy*>((EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CColourInterpolatorAffector_copyParametersTo_void_CStringInterface(pCallback);
					}
				}
			}
		}
	}
}
