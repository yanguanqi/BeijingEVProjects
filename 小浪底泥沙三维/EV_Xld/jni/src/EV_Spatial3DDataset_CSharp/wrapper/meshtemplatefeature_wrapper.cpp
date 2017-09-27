/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataset/meshtemplatefeature.h"
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
		namespace Spatial3D
		{
			namespace Dataset
			{
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getValue_void_CVariant_EVString_Callback)(_out void* value, _in char*& name);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setValue_void_CVariant_EVString_Callback)(_in const void* value, _in char*& name);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setMeshDataRef_void_ev_uint32_Callback)(_in ev_uint32 meshID);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getPropertyType_EVString_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IFields*  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getPropertyFieldRef_IFields_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getID_ev_uint32_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getGeometryType_EVGeometryType_Callback)();
				typedef const EarthView::World::Spatial::GeoDataset::IFields*  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getFieldsRef_IFields_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getFieldCount_ev_uint32_Callback)();
				typedef const EarthView::World::Spatial::GeoDataset::IField*  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getFieldRef_IField_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_findField_ev_int32_EVString_Callback)(_in char*& fieldName);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getValue_void_CVariant_ev_uint32_Callback)(_out void* value, _in ev_uint32 index);
				typedef const EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getGeometryRef_IGeometry_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getEnvelopeRef_IEnvelope_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setGeometry_void_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setValue_void_CVariant_ev_uint32_Callback)(_in const void* value, _in ev_uint32 index);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_deleteFeature_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_saveFeature_ev_bool_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IFeature*  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_clone_IFeature_Callback)();
				class CMeshTemplateFeatureProxy : public EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature
				{
				private:
					EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getValue_void_CVariant_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getValue_void_CVariant_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setValue_void_CVariant_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setValue_void_CVariant_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setMeshDataRef_void_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setMeshDataRef_void_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getPropertyType_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getPropertyType_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getPropertyFieldRef_IFields_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getPropertyFieldRef_IFields_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getID_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getID_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getGeometryType_EVGeometryType_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getGeometryType_EVGeometryType_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getFieldsRef_IFields_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getFieldsRef_IFields_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getFieldCount_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getFieldCount_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getFieldRef_IField_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getFieldRef_IField_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_findField_ev_int32_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_findField_ev_int32_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getValue_void_CVariant_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getValue_void_CVariant_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getGeometryRef_IGeometry_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getGeometryRef_IGeometry_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getEnvelopeRef_IEnvelope_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setGeometry_void_IGeometry_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setGeometry_void_IGeometry_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setValue_void_CVariant_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setValue_void_CVariant_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_deleteFeature_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_deleteFeature_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_saveFeature_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_saveFeature_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_clone_IFeature_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_clone_IFeature_Callback;
				public:
					CMeshTemplateFeatureProxy(EarthView::World::Core::CNameValuePairList *pList) : CMeshTemplateFeature(pList)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getValue_void_CVariant_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setValue_void_CVariant_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setMeshDataRef_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getPropertyType_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getPropertyFieldRef_IFields_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getID_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getGeometryType_EVGeometryType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getFieldsRef_IFields_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getFieldCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getFieldRef_IField_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_findField_ev_int32_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getValue_void_CVariant_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getGeometryRef_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getEnvelopeRef_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setGeometry_void_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setValue_void_CVariant_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_deleteFeature_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_saveFeature_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_clone_IFeature_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getValue_void_CVariant_EVString(EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getValue_void_CVariant_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getValue_void_CVariant_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setValue_void_CVariant_EVString(EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setValue_void_CVariant_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setValue_void_CVariant_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setMeshDataRef_void_ev_uint32(EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setMeshDataRef_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setMeshDataRef_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getPropertyType_EVString(EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getPropertyType_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getPropertyType_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getPropertyFieldRef_IFields(EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getPropertyFieldRef_IFields_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getPropertyFieldRef_IFields_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getID_ev_uint32(EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getID_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getID_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getGeometryType_EVGeometryType(EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getGeometryType_EVGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getGeometryType_EVGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getFieldsRef_IFields(EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getFieldsRef_IFields_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getFieldsRef_IFields_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getFieldCount_ev_uint32(EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getFieldCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getFieldCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getFieldRef_IField_ev_uint32(EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getFieldRef_IField_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getFieldRef_IField_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_findField_ev_int32_EVString(EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_findField_ev_int32_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_findField_ev_int32_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getValue_void_CVariant_ev_uint32(EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getValue_void_CVariant_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getValue_void_CVariant_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getGeometryRef_IGeometry(EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getGeometryRef_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getGeometryRef_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getEnvelopeRef_IEnvelope(EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getEnvelopeRef_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getEnvelopeRef_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setGeometry_void_IGeometry(EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setGeometry_void_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setGeometry_void_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setValue_void_CVariant_ev_uint32(EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setValue_void_CVariant_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setValue_void_CVariant_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_deleteFeature_ev_bool(EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_deleteFeature_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_deleteFeature_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_saveFeature_ev_bool(EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_saveFeature_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_saveFeature_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_clone_IFeature(EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_clone_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_clone_IFeature_Callback = pCallback;
					}
					virtual ev_uint32 getID() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getID_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getID_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CMeshTemplateFeature::getID();
					}
					virtual const EarthView::World::Spatial::GeoDataset::IFields* getFieldsRef() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getFieldsRef_IFields_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IFields* returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getFieldsRef_IFields_Callback();
							return returnValue;
						}
						else
							return this->CMeshTemplateFeature::getFieldsRef();
					}
					virtual ev_uint32 getFieldCount() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getFieldCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getFieldCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CMeshTemplateFeature::getFieldCount();
					}
					virtual const EarthView::World::Spatial::GeoDataset::IField* getFieldRef(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getFieldRef_IField_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IField* returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getFieldRef_IField_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CMeshTemplateFeature::getFieldRef(index);
					}
					virtual ev_int32 findField(_in const EVString& fieldName) const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_findField_ev_int32_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* fieldName_Char = fieldName.makeBuffer();
							ev_int32 returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_findField_ev_int32_EVString_Callback(fieldName_Char);
							return returnValue;
						}
						else
							return this->CMeshTemplateFeature::findField(fieldName);
					}
					virtual void getValue(_out EarthView::World::Core::CVariant& value, _in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getValue_void_CVariant_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getValue_void_CVariant_ev_uint32_Callback(&value, index);
						}
						else
							return this->CMeshTemplateFeature::getValue(value, index);
					}
					virtual void getValue(_out EarthView::World::Core::CVariant& value, _in const EVString& name) const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getValue_void_CVariant_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getValue_void_CVariant_EVString_Callback(&value, name_Char);
						}
						else
							return this->CMeshTemplateFeature::getValue(value, name);
					}
					virtual const EarthView::World::Spatial::Geometry::IGeometry* getGeometryRef() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getGeometryRef_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getGeometryRef_IGeometry_Callback();
							return returnValue;
						}
						else
							return this->CMeshTemplateFeature::getGeometryRef();
					}
					virtual void setGeometry(_in const EarthView::World::Spatial::Geometry::IGeometry* geom)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setGeometry_void_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setGeometry_void_IGeometry_Callback(geom);
						}
						else
							return this->CMeshTemplateFeature::setGeometry(geom);
					}
					virtual void setValue(_in const EarthView::World::Core::CVariant& value, _in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setValue_void_CVariant_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setValue_void_CVariant_ev_uint32_Callback(&value, index);
						}
						else
							return this->CMeshTemplateFeature::setValue(value, index);
					}
					virtual void setValue(_in const EarthView::World::Core::CVariant& value, _in const EVString& name)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setValue_void_CVariant_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setValue_void_CVariant_EVString_Callback(&value, name_Char);
						}
						else
							return this->CMeshTemplateFeature::setValue(value, name);
					}
					virtual ev_bool deleteFeature()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_deleteFeature_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_deleteFeature_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CMeshTemplateFeature::deleteFeature();
					}
					virtual void setMeshDataRef(_in ev_uint32 meshID)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setMeshDataRef_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setMeshDataRef_void_ev_uint32_Callback(meshID);
						}
						else
							return this->CMeshTemplateFeature::setMeshDataRef(meshID);
					}
					virtual EVString getPropertyType()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getPropertyType_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getPropertyType_EVString_Callback();
							return returnValue;
						}
						else
							return this->CMeshTemplateFeature::getPropertyType();
					}
					virtual EarthView::World::Spatial::GeoDataset::IFields* getPropertyFieldRef()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getPropertyFieldRef_IFields_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFields* returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getPropertyFieldRef_IFields_Callback();
							return returnValue;
						}
						else
							return this->CMeshTemplateFeature::getPropertyFieldRef();
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeature* clone() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_clone_IFeature_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeature* returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_clone_IFeature_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CMeshTemplateFeature::clone();
					}
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getGeometryType_EVGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVGeometryType)m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getGeometryType_EVGeometryType_Callback();
							return returnValue;
						}
						else
							return this->CMeshTemplateFeature::getGeometryType();
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getEnvelopeRef_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CMeshTemplateFeature::getEnvelopeRef();
					}
					virtual ev_bool saveFeature()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_saveFeature_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_saveFeature_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CMeshTemplateFeature::saveFeature();
					}
				};
				REGISTER_FACTORY_CLASS(CMeshTemplateFeatureProxy);
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getID_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX;
					if (dynamic_cast<CMeshTemplateFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::getID();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getID();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getID_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getID_ev_uint32_Callback* pCallback )
				{
					CMeshTemplateFeatureProxy* ptr = dynamic_cast<CMeshTemplateFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getID_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getID_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::getID();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IFields*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getFieldsRef_IFields(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX;
					if (dynamic_cast<CMeshTemplateFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::getFieldsRef();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->getFieldsRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getFieldsRef_IFields( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getFieldsRef_IFields_Callback* pCallback )
				{
					CMeshTemplateFeatureProxy* ptr = dynamic_cast<CMeshTemplateFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getFieldsRef_IFields(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IFields*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getFieldsRef_IFields_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::getFieldsRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getFieldCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX;
					if (dynamic_cast<CMeshTemplateFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::getFieldCount();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getFieldCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getFieldCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getFieldCount_ev_uint32_Callback* pCallback )
				{
					CMeshTemplateFeatureProxy* ptr = dynamic_cast<CMeshTemplateFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getFieldCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getFieldCount_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::getFieldCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getFieldRef_IField_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX;
					if (dynamic_cast<CMeshTemplateFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::getFieldRef(index);
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->getFieldRef(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getFieldRef_IField_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getFieldRef_IField_ev_uint32_Callback* pCallback )
				{
					CMeshTemplateFeatureProxy* ptr = dynamic_cast<CMeshTemplateFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getFieldRef_IField_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getFieldRef_IField_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::getFieldRef(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_findField_ev_int32_EVString(void *pObjectXXXX, _in const char* fieldName )
				{
					EarthView::World::Core::ev_string fieldName1 = fieldName;
					const EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX;
					if (dynamic_cast<CMeshTemplateFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::findField(fieldName1);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->findField(fieldName1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_findField_ev_int32_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_findField_ev_int32_EVString_Callback* pCallback )
				{
					CMeshTemplateFeatureProxy* ptr = dynamic_cast<CMeshTemplateFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_findField_ev_int32_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_findField_ev_int32_EVString_NoVirtual(void *pObjectXXXX, _in const char* fieldName )
				{
					EarthView::World::Core::ev_string fieldName1 = fieldName;
					const EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::findField(fieldName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getValue_void_CVariant_ev_uint32(void *pObjectXXXX, _out void* value, _in ev_uint32 index )
				{
					const EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX;
					if (dynamic_cast<CMeshTemplateFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::getValue(*(EarthView::World::Core::CVariant*)value, index);
					else
						ptrNativeObject->getValue(*(EarthView::World::Core::CVariant*)value, index);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getValue_void_CVariant_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getValue_void_CVariant_ev_uint32_Callback* pCallback )
				{
					CMeshTemplateFeatureProxy* ptr = dynamic_cast<CMeshTemplateFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getValue_void_CVariant_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getValue_void_CVariant_ev_uint32_NoVirtual(void *pObjectXXXX, _out void* value, _in ev_uint32 index )
				{
					const EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::getValue(*(EarthView::World::Core::CVariant*)value, index);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getValue_void_CVariant_EVString(void *pObjectXXXX, _out void* value, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					const EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX;
					if (dynamic_cast<CMeshTemplateFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::getValue(*(EarthView::World::Core::CVariant*)value, name1);
					else
						ptrNativeObject->getValue(*(EarthView::World::Core::CVariant*)value, name1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getValue_void_CVariant_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getValue_void_CVariant_EVString_Callback* pCallback )
				{
					CMeshTemplateFeatureProxy* ptr = dynamic_cast<CMeshTemplateFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getValue_void_CVariant_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getValue_void_CVariant_EVString_NoVirtual(void *pObjectXXXX, _out void* value, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					const EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::getValue(*(EarthView::World::Core::CVariant*)value, name1);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getGeometryRef_IGeometry(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX;
					if (dynamic_cast<CMeshTemplateFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::getGeometryRef();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->getGeometryRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getGeometryRef_IGeometry( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getGeometryRef_IGeometry_Callback* pCallback )
				{
					CMeshTemplateFeatureProxy* ptr = dynamic_cast<CMeshTemplateFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getGeometryRef_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getGeometryRef_IGeometry_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::getGeometryRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setGeometry_void_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom )
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX;
					if (dynamic_cast<CMeshTemplateFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::setGeometry(geom);
					else
						ptrNativeObject->setGeometry(geom);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setGeometry_void_IGeometry( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setGeometry_void_IGeometry_Callback* pCallback )
				{
					CMeshTemplateFeatureProxy* ptr = dynamic_cast<CMeshTemplateFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setGeometry_void_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setGeometry_void_IGeometry_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom )
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::setGeometry(geom);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setValue_void_CVariant_ev_uint32(void *pObjectXXXX, _in const void* value, _in ev_uint32 index )
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX;
					if (dynamic_cast<CMeshTemplateFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::setValue(*(EarthView::World::Core::CVariant*)value, index);
					else
						ptrNativeObject->setValue(*(EarthView::World::Core::CVariant*)value, index);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setValue_void_CVariant_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setValue_void_CVariant_ev_uint32_Callback* pCallback )
				{
					CMeshTemplateFeatureProxy* ptr = dynamic_cast<CMeshTemplateFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setValue_void_CVariant_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setValue_void_CVariant_ev_uint32_NoVirtual(void *pObjectXXXX, _in const void* value, _in ev_uint32 index )
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::setValue(*(EarthView::World::Core::CVariant*)value, index);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setValue_void_CVariant_EVString(void *pObjectXXXX, _in const void* value, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX;
					if (dynamic_cast<CMeshTemplateFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::setValue(*(EarthView::World::Core::CVariant*)value, name1);
					else
						ptrNativeObject->setValue(*(EarthView::World::Core::CVariant*)value, name1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setValue_void_CVariant_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setValue_void_CVariant_EVString_Callback* pCallback )
				{
					CMeshTemplateFeatureProxy* ptr = dynamic_cast<CMeshTemplateFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setValue_void_CVariant_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setValue_void_CVariant_EVString_NoVirtual(void *pObjectXXXX, _in const void* value, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::setValue(*(EarthView::World::Core::CVariant*)value, name1);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_deleteFeature_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX;
					if (dynamic_cast<CMeshTemplateFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::deleteFeature();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->deleteFeature();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_deleteFeature_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_deleteFeature_ev_bool_Callback* pCallback )
				{
					CMeshTemplateFeatureProxy* ptr = dynamic_cast<CMeshTemplateFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_deleteFeature_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_deleteFeature_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::deleteFeature();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setMeshDataRef_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 meshID )
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX;
					if (dynamic_cast<CMeshTemplateFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::setMeshDataRef(meshID);
					else
						ptrNativeObject->setMeshDataRef(meshID);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setMeshDataRef_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setMeshDataRef_void_ev_uint32_Callback* pCallback )
				{
					CMeshTemplateFeatureProxy* ptr = dynamic_cast<CMeshTemplateFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setMeshDataRef_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_setMeshDataRef_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 meshID )
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::setMeshDataRef(meshID);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getPropertyType_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX;
					if (dynamic_cast<CMeshTemplateFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::getPropertyType();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getPropertyType();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getPropertyType_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getPropertyType_EVString_Callback* pCallback )
				{
					CMeshTemplateFeatureProxy* ptr = dynamic_cast<CMeshTemplateFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getPropertyType_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getPropertyType_EVString_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::getPropertyType();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFields*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getPropertyFieldRef_IFields(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX;
					if (dynamic_cast<CMeshTemplateFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::getPropertyFieldRef();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->getPropertyFieldRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getPropertyFieldRef_IFields( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getPropertyFieldRef_IFields_Callback* pCallback )
				{
					CMeshTemplateFeatureProxy* ptr = dynamic_cast<CMeshTemplateFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getPropertyFieldRef_IFields(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFields*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getPropertyFieldRef_IFields_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::getPropertyFieldRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_clone_IFeature(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX;
					if (dynamic_cast<CMeshTemplateFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::clone();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->clone();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_clone_IFeature( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_clone_IFeature_Callback* pCallback )
				{
					CMeshTemplateFeatureProxy* ptr = dynamic_cast<CMeshTemplateFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_clone_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_clone_IFeature_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getGeometryType_EVGeometryType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getGeometryType_EVGeometryType_Callback* pCallback )
				{
					CMeshTemplateFeatureProxy* ptr = dynamic_cast<CMeshTemplateFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getGeometryType_EVGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getEnvelopeRef_IEnvelope_Callback* pCallback )
				{
					CMeshTemplateFeatureProxy* ptr = dynamic_cast<CMeshTemplateFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_getEnvelopeRef_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_saveFeature_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_saveFeature_ev_bool_Callback* pCallback )
				{
					CMeshTemplateFeatureProxy* ptr = dynamic_cast<CMeshTemplateFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateFeature_saveFeature_ev_bool(pCallback);
					}
				}
			}
		}
	}
}
