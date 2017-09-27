/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/ipropertyset.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_GeoDataset_IPropertySet_getCount_ev_uint32_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_IPropertySet_exist_ev_bool_EVString_Callback)(_in char*& key);
				typedef char*  ( _stdcall EarthView_World_Spatial_GeoDataset_IPropertySet_getKey_EVString_ev_uint32_Callback)(_in ev_uint32 index);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_IPropertySet_setProperty_void_EVString_CVariant_Callback)(_in char*& key, _in const void* value);
				typedef const void*  ( _stdcall EarthView_World_Spatial_GeoDataset_IPropertySet_getProperty_CVariant_EVString_Callback)(_in char*& key);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_IPropertySet_remove_void_EVString_Callback)(_in char*& key);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_IPropertySet_clear_void_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IPropertySet*  ( _stdcall EarthView_World_Spatial_GeoDataset_IPropertySet_clone_IPropertySet_Callback)();
				class IPropertySetProxy : public EarthView::World::Spatial::GeoDataset::IPropertySet
				{
				private:
					EarthView_World_Spatial_GeoDataset_IPropertySet_getCount_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_IPropertySet_getCount_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_IPropertySet_exist_ev_bool_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_IPropertySet_exist_ev_bool_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_IPropertySet_getKey_EVString_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_IPropertySet_getKey_EVString_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_IPropertySet_setProperty_void_EVString_CVariant_Callback* m_EarthView_World_Spatial_GeoDataset_IPropertySet_setProperty_void_EVString_CVariant_Callback;
					EarthView_World_Spatial_GeoDataset_IPropertySet_getProperty_CVariant_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_IPropertySet_getProperty_CVariant_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_IPropertySet_remove_void_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_IPropertySet_remove_void_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_IPropertySet_clear_void_Callback* m_EarthView_World_Spatial_GeoDataset_IPropertySet_clear_void_Callback;
					EarthView_World_Spatial_GeoDataset_IPropertySet_clone_IPropertySet_Callback* m_EarthView_World_Spatial_GeoDataset_IPropertySet_clone_IPropertySet_Callback;
				public:
					IPropertySetProxy(EarthView::World::Core::CNameValuePairList *pList) : IPropertySet(pList)
					{
						m_EarthView_World_Spatial_GeoDataset_IPropertySet_getCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IPropertySet_exist_ev_bool_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IPropertySet_getKey_EVString_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IPropertySet_setProperty_void_EVString_CVariant_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IPropertySet_getProperty_CVariant_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IPropertySet_remove_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IPropertySet_clear_void_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IPropertySet_clone_IPropertySet_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IPropertySet_getCount_ev_uint32(EarthView_World_Spatial_GeoDataset_IPropertySet_getCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IPropertySet_getCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IPropertySet_exist_ev_bool_EVString(EarthView_World_Spatial_GeoDataset_IPropertySet_exist_ev_bool_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IPropertySet_exist_ev_bool_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IPropertySet_getKey_EVString_ev_uint32(EarthView_World_Spatial_GeoDataset_IPropertySet_getKey_EVString_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IPropertySet_getKey_EVString_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IPropertySet_setProperty_void_EVString_CVariant(EarthView_World_Spatial_GeoDataset_IPropertySet_setProperty_void_EVString_CVariant_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IPropertySet_setProperty_void_EVString_CVariant_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IPropertySet_getProperty_CVariant_EVString(EarthView_World_Spatial_GeoDataset_IPropertySet_getProperty_CVariant_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IPropertySet_getProperty_CVariant_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IPropertySet_remove_void_EVString(EarthView_World_Spatial_GeoDataset_IPropertySet_remove_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IPropertySet_remove_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IPropertySet_clear_void(EarthView_World_Spatial_GeoDataset_IPropertySet_clear_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IPropertySet_clear_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IPropertySet_clone_IPropertySet(EarthView_World_Spatial_GeoDataset_IPropertySet_clone_IPropertySet_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IPropertySet_clone_IPropertySet_Callback = pCallback;
					}
					virtual ev_uint32 getCount() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IPropertySet_getCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_GeoDataset_IPropertySet_getCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->IPropertySet::getCount();
					}
					virtual ev_bool exist(_in const EVString& key) const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IPropertySet_exist_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* key_Char = key.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_IPropertySet_exist_ev_bool_EVString_Callback(key_Char);
							return returnValue;
						}
						else
							return this->IPropertySet::exist(key);
					}
					virtual EVString getKey(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IPropertySet_getKey_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_GeoDataset_IPropertySet_getKey_EVString_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->IPropertySet::getKey(index);
					}
					virtual void setProperty(_in const EVString& key, _in const EarthView::World::Core::CVariant& value)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IPropertySet_setProperty_void_EVString_CVariant_Callback != NULL && this->isCustomExtend())
						{
							char* key_Char = key.makeBuffer();
							m_EarthView_World_Spatial_GeoDataset_IPropertySet_setProperty_void_EVString_CVariant_Callback(key_Char, &value);
						}
						else
							return this->IPropertySet::setProperty(key, value);
					}
					virtual const EarthView::World::Core::CVariant& getProperty(_in const EVString& key) const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IPropertySet_getProperty_CVariant_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* key_Char = key.makeBuffer();
							const EarthView::World::Core::CVariant& returnValue = *(EarthView::World::Core::CVariant*)m_EarthView_World_Spatial_GeoDataset_IPropertySet_getProperty_CVariant_EVString_Callback(key_Char);
							return returnValue;
						}
						else
							return this->IPropertySet::getProperty(key);
					}
					virtual void remove(_in const EVString& key)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IPropertySet_remove_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* key_Char = key.makeBuffer();
							m_EarthView_World_Spatial_GeoDataset_IPropertySet_remove_void_EVString_Callback(key_Char);
						}
						else
							return this->IPropertySet::remove(key);
					}
					virtual void clear()
					{
						if(m_EarthView_World_Spatial_GeoDataset_IPropertySet_clear_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_IPropertySet_clear_void_Callback();
						}
						else
							return this->IPropertySet::clear();
					}
					virtual EarthView::World::Spatial::GeoDataset::IPropertySet* clone() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IPropertySet_clone_IPropertySet_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IPropertySet* returnValue = m_EarthView_World_Spatial_GeoDataset_IPropertySet_clone_IPropertySet_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->IPropertySet::clone();
					}
				};
				REGISTER_FACTORY_CLASS(IPropertySetProxy);
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_IPropertySet_getCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IPropertySet* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IPropertySet*) pObjectXXXX;
					if (dynamic_cast<IPropertySetProxy*>((EarthView::World::Spatial::GeoDataset::IPropertySet*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IPropertySet::getCount();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IPropertySet_getCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IPropertySet_getCount_ev_uint32_Callback* pCallback )
				{
					IPropertySetProxy* ptr = dynamic_cast<IPropertySetProxy*>((EarthView::World::Spatial::GeoDataset::IPropertySet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IPropertySet_getCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_IPropertySet_getCount_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IPropertySet* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IPropertySet*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IPropertySet::getCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IPropertySet_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					const EarthView::World::Spatial::GeoDataset::IPropertySet* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IPropertySet*) pObjectXXXX;
					if (dynamic_cast<IPropertySetProxy*>((EarthView::World::Spatial::GeoDataset::IPropertySet*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IPropertySet::exist(key1);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->exist(key1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IPropertySet_exist_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IPropertySet_exist_ev_bool_EVString_Callback* pCallback )
				{
					IPropertySetProxy* ptr = dynamic_cast<IPropertySetProxy*>((EarthView::World::Spatial::GeoDataset::IPropertySet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IPropertySet_exist_ev_bool_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IPropertySet_exist_ev_bool_EVString_NoVirtual(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					const EarthView::World::Spatial::GeoDataset::IPropertySet* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IPropertySet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IPropertySet::exist(key1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_IPropertySet_getKey_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::GeoDataset::IPropertySet* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IPropertySet*) pObjectXXXX;
					if (dynamic_cast<IPropertySetProxy*>((EarthView::World::Spatial::GeoDataset::IPropertySet*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IPropertySet::getKey(index);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getKey(index);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IPropertySet_getKey_EVString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IPropertySet_getKey_EVString_ev_uint32_Callback* pCallback )
				{
					IPropertySetProxy* ptr = dynamic_cast<IPropertySetProxy*>((EarthView::World::Spatial::GeoDataset::IPropertySet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IPropertySet_getKey_EVString_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_IPropertySet_getKey_EVString_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::GeoDataset::IPropertySet* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IPropertySet*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IPropertySet::getKey(index);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IPropertySet_setProperty_void_EVString_CVariant(void *pObjectXXXX, _in const char* key, _in const void* value )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial::GeoDataset::IPropertySet* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IPropertySet*) pObjectXXXX;
					if (dynamic_cast<IPropertySetProxy*>((EarthView::World::Spatial::GeoDataset::IPropertySet*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::IPropertySet::setProperty(key1, *(EarthView::World::Core::CVariant*)value);
					else
						ptrNativeObject->setProperty(key1, *(EarthView::World::Core::CVariant*)value);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IPropertySet_setProperty_void_EVString_CVariant( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IPropertySet_setProperty_void_EVString_CVariant_Callback* pCallback )
				{
					IPropertySetProxy* ptr = dynamic_cast<IPropertySetProxy*>((EarthView::World::Spatial::GeoDataset::IPropertySet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IPropertySet_setProperty_void_EVString_CVariant(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IPropertySet_setProperty_void_EVString_CVariant_NoVirtual(void *pObjectXXXX, _in const char* key, _in const void* value )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial::GeoDataset::IPropertySet* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IPropertySet*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::IPropertySet::setProperty(key1, *(EarthView::World::Core::CVariant*)value);
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial_GeoDataset_IPropertySet_getProperty_CVariant_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					const EarthView::World::Spatial::GeoDataset::IPropertySet* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IPropertySet*) pObjectXXXX;
					if (dynamic_cast<IPropertySetProxy*>((EarthView::World::Spatial::GeoDataset::IPropertySet*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Core::CVariant& objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IPropertySet::getProperty(key1);
						const EarthView::World::Core::CVariant *pXXXX = &objXXXX;
						return (void*)pXXXX;
					}
					else
					{
						const EarthView::World::Core::CVariant& objXXXX = ptrNativeObject->getProperty(key1);
						const EarthView::World::Core::CVariant *pXXXX = &objXXXX;
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IPropertySet_getProperty_CVariant_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IPropertySet_getProperty_CVariant_EVString_Callback* pCallback )
				{
					IPropertySetProxy* ptr = dynamic_cast<IPropertySetProxy*>((EarthView::World::Spatial::GeoDataset::IPropertySet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IPropertySet_getProperty_CVariant_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial_GeoDataset_IPropertySet_getProperty_CVariant_EVString_NoVirtual(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					const EarthView::World::Spatial::GeoDataset::IPropertySet* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IPropertySet*) pObjectXXXX;
					const EarthView::World::Core::CVariant& objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IPropertySet::getProperty(key1);
					const EarthView::World::Core::CVariant *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IPropertySet_remove_void_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial::GeoDataset::IPropertySet* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IPropertySet*) pObjectXXXX;
					if (dynamic_cast<IPropertySetProxy*>((EarthView::World::Spatial::GeoDataset::IPropertySet*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::IPropertySet::remove(key1);
					else
						ptrNativeObject->remove(key1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IPropertySet_remove_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IPropertySet_remove_void_EVString_Callback* pCallback )
				{
					IPropertySetProxy* ptr = dynamic_cast<IPropertySetProxy*>((EarthView::World::Spatial::GeoDataset::IPropertySet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IPropertySet_remove_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IPropertySet_remove_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial::GeoDataset::IPropertySet* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IPropertySet*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::IPropertySet::remove(key1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IPropertySet_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::IPropertySet* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IPropertySet*) pObjectXXXX;
					if (dynamic_cast<IPropertySetProxy*>((EarthView::World::Spatial::GeoDataset::IPropertySet*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::IPropertySet::clear();
					else
						ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IPropertySet_clear_void( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IPropertySet_clear_void_Callback* pCallback )
				{
					IPropertySetProxy* ptr = dynamic_cast<IPropertySetProxy*>((EarthView::World::Spatial::GeoDataset::IPropertySet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IPropertySet_clear_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IPropertySet_clear_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::IPropertySet* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IPropertySet*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::IPropertySet::clear();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IPropertySet*  _stdcall EarthView_World_Spatial_GeoDataset_IPropertySet_clone_IPropertySet(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IPropertySet* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IPropertySet*) pObjectXXXX;
					if (dynamic_cast<IPropertySetProxy*>((EarthView::World::Spatial::GeoDataset::IPropertySet*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IPropertySet* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IPropertySet::clone();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IPropertySet* objXXXX = ptrNativeObject->clone();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IPropertySet_clone_IPropertySet( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IPropertySet_clone_IPropertySet_Callback* pCallback )
				{
					IPropertySetProxy* ptr = dynamic_cast<IPropertySetProxy*>((EarthView::World::Spatial::GeoDataset::IPropertySet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IPropertySet_clone_IPropertySet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IPropertySet*  _stdcall EarthView_World_Spatial_GeoDataset_IPropertySet_clone_IPropertySet_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IPropertySet* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IPropertySet*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IPropertySet* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IPropertySet::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
			}
		}
	}
}
