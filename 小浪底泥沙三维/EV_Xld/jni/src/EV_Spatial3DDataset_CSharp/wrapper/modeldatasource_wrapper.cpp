/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataset/modeldatasource.h"
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
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
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
				typedef int  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelGeometryField_getGeometryType_EVGeometryType_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelGeometryField_setGeometryType_void_EVGeometryType_Callback)(_in int type);
				typedef const EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelGeometryField_getSpatialReference_ISpatialReference_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelGeometryField_setSpatialReference_void_ISpatialReference_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelGeometryField_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelGeometryField_getAliasName_EVString_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelGeometryField_getFieldType_EVFieldType_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelGeometryField_getSize_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelGeometryField_getPrecision_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelGeometryField_getDescription_EVString_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelGeometryField_isRequest_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelGeometryField_canEdit_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelGeometryField_canDelete_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelGeometryField_canNull_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelGeometryField_setAliasName_void_EVString_Callback)(_in char*& name);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelGeometryField_setSize_void_ev_uint32_Callback)(_in ev_uint32 value);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelGeometryField_setPrecision_void_ev_uint32_Callback)(_in ev_uint32 value);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelGeometryField_setDescription_void_EVString_Callback)(_in char*& description);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelGeometryField_getDefaultValue_CVariant_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelGeometryField_setDefaultValue_void_CVariant_Callback)(_in const void* defaultValue);
				typedef EarthView::World::Spatial::GeoDataset::IField*  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelGeometryField_clone_IField_Callback)();
				class CModelGeometryFieldProxy : public EarthView::World::Spatial3D::Dataset::CModelGeometryField
				{
				private:
					EarthView_World_Spatial3D_Dataset_CModelGeometryField_getGeometryType_EVGeometryType_Callback* m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getGeometryType_EVGeometryType_Callback;
					EarthView_World_Spatial3D_Dataset_CModelGeometryField_setGeometryType_void_EVGeometryType_Callback* m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setGeometryType_void_EVGeometryType_Callback;
					EarthView_World_Spatial3D_Dataset_CModelGeometryField_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getSpatialReference_ISpatialReference_Callback;
					EarthView_World_Spatial3D_Dataset_CModelGeometryField_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setSpatialReference_void_ISpatialReference_Callback;
					EarthView_World_Spatial3D_Dataset_CModelGeometryField_getName_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getName_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CModelGeometryField_getAliasName_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getAliasName_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CModelGeometryField_getFieldType_EVFieldType_Callback* m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getFieldType_EVFieldType_Callback;
					EarthView_World_Spatial3D_Dataset_CModelGeometryField_getSize_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getSize_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CModelGeometryField_getPrecision_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getPrecision_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CModelGeometryField_getDescription_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getDescription_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CModelGeometryField_isRequest_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_isRequest_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CModelGeometryField_canEdit_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_canEdit_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CModelGeometryField_canDelete_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_canDelete_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CModelGeometryField_canNull_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_canNull_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CModelGeometryField_setAliasName_void_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setAliasName_void_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CModelGeometryField_setSize_void_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setSize_void_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CModelGeometryField_setPrecision_void_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setPrecision_void_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CModelGeometryField_setDescription_void_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setDescription_void_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CModelGeometryField_getDefaultValue_CVariant_Callback* m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getDefaultValue_CVariant_Callback;
					EarthView_World_Spatial3D_Dataset_CModelGeometryField_setDefaultValue_void_CVariant_Callback* m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setDefaultValue_void_CVariant_Callback;
					EarthView_World_Spatial3D_Dataset_CModelGeometryField_clone_IField_Callback* m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_clone_IField_Callback;
				public:
					CModelGeometryFieldProxy(EarthView::World::Core::CNameValuePairList *pList) : CModelGeometryField(pList)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getGeometryType_EVGeometryType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setGeometryType_void_EVGeometryType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getSpatialReference_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setSpatialReference_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getAliasName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getFieldType_EVFieldType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getSize_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getPrecision_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_isRequest_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_canDelete_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_canNull_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setAliasName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setSize_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setPrecision_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setDescription_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getDefaultValue_CVariant_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setDefaultValue_void_CVariant_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_clone_IField_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getGeometryType_EVGeometryType(EarthView_World_Spatial3D_Dataset_CModelGeometryField_getGeometryType_EVGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getGeometryType_EVGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setGeometryType_void_EVGeometryType(EarthView_World_Spatial3D_Dataset_CModelGeometryField_setGeometryType_void_EVGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setGeometryType_void_EVGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getSpatialReference_ISpatialReference(EarthView_World_Spatial3D_Dataset_CModelGeometryField_getSpatialReference_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getSpatialReference_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial3D_Dataset_CModelGeometryField_setSpatialReference_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setSpatialReference_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getName_EVString(EarthView_World_Spatial3D_Dataset_CModelGeometryField_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getAliasName_EVString(EarthView_World_Spatial3D_Dataset_CModelGeometryField_getAliasName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getAliasName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getFieldType_EVFieldType(EarthView_World_Spatial3D_Dataset_CModelGeometryField_getFieldType_EVFieldType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getFieldType_EVFieldType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getSize_ev_uint32(EarthView_World_Spatial3D_Dataset_CModelGeometryField_getSize_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getSize_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getPrecision_ev_uint32(EarthView_World_Spatial3D_Dataset_CModelGeometryField_getPrecision_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getPrecision_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getDescription_EVString(EarthView_World_Spatial3D_Dataset_CModelGeometryField_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_isRequest_ev_bool(EarthView_World_Spatial3D_Dataset_CModelGeometryField_isRequest_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_isRequest_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_canEdit_ev_bool(EarthView_World_Spatial3D_Dataset_CModelGeometryField_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_canDelete_ev_bool(EarthView_World_Spatial3D_Dataset_CModelGeometryField_canDelete_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_canDelete_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_canNull_ev_bool(EarthView_World_Spatial3D_Dataset_CModelGeometryField_canNull_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_canNull_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setAliasName_void_EVString(EarthView_World_Spatial3D_Dataset_CModelGeometryField_setAliasName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setAliasName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setSize_void_ev_uint32(EarthView_World_Spatial3D_Dataset_CModelGeometryField_setSize_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setSize_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setPrecision_void_ev_uint32(EarthView_World_Spatial3D_Dataset_CModelGeometryField_setPrecision_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setPrecision_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setDescription_void_EVString(EarthView_World_Spatial3D_Dataset_CModelGeometryField_setDescription_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setDescription_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getDefaultValue_CVariant(EarthView_World_Spatial3D_Dataset_CModelGeometryField_getDefaultValue_CVariant_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getDefaultValue_CVariant_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setDefaultValue_void_CVariant(EarthView_World_Spatial3D_Dataset_CModelGeometryField_setDefaultValue_void_CVariant_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setDefaultValue_void_CVariant_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_clone_IField(EarthView_World_Spatial3D_Dataset_CModelGeometryField_clone_IField_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_clone_IField_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getGeometryType_EVGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVGeometryType)m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getGeometryType_EVGeometryType_Callback();
							return returnValue;
						}
						else
							return this->CModelGeometryField::getGeometryType();
					}
					virtual const EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getSpatialReference_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CModelGeometryField::getSpatialReference();
					}
					virtual void setSpatialReference(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setSpatialReference_void_ISpatialReference_Callback(ref_sr);
						}
						else
							return this->CModelGeometryField::setSpatialReference(ref_sr);
					}
					virtual void setGeometryType(_in EarthView::World::Spatial::Geometry::EVGeometryType type)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setGeometryType_void_EVGeometryType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setGeometryType_void_EVGeometryType_Callback((int)type);
						}
						else
							return this->CModelGeometryField::setGeometryType(type);
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CModelGeometryField::getName();
					}
					virtual EVString getAliasName() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getAliasName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getAliasName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CModelGeometryField::getAliasName();
					}
					virtual EarthView::World::Spatial::GeoDataset::EVFieldType getFieldType() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getFieldType_EVFieldType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVFieldType returnValue = (EarthView::World::Spatial::GeoDataset::EVFieldType)m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getFieldType_EVFieldType_Callback();
							return returnValue;
						}
						else
							return this->CModelGeometryField::getFieldType();
					}
					virtual ev_uint32 getSize() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getSize_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getSize_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CModelGeometryField::getSize();
					}
					virtual ev_uint32 getPrecision() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getPrecision_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getPrecision_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CModelGeometryField::getPrecision();
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->CModelGeometryField::getDescription();
					}
					virtual ev_bool isRequest() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_isRequest_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_isRequest_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CModelGeometryField::isRequest();
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CModelGeometryField::canEdit();
					}
					virtual ev_bool canDelete() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_canDelete_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_canDelete_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CModelGeometryField::canDelete();
					}
					virtual ev_bool canNull() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_canNull_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_canNull_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CModelGeometryField::canNull();
					}
					virtual void setAliasName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setAliasName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setAliasName_void_EVString_Callback(name_Char);
						}
						else
							return this->CModelGeometryField::setAliasName(name);
					}
					virtual void setSize(_in ev_uint32 value)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setSize_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setSize_void_ev_uint32_Callback(value);
						}
						else
							return this->CModelGeometryField::setSize(value);
					}
					virtual void setPrecision(_in ev_uint32 value)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setPrecision_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setPrecision_void_ev_uint32_Callback(value);
						}
						else
							return this->CModelGeometryField::setPrecision(value);
					}
					virtual void setDescription(_in const EVString& description)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* description_Char = description.makeBuffer();
							m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setDescription_void_EVString_Callback(description_Char);
						}
						else
							return this->CModelGeometryField::setDescription(description);
					}
					virtual EarthView::World::Core::CVariant getDefaultValue() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getDefaultValue_CVariant_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CVariant returnValue = *(EarthView::World::Core::CVariant*)m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getDefaultValue_CVariant_Callback();
							return returnValue;
						}
						else
							return this->CModelGeometryField::getDefaultValue();
					}
					virtual void setDefaultValue(_in const EarthView::World::Core::CVariant& defaultValue)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setDefaultValue_void_CVariant_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setDefaultValue_void_CVariant_Callback(&defaultValue);
						}
						else
							return this->CModelGeometryField::setDefaultValue(defaultValue);
					}
					virtual EarthView::World::Spatial::GeoDataset::IField* clone() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_clone_IField_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IField* returnValue = m_EarthView_World_Spatial3D_Dataset_CModelGeometryField_clone_IField_Callback();
							return returnValue;
						}
						else
							return this->CModelGeometryField::clone();
					}
				};
				REGISTER_FACTORY_CLASS(CModelGeometryFieldProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Dataset_CModelGeometryField_getGeometryType_EVGeometryType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CModelGeometryField* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelGeometryField*) pObjectXXXX;
					if (dynamic_cast<CModelGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CModelGeometryField*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelGeometryField::getGeometryType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->getGeometryType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getGeometryType_EVGeometryType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelGeometryField_getGeometryType_EVGeometryType_Callback* pCallback )
				{
					CModelGeometryFieldProxy* ptr = dynamic_cast<CModelGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CModelGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getGeometryType_EVGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Dataset_CModelGeometryField_getGeometryType_EVGeometryType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CModelGeometryField* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelGeometryField*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelGeometryField::getGeometryType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial3D_Dataset_CModelGeometryField_getSpatialReference_ISpatialReference(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CModelGeometryField* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelGeometryField*) pObjectXXXX;
					if (dynamic_cast<CModelGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CModelGeometryField*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelGeometryField::getSpatialReference();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelGeometryField_getSpatialReference_ISpatialReference_Callback* pCallback )
				{
					CModelGeometryFieldProxy* ptr = dynamic_cast<CModelGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CModelGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getSpatialReference_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial3D_Dataset_CModelGeometryField_getSpatialReference_ISpatialReference_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CModelGeometryField* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelGeometryField*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelGeometryField::getSpatialReference();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CModelGeometryField_setSpatialReference_void_ISpatialReference(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr )
				{
					EarthView::World::Spatial3D::Dataset::CModelGeometryField* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelGeometryField*) pObjectXXXX;
					if (dynamic_cast<CModelGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CModelGeometryField*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelGeometryField::setSpatialReference(ref_sr);
					else
						ptrNativeObject->setSpatialReference(ref_sr);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelGeometryField_setSpatialReference_void_ISpatialReference_Callback* pCallback )
				{
					CModelGeometryFieldProxy* ptr = dynamic_cast<CModelGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CModelGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setSpatialReference_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CModelGeometryField_setSpatialReference_void_ISpatialReference_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr )
				{
					EarthView::World::Spatial3D::Dataset::CModelGeometryField* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelGeometryField*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelGeometryField::setSpatialReference(ref_sr);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setGeometryType_void_EVGeometryType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelGeometryField_setGeometryType_void_EVGeometryType_Callback* pCallback )
				{
					CModelGeometryFieldProxy* ptr = dynamic_cast<CModelGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CModelGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setGeometryType_void_EVGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelGeometryField_getName_EVString_Callback* pCallback )
				{
					CModelGeometryFieldProxy* ptr = dynamic_cast<CModelGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CModelGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getAliasName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelGeometryField_getAliasName_EVString_Callback* pCallback )
				{
					CModelGeometryFieldProxy* ptr = dynamic_cast<CModelGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CModelGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getAliasName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getFieldType_EVFieldType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelGeometryField_getFieldType_EVFieldType_Callback* pCallback )
				{
					CModelGeometryFieldProxy* ptr = dynamic_cast<CModelGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CModelGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getFieldType_EVFieldType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getSize_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelGeometryField_getSize_ev_uint32_Callback* pCallback )
				{
					CModelGeometryFieldProxy* ptr = dynamic_cast<CModelGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CModelGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getSize_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getPrecision_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelGeometryField_getPrecision_ev_uint32_Callback* pCallback )
				{
					CModelGeometryFieldProxy* ptr = dynamic_cast<CModelGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CModelGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getPrecision_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelGeometryField_getDescription_EVString_Callback* pCallback )
				{
					CModelGeometryFieldProxy* ptr = dynamic_cast<CModelGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CModelGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_isRequest_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelGeometryField_isRequest_ev_bool_Callback* pCallback )
				{
					CModelGeometryFieldProxy* ptr = dynamic_cast<CModelGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CModelGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_isRequest_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelGeometryField_canEdit_ev_bool_Callback* pCallback )
				{
					CModelGeometryFieldProxy* ptr = dynamic_cast<CModelGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CModelGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_canDelete_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelGeometryField_canDelete_ev_bool_Callback* pCallback )
				{
					CModelGeometryFieldProxy* ptr = dynamic_cast<CModelGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CModelGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_canDelete_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_canNull_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelGeometryField_canNull_ev_bool_Callback* pCallback )
				{
					CModelGeometryFieldProxy* ptr = dynamic_cast<CModelGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CModelGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_canNull_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setAliasName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelGeometryField_setAliasName_void_EVString_Callback* pCallback )
				{
					CModelGeometryFieldProxy* ptr = dynamic_cast<CModelGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CModelGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setAliasName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setSize_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelGeometryField_setSize_void_ev_uint32_Callback* pCallback )
				{
					CModelGeometryFieldProxy* ptr = dynamic_cast<CModelGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CModelGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setSize_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setPrecision_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelGeometryField_setPrecision_void_ev_uint32_Callback* pCallback )
				{
					CModelGeometryFieldProxy* ptr = dynamic_cast<CModelGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CModelGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setPrecision_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelGeometryField_setDescription_void_EVString_Callback* pCallback )
				{
					CModelGeometryFieldProxy* ptr = dynamic_cast<CModelGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CModelGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setDescription_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getDefaultValue_CVariant( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelGeometryField_getDefaultValue_CVariant_Callback* pCallback )
				{
					CModelGeometryFieldProxy* ptr = dynamic_cast<CModelGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CModelGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_getDefaultValue_CVariant(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setDefaultValue_void_CVariant( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelGeometryField_setDefaultValue_void_CVariant_Callback* pCallback )
				{
					CModelGeometryFieldProxy* ptr = dynamic_cast<CModelGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CModelGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_setDefaultValue_void_CVariant(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_clone_IField( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelGeometryField_clone_IField_Callback* pCallback )
				{
					CModelGeometryFieldProxy* ptr = dynamic_cast<CModelGeometryFieldProxy*>((EarthView::World::Spatial3D::Dataset::CModelGeometryField*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelGeometryField_clone_IField(pCallback);
					}
				}
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_getSRID_ev_int32_EVString_Callback)(_in char*& datasetName);
				typedef EarthView::World::Spatial::GeoDataset::IDataMetaInfos*  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_getModelDatasetInfos_IDataMetaInfos_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_getDatabase_CSqlDatabase_Callback)();
				typedef EarthView::World::Spatial3D::Dataset::CPropertyManager*  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_getPropertyManager_CPropertyManager_Callback)();
				typedef EarthView::World::Spatial3D::Dataset::CUserTypeManager*  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_getUserTypeManager_CUserTypeManager_Callback)();
				typedef EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager*  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_getMeshEffectRefManager_CMeshEffectRefManager_Callback)();
				typedef EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_getMeshTemplateDataset_CMeshTemplateDataset_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_createDataset_ev_bool_EVString_IFields_ev_bool_ev_int32_Callback)(_in char*& name, _in const EarthView::World::Spatial::GeoDataset::IFields* attrFields, _in ev_bool istempl, _in ev_int32 srID);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_getExistDataset_DataSetVector_EVString_Callback)(_in char*& datasetName);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_updateDatasetInfo_ev_bool_EVString_CDataMetaInfo_Callback)(_in char*& datasetName, _in EarthView::World::Spatial::GeoDataset::CDataMetaInfo* info);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_getName_EVString_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_getType_ev_int32_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IPropertySet*  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_getPropertySet_IPropertySet_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_isValid_ev_bool_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback)(_in char*& name);
				typedef EarthView::World::Spatial::GeoDataset::IDataMetaInfos*  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback)(_in int type);
				typedef EarthView::World::Spatial::GeoDataset::IFeatureClass*  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback)(_in char*& name, _inout void* geofield, _in const void* fields);
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_openDataset_IDataset_EVString_Callback)(_in char*& name);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_deleteDataset_ev_bool_EVString_Callback)(_in char*& name);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_closeDataset_ev_bool_IDataset_Callback)(_in EarthView::World::Spatial::GeoDataset::IDataset* dataset);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_toXML_EVString_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_clone_IDataSource_Callback)();
				class CModelDataSourceProxy : public EarthView::World::Spatial3D::Dataset::CModelDataSource
				{
				private:
					EarthView_World_Spatial3D_Dataset_CModelDataSource_getSRID_ev_int32_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getSRID_ev_int32_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataSource_getModelDatasetInfos_IDataMetaInfos_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getModelDatasetInfos_IDataMetaInfos_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataSource_getDatabase_CSqlDatabase_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getDatabase_CSqlDatabase_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataSource_getPropertyManager_CPropertyManager_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getPropertyManager_CPropertyManager_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataSource_getUserTypeManager_CUserTypeManager_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getUserTypeManager_CUserTypeManager_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataSource_getMeshEffectRefManager_CMeshEffectRefManager_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getMeshEffectRefManager_CMeshEffectRefManager_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataSource_getMeshTemplateDataset_CMeshTemplateDataset_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getMeshTemplateDataset_CMeshTemplateDataset_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataSource_createDataset_ev_bool_EVString_IFields_ev_bool_ev_int32_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataSource_createDataset_ev_bool_EVString_IFields_ev_bool_ev_int32_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataSource_getExistDataset_DataSetVector_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getExistDataset_DataSetVector_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataSource_updateDatasetInfo_ev_bool_EVString_CDataMetaInfo_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataSource_updateDatasetInfo_ev_bool_EVString_CDataMetaInfo_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataSource_getName_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getName_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataSource_getType_ev_int32_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getType_ev_int32_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataSource_getPropertySet_IPropertySet_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getPropertySet_IPropertySet_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataSource_isValid_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataSource_isValid_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataSource_openDataset_IDataset_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataSource_openDataset_IDataset_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataSource_deleteDataset_ev_bool_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataSource_deleteDataset_ev_bool_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataSource_closeDataset_ev_bool_IDataset_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataSource_closeDataset_ev_bool_IDataset_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataSource_toXML_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataSource_toXML_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataSource_clone_IDataSource_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataSource_clone_IDataSource_Callback;
				public:
					CModelDataSourceProxy(EarthView::World::Core::CNameValuePairList *pList) : CModelDataSource(pList)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getSRID_ev_int32_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getModelDatasetInfos_IDataMetaInfos_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getDatabase_CSqlDatabase_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getPropertyManager_CPropertyManager_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getUserTypeManager_CUserTypeManager_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getMeshEffectRefManager_CMeshEffectRefManager_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getMeshTemplateDataset_CMeshTemplateDataset_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataSource_createDataset_ev_bool_EVString_IFields_ev_bool_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getExistDataset_DataSetVector_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataSource_updateDatasetInfo_ev_bool_EVString_CDataMetaInfo_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getType_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getPropertySet_IPropertySet_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataSource_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataSource_openDataset_IDataset_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataSource_deleteDataset_ev_bool_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataSource_closeDataset_ev_bool_IDataset_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataSource_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataSource_clone_IDataSource_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_getSRID_ev_int32_EVString(EarthView_World_Spatial3D_Dataset_CModelDataSource_getSRID_ev_int32_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getSRID_ev_int32_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_getModelDatasetInfos_IDataMetaInfos(EarthView_World_Spatial3D_Dataset_CModelDataSource_getModelDatasetInfos_IDataMetaInfos_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getModelDatasetInfos_IDataMetaInfos_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_getDatabase_CSqlDatabase(EarthView_World_Spatial3D_Dataset_CModelDataSource_getDatabase_CSqlDatabase_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getDatabase_CSqlDatabase_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_getPropertyManager_CPropertyManager(EarthView_World_Spatial3D_Dataset_CModelDataSource_getPropertyManager_CPropertyManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getPropertyManager_CPropertyManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_getUserTypeManager_CUserTypeManager(EarthView_World_Spatial3D_Dataset_CModelDataSource_getUserTypeManager_CUserTypeManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getUserTypeManager_CUserTypeManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_getMeshEffectRefManager_CMeshEffectRefManager(EarthView_World_Spatial3D_Dataset_CModelDataSource_getMeshEffectRefManager_CMeshEffectRefManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getMeshEffectRefManager_CMeshEffectRefManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_getMeshTemplateDataset_CMeshTemplateDataset(EarthView_World_Spatial3D_Dataset_CModelDataSource_getMeshTemplateDataset_CMeshTemplateDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getMeshTemplateDataset_CMeshTemplateDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_createDataset_ev_bool_EVString_IFields_ev_bool_ev_int32(EarthView_World_Spatial3D_Dataset_CModelDataSource_createDataset_ev_bool_EVString_IFields_ev_bool_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataSource_createDataset_ev_bool_EVString_IFields_ev_bool_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_getExistDataset_DataSetVector_EVString(EarthView_World_Spatial3D_Dataset_CModelDataSource_getExistDataset_DataSetVector_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getExistDataset_DataSetVector_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_updateDatasetInfo_ev_bool_EVString_CDataMetaInfo(EarthView_World_Spatial3D_Dataset_CModelDataSource_updateDatasetInfo_ev_bool_EVString_CDataMetaInfo_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataSource_updateDatasetInfo_ev_bool_EVString_CDataMetaInfo_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_getName_EVString(EarthView_World_Spatial3D_Dataset_CModelDataSource_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_getType_ev_int32(EarthView_World_Spatial3D_Dataset_CModelDataSource_getType_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getType_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_getPropertySet_IPropertySet(EarthView_World_Spatial3D_Dataset_CModelDataSource_getPropertySet_IPropertySet_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getPropertySet_IPropertySet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_isValid_ev_bool(EarthView_World_Spatial3D_Dataset_CModelDataSource_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataSource_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_getDatasetInfo_IDataMetaInfo_EVString(EarthView_World_Spatial3D_Dataset_CModelDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType(EarthView_World_Spatial3D_Dataset_CModelDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields(EarthView_World_Spatial3D_Dataset_CModelDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_openDataset_IDataset_EVString(EarthView_World_Spatial3D_Dataset_CModelDataSource_openDataset_IDataset_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataSource_openDataset_IDataset_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_deleteDataset_ev_bool_EVString(EarthView_World_Spatial3D_Dataset_CModelDataSource_deleteDataset_ev_bool_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataSource_deleteDataset_ev_bool_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_closeDataset_ev_bool_IDataset(EarthView_World_Spatial3D_Dataset_CModelDataSource_closeDataset_ev_bool_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataSource_closeDataset_ev_bool_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_toXML_EVString(EarthView_World_Spatial3D_Dataset_CModelDataSource_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataSource_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_clone_IDataSource(EarthView_World_Spatial3D_Dataset_CModelDataSource_clone_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataSource_clone_IDataSource_Callback = pCallback;
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CModelDataSource::getName();
					}
					virtual ev_int32 getSRID(_in const EVString& datasetName)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getSRID_ev_int32_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* datasetName_Char = datasetName.makeBuffer();
							ev_int32 returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getSRID_ev_int32_EVString_Callback(datasetName_Char);
							return returnValue;
						}
						else
							return this->CModelDataSource::getSRID(datasetName);
					}
					virtual ev_int32 getType() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getType_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getType_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CModelDataSource::getType();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfos* getDatasetInfos(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataMetaInfos* returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback((int)type);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CModelDataSource::getDatasetInfos(type);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfos* getModelDatasetInfos()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getModelDatasetInfos_IDataMetaInfos_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataMetaInfos* returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getModelDatasetInfos_IDataMetaInfos_Callback();
							return returnValue;
						}
						else
							return this->CModelDataSource::getModelDatasetInfos();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* openDataset(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataSource_openDataset_IDataset_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataSource_openDataset_IDataset_EVString_Callback(name_Char);
							return returnValue;
						}
						else
							return this->CModelDataSource::openDataset(name);
					}
					virtual ev_bool deleteDataset(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataSource_deleteDataset_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataSource_deleteDataset_ev_bool_EVString_Callback(name_Char);
							return returnValue;
						}
						else
							return this->CModelDataSource::deleteDataset(name);
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataSource_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataSource_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->CModelDataSource::toXML();
					}
					virtual EarthView::World::Spatial::GeoDataset::IPropertySet* getPropertySet() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getPropertySet_IPropertySet_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IPropertySet* returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getPropertySet_IPropertySet_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CModelDataSource::getPropertySet();
					}
					virtual EarthView::World::Core::Database::CSqlDatabase& getDatabase()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getDatabase_CSqlDatabase_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::Database::CSqlDatabase& returnValue = *(EarthView::World::Core::Database::CSqlDatabase*)m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getDatabase_CSqlDatabase_Callback();
							return returnValue;
						}
						else
							return this->CModelDataSource::getDatabase();
					}
					virtual EarthView::World::Spatial3D::Dataset::CPropertyManager* getPropertyManager()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getPropertyManager_CPropertyManager_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::Dataset::CPropertyManager* returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getPropertyManager_CPropertyManager_Callback();
							return returnValue;
						}
						else
							return this->CModelDataSource::getPropertyManager();
					}
					virtual EarthView::World::Spatial3D::Dataset::CUserTypeManager* getUserTypeManager()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getUserTypeManager_CUserTypeManager_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::Dataset::CUserTypeManager* returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getUserTypeManager_CUserTypeManager_Callback();
							return returnValue;
						}
						else
							return this->CModelDataSource::getUserTypeManager();
					}
					virtual EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager* getMeshEffectRefManager()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getMeshEffectRefManager_CMeshEffectRefManager_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager* returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getMeshEffectRefManager_CMeshEffectRefManager_Callback();
							return returnValue;
						}
						else
							return this->CModelDataSource::getMeshEffectRefManager();
					}
					virtual EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* getMeshTemplateDataset()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getMeshTemplateDataset_CMeshTemplateDataset_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getMeshTemplateDataset_CMeshTemplateDataset_Callback();
							return returnValue;
						}
						else
							return this->CModelDataSource::getMeshTemplateDataset();
					}
					virtual ev_bool closeDataset(_in EarthView::World::Spatial::GeoDataset::IDataset* dataset)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataSource_closeDataset_ev_bool_IDataset_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataSource_closeDataset_ev_bool_IDataset_Callback(dataset);
							return returnValue;
						}
						else
							return this->CModelDataSource::closeDataset(dataset);
					}
					virtual ev_bool createDataset(_in EVString name, _in const EarthView::World::Spatial::GeoDataset::IFields* attrFields, _in ev_bool istempl, _in ev_int32 srID)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataSource_createDataset_ev_bool_EVString_IFields_ev_bool_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataSource_createDataset_ev_bool_EVString_IFields_ev_bool_ev_int32_Callback(name_Char, attrFields, istempl, srID);
							return returnValue;
						}
						else
							return this->CModelDataSource::createDataset(name, attrFields, istempl, srID);
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeatureClass* createFeatureClass(_in const EVString& name, _inout EarthView::World::Spatial::GeoDataset::IGeometryField& geofield, _in const EarthView::World::Spatial::GeoDataset::IFields& fields)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EarthView::World::Spatial::GeoDataset::IFeatureClass* returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback(name_Char, &geofield, &fields);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CModelDataSource::createFeatureClass(name, geofield, fields);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getDatasetInfo(_in const EVString& datasetName)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* datasetName_Char = datasetName.makeBuffer();
							EarthView::World::Spatial::GeoDataset::IDataMetaInfo* returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback(datasetName_Char);
							return returnValue;
						}
						else
							return this->CModelDataSource::getDatasetInfo(datasetName);
					}
					virtual EarthView::World::Spatial3D::Dataset::DataSetVector getExistDataset(_in const EVString& datasetName)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getExistDataset_DataSetVector_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* datasetName_Char = datasetName.makeBuffer();
							EarthView::World::Spatial3D::Dataset::DataSetVector returnValue = *(EarthView::World::Spatial3D::Dataset::DataSetVector*)m_EarthView_World_Spatial3D_Dataset_CModelDataSource_getExistDataset_DataSetVector_EVString_Callback(datasetName_Char);
							return returnValue;
						}
						else
							return this->CModelDataSource::getExistDataset(datasetName);
					}
					virtual ev_bool updateDatasetInfo(_in EVString datasetName, _in EarthView::World::Spatial::GeoDataset::CDataMetaInfo* info)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataSource_updateDatasetInfo_ev_bool_EVString_CDataMetaInfo_Callback != NULL && this->isCustomExtend())
						{
							char* datasetName_Char = datasetName.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataSource_updateDatasetInfo_ev_bool_EVString_CDataMetaInfo_Callback(datasetName_Char, info);
							return returnValue;
						}
						else
							return this->CModelDataSource::updateDatasetInfo(datasetName, info);
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataSource_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataSource_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CModelDataSource::isValid();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* clone() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataSource_clone_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataSource_clone_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->CModelDataSource::clone();
					}
				};
				REGISTER_FACTORY_CLASS(CModelDataSourceProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CModelDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX;
					if (dynamic_cast<CModelDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataSource*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataSource::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataSource_getName_EVString_Callback* pCallback )
				{
					CModelDataSourceProxy* ptr = dynamic_cast<CModelDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CModelDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataSource::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_getSRID_ev_int32_EVString(void *pObjectXXXX, _in const char* datasetName )
				{
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::Spatial3D::Dataset::CModelDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX;
					if (dynamic_cast<CModelDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataSource*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataSource::getSRID(datasetName1);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getSRID(datasetName1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_getSRID_ev_int32_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataSource_getSRID_ev_int32_EVString_Callback* pCallback )
				{
					CModelDataSourceProxy* ptr = dynamic_cast<CModelDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_getSRID_ev_int32_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_getSRID_ev_int32_EVString_NoVirtual(void *pObjectXXXX, _in const char* datasetName )
				{
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::Spatial3D::Dataset::CModelDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataSource::getSRID(datasetName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_getType_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CModelDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX;
					if (dynamic_cast<CModelDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataSource*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataSource::getType();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_getType_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataSource_getType_ev_int32_Callback* pCallback )
				{
					CModelDataSourceProxy* ptr = dynamic_cast<CModelDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_getType_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_getType_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CModelDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataSource::getType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfos*  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial3D::Dataset::CModelDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX;
					if (dynamic_cast<CModelDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataSource*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataMetaInfos* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataSource::getDatasetInfos((EarthView::World::Spatial::GeoDataset::EVDatasetType)type);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback* pCallback )
				{
					CModelDataSourceProxy* ptr = dynamic_cast<CModelDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfos*  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_NoVirtual(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial3D::Dataset::CModelDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataMetaInfos* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataSource::getDatasetInfos((EarthView::World::Spatial::GeoDataset::EVDatasetType)type);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfos*  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_getModelDatasetInfos_IDataMetaInfos(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CModelDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX;
					if (dynamic_cast<CModelDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataSource*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataMetaInfos* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataSource::getModelDatasetInfos();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataMetaInfos* objXXXX = ptrNativeObject->getModelDatasetInfos();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_getModelDatasetInfos_IDataMetaInfos( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataSource_getModelDatasetInfos_IDataMetaInfos_Callback* pCallback )
				{
					CModelDataSourceProxy* ptr = dynamic_cast<CModelDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_getModelDatasetInfos_IDataMetaInfos(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfos*  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_getModelDatasetInfos_IDataMetaInfos_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CModelDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataMetaInfos* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataSource::getModelDatasetInfos();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_openDataset_IDataset_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Dataset::CModelDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX;
					if (dynamic_cast<CModelDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataSource*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataSource::openDataset(name1);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->openDataset(name1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_openDataset_IDataset_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataSource_openDataset_IDataset_EVString_Callback* pCallback )
				{
					CModelDataSourceProxy* ptr = dynamic_cast<CModelDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_openDataset_IDataset_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_openDataset_IDataset_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Dataset::CModelDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataSource::openDataset(name1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_openDataset_IDataset_CEVSpatialServer_CWebDataset(_in EarthView::World::Spatial::CEVSpatialServer* pNetServer, _in EarthView::World::Spatial::CWebDataset* pNetDataset )
				{
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = EarthView::World::Spatial3D::Dataset::CModelDataSource::openDataset(pNetServer, pNetDataset);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_closeWebDataset_void_IDataset(_in EarthView::World::Spatial::GeoDataset::IDataset* pdataset )
				{
					EarthView::World::Spatial3D::Dataset::CModelDataSource::closeWebDataset(pdataset);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_deleteDataset_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Dataset::CModelDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX;
					if (dynamic_cast<CModelDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataSource*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataSource::deleteDataset(name1);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->deleteDataset(name1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_deleteDataset_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataSource_deleteDataset_ev_bool_EVString_Callback* pCallback )
				{
					CModelDataSourceProxy* ptr = dynamic_cast<CModelDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_deleteDataset_ev_bool_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_deleteDataset_ev_bool_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Dataset::CModelDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataSource::deleteDataset(name1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_toXML_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CModelDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX;
					if (dynamic_cast<CModelDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataSource*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataSource::toXML();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toXML();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataSource_toXML_EVString_Callback* pCallback )
				{
					CModelDataSourceProxy* ptr = dynamic_cast<CModelDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_toXML_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CModelDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataSource::toXML();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IPropertySet*  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_getPropertySet_IPropertySet(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CModelDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX;
					if (dynamic_cast<CModelDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataSource*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IPropertySet* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataSource::getPropertySet();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IPropertySet* objXXXX = ptrNativeObject->getPropertySet();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_getPropertySet_IPropertySet( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataSource_getPropertySet_IPropertySet_Callback* pCallback )
				{
					CModelDataSourceProxy* ptr = dynamic_cast<CModelDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_getPropertySet_IPropertySet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IPropertySet*  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_getPropertySet_IPropertySet_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CModelDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IPropertySet* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataSource::getPropertySet();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_getDatabase_CSqlDatabase(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CModelDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX;
					if (dynamic_cast<CModelDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataSource*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::Database::CSqlDatabase& objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataSource::getDatabase();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_getDatabase_CSqlDatabase( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataSource_getDatabase_CSqlDatabase_Callback* pCallback )
				{
					CModelDataSourceProxy* ptr = dynamic_cast<CModelDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_getDatabase_CSqlDatabase(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_getDatabase_CSqlDatabase_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CModelDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX;
					EarthView::World::Core::Database::CSqlDatabase& objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataSource::getDatabase();
					EarthView::World::Core::Database::CSqlDatabase *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Dataset::CPropertyManager*  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_getPropertyManager_CPropertyManager(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CModelDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX;
					if (dynamic_cast<CModelDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataSource*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial3D::Dataset::CPropertyManager* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataSource::getPropertyManager();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial3D::Dataset::CPropertyManager* objXXXX = ptrNativeObject->getPropertyManager();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_getPropertyManager_CPropertyManager( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataSource_getPropertyManager_CPropertyManager_Callback* pCallback )
				{
					CModelDataSourceProxy* ptr = dynamic_cast<CModelDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_getPropertyManager_CPropertyManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Dataset::CPropertyManager*  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_getPropertyManager_CPropertyManager_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CModelDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CPropertyManager* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataSource::getPropertyManager();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Dataset::CUserTypeManager*  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_getUserTypeManager_CUserTypeManager(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CModelDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX;
					if (dynamic_cast<CModelDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataSource*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial3D::Dataset::CUserTypeManager* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataSource::getUserTypeManager();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial3D::Dataset::CUserTypeManager* objXXXX = ptrNativeObject->getUserTypeManager();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_getUserTypeManager_CUserTypeManager( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataSource_getUserTypeManager_CUserTypeManager_Callback* pCallback )
				{
					CModelDataSourceProxy* ptr = dynamic_cast<CModelDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_getUserTypeManager_CUserTypeManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Dataset::CUserTypeManager*  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_getUserTypeManager_CUserTypeManager_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CModelDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CUserTypeManager* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataSource::getUserTypeManager();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager*  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_getMeshEffectRefManager_CMeshEffectRefManager(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CModelDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX;
					if (dynamic_cast<CModelDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataSource*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataSource::getMeshEffectRefManager();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager* objXXXX = ptrNativeObject->getMeshEffectRefManager();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_getMeshEffectRefManager_CMeshEffectRefManager( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataSource_getMeshEffectRefManager_CMeshEffectRefManager_Callback* pCallback )
				{
					CModelDataSourceProxy* ptr = dynamic_cast<CModelDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_getMeshEffectRefManager_CMeshEffectRefManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager*  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_getMeshEffectRefManager_CMeshEffectRefManager_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CModelDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataSource::getMeshEffectRefManager();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_getMeshTemplateDataset_CMeshTemplateDataset(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CModelDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX;
					if (dynamic_cast<CModelDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataSource*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataSource::getMeshTemplateDataset();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* objXXXX = ptrNativeObject->getMeshTemplateDataset();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_getMeshTemplateDataset_CMeshTemplateDataset( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataSource_getMeshTemplateDataset_CMeshTemplateDataset_Callback* pCallback )
				{
					CModelDataSourceProxy* ptr = dynamic_cast<CModelDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_getMeshTemplateDataset_CMeshTemplateDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_getMeshTemplateDataset_CMeshTemplateDataset_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CModelDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataSource::getMeshTemplateDataset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Dataset::CEffectDataSource*  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_getEffectDataSource_CEffectDataSource(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CModelDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectDataSource* objXXXX = ptrNativeObject->getEffectDataSource();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_closeDataset_ev_bool_IDataset(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* dataset )
				{
					EarthView::World::Spatial3D::Dataset::CModelDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX;
					if (dynamic_cast<CModelDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataSource*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataSource::closeDataset(dataset);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->closeDataset(dataset);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_closeDataset_ev_bool_IDataset( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataSource_closeDataset_ev_bool_IDataset_Callback* pCallback )
				{
					CModelDataSourceProxy* ptr = dynamic_cast<CModelDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_closeDataset_ev_bool_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_closeDataset_ev_bool_IDataset_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* dataset )
				{
					EarthView::World::Spatial3D::Dataset::CModelDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataSource::closeDataset(dataset);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_createDataset_ev_bool_EVString_IFields_ev_bool_ev_int32(void *pObjectXXXX, _in char* name, _in const EarthView::World::Spatial::GeoDataset::IFields* attrFields, _in ev_bool istempl, _in ev_int32 srID )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Dataset::CModelDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX;
					if (dynamic_cast<CModelDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataSource*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataSource::createDataset(name1, attrFields, istempl, srID);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->createDataset(name1, attrFields, istempl, srID);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_createDataset_ev_bool_EVString_IFields_ev_bool_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataSource_createDataset_ev_bool_EVString_IFields_ev_bool_ev_int32_Callback* pCallback )
				{
					CModelDataSourceProxy* ptr = dynamic_cast<CModelDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_createDataset_ev_bool_EVString_IFields_ev_bool_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_createDataset_ev_bool_EVString_IFields_ev_bool_ev_int32_NoVirtual(void *pObjectXXXX, _in char* name, _in const EarthView::World::Spatial::GeoDataset::IFields* attrFields, _in ev_bool istempl, _in ev_int32 srID )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Dataset::CModelDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataSource::createDataset(name1, attrFields, istempl, srID);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureClass*  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields(void *pObjectXXXX, _in const char* name, _inout void* geofield, _in const void* fields )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Dataset::CModelDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX;
					if (dynamic_cast<CModelDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataSource*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeatureClass* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataSource::createFeatureClass(name1, *(EarthView::World::Spatial::GeoDataset::IGeometryField*)geofield, *(EarthView::World::Spatial::GeoDataset::IFields*)fields);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback* pCallback )
				{
					CModelDataSourceProxy* ptr = dynamic_cast<CModelDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureClass*  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_NoVirtual(void *pObjectXXXX, _in const char* name, _inout void* geofield, _in const void* fields )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Dataset::CModelDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeatureClass* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataSource::createFeatureClass(name1, *(EarthView::World::Spatial::GeoDataset::IGeometryField*)geofield, *(EarthView::World::Spatial::GeoDataset::IFields*)fields);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_getDatasetVersionFromDatasource_ev_int32_EVString(void *pObjectXXXX, _in const char* datasetname )
				{
					EarthView::World::Core::ev_string datasetname1 = datasetname;
					EarthView::World::Spatial3D::Dataset::CModelDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getDatasetVersionFromDatasource(datasetname1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_getDatasetInfo_IDataMetaInfo_EVString(void *pObjectXXXX, _in const char* datasetName )
				{
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::Spatial3D::Dataset::CModelDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX;
					if (dynamic_cast<CModelDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataSource*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataSource::getDatasetInfo(datasetName1);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->getDatasetInfo(datasetName1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_getDatasetInfo_IDataMetaInfo_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback* pCallback )
				{
					CModelDataSourceProxy* ptr = dynamic_cast<CModelDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_getDatasetInfo_IDataMetaInfo_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_getDatasetInfo_IDataMetaInfo_EVString_NoVirtual(void *pObjectXXXX, _in const char* datasetName )
				{
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::Spatial3D::Dataset::CModelDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataSource::getDatasetInfo(datasetName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_getExistDataset_DataSetVector_EVString(void *pObjectXXXX, _in const char* datasetName )
				{
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::Spatial3D::Dataset::CModelDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX;
					if (dynamic_cast<CModelDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataSource*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial3D::Dataset::DataSetVector objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataSource::getExistDataset(datasetName1);
						EarthView::World::Spatial3D::Dataset::DataSetVector *pXXXX = new EarthView::World::Spatial3D::Dataset::DataSetVector(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial3D::Dataset::DataSetVector objXXXX = ptrNativeObject->getExistDataset(datasetName1);
						EarthView::World::Spatial3D::Dataset::DataSetVector *pXXXX = new EarthView::World::Spatial3D::Dataset::DataSetVector(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_getExistDataset_DataSetVector_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataSource_getExistDataset_DataSetVector_EVString_Callback* pCallback )
				{
					CModelDataSourceProxy* ptr = dynamic_cast<CModelDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_getExistDataset_DataSetVector_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_getExistDataset_DataSetVector_EVString_NoVirtual(void *pObjectXXXX, _in const char* datasetName )
				{
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::Spatial3D::Dataset::CModelDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::DataSetVector objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataSource::getExistDataset(datasetName1);
					EarthView::World::Spatial3D::Dataset::DataSetVector *pXXXX = new EarthView::World::Spatial3D::Dataset::DataSetVector(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_isInEdit_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CModelDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isInEdit();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_isInEdit_ev_bool_EVString(void *pObjectXXXX, _in const char* datasetname )
				{
					EarthView::World::Core::ev_string datasetname1 = datasetname;
					EarthView::World::Spatial3D::Dataset::CModelDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isInEdit(datasetname1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_updateDatasetInfo_ev_bool_EVString_CDataMetaInfo(void *pObjectXXXX, _in char* datasetName, _in EarthView::World::Spatial::GeoDataset::CDataMetaInfo* info )
				{
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::Spatial3D::Dataset::CModelDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX;
					if (dynamic_cast<CModelDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataSource*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataSource::updateDatasetInfo(datasetName1, info);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->updateDatasetInfo(datasetName1, info);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_updateDatasetInfo_ev_bool_EVString_CDataMetaInfo( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataSource_updateDatasetInfo_ev_bool_EVString_CDataMetaInfo_Callback* pCallback )
				{
					CModelDataSourceProxy* ptr = dynamic_cast<CModelDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_updateDatasetInfo_ev_bool_EVString_CDataMetaInfo(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_updateDatasetInfo_ev_bool_EVString_CDataMetaInfo_NoVirtual(void *pObjectXXXX, _in char* datasetName, _in EarthView::World::Spatial::GeoDataset::CDataMetaInfo* info )
				{
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::Spatial3D::Dataset::CModelDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataSource::updateDatasetInfo(datasetName1, info);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_getDataSourceUseable_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CModelDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getDataSourceUseable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataSource_isDatasetValid_ev_bool_EVString(void *pObjectXXXX, _in const char* datasetName )
				{
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::Spatial3D::Dataset::CModelDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isDatasetValid(datasetName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataSource_isValid_ev_bool_Callback* pCallback )
				{
					CModelDataSourceProxy* ptr = dynamic_cast<CModelDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_clone_IDataSource( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataSource_clone_IDataSource_Callback* pCallback )
				{
					CModelDataSourceProxy* ptr = dynamic_cast<CModelDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataSource_clone_IDataSource(pCallback);
					}
				}
			}
		}
	}
}
