/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataset/effectdatasource.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
			}
		}
		namespace Spatial3D
		{
			namespace Dataset
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Dataset
			{
				typedef int  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getGeometryType_EVGeometryType_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setGeometryType_void_EVGeometryType_Callback)(_in int type);
				typedef const EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getSpatialReference_ISpatialReference_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setSpatialReference_void_ISpatialReference_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getAliasName_EVString_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getFieldType_EVFieldType_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getSize_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getPrecision_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getDescription_EVString_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectGeometryField_isRequest_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectGeometryField_canEdit_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectGeometryField_canDelete_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectGeometryField_canNull_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setAliasName_void_EVString_Callback)(_in char*& name);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setSize_void_ev_uint32_Callback)(_in ev_uint32 value);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setPrecision_void_ev_uint32_Callback)(_in ev_uint32 value);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setDescription_void_EVString_Callback)(_in char*& description);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getDefaultValue_CVariant_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setDefaultValue_void_CVariant_Callback)(_in const void* defaultValue);
				typedef EarthView::World::Spatial::GeoDataset::IField*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectGeometryField_clone_IField_Callback)();
				class CEffectGeometryFieldProxy : public EarthView::World::Spatial3D::Dataset::CEffectGeometryField
				{
				private:
					EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getGeometryType_EVGeometryType_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getGeometryType_EVGeometryType_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setGeometryType_void_EVGeometryType_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setGeometryType_void_EVGeometryType_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getSpatialReference_ISpatialReference_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setSpatialReference_void_ISpatialReference_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getName_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getName_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getAliasName_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getAliasName_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getFieldType_EVFieldType_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getFieldType_EVFieldType_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getSize_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getSize_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getPrecision_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getPrecision_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getDescription_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getDescription_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectGeometryField_isRequest_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_isRequest_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectGeometryField_canEdit_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_canEdit_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectGeometryField_canDelete_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_canDelete_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectGeometryField_canNull_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_canNull_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setAliasName_void_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setAliasName_void_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setSize_void_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setSize_void_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setPrecision_void_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setPrecision_void_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setDescription_void_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setDescription_void_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getDefaultValue_CVariant_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getDefaultValue_CVariant_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setDefaultValue_void_CVariant_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setDefaultValue_void_CVariant_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectGeometryField_clone_IField_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_clone_IField_Callback;
				public:
					CEffectGeometryFieldProxy(EarthView::World::Core::CNameValuePairList *pList) : CEffectGeometryField(pList)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getGeometryType_EVGeometryType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setGeometryType_void_EVGeometryType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getSpatialReference_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setSpatialReference_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getAliasName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getFieldType_EVFieldType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getSize_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getPrecision_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_isRequest_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_canDelete_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_canNull_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setAliasName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setSize_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setPrecision_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setDescription_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getDefaultValue_CVariant_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setDefaultValue_void_CVariant_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_clone_IField_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getGeometryType_EVGeometryType(EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getGeometryType_EVGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getGeometryType_EVGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setGeometryType_void_EVGeometryType(EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setGeometryType_void_EVGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setGeometryType_void_EVGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getSpatialReference_ISpatialReference(EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getSpatialReference_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getSpatialReference_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setSpatialReference_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setSpatialReference_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getName_EVString(EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getAliasName_EVString(EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getAliasName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getAliasName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getFieldType_EVFieldType(EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getFieldType_EVFieldType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getFieldType_EVFieldType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getSize_ev_uint32(EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getSize_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getSize_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getPrecision_ev_uint32(EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getPrecision_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getPrecision_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getDescription_EVString(EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_isRequest_ev_bool(EarthView_World_Spatial3D_Dataset_CEffectGeometryField_isRequest_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_isRequest_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_canEdit_ev_bool(EarthView_World_Spatial3D_Dataset_CEffectGeometryField_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_canDelete_ev_bool(EarthView_World_Spatial3D_Dataset_CEffectGeometryField_canDelete_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_canDelete_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_canNull_ev_bool(EarthView_World_Spatial3D_Dataset_CEffectGeometryField_canNull_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_canNull_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setAliasName_void_EVString(EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setAliasName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setAliasName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setSize_void_ev_uint32(EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setSize_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setSize_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setPrecision_void_ev_uint32(EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setPrecision_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setPrecision_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setDescription_void_EVString(EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setDescription_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setDescription_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getDefaultValue_CVariant(EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getDefaultValue_CVariant_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getDefaultValue_CVariant_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setDefaultValue_void_CVariant(EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setDefaultValue_void_CVariant_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setDefaultValue_void_CVariant_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_clone_IField(EarthView_World_Spatial3D_Dataset_CEffectGeometryField_clone_IField_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_clone_IField_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getGeometryType_EVGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVGeometryType)m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getGeometryType_EVGeometryType_Callback();
							return returnValue;
						}
						else
							return this->CEffectGeometryField::getGeometryType();
					}
					virtual const EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getSpatialReference_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CEffectGeometryField::getSpatialReference();
					}
					virtual void setSpatialReference(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setSpatialReference_void_ISpatialReference_Callback(ref_sr);
						}
						else
							return this->CEffectGeometryField::setSpatialReference(ref_sr);
					}
					virtual void setGeometryType(_in EarthView::World::Spatial::Geometry::EVGeometryType type)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setGeometryType_void_EVGeometryType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setGeometryType_void_EVGeometryType_Callback((int)type);
						}
						else
							return this->CEffectGeometryField::setGeometryType(type);
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEffectGeometryField::getName();
					}
					virtual EVString getAliasName() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getAliasName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getAliasName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEffectGeometryField::getAliasName();
					}
					virtual EarthView::World::Spatial::GeoDataset::EVFieldType getFieldType() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getFieldType_EVFieldType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVFieldType returnValue = (EarthView::World::Spatial::GeoDataset::EVFieldType)m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getFieldType_EVFieldType_Callback();
							return returnValue;
						}
						else
							return this->CEffectGeometryField::getFieldType();
					}
					virtual ev_uint32 getSize() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getSize_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getSize_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CEffectGeometryField::getSize();
					}
					virtual ev_uint32 getPrecision() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getPrecision_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getPrecision_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CEffectGeometryField::getPrecision();
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEffectGeometryField::getDescription();
					}
					virtual ev_bool isRequest() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_isRequest_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_isRequest_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEffectGeometryField::isRequest();
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEffectGeometryField::canEdit();
					}
					virtual ev_bool canDelete() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_canDelete_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_canDelete_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEffectGeometryField::canDelete();
					}
					virtual ev_bool canNull() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_canNull_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_canNull_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEffectGeometryField::canNull();
					}
					virtual void setAliasName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setAliasName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setAliasName_void_EVString_Callback(name_Char);
						}
						else
							return this->CEffectGeometryField::setAliasName(name);
					}
					virtual void setSize(_in ev_uint32 value)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setSize_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setSize_void_ev_uint32_Callback(value);
						}
						else
							return this->CEffectGeometryField::setSize(value);
					}
					virtual void setPrecision(_in ev_uint32 value)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setPrecision_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setPrecision_void_ev_uint32_Callback(value);
						}
						else
							return this->CEffectGeometryField::setPrecision(value);
					}
					virtual void setDescription(_in const EVString& description)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* description_Char = description.makeBuffer();
							m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setDescription_void_EVString_Callback(description_Char);
						}
						else
							return this->CEffectGeometryField::setDescription(description);
					}
					virtual EarthView::World::Core::CVariant getDefaultValue() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getDefaultValue_CVariant_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CVariant returnValue = *(EarthView::World::Core::CVariant*)m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getDefaultValue_CVariant_Callback();
							return returnValue;
						}
						else
							return this->CEffectGeometryField::getDefaultValue();
					}
					virtual void setDefaultValue(_in const EarthView::World::Core::CVariant& defaultValue)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setDefaultValue_void_CVariant_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setDefaultValue_void_CVariant_Callback(&defaultValue);
						}
						else
							return this->CEffectGeometryField::setDefaultValue(defaultValue);
					}
					virtual EarthView::World::Spatial::GeoDataset::IField* clone() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_clone_IField_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IField* returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_clone_IField_Callback();
							return returnValue;
						}
						else
							return this->CEffectGeometryField::clone();
					}
				};
				REGISTER_FACTORY_CLASS(CEffectGeometryFieldProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getGeometryType_EVGeometryType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectGeometryField* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectGeometryField*) pObjectXXXX;
					if (dynamic_cast<CEffectGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CEffectGeometryField*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectGeometryField::getGeometryType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->getGeometryType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getGeometryType_EVGeometryType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getGeometryType_EVGeometryType_Callback* pCallback )
				{
					CEffectGeometryFieldProxy* ptr = dynamic_cast<CEffectGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CEffectGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getGeometryType_EVGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getGeometryType_EVGeometryType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectGeometryField* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectGeometryField*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectGeometryField::getGeometryType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getSpatialReference_ISpatialReference(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectGeometryField* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectGeometryField*) pObjectXXXX;
					if (dynamic_cast<CEffectGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CEffectGeometryField*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectGeometryField::getSpatialReference();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getSpatialReference_ISpatialReference_Callback* pCallback )
				{
					CEffectGeometryFieldProxy* ptr = dynamic_cast<CEffectGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CEffectGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getSpatialReference_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getSpatialReference_ISpatialReference_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectGeometryField* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectGeometryField*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectGeometryField::getSpatialReference();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setSpatialReference_void_ISpatialReference(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr )
				{
					EarthView::World::Spatial3D::Dataset::CEffectGeometryField* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectGeometryField*) pObjectXXXX;
					if (dynamic_cast<CEffectGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CEffectGeometryField*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectGeometryField::setSpatialReference(ref_sr);
					else
						ptrNativeObject->setSpatialReference(ref_sr);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setSpatialReference_void_ISpatialReference_Callback* pCallback )
				{
					CEffectGeometryFieldProxy* ptr = dynamic_cast<CEffectGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CEffectGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setSpatialReference_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setSpatialReference_void_ISpatialReference_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr )
				{
					EarthView::World::Spatial3D::Dataset::CEffectGeometryField* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectGeometryField*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectGeometryField::setSpatialReference(ref_sr);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setGeometryType_void_EVGeometryType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setGeometryType_void_EVGeometryType_Callback* pCallback )
				{
					CEffectGeometryFieldProxy* ptr = dynamic_cast<CEffectGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CEffectGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setGeometryType_void_EVGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getName_EVString_Callback* pCallback )
				{
					CEffectGeometryFieldProxy* ptr = dynamic_cast<CEffectGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CEffectGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getAliasName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getAliasName_EVString_Callback* pCallback )
				{
					CEffectGeometryFieldProxy* ptr = dynamic_cast<CEffectGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CEffectGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getAliasName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getFieldType_EVFieldType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getFieldType_EVFieldType_Callback* pCallback )
				{
					CEffectGeometryFieldProxy* ptr = dynamic_cast<CEffectGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CEffectGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getFieldType_EVFieldType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getSize_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getSize_ev_uint32_Callback* pCallback )
				{
					CEffectGeometryFieldProxy* ptr = dynamic_cast<CEffectGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CEffectGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getSize_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getPrecision_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getPrecision_ev_uint32_Callback* pCallback )
				{
					CEffectGeometryFieldProxy* ptr = dynamic_cast<CEffectGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CEffectGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getPrecision_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getDescription_EVString_Callback* pCallback )
				{
					CEffectGeometryFieldProxy* ptr = dynamic_cast<CEffectGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CEffectGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_isRequest_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectGeometryField_isRequest_ev_bool_Callback* pCallback )
				{
					CEffectGeometryFieldProxy* ptr = dynamic_cast<CEffectGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CEffectGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_isRequest_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectGeometryField_canEdit_ev_bool_Callback* pCallback )
				{
					CEffectGeometryFieldProxy* ptr = dynamic_cast<CEffectGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CEffectGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_canDelete_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectGeometryField_canDelete_ev_bool_Callback* pCallback )
				{
					CEffectGeometryFieldProxy* ptr = dynamic_cast<CEffectGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CEffectGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_canDelete_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_canNull_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectGeometryField_canNull_ev_bool_Callback* pCallback )
				{
					CEffectGeometryFieldProxy* ptr = dynamic_cast<CEffectGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CEffectGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_canNull_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setAliasName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setAliasName_void_EVString_Callback* pCallback )
				{
					CEffectGeometryFieldProxy* ptr = dynamic_cast<CEffectGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CEffectGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setAliasName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setSize_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setSize_void_ev_uint32_Callback* pCallback )
				{
					CEffectGeometryFieldProxy* ptr = dynamic_cast<CEffectGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CEffectGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setSize_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setPrecision_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setPrecision_void_ev_uint32_Callback* pCallback )
				{
					CEffectGeometryFieldProxy* ptr = dynamic_cast<CEffectGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CEffectGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setPrecision_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setDescription_void_EVString_Callback* pCallback )
				{
					CEffectGeometryFieldProxy* ptr = dynamic_cast<CEffectGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CEffectGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setDescription_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getDefaultValue_CVariant( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getDefaultValue_CVariant_Callback* pCallback )
				{
					CEffectGeometryFieldProxy* ptr = dynamic_cast<CEffectGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CEffectGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_getDefaultValue_CVariant(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setDefaultValue_void_CVariant( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setDefaultValue_void_CVariant_Callback* pCallback )
				{
					CEffectGeometryFieldProxy* ptr = dynamic_cast<CEffectGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CEffectGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_setDefaultValue_void_CVariant(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_clone_IField( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectGeometryField_clone_IField_Callback* pCallback )
				{
					CEffectGeometryFieldProxy* ptr = dynamic_cast<CEffectGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CEffectGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectGeometryField_clone_IField(pCallback);
					}
				}
				typedef void*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatabase_CSqlDatabase_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_existDataset_ev_bool_EVString_Callback)(_in char*& name);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_createDataset_ev_bool_EVString_ev_int32_Callback)(_in char*& name, _in ev_int32 srid);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_insertDatasetInfo_ev_uint32_CDataMetaInfo_Callback)(_in EarthView::World::Spatial::GeoDataset::CDataMetaInfo* info);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_updateDatasetInfo_ev_bool_CDataMetaInfo_Callback)(_in EarthView::World::Spatial::GeoDataset::CDataMetaInfo* info);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_deleteDatasetInfo_ev_bool_EVString_EVDatasetType_Callback)(_in char*& datasetName, _in int dsType);
				typedef EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatasetInfo_IDataMetaInfo_EVString_EVDatasetType_Callback)(_in char*& datasetName, _in int dsType);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_getName_EVString_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_getType_ev_int32_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IPropertySet*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_getPropertySet_IPropertySet_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_isValid_ev_bool_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback)(_in char*& name);
				typedef EarthView::World::Spatial::GeoDataset::IDataMetaInfos*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback)(_in int type);
				typedef EarthView::World::Spatial::GeoDataset::IFeatureClass*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback)(_in char*& name, _inout void* geofield, _in const void* fields);
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_openDataset_IDataset_EVString_Callback)(_in char*& name);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_deleteDataset_ev_bool_EVString_Callback)(_in char*& name);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_closeDataset_ev_bool_IDataset_Callback)(_in EarthView::World::Spatial::GeoDataset::IDataset* dataset);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_toXML_EVString_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_clone_IDataSource_Callback)();
				class CEffectDataSourceProxy : public EarthView::World::Spatial3D::Dataset::CEffectDataSource
				{
				private:
					EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatabase_CSqlDatabase_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatabase_CSqlDatabase_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSource_existDataset_ev_bool_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_existDataset_ev_bool_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSource_createDataset_ev_bool_EVString_ev_int32_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_createDataset_ev_bool_EVString_ev_int32_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSource_insertDatasetInfo_ev_uint32_CDataMetaInfo_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_insertDatasetInfo_ev_uint32_CDataMetaInfo_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSource_updateDatasetInfo_ev_bool_CDataMetaInfo_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_updateDatasetInfo_ev_bool_CDataMetaInfo_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSource_deleteDatasetInfo_ev_bool_EVString_EVDatasetType_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_deleteDatasetInfo_ev_bool_EVString_EVDatasetType_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatasetInfo_IDataMetaInfo_EVString_EVDatasetType_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatasetInfo_IDataMetaInfo_EVString_EVDatasetType_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSource_getName_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getName_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSource_getType_ev_int32_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getType_ev_int32_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSource_getPropertySet_IPropertySet_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getPropertySet_IPropertySet_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSource_isValid_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_isValid_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSource_openDataset_IDataset_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_openDataset_IDataset_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSource_deleteDataset_ev_bool_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_deleteDataset_ev_bool_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSource_closeDataset_ev_bool_IDataset_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_closeDataset_ev_bool_IDataset_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSource_toXML_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_toXML_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSource_clone_IDataSource_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_clone_IDataSource_Callback;
				public:
					CEffectDataSourceProxy(EarthView::World::Core::CNameValuePairList *pList) : CEffectDataSource(pList)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatabase_CSqlDatabase_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_existDataset_ev_bool_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_createDataset_ev_bool_EVString_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_insertDatasetInfo_ev_uint32_CDataMetaInfo_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_updateDatasetInfo_ev_bool_CDataMetaInfo_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_deleteDatasetInfo_ev_bool_EVString_EVDatasetType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatasetInfo_IDataMetaInfo_EVString_EVDatasetType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getType_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getPropertySet_IPropertySet_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_openDataset_IDataset_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_deleteDataset_ev_bool_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_closeDataset_ev_bool_IDataset_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_clone_IDataSource_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatabase_CSqlDatabase(EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatabase_CSqlDatabase_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatabase_CSqlDatabase_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_existDataset_ev_bool_EVString(EarthView_World_Spatial3D_Dataset_CEffectDataSource_existDataset_ev_bool_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_existDataset_ev_bool_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_createDataset_ev_bool_EVString_ev_int32(EarthView_World_Spatial3D_Dataset_CEffectDataSource_createDataset_ev_bool_EVString_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_createDataset_ev_bool_EVString_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_insertDatasetInfo_ev_uint32_CDataMetaInfo(EarthView_World_Spatial3D_Dataset_CEffectDataSource_insertDatasetInfo_ev_uint32_CDataMetaInfo_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_insertDatasetInfo_ev_uint32_CDataMetaInfo_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_updateDatasetInfo_ev_bool_CDataMetaInfo(EarthView_World_Spatial3D_Dataset_CEffectDataSource_updateDatasetInfo_ev_bool_CDataMetaInfo_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_updateDatasetInfo_ev_bool_CDataMetaInfo_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_deleteDatasetInfo_ev_bool_EVString_EVDatasetType(EarthView_World_Spatial3D_Dataset_CEffectDataSource_deleteDatasetInfo_ev_bool_EVString_EVDatasetType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_deleteDatasetInfo_ev_bool_EVString_EVDatasetType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatasetInfo_IDataMetaInfo_EVString_EVDatasetType(EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatasetInfo_IDataMetaInfo_EVString_EVDatasetType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatasetInfo_IDataMetaInfo_EVString_EVDatasetType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getName_EVString(EarthView_World_Spatial3D_Dataset_CEffectDataSource_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getType_ev_int32(EarthView_World_Spatial3D_Dataset_CEffectDataSource_getType_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getType_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getPropertySet_IPropertySet(EarthView_World_Spatial3D_Dataset_CEffectDataSource_getPropertySet_IPropertySet_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getPropertySet_IPropertySet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_isValid_ev_bool(EarthView_World_Spatial3D_Dataset_CEffectDataSource_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatasetInfo_IDataMetaInfo_EVString(EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType(EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields(EarthView_World_Spatial3D_Dataset_CEffectDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_openDataset_IDataset_EVString(EarthView_World_Spatial3D_Dataset_CEffectDataSource_openDataset_IDataset_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_openDataset_IDataset_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_deleteDataset_ev_bool_EVString(EarthView_World_Spatial3D_Dataset_CEffectDataSource_deleteDataset_ev_bool_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_deleteDataset_ev_bool_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_closeDataset_ev_bool_IDataset(EarthView_World_Spatial3D_Dataset_CEffectDataSource_closeDataset_ev_bool_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_closeDataset_ev_bool_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_toXML_EVString(EarthView_World_Spatial3D_Dataset_CEffectDataSource_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_clone_IDataSource(EarthView_World_Spatial3D_Dataset_CEffectDataSource_clone_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_clone_IDataSource_Callback = pCallback;
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEffectDataSource::getName();
					}
					virtual ev_int32 getType() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getType_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getType_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CEffectDataSource::getType();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfos* getDatasetInfos(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataMetaInfos* returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback((int)type);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CEffectDataSource::getDatasetInfos(type);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* openDataset(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_openDataset_IDataset_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_openDataset_IDataset_EVString_Callback(name_Char);
							return returnValue;
						}
						else
							return this->CEffectDataSource::openDataset(name);
					}
					virtual ev_bool deleteDataset(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_deleteDataset_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_deleteDataset_ev_bool_EVString_Callback(name_Char);
							return returnValue;
						}
						else
							return this->CEffectDataSource::deleteDataset(name);
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEffectDataSource::toXML();
					}
					virtual EarthView::World::Core::Database::CSqlDatabase& getDatabase()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatabase_CSqlDatabase_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::Database::CSqlDatabase& returnValue = *(EarthView::World::Core::Database::CSqlDatabase*)m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatabase_CSqlDatabase_Callback();
							return returnValue;
						}
						else
							return this->CEffectDataSource::getDatabase();
					}
					virtual ev_bool closeDataset(_in EarthView::World::Spatial::GeoDataset::IDataset* dataset)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_closeDataset_ev_bool_IDataset_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_closeDataset_ev_bool_IDataset_Callback(dataset);
							return returnValue;
						}
						else
							return this->CEffectDataSource::closeDataset(dataset);
					}
					virtual ev_bool existDataset(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_existDataset_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_existDataset_ev_bool_EVString_Callback(name_Char);
							return returnValue;
						}
						else
							return this->CEffectDataSource::existDataset(name);
					}
					virtual ev_bool createDataset(_in const EVString& name, _in ev_int32 srid)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_createDataset_ev_bool_EVString_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_createDataset_ev_bool_EVString_ev_int32_Callback(name_Char, srid);
							return returnValue;
						}
						else
							return this->CEffectDataSource::createDataset(name, srid);
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeatureClass* createFeatureClass(_in const EVString& name, _inout EarthView::World::Spatial::GeoDataset::IGeometryField& geofield, _in const EarthView::World::Spatial::GeoDataset::IFields& fields)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EarthView::World::Spatial::GeoDataset::IFeatureClass* returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback(name_Char, &geofield, &fields);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CEffectDataSource::createFeatureClass(name, geofield, fields);
					}
					virtual ev_uint32 insertDatasetInfo(_in EarthView::World::Spatial::GeoDataset::CDataMetaInfo* info)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_insertDatasetInfo_ev_uint32_CDataMetaInfo_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_insertDatasetInfo_ev_uint32_CDataMetaInfo_Callback(info);
							return returnValue;
						}
						else
							return this->CEffectDataSource::insertDatasetInfo(info);
					}
					virtual ev_bool updateDatasetInfo(_in EarthView::World::Spatial::GeoDataset::CDataMetaInfo* info)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_updateDatasetInfo_ev_bool_CDataMetaInfo_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_updateDatasetInfo_ev_bool_CDataMetaInfo_Callback(info);
							return returnValue;
						}
						else
							return this->CEffectDataSource::updateDatasetInfo(info);
					}
					virtual ev_bool deleteDatasetInfo(_in EVString datasetName, _in EarthView::World::Spatial::GeoDataset::EVDatasetType dsType)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_deleteDatasetInfo_ev_bool_EVString_EVDatasetType_Callback != NULL && this->isCustomExtend())
						{
							char* datasetName_Char = datasetName.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_deleteDatasetInfo_ev_bool_EVString_EVDatasetType_Callback(datasetName_Char, (int)dsType);
							return returnValue;
						}
						else
							return this->CEffectDataSource::deleteDatasetInfo(datasetName, dsType);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getDatasetInfo(_in const EVString& datasetName, _in EarthView::World::Spatial::GeoDataset::EVDatasetType dsType)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatasetInfo_IDataMetaInfo_EVString_EVDatasetType_Callback != NULL && this->isCustomExtend())
						{
							char* datasetName_Char = datasetName.makeBuffer();
							EarthView::World::Spatial::GeoDataset::IDataMetaInfo* returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatasetInfo_IDataMetaInfo_EVString_EVDatasetType_Callback(datasetName_Char, (int)dsType);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CEffectDataSource::getDatasetInfo(datasetName, dsType);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getDatasetInfo(_in const EVString& datasetName)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* datasetName_Char = datasetName.makeBuffer();
							EarthView::World::Spatial::GeoDataset::IDataMetaInfo* returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback(datasetName_Char);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CEffectDataSource::getDatasetInfo(datasetName);
					}
					virtual EarthView::World::Spatial::GeoDataset::IPropertySet* getPropertySet() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getPropertySet_IPropertySet_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IPropertySet* returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getPropertySet_IPropertySet_Callback();
							return returnValue;
						}
						else
							return this->CEffectDataSource::getPropertySet();
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEffectDataSource::isValid();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* clone() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_clone_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSource_clone_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->CEffectDataSource::clone();
					}
				};
				REGISTER_FACTORY_CLASS(CEffectDataSourceProxy);
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_getEffectInfos_ev_bool_CEffectInfoVector(void *pObjectXXXX, _out void* vec )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getEffectInfos(*(EarthView::World::Spatial3D::Dataset::CEffectInfoVector*)vec);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_getEffectInfos_ev_bool_EVString_CEffectInfoVector(void *pObjectXXXX, _in const char* userTypeCode, _out void* vec )
				{
					EarthView::World::Core::ev_string userTypeCode1 = userTypeCode;
					EarthView::World::Spatial3D::Dataset::CEffectDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getEffectInfos(userTypeCode1, *(EarthView::World::Spatial3D::Dataset::CEffectInfoVector*)vec);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_isInEdit_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isInEdit();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_isInEdit_ev_bool_EVString(void *pObjectXXXX, _in const char* datasetname )
				{
					EarthView::World::Core::ev_string datasetname1 = datasetname;
					EarthView::World::Spatial3D::Dataset::CEffectDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isInEdit(datasetname1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSource*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSource::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSource_getName_EVString_Callback* pCallback )
				{
					CEffectDataSourceProxy* ptr = dynamic_cast<CEffectDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSource::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_getType_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSource*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSource::getType();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getType_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSource_getType_ev_int32_Callback* pCallback )
				{
					CEffectDataSourceProxy* ptr = dynamic_cast<CEffectDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getType_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_getType_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSource::getType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfos*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSource*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataMetaInfos* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSource::getDatasetInfos((EarthView::World::Spatial::GeoDataset::EVDatasetType)type);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataMetaInfos* objXXXX = ptrNativeObject->getDatasetInfos((EarthView::World::Spatial::GeoDataset::EVDatasetType)type);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback* pCallback )
				{
					CEffectDataSourceProxy* ptr = dynamic_cast<CEffectDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfos*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_NoVirtual(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataMetaInfos* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSource::getDatasetInfos((EarthView::World::Spatial::GeoDataset::EVDatasetType)type);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_openDataset_IDataset_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Dataset::CEffectDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSource*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSource::openDataset(name1);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->openDataset(name1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_openDataset_IDataset_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSource_openDataset_IDataset_EVString_Callback* pCallback )
				{
					CEffectDataSourceProxy* ptr = dynamic_cast<CEffectDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_openDataset_IDataset_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_openDataset_IDataset_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Dataset::CEffectDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSource::openDataset(name1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_deleteDataset_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Dataset::CEffectDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSource*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSource::deleteDataset(name1);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->deleteDataset(name1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_deleteDataset_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSource_deleteDataset_ev_bool_EVString_Callback* pCallback )
				{
					CEffectDataSourceProxy* ptr = dynamic_cast<CEffectDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_deleteDataset_ev_bool_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_deleteDataset_ev_bool_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Dataset::CEffectDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSource::deleteDataset(name1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_toXML_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSource*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSource::toXML();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toXML();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSource_toXML_EVString_Callback* pCallback )
				{
					CEffectDataSourceProxy* ptr = dynamic_cast<CEffectDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_toXML_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSource::toXML();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatabase_CSqlDatabase(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSource*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::Database::CSqlDatabase& objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSource::getDatabase();
						EarthView::World::Core::Database::CSqlDatabase *pXXXX = &objXXXX;
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Core::Database::CSqlDatabase& objXXXX = ptrNativeObject->getDatabase();
						EarthView::World::Core::Database::CSqlDatabase *pXXXX = &objXXXX;
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatabase_CSqlDatabase( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatabase_CSqlDatabase_Callback* pCallback )
				{
					CEffectDataSourceProxy* ptr = dynamic_cast<CEffectDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatabase_CSqlDatabase(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatabase_CSqlDatabase_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX;
					EarthView::World::Core::Database::CSqlDatabase& objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSource::getDatabase();
					EarthView::World::Core::Database::CSqlDatabase *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_closeDataset_ev_bool_IDataset(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* dataset )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSource*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSource::closeDataset(dataset);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->closeDataset(dataset);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_closeDataset_ev_bool_IDataset( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSource_closeDataset_ev_bool_IDataset_Callback* pCallback )
				{
					CEffectDataSourceProxy* ptr = dynamic_cast<CEffectDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_closeDataset_ev_bool_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_closeDataset_ev_bool_IDataset_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* dataset )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSource::closeDataset(dataset);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_existDataset_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Dataset::CEffectDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSource*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSource::existDataset(name1);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->existDataset(name1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_existDataset_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSource_existDataset_ev_bool_EVString_Callback* pCallback )
				{
					CEffectDataSourceProxy* ptr = dynamic_cast<CEffectDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_existDataset_ev_bool_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_existDataset_ev_bool_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Dataset::CEffectDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSource::existDataset(name1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_createDataset_ev_bool_EVString_ev_int32(void *pObjectXXXX, _in const char* name, _in ev_int32 srid )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Dataset::CEffectDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSource*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSource::createDataset(name1, srid);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->createDataset(name1, srid);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_createDataset_ev_bool_EVString_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSource_createDataset_ev_bool_EVString_ev_int32_Callback* pCallback )
				{
					CEffectDataSourceProxy* ptr = dynamic_cast<CEffectDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_createDataset_ev_bool_EVString_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_createDataset_ev_bool_EVString_ev_int32_NoVirtual(void *pObjectXXXX, _in const char* name, _in ev_int32 srid )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Dataset::CEffectDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSource::createDataset(name1, srid);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureClass*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields(void *pObjectXXXX, _in const char* name, _inout void* geofield, _in const void* fields )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Dataset::CEffectDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSource*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeatureClass* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSource::createFeatureClass(name1, *(EarthView::World::Spatial::GeoDataset::IGeometryField*)geofield, *(EarthView::World::Spatial::GeoDataset::IFields*)fields);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeatureClass* objXXXX = ptrNativeObject->createFeatureClass(name1, *(EarthView::World::Spatial::GeoDataset::IGeometryField*)geofield, *(EarthView::World::Spatial::GeoDataset::IFields*)fields);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback* pCallback )
				{
					CEffectDataSourceProxy* ptr = dynamic_cast<CEffectDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureClass*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_NoVirtual(void *pObjectXXXX, _in const char* name, _inout void* geofield, _in const void* fields )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Dataset::CEffectDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeatureClass* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSource::createFeatureClass(name1, *(EarthView::World::Spatial::GeoDataset::IGeometryField*)geofield, *(EarthView::World::Spatial::GeoDataset::IFields*)fields);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_insertDatasetInfo_ev_uint32_CDataMetaInfo(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::CDataMetaInfo* info )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSource*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSource::insertDatasetInfo(info);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->insertDatasetInfo(info);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_insertDatasetInfo_ev_uint32_CDataMetaInfo( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSource_insertDatasetInfo_ev_uint32_CDataMetaInfo_Callback* pCallback )
				{
					CEffectDataSourceProxy* ptr = dynamic_cast<CEffectDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_insertDatasetInfo_ev_uint32_CDataMetaInfo(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_insertDatasetInfo_ev_uint32_CDataMetaInfo_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::CDataMetaInfo* info )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSource::insertDatasetInfo(info);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_updateDatasetInfo_ev_bool_CDataMetaInfo(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::CDataMetaInfo* info )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSource*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSource::updateDatasetInfo(info);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->updateDatasetInfo(info);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_updateDatasetInfo_ev_bool_CDataMetaInfo( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSource_updateDatasetInfo_ev_bool_CDataMetaInfo_Callback* pCallback )
				{
					CEffectDataSourceProxy* ptr = dynamic_cast<CEffectDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_updateDatasetInfo_ev_bool_CDataMetaInfo(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_updateDatasetInfo_ev_bool_CDataMetaInfo_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::CDataMetaInfo* info )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSource::updateDatasetInfo(info);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_deleteDatasetInfo_ev_bool_EVString_EVDatasetType(void *pObjectXXXX, _in char* datasetName, _in int dsType )
				{
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::Spatial3D::Dataset::CEffectDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSource*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSource::deleteDatasetInfo(datasetName1, (EarthView::World::Spatial::GeoDataset::EVDatasetType)dsType);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->deleteDatasetInfo(datasetName1, (EarthView::World::Spatial::GeoDataset::EVDatasetType)dsType);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_deleteDatasetInfo_ev_bool_EVString_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSource_deleteDatasetInfo_ev_bool_EVString_EVDatasetType_Callback* pCallback )
				{
					CEffectDataSourceProxy* ptr = dynamic_cast<CEffectDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_deleteDatasetInfo_ev_bool_EVString_EVDatasetType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_deleteDatasetInfo_ev_bool_EVString_EVDatasetType_NoVirtual(void *pObjectXXXX, _in char* datasetName, _in int dsType )
				{
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::Spatial3D::Dataset::CEffectDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSource::deleteDatasetInfo(datasetName1, (EarthView::World::Spatial::GeoDataset::EVDatasetType)dsType);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatasetInfo_IDataMetaInfo_EVString_EVDatasetType(void *pObjectXXXX, _in const char* datasetName, _in int dsType )
				{
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::Spatial3D::Dataset::CEffectDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSource*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSource::getDatasetInfo(datasetName1, (EarthView::World::Spatial::GeoDataset::EVDatasetType)dsType);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->getDatasetInfo(datasetName1, (EarthView::World::Spatial::GeoDataset::EVDatasetType)dsType);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatasetInfo_IDataMetaInfo_EVString_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatasetInfo_IDataMetaInfo_EVString_EVDatasetType_Callback* pCallback )
				{
					CEffectDataSourceProxy* ptr = dynamic_cast<CEffectDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatasetInfo_IDataMetaInfo_EVString_EVDatasetType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatasetInfo_IDataMetaInfo_EVString_EVDatasetType_NoVirtual(void *pObjectXXXX, _in const char* datasetName, _in int dsType )
				{
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::Spatial3D::Dataset::CEffectDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSource::getDatasetInfo(datasetName1, (EarthView::World::Spatial::GeoDataset::EVDatasetType)dsType);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatasetInfo_IDataMetaInfo_EVString(void *pObjectXXXX, _in const char* datasetName )
				{
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::Spatial3D::Dataset::CEffectDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSource*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSource::getDatasetInfo(datasetName1);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->getDatasetInfo(datasetName1);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatasetInfo_IDataMetaInfo_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback* pCallback )
				{
					CEffectDataSourceProxy* ptr = dynamic_cast<CEffectDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatasetInfo_IDataMetaInfo_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSource_getDatasetInfo_IDataMetaInfo_EVString_NoVirtual(void *pObjectXXXX, _in const char* datasetName )
				{
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::Spatial3D::Dataset::CEffectDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSource::getDatasetInfo(datasetName1);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getPropertySet_IPropertySet( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSource_getPropertySet_IPropertySet_Callback* pCallback )
				{
					CEffectDataSourceProxy* ptr = dynamic_cast<CEffectDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_getPropertySet_IPropertySet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSource_isValid_ev_bool_Callback* pCallback )
				{
					CEffectDataSourceProxy* ptr = dynamic_cast<CEffectDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_clone_IDataSource( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSource_clone_IDataSource_Callback* pCallback )
				{
					CEffectDataSourceProxy* ptr = dynamic_cast<CEffectDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSource_clone_IDataSource(pCallback);
					}
				}
			}
		}
	}
}
