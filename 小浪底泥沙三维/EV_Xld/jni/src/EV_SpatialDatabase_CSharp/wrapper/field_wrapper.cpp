/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialdatabase/field.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Geometry
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_CField_release_void_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_GeoDataset_CField_toXML_EVString_bool_Callback)(_in bool isSegment);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_CField_toStream_void_CDataStream_bool_Callback)(_inout void* stream, _in bool hasHead);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_CField_toStream_void_CDataStream_Callback)(_inout void* stream);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_CField_setName_void_EVString_Callback)(_in char*& name);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_CField_setCanNull_void_ev_bool_Callback)(_in ev_bool value);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_CField_setCanEdit_void_ev_bool_Callback)(_in ev_bool value);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_CField_setCanDelete_void_ev_bool_Callback)(_in ev_bool value);
				typedef char*  ( _stdcall EarthView_World_Spatial_GeoDataset_CField_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_GeoDataset_CField_getAliasName_EVString_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_GeoDataset_CField_getFieldType_EVFieldType_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_GeoDataset_CField_getSize_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_GeoDataset_CField_getPrecision_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_GeoDataset_CField_getDescription_EVString_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_CField_isRequest_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_CField_canEdit_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_CField_canDelete_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_CField_canNull_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_CField_setAliasName_void_EVString_Callback)(_in char*& name);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_CField_setSize_void_ev_uint32_Callback)(_in ev_uint32 value);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_CField_setPrecision_void_ev_uint32_Callback)(_in ev_uint32 value);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_CField_setDescription_void_EVString_Callback)(_in char*& description);
				typedef void*  ( _stdcall EarthView_World_Spatial_GeoDataset_CField_getDefaultValue_CVariant_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_CField_setDefaultValue_void_CVariant_Callback)(_in const void* defaultValue);
				typedef EarthView::World::Spatial::GeoDataset::IField*  ( _stdcall EarthView_World_Spatial_GeoDataset_CField_clone_IField_Callback)();
				class CFieldProxy : public EarthView::World::Spatial::GeoDataset::CField
				{
				private:
					EarthView_World_Spatial_GeoDataset_CField_release_void_Callback* m_EarthView_World_Spatial_GeoDataset_CField_release_void_Callback;
					EarthView_World_Spatial_GeoDataset_CField_toXML_EVString_bool_Callback* m_EarthView_World_Spatial_GeoDataset_CField_toXML_EVString_bool_Callback;
					EarthView_World_Spatial_GeoDataset_CField_toStream_void_CDataStream_bool_Callback* m_EarthView_World_Spatial_GeoDataset_CField_toStream_void_CDataStream_bool_Callback;
					EarthView_World_Spatial_GeoDataset_CField_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_GeoDataset_CField_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_GeoDataset_CField_setName_void_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_CField_setName_void_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_CField_setCanNull_void_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_CField_setCanNull_void_ev_bool_Callback;
					EarthView_World_Spatial_GeoDataset_CField_setCanEdit_void_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_CField_setCanEdit_void_ev_bool_Callback;
					EarthView_World_Spatial_GeoDataset_CField_setCanDelete_void_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_CField_setCanDelete_void_ev_bool_Callback;
					EarthView_World_Spatial_GeoDataset_CField_getName_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_CField_getName_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_CField_getAliasName_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_CField_getAliasName_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_CField_getFieldType_EVFieldType_Callback* m_EarthView_World_Spatial_GeoDataset_CField_getFieldType_EVFieldType_Callback;
					EarthView_World_Spatial_GeoDataset_CField_getSize_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_CField_getSize_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_CField_getPrecision_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_CField_getPrecision_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_CField_getDescription_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_CField_getDescription_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_CField_isRequest_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_CField_isRequest_ev_bool_Callback;
					EarthView_World_Spatial_GeoDataset_CField_canEdit_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_CField_canEdit_ev_bool_Callback;
					EarthView_World_Spatial_GeoDataset_CField_canDelete_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_CField_canDelete_ev_bool_Callback;
					EarthView_World_Spatial_GeoDataset_CField_canNull_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_CField_canNull_ev_bool_Callback;
					EarthView_World_Spatial_GeoDataset_CField_setAliasName_void_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_CField_setAliasName_void_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_CField_setSize_void_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_CField_setSize_void_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_CField_setPrecision_void_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_CField_setPrecision_void_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_CField_setDescription_void_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_CField_setDescription_void_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_CField_getDefaultValue_CVariant_Callback* m_EarthView_World_Spatial_GeoDataset_CField_getDefaultValue_CVariant_Callback;
					EarthView_World_Spatial_GeoDataset_CField_setDefaultValue_void_CVariant_Callback* m_EarthView_World_Spatial_GeoDataset_CField_setDefaultValue_void_CVariant_Callback;
					EarthView_World_Spatial_GeoDataset_CField_clone_IField_Callback* m_EarthView_World_Spatial_GeoDataset_CField_clone_IField_Callback;
				public:
					CFieldProxy(EarthView::World::Core::CNameValuePairList *pList) : CField(pList)
					{
						m_EarthView_World_Spatial_GeoDataset_CField_release_void_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CField_toXML_EVString_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CField_toStream_void_CDataStream_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CField_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CField_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CField_setCanNull_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CField_setCanEdit_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CField_setCanDelete_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CField_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CField_getAliasName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CField_getFieldType_EVFieldType_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CField_getSize_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CField_getPrecision_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CField_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CField_isRequest_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CField_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CField_canDelete_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CField_canNull_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CField_setAliasName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CField_setSize_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CField_setPrecision_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CField_setDescription_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CField_getDefaultValue_CVariant_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CField_setDefaultValue_void_CVariant_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CField_clone_IField_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CField_release_void(EarthView_World_Spatial_GeoDataset_CField_release_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CField_release_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CField_toXML_EVString_bool(EarthView_World_Spatial_GeoDataset_CField_toXML_EVString_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CField_toXML_EVString_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CField_toStream_void_CDataStream_bool(EarthView_World_Spatial_GeoDataset_CField_toStream_void_CDataStream_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CField_toStream_void_CDataStream_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CField_toStream_void_CDataStream(EarthView_World_Spatial_GeoDataset_CField_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CField_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CField_setName_void_EVString(EarthView_World_Spatial_GeoDataset_CField_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CField_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CField_setCanNull_void_ev_bool(EarthView_World_Spatial_GeoDataset_CField_setCanNull_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CField_setCanNull_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CField_setCanEdit_void_ev_bool(EarthView_World_Spatial_GeoDataset_CField_setCanEdit_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CField_setCanEdit_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CField_setCanDelete_void_ev_bool(EarthView_World_Spatial_GeoDataset_CField_setCanDelete_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CField_setCanDelete_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CField_getName_EVString(EarthView_World_Spatial_GeoDataset_CField_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CField_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CField_getAliasName_EVString(EarthView_World_Spatial_GeoDataset_CField_getAliasName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CField_getAliasName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CField_getFieldType_EVFieldType(EarthView_World_Spatial_GeoDataset_CField_getFieldType_EVFieldType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CField_getFieldType_EVFieldType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CField_getSize_ev_uint32(EarthView_World_Spatial_GeoDataset_CField_getSize_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CField_getSize_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CField_getPrecision_ev_uint32(EarthView_World_Spatial_GeoDataset_CField_getPrecision_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CField_getPrecision_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CField_getDescription_EVString(EarthView_World_Spatial_GeoDataset_CField_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CField_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CField_isRequest_ev_bool(EarthView_World_Spatial_GeoDataset_CField_isRequest_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CField_isRequest_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CField_canEdit_ev_bool(EarthView_World_Spatial_GeoDataset_CField_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CField_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CField_canDelete_ev_bool(EarthView_World_Spatial_GeoDataset_CField_canDelete_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CField_canDelete_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CField_canNull_ev_bool(EarthView_World_Spatial_GeoDataset_CField_canNull_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CField_canNull_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CField_setAliasName_void_EVString(EarthView_World_Spatial_GeoDataset_CField_setAliasName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CField_setAliasName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CField_setSize_void_ev_uint32(EarthView_World_Spatial_GeoDataset_CField_setSize_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CField_setSize_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CField_setPrecision_void_ev_uint32(EarthView_World_Spatial_GeoDataset_CField_setPrecision_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CField_setPrecision_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CField_setDescription_void_EVString(EarthView_World_Spatial_GeoDataset_CField_setDescription_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CField_setDescription_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CField_getDefaultValue_CVariant(EarthView_World_Spatial_GeoDataset_CField_getDefaultValue_CVariant_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CField_getDefaultValue_CVariant_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CField_setDefaultValue_void_CVariant(EarthView_World_Spatial_GeoDataset_CField_setDefaultValue_void_CVariant_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CField_setDefaultValue_void_CVariant_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CField_clone_IField(EarthView_World_Spatial_GeoDataset_CField_clone_IField_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CField_clone_IField_Callback = pCallback;
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CField_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_GeoDataset_CField_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CField::getName();
					}
					virtual EVString getAliasName() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CField_getAliasName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_GeoDataset_CField_getAliasName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CField::getAliasName();
					}
					virtual EarthView::World::Spatial::GeoDataset::EVFieldType getFieldType() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CField_getFieldType_EVFieldType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVFieldType returnValue = (EarthView::World::Spatial::GeoDataset::EVFieldType)m_EarthView_World_Spatial_GeoDataset_CField_getFieldType_EVFieldType_Callback();
							return returnValue;
						}
						else
							return this->CField::getFieldType();
					}
					virtual ev_uint32 getSize() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CField_getSize_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_GeoDataset_CField_getSize_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CField::getSize();
					}
					virtual ev_uint32 getPrecision() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CField_getPrecision_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_GeoDataset_CField_getPrecision_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CField::getPrecision();
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CField_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_GeoDataset_CField_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->CField::getDescription();
					}
					virtual ev_bool isRequest() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CField_isRequest_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_CField_isRequest_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CField::isRequest();
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CField_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_CField_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CField::canEdit();
					}
					virtual ev_bool canDelete() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CField_canDelete_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_CField_canDelete_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CField::canDelete();
					}
					virtual ev_bool canNull() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CField_canNull_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_CField_canNull_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CField::canNull();
					}
					virtual void setAliasName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CField_setAliasName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial_GeoDataset_CField_setAliasName_void_EVString_Callback(name_Char);
						}
						else
							return this->CField::setAliasName(name);
					}
					virtual void setSize(_in ev_uint32 value)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CField_setSize_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_CField_setSize_void_ev_uint32_Callback(value);
						}
						else
							return this->CField::setSize(value);
					}
					virtual void setPrecision(_in ev_uint32 value)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CField_setPrecision_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_CField_setPrecision_void_ev_uint32_Callback(value);
						}
						else
							return this->CField::setPrecision(value);
					}
					virtual void setDescription(_in const EVString& description)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CField_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* description_Char = description.makeBuffer();
							m_EarthView_World_Spatial_GeoDataset_CField_setDescription_void_EVString_Callback(description_Char);
						}
						else
							return this->CField::setDescription(description);
					}
					virtual EarthView::World::Spatial::GeoDataset::IField* clone() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CField_clone_IField_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IField* returnValue = m_EarthView_World_Spatial_GeoDataset_CField_clone_IField_Callback();
							return returnValue;
						}
						else
							return this->CField::clone();
					}
					virtual void release()
					{
						if(m_EarthView_World_Spatial_GeoDataset_CField_release_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_CField_release_void_Callback();
						}
						else
							return this->CField::release();
					}
					virtual EVString toXML(_in bool isSegment) const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CField_toXML_EVString_bool_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_GeoDataset_CField_toXML_EVString_bool_Callback(isSegment);
							return returnValue;
						}
						else
							return this->CField::toXML(isSegment);
					}
					virtual void toStream(_inout EarthView::World::Core::CDataStream& stream, _in bool hasHead) const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CField_toStream_void_CDataStream_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_CField_toStream_void_CDataStream_bool_Callback(&stream, hasHead);
						}
						else
							return this->CField::toStream(stream, hasHead);
					}
					virtual void toStream(_inout EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CField_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_CField_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CField::toStream(stream);
					}
					virtual void setName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CField_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial_GeoDataset_CField_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->CField::setName(name);
					}
					virtual void setCanNull(_in ev_bool value)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CField_setCanNull_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_CField_setCanNull_void_ev_bool_Callback(value);
						}
						else
							return this->CField::setCanNull(value);
					}
					virtual void setCanEdit(_in ev_bool value)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CField_setCanEdit_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_CField_setCanEdit_void_ev_bool_Callback(value);
						}
						else
							return this->CField::setCanEdit(value);
					}
					virtual void setCanDelete(_in ev_bool value)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CField_setCanDelete_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_CField_setCanDelete_void_ev_bool_Callback(value);
						}
						else
							return this->CField::setCanDelete(value);
					}
					virtual EarthView::World::Core::CVariant getDefaultValue() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CField_getDefaultValue_CVariant_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CVariant returnValue = *(EarthView::World::Core::CVariant*)m_EarthView_World_Spatial_GeoDataset_CField_getDefaultValue_CVariant_Callback();
							return returnValue;
						}
						else
							return this->CField::getDefaultValue();
					}
					virtual void setDefaultValue(_in const EarthView::World::Core::CVariant& defaultValue)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CField_setDefaultValue_void_CVariant_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_CField_setDefaultValue_void_CVariant_Callback(&defaultValue);
						}
						else
							return this->CField::setDefaultValue(defaultValue);
					}
				};
				REGISTER_FACTORY_CLASS(CFieldProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_CField_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					if (dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CField_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CField_getName_EVString_Callback* pCallback )
				{
					CFieldProxy* ptr = dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CField_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_CField_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_CField_getAliasName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					if (dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::getAliasName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getAliasName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CField_getAliasName_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CField_getAliasName_EVString_Callback* pCallback )
				{
					CFieldProxy* ptr = dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CField_getAliasName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_CField_getAliasName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::getAliasName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_CField_getFieldType_EVFieldType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					if (dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::EVFieldType objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::getFieldType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVFieldType objXXXX = ptrNativeObject->getFieldType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CField_getFieldType_EVFieldType( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CField_getFieldType_EVFieldType_Callback* pCallback )
				{
					CFieldProxy* ptr = dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CField_getFieldType_EVFieldType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_CField_getFieldType_EVFieldType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVFieldType objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::getFieldType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_CField_getSize_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					if (dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::getSize();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getSize();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CField_getSize_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CField_getSize_ev_uint32_Callback* pCallback )
				{
					CFieldProxy* ptr = dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CField_getSize_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_CField_getSize_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::getSize();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_CField_getPrecision_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					if (dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::getPrecision();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getPrecision();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CField_getPrecision_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CField_getPrecision_ev_uint32_Callback* pCallback )
				{
					CFieldProxy* ptr = dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CField_getPrecision_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_CField_getPrecision_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::getPrecision();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_CField_getDescription_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					if (dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::getDescription();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getDescription();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CField_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CField_getDescription_EVString_Callback* pCallback )
				{
					CFieldProxy* ptr = dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CField_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_CField_getDescription_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::getDescription();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CField_isRequest_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					if (dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::isRequest();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isRequest();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CField_isRequest_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CField_isRequest_ev_bool_Callback* pCallback )
				{
					CFieldProxy* ptr = dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CField_isRequest_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CField_isRequest_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::isRequest();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CField_canEdit_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					if (dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::canEdit();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->canEdit();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CField_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CField_canEdit_ev_bool_Callback* pCallback )
				{
					CFieldProxy* ptr = dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CField_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CField_canEdit_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::canEdit();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CField_canDelete_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					if (dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::canDelete();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->canDelete();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CField_canDelete_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CField_canDelete_ev_bool_Callback* pCallback )
				{
					CFieldProxy* ptr = dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CField_canDelete_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CField_canDelete_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::canDelete();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CField_canNull_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					if (dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::canNull();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->canNull();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CField_canNull_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CField_canNull_ev_bool_Callback* pCallback )
				{
					CFieldProxy* ptr = dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CField_canNull_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CField_canNull_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::canNull();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CField_setAliasName_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					if (dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::setAliasName(name1);
					else
						ptrNativeObject->setAliasName(name1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CField_setAliasName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CField_setAliasName_void_EVString_Callback* pCallback )
				{
					CFieldProxy* ptr = dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CField_setAliasName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CField_setAliasName_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::setAliasName(name1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CField_setSize_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 value )
				{
					EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					if (dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::setSize(value);
					else
						ptrNativeObject->setSize(value);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CField_setSize_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CField_setSize_void_ev_uint32_Callback* pCallback )
				{
					CFieldProxy* ptr = dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CField_setSize_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CField_setSize_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 value )
				{
					EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::setSize(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CField_setPrecision_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 value )
				{
					EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					if (dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::setPrecision(value);
					else
						ptrNativeObject->setPrecision(value);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CField_setPrecision_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CField_setPrecision_void_ev_uint32_Callback* pCallback )
				{
					CFieldProxy* ptr = dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CField_setPrecision_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CField_setPrecision_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 value )
				{
					EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::setPrecision(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CField_setDescription_void_EVString(void *pObjectXXXX, _in const char* description )
				{
					EarthView::World::Core::ev_string description1 = description;
					EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					if (dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::setDescription(description1);
					else
						ptrNativeObject->setDescription(description1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CField_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CField_setDescription_void_EVString_Callback* pCallback )
				{
					CFieldProxy* ptr = dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CField_setDescription_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CField_setDescription_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* description )
				{
					EarthView::World::Core::ev_string description1 = description;
					EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::setDescription(description1);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial_GeoDataset_CField_clone_IField(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					if (dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CField_clone_IField( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CField_clone_IField_Callback* pCallback )
				{
					CFieldProxy* ptr = dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CField_clone_IField(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial_GeoDataset_CField_clone_IField_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CField_release_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					if (dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::release();
					else
						ptrNativeObject->release();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CField_release_void( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CField_release_void_Callback* pCallback )
				{
					CFieldProxy* ptr = dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CField_release_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CField_release_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::release();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_CField_toXML_EVString_bool(void *pObjectXXXX, _in bool isSegment )
				{
					const EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					if (dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::toXML(isSegment);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toXML(isSegment);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CField_toXML_EVString_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CField_toXML_EVString_bool_Callback* pCallback )
				{
					CFieldProxy* ptr = dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CField_toXML_EVString_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_CField_toXML_EVString_bool_NoVirtual(void *pObjectXXXX, _in bool isSegment )
				{
					const EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::toXML(isSegment);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CField_toStream_void_CDataStream_bool(void *pObjectXXXX, _inout void* stream, _in bool hasHead )
				{
					const EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					if (dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::toStream(*(EarthView::World::Core::CDataStream*)stream, hasHead);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream, hasHead);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CField_toStream_void_CDataStream_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CField_toStream_void_CDataStream_bool_Callback* pCallback )
				{
					CFieldProxy* ptr = dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CField_toStream_void_CDataStream_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CField_toStream_void_CDataStream_bool_NoVirtual(void *pObjectXXXX, _inout void* stream, _in bool hasHead )
				{
					const EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::toStream(*(EarthView::World::Core::CDataStream*)stream, hasHead);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CField_toStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					const EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					if (dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CField_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CField_toStream_void_CDataStream_Callback* pCallback )
				{
					CFieldProxy* ptr = dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CField_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CField_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					const EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::CField*  _stdcall EarthView_World_Spatial_GeoDataset_CField_fromStream_CField_CDataStream(_inout void* stream )
				{
					EarthView::World::Spatial::GeoDataset::CField* objXXXX = EarthView::World::Spatial::GeoDataset::CField::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CField_setName_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					if (dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::setName(name1);
					else
						ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CField_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CField_setName_void_EVString_Callback* pCallback )
				{
					CFieldProxy* ptr = dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CField_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CField_setName_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::setName(name1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CField_setCanNull_void_ev_bool(void *pObjectXXXX, _in ev_bool value )
				{
					EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					if (dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::setCanNull(value);
					else
						ptrNativeObject->setCanNull(value);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CField_setCanNull_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CField_setCanNull_void_ev_bool_Callback* pCallback )
				{
					CFieldProxy* ptr = dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CField_setCanNull_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CField_setCanNull_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool value )
				{
					EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::setCanNull(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CField_setCanEdit_void_ev_bool(void *pObjectXXXX, _in ev_bool value )
				{
					EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					if (dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::setCanEdit(value);
					else
						ptrNativeObject->setCanEdit(value);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CField_setCanEdit_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CField_setCanEdit_void_ev_bool_Callback* pCallback )
				{
					CFieldProxy* ptr = dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CField_setCanEdit_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CField_setCanEdit_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool value )
				{
					EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::setCanEdit(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CField_setCanDelete_void_ev_bool(void *pObjectXXXX, _in ev_bool value )
				{
					EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					if (dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::setCanDelete(value);
					else
						ptrNativeObject->setCanDelete(value);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CField_setCanDelete_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CField_setCanDelete_void_ev_bool_Callback* pCallback )
				{
					CFieldProxy* ptr = dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CField_setCanDelete_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CField_setCanDelete_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool value )
				{
					EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::setCanDelete(value);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_GeoDataset_CField_getDefaultValue_CVariant(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					if (dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CVariant objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::getDefaultValue();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CField_getDefaultValue_CVariant( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CField_getDefaultValue_CVariant_Callback* pCallback )
				{
					CFieldProxy* ptr = dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CField_getDefaultValue_CVariant(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_GeoDataset_CField_getDefaultValue_CVariant_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					EarthView::World::Core::CVariant objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::getDefaultValue();
					EarthView::World::Core::CVariant *pXXXX = new EarthView::World::Core::CVariant(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CField_setDefaultValue_void_CVariant(void *pObjectXXXX, _in const void* defaultValue )
				{
					EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					if (dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::setDefaultValue(*(EarthView::World::Core::CVariant*)defaultValue);
					else
						ptrNativeObject->setDefaultValue(*(EarthView::World::Core::CVariant*)defaultValue);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CField_setDefaultValue_void_CVariant( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CField_setDefaultValue_void_CVariant_Callback* pCallback )
				{
					CFieldProxy* ptr = dynamic_cast<CFieldProxy*>((EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CField_setDefaultValue_void_CVariant(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CField_setDefaultValue_void_CVariant_NoVirtual(void *pObjectXXXX, _in const void* defaultValue )
				{
					EarthView::World::Spatial::GeoDataset::CField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CField*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::CField::setDefaultValue(*(EarthView::World::Core::CVariant*)defaultValue);
				}
			}
		}
	}
}
