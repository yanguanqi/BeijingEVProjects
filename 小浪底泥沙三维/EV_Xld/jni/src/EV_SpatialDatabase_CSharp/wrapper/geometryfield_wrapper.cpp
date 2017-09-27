/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialdatabase/geometryfield.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_setName_void_EVString_Callback)(_in char*& name);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_setCanNull_void_ev_bool_Callback)(_in ev_bool value);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_setCanEdit_void_ev_bool_Callback)(_in ev_bool value);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_setCanDelete_void_ev_bool_Callback)(_in ev_bool value);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_toStream_void_CDataStream_bool_Callback)(_inout void* stream, _in bool hasHead);
				typedef int  ( _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_getGeometryType_EVGeometryType_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_setGeometryType_void_EVGeometryType_Callback)(_in int type);
				typedef const EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_getSpatialReference_ISpatialReference_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_setSpatialReference_void_ISpatialReference_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef char*  ( _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_getAliasName_EVString_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_getFieldType_EVFieldType_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_getSize_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_getPrecision_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_getDescription_EVString_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_isRequest_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_canEdit_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_canDelete_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_canNull_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_setAliasName_void_EVString_Callback)(_in char*& name);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_setSize_void_ev_uint32_Callback)(_in ev_uint32 value);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_setPrecision_void_ev_uint32_Callback)(_in ev_uint32 value);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_setDescription_void_EVString_Callback)(_in char*& description);
				typedef void*  ( _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_getDefaultValue_CVariant_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_setDefaultValue_void_CVariant_Callback)(_in const void* defaultValue);
				typedef EarthView::World::Spatial::GeoDataset::IField*  ( _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_clone_IField_Callback)();
				class CGeometryFieldProxy : public EarthView::World::Spatial::GeoDataset::CGeometryField
				{
				private:
					EarthView_World_Spatial_GeoDataset_CGeometryField_setName_void_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_CGeometryField_setName_void_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_CGeometryField_setCanNull_void_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_CGeometryField_setCanNull_void_ev_bool_Callback;
					EarthView_World_Spatial_GeoDataset_CGeometryField_setCanEdit_void_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_CGeometryField_setCanEdit_void_ev_bool_Callback;
					EarthView_World_Spatial_GeoDataset_CGeometryField_setCanDelete_void_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_CGeometryField_setCanDelete_void_ev_bool_Callback;
					EarthView_World_Spatial_GeoDataset_CGeometryField_toStream_void_CDataStream_bool_Callback* m_EarthView_World_Spatial_GeoDataset_CGeometryField_toStream_void_CDataStream_bool_Callback;
					EarthView_World_Spatial_GeoDataset_CGeometryField_getGeometryType_EVGeometryType_Callback* m_EarthView_World_Spatial_GeoDataset_CGeometryField_getGeometryType_EVGeometryType_Callback;
					EarthView_World_Spatial_GeoDataset_CGeometryField_setGeometryType_void_EVGeometryType_Callback* m_EarthView_World_Spatial_GeoDataset_CGeometryField_setGeometryType_void_EVGeometryType_Callback;
					EarthView_World_Spatial_GeoDataset_CGeometryField_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_GeoDataset_CGeometryField_getSpatialReference_ISpatialReference_Callback;
					EarthView_World_Spatial_GeoDataset_CGeometryField_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial_GeoDataset_CGeometryField_setSpatialReference_void_ISpatialReference_Callback;
					EarthView_World_Spatial_GeoDataset_CGeometryField_getName_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_CGeometryField_getName_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_CGeometryField_getAliasName_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_CGeometryField_getAliasName_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_CGeometryField_getFieldType_EVFieldType_Callback* m_EarthView_World_Spatial_GeoDataset_CGeometryField_getFieldType_EVFieldType_Callback;
					EarthView_World_Spatial_GeoDataset_CGeometryField_getSize_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_CGeometryField_getSize_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_CGeometryField_getPrecision_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_CGeometryField_getPrecision_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_CGeometryField_getDescription_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_CGeometryField_getDescription_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_CGeometryField_isRequest_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_CGeometryField_isRequest_ev_bool_Callback;
					EarthView_World_Spatial_GeoDataset_CGeometryField_canEdit_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_CGeometryField_canEdit_ev_bool_Callback;
					EarthView_World_Spatial_GeoDataset_CGeometryField_canDelete_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_CGeometryField_canDelete_ev_bool_Callback;
					EarthView_World_Spatial_GeoDataset_CGeometryField_canNull_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_CGeometryField_canNull_ev_bool_Callback;
					EarthView_World_Spatial_GeoDataset_CGeometryField_setAliasName_void_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_CGeometryField_setAliasName_void_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_CGeometryField_setSize_void_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_CGeometryField_setSize_void_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_CGeometryField_setPrecision_void_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_CGeometryField_setPrecision_void_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_CGeometryField_setDescription_void_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_CGeometryField_setDescription_void_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_CGeometryField_getDefaultValue_CVariant_Callback* m_EarthView_World_Spatial_GeoDataset_CGeometryField_getDefaultValue_CVariant_Callback;
					EarthView_World_Spatial_GeoDataset_CGeometryField_setDefaultValue_void_CVariant_Callback* m_EarthView_World_Spatial_GeoDataset_CGeometryField_setDefaultValue_void_CVariant_Callback;
					EarthView_World_Spatial_GeoDataset_CGeometryField_clone_IField_Callback* m_EarthView_World_Spatial_GeoDataset_CGeometryField_clone_IField_Callback;
				public:
					CGeometryFieldProxy(EarthView::World::Core::CNameValuePairList *pList) : CGeometryField(pList)
					{
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_setCanNull_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_setCanEdit_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_setCanDelete_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_toStream_void_CDataStream_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_getGeometryType_EVGeometryType_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_setGeometryType_void_EVGeometryType_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_getSpatialReference_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_setSpatialReference_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_getAliasName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_getFieldType_EVFieldType_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_getSize_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_getPrecision_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_isRequest_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_canDelete_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_canNull_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_setAliasName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_setSize_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_setPrecision_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_setDescription_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_getDefaultValue_CVariant_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_setDefaultValue_void_CVariant_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_clone_IField_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_setName_void_EVString(EarthView_World_Spatial_GeoDataset_CGeometryField_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_setCanNull_void_ev_bool(EarthView_World_Spatial_GeoDataset_CGeometryField_setCanNull_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_setCanNull_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_setCanEdit_void_ev_bool(EarthView_World_Spatial_GeoDataset_CGeometryField_setCanEdit_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_setCanEdit_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_setCanDelete_void_ev_bool(EarthView_World_Spatial_GeoDataset_CGeometryField_setCanDelete_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_setCanDelete_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_toStream_void_CDataStream_bool(EarthView_World_Spatial_GeoDataset_CGeometryField_toStream_void_CDataStream_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_toStream_void_CDataStream_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_getGeometryType_EVGeometryType(EarthView_World_Spatial_GeoDataset_CGeometryField_getGeometryType_EVGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_getGeometryType_EVGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_setGeometryType_void_EVGeometryType(EarthView_World_Spatial_GeoDataset_CGeometryField_setGeometryType_void_EVGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_setGeometryType_void_EVGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_getSpatialReference_ISpatialReference(EarthView_World_Spatial_GeoDataset_CGeometryField_getSpatialReference_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_getSpatialReference_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial_GeoDataset_CGeometryField_setSpatialReference_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_setSpatialReference_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_getName_EVString(EarthView_World_Spatial_GeoDataset_CGeometryField_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_getAliasName_EVString(EarthView_World_Spatial_GeoDataset_CGeometryField_getAliasName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_getAliasName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_getFieldType_EVFieldType(EarthView_World_Spatial_GeoDataset_CGeometryField_getFieldType_EVFieldType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_getFieldType_EVFieldType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_getSize_ev_uint32(EarthView_World_Spatial_GeoDataset_CGeometryField_getSize_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_getSize_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_getPrecision_ev_uint32(EarthView_World_Spatial_GeoDataset_CGeometryField_getPrecision_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_getPrecision_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_getDescription_EVString(EarthView_World_Spatial_GeoDataset_CGeometryField_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_isRequest_ev_bool(EarthView_World_Spatial_GeoDataset_CGeometryField_isRequest_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_isRequest_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_canEdit_ev_bool(EarthView_World_Spatial_GeoDataset_CGeometryField_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_canDelete_ev_bool(EarthView_World_Spatial_GeoDataset_CGeometryField_canDelete_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_canDelete_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_canNull_ev_bool(EarthView_World_Spatial_GeoDataset_CGeometryField_canNull_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_canNull_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_setAliasName_void_EVString(EarthView_World_Spatial_GeoDataset_CGeometryField_setAliasName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_setAliasName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_setSize_void_ev_uint32(EarthView_World_Spatial_GeoDataset_CGeometryField_setSize_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_setSize_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_setPrecision_void_ev_uint32(EarthView_World_Spatial_GeoDataset_CGeometryField_setPrecision_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_setPrecision_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_setDescription_void_EVString(EarthView_World_Spatial_GeoDataset_CGeometryField_setDescription_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_setDescription_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_getDefaultValue_CVariant(EarthView_World_Spatial_GeoDataset_CGeometryField_getDefaultValue_CVariant_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_getDefaultValue_CVariant_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_setDefaultValue_void_CVariant(EarthView_World_Spatial_GeoDataset_CGeometryField_setDefaultValue_void_CVariant_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_setDefaultValue_void_CVariant_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_clone_IField(EarthView_World_Spatial_GeoDataset_CGeometryField_clone_IField_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CGeometryField_clone_IField_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CGeometryField_getGeometryType_EVGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVGeometryType)m_EarthView_World_Spatial_GeoDataset_CGeometryField_getGeometryType_EVGeometryType_Callback();
							return returnValue;
						}
						else
							return this->CGeometryField::getGeometryType();
					}
					virtual void setGeometryType(_in EarthView::World::Spatial::Geometry::EVGeometryType type)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CGeometryField_setGeometryType_void_EVGeometryType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_CGeometryField_setGeometryType_void_EVGeometryType_Callback((int)type);
						}
						else
							return this->CGeometryField::setGeometryType(type);
					}
					virtual const EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CGeometryField_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_GeoDataset_CGeometryField_getSpatialReference_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CGeometryField::getSpatialReference();
					}
					virtual void setSpatialReference(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CGeometryField_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_CGeometryField_setSpatialReference_void_ISpatialReference_Callback(ref_sr);
						}
						else
							return this->CGeometryField::setSpatialReference(ref_sr);
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CGeometryField_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_GeoDataset_CGeometryField_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CGeometryField::getName();
					}
					virtual EVString getAliasName() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CGeometryField_getAliasName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_GeoDataset_CGeometryField_getAliasName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CGeometryField::getAliasName();
					}
					virtual EarthView::World::Spatial::GeoDataset::EVFieldType getFieldType() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CGeometryField_getFieldType_EVFieldType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVFieldType returnValue = (EarthView::World::Spatial::GeoDataset::EVFieldType)m_EarthView_World_Spatial_GeoDataset_CGeometryField_getFieldType_EVFieldType_Callback();
							return returnValue;
						}
						else
							return this->CGeometryField::getFieldType();
					}
					virtual ev_uint32 getSize() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CGeometryField_getSize_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_GeoDataset_CGeometryField_getSize_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CGeometryField::getSize();
					}
					virtual ev_uint32 getPrecision() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CGeometryField_getPrecision_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_GeoDataset_CGeometryField_getPrecision_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CGeometryField::getPrecision();
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CGeometryField_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_GeoDataset_CGeometryField_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->CGeometryField::getDescription();
					}
					virtual ev_bool isRequest() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CGeometryField_isRequest_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_CGeometryField_isRequest_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CGeometryField::isRequest();
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CGeometryField_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_CGeometryField_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CGeometryField::canEdit();
					}
					virtual ev_bool canDelete() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CGeometryField_canDelete_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_CGeometryField_canDelete_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CGeometryField::canDelete();
					}
					virtual ev_bool canNull() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CGeometryField_canNull_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_CGeometryField_canNull_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CGeometryField::canNull();
					}
					virtual void setAliasName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CGeometryField_setAliasName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial_GeoDataset_CGeometryField_setAliasName_void_EVString_Callback(name_Char);
						}
						else
							return this->CGeometryField::setAliasName(name);
					}
					virtual void setSize(_in ev_uint32 value)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CGeometryField_setSize_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_CGeometryField_setSize_void_ev_uint32_Callback(value);
						}
						else
							return this->CGeometryField::setSize(value);
					}
					virtual void setPrecision(_in ev_uint32 value)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CGeometryField_setPrecision_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_CGeometryField_setPrecision_void_ev_uint32_Callback(value);
						}
						else
							return this->CGeometryField::setPrecision(value);
					}
					virtual void setDescription(_in const EVString& description)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CGeometryField_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* description_Char = description.makeBuffer();
							m_EarthView_World_Spatial_GeoDataset_CGeometryField_setDescription_void_EVString_Callback(description_Char);
						}
						else
							return this->CGeometryField::setDescription(description);
					}
					virtual EarthView::World::Spatial::GeoDataset::IField* clone() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CGeometryField_clone_IField_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IField* returnValue = m_EarthView_World_Spatial_GeoDataset_CGeometryField_clone_IField_Callback();
							return returnValue;
						}
						else
							return this->CGeometryField::clone();
					}
					virtual void setName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CGeometryField_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial_GeoDataset_CGeometryField_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->CGeometryField::setName(name);
					}
					virtual void setCanNull(_in ev_bool value)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CGeometryField_setCanNull_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_CGeometryField_setCanNull_void_ev_bool_Callback(value);
						}
						else
							return this->CGeometryField::setCanNull(value);
					}
					virtual void setCanEdit(_in ev_bool value)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CGeometryField_setCanEdit_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_CGeometryField_setCanEdit_void_ev_bool_Callback(value);
						}
						else
							return this->CGeometryField::setCanEdit(value);
					}
					virtual void setCanDelete(_in ev_bool value)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CGeometryField_setCanDelete_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_CGeometryField_setCanDelete_void_ev_bool_Callback(value);
						}
						else
							return this->CGeometryField::setCanDelete(value);
					}
					virtual void toStream(_inout EarthView::World::Core::CDataStream& stream, _in bool hasHead) const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CGeometryField_toStream_void_CDataStream_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_CGeometryField_toStream_void_CDataStream_bool_Callback(&stream, hasHead);
						}
						else
							return this->CGeometryField::toStream(stream, hasHead);
					}
					virtual EarthView::World::Core::CVariant getDefaultValue() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CGeometryField_getDefaultValue_CVariant_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CVariant returnValue = *(EarthView::World::Core::CVariant*)m_EarthView_World_Spatial_GeoDataset_CGeometryField_getDefaultValue_CVariant_Callback();
							return returnValue;
						}
						else
							return this->CGeometryField::getDefaultValue();
					}
					virtual void setDefaultValue(_in const EarthView::World::Core::CVariant& defaultValue)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CGeometryField_setDefaultValue_void_CVariant_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_CGeometryField_setDefaultValue_void_CVariant_Callback(&defaultValue);
						}
						else
							return this->CGeometryField::setDefaultValue(defaultValue);
					}
				};
				REGISTER_FACTORY_CLASS(CGeometryFieldProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_getGeometryType_EVGeometryType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					if (dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::getGeometryType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->getGeometryType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_getGeometryType_EVGeometryType( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CGeometryField_getGeometryType_EVGeometryType_Callback* pCallback )
				{
					CGeometryFieldProxy* ptr = dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_getGeometryType_EVGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_getGeometryType_EVGeometryType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::getGeometryType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_setGeometryType_void_EVGeometryType(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					if (dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::setGeometryType((EarthView::World::Spatial::Geometry::EVGeometryType)type);
					else
						ptrNativeObject->setGeometryType((EarthView::World::Spatial::Geometry::EVGeometryType)type);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_setGeometryType_void_EVGeometryType( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CGeometryField_setGeometryType_void_EVGeometryType_Callback* pCallback )
				{
					CGeometryFieldProxy* ptr = dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_setGeometryType_void_EVGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_setGeometryType_void_EVGeometryType_NoVirtual(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::setGeometryType((EarthView::World::Spatial::Geometry::EVGeometryType)type);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_getSpatialReference_ISpatialReference(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					if (dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::getSpatialReference();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CGeometryField_getSpatialReference_ISpatialReference_Callback* pCallback )
				{
					CGeometryFieldProxy* ptr = dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_getSpatialReference_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_getSpatialReference_ISpatialReference_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::getSpatialReference();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_setSpatialReference_void_ISpatialReference(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr )
				{
					EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					if (dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::setSpatialReference(ref_sr);
					else
						ptrNativeObject->setSpatialReference(ref_sr);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CGeometryField_setSpatialReference_void_ISpatialReference_Callback* pCallback )
				{
					CGeometryFieldProxy* ptr = dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_setSpatialReference_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_setSpatialReference_void_ISpatialReference_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr )
				{
					EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::setSpatialReference(ref_sr);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					if (dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CGeometryField_getName_EVString_Callback* pCallback )
				{
					CGeometryFieldProxy* ptr = dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_getAliasName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					if (dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::getAliasName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getAliasName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_getAliasName_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CGeometryField_getAliasName_EVString_Callback* pCallback )
				{
					CGeometryFieldProxy* ptr = dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_getAliasName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_getAliasName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::getAliasName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_getFieldType_EVFieldType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					if (dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::EVFieldType objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::getFieldType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVFieldType objXXXX = ptrNativeObject->getFieldType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_getFieldType_EVFieldType( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CGeometryField_getFieldType_EVFieldType_Callback* pCallback )
				{
					CGeometryFieldProxy* ptr = dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_getFieldType_EVFieldType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_getFieldType_EVFieldType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVFieldType objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::getFieldType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_getSize_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					if (dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::getSize();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getSize();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_getSize_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CGeometryField_getSize_ev_uint32_Callback* pCallback )
				{
					CGeometryFieldProxy* ptr = dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_getSize_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_getSize_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::getSize();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_getPrecision_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					if (dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::getPrecision();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getPrecision();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_getPrecision_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CGeometryField_getPrecision_ev_uint32_Callback* pCallback )
				{
					CGeometryFieldProxy* ptr = dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_getPrecision_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_getPrecision_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::getPrecision();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_getDescription_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					if (dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::getDescription();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getDescription();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CGeometryField_getDescription_EVString_Callback* pCallback )
				{
					CGeometryFieldProxy* ptr = dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_getDescription_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::getDescription();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_isRequest_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					if (dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::isRequest();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isRequest();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_isRequest_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CGeometryField_isRequest_ev_bool_Callback* pCallback )
				{
					CGeometryFieldProxy* ptr = dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_isRequest_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_isRequest_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::isRequest();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_canEdit_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					if (dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::canEdit();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->canEdit();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CGeometryField_canEdit_ev_bool_Callback* pCallback )
				{
					CGeometryFieldProxy* ptr = dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_canEdit_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::canEdit();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_canDelete_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					if (dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::canDelete();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->canDelete();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_canDelete_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CGeometryField_canDelete_ev_bool_Callback* pCallback )
				{
					CGeometryFieldProxy* ptr = dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_canDelete_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_canDelete_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::canDelete();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_canNull_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					if (dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::canNull();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->canNull();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_canNull_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CGeometryField_canNull_ev_bool_Callback* pCallback )
				{
					CGeometryFieldProxy* ptr = dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_canNull_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_canNull_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::canNull();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_setAliasName_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					if (dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::setAliasName(name1);
					else
						ptrNativeObject->setAliasName(name1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_setAliasName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CGeometryField_setAliasName_void_EVString_Callback* pCallback )
				{
					CGeometryFieldProxy* ptr = dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_setAliasName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_setAliasName_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::setAliasName(name1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_setSize_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 value )
				{
					EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					if (dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::setSize(value);
					else
						ptrNativeObject->setSize(value);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_setSize_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CGeometryField_setSize_void_ev_uint32_Callback* pCallback )
				{
					CGeometryFieldProxy* ptr = dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_setSize_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_setSize_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 value )
				{
					EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::setSize(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_setPrecision_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 value )
				{
					EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					if (dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::setPrecision(value);
					else
						ptrNativeObject->setPrecision(value);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_setPrecision_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CGeometryField_setPrecision_void_ev_uint32_Callback* pCallback )
				{
					CGeometryFieldProxy* ptr = dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_setPrecision_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_setPrecision_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 value )
				{
					EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::setPrecision(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_setDescription_void_EVString(void *pObjectXXXX, _in const char* description )
				{
					EarthView::World::Core::ev_string description1 = description;
					EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					if (dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::setDescription(description1);
					else
						ptrNativeObject->setDescription(description1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CGeometryField_setDescription_void_EVString_Callback* pCallback )
				{
					CGeometryFieldProxy* ptr = dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_setDescription_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_setDescription_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* description )
				{
					EarthView::World::Core::ev_string description1 = description;
					EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::setDescription(description1);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_clone_IField(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					if (dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_clone_IField( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CGeometryField_clone_IField_Callback* pCallback )
				{
					CGeometryFieldProxy* ptr = dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_clone_IField(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_clone_IField_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_setName_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					if (dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::setName(name1);
					else
						ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CGeometryField_setName_void_EVString_Callback* pCallback )
				{
					CGeometryFieldProxy* ptr = dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_setName_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::setName(name1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_setCanNull_void_ev_bool(void *pObjectXXXX, _in ev_bool value )
				{
					EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					if (dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::setCanNull(value);
					else
						ptrNativeObject->setCanNull(value);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_setCanNull_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CGeometryField_setCanNull_void_ev_bool_Callback* pCallback )
				{
					CGeometryFieldProxy* ptr = dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_setCanNull_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_setCanNull_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool value )
				{
					EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::setCanNull(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_setCanEdit_void_ev_bool(void *pObjectXXXX, _in ev_bool value )
				{
					EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					if (dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::setCanEdit(value);
					else
						ptrNativeObject->setCanEdit(value);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_setCanEdit_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CGeometryField_setCanEdit_void_ev_bool_Callback* pCallback )
				{
					CGeometryFieldProxy* ptr = dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_setCanEdit_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_setCanEdit_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool value )
				{
					EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::setCanEdit(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_setCanDelete_void_ev_bool(void *pObjectXXXX, _in ev_bool value )
				{
					EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					if (dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::setCanDelete(value);
					else
						ptrNativeObject->setCanDelete(value);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_setCanDelete_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CGeometryField_setCanDelete_void_ev_bool_Callback* pCallback )
				{
					CGeometryFieldProxy* ptr = dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_setCanDelete_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_setCanDelete_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool value )
				{
					EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::setCanDelete(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_toStream_void_CDataStream_bool(void *pObjectXXXX, _inout void* stream, _in bool hasHead )
				{
					const EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					if (dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::toStream(*(EarthView::World::Core::CDataStream*)stream, hasHead);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream, hasHead);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_toStream_void_CDataStream_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CGeometryField_toStream_void_CDataStream_bool_Callback* pCallback )
				{
					CGeometryFieldProxy* ptr = dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_toStream_void_CDataStream_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CGeometryField_toStream_void_CDataStream_bool_NoVirtual(void *pObjectXXXX, _inout void* stream, _in bool hasHead )
				{
					const EarthView::World::Spatial::GeoDataset::CGeometryField* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::CGeometryField::toStream(*(EarthView::World::Core::CDataStream*)stream, hasHead);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_getDefaultValue_CVariant( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CGeometryField_getDefaultValue_CVariant_Callback* pCallback )
				{
					CGeometryFieldProxy* ptr = dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_getDefaultValue_CVariant(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_setDefaultValue_void_CVariant( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CGeometryField_setDefaultValue_void_CVariant_Callback* pCallback )
				{
					CGeometryFieldProxy* ptr = dynamic_cast<CGeometryFieldProxy*>((EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CGeometryField_setDefaultValue_void_CVariant(pCallback);
					}
				}
			}
		}
	}
}
