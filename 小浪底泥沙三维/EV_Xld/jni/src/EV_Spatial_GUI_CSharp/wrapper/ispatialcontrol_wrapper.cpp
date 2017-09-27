/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialgui/ispatialcontrol.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Atlas
			{
				typedef int  ( _stdcall EarthView_World_Spatial_Atlas_ISpatialControl_getType_EVSpatialControlType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Atlas_ISpatialControl_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Atlas_ISpatialControl_getTypeString_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_ISpatialControl_notifyViewChanged_void_IViewArgs_Callback)(_in EarthView::World::Spatial::IViewArgs* args);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_ISpatialControl_addViewListener_ev_bool_IViewListener_Callback)(_in EarthView::World::Spatial::IViewListener* ref_externalListener);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Atlas_ISpatialControl_getViewListenerCount_ev_uint32_Callback)();
				typedef EarthView::World::Spatial::IViewListener*  ( _stdcall EarthView_World_Spatial_Atlas_ISpatialControl_getViewListener_IViewListener_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_ISpatialControl_existViewListener_ev_bool_IViewListener_Callback)(_in EarthView::World::Spatial::IViewListener* externalListener);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_IViewListener_Callback)(_in EarthView::World::Spatial::IViewListener* externalListener);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_ISpatialControl_clearViewListeners_void_Callback)();
				class ISpatialControlProxy : public EarthView::World::Spatial::Atlas::ISpatialControl
				{
				private:
					EarthView_World_Spatial_Atlas_ISpatialControl_getType_EVSpatialControlType_Callback* m_EarthView_World_Spatial_Atlas_ISpatialControl_getType_EVSpatialControlType_Callback;
					EarthView_World_Spatial_Atlas_ISpatialControl_getName_EVString_Callback* m_EarthView_World_Spatial_Atlas_ISpatialControl_getName_EVString_Callback;
					EarthView_World_Spatial_Atlas_ISpatialControl_getTypeString_EVString_Callback* m_EarthView_World_Spatial_Atlas_ISpatialControl_getTypeString_EVString_Callback;
					EarthView_World_Spatial_Atlas_ISpatialControl_notifyViewChanged_void_IViewArgs_Callback* m_EarthView_World_Spatial_Atlas_ISpatialControl_notifyViewChanged_void_IViewArgs_Callback;
					EarthView_World_Spatial_Atlas_ISpatialControl_addViewListener_ev_bool_IViewListener_Callback* m_EarthView_World_Spatial_Atlas_ISpatialControl_addViewListener_ev_bool_IViewListener_Callback;
					EarthView_World_Spatial_Atlas_ISpatialControl_getViewListenerCount_ev_uint32_Callback* m_EarthView_World_Spatial_Atlas_ISpatialControl_getViewListenerCount_ev_uint32_Callback;
					EarthView_World_Spatial_Atlas_ISpatialControl_getViewListener_IViewListener_ev_uint32_Callback* m_EarthView_World_Spatial_Atlas_ISpatialControl_getViewListener_IViewListener_ev_uint32_Callback;
					EarthView_World_Spatial_Atlas_ISpatialControl_existViewListener_ev_bool_IViewListener_Callback* m_EarthView_World_Spatial_Atlas_ISpatialControl_existViewListener_ev_bool_IViewListener_Callback;
					EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_ev_uint32_Callback* m_EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_ev_uint32_Callback;
					EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_IViewListener_Callback* m_EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_IViewListener_Callback;
					EarthView_World_Spatial_Atlas_ISpatialControl_clearViewListeners_void_Callback* m_EarthView_World_Spatial_Atlas_ISpatialControl_clearViewListeners_void_Callback;
				public:
					ISpatialControlProxy(EarthView::World::Core::CNameValuePairList *pList) : ISpatialControl(pList)
					{
						m_EarthView_World_Spatial_Atlas_ISpatialControl_getType_EVSpatialControlType_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ISpatialControl_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ISpatialControl_getTypeString_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ISpatialControl_notifyViewChanged_void_IViewArgs_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ISpatialControl_addViewListener_ev_bool_IViewListener_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ISpatialControl_getViewListenerCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ISpatialControl_getViewListener_IViewListener_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ISpatialControl_existViewListener_ev_bool_IViewListener_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_IViewListener_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ISpatialControl_clearViewListeners_void_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(ISpatialControlProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ISpatialControl_getType_EVSpatialControlType(EarthView_World_Spatial_Atlas_ISpatialControl_getType_EVSpatialControlType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ISpatialControl_getType_EVSpatialControlType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ISpatialControl_getName_EVString(EarthView_World_Spatial_Atlas_ISpatialControl_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ISpatialControl_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ISpatialControl_getTypeString_EVString(EarthView_World_Spatial_Atlas_ISpatialControl_getTypeString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ISpatialControl_getTypeString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ISpatialControl_notifyViewChanged_void_IViewArgs(EarthView_World_Spatial_Atlas_ISpatialControl_notifyViewChanged_void_IViewArgs_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ISpatialControl_notifyViewChanged_void_IViewArgs_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ISpatialControl_addViewListener_ev_bool_IViewListener(EarthView_World_Spatial_Atlas_ISpatialControl_addViewListener_ev_bool_IViewListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ISpatialControl_addViewListener_ev_bool_IViewListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ISpatialControl_getViewListenerCount_ev_uint32(EarthView_World_Spatial_Atlas_ISpatialControl_getViewListenerCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ISpatialControl_getViewListenerCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ISpatialControl_getViewListener_IViewListener_ev_uint32(EarthView_World_Spatial_Atlas_ISpatialControl_getViewListener_IViewListener_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ISpatialControl_getViewListener_IViewListener_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ISpatialControl_existViewListener_ev_bool_IViewListener(EarthView_World_Spatial_Atlas_ISpatialControl_existViewListener_ev_bool_IViewListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ISpatialControl_existViewListener_ev_bool_IViewListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_ev_uint32(EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_IViewListener(EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_IViewListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_IViewListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ISpatialControl_clearViewListeners_void(EarthView_World_Spatial_Atlas_ISpatialControl_clearViewListeners_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ISpatialControl_clearViewListeners_void_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Atlas::EVSpatialControlType getType() const
					{
						if(m_EarthView_World_Spatial_Atlas_ISpatialControl_getType_EVSpatialControlType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVSpatialControlType returnValue = (EarthView::World::Spatial::Atlas::EVSpatialControlType)m_EarthView_World_Spatial_Atlas_ISpatialControl_getType_EVSpatialControlType_Callback();
							return returnValue;
						}
						else
							return this->ISpatialControl::getType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_Atlas_ISpatialControl_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Atlas_ISpatialControl_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->ISpatialControl::getName();
					}
					virtual EVString getTypeString() const
					{
						if(m_EarthView_World_Spatial_Atlas_ISpatialControl_getTypeString_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Atlas_ISpatialControl_getTypeString_EVString_Callback();
							return returnValue;
						}
						else
							return this->ISpatialControl::getTypeString();
					}
					virtual void notifyViewChanged(_in EarthView::World::Spatial::IViewArgs* args)
					{
						if(m_EarthView_World_Spatial_Atlas_ISpatialControl_notifyViewChanged_void_IViewArgs_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_ISpatialControl_notifyViewChanged_void_IViewArgs_Callback(args);
						}
						else
							return this->ISpatialControl::notifyViewChanged(args);
					}
					virtual ev_bool addViewListener(_in EarthView::World::Spatial::IViewListener* ref_externalListener)
					{
						if(m_EarthView_World_Spatial_Atlas_ISpatialControl_addViewListener_ev_bool_IViewListener_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_ISpatialControl_addViewListener_ev_bool_IViewListener_Callback(ref_externalListener);
							return returnValue;
						}
						else
							return this->ISpatialControl::addViewListener(ref_externalListener);
					}
					virtual ev_uint32 getViewListenerCount() const
					{
						if(m_EarthView_World_Spatial_Atlas_ISpatialControl_getViewListenerCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Atlas_ISpatialControl_getViewListenerCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->ISpatialControl::getViewListenerCount();
					}
					virtual EarthView::World::Spatial::IViewListener* getViewListener(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_Atlas_ISpatialControl_getViewListener_IViewListener_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::IViewListener* returnValue = m_EarthView_World_Spatial_Atlas_ISpatialControl_getViewListener_IViewListener_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->ISpatialControl::getViewListener(index);
					}
					virtual ev_bool existViewListener(_in EarthView::World::Spatial::IViewListener* externalListener) const
					{
						if(m_EarthView_World_Spatial_Atlas_ISpatialControl_existViewListener_ev_bool_IViewListener_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_ISpatialControl_existViewListener_ev_bool_IViewListener_Callback(externalListener);
							return returnValue;
						}
						else
							return this->ISpatialControl::existViewListener(externalListener);
					}
					virtual ev_bool removeViewListener(_in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->ISpatialControl::removeViewListener(index);
					}
					virtual ev_bool removeViewListener(_in EarthView::World::Spatial::IViewListener* externalListener)
					{
						if(m_EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_IViewListener_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_IViewListener_Callback(externalListener);
							return returnValue;
						}
						else
							return this->ISpatialControl::removeViewListener(externalListener);
					}
					virtual void clearViewListeners()
					{
						if(m_EarthView_World_Spatial_Atlas_ISpatialControl_clearViewListeners_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_ISpatialControl_clearViewListeners_void_Callback();
						}
						else
							return this->ISpatialControl::clearViewListeners();
					}
				};
				REGISTER_FACTORY_CLASS(ISpatialControlProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Atlas_ISpatialControl_getType_EVSpatialControlType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ISpatialControl* ptrNativeObject = (EarthView::World::Spatial::Atlas::ISpatialControl*) pObjectXXXX;
					if (dynamic_cast<ISpatialControlProxy*>((EarthView::World::Spatial::Atlas::ISpatialControl*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVSpatialControlType objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ISpatialControl::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVSpatialControlType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ISpatialControl_getType_EVSpatialControlType( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ISpatialControl_getType_EVSpatialControlType_Callback* pCallback )
				{
					ISpatialControlProxy* ptr = dynamic_cast<ISpatialControlProxy*>((EarthView::World::Spatial::Atlas::ISpatialControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ISpatialControl_getType_EVSpatialControlType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Atlas_ISpatialControl_getType_EVSpatialControlType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ISpatialControl* ptrNativeObject = (EarthView::World::Spatial::Atlas::ISpatialControl*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVSpatialControlType objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ISpatialControl::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Atlas_ISpatialControl_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ISpatialControl* ptrNativeObject = (EarthView::World::Spatial::Atlas::ISpatialControl*) pObjectXXXX;
					if (dynamic_cast<ISpatialControlProxy*>((EarthView::World::Spatial::Atlas::ISpatialControl*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ISpatialControl::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ISpatialControl_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ISpatialControl_getName_EVString_Callback* pCallback )
				{
					ISpatialControlProxy* ptr = dynamic_cast<ISpatialControlProxy*>((EarthView::World::Spatial::Atlas::ISpatialControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ISpatialControl_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Atlas_ISpatialControl_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ISpatialControl* ptrNativeObject = (EarthView::World::Spatial::Atlas::ISpatialControl*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ISpatialControl::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Atlas_ISpatialControl_getTypeString_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ISpatialControl* ptrNativeObject = (EarthView::World::Spatial::Atlas::ISpatialControl*) pObjectXXXX;
					if (dynamic_cast<ISpatialControlProxy*>((EarthView::World::Spatial::Atlas::ISpatialControl*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ISpatialControl::getTypeString();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getTypeString();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ISpatialControl_getTypeString_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ISpatialControl_getTypeString_EVString_Callback* pCallback )
				{
					ISpatialControlProxy* ptr = dynamic_cast<ISpatialControlProxy*>((EarthView::World::Spatial::Atlas::ISpatialControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ISpatialControl_getTypeString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Atlas_ISpatialControl_getTypeString_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ISpatialControl* ptrNativeObject = (EarthView::World::Spatial::Atlas::ISpatialControl*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ISpatialControl::getTypeString();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ISpatialControl_notifyViewChanged_void_IViewArgs(void *pObjectXXXX, _in EarthView::World::Spatial::IViewArgs* args )
				{
					EarthView::World::Spatial::Atlas::ISpatialControl* ptrNativeObject = (EarthView::World::Spatial::Atlas::ISpatialControl*) pObjectXXXX;
					if (dynamic_cast<ISpatialControlProxy*>((EarthView::World::Spatial::Atlas::ISpatialControl*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::ISpatialControl::notifyViewChanged(args);
					else
						ptrNativeObject->notifyViewChanged(args);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ISpatialControl_notifyViewChanged_void_IViewArgs( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ISpatialControl_notifyViewChanged_void_IViewArgs_Callback* pCallback )
				{
					ISpatialControlProxy* ptr = dynamic_cast<ISpatialControlProxy*>((EarthView::World::Spatial::Atlas::ISpatialControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ISpatialControl_notifyViewChanged_void_IViewArgs(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ISpatialControl_notifyViewChanged_void_IViewArgs_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::IViewArgs* args )
				{
					EarthView::World::Spatial::Atlas::ISpatialControl* ptrNativeObject = (EarthView::World::Spatial::Atlas::ISpatialControl*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::ISpatialControl::notifyViewChanged(args);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_ISpatialControl_addViewListener_ev_bool_IViewListener(void *pObjectXXXX, _in EarthView::World::Spatial::IViewListener* ref_externalListener )
				{
					EarthView::World::Spatial::Atlas::ISpatialControl* ptrNativeObject = (EarthView::World::Spatial::Atlas::ISpatialControl*) pObjectXXXX;
					if (dynamic_cast<ISpatialControlProxy*>((EarthView::World::Spatial::Atlas::ISpatialControl*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ISpatialControl::addViewListener(ref_externalListener);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->addViewListener(ref_externalListener);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ISpatialControl_addViewListener_ev_bool_IViewListener( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ISpatialControl_addViewListener_ev_bool_IViewListener_Callback* pCallback )
				{
					ISpatialControlProxy* ptr = dynamic_cast<ISpatialControlProxy*>((EarthView::World::Spatial::Atlas::ISpatialControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ISpatialControl_addViewListener_ev_bool_IViewListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_ISpatialControl_addViewListener_ev_bool_IViewListener_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::IViewListener* ref_externalListener )
				{
					EarthView::World::Spatial::Atlas::ISpatialControl* ptrNativeObject = (EarthView::World::Spatial::Atlas::ISpatialControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ISpatialControl::addViewListener(ref_externalListener);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Atlas_ISpatialControl_getViewListenerCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ISpatialControl* ptrNativeObject = (EarthView::World::Spatial::Atlas::ISpatialControl*) pObjectXXXX;
					if (dynamic_cast<ISpatialControlProxy*>((EarthView::World::Spatial::Atlas::ISpatialControl*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ISpatialControl::getViewListenerCount();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getViewListenerCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ISpatialControl_getViewListenerCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ISpatialControl_getViewListenerCount_ev_uint32_Callback* pCallback )
				{
					ISpatialControlProxy* ptr = dynamic_cast<ISpatialControlProxy*>((EarthView::World::Spatial::Atlas::ISpatialControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ISpatialControl_getViewListenerCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Atlas_ISpatialControl_getViewListenerCount_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ISpatialControl* ptrNativeObject = (EarthView::World::Spatial::Atlas::ISpatialControl*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ISpatialControl::getViewListenerCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::IViewListener*  _stdcall EarthView_World_Spatial_Atlas_ISpatialControl_getViewListener_IViewListener_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Atlas::ISpatialControl* ptrNativeObject = (EarthView::World::Spatial::Atlas::ISpatialControl*) pObjectXXXX;
					if (dynamic_cast<ISpatialControlProxy*>((EarthView::World::Spatial::Atlas::ISpatialControl*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::IViewListener* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ISpatialControl::getViewListener(index);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::IViewListener* objXXXX = ptrNativeObject->getViewListener(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ISpatialControl_getViewListener_IViewListener_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ISpatialControl_getViewListener_IViewListener_ev_uint32_Callback* pCallback )
				{
					ISpatialControlProxy* ptr = dynamic_cast<ISpatialControlProxy*>((EarthView::World::Spatial::Atlas::ISpatialControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ISpatialControl_getViewListener_IViewListener_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::IViewListener*  _stdcall EarthView_World_Spatial_Atlas_ISpatialControl_getViewListener_IViewListener_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Atlas::ISpatialControl* ptrNativeObject = (EarthView::World::Spatial::Atlas::ISpatialControl*) pObjectXXXX;
					EarthView::World::Spatial::IViewListener* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ISpatialControl::getViewListener(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_ISpatialControl_existViewListener_ev_bool_IViewListener(void *pObjectXXXX, _in EarthView::World::Spatial::IViewListener* externalListener )
				{
					const EarthView::World::Spatial::Atlas::ISpatialControl* ptrNativeObject = (EarthView::World::Spatial::Atlas::ISpatialControl*) pObjectXXXX;
					if (dynamic_cast<ISpatialControlProxy*>((EarthView::World::Spatial::Atlas::ISpatialControl*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ISpatialControl::existViewListener(externalListener);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->existViewListener(externalListener);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ISpatialControl_existViewListener_ev_bool_IViewListener( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ISpatialControl_existViewListener_ev_bool_IViewListener_Callback* pCallback )
				{
					ISpatialControlProxy* ptr = dynamic_cast<ISpatialControlProxy*>((EarthView::World::Spatial::Atlas::ISpatialControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ISpatialControl_existViewListener_ev_bool_IViewListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_ISpatialControl_existViewListener_ev_bool_IViewListener_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::IViewListener* externalListener )
				{
					const EarthView::World::Spatial::Atlas::ISpatialControl* ptrNativeObject = (EarthView::World::Spatial::Atlas::ISpatialControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ISpatialControl::existViewListener(externalListener);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Atlas::ISpatialControl* ptrNativeObject = (EarthView::World::Spatial::Atlas::ISpatialControl*) pObjectXXXX;
					if (dynamic_cast<ISpatialControlProxy*>((EarthView::World::Spatial::Atlas::ISpatialControl*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ISpatialControl::removeViewListener(index);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->removeViewListener(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_ev_uint32_Callback* pCallback )
				{
					ISpatialControlProxy* ptr = dynamic_cast<ISpatialControlProxy*>((EarthView::World::Spatial::Atlas::ISpatialControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Atlas::ISpatialControl* ptrNativeObject = (EarthView::World::Spatial::Atlas::ISpatialControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ISpatialControl::removeViewListener(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_IViewListener(void *pObjectXXXX, _in EarthView::World::Spatial::IViewListener* externalListener )
				{
					EarthView::World::Spatial::Atlas::ISpatialControl* ptrNativeObject = (EarthView::World::Spatial::Atlas::ISpatialControl*) pObjectXXXX;
					if (dynamic_cast<ISpatialControlProxy*>((EarthView::World::Spatial::Atlas::ISpatialControl*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ISpatialControl::removeViewListener(externalListener);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->removeViewListener(externalListener);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_IViewListener( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_IViewListener_Callback* pCallback )
				{
					ISpatialControlProxy* ptr = dynamic_cast<ISpatialControlProxy*>((EarthView::World::Spatial::Atlas::ISpatialControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_IViewListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_IViewListener_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::IViewListener* externalListener )
				{
					EarthView::World::Spatial::Atlas::ISpatialControl* ptrNativeObject = (EarthView::World::Spatial::Atlas::ISpatialControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ISpatialControl::removeViewListener(externalListener);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ISpatialControl_clearViewListeners_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::ISpatialControl* ptrNativeObject = (EarthView::World::Spatial::Atlas::ISpatialControl*) pObjectXXXX;
					if (dynamic_cast<ISpatialControlProxy*>((EarthView::World::Spatial::Atlas::ISpatialControl*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::ISpatialControl::clearViewListeners();
					else
						ptrNativeObject->clearViewListeners();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ISpatialControl_clearViewListeners_void( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ISpatialControl_clearViewListeners_void_Callback* pCallback )
				{
					ISpatialControlProxy* ptr = dynamic_cast<ISpatialControlProxy*>((EarthView::World::Spatial::Atlas::ISpatialControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ISpatialControl_clearViewListeners_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ISpatialControl_clearViewListeners_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::ISpatialControl* ptrNativeObject = (EarthView::World::Spatial::Atlas::ISpatialControl*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::ISpatialControl::clearViewListeners();
				}
			}
		}
	}
}
