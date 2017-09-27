/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/ifields.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_GeoDataset_IFields_getCount_ev_uint32_Callback)();
				typedef const EarthView::World::Spatial::GeoDataset::IField*  ( _stdcall EarthView_World_Spatial_GeoDataset_IFields_getFieldRef_IField_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_GeoDataset_IFields_findField_ev_int32_EVString_Callback)(_in char*& fieldName);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_GeoDataset_IFields_addField_ev_uint32_IField_Callback)(_in const EarthView::World::Spatial::GeoDataset::IField* field);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_GeoDataset_IFields_removeField_ev_uint32_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_GeoDataset_IFields_clear_ev_uint32_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_IFields_moveField_ev_bool_ev_uint32_ev_uint32_Callback)(_in ev_uint32 srcIndex, _in ev_uint32 destIndex);
				typedef EarthView::World::Spatial::GeoDataset::IFields*  ( _stdcall EarthView_World_Spatial_GeoDataset_IFields_clone_IFields_Callback)();
				class IFieldsProxy : public EarthView::World::Spatial::GeoDataset::IFields
				{
				private:
					EarthView_World_Spatial_GeoDataset_IFields_getCount_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_IFields_getCount_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_IFields_getFieldRef_IField_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_IFields_getFieldRef_IField_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_IFields_findField_ev_int32_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_IFields_findField_ev_int32_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_IFields_addField_ev_uint32_IField_Callback* m_EarthView_World_Spatial_GeoDataset_IFields_addField_ev_uint32_IField_Callback;
					EarthView_World_Spatial_GeoDataset_IFields_removeField_ev_uint32_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_IFields_removeField_ev_uint32_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_IFields_clear_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_IFields_clear_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_IFields_moveField_ev_bool_ev_uint32_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_IFields_moveField_ev_bool_ev_uint32_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_IFields_clone_IFields_Callback* m_EarthView_World_Spatial_GeoDataset_IFields_clone_IFields_Callback;
				public:
					IFieldsProxy(EarthView::World::Core::CNameValuePairList *pList) : IFields(pList)
					{
						m_EarthView_World_Spatial_GeoDataset_IFields_getCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IFields_getFieldRef_IField_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IFields_findField_ev_int32_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IFields_addField_ev_uint32_IField_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IFields_removeField_ev_uint32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IFields_clear_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IFields_moveField_ev_bool_ev_uint32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IFields_clone_IFields_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IFields_getCount_ev_uint32(EarthView_World_Spatial_GeoDataset_IFields_getCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IFields_getCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IFields_getFieldRef_IField_ev_uint32(EarthView_World_Spatial_GeoDataset_IFields_getFieldRef_IField_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IFields_getFieldRef_IField_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IFields_findField_ev_int32_EVString(EarthView_World_Spatial_GeoDataset_IFields_findField_ev_int32_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IFields_findField_ev_int32_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IFields_addField_ev_uint32_IField(EarthView_World_Spatial_GeoDataset_IFields_addField_ev_uint32_IField_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IFields_addField_ev_uint32_IField_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IFields_removeField_ev_uint32_ev_uint32(EarthView_World_Spatial_GeoDataset_IFields_removeField_ev_uint32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IFields_removeField_ev_uint32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IFields_clear_ev_uint32(EarthView_World_Spatial_GeoDataset_IFields_clear_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IFields_clear_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IFields_moveField_ev_bool_ev_uint32_ev_uint32(EarthView_World_Spatial_GeoDataset_IFields_moveField_ev_bool_ev_uint32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IFields_moveField_ev_bool_ev_uint32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IFields_clone_IFields(EarthView_World_Spatial_GeoDataset_IFields_clone_IFields_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IFields_clone_IFields_Callback = pCallback;
					}
					virtual ev_uint32 getCount() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IFields_getCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_GeoDataset_IFields_getCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->IFields::getCount();
					}
					virtual const EarthView::World::Spatial::GeoDataset::IField* getFieldRef(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IFields_getFieldRef_IField_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IField* returnValue = m_EarthView_World_Spatial_GeoDataset_IFields_getFieldRef_IField_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->IFields::getFieldRef(index);
					}
					virtual ev_int32 findField(_in const EVString& fieldName) const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IFields_findField_ev_int32_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* fieldName_Char = fieldName.makeBuffer();
							ev_int32 returnValue = m_EarthView_World_Spatial_GeoDataset_IFields_findField_ev_int32_EVString_Callback(fieldName_Char);
							return returnValue;
						}
						else
							return this->IFields::findField(fieldName);
					}
					virtual ev_uint32 addField(_in const EarthView::World::Spatial::GeoDataset::IField* field)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IFields_addField_ev_uint32_IField_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_GeoDataset_IFields_addField_ev_uint32_IField_Callback(field);
							return returnValue;
						}
						else
							return this->IFields::addField(field);
					}
					virtual ev_uint32 removeField(_in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IFields_removeField_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_GeoDataset_IFields_removeField_ev_uint32_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->IFields::removeField(index);
					}
					virtual ev_uint32 clear()
					{
						if(m_EarthView_World_Spatial_GeoDataset_IFields_clear_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_GeoDataset_IFields_clear_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->IFields::clear();
					}
					virtual ev_bool moveField(_in ev_uint32 srcIndex, _in ev_uint32 destIndex)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IFields_moveField_ev_bool_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_IFields_moveField_ev_bool_ev_uint32_ev_uint32_Callback(srcIndex, destIndex);
							return returnValue;
						}
						else
							return this->IFields::moveField(srcIndex, destIndex);
					}
					virtual EarthView::World::Spatial::GeoDataset::IFields* clone() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IFields_clone_IFields_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFields* returnValue = m_EarthView_World_Spatial_GeoDataset_IFields_clone_IFields_Callback();
							return returnValue;
						}
						else
							return this->IFields::clone();
					}
				};
				REGISTER_FACTORY_CLASS(IFieldsProxy);
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_IFields_getCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IFields* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IFields*) pObjectXXXX;
					if (dynamic_cast<IFieldsProxy*>((EarthView::World::Spatial::GeoDataset::IFields*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IFields::getCount();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IFields_getCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IFields_getCount_ev_uint32_Callback* pCallback )
				{
					IFieldsProxy* ptr = dynamic_cast<IFieldsProxy*>((EarthView::World::Spatial::GeoDataset::IFields*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IFields_getCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_IFields_getCount_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IFields* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IFields*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IFields::getCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial_GeoDataset_IFields_getFieldRef_IField_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::GeoDataset::IFields* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IFields*) pObjectXXXX;
					if (dynamic_cast<IFieldsProxy*>((EarthView::World::Spatial::GeoDataset::IFields*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IFields::getFieldRef(index);
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->getFieldRef(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IFields_getFieldRef_IField_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IFields_getFieldRef_IField_ev_uint32_Callback* pCallback )
				{
					IFieldsProxy* ptr = dynamic_cast<IFieldsProxy*>((EarthView::World::Spatial::GeoDataset::IFields*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IFields_getFieldRef_IField_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial_GeoDataset_IFields_getFieldRef_IField_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::GeoDataset::IFields* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IFields*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IFields::getFieldRef(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_GeoDataset_IFields_findField_ev_int32_EVString(void *pObjectXXXX, _in const char* fieldName )
				{
					EarthView::World::Core::ev_string fieldName1 = fieldName;
					const EarthView::World::Spatial::GeoDataset::IFields* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IFields*) pObjectXXXX;
					if (dynamic_cast<IFieldsProxy*>((EarthView::World::Spatial::GeoDataset::IFields*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IFields::findField(fieldName1);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->findField(fieldName1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IFields_findField_ev_int32_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IFields_findField_ev_int32_EVString_Callback* pCallback )
				{
					IFieldsProxy* ptr = dynamic_cast<IFieldsProxy*>((EarthView::World::Spatial::GeoDataset::IFields*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IFields_findField_ev_int32_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_GeoDataset_IFields_findField_ev_int32_EVString_NoVirtual(void *pObjectXXXX, _in const char* fieldName )
				{
					EarthView::World::Core::ev_string fieldName1 = fieldName;
					const EarthView::World::Spatial::GeoDataset::IFields* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IFields*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IFields::findField(fieldName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_IFields_addField_ev_uint32_IField(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IField* field )
				{
					EarthView::World::Spatial::GeoDataset::IFields* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IFields*) pObjectXXXX;
					if (dynamic_cast<IFieldsProxy*>((EarthView::World::Spatial::GeoDataset::IFields*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IFields::addField(field);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->addField(field);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IFields_addField_ev_uint32_IField( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IFields_addField_ev_uint32_IField_Callback* pCallback )
				{
					IFieldsProxy* ptr = dynamic_cast<IFieldsProxy*>((EarthView::World::Spatial::GeoDataset::IFields*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IFields_addField_ev_uint32_IField(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_IFields_addField_ev_uint32_IField_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IField* field )
				{
					EarthView::World::Spatial::GeoDataset::IFields* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IFields*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IFields::addField(field);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_IFields_removeField_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::GeoDataset::IFields* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IFields*) pObjectXXXX;
					if (dynamic_cast<IFieldsProxy*>((EarthView::World::Spatial::GeoDataset::IFields*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IFields::removeField(index);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->removeField(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IFields_removeField_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IFields_removeField_ev_uint32_ev_uint32_Callback* pCallback )
				{
					IFieldsProxy* ptr = dynamic_cast<IFieldsProxy*>((EarthView::World::Spatial::GeoDataset::IFields*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IFields_removeField_ev_uint32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_IFields_removeField_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::GeoDataset::IFields* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IFields*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IFields::removeField(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_IFields_clear_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::IFields* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IFields*) pObjectXXXX;
					if (dynamic_cast<IFieldsProxy*>((EarthView::World::Spatial::GeoDataset::IFields*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IFields::clear();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->clear();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IFields_clear_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IFields_clear_ev_uint32_Callback* pCallback )
				{
					IFieldsProxy* ptr = dynamic_cast<IFieldsProxy*>((EarthView::World::Spatial::GeoDataset::IFields*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IFields_clear_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_IFields_clear_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::IFields* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IFields*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IFields::clear();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IFields_moveField_ev_bool_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 srcIndex, _in ev_uint32 destIndex )
				{
					EarthView::World::Spatial::GeoDataset::IFields* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IFields*) pObjectXXXX;
					if (dynamic_cast<IFieldsProxy*>((EarthView::World::Spatial::GeoDataset::IFields*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IFields::moveField(srcIndex, destIndex);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->moveField(srcIndex, destIndex);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IFields_moveField_ev_bool_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IFields_moveField_ev_bool_ev_uint32_ev_uint32_Callback* pCallback )
				{
					IFieldsProxy* ptr = dynamic_cast<IFieldsProxy*>((EarthView::World::Spatial::GeoDataset::IFields*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IFields_moveField_ev_bool_ev_uint32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IFields_moveField_ev_bool_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 srcIndex, _in ev_uint32 destIndex )
				{
					EarthView::World::Spatial::GeoDataset::IFields* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IFields*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IFields::moveField(srcIndex, destIndex);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFields*  _stdcall EarthView_World_Spatial_GeoDataset_IFields_clone_IFields(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IFields* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IFields*) pObjectXXXX;
					if (dynamic_cast<IFieldsProxy*>((EarthView::World::Spatial::GeoDataset::IFields*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IFields::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IFields_clone_IFields( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IFields_clone_IFields_Callback* pCallback )
				{
					IFieldsProxy* ptr = dynamic_cast<IFieldsProxy*>((EarthView::World::Spatial::GeoDataset::IFields*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IFields_clone_IFields(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFields*  _stdcall EarthView_World_Spatial_GeoDataset_IFields_clone_IFields_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IFields* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IFields*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IFields::clone();
					return objXXXX;
				}
			}
		}
	}
}
