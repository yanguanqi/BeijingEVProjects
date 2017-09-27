/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/ifield.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
				typedef char*  ( _stdcall EarthView_World_Spatial_GeoDataset_IField_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_GeoDataset_IField_getAliasName_EVString_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_GeoDataset_IField_getFieldType_EVFieldType_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_GeoDataset_IField_getSize_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_GeoDataset_IField_getPrecision_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_GeoDataset_IField_getDescription_EVString_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_IField_isRequest_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_IField_canEdit_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_IField_canDelete_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_IField_canNull_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_IField_setAliasName_void_EVString_Callback)(_in char*& name);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_IField_setSize_void_ev_uint32_Callback)(_in ev_uint32 value);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_IField_setPrecision_void_ev_uint32_Callback)(_in ev_uint32 value);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_IField_setDescription_void_EVString_Callback)(_in char*& description);
				typedef void*  ( _stdcall EarthView_World_Spatial_GeoDataset_IField_getDefaultValue_CVariant_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_IField_setDefaultValue_void_CVariant_Callback)(_in const void* defaultValue);
				typedef EarthView::World::Spatial::GeoDataset::IField*  ( _stdcall EarthView_World_Spatial_GeoDataset_IField_clone_IField_Callback)();
				class IFieldProxy : public EarthView::World::Spatial::GeoDataset::IField
				{
				private:
					EarthView_World_Spatial_GeoDataset_IField_getName_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_IField_getName_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_IField_getAliasName_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_IField_getAliasName_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_IField_getFieldType_EVFieldType_Callback* m_EarthView_World_Spatial_GeoDataset_IField_getFieldType_EVFieldType_Callback;
					EarthView_World_Spatial_GeoDataset_IField_getSize_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_IField_getSize_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_IField_getPrecision_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_IField_getPrecision_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_IField_getDescription_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_IField_getDescription_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_IField_isRequest_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_IField_isRequest_ev_bool_Callback;
					EarthView_World_Spatial_GeoDataset_IField_canEdit_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_IField_canEdit_ev_bool_Callback;
					EarthView_World_Spatial_GeoDataset_IField_canDelete_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_IField_canDelete_ev_bool_Callback;
					EarthView_World_Spatial_GeoDataset_IField_canNull_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_IField_canNull_ev_bool_Callback;
					EarthView_World_Spatial_GeoDataset_IField_setAliasName_void_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_IField_setAliasName_void_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_IField_setSize_void_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_IField_setSize_void_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_IField_setPrecision_void_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_IField_setPrecision_void_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_IField_setDescription_void_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_IField_setDescription_void_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_IField_getDefaultValue_CVariant_Callback* m_EarthView_World_Spatial_GeoDataset_IField_getDefaultValue_CVariant_Callback;
					EarthView_World_Spatial_GeoDataset_IField_setDefaultValue_void_CVariant_Callback* m_EarthView_World_Spatial_GeoDataset_IField_setDefaultValue_void_CVariant_Callback;
					EarthView_World_Spatial_GeoDataset_IField_clone_IField_Callback* m_EarthView_World_Spatial_GeoDataset_IField_clone_IField_Callback;
				public:
					IFieldProxy(EarthView::World::Core::CNameValuePairList *pList) : IField(pList)
					{
						m_EarthView_World_Spatial_GeoDataset_IField_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IField_getAliasName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IField_getFieldType_EVFieldType_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IField_getSize_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IField_getPrecision_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IField_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IField_isRequest_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IField_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IField_canDelete_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IField_canNull_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IField_setAliasName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IField_setSize_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IField_setPrecision_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IField_setDescription_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IField_getDefaultValue_CVariant_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IField_setDefaultValue_void_CVariant_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IField_clone_IField_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(IFieldProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IField_getName_EVString(EarthView_World_Spatial_GeoDataset_IField_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IField_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IField_getAliasName_EVString(EarthView_World_Spatial_GeoDataset_IField_getAliasName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IField_getAliasName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IField_getFieldType_EVFieldType(EarthView_World_Spatial_GeoDataset_IField_getFieldType_EVFieldType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IField_getFieldType_EVFieldType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IField_getSize_ev_uint32(EarthView_World_Spatial_GeoDataset_IField_getSize_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IField_getSize_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IField_getPrecision_ev_uint32(EarthView_World_Spatial_GeoDataset_IField_getPrecision_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IField_getPrecision_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IField_getDescription_EVString(EarthView_World_Spatial_GeoDataset_IField_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IField_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IField_isRequest_ev_bool(EarthView_World_Spatial_GeoDataset_IField_isRequest_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IField_isRequest_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IField_canEdit_ev_bool(EarthView_World_Spatial_GeoDataset_IField_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IField_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IField_canDelete_ev_bool(EarthView_World_Spatial_GeoDataset_IField_canDelete_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IField_canDelete_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IField_canNull_ev_bool(EarthView_World_Spatial_GeoDataset_IField_canNull_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IField_canNull_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IField_setAliasName_void_EVString(EarthView_World_Spatial_GeoDataset_IField_setAliasName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IField_setAliasName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IField_setSize_void_ev_uint32(EarthView_World_Spatial_GeoDataset_IField_setSize_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IField_setSize_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IField_setPrecision_void_ev_uint32(EarthView_World_Spatial_GeoDataset_IField_setPrecision_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IField_setPrecision_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IField_setDescription_void_EVString(EarthView_World_Spatial_GeoDataset_IField_setDescription_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IField_setDescription_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IField_getDefaultValue_CVariant(EarthView_World_Spatial_GeoDataset_IField_getDefaultValue_CVariant_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IField_getDefaultValue_CVariant_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IField_setDefaultValue_void_CVariant(EarthView_World_Spatial_GeoDataset_IField_setDefaultValue_void_CVariant_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IField_setDefaultValue_void_CVariant_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IField_clone_IField(EarthView_World_Spatial_GeoDataset_IField_clone_IField_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IField_clone_IField_Callback = pCallback;
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IField_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_GeoDataset_IField_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->IField::getName();
					}
					virtual EVString getAliasName() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IField_getAliasName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_GeoDataset_IField_getAliasName_EVString_Callback();
							return returnValue;
						}
						else
							return this->IField::getAliasName();
					}
					virtual EarthView::World::Spatial::GeoDataset::EVFieldType getFieldType() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IField_getFieldType_EVFieldType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVFieldType returnValue = (EarthView::World::Spatial::GeoDataset::EVFieldType)m_EarthView_World_Spatial_GeoDataset_IField_getFieldType_EVFieldType_Callback();
							return returnValue;
						}
						else
							return this->IField::getFieldType();
					}
					virtual ev_uint32 getSize() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IField_getSize_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_GeoDataset_IField_getSize_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->IField::getSize();
					}
					virtual ev_uint32 getPrecision() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IField_getPrecision_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_GeoDataset_IField_getPrecision_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->IField::getPrecision();
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IField_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_GeoDataset_IField_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->IField::getDescription();
					}
					virtual ev_bool isRequest() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IField_isRequest_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_IField_isRequest_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IField::isRequest();
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IField_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_IField_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IField::canEdit();
					}
					virtual ev_bool canDelete() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IField_canDelete_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_IField_canDelete_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IField::canDelete();
					}
					virtual ev_bool canNull() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IField_canNull_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_IField_canNull_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IField::canNull();
					}
					virtual void setAliasName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IField_setAliasName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial_GeoDataset_IField_setAliasName_void_EVString_Callback(name_Char);
						}
						else
							return this->IField::setAliasName(name);
					}
					virtual void setSize(_in ev_uint32 value)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IField_setSize_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_IField_setSize_void_ev_uint32_Callback(value);
						}
						else
							return this->IField::setSize(value);
					}
					virtual void setPrecision(_in ev_uint32 value)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IField_setPrecision_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_IField_setPrecision_void_ev_uint32_Callback(value);
						}
						else
							return this->IField::setPrecision(value);
					}
					virtual void setDescription(_in const EVString& description)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IField_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* description_Char = description.makeBuffer();
							m_EarthView_World_Spatial_GeoDataset_IField_setDescription_void_EVString_Callback(description_Char);
						}
						else
							return this->IField::setDescription(description);
					}
					virtual EarthView::World::Core::CVariant getDefaultValue() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IField_getDefaultValue_CVariant_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CVariant returnValue = *(EarthView::World::Core::CVariant*)m_EarthView_World_Spatial_GeoDataset_IField_getDefaultValue_CVariant_Callback();
							return returnValue;
						}
						else
							return this->IField::getDefaultValue();
					}
					virtual void setDefaultValue(_in const EarthView::World::Core::CVariant& defaultValue)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IField_setDefaultValue_void_CVariant_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_IField_setDefaultValue_void_CVariant_Callback(&defaultValue);
						}
						else
							return this->IField::setDefaultValue(defaultValue);
					}
					virtual EarthView::World::Spatial::GeoDataset::IField* clone() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IField_clone_IField_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IField* returnValue = m_EarthView_World_Spatial_GeoDataset_IField_clone_IField_Callback();
							return returnValue;
						}
						else
							return this->IField::clone();
					}
				};
				REGISTER_FACTORY_CLASS(IFieldProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_IField_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX;
					if (dynamic_cast<IFieldProxy*>((EarthView::World::Spatial::GeoDataset::IField*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IField::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IField_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IField_getName_EVString_Callback* pCallback )
				{
					IFieldProxy* ptr = dynamic_cast<IFieldProxy*>((EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IField_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_IField_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IField::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_IField_getAliasName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX;
					if (dynamic_cast<IFieldProxy*>((EarthView::World::Spatial::GeoDataset::IField*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IField::getAliasName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getAliasName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IField_getAliasName_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IField_getAliasName_EVString_Callback* pCallback )
				{
					IFieldProxy* ptr = dynamic_cast<IFieldProxy*>((EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IField_getAliasName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_IField_getAliasName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IField::getAliasName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_IField_getFieldType_EVFieldType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX;
					if (dynamic_cast<IFieldProxy*>((EarthView::World::Spatial::GeoDataset::IField*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::EVFieldType objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IField::getFieldType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVFieldType objXXXX = ptrNativeObject->getFieldType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IField_getFieldType_EVFieldType( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IField_getFieldType_EVFieldType_Callback* pCallback )
				{
					IFieldProxy* ptr = dynamic_cast<IFieldProxy*>((EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IField_getFieldType_EVFieldType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_IField_getFieldType_EVFieldType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVFieldType objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IField::getFieldType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_IField_getSize_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX;
					if (dynamic_cast<IFieldProxy*>((EarthView::World::Spatial::GeoDataset::IField*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IField::getSize();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getSize();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IField_getSize_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IField_getSize_ev_uint32_Callback* pCallback )
				{
					IFieldProxy* ptr = dynamic_cast<IFieldProxy*>((EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IField_getSize_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_IField_getSize_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IField::getSize();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_IField_getPrecision_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX;
					if (dynamic_cast<IFieldProxy*>((EarthView::World::Spatial::GeoDataset::IField*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IField::getPrecision();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getPrecision();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IField_getPrecision_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IField_getPrecision_ev_uint32_Callback* pCallback )
				{
					IFieldProxy* ptr = dynamic_cast<IFieldProxy*>((EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IField_getPrecision_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_IField_getPrecision_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IField::getPrecision();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_IField_getDescription_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX;
					if (dynamic_cast<IFieldProxy*>((EarthView::World::Spatial::GeoDataset::IField*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IField::getDescription();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getDescription();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IField_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IField_getDescription_EVString_Callback* pCallback )
				{
					IFieldProxy* ptr = dynamic_cast<IFieldProxy*>((EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IField_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_IField_getDescription_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IField::getDescription();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IField_isRequest_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX;
					if (dynamic_cast<IFieldProxy*>((EarthView::World::Spatial::GeoDataset::IField*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IField::isRequest();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isRequest();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IField_isRequest_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IField_isRequest_ev_bool_Callback* pCallback )
				{
					IFieldProxy* ptr = dynamic_cast<IFieldProxy*>((EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IField_isRequest_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IField_isRequest_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IField::isRequest();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IField_canEdit_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX;
					if (dynamic_cast<IFieldProxy*>((EarthView::World::Spatial::GeoDataset::IField*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IField::canEdit();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->canEdit();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IField_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IField_canEdit_ev_bool_Callback* pCallback )
				{
					IFieldProxy* ptr = dynamic_cast<IFieldProxy*>((EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IField_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IField_canEdit_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IField::canEdit();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IField_canDelete_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX;
					if (dynamic_cast<IFieldProxy*>((EarthView::World::Spatial::GeoDataset::IField*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IField::canDelete();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->canDelete();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IField_canDelete_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IField_canDelete_ev_bool_Callback* pCallback )
				{
					IFieldProxy* ptr = dynamic_cast<IFieldProxy*>((EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IField_canDelete_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IField_canDelete_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IField::canDelete();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IField_canNull_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX;
					if (dynamic_cast<IFieldProxy*>((EarthView::World::Spatial::GeoDataset::IField*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IField::canNull();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->canNull();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IField_canNull_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IField_canNull_ev_bool_Callback* pCallback )
				{
					IFieldProxy* ptr = dynamic_cast<IFieldProxy*>((EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IField_canNull_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IField_canNull_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IField::canNull();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IField_setAliasName_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::GeoDataset::IField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX;
					if (dynamic_cast<IFieldProxy*>((EarthView::World::Spatial::GeoDataset::IField*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::IField::setAliasName(name1);
					else
						ptrNativeObject->setAliasName(name1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IField_setAliasName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IField_setAliasName_void_EVString_Callback* pCallback )
				{
					IFieldProxy* ptr = dynamic_cast<IFieldProxy*>((EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IField_setAliasName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IField_setAliasName_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::GeoDataset::IField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::IField::setAliasName(name1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IField_setSize_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 value )
				{
					EarthView::World::Spatial::GeoDataset::IField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX;
					if (dynamic_cast<IFieldProxy*>((EarthView::World::Spatial::GeoDataset::IField*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::IField::setSize(value);
					else
						ptrNativeObject->setSize(value);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IField_setSize_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IField_setSize_void_ev_uint32_Callback* pCallback )
				{
					IFieldProxy* ptr = dynamic_cast<IFieldProxy*>((EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IField_setSize_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IField_setSize_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 value )
				{
					EarthView::World::Spatial::GeoDataset::IField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::IField::setSize(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IField_setPrecision_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 value )
				{
					EarthView::World::Spatial::GeoDataset::IField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX;
					if (dynamic_cast<IFieldProxy*>((EarthView::World::Spatial::GeoDataset::IField*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::IField::setPrecision(value);
					else
						ptrNativeObject->setPrecision(value);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IField_setPrecision_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IField_setPrecision_void_ev_uint32_Callback* pCallback )
				{
					IFieldProxy* ptr = dynamic_cast<IFieldProxy*>((EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IField_setPrecision_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IField_setPrecision_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 value )
				{
					EarthView::World::Spatial::GeoDataset::IField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::IField::setPrecision(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IField_setDescription_void_EVString(void *pObjectXXXX, _in const char* description )
				{
					EarthView::World::Core::ev_string description1 = description;
					EarthView::World::Spatial::GeoDataset::IField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX;
					if (dynamic_cast<IFieldProxy*>((EarthView::World::Spatial::GeoDataset::IField*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::IField::setDescription(description1);
					else
						ptrNativeObject->setDescription(description1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IField_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IField_setDescription_void_EVString_Callback* pCallback )
				{
					IFieldProxy* ptr = dynamic_cast<IFieldProxy*>((EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IField_setDescription_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IField_setDescription_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* description )
				{
					EarthView::World::Core::ev_string description1 = description;
					EarthView::World::Spatial::GeoDataset::IField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::IField::setDescription(description1);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_GeoDataset_IField_getDefaultValue_CVariant(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX;
					if (dynamic_cast<IFieldProxy*>((EarthView::World::Spatial::GeoDataset::IField*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CVariant objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IField::getDefaultValue();
						EarthView::World::Core::CVariant *pXXXX = new EarthView::World::Core::CVariant(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Core::CVariant objXXXX = ptrNativeObject->getDefaultValue();
						EarthView::World::Core::CVariant *pXXXX = new EarthView::World::Core::CVariant(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IField_getDefaultValue_CVariant( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IField_getDefaultValue_CVariant_Callback* pCallback )
				{
					IFieldProxy* ptr = dynamic_cast<IFieldProxy*>((EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IField_getDefaultValue_CVariant(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_GeoDataset_IField_getDefaultValue_CVariant_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX;
					EarthView::World::Core::CVariant objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IField::getDefaultValue();
					EarthView::World::Core::CVariant *pXXXX = new EarthView::World::Core::CVariant(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IField_setDefaultValue_void_CVariant(void *pObjectXXXX, _in const void* defaultValue )
				{
					EarthView::World::Spatial::GeoDataset::IField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX;
					if (dynamic_cast<IFieldProxy*>((EarthView::World::Spatial::GeoDataset::IField*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::IField::setDefaultValue(*(EarthView::World::Core::CVariant*)defaultValue);
					else
						ptrNativeObject->setDefaultValue(*(EarthView::World::Core::CVariant*)defaultValue);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IField_setDefaultValue_void_CVariant( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IField_setDefaultValue_void_CVariant_Callback* pCallback )
				{
					IFieldProxy* ptr = dynamic_cast<IFieldProxy*>((EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IField_setDefaultValue_void_CVariant(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IField_setDefaultValue_void_CVariant_NoVirtual(void *pObjectXXXX, _in const void* defaultValue )
				{
					EarthView::World::Spatial::GeoDataset::IField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::IField::setDefaultValue(*(EarthView::World::Core::CVariant*)defaultValue);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial_GeoDataset_IField_clone_IField(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX;
					if (dynamic_cast<IFieldProxy*>((EarthView::World::Spatial::GeoDataset::IField*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IField::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IField_clone_IField( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IField_clone_IField_Callback* pCallback )
				{
					IFieldProxy* ptr = dynamic_cast<IFieldProxy*>((EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IField_clone_IField(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial_GeoDataset_IField_clone_IField_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IField*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IField::clone();
					return objXXXX;
				}
			}
		}
	}
}
