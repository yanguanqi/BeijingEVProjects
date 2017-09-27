/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/dynamicmodellibrary/dynamicpixellodstrategy.h"
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace DynamicModelLibrary
		{
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_isPassed_ev_bool_CDynamicModelObject_EVString_CGlobeCamera_Callback)(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* modelObject, _in char*& lodStrategyItemName, _in EarthView::World::Spatial3D::CGlobeCamera* camera);
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_setMaxVisibleValue_void_EVString_Real_Callback)(_in char*& name, _in const Real& maxVisibleValue);
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_setMinVisibleValue_void_EVString_Real_Callback)(_in char*& name, _in const Real& minVisibleValue);
			typedef Real  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_getMaxVisibleValue_Real_EVString_Callback)(_in char*& name);
			typedef Real  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_getMinVisibleValue_Real_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_registerLodStrategyItem_void_CDynamicLodStrategyItem_Callback)(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem* ref_lodStrategyItem);
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_unregisterLodStrategyItem_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_addLodStrategyListener_void_CDynamicLodStrategyListener_Callback)(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener* ref_lodStrategyListener);
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_removeLodStrategyListener_void_EVString_Callback)(_in char*& name);
			typedef Real  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_getLodValue_Real_CDynamicModelObject_CGlobeCamera_Callback)(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* modelObject, _in EarthView::World::Spatial3D::CGlobeCamera* camera);
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_fireLodStrategyListener_void_CDynamicModelObject_CGlobeCamera_Callback)(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* modelObject, _in EarthView::World::Spatial3D::CGlobeCamera* camera);
			class CDynamicPixelLodStrategyProxy : public EarthView::IndustryEngine::DynamicModelLibrary::CDynamicPixelLodStrategy
			{
			private:
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_isPassed_ev_bool_CDynamicModelObject_EVString_CGlobeCamera_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_isPassed_ev_bool_CDynamicModelObject_EVString_CGlobeCamera_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_setMaxVisibleValue_void_EVString_Real_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_setMaxVisibleValue_void_EVString_Real_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_setMinVisibleValue_void_EVString_Real_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_setMinVisibleValue_void_EVString_Real_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_getMaxVisibleValue_Real_EVString_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_getMaxVisibleValue_Real_EVString_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_getMinVisibleValue_Real_EVString_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_getMinVisibleValue_Real_EVString_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_registerLodStrategyItem_void_CDynamicLodStrategyItem_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_registerLodStrategyItem_void_CDynamicLodStrategyItem_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_unregisterLodStrategyItem_void_EVString_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_unregisterLodStrategyItem_void_EVString_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_addLodStrategyListener_void_CDynamicLodStrategyListener_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_addLodStrategyListener_void_CDynamicLodStrategyListener_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_removeLodStrategyListener_void_EVString_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_removeLodStrategyListener_void_EVString_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_getLodValue_Real_CDynamicModelObject_CGlobeCamera_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_getLodValue_Real_CDynamicModelObject_CGlobeCamera_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_fireLodStrategyListener_void_CDynamicModelObject_CGlobeCamera_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_fireLodStrategyListener_void_CDynamicModelObject_CGlobeCamera_Callback;
			public:
				CDynamicPixelLodStrategyProxy(EarthView::World::Core::CNameValuePairList *pList) : CDynamicPixelLodStrategy(pList)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_isPassed_ev_bool_CDynamicModelObject_EVString_CGlobeCamera_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_setMaxVisibleValue_void_EVString_Real_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_setMinVisibleValue_void_EVString_Real_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_getMaxVisibleValue_Real_EVString_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_getMinVisibleValue_Real_EVString_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_registerLodStrategyItem_void_CDynamicLodStrategyItem_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_unregisterLodStrategyItem_void_EVString_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_addLodStrategyListener_void_CDynamicLodStrategyListener_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_removeLodStrategyListener_void_EVString_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_getLodValue_Real_CDynamicModelObject_CGlobeCamera_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_fireLodStrategyListener_void_CDynamicModelObject_CGlobeCamera_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_isPassed_ev_bool_CDynamicModelObject_EVString_CGlobeCamera(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_isPassed_ev_bool_CDynamicModelObject_EVString_CGlobeCamera_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_isPassed_ev_bool_CDynamicModelObject_EVString_CGlobeCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_setMaxVisibleValue_void_EVString_Real(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_setMaxVisibleValue_void_EVString_Real_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_setMaxVisibleValue_void_EVString_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_setMinVisibleValue_void_EVString_Real(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_setMinVisibleValue_void_EVString_Real_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_setMinVisibleValue_void_EVString_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_getMaxVisibleValue_Real_EVString(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_getMaxVisibleValue_Real_EVString_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_getMaxVisibleValue_Real_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_getMinVisibleValue_Real_EVString(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_getMinVisibleValue_Real_EVString_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_getMinVisibleValue_Real_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_registerLodStrategyItem_void_CDynamicLodStrategyItem(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_registerLodStrategyItem_void_CDynamicLodStrategyItem_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_registerLodStrategyItem_void_CDynamicLodStrategyItem_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_unregisterLodStrategyItem_void_EVString(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_unregisterLodStrategyItem_void_EVString_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_unregisterLodStrategyItem_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_addLodStrategyListener_void_CDynamicLodStrategyListener(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_addLodStrategyListener_void_CDynamicLodStrategyListener_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_addLodStrategyListener_void_CDynamicLodStrategyListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_removeLodStrategyListener_void_EVString(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_removeLodStrategyListener_void_EVString_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_removeLodStrategyListener_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_getLodValue_Real_CDynamicModelObject_CGlobeCamera(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_getLodValue_Real_CDynamicModelObject_CGlobeCamera_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_getLodValue_Real_CDynamicModelObject_CGlobeCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_fireLodStrategyListener_void_CDynamicModelObject_CGlobeCamera(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_fireLodStrategyListener_void_CDynamicModelObject_CGlobeCamera_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_fireLodStrategyListener_void_CDynamicModelObject_CGlobeCamera_Callback = pCallback;
				}
				virtual Real getLodValue(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* modelObject, _in EarthView::World::Spatial3D::CGlobeCamera* camera)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_getLodValue_Real_CDynamicModelObject_CGlobeCamera_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_getLodValue_Real_CDynamicModelObject_CGlobeCamera_Callback(modelObject, camera);
						return returnValue;
					}
					else
						return this->CDynamicPixelLodStrategy::getLodValue(modelObject, camera);
				}
				virtual ev_bool isPassed(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* modelObject, _in const EVString& lodStrategyItemName, _in EarthView::World::Spatial3D::CGlobeCamera* camera)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_isPassed_ev_bool_CDynamicModelObject_EVString_CGlobeCamera_Callback != NULL && this->isCustomExtend())
					{
						char* lodStrategyItemName_Char = lodStrategyItemName.makeBuffer();
						ev_bool returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_isPassed_ev_bool_CDynamicModelObject_EVString_CGlobeCamera_Callback(modelObject, lodStrategyItemName_Char, camera);
						return returnValue;
					}
					else
						return this->CDynamicPixelLodStrategy::isPassed(modelObject, lodStrategyItemName, camera);
				}
				virtual void setMaxVisibleValue(_in const EVString& name, _in const Real& maxVisibleValue)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_setMaxVisibleValue_void_EVString_Real_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_setMaxVisibleValue_void_EVString_Real_Callback(name_Char, maxVisibleValue);
					}
					else
						return this->CDynamicPixelLodStrategy::setMaxVisibleValue(name, maxVisibleValue);
				}
				virtual void setMinVisibleValue(_in const EVString& name, _in const Real& minVisibleValue)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_setMinVisibleValue_void_EVString_Real_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_setMinVisibleValue_void_EVString_Real_Callback(name_Char, minVisibleValue);
					}
					else
						return this->CDynamicPixelLodStrategy::setMinVisibleValue(name, minVisibleValue);
				}
				virtual Real getMaxVisibleValue(_in const EVString& name) const
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_getMaxVisibleValue_Real_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						Real returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_getMaxVisibleValue_Real_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CDynamicPixelLodStrategy::getMaxVisibleValue(name);
				}
				virtual Real getMinVisibleValue(_in const EVString& name) const
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_getMinVisibleValue_Real_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						Real returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_getMinVisibleValue_Real_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CDynamicPixelLodStrategy::getMinVisibleValue(name);
				}
				virtual void registerLodStrategyItem(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem* ref_lodStrategyItem)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_registerLodStrategyItem_void_CDynamicLodStrategyItem_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_registerLodStrategyItem_void_CDynamicLodStrategyItem_Callback(ref_lodStrategyItem);
					}
					else
						return this->CDynamicPixelLodStrategy::registerLodStrategyItem(ref_lodStrategyItem);
				}
				virtual void unregisterLodStrategyItem(_in const EVString& name)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_unregisterLodStrategyItem_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_unregisterLodStrategyItem_void_EVString_Callback(name_Char);
					}
					else
						return this->CDynamicPixelLodStrategy::unregisterLodStrategyItem(name);
				}
				virtual void addLodStrategyListener(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener* ref_lodStrategyListener)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_addLodStrategyListener_void_CDynamicLodStrategyListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_addLodStrategyListener_void_CDynamicLodStrategyListener_Callback(ref_lodStrategyListener);
					}
					else
						return this->CDynamicPixelLodStrategy::addLodStrategyListener(ref_lodStrategyListener);
				}
				virtual void removeLodStrategyListener(_in const EVString& name)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_removeLodStrategyListener_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_removeLodStrategyListener_void_EVString_Callback(name_Char);
					}
					else
						return this->CDynamicPixelLodStrategy::removeLodStrategyListener(name);
				}
				virtual void fireLodStrategyListener(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* modelObject, _in EarthView::World::Spatial3D::CGlobeCamera* camera)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_fireLodStrategyListener_void_CDynamicModelObject_CGlobeCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_fireLodStrategyListener_void_CDynamicModelObject_CGlobeCamera_Callback(modelObject, camera);
					}
					else
						return this->CDynamicPixelLodStrategy::fireLodStrategyListener(modelObject, camera);
				}
			};
			REGISTER_FACTORY_CLASS(CDynamicPixelLodStrategyProxy);
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_getLodValue_Real_CDynamicModelObject_CGlobeCamera(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* modelObject, _in EarthView::World::Spatial3D::CGlobeCamera* camera )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicPixelLodStrategy* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicPixelLodStrategy*) pObjectXXXX;
				if (dynamic_cast<CDynamicPixelLodStrategyProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicPixelLodStrategy*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicPixelLodStrategy::getLodValue(modelObject, camera);
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getLodValue(modelObject, camera);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_getLodValue_Real_CDynamicModelObject_CGlobeCamera( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_getLodValue_Real_CDynamicModelObject_CGlobeCamera_Callback* pCallback )
			{
				CDynamicPixelLodStrategyProxy* ptr = dynamic_cast<CDynamicPixelLodStrategyProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicPixelLodStrategy*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_getLodValue_Real_CDynamicModelObject_CGlobeCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_getLodValue_Real_CDynamicModelObject_CGlobeCamera_NoVirtual(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* modelObject, _in EarthView::World::Spatial3D::CGlobeCamera* camera )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicPixelLodStrategy* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicPixelLodStrategy*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicPixelLodStrategy::getLodValue(modelObject, camera);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_isPassed_ev_bool_CDynamicModelObject_EVString_CGlobeCamera( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_isPassed_ev_bool_CDynamicModelObject_EVString_CGlobeCamera_Callback* pCallback )
			{
				CDynamicPixelLodStrategyProxy* ptr = dynamic_cast<CDynamicPixelLodStrategyProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicPixelLodStrategy*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_isPassed_ev_bool_CDynamicModelObject_EVString_CGlobeCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_setMaxVisibleValue_void_EVString_Real( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_setMaxVisibleValue_void_EVString_Real_Callback* pCallback )
			{
				CDynamicPixelLodStrategyProxy* ptr = dynamic_cast<CDynamicPixelLodStrategyProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicPixelLodStrategy*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_setMaxVisibleValue_void_EVString_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_setMinVisibleValue_void_EVString_Real( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_setMinVisibleValue_void_EVString_Real_Callback* pCallback )
			{
				CDynamicPixelLodStrategyProxy* ptr = dynamic_cast<CDynamicPixelLodStrategyProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicPixelLodStrategy*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_setMinVisibleValue_void_EVString_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_getMaxVisibleValue_Real_EVString( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_getMaxVisibleValue_Real_EVString_Callback* pCallback )
			{
				CDynamicPixelLodStrategyProxy* ptr = dynamic_cast<CDynamicPixelLodStrategyProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicPixelLodStrategy*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_getMaxVisibleValue_Real_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_getMinVisibleValue_Real_EVString( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_getMinVisibleValue_Real_EVString_Callback* pCallback )
			{
				CDynamicPixelLodStrategyProxy* ptr = dynamic_cast<CDynamicPixelLodStrategyProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicPixelLodStrategy*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_getMinVisibleValue_Real_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_registerLodStrategyItem_void_CDynamicLodStrategyItem( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_registerLodStrategyItem_void_CDynamicLodStrategyItem_Callback* pCallback )
			{
				CDynamicPixelLodStrategyProxy* ptr = dynamic_cast<CDynamicPixelLodStrategyProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicPixelLodStrategy*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_registerLodStrategyItem_void_CDynamicLodStrategyItem(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_unregisterLodStrategyItem_void_EVString( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_unregisterLodStrategyItem_void_EVString_Callback* pCallback )
			{
				CDynamicPixelLodStrategyProxy* ptr = dynamic_cast<CDynamicPixelLodStrategyProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicPixelLodStrategy*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_unregisterLodStrategyItem_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_addLodStrategyListener_void_CDynamicLodStrategyListener( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_addLodStrategyListener_void_CDynamicLodStrategyListener_Callback* pCallback )
			{
				CDynamicPixelLodStrategyProxy* ptr = dynamic_cast<CDynamicPixelLodStrategyProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicPixelLodStrategy*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_addLodStrategyListener_void_CDynamicLodStrategyListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_removeLodStrategyListener_void_EVString( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_removeLodStrategyListener_void_EVString_Callback* pCallback )
			{
				CDynamicPixelLodStrategyProxy* ptr = dynamic_cast<CDynamicPixelLodStrategyProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicPixelLodStrategy*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_removeLodStrategyListener_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_fireLodStrategyListener_void_CDynamicModelObject_CGlobeCamera( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_fireLodStrategyListener_void_CDynamicModelObject_CGlobeCamera_Callback* pCallback )
			{
				CDynamicPixelLodStrategyProxy* ptr = dynamic_cast<CDynamicPixelLodStrategyProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicPixelLodStrategy*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicPixelLodStrategy_fireLodStrategyListener_void_CDynamicModelObject_CGlobeCamera(pCallback);
				}
			}
		}
	}
}
