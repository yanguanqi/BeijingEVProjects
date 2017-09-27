/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataset/effectfeature.h"
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
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_getValue_void_CVariant_EVString_Callback)(_out void* varValue, _in char*& name);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_setValue_void_CVariant_EVString_Callback)(_in const void* varValue, _in char*& name);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_getID_ev_uint32_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_getGeometryType_EVGeometryType_Callback)();
				typedef const EarthView::World::Spatial::GeoDataset::IFields*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_getFieldsRef_IFields_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_getFieldCount_ev_uint32_Callback)();
				typedef const EarthView::World::Spatial::GeoDataset::IField*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_getFieldRef_IField_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_findField_ev_int32_EVString_Callback)(_in char*& fieldName);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_getValue_void_CVariant_ev_uint32_Callback)(_out void* value, _in ev_uint32 index);
				typedef const EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_getGeometryRef_IGeometry_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_getEnvelopeRef_IEnvelope_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_setGeometry_void_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_setValue_void_CVariant_ev_uint32_Callback)(_in const void* value, _in ev_uint32 index);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_deleteFeature_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_saveFeature_ev_bool_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IFeature*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_clone_IFeature_Callback)();
				class CEffectFeatureProxy : public EarthView::World::Spatial3D::Dataset::CEffectFeature
				{
				private:
					EarthView_World_Spatial3D_Dataset_CEffectFeature_getValue_void_CVariant_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectFeature_getValue_void_CVariant_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectFeature_setValue_void_CVariant_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectFeature_setValue_void_CVariant_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectFeature_getID_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectFeature_getID_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectFeature_getGeometryType_EVGeometryType_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectFeature_getGeometryType_EVGeometryType_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectFeature_getFieldsRef_IFields_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectFeature_getFieldsRef_IFields_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectFeature_getFieldCount_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectFeature_getFieldCount_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectFeature_getFieldRef_IField_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectFeature_getFieldRef_IField_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectFeature_findField_ev_int32_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectFeature_findField_ev_int32_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectFeature_getValue_void_CVariant_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectFeature_getValue_void_CVariant_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectFeature_getGeometryRef_IGeometry_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectFeature_getGeometryRef_IGeometry_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectFeature_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectFeature_getEnvelopeRef_IEnvelope_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectFeature_setGeometry_void_IGeometry_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectFeature_setGeometry_void_IGeometry_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectFeature_setValue_void_CVariant_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectFeature_setValue_void_CVariant_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectFeature_deleteFeature_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectFeature_deleteFeature_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectFeature_saveFeature_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectFeature_saveFeature_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectFeature_clone_IFeature_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectFeature_clone_IFeature_Callback;
				public:
					CEffectFeatureProxy(EarthView::World::Core::CNameValuePairList *pList) : CEffectFeature(pList)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectFeature_getValue_void_CVariant_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectFeature_setValue_void_CVariant_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectFeature_getID_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectFeature_getGeometryType_EVGeometryType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectFeature_getFieldsRef_IFields_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectFeature_getFieldCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectFeature_getFieldRef_IField_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectFeature_findField_ev_int32_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectFeature_getValue_void_CVariant_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectFeature_getGeometryRef_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectFeature_getEnvelopeRef_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectFeature_setGeometry_void_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectFeature_setValue_void_CVariant_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectFeature_deleteFeature_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectFeature_saveFeature_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectFeature_clone_IFeature_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_getValue_void_CVariant_EVString(EarthView_World_Spatial3D_Dataset_CEffectFeature_getValue_void_CVariant_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectFeature_getValue_void_CVariant_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_setValue_void_CVariant_EVString(EarthView_World_Spatial3D_Dataset_CEffectFeature_setValue_void_CVariant_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectFeature_setValue_void_CVariant_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_getID_ev_uint32(EarthView_World_Spatial3D_Dataset_CEffectFeature_getID_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectFeature_getID_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_getGeometryType_EVGeometryType(EarthView_World_Spatial3D_Dataset_CEffectFeature_getGeometryType_EVGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectFeature_getGeometryType_EVGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_getFieldsRef_IFields(EarthView_World_Spatial3D_Dataset_CEffectFeature_getFieldsRef_IFields_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectFeature_getFieldsRef_IFields_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_getFieldCount_ev_uint32(EarthView_World_Spatial3D_Dataset_CEffectFeature_getFieldCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectFeature_getFieldCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_getFieldRef_IField_ev_uint32(EarthView_World_Spatial3D_Dataset_CEffectFeature_getFieldRef_IField_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectFeature_getFieldRef_IField_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_findField_ev_int32_EVString(EarthView_World_Spatial3D_Dataset_CEffectFeature_findField_ev_int32_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectFeature_findField_ev_int32_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_getValue_void_CVariant_ev_uint32(EarthView_World_Spatial3D_Dataset_CEffectFeature_getValue_void_CVariant_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectFeature_getValue_void_CVariant_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_getGeometryRef_IGeometry(EarthView_World_Spatial3D_Dataset_CEffectFeature_getGeometryRef_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectFeature_getGeometryRef_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_getEnvelopeRef_IEnvelope(EarthView_World_Spatial3D_Dataset_CEffectFeature_getEnvelopeRef_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectFeature_getEnvelopeRef_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_setGeometry_void_IGeometry(EarthView_World_Spatial3D_Dataset_CEffectFeature_setGeometry_void_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectFeature_setGeometry_void_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_setValue_void_CVariant_ev_uint32(EarthView_World_Spatial3D_Dataset_CEffectFeature_setValue_void_CVariant_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectFeature_setValue_void_CVariant_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_deleteFeature_ev_bool(EarthView_World_Spatial3D_Dataset_CEffectFeature_deleteFeature_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectFeature_deleteFeature_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_saveFeature_ev_bool(EarthView_World_Spatial3D_Dataset_CEffectFeature_saveFeature_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectFeature_saveFeature_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_clone_IFeature(EarthView_World_Spatial3D_Dataset_CEffectFeature_clone_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectFeature_clone_IFeature_Callback = pCallback;
					}
					virtual ev_uint32 getID() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectFeature_getID_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectFeature_getID_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CEffectFeature::getID();
					}
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectFeature_getGeometryType_EVGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVGeometryType)m_EarthView_World_Spatial3D_Dataset_CEffectFeature_getGeometryType_EVGeometryType_Callback();
							return returnValue;
						}
						else
							return this->CEffectFeature::getGeometryType();
					}
					virtual const EarthView::World::Spatial::GeoDataset::IFields* getFieldsRef() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectFeature_getFieldsRef_IFields_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IFields* returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectFeature_getFieldsRef_IFields_Callback();
							return returnValue;
						}
						else
							return this->CEffectFeature::getFieldsRef();
					}
					virtual ev_uint32 getFieldCount() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectFeature_getFieldCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectFeature_getFieldCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CEffectFeature::getFieldCount();
					}
					virtual const EarthView::World::Spatial::GeoDataset::IField* getFieldRef(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectFeature_getFieldRef_IField_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IField* returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectFeature_getFieldRef_IField_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CEffectFeature::getFieldRef(index);
					}
					virtual ev_int32 findField(_in const EVString& fieldName) const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectFeature_findField_ev_int32_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* fieldName_Char = fieldName.makeBuffer();
							ev_int32 returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectFeature_findField_ev_int32_EVString_Callback(fieldName_Char);
							return returnValue;
						}
						else
							return this->CEffectFeature::findField(fieldName);
					}
					virtual void getValue(_out EarthView::World::Core::CVariant& varValue, _in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectFeature_getValue_void_CVariant_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Dataset_CEffectFeature_getValue_void_CVariant_ev_uint32_Callback(&varValue, index);
						}
						else
							return this->CEffectFeature::getValue(varValue, index);
					}
					virtual void getValue(_out EarthView::World::Core::CVariant& varValue, _in const EVString& name) const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectFeature_getValue_void_CVariant_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial3D_Dataset_CEffectFeature_getValue_void_CVariant_EVString_Callback(&varValue, name_Char);
						}
						else
							return this->CEffectFeature::getValue(varValue, name);
					}
					virtual const EarthView::World::Spatial::Geometry::IGeometry* getGeometryRef() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectFeature_getGeometryRef_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectFeature_getGeometryRef_IGeometry_Callback();
							return returnValue;
						}
						else
							return this->CEffectFeature::getGeometryRef();
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectFeature_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectFeature_getEnvelopeRef_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CEffectFeature::getEnvelopeRef();
					}
					virtual void setGeometry(_in const EarthView::World::Spatial::Geometry::IGeometry* geom)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectFeature_setGeometry_void_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Dataset_CEffectFeature_setGeometry_void_IGeometry_Callback(geom);
						}
						else
							return this->CEffectFeature::setGeometry(geom);
					}
					virtual void setValue(_in const EarthView::World::Core::CVariant& varValue, _in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectFeature_setValue_void_CVariant_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Dataset_CEffectFeature_setValue_void_CVariant_ev_uint32_Callback(&varValue, index);
						}
						else
							return this->CEffectFeature::setValue(varValue, index);
					}
					virtual void setValue(_in const EarthView::World::Core::CVariant& varValue, _in const EVString& name)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectFeature_setValue_void_CVariant_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial3D_Dataset_CEffectFeature_setValue_void_CVariant_EVString_Callback(&varValue, name_Char);
						}
						else
							return this->CEffectFeature::setValue(varValue, name);
					}
					virtual ev_bool deleteFeature()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectFeature_deleteFeature_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectFeature_deleteFeature_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEffectFeature::deleteFeature();
					}
					virtual ev_bool saveFeature()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectFeature_saveFeature_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectFeature_saveFeature_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEffectFeature::saveFeature();
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeature* clone() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectFeature_clone_IFeature_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeature* returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectFeature_clone_IFeature_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CEffectFeature::clone();
					}
				};
				REGISTER_FACTORY_CLASS(CEffectFeatureProxy);
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_isDelete_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isDelete();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_setIsDelete_void_ev_bool(void *pObjectXXXX, _in ev_bool val )
				{
					EarthView::World::Spatial3D::Dataset::CEffectFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX;
					ptrNativeObject->setIsDelete(val);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_isUpdate_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isUpdate();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_setIsUpdate_void_ev_bool(void *pObjectXXXX, _in ev_bool val )
				{
					EarthView::World::Spatial3D::Dataset::CEffectFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX;
					ptrNativeObject->setIsUpdate(val);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_isNewFeature_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isNewFeature();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_setIsNewFeature_void_ev_bool(void *pObjectXXXX, _in ev_bool val )
				{
					EarthView::World::Spatial3D::Dataset::CEffectFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX;
					ptrNativeObject->setIsNewFeature(val);
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_getID_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX;
					if (dynamic_cast<CEffectFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CEffectFeature*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectFeature::getID();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getID();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_getID_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectFeature_getID_ev_uint32_Callback* pCallback )
				{
					CEffectFeatureProxy* ptr = dynamic_cast<CEffectFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_getID_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_getID_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectFeature::getID();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_getGeometryType_EVGeometryType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX;
					if (dynamic_cast<CEffectFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CEffectFeature*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectFeature::getGeometryType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->getGeometryType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_getGeometryType_EVGeometryType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectFeature_getGeometryType_EVGeometryType_Callback* pCallback )
				{
					CEffectFeatureProxy* ptr = dynamic_cast<CEffectFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_getGeometryType_EVGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_getGeometryType_EVGeometryType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectFeature::getGeometryType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IFields*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_getFieldsRef_IFields(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX;
					if (dynamic_cast<CEffectFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CEffectFeature*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectFeature::getFieldsRef();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->getFieldsRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_getFieldsRef_IFields( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectFeature_getFieldsRef_IFields_Callback* pCallback )
				{
					CEffectFeatureProxy* ptr = dynamic_cast<CEffectFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_getFieldsRef_IFields(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IFields*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_getFieldsRef_IFields_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectFeature::getFieldsRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_getFieldCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX;
					if (dynamic_cast<CEffectFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CEffectFeature*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectFeature::getFieldCount();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getFieldCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_getFieldCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectFeature_getFieldCount_ev_uint32_Callback* pCallback )
				{
					CEffectFeatureProxy* ptr = dynamic_cast<CEffectFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_getFieldCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_getFieldCount_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectFeature::getFieldCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_getFieldRef_IField_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX;
					if (dynamic_cast<CEffectFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CEffectFeature*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectFeature::getFieldRef(index);
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->getFieldRef(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_getFieldRef_IField_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectFeature_getFieldRef_IField_ev_uint32_Callback* pCallback )
				{
					CEffectFeatureProxy* ptr = dynamic_cast<CEffectFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_getFieldRef_IField_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_getFieldRef_IField_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectFeature::getFieldRef(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_findField_ev_int32_EVString(void *pObjectXXXX, _in const char* fieldName )
				{
					EarthView::World::Core::ev_string fieldName1 = fieldName;
					const EarthView::World::Spatial3D::Dataset::CEffectFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX;
					if (dynamic_cast<CEffectFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CEffectFeature*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectFeature::findField(fieldName1);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->findField(fieldName1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_findField_ev_int32_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectFeature_findField_ev_int32_EVString_Callback* pCallback )
				{
					CEffectFeatureProxy* ptr = dynamic_cast<CEffectFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_findField_ev_int32_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_findField_ev_int32_EVString_NoVirtual(void *pObjectXXXX, _in const char* fieldName )
				{
					EarthView::World::Core::ev_string fieldName1 = fieldName;
					const EarthView::World::Spatial3D::Dataset::CEffectFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectFeature::findField(fieldName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_getValue_void_CVariant_ev_uint32(void *pObjectXXXX, _out void* varValue, _in ev_uint32 index )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX;
					if (dynamic_cast<CEffectFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CEffectFeature*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectFeature::getValue(*(EarthView::World::Core::CVariant*)varValue, index);
					else
						ptrNativeObject->getValue(*(EarthView::World::Core::CVariant*)varValue, index);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_getValue_void_CVariant_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectFeature_getValue_void_CVariant_ev_uint32_Callback* pCallback )
				{
					CEffectFeatureProxy* ptr = dynamic_cast<CEffectFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_getValue_void_CVariant_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_getValue_void_CVariant_ev_uint32_NoVirtual(void *pObjectXXXX, _out void* varValue, _in ev_uint32 index )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectFeature::getValue(*(EarthView::World::Core::CVariant*)varValue, index);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_getValue_void_CVariant_EVString(void *pObjectXXXX, _out void* varValue, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					const EarthView::World::Spatial3D::Dataset::CEffectFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX;
					if (dynamic_cast<CEffectFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CEffectFeature*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectFeature::getValue(*(EarthView::World::Core::CVariant*)varValue, name1);
					else
						ptrNativeObject->getValue(*(EarthView::World::Core::CVariant*)varValue, name1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_getValue_void_CVariant_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectFeature_getValue_void_CVariant_EVString_Callback* pCallback )
				{
					CEffectFeatureProxy* ptr = dynamic_cast<CEffectFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_getValue_void_CVariant_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_getValue_void_CVariant_EVString_NoVirtual(void *pObjectXXXX, _out void* varValue, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					const EarthView::World::Spatial3D::Dataset::CEffectFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectFeature::getValue(*(EarthView::World::Core::CVariant*)varValue, name1);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_getGeometryRef_IGeometry(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX;
					if (dynamic_cast<CEffectFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CEffectFeature*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectFeature::getGeometryRef();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->getGeometryRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_getGeometryRef_IGeometry( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectFeature_getGeometryRef_IGeometry_Callback* pCallback )
				{
					CEffectFeatureProxy* ptr = dynamic_cast<CEffectFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_getGeometryRef_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_getGeometryRef_IGeometry_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectFeature::getGeometryRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_getEnvelopeRef_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX;
					if (dynamic_cast<CEffectFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CEffectFeature*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectFeature::getEnvelopeRef();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelopeRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectFeature_getEnvelopeRef_IEnvelope_Callback* pCallback )
				{
					CEffectFeatureProxy* ptr = dynamic_cast<CEffectFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_getEnvelopeRef_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_getEnvelopeRef_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectFeature::getEnvelopeRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_setGeometry_void_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom )
				{
					EarthView::World::Spatial3D::Dataset::CEffectFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX;
					if (dynamic_cast<CEffectFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CEffectFeature*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectFeature::setGeometry(geom);
					else
						ptrNativeObject->setGeometry(geom);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_setGeometry_void_IGeometry( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectFeature_setGeometry_void_IGeometry_Callback* pCallback )
				{
					CEffectFeatureProxy* ptr = dynamic_cast<CEffectFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_setGeometry_void_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_setGeometry_void_IGeometry_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom )
				{
					EarthView::World::Spatial3D::Dataset::CEffectFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectFeature::setGeometry(geom);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_setValue_void_CVariant_ev_uint32(void *pObjectXXXX, _in const void* varValue, _in ev_uint32 index )
				{
					EarthView::World::Spatial3D::Dataset::CEffectFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX;
					if (dynamic_cast<CEffectFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CEffectFeature*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectFeature::setValue(*(EarthView::World::Core::CVariant*)varValue, index);
					else
						ptrNativeObject->setValue(*(EarthView::World::Core::CVariant*)varValue, index);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_setValue_void_CVariant_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectFeature_setValue_void_CVariant_ev_uint32_Callback* pCallback )
				{
					CEffectFeatureProxy* ptr = dynamic_cast<CEffectFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_setValue_void_CVariant_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_setValue_void_CVariant_ev_uint32_NoVirtual(void *pObjectXXXX, _in const void* varValue, _in ev_uint32 index )
				{
					EarthView::World::Spatial3D::Dataset::CEffectFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectFeature::setValue(*(EarthView::World::Core::CVariant*)varValue, index);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_setValue_void_CVariant_EVString(void *pObjectXXXX, _in const void* varValue, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Dataset::CEffectFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX;
					if (dynamic_cast<CEffectFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CEffectFeature*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectFeature::setValue(*(EarthView::World::Core::CVariant*)varValue, name1);
					else
						ptrNativeObject->setValue(*(EarthView::World::Core::CVariant*)varValue, name1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_setValue_void_CVariant_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectFeature_setValue_void_CVariant_EVString_Callback* pCallback )
				{
					CEffectFeatureProxy* ptr = dynamic_cast<CEffectFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_setValue_void_CVariant_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_setValue_void_CVariant_EVString_NoVirtual(void *pObjectXXXX, _in const void* varValue, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Dataset::CEffectFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectFeature::setValue(*(EarthView::World::Core::CVariant*)varValue, name1);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_deleteFeature_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX;
					if (dynamic_cast<CEffectFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CEffectFeature*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectFeature::deleteFeature();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->deleteFeature();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_deleteFeature_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectFeature_deleteFeature_ev_bool_Callback* pCallback )
				{
					CEffectFeatureProxy* ptr = dynamic_cast<CEffectFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_deleteFeature_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_deleteFeature_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectFeature::deleteFeature();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_saveFeature_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX;
					if (dynamic_cast<CEffectFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CEffectFeature*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectFeature::saveFeature();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->saveFeature();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_saveFeature_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectFeature_saveFeature_ev_bool_Callback* pCallback )
				{
					CEffectFeatureProxy* ptr = dynamic_cast<CEffectFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_saveFeature_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_saveFeature_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectFeature::saveFeature();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_setDataSet_void_IFeatureClass(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IFeatureClass* ref_fc )
				{
					EarthView::World::Spatial3D::Dataset::CEffectFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX;
					ptrNativeObject->setDataSet(ref_fc);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureClass*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_getDataSet_IFeatureClass(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeatureClass* objXXXX = ptrNativeObject->getDataSet();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_setEffect_void_ev_uint32_CEffectInfoVector_CStringArray(void *pObjectXXXX, _in ev_uint32 effectId, _in const void* infoVec, _in const void* scriptArray )
				{
					EarthView::World::Spatial3D::Dataset::CEffectFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX;
					ptrNativeObject->setEffect(effectId, *(EarthView::World::Spatial3D::Dataset::CEffectInfoVector*)infoVec, *(EarthView::World::Core::CStringArray*)scriptArray);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_getEffect_void_ev_uint32_CEffectInfoVector_CStringArray(void *pObjectXXXX, _out ev_uint32& effectId, _out void* vec, _out void* scripts )
				{
					EarthView::World::Spatial3D::Dataset::CEffectFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX;
					ptrNativeObject->getEffect(effectId, *(EarthView::World::Spatial3D::Dataset::CEffectInfoVector*)vec, *(EarthView::World::Core::CStringArray*)scripts);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_setFields_void_IFields(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IFields* ref_fields )
				{
					EarthView::World::Spatial3D::Dataset::CEffectFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX;
					ptrNativeObject->setFields(ref_fields);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFields*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_getFields_IFields(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->getFields();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_clone_IFeature(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX;
					if (dynamic_cast<CEffectFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CEffectFeature*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectFeature::clone();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_clone_IFeature( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectFeature_clone_IFeature_Callback* pCallback )
				{
					CEffectFeatureProxy* ptr = dynamic_cast<CEffectFeatureProxy*>((EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectFeature_clone_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeature_clone_IFeature_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectFeature* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeature*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectFeature::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
			}
		}
	}
}
