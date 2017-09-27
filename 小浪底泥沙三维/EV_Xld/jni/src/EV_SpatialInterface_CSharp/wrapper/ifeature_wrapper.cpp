/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/ifeature.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_GeoDataset_IFeature_getID_ev_uint32_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_GeoDataset_IFeature_getGeometryType_EVGeometryType_Callback)();
				typedef const EarthView::World::Spatial::GeoDataset::IFields*  ( _stdcall EarthView_World_Spatial_GeoDataset_IFeature_getFieldsRef_IFields_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_GeoDataset_IFeature_getFieldCount_ev_uint32_Callback)();
				typedef const EarthView::World::Spatial::GeoDataset::IField*  ( _stdcall EarthView_World_Spatial_GeoDataset_IFeature_getFieldRef_IField_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_GeoDataset_IFeature_findField_ev_int32_EVString_Callback)(_in char*& fieldName);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_IFeature_getValue_void_CVariant_ev_uint32_Callback)(_out void* value, _in ev_uint32 index);
				typedef const EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_GeoDataset_IFeature_getGeometryRef_IGeometry_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_GeoDataset_IFeature_getEnvelopeRef_IEnvelope_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_IFeature_setGeometry_void_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_IFeature_setValue_void_CVariant_ev_uint32_Callback)(_in const void* value, _in ev_uint32 index);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_IFeature_deleteFeature_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_IFeature_saveFeature_ev_bool_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IFeature*  ( _stdcall EarthView_World_Spatial_GeoDataset_IFeature_clone_IFeature_Callback)();
				class IFeatureProxy : public EarthView::World::Spatial::GeoDataset::IFeature
				{
				private:
					EarthView_World_Spatial_GeoDataset_IFeature_getID_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_IFeature_getID_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_IFeature_getGeometryType_EVGeometryType_Callback* m_EarthView_World_Spatial_GeoDataset_IFeature_getGeometryType_EVGeometryType_Callback;
					EarthView_World_Spatial_GeoDataset_IFeature_getFieldsRef_IFields_Callback* m_EarthView_World_Spatial_GeoDataset_IFeature_getFieldsRef_IFields_Callback;
					EarthView_World_Spatial_GeoDataset_IFeature_getFieldCount_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_IFeature_getFieldCount_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_IFeature_getFieldRef_IField_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_IFeature_getFieldRef_IField_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_IFeature_findField_ev_int32_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_IFeature_findField_ev_int32_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_IFeature_getValue_void_CVariant_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_IFeature_getValue_void_CVariant_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_IFeature_getGeometryRef_IGeometry_Callback* m_EarthView_World_Spatial_GeoDataset_IFeature_getGeometryRef_IGeometry_Callback;
					EarthView_World_Spatial_GeoDataset_IFeature_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial_GeoDataset_IFeature_getEnvelopeRef_IEnvelope_Callback;
					EarthView_World_Spatial_GeoDataset_IFeature_setGeometry_void_IGeometry_Callback* m_EarthView_World_Spatial_GeoDataset_IFeature_setGeometry_void_IGeometry_Callback;
					EarthView_World_Spatial_GeoDataset_IFeature_setValue_void_CVariant_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_IFeature_setValue_void_CVariant_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_IFeature_deleteFeature_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_IFeature_deleteFeature_ev_bool_Callback;
					EarthView_World_Spatial_GeoDataset_IFeature_saveFeature_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_IFeature_saveFeature_ev_bool_Callback;
					EarthView_World_Spatial_GeoDataset_IFeature_clone_IFeature_Callback* m_EarthView_World_Spatial_GeoDataset_IFeature_clone_IFeature_Callback;
				public:
					IFeatureProxy(EarthView::World::Core::CNameValuePairList *pList) : IFeature(pList)
					{
						m_EarthView_World_Spatial_GeoDataset_IFeature_getID_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IFeature_getGeometryType_EVGeometryType_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IFeature_getFieldsRef_IFields_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IFeature_getFieldCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IFeature_getFieldRef_IField_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IFeature_findField_ev_int32_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IFeature_getValue_void_CVariant_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IFeature_getGeometryRef_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IFeature_getEnvelopeRef_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IFeature_setGeometry_void_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IFeature_setValue_void_CVariant_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IFeature_deleteFeature_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IFeature_saveFeature_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IFeature_clone_IFeature_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IFeature_getID_ev_uint32(EarthView_World_Spatial_GeoDataset_IFeature_getID_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IFeature_getID_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IFeature_getGeometryType_EVGeometryType(EarthView_World_Spatial_GeoDataset_IFeature_getGeometryType_EVGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IFeature_getGeometryType_EVGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IFeature_getFieldsRef_IFields(EarthView_World_Spatial_GeoDataset_IFeature_getFieldsRef_IFields_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IFeature_getFieldsRef_IFields_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IFeature_getFieldCount_ev_uint32(EarthView_World_Spatial_GeoDataset_IFeature_getFieldCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IFeature_getFieldCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IFeature_getFieldRef_IField_ev_uint32(EarthView_World_Spatial_GeoDataset_IFeature_getFieldRef_IField_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IFeature_getFieldRef_IField_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IFeature_findField_ev_int32_EVString(EarthView_World_Spatial_GeoDataset_IFeature_findField_ev_int32_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IFeature_findField_ev_int32_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IFeature_getValue_void_CVariant_ev_uint32(EarthView_World_Spatial_GeoDataset_IFeature_getValue_void_CVariant_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IFeature_getValue_void_CVariant_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IFeature_getGeometryRef_IGeometry(EarthView_World_Spatial_GeoDataset_IFeature_getGeometryRef_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IFeature_getGeometryRef_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IFeature_getEnvelopeRef_IEnvelope(EarthView_World_Spatial_GeoDataset_IFeature_getEnvelopeRef_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IFeature_getEnvelopeRef_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IFeature_setGeometry_void_IGeometry(EarthView_World_Spatial_GeoDataset_IFeature_setGeometry_void_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IFeature_setGeometry_void_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IFeature_setValue_void_CVariant_ev_uint32(EarthView_World_Spatial_GeoDataset_IFeature_setValue_void_CVariant_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IFeature_setValue_void_CVariant_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IFeature_deleteFeature_ev_bool(EarthView_World_Spatial_GeoDataset_IFeature_deleteFeature_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IFeature_deleteFeature_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IFeature_saveFeature_ev_bool(EarthView_World_Spatial_GeoDataset_IFeature_saveFeature_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IFeature_saveFeature_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IFeature_clone_IFeature(EarthView_World_Spatial_GeoDataset_IFeature_clone_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IFeature_clone_IFeature_Callback = pCallback;
					}
					virtual ev_uint32 getID() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IFeature_getID_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_GeoDataset_IFeature_getID_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->IFeature::getID();
					}
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IFeature_getGeometryType_EVGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVGeometryType)m_EarthView_World_Spatial_GeoDataset_IFeature_getGeometryType_EVGeometryType_Callback();
							return returnValue;
						}
						else
							return this->IFeature::getGeometryType();
					}
					virtual const EarthView::World::Spatial::GeoDataset::IFields* getFieldsRef() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IFeature_getFieldsRef_IFields_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IFields* returnValue = m_EarthView_World_Spatial_GeoDataset_IFeature_getFieldsRef_IFields_Callback();
							return returnValue;
						}
						else
							return this->IFeature::getFieldsRef();
					}
					virtual ev_uint32 getFieldCount() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IFeature_getFieldCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_GeoDataset_IFeature_getFieldCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->IFeature::getFieldCount();
					}
					virtual const EarthView::World::Spatial::GeoDataset::IField* getFieldRef(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IFeature_getFieldRef_IField_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IField* returnValue = m_EarthView_World_Spatial_GeoDataset_IFeature_getFieldRef_IField_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->IFeature::getFieldRef(index);
					}
					virtual ev_int32 findField(_in const EVString& fieldName) const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IFeature_findField_ev_int32_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* fieldName_Char = fieldName.makeBuffer();
							ev_int32 returnValue = m_EarthView_World_Spatial_GeoDataset_IFeature_findField_ev_int32_EVString_Callback(fieldName_Char);
							return returnValue;
						}
						else
							return this->IFeature::findField(fieldName);
					}
					virtual void getValue(_out EarthView::World::Core::CVariant& value, _in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IFeature_getValue_void_CVariant_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_IFeature_getValue_void_CVariant_ev_uint32_Callback(&value, index);
						}
						else
							return this->IFeature::getValue(value, index);
					}
					virtual const EarthView::World::Spatial::Geometry::IGeometry* getGeometryRef() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IFeature_getGeometryRef_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_GeoDataset_IFeature_getGeometryRef_IGeometry_Callback();
							return returnValue;
						}
						else
							return this->IFeature::getGeometryRef();
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IFeature_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_GeoDataset_IFeature_getEnvelopeRef_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->IFeature::getEnvelopeRef();
					}
					virtual void setGeometry(_in const EarthView::World::Spatial::Geometry::IGeometry* geom)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IFeature_setGeometry_void_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_IFeature_setGeometry_void_IGeometry_Callback(geom);
						}
						else
							return this->IFeature::setGeometry(geom);
					}
					virtual void setValue(_in const EarthView::World::Core::CVariant& value, _in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IFeature_setValue_void_CVariant_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_IFeature_setValue_void_CVariant_ev_uint32_Callback(&value, index);
						}
						else
							return this->IFeature::setValue(value, index);
					}
					virtual ev_bool deleteFeature()
					{
						if(m_EarthView_World_Spatial_GeoDataset_IFeature_deleteFeature_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_IFeature_deleteFeature_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IFeature::deleteFeature();
					}
					virtual ev_bool saveFeature()
					{
						if(m_EarthView_World_Spatial_GeoDataset_IFeature_saveFeature_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_IFeature_saveFeature_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IFeature::saveFeature();
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeature* clone() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IFeature_clone_IFeature_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeature* returnValue = m_EarthView_World_Spatial_GeoDataset_IFeature_clone_IFeature_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->IFeature::clone();
					}
				};
				REGISTER_FACTORY_CLASS(IFeatureProxy);
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_IFeature_getID_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IFeature* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IFeature*) pObjectXXXX;
					if (dynamic_cast<IFeatureProxy*>((EarthView::World::Spatial::GeoDataset::IFeature*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IFeature::getID();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getID();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IFeature_getID_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IFeature_getID_ev_uint32_Callback* pCallback )
				{
					IFeatureProxy* ptr = dynamic_cast<IFeatureProxy*>((EarthView::World::Spatial::GeoDataset::IFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IFeature_getID_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_IFeature_getID_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IFeature* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IFeature*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IFeature::getID();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_IFeature_getGeometryType_EVGeometryType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IFeature* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IFeature*) pObjectXXXX;
					if (dynamic_cast<IFeatureProxy*>((EarthView::World::Spatial::GeoDataset::IFeature*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IFeature::getGeometryType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->getGeometryType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IFeature_getGeometryType_EVGeometryType( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IFeature_getGeometryType_EVGeometryType_Callback* pCallback )
				{
					IFeatureProxy* ptr = dynamic_cast<IFeatureProxy*>((EarthView::World::Spatial::GeoDataset::IFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IFeature_getGeometryType_EVGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_IFeature_getGeometryType_EVGeometryType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IFeature* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IFeature*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IFeature::getGeometryType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IFields*  _stdcall EarthView_World_Spatial_GeoDataset_IFeature_getFieldsRef_IFields(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IFeature* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IFeature*) pObjectXXXX;
					if (dynamic_cast<IFeatureProxy*>((EarthView::World::Spatial::GeoDataset::IFeature*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IFeature::getFieldsRef();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->getFieldsRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IFeature_getFieldsRef_IFields( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IFeature_getFieldsRef_IFields_Callback* pCallback )
				{
					IFeatureProxy* ptr = dynamic_cast<IFeatureProxy*>((EarthView::World::Spatial::GeoDataset::IFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IFeature_getFieldsRef_IFields(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IFields*  _stdcall EarthView_World_Spatial_GeoDataset_IFeature_getFieldsRef_IFields_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IFeature* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IFeature*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IFeature::getFieldsRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_IFeature_getFieldCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IFeature* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IFeature*) pObjectXXXX;
					if (dynamic_cast<IFeatureProxy*>((EarthView::World::Spatial::GeoDataset::IFeature*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IFeature::getFieldCount();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getFieldCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IFeature_getFieldCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IFeature_getFieldCount_ev_uint32_Callback* pCallback )
				{
					IFeatureProxy* ptr = dynamic_cast<IFeatureProxy*>((EarthView::World::Spatial::GeoDataset::IFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IFeature_getFieldCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_IFeature_getFieldCount_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IFeature* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IFeature*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IFeature::getFieldCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial_GeoDataset_IFeature_getFieldRef_IField_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::GeoDataset::IFeature* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IFeature*) pObjectXXXX;
					if (dynamic_cast<IFeatureProxy*>((EarthView::World::Spatial::GeoDataset::IFeature*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IFeature::getFieldRef(index);
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->getFieldRef(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IFeature_getFieldRef_IField_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IFeature_getFieldRef_IField_ev_uint32_Callback* pCallback )
				{
					IFeatureProxy* ptr = dynamic_cast<IFeatureProxy*>((EarthView::World::Spatial::GeoDataset::IFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IFeature_getFieldRef_IField_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial_GeoDataset_IFeature_getFieldRef_IField_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::GeoDataset::IFeature* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IFeature*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IFeature::getFieldRef(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_GeoDataset_IFeature_findField_ev_int32_EVString(void *pObjectXXXX, _in const char* fieldName )
				{
					EarthView::World::Core::ev_string fieldName1 = fieldName;
					const EarthView::World::Spatial::GeoDataset::IFeature* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IFeature*) pObjectXXXX;
					if (dynamic_cast<IFeatureProxy*>((EarthView::World::Spatial::GeoDataset::IFeature*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IFeature::findField(fieldName1);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->findField(fieldName1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IFeature_findField_ev_int32_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IFeature_findField_ev_int32_EVString_Callback* pCallback )
				{
					IFeatureProxy* ptr = dynamic_cast<IFeatureProxy*>((EarthView::World::Spatial::GeoDataset::IFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IFeature_findField_ev_int32_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_GeoDataset_IFeature_findField_ev_int32_EVString_NoVirtual(void *pObjectXXXX, _in const char* fieldName )
				{
					EarthView::World::Core::ev_string fieldName1 = fieldName;
					const EarthView::World::Spatial::GeoDataset::IFeature* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IFeature*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IFeature::findField(fieldName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IFeature_getValue_void_CVariant_ev_uint32(void *pObjectXXXX, _out void* value, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::GeoDataset::IFeature* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IFeature*) pObjectXXXX;
					if (dynamic_cast<IFeatureProxy*>((EarthView::World::Spatial::GeoDataset::IFeature*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::IFeature::getValue(*(EarthView::World::Core::CVariant*)value, index);
					else
						ptrNativeObject->getValue(*(EarthView::World::Core::CVariant*)value, index);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IFeature_getValue_void_CVariant_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IFeature_getValue_void_CVariant_ev_uint32_Callback* pCallback )
				{
					IFeatureProxy* ptr = dynamic_cast<IFeatureProxy*>((EarthView::World::Spatial::GeoDataset::IFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IFeature_getValue_void_CVariant_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IFeature_getValue_void_CVariant_ev_uint32_NoVirtual(void *pObjectXXXX, _out void* value, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::GeoDataset::IFeature* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IFeature*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::IFeature::getValue(*(EarthView::World::Core::CVariant*)value, index);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_GeoDataset_IFeature_getGeometryRef_IGeometry(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IFeature* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IFeature*) pObjectXXXX;
					if (dynamic_cast<IFeatureProxy*>((EarthView::World::Spatial::GeoDataset::IFeature*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IFeature::getGeometryRef();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->getGeometryRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IFeature_getGeometryRef_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IFeature_getGeometryRef_IGeometry_Callback* pCallback )
				{
					IFeatureProxy* ptr = dynamic_cast<IFeatureProxy*>((EarthView::World::Spatial::GeoDataset::IFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IFeature_getGeometryRef_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_GeoDataset_IFeature_getGeometryRef_IGeometry_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IFeature* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IFeature*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IFeature::getGeometryRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_GeoDataset_IFeature_getEnvelopeRef_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IFeature* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IFeature*) pObjectXXXX;
					if (dynamic_cast<IFeatureProxy*>((EarthView::World::Spatial::GeoDataset::IFeature*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IFeature::getEnvelopeRef();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelopeRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IFeature_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IFeature_getEnvelopeRef_IEnvelope_Callback* pCallback )
				{
					IFeatureProxy* ptr = dynamic_cast<IFeatureProxy*>((EarthView::World::Spatial::GeoDataset::IFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IFeature_getEnvelopeRef_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_GeoDataset_IFeature_getEnvelopeRef_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IFeature* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IFeature*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IFeature::getEnvelopeRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IFeature_setGeometry_void_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom )
				{
					EarthView::World::Spatial::GeoDataset::IFeature* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IFeature*) pObjectXXXX;
					if (dynamic_cast<IFeatureProxy*>((EarthView::World::Spatial::GeoDataset::IFeature*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::IFeature::setGeometry(geom);
					else
						ptrNativeObject->setGeometry(geom);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IFeature_setGeometry_void_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IFeature_setGeometry_void_IGeometry_Callback* pCallback )
				{
					IFeatureProxy* ptr = dynamic_cast<IFeatureProxy*>((EarthView::World::Spatial::GeoDataset::IFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IFeature_setGeometry_void_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IFeature_setGeometry_void_IGeometry_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom )
				{
					EarthView::World::Spatial::GeoDataset::IFeature* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IFeature*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::IFeature::setGeometry(geom);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IFeature_setValue_void_CVariant_ev_uint32(void *pObjectXXXX, _in const void* value, _in ev_uint32 index )
				{
					EarthView::World::Spatial::GeoDataset::IFeature* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IFeature*) pObjectXXXX;
					if (dynamic_cast<IFeatureProxy*>((EarthView::World::Spatial::GeoDataset::IFeature*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::IFeature::setValue(*(EarthView::World::Core::CVariant*)value, index);
					else
						ptrNativeObject->setValue(*(EarthView::World::Core::CVariant*)value, index);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IFeature_setValue_void_CVariant_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IFeature_setValue_void_CVariant_ev_uint32_Callback* pCallback )
				{
					IFeatureProxy* ptr = dynamic_cast<IFeatureProxy*>((EarthView::World::Spatial::GeoDataset::IFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IFeature_setValue_void_CVariant_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IFeature_setValue_void_CVariant_ev_uint32_NoVirtual(void *pObjectXXXX, _in const void* value, _in ev_uint32 index )
				{
					EarthView::World::Spatial::GeoDataset::IFeature* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IFeature*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::IFeature::setValue(*(EarthView::World::Core::CVariant*)value, index);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IFeature_deleteFeature_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::IFeature* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IFeature*) pObjectXXXX;
					if (dynamic_cast<IFeatureProxy*>((EarthView::World::Spatial::GeoDataset::IFeature*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IFeature::deleteFeature();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->deleteFeature();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IFeature_deleteFeature_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IFeature_deleteFeature_ev_bool_Callback* pCallback )
				{
					IFeatureProxy* ptr = dynamic_cast<IFeatureProxy*>((EarthView::World::Spatial::GeoDataset::IFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IFeature_deleteFeature_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IFeature_deleteFeature_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::IFeature* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IFeature*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IFeature::deleteFeature();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IFeature_saveFeature_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::IFeature* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IFeature*) pObjectXXXX;
					if (dynamic_cast<IFeatureProxy*>((EarthView::World::Spatial::GeoDataset::IFeature*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IFeature::saveFeature();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->saveFeature();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IFeature_saveFeature_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IFeature_saveFeature_ev_bool_Callback* pCallback )
				{
					IFeatureProxy* ptr = dynamic_cast<IFeatureProxy*>((EarthView::World::Spatial::GeoDataset::IFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IFeature_saveFeature_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IFeature_saveFeature_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::IFeature* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IFeature*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IFeature::saveFeature();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial_GeoDataset_IFeature_clone_IFeature(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IFeature* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IFeature*) pObjectXXXX;
					if (dynamic_cast<IFeatureProxy*>((EarthView::World::Spatial::GeoDataset::IFeature*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IFeature::clone();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IFeature_clone_IFeature( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IFeature_clone_IFeature_Callback* pCallback )
				{
					IFeatureProxy* ptr = dynamic_cast<IFeatureProxy*>((EarthView::World::Spatial::GeoDataset::IFeature*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IFeature_clone_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial_GeoDataset_IFeature_clone_IFeature_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IFeature* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IFeature*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IFeature::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
			}
		}
	}
}
