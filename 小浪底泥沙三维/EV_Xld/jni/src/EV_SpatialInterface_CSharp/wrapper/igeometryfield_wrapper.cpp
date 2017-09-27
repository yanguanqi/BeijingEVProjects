/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/igeometryfield.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
				typedef int  ( _stdcall EarthView_World_Spatial_GeoDataset_IGeometryField_getGeometryType_EVGeometryType_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_IGeometryField_setGeometryType_void_EVGeometryType_Callback)(_in int type);
				typedef const EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_GeoDataset_IGeometryField_getSpatialReference_ISpatialReference_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_IGeometryField_setSpatialReference_void_ISpatialReference_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef char*  ( _stdcall EarthView_World_Spatial_GeoDataset_IGeometryField_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_GeoDataset_IGeometryField_getAliasName_EVString_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_GeoDataset_IGeometryField_getFieldType_EVFieldType_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_GeoDataset_IGeometryField_getSize_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_GeoDataset_IGeometryField_getPrecision_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_GeoDataset_IGeometryField_getDescription_EVString_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_IGeometryField_isRequest_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_IGeometryField_canEdit_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_IGeometryField_canDelete_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_IGeometryField_canNull_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_IGeometryField_setAliasName_void_EVString_Callback)(_in char*& name);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_IGeometryField_setSize_void_ev_uint32_Callback)(_in ev_uint32 value);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_IGeometryField_setPrecision_void_ev_uint32_Callback)(_in ev_uint32 value);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_IGeometryField_setDescription_void_EVString_Callback)(_in char*& description);
				typedef void*  ( _stdcall EarthView_World_Spatial_GeoDataset_IGeometryField_getDefaultValue_CVariant_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_IGeometryField_setDefaultValue_void_CVariant_Callback)(_in const void* defaultValue);
				typedef EarthView::World::Spatial::GeoDataset::IField*  ( _stdcall EarthView_World_Spatial_GeoDataset_IGeometryField_clone_IField_Callback)();
				class IGeometryFieldProxy : public EarthView::World::Spatial::GeoDataset::IGeometryField
				{
				private:
					EarthView_World_Spatial_GeoDataset_IGeometryField_getGeometryType_EVGeometryType_Callback* m_EarthView_World_Spatial_GeoDataset_IGeometryField_getGeometryType_EVGeometryType_Callback;
					EarthView_World_Spatial_GeoDataset_IGeometryField_setGeometryType_void_EVGeometryType_Callback* m_EarthView_World_Spatial_GeoDataset_IGeometryField_setGeometryType_void_EVGeometryType_Callback;
					EarthView_World_Spatial_GeoDataset_IGeometryField_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_GeoDataset_IGeometryField_getSpatialReference_ISpatialReference_Callback;
					EarthView_World_Spatial_GeoDataset_IGeometryField_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial_GeoDataset_IGeometryField_setSpatialReference_void_ISpatialReference_Callback;
					EarthView_World_Spatial_GeoDataset_IGeometryField_getName_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_IGeometryField_getName_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_IGeometryField_getAliasName_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_IGeometryField_getAliasName_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_IGeometryField_getFieldType_EVFieldType_Callback* m_EarthView_World_Spatial_GeoDataset_IGeometryField_getFieldType_EVFieldType_Callback;
					EarthView_World_Spatial_GeoDataset_IGeometryField_getSize_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_IGeometryField_getSize_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_IGeometryField_getPrecision_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_IGeometryField_getPrecision_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_IGeometryField_getDescription_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_IGeometryField_getDescription_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_IGeometryField_isRequest_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_IGeometryField_isRequest_ev_bool_Callback;
					EarthView_World_Spatial_GeoDataset_IGeometryField_canEdit_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_IGeometryField_canEdit_ev_bool_Callback;
					EarthView_World_Spatial_GeoDataset_IGeometryField_canDelete_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_IGeometryField_canDelete_ev_bool_Callback;
					EarthView_World_Spatial_GeoDataset_IGeometryField_canNull_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_IGeometryField_canNull_ev_bool_Callback;
					EarthView_World_Spatial_GeoDataset_IGeometryField_setAliasName_void_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_IGeometryField_setAliasName_void_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_IGeometryField_setSize_void_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_IGeometryField_setSize_void_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_IGeometryField_setPrecision_void_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_IGeometryField_setPrecision_void_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_IGeometryField_setDescription_void_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_IGeometryField_setDescription_void_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_IGeometryField_getDefaultValue_CVariant_Callback* m_EarthView_World_Spatial_GeoDataset_IGeometryField_getDefaultValue_CVariant_Callback;
					EarthView_World_Spatial_GeoDataset_IGeometryField_setDefaultValue_void_CVariant_Callback* m_EarthView_World_Spatial_GeoDataset_IGeometryField_setDefaultValue_void_CVariant_Callback;
					EarthView_World_Spatial_GeoDataset_IGeometryField_clone_IField_Callback* m_EarthView_World_Spatial_GeoDataset_IGeometryField_clone_IField_Callback;
				public:
					IGeometryFieldProxy(EarthView::World::Core::CNameValuePairList *pList) : IGeometryField(pList)
					{
						m_EarthView_World_Spatial_GeoDataset_IGeometryField_getGeometryType_EVGeometryType_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IGeometryField_setGeometryType_void_EVGeometryType_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IGeometryField_getSpatialReference_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IGeometryField_setSpatialReference_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IGeometryField_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IGeometryField_getAliasName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IGeometryField_getFieldType_EVFieldType_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IGeometryField_getSize_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IGeometryField_getPrecision_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IGeometryField_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IGeometryField_isRequest_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IGeometryField_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IGeometryField_canDelete_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IGeometryField_canNull_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IGeometryField_setAliasName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IGeometryField_setSize_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IGeometryField_setPrecision_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IGeometryField_setDescription_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IGeometryField_getDefaultValue_CVariant_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IGeometryField_setDefaultValue_void_CVariant_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IGeometryField_clone_IField_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_getGeometryType_EVGeometryType(EarthView_World_Spatial_GeoDataset_IGeometryField_getGeometryType_EVGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IGeometryField_getGeometryType_EVGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_setGeometryType_void_EVGeometryType(EarthView_World_Spatial_GeoDataset_IGeometryField_setGeometryType_void_EVGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IGeometryField_setGeometryType_void_EVGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_getSpatialReference_ISpatialReference(EarthView_World_Spatial_GeoDataset_IGeometryField_getSpatialReference_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IGeometryField_getSpatialReference_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial_GeoDataset_IGeometryField_setSpatialReference_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IGeometryField_setSpatialReference_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_getName_EVString(EarthView_World_Spatial_GeoDataset_IGeometryField_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IGeometryField_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_getAliasName_EVString(EarthView_World_Spatial_GeoDataset_IGeometryField_getAliasName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IGeometryField_getAliasName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_getFieldType_EVFieldType(EarthView_World_Spatial_GeoDataset_IGeometryField_getFieldType_EVFieldType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IGeometryField_getFieldType_EVFieldType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_getSize_ev_uint32(EarthView_World_Spatial_GeoDataset_IGeometryField_getSize_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IGeometryField_getSize_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_getPrecision_ev_uint32(EarthView_World_Spatial_GeoDataset_IGeometryField_getPrecision_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IGeometryField_getPrecision_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_getDescription_EVString(EarthView_World_Spatial_GeoDataset_IGeometryField_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IGeometryField_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_isRequest_ev_bool(EarthView_World_Spatial_GeoDataset_IGeometryField_isRequest_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IGeometryField_isRequest_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_canEdit_ev_bool(EarthView_World_Spatial_GeoDataset_IGeometryField_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IGeometryField_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_canDelete_ev_bool(EarthView_World_Spatial_GeoDataset_IGeometryField_canDelete_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IGeometryField_canDelete_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_canNull_ev_bool(EarthView_World_Spatial_GeoDataset_IGeometryField_canNull_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IGeometryField_canNull_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_setAliasName_void_EVString(EarthView_World_Spatial_GeoDataset_IGeometryField_setAliasName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IGeometryField_setAliasName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_setSize_void_ev_uint32(EarthView_World_Spatial_GeoDataset_IGeometryField_setSize_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IGeometryField_setSize_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_setPrecision_void_ev_uint32(EarthView_World_Spatial_GeoDataset_IGeometryField_setPrecision_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IGeometryField_setPrecision_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_setDescription_void_EVString(EarthView_World_Spatial_GeoDataset_IGeometryField_setDescription_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IGeometryField_setDescription_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_getDefaultValue_CVariant(EarthView_World_Spatial_GeoDataset_IGeometryField_getDefaultValue_CVariant_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IGeometryField_getDefaultValue_CVariant_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_setDefaultValue_void_CVariant(EarthView_World_Spatial_GeoDataset_IGeometryField_setDefaultValue_void_CVariant_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IGeometryField_setDefaultValue_void_CVariant_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_clone_IField(EarthView_World_Spatial_GeoDataset_IGeometryField_clone_IField_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IGeometryField_clone_IField_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IGeometryField_getGeometryType_EVGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVGeometryType)m_EarthView_World_Spatial_GeoDataset_IGeometryField_getGeometryType_EVGeometryType_Callback();
							return returnValue;
						}
						else
							return this->IGeometryField::getGeometryType();
					}
					virtual void setGeometryType(_in EarthView::World::Spatial::Geometry::EVGeometryType type)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IGeometryField_setGeometryType_void_EVGeometryType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_IGeometryField_setGeometryType_void_EVGeometryType_Callback((int)type);
						}
						else
							return this->IGeometryField::setGeometryType(type);
					}
					virtual const EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IGeometryField_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_GeoDataset_IGeometryField_getSpatialReference_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->IGeometryField::getSpatialReference();
					}
					virtual void setSpatialReference(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IGeometryField_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_IGeometryField_setSpatialReference_void_ISpatialReference_Callback(ref_sr);
						}
						else
							return this->IGeometryField::setSpatialReference(ref_sr);
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IGeometryField_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_GeoDataset_IGeometryField_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->IGeometryField::getName();
					}
					virtual EVString getAliasName() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IGeometryField_getAliasName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_GeoDataset_IGeometryField_getAliasName_EVString_Callback();
							return returnValue;
						}
						else
							return this->IGeometryField::getAliasName();
					}
					virtual EarthView::World::Spatial::GeoDataset::EVFieldType getFieldType() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IGeometryField_getFieldType_EVFieldType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVFieldType returnValue = (EarthView::World::Spatial::GeoDataset::EVFieldType)m_EarthView_World_Spatial_GeoDataset_IGeometryField_getFieldType_EVFieldType_Callback();
							return returnValue;
						}
						else
							return this->IGeometryField::getFieldType();
					}
					virtual ev_uint32 getSize() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IGeometryField_getSize_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_GeoDataset_IGeometryField_getSize_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->IGeometryField::getSize();
					}
					virtual ev_uint32 getPrecision() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IGeometryField_getPrecision_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_GeoDataset_IGeometryField_getPrecision_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->IGeometryField::getPrecision();
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IGeometryField_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_GeoDataset_IGeometryField_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->IGeometryField::getDescription();
					}
					virtual ev_bool isRequest() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IGeometryField_isRequest_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_IGeometryField_isRequest_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IGeometryField::isRequest();
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IGeometryField_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_IGeometryField_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IGeometryField::canEdit();
					}
					virtual ev_bool canDelete() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IGeometryField_canDelete_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_IGeometryField_canDelete_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IGeometryField::canDelete();
					}
					virtual ev_bool canNull() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IGeometryField_canNull_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_IGeometryField_canNull_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IGeometryField::canNull();
					}
					virtual void setAliasName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IGeometryField_setAliasName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial_GeoDataset_IGeometryField_setAliasName_void_EVString_Callback(name_Char);
						}
						else
							return this->IGeometryField::setAliasName(name);
					}
					virtual void setSize(_in ev_uint32 value)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IGeometryField_setSize_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_IGeometryField_setSize_void_ev_uint32_Callback(value);
						}
						else
							return this->IGeometryField::setSize(value);
					}
					virtual void setPrecision(_in ev_uint32 value)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IGeometryField_setPrecision_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_IGeometryField_setPrecision_void_ev_uint32_Callback(value);
						}
						else
							return this->IGeometryField::setPrecision(value);
					}
					virtual void setDescription(_in const EVString& description)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IGeometryField_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* description_Char = description.makeBuffer();
							m_EarthView_World_Spatial_GeoDataset_IGeometryField_setDescription_void_EVString_Callback(description_Char);
						}
						else
							return this->IGeometryField::setDescription(description);
					}
					virtual EarthView::World::Core::CVariant getDefaultValue() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IGeometryField_getDefaultValue_CVariant_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CVariant returnValue = *(EarthView::World::Core::CVariant*)m_EarthView_World_Spatial_GeoDataset_IGeometryField_getDefaultValue_CVariant_Callback();
							return returnValue;
						}
						else
							return this->IGeometryField::getDefaultValue();
					}
					virtual void setDefaultValue(_in const EarthView::World::Core::CVariant& defaultValue)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IGeometryField_setDefaultValue_void_CVariant_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_IGeometryField_setDefaultValue_void_CVariant_Callback(&defaultValue);
						}
						else
							return this->IGeometryField::setDefaultValue(defaultValue);
					}
					virtual EarthView::World::Spatial::GeoDataset::IField* clone() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IGeometryField_clone_IField_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IField* returnValue = m_EarthView_World_Spatial_GeoDataset_IGeometryField_clone_IField_Callback();
							return returnValue;
						}
						else
							return this->IGeometryField::clone();
					}
				};
				REGISTER_FACTORY_CLASS(IGeometryFieldProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_IGeometryField_getGeometryType_EVGeometryType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IGeometryField*) pObjectXXXX;
					if (dynamic_cast<IGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::IGeometryField*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IGeometryField::getGeometryType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->getGeometryType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_getGeometryType_EVGeometryType( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IGeometryField_getGeometryType_EVGeometryType_Callback* pCallback )
				{
					IGeometryFieldProxy* ptr = dynamic_cast<IGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::IGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_getGeometryType_EVGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_IGeometryField_getGeometryType_EVGeometryType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IGeometryField*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IGeometryField::getGeometryType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IGeometryField_setGeometryType_void_EVGeometryType(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial::GeoDataset::IGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IGeometryField*) pObjectXXXX;
					if (dynamic_cast<IGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::IGeometryField*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::IGeometryField::setGeometryType((EarthView::World::Spatial::Geometry::EVGeometryType)type);
					else
						ptrNativeObject->setGeometryType((EarthView::World::Spatial::Geometry::EVGeometryType)type);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_setGeometryType_void_EVGeometryType( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IGeometryField_setGeometryType_void_EVGeometryType_Callback* pCallback )
				{
					IGeometryFieldProxy* ptr = dynamic_cast<IGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::IGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_setGeometryType_void_EVGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IGeometryField_setGeometryType_void_EVGeometryType_NoVirtual(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial::GeoDataset::IGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IGeometryField*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::IGeometryField::setGeometryType((EarthView::World::Spatial::Geometry::EVGeometryType)type);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_GeoDataset_IGeometryField_getSpatialReference_ISpatialReference(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IGeometryField*) pObjectXXXX;
					if (dynamic_cast<IGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::IGeometryField*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IGeometryField::getSpatialReference();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IGeometryField_getSpatialReference_ISpatialReference_Callback* pCallback )
				{
					IGeometryFieldProxy* ptr = dynamic_cast<IGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::IGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_getSpatialReference_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_GeoDataset_IGeometryField_getSpatialReference_ISpatialReference_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IGeometryField*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IGeometryField::getSpatialReference();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IGeometryField_setSpatialReference_void_ISpatialReference(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr )
				{
					EarthView::World::Spatial::GeoDataset::IGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IGeometryField*) pObjectXXXX;
					if (dynamic_cast<IGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::IGeometryField*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::IGeometryField::setSpatialReference(ref_sr);
					else
						ptrNativeObject->setSpatialReference(ref_sr);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IGeometryField_setSpatialReference_void_ISpatialReference_Callback* pCallback )
				{
					IGeometryFieldProxy* ptr = dynamic_cast<IGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::IGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_setSpatialReference_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IGeometryField_setSpatialReference_void_ISpatialReference_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr )
				{
					EarthView::World::Spatial::GeoDataset::IGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IGeometryField*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::IGeometryField::setSpatialReference(ref_sr);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IGeometryField_getName_EVString_Callback* pCallback )
				{
					IGeometryFieldProxy* ptr = dynamic_cast<IGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::IGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_getAliasName_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IGeometryField_getAliasName_EVString_Callback* pCallback )
				{
					IGeometryFieldProxy* ptr = dynamic_cast<IGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::IGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_getAliasName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_getFieldType_EVFieldType( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IGeometryField_getFieldType_EVFieldType_Callback* pCallback )
				{
					IGeometryFieldProxy* ptr = dynamic_cast<IGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::IGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_getFieldType_EVFieldType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_getSize_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IGeometryField_getSize_ev_uint32_Callback* pCallback )
				{
					IGeometryFieldProxy* ptr = dynamic_cast<IGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::IGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_getSize_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_getPrecision_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IGeometryField_getPrecision_ev_uint32_Callback* pCallback )
				{
					IGeometryFieldProxy* ptr = dynamic_cast<IGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::IGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_getPrecision_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IGeometryField_getDescription_EVString_Callback* pCallback )
				{
					IGeometryFieldProxy* ptr = dynamic_cast<IGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::IGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_isRequest_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IGeometryField_isRequest_ev_bool_Callback* pCallback )
				{
					IGeometryFieldProxy* ptr = dynamic_cast<IGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::IGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_isRequest_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IGeometryField_canEdit_ev_bool_Callback* pCallback )
				{
					IGeometryFieldProxy* ptr = dynamic_cast<IGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::IGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_canDelete_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IGeometryField_canDelete_ev_bool_Callback* pCallback )
				{
					IGeometryFieldProxy* ptr = dynamic_cast<IGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::IGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_canDelete_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_canNull_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IGeometryField_canNull_ev_bool_Callback* pCallback )
				{
					IGeometryFieldProxy* ptr = dynamic_cast<IGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::IGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_canNull_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_setAliasName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IGeometryField_setAliasName_void_EVString_Callback* pCallback )
				{
					IGeometryFieldProxy* ptr = dynamic_cast<IGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::IGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_setAliasName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_setSize_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IGeometryField_setSize_void_ev_uint32_Callback* pCallback )
				{
					IGeometryFieldProxy* ptr = dynamic_cast<IGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::IGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_setSize_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_setPrecision_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IGeometryField_setPrecision_void_ev_uint32_Callback* pCallback )
				{
					IGeometryFieldProxy* ptr = dynamic_cast<IGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::IGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_setPrecision_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IGeometryField_setDescription_void_EVString_Callback* pCallback )
				{
					IGeometryFieldProxy* ptr = dynamic_cast<IGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::IGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_setDescription_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_getDefaultValue_CVariant( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IGeometryField_getDefaultValue_CVariant_Callback* pCallback )
				{
					IGeometryFieldProxy* ptr = dynamic_cast<IGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::IGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_getDefaultValue_CVariant(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_setDefaultValue_void_CVariant( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IGeometryField_setDefaultValue_void_CVariant_Callback* pCallback )
				{
					IGeometryFieldProxy* ptr = dynamic_cast<IGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::IGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_setDefaultValue_void_CVariant(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_clone_IField( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IGeometryField_clone_IField_Callback* pCallback )
				{
					IGeometryFieldProxy* ptr = dynamic_cast<IGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::IGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IGeometryField_clone_IField(pCallback);
					}
				}
			}
		}
	}
}
