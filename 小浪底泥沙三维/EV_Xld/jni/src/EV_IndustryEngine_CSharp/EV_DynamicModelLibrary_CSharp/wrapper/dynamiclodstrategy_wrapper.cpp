/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/dynamicmodellibrary/dynamiclodstrategy.h"
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace DynamicModelLibrary
		{
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_isPassed_ev_bool_CDynamicModelObject_EVString_CGlobeCamera_Callback)(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* modelObject, _in char*& lodStrategyItemName, _in EarthView::World::Spatial3D::CGlobeCamera* camera);
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_setMaxVisibleValue_void_EVString_Real_Callback)(_in char*& name, _in const Real& maxVisibleValue);
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_setMinVisibleValue_void_EVString_Real_Callback)(_in char*& name, _in const Real& minVisibleValue);
			typedef Real  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getMaxVisibleValue_Real_EVString_Callback)(_in char*& name);
			typedef Real  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getMinVisibleValue_Real_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_registerLodStrategyItem_void_CDynamicLodStrategyItem_Callback)(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem* ref_lodStrategyItem);
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_unregisterLodStrategyItem_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_addLodStrategyListener_void_CDynamicLodStrategyListener_Callback)(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener* ref_lodStrategyListener);
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_removeLodStrategyListener_void_EVString_Callback)(_in char*& name);
			typedef Real  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getLodValue_Real_CDynamicModelObject_CGlobeCamera_Callback)(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* modelObject, _in EarthView::World::Spatial3D::CGlobeCamera* camera);
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_fireLodStrategyListener_void_CDynamicModelObject_CGlobeCamera_Callback)(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* modelObject, _in EarthView::World::Spatial3D::CGlobeCamera* camera);
			class CDynamicLodStrategyProxy : public EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy
			{
			private:
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_isPassed_ev_bool_CDynamicModelObject_EVString_CGlobeCamera_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_isPassed_ev_bool_CDynamicModelObject_EVString_CGlobeCamera_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_setMaxVisibleValue_void_EVString_Real_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_setMaxVisibleValue_void_EVString_Real_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_setMinVisibleValue_void_EVString_Real_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_setMinVisibleValue_void_EVString_Real_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getMaxVisibleValue_Real_EVString_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getMaxVisibleValue_Real_EVString_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getMinVisibleValue_Real_EVString_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getMinVisibleValue_Real_EVString_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_registerLodStrategyItem_void_CDynamicLodStrategyItem_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_registerLodStrategyItem_void_CDynamicLodStrategyItem_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_unregisterLodStrategyItem_void_EVString_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_unregisterLodStrategyItem_void_EVString_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_addLodStrategyListener_void_CDynamicLodStrategyListener_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_addLodStrategyListener_void_CDynamicLodStrategyListener_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_removeLodStrategyListener_void_EVString_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_removeLodStrategyListener_void_EVString_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getLodValue_Real_CDynamicModelObject_CGlobeCamera_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getLodValue_Real_CDynamicModelObject_CGlobeCamera_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_fireLodStrategyListener_void_CDynamicModelObject_CGlobeCamera_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_fireLodStrategyListener_void_CDynamicModelObject_CGlobeCamera_Callback;
			public:
				CDynamicLodStrategyProxy(EarthView::World::Core::CNameValuePairList *pList) : CDynamicLodStrategy(pList)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_isPassed_ev_bool_CDynamicModelObject_EVString_CGlobeCamera_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_setMaxVisibleValue_void_EVString_Real_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_setMinVisibleValue_void_EVString_Real_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getMaxVisibleValue_Real_EVString_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getMinVisibleValue_Real_EVString_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_registerLodStrategyItem_void_CDynamicLodStrategyItem_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_unregisterLodStrategyItem_void_EVString_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_addLodStrategyListener_void_CDynamicLodStrategyListener_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_removeLodStrategyListener_void_EVString_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getLodValue_Real_CDynamicModelObject_CGlobeCamera_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_fireLodStrategyListener_void_CDynamicModelObject_CGlobeCamera_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_isPassed_ev_bool_CDynamicModelObject_EVString_CGlobeCamera(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_isPassed_ev_bool_CDynamicModelObject_EVString_CGlobeCamera_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_isPassed_ev_bool_CDynamicModelObject_EVString_CGlobeCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_setMaxVisibleValue_void_EVString_Real(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_setMaxVisibleValue_void_EVString_Real_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_setMaxVisibleValue_void_EVString_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_setMinVisibleValue_void_EVString_Real(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_setMinVisibleValue_void_EVString_Real_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_setMinVisibleValue_void_EVString_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getMaxVisibleValue_Real_EVString(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getMaxVisibleValue_Real_EVString_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getMaxVisibleValue_Real_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getMinVisibleValue_Real_EVString(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getMinVisibleValue_Real_EVString_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getMinVisibleValue_Real_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_registerLodStrategyItem_void_CDynamicLodStrategyItem(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_registerLodStrategyItem_void_CDynamicLodStrategyItem_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_registerLodStrategyItem_void_CDynamicLodStrategyItem_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_unregisterLodStrategyItem_void_EVString(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_unregisterLodStrategyItem_void_EVString_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_unregisterLodStrategyItem_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_addLodStrategyListener_void_CDynamicLodStrategyListener(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_addLodStrategyListener_void_CDynamicLodStrategyListener_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_addLodStrategyListener_void_CDynamicLodStrategyListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_removeLodStrategyListener_void_EVString(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_removeLodStrategyListener_void_EVString_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_removeLodStrategyListener_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getLodValue_Real_CDynamicModelObject_CGlobeCamera(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getLodValue_Real_CDynamicModelObject_CGlobeCamera_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getLodValue_Real_CDynamicModelObject_CGlobeCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_fireLodStrategyListener_void_CDynamicModelObject_CGlobeCamera(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_fireLodStrategyListener_void_CDynamicModelObject_CGlobeCamera_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_fireLodStrategyListener_void_CDynamicModelObject_CGlobeCamera_Callback = pCallback;
				}
				virtual ev_bool isPassed(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* modelObject, _in const EVString& lodStrategyItemName, _in EarthView::World::Spatial3D::CGlobeCamera* camera)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_isPassed_ev_bool_CDynamicModelObject_EVString_CGlobeCamera_Callback != NULL && this->isCustomExtend())
					{
						char* lodStrategyItemName_Char = lodStrategyItemName.makeBuffer();
						ev_bool returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_isPassed_ev_bool_CDynamicModelObject_EVString_CGlobeCamera_Callback(modelObject, lodStrategyItemName_Char, camera);
						return returnValue;
					}
					else
						return this->CDynamicLodStrategy::isPassed(modelObject, lodStrategyItemName, camera);
				}
				virtual void setMaxVisibleValue(_in const EVString& name, _in const Real& maxVisibleValue)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_setMaxVisibleValue_void_EVString_Real_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_setMaxVisibleValue_void_EVString_Real_Callback(name_Char, maxVisibleValue);
					}
					else
						return this->CDynamicLodStrategy::setMaxVisibleValue(name, maxVisibleValue);
				}
				virtual void setMinVisibleValue(_in const EVString& name, _in const Real& minVisibleValue)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_setMinVisibleValue_void_EVString_Real_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_setMinVisibleValue_void_EVString_Real_Callback(name_Char, minVisibleValue);
					}
					else
						return this->CDynamicLodStrategy::setMinVisibleValue(name, minVisibleValue);
				}
				virtual Real getMaxVisibleValue(_in const EVString& name) const
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getMaxVisibleValue_Real_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						Real returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getMaxVisibleValue_Real_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CDynamicLodStrategy::getMaxVisibleValue(name);
				}
				virtual Real getMinVisibleValue(_in const EVString& name) const
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getMinVisibleValue_Real_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						Real returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getMinVisibleValue_Real_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CDynamicLodStrategy::getMinVisibleValue(name);
				}
				virtual void registerLodStrategyItem(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem* ref_lodStrategyItem)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_registerLodStrategyItem_void_CDynamicLodStrategyItem_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_registerLodStrategyItem_void_CDynamicLodStrategyItem_Callback(ref_lodStrategyItem);
					}
					else
						return this->CDynamicLodStrategy::registerLodStrategyItem(ref_lodStrategyItem);
				}
				virtual void unregisterLodStrategyItem(_in const EVString& name)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_unregisterLodStrategyItem_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_unregisterLodStrategyItem_void_EVString_Callback(name_Char);
					}
					else
						return this->CDynamicLodStrategy::unregisterLodStrategyItem(name);
				}
				virtual void addLodStrategyListener(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener* ref_lodStrategyListener)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_addLodStrategyListener_void_CDynamicLodStrategyListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_addLodStrategyListener_void_CDynamicLodStrategyListener_Callback(ref_lodStrategyListener);
					}
					else
						return this->CDynamicLodStrategy::addLodStrategyListener(ref_lodStrategyListener);
				}
				virtual void removeLodStrategyListener(_in const EVString& name)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_removeLodStrategyListener_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_removeLodStrategyListener_void_EVString_Callback(name_Char);
					}
					else
						return this->CDynamicLodStrategy::removeLodStrategyListener(name);
				}
				virtual Real getLodValue(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* modelObject, _in EarthView::World::Spatial3D::CGlobeCamera* camera)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getLodValue_Real_CDynamicModelObject_CGlobeCamera_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getLodValue_Real_CDynamicModelObject_CGlobeCamera_Callback(modelObject, camera);
						return returnValue;
					}
					else
						return this->CDynamicLodStrategy::getLodValue(modelObject, camera);
				}
				virtual void fireLodStrategyListener(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* modelObject, _in EarthView::World::Spatial3D::CGlobeCamera* camera)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_fireLodStrategyListener_void_CDynamicModelObject_CGlobeCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_fireLodStrategyListener_void_CDynamicModelObject_CGlobeCamera_Callback(modelObject, camera);
					}
					else
						return this->CDynamicLodStrategy::fireLodStrategyListener(modelObject, camera);
				}
			};
			REGISTER_FACTORY_CLASS(CDynamicLodStrategyProxy);
			typedef char*  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_getName_EVString_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_setName_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_beforeUpdateLodState_void_CDynamicLodStrategy_CDynamicModelObject_CGlobeCamera_Callback)(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy* lodStrategy, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* dynamicModelObject, _in EarthView::World::Spatial3D::CGlobeCamera* camera);
			class CDynamicLodStrategyListenerProxy : public EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener
			{
			private:
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_getName_EVString_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_getName_EVString_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_setName_void_EVString_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_setName_void_EVString_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_beforeUpdateLodState_void_CDynamicLodStrategy_CDynamicModelObject_CGlobeCamera_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_beforeUpdateLodState_void_CDynamicLodStrategy_CDynamicModelObject_CGlobeCamera_Callback;
			public:
				CDynamicLodStrategyListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CDynamicLodStrategyListener(pList)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_getName_EVString_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_setName_void_EVString_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_beforeUpdateLodState_void_CDynamicLodStrategy_CDynamicModelObject_CGlobeCamera_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_getName_EVString(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_getName_EVString_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_setName_void_EVString(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_setName_void_EVString_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_setName_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_beforeUpdateLodState_void_CDynamicLodStrategy_CDynamicModelObject_CGlobeCamera(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_beforeUpdateLodState_void_CDynamicLodStrategy_CDynamicModelObject_CGlobeCamera_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_beforeUpdateLodState_void_CDynamicLodStrategy_CDynamicModelObject_CGlobeCamera_Callback = pCallback;
				}
				virtual EVString getName() const
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CDynamicLodStrategyListener::getName();
				}
				virtual void setName(_in const EVString& name)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_setName_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_setName_void_EVString_Callback(name_Char);
					}
					else
						return this->CDynamicLodStrategyListener::setName(name);
				}
				virtual void beforeUpdateLodState(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy* lodStrategy, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* dynamicModelObject, _in EarthView::World::Spatial3D::CGlobeCamera* camera)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_beforeUpdateLodState_void_CDynamicLodStrategy_CDynamicModelObject_CGlobeCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_beforeUpdateLodState_void_CDynamicLodStrategy_CDynamicModelObject_CGlobeCamera_Callback(lodStrategy, dynamicModelObject, camera);
					}
					else
						return this->CDynamicLodStrategyListener::beforeUpdateLodState(lodStrategy, dynamicModelObject, camera);
				}
			};
			REGISTER_FACTORY_CLASS(CDynamicLodStrategyListenerProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener*) pObjectXXXX;
				if (dynamic_cast<CDynamicLodStrategyListenerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener::getName();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_getName_EVString( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_getName_EVString_Callback* pCallback )
			{
				CDynamicLodStrategyListenerProxy* ptr = dynamic_cast<CDynamicLodStrategyListenerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_getName_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener::getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_setName_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener*) pObjectXXXX;
				if (dynamic_cast<CDynamicLodStrategyListenerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener::setName(name1);
				else
					ptrNativeObject->setName(name1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_setName_void_EVString( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_setName_void_EVString_Callback* pCallback )
			{
				CDynamicLodStrategyListenerProxy* ptr = dynamic_cast<CDynamicLodStrategyListenerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_setName_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_setName_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener::setName(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_beforeUpdateLodState_void_CDynamicLodStrategy_CDynamicModelObject_CGlobeCamera(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy* lodStrategy, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* dynamicModelObject, _in EarthView::World::Spatial3D::CGlobeCamera* camera )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener*) pObjectXXXX;
				if (dynamic_cast<CDynamicLodStrategyListenerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener::beforeUpdateLodState(lodStrategy, dynamicModelObject, camera);
				else
					ptrNativeObject->beforeUpdateLodState(lodStrategy, dynamicModelObject, camera);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_beforeUpdateLodState_void_CDynamicLodStrategy_CDynamicModelObject_CGlobeCamera( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_beforeUpdateLodState_void_CDynamicLodStrategy_CDynamicModelObject_CGlobeCamera_Callback* pCallback )
			{
				CDynamicLodStrategyListenerProxy* ptr = dynamic_cast<CDynamicLodStrategyListenerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_beforeUpdateLodState_void_CDynamicLodStrategy_CDynamicModelObject_CGlobeCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_beforeUpdateLodState_void_CDynamicLodStrategy_CDynamicModelObject_CGlobeCamera_NoVirtual(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy* lodStrategy, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* dynamicModelObject, _in EarthView::World::Spatial3D::CGlobeCamera* camera )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener::beforeUpdateLodState(lodStrategy, dynamicModelObject, camera);
			}
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_isPassed_ev_bool_Real_Callback)(_in const Real& lodvalue);
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_setMaxVisibleValue_void_Real_Callback)(_in const Real& maxVisibleValue);
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_setMinVisibleValue_void_Real_Callback)(_in const Real& minVisibleValue);
			typedef Real  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_getMaxVisibleValue_Real_Callback)();
			typedef Real  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_getMinVisibleValue_Real_Callback)();
			class CDynamicLodStrategyItemProxy : public EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem
			{
			private:
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_isPassed_ev_bool_Real_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_isPassed_ev_bool_Real_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_setMaxVisibleValue_void_Real_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_setMaxVisibleValue_void_Real_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_setMinVisibleValue_void_Real_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_setMinVisibleValue_void_Real_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_getMaxVisibleValue_Real_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_getMaxVisibleValue_Real_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_getMinVisibleValue_Real_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_getMinVisibleValue_Real_Callback;
			public:
				CDynamicLodStrategyItemProxy(EarthView::World::Core::CNameValuePairList *pList) : CDynamicLodStrategyItem(pList)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_isPassed_ev_bool_Real_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_setMaxVisibleValue_void_Real_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_setMinVisibleValue_void_Real_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_getMaxVisibleValue_Real_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_getMinVisibleValue_Real_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_isPassed_ev_bool_Real(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_isPassed_ev_bool_Real_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_isPassed_ev_bool_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_setMaxVisibleValue_void_Real(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_setMaxVisibleValue_void_Real_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_setMaxVisibleValue_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_setMinVisibleValue_void_Real(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_setMinVisibleValue_void_Real_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_setMinVisibleValue_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_getMaxVisibleValue_Real(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_getMaxVisibleValue_Real_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_getMaxVisibleValue_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_getMinVisibleValue_Real(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_getMinVisibleValue_Real_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_getMinVisibleValue_Real_Callback = pCallback;
				}
				virtual ev_bool isPassed(_in const Real& lodvalue) const
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_isPassed_ev_bool_Real_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_isPassed_ev_bool_Real_Callback(lodvalue);
						return returnValue;
					}
					else
						return this->CDynamicLodStrategyItem::isPassed(lodvalue);
				}
				virtual void setMaxVisibleValue(_in const Real& maxVisibleValue)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_setMaxVisibleValue_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_setMaxVisibleValue_void_Real_Callback(maxVisibleValue);
					}
					else
						return this->CDynamicLodStrategyItem::setMaxVisibleValue(maxVisibleValue);
				}
				virtual void setMinVisibleValue(_in const Real& minVisibleValue)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_setMinVisibleValue_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_setMinVisibleValue_void_Real_Callback(minVisibleValue);
					}
					else
						return this->CDynamicLodStrategyItem::setMinVisibleValue(minVisibleValue);
				}
				virtual Real getMaxVisibleValue() const
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_getMaxVisibleValue_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_getMaxVisibleValue_Real_Callback();
						return returnValue;
					}
					else
						return this->CDynamicLodStrategyItem::getMaxVisibleValue();
				}
				virtual Real getMinVisibleValue() const
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_getMinVisibleValue_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_getMinVisibleValue_Real_Callback();
						return returnValue;
					}
					else
						return this->CDynamicLodStrategyItem::getMinVisibleValue();
				}
			};
			REGISTER_FACTORY_CLASS(CDynamicLodStrategyItemProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_isPassed_ev_bool_Real(void *pObjectXXXX, _in const Real& lodvalue )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem*) pObjectXXXX;
				if (dynamic_cast<CDynamicLodStrategyItemProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem::isPassed(lodvalue);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isPassed(lodvalue);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_isPassed_ev_bool_Real( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_isPassed_ev_bool_Real_Callback* pCallback )
			{
				CDynamicLodStrategyItemProxy* ptr = dynamic_cast<CDynamicLodStrategyItemProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_isPassed_ev_bool_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_isPassed_ev_bool_Real_NoVirtual(void *pObjectXXXX, _in const Real& lodvalue )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem::isPassed(lodvalue);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_setMaxVisibleValue_void_Real(void *pObjectXXXX, _in const Real& maxVisibleValue )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem*) pObjectXXXX;
				if (dynamic_cast<CDynamicLodStrategyItemProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem::setMaxVisibleValue(maxVisibleValue);
				else
					ptrNativeObject->setMaxVisibleValue(maxVisibleValue);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_setMaxVisibleValue_void_Real( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_setMaxVisibleValue_void_Real_Callback* pCallback )
			{
				CDynamicLodStrategyItemProxy* ptr = dynamic_cast<CDynamicLodStrategyItemProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_setMaxVisibleValue_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_setMaxVisibleValue_void_Real_NoVirtual(void *pObjectXXXX, _in const Real& maxVisibleValue )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem::setMaxVisibleValue(maxVisibleValue);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_setMinVisibleValue_void_Real(void *pObjectXXXX, _in const Real& minVisibleValue )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem*) pObjectXXXX;
				if (dynamic_cast<CDynamicLodStrategyItemProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem::setMinVisibleValue(minVisibleValue);
				else
					ptrNativeObject->setMinVisibleValue(minVisibleValue);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_setMinVisibleValue_void_Real( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_setMinVisibleValue_void_Real_Callback* pCallback )
			{
				CDynamicLodStrategyItemProxy* ptr = dynamic_cast<CDynamicLodStrategyItemProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_setMinVisibleValue_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_setMinVisibleValue_void_Real_NoVirtual(void *pObjectXXXX, _in const Real& minVisibleValue )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem::setMinVisibleValue(minVisibleValue);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_getMaxVisibleValue_Real(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem*) pObjectXXXX;
				if (dynamic_cast<CDynamicLodStrategyItemProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem::getMaxVisibleValue();
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getMaxVisibleValue();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_getMaxVisibleValue_Real( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_getMaxVisibleValue_Real_Callback* pCallback )
			{
				CDynamicLodStrategyItemProxy* ptr = dynamic_cast<CDynamicLodStrategyItemProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_getMaxVisibleValue_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_getMaxVisibleValue_Real_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem::getMaxVisibleValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_getMinVisibleValue_Real(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem*) pObjectXXXX;
				if (dynamic_cast<CDynamicLodStrategyItemProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem::getMinVisibleValue();
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getMinVisibleValue();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_getMinVisibleValue_Real( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_getMinVisibleValue_Real_Callback* pCallback )
			{
				CDynamicLodStrategyItemProxy* ptr = dynamic_cast<CDynamicLodStrategyItemProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_getMinVisibleValue_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_getMinVisibleValue_Real_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem::getMinVisibleValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_setName_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem*) pObjectXXXX;
				ptrNativeObject->setName(name1);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItemMap_push_ev_bool_EVString_CDynamicLodStrategyItem(void *pObjectXXXX, _in const char* key, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem*& ref_val )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItemMap* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItemMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key1, ref_val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItemMap_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItemMap* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItemMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItemMap_OperatorIndex_CDynamicLodStrategyItem_EVString(void *pObjXXXX, _in const char* key )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItemMap& objYYYY = *(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItemMap*) pObjXXXX;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem* objXXXX = objYYYY[key];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItemMap_get_CDynamicLodStrategyItem_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItemMap* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItemMap*) pObjectXXXX;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem* objXXXX = ptrNativeObject->get(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItemMap_erase_void_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItemMap* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItemMap*) pObjectXXXX;
				ptrNativeObject->erase(key1);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItemMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItemMap* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItemMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItemMap_clear_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItemMap* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItemMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItemMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItemMap* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItemMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_isPassed_ev_bool_CDynamicModelObject_EVString_CGlobeCamera(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* modelObject, _in const char* lodStrategyItemName, _in EarthView::World::Spatial3D::CGlobeCamera* camera )
			{
				EarthView::World::Core::ev_string lodStrategyItemName1 = lodStrategyItemName;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjectXXXX;
				if (dynamic_cast<CDynamicLodStrategyProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::isPassed(modelObject, lodStrategyItemName1, camera);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isPassed(modelObject, lodStrategyItemName1, camera);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_isPassed_ev_bool_CDynamicModelObject_EVString_CGlobeCamera( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_isPassed_ev_bool_CDynamicModelObject_EVString_CGlobeCamera_Callback* pCallback )
			{
				CDynamicLodStrategyProxy* ptr = dynamic_cast<CDynamicLodStrategyProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_isPassed_ev_bool_CDynamicModelObject_EVString_CGlobeCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_isPassed_ev_bool_CDynamicModelObject_EVString_CGlobeCamera_NoVirtual(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* modelObject, _in const char* lodStrategyItemName, _in EarthView::World::Spatial3D::CGlobeCamera* camera )
			{
				EarthView::World::Core::ev_string lodStrategyItemName1 = lodStrategyItemName;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::isPassed(modelObject, lodStrategyItemName1, camera);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_setMaxVisibleValue_void_EVString_Real(void *pObjectXXXX, _in const char* name, _in const Real& maxVisibleValue )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjectXXXX;
				if (dynamic_cast<CDynamicLodStrategyProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::setMaxVisibleValue(name1, maxVisibleValue);
				else
					ptrNativeObject->setMaxVisibleValue(name1, maxVisibleValue);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_setMaxVisibleValue_void_EVString_Real( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_setMaxVisibleValue_void_EVString_Real_Callback* pCallback )
			{
				CDynamicLodStrategyProxy* ptr = dynamic_cast<CDynamicLodStrategyProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_setMaxVisibleValue_void_EVString_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_setMaxVisibleValue_void_EVString_Real_NoVirtual(void *pObjectXXXX, _in const char* name, _in const Real& maxVisibleValue )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::setMaxVisibleValue(name1, maxVisibleValue);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_setMinVisibleValue_void_EVString_Real(void *pObjectXXXX, _in const char* name, _in const Real& minVisibleValue )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjectXXXX;
				if (dynamic_cast<CDynamicLodStrategyProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::setMinVisibleValue(name1, minVisibleValue);
				else
					ptrNativeObject->setMinVisibleValue(name1, minVisibleValue);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_setMinVisibleValue_void_EVString_Real( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_setMinVisibleValue_void_EVString_Real_Callback* pCallback )
			{
				CDynamicLodStrategyProxy* ptr = dynamic_cast<CDynamicLodStrategyProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_setMinVisibleValue_void_EVString_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_setMinVisibleValue_void_EVString_Real_NoVirtual(void *pObjectXXXX, _in const char* name, _in const Real& minVisibleValue )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::setMinVisibleValue(name1, minVisibleValue);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getMaxVisibleValue_Real_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjectXXXX;
				if (dynamic_cast<CDynamicLodStrategyProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::getMaxVisibleValue(name1);
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getMaxVisibleValue(name1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getMaxVisibleValue_Real_EVString( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getMaxVisibleValue_Real_EVString_Callback* pCallback )
			{
				CDynamicLodStrategyProxy* ptr = dynamic_cast<CDynamicLodStrategyProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getMaxVisibleValue_Real_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getMaxVisibleValue_Real_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::getMaxVisibleValue(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getMinVisibleValue_Real_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjectXXXX;
				if (dynamic_cast<CDynamicLodStrategyProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::getMinVisibleValue(name1);
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getMinVisibleValue(name1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getMinVisibleValue_Real_EVString( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getMinVisibleValue_Real_EVString_Callback* pCallback )
			{
				CDynamicLodStrategyProxy* ptr = dynamic_cast<CDynamicLodStrategyProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getMinVisibleValue_Real_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getMinVisibleValue_Real_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::getMinVisibleValue(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_registerLodStrategyItem_void_CDynamicLodStrategyItem(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem* ref_lodStrategyItem )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjectXXXX;
				if (dynamic_cast<CDynamicLodStrategyProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::registerLodStrategyItem(ref_lodStrategyItem);
				else
					ptrNativeObject->registerLodStrategyItem(ref_lodStrategyItem);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_registerLodStrategyItem_void_CDynamicLodStrategyItem( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_registerLodStrategyItem_void_CDynamicLodStrategyItem_Callback* pCallback )
			{
				CDynamicLodStrategyProxy* ptr = dynamic_cast<CDynamicLodStrategyProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_registerLodStrategyItem_void_CDynamicLodStrategyItem(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_registerLodStrategyItem_void_CDynamicLodStrategyItem_NoVirtual(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem* ref_lodStrategyItem )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::registerLodStrategyItem(ref_lodStrategyItem);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_unregisterLodStrategyItem_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjectXXXX;
				if (dynamic_cast<CDynamicLodStrategyProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::unregisterLodStrategyItem(name1);
				else
					ptrNativeObject->unregisterLodStrategyItem(name1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_unregisterLodStrategyItem_void_EVString( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_unregisterLodStrategyItem_void_EVString_Callback* pCallback )
			{
				CDynamicLodStrategyProxy* ptr = dynamic_cast<CDynamicLodStrategyProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_unregisterLodStrategyItem_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_unregisterLodStrategyItem_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::unregisterLodStrategyItem(name1);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getLodStrategyItemMap_CDynamicLodStrategyItemMap(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjectXXXX;
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItemMap& objXXXX = ptrNativeObject->getLodStrategyItemMap();
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItemMap *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_addLodStrategyListener_void_CDynamicLodStrategyListener(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener* ref_lodStrategyListener )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjectXXXX;
				if (dynamic_cast<CDynamicLodStrategyProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::addLodStrategyListener(ref_lodStrategyListener);
				else
					ptrNativeObject->addLodStrategyListener(ref_lodStrategyListener);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_addLodStrategyListener_void_CDynamicLodStrategyListener( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_addLodStrategyListener_void_CDynamicLodStrategyListener_Callback* pCallback )
			{
				CDynamicLodStrategyProxy* ptr = dynamic_cast<CDynamicLodStrategyProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_addLodStrategyListener_void_CDynamicLodStrategyListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_addLodStrategyListener_void_CDynamicLodStrategyListener_NoVirtual(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener* ref_lodStrategyListener )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::addLodStrategyListener(ref_lodStrategyListener);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_removeLodStrategyListener_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjectXXXX;
				if (dynamic_cast<CDynamicLodStrategyProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::removeLodStrategyListener(name1);
				else
					ptrNativeObject->removeLodStrategyListener(name1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_removeLodStrategyListener_void_EVString( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_removeLodStrategyListener_void_EVString_Callback* pCallback )
			{
				CDynamicLodStrategyProxy* ptr = dynamic_cast<CDynamicLodStrategyProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_removeLodStrategyListener_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_removeLodStrategyListener_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::removeLodStrategyListener(name1);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getLodValue_Real_CDynamicModelObject_CGlobeCamera(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* modelObject, _in EarthView::World::Spatial3D::CGlobeCamera* camera )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjectXXXX;
				if (dynamic_cast<CDynamicLodStrategyProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::getLodValue(modelObject, camera);
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getLodValue(modelObject, camera);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getLodValue_Real_CDynamicModelObject_CGlobeCamera( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getLodValue_Real_CDynamicModelObject_CGlobeCamera_Callback* pCallback )
			{
				CDynamicLodStrategyProxy* ptr = dynamic_cast<CDynamicLodStrategyProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getLodValue_Real_CDynamicModelObject_CGlobeCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getLodValue_Real_CDynamicModelObject_CGlobeCamera_NoVirtual(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* modelObject, _in EarthView::World::Spatial3D::CGlobeCamera* camera )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::getLodValue(modelObject, camera);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_fireLodStrategyListener_void_CDynamicModelObject_CGlobeCamera(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* modelObject, _in EarthView::World::Spatial3D::CGlobeCamera* camera )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjectXXXX;
				if (dynamic_cast<CDynamicLodStrategyProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::fireLodStrategyListener(modelObject, camera);
				else
					ptrNativeObject->fireLodStrategyListener(modelObject, camera);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_fireLodStrategyListener_void_CDynamicModelObject_CGlobeCamera( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_fireLodStrategyListener_void_CDynamicModelObject_CGlobeCamera_Callback* pCallback )
			{
				CDynamicLodStrategyProxy* ptr = dynamic_cast<CDynamicLodStrategyProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_fireLodStrategyListener_void_CDynamicModelObject_CGlobeCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_fireLodStrategyListener_void_CDynamicModelObject_CGlobeCamera_NoVirtual(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* modelObject, _in EarthView::World::Spatial3D::CGlobeCamera* camera )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::fireLodStrategyListener(modelObject, camera);
			}
		}
	}
}
