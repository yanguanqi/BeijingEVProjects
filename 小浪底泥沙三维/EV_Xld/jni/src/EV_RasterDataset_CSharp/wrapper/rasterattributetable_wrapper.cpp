/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rasterdataset/rasterattributetable.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Raster
			{
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getRowCount_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getFieldCount_ev_uint32_Callback)();
				typedef const EarthView::World::Spatial::GeoDataset::IFields*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getFields_IFields_Callback)();
				typedef const EarthView::World::Spatial::GeoDataset::IField*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getField_IField_ev_uint32_Callback)(_in ev_uint32 index);
				typedef const EarthView::World::Spatial::GeoDataset::IField*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getValueField_IField_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_findField_ev_uint32_EVString_Callback)(_inout char*& fieldName);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_addField_void_IField_Callback)(_in const EarthView::World::Spatial::GeoDataset::IField* pField);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeField_void_ev_uint32_Callback)(_in ev_uint32 index);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeAllFields_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_addRow_void_CVariantArray_Callback)(_inout void* varArray);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeRow_void_ev_uint32_Callback)(_in ev_uint32 row);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeAllRows_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getElement_ev_bool_ev_uint32_ev_uint32_CVariant_Callback)(_in ev_uint32 row, _in ev_uint32 fieldIndex, _inout void* var);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_setElement_ev_bool_ev_uint32_ev_uint32_CVariant_Callback)(_in ev_uint32 row, _in ev_uint32 fieldIndex, _in const void* var);
				typedef void*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				class CRasterAttributeTableProxy : public EarthView::World::Spatial2D::Raster::CRasterAttributeTable
				{
				private:
					EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getRowCount_ev_uint32_Callback* m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getRowCount_ev_uint32_Callback;
					EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getFieldCount_ev_uint32_Callback* m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getFieldCount_ev_uint32_Callback;
					EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getFields_IFields_Callback* m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getFields_IFields_Callback;
					EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getField_IField_ev_uint32_Callback* m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getField_IField_ev_uint32_Callback;
					EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getValueField_IField_Callback* m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getValueField_IField_Callback;
					EarthView_World_Spatial2D_Raster_CRasterAttributeTable_findField_ev_uint32_EVString_Callback* m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_findField_ev_uint32_EVString_Callback;
					EarthView_World_Spatial2D_Raster_CRasterAttributeTable_addField_void_IField_Callback* m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_addField_void_IField_Callback;
					EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeField_void_ev_uint32_Callback* m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeField_void_ev_uint32_Callback;
					EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeAllFields_void_Callback* m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeAllFields_void_Callback;
					EarthView_World_Spatial2D_Raster_CRasterAttributeTable_addRow_void_CVariantArray_Callback* m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_addRow_void_CVariantArray_Callback;
					EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeRow_void_ev_uint32_Callback* m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeRow_void_ev_uint32_Callback;
					EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeAllRows_void_Callback* m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeAllRows_void_Callback;
					EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getElement_ev_bool_ev_uint32_ev_uint32_CVariant_Callback* m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getElement_ev_bool_ev_uint32_ev_uint32_CVariant_Callback;
					EarthView_World_Spatial2D_Raster_CRasterAttributeTable_setElement_ev_bool_ev_uint32_ev_uint32_CVariant_Callback* m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_setElement_ev_bool_ev_uint32_ev_uint32_CVariant_Callback;
					EarthView_World_Spatial2D_Raster_CRasterAttributeTable_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial2D_Raster_CRasterAttributeTable_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_fromXmlElement_void_CXmlElement_Callback;
				public:
					CRasterAttributeTableProxy(EarthView::World::Core::CNameValuePairList *pList) : CRasterAttributeTable(pList)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getRowCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getFieldCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getFields_IFields_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getField_IField_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getValueField_IField_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_findField_ev_uint32_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_addField_void_IField_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeField_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeAllFields_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_addRow_void_CVariantArray_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeRow_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeAllRows_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getElement_ev_bool_ev_uint32_ev_uint32_CVariant_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_setElement_ev_bool_ev_uint32_ev_uint32_CVariant_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_fromXmlElement_void_CXmlElement_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getRowCount_ev_uint32(EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getRowCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getRowCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getFieldCount_ev_uint32(EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getFieldCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getFieldCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getFields_IFields(EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getFields_IFields_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getFields_IFields_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getField_IField_ev_uint32(EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getField_IField_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getField_IField_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getValueField_IField(EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getValueField_IField_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getValueField_IField_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_findField_ev_uint32_EVString(EarthView_World_Spatial2D_Raster_CRasterAttributeTable_findField_ev_uint32_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_findField_ev_uint32_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_addField_void_IField(EarthView_World_Spatial2D_Raster_CRasterAttributeTable_addField_void_IField_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_addField_void_IField_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeField_void_ev_uint32(EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeField_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeField_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeAllFields_void(EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeAllFields_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeAllFields_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_addRow_void_CVariantArray(EarthView_World_Spatial2D_Raster_CRasterAttributeTable_addRow_void_CVariantArray_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_addRow_void_CVariantArray_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeRow_void_ev_uint32(EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeRow_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeRow_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeAllRows_void(EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeAllRows_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeAllRows_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getElement_ev_bool_ev_uint32_ev_uint32_CVariant(EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getElement_ev_bool_ev_uint32_ev_uint32_CVariant_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getElement_ev_bool_ev_uint32_ev_uint32_CVariant_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_setElement_ev_bool_ev_uint32_ev_uint32_CVariant(EarthView_World_Spatial2D_Raster_CRasterAttributeTable_setElement_ev_bool_ev_uint32_ev_uint32_CVariant_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_setElement_ev_bool_ev_uint32_ev_uint32_CVariant_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_toXmlElement_CXmlElement(EarthView_World_Spatial2D_Raster_CRasterAttributeTable_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_fromXmlElement_void_CXmlElement(EarthView_World_Spatial2D_Raster_CRasterAttributeTable_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					virtual ev_uint32 getRowCount() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getRowCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getRowCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CRasterAttributeTable::getRowCount();
					}
					virtual ev_uint32 getFieldCount() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getFieldCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getFieldCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CRasterAttributeTable::getFieldCount();
					}
					virtual const EarthView::World::Spatial::GeoDataset::IFields* getFields() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getFields_IFields_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IFields* returnValue = m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getFields_IFields_Callback();
							return returnValue;
						}
						else
							return this->CRasterAttributeTable::getFields();
					}
					virtual const EarthView::World::Spatial::GeoDataset::IField* getField(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getField_IField_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IField* returnValue = m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getField_IField_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CRasterAttributeTable::getField(index);
					}
					virtual const EarthView::World::Spatial::GeoDataset::IField* getValueField() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getValueField_IField_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IField* returnValue = m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getValueField_IField_Callback();
							return returnValue;
						}
						else
							return this->CRasterAttributeTable::getValueField();
					}
					virtual ev_uint32 findField(_inout EVString& fieldName) const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_findField_ev_uint32_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* fieldName_Char = fieldName.makeBuffer();
							ev_uint32 returnValue = m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_findField_ev_uint32_EVString_Callback(fieldName_Char);
							fieldName = fieldName_Char;
							if(fieldName_Char != NULL){ delete[] fieldName_Char;fieldName_Char = NULL;}
							return returnValue;
						}
						else
							return this->CRasterAttributeTable::findField(fieldName);
					}
					virtual void addField(_in const EarthView::World::Spatial::GeoDataset::IField* pField)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_addField_void_IField_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_addField_void_IField_Callback(pField);
						}
						else
							return this->CRasterAttributeTable::addField(pField);
					}
					virtual void removeField(_in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeField_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeField_void_ev_uint32_Callback(index);
						}
						else
							return this->CRasterAttributeTable::removeField(index);
					}
					virtual void removeAllFields()
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeAllFields_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeAllFields_void_Callback();
						}
						else
							return this->CRasterAttributeTable::removeAllFields();
					}
					virtual void addRow(_inout EarthView::World::Core::CVariantArray& varArray)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_addRow_void_CVariantArray_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_addRow_void_CVariantArray_Callback(&varArray);
						}
						else
							return this->CRasterAttributeTable::addRow(varArray);
					}
					virtual void removeRow(_in ev_uint32 row)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeRow_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeRow_void_ev_uint32_Callback(row);
						}
						else
							return this->CRasterAttributeTable::removeRow(row);
					}
					virtual void removeAllRows()
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeAllRows_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeAllRows_void_Callback();
						}
						else
							return this->CRasterAttributeTable::removeAllRows();
					}
					virtual ev_bool getElement(_in ev_uint32 row, _in ev_uint32 fieldIndex, _inout EarthView::World::Core::CVariant& var) const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getElement_ev_bool_ev_uint32_ev_uint32_CVariant_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getElement_ev_bool_ev_uint32_ev_uint32_CVariant_Callback(row, fieldIndex, &var);
							return returnValue;
						}
						else
							return this->CRasterAttributeTable::getElement(row, fieldIndex, var);
					}
					virtual ev_bool setElement(_in ev_uint32 row, _in ev_uint32 fieldIndex, _in const EarthView::World::Core::CVariant& var)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_setElement_ev_bool_ev_uint32_ev_uint32_CVariant_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_setElement_ev_bool_ev_uint32_ev_uint32_CVariant_Callback(row, fieldIndex, &var);
							return returnValue;
						}
						else
							return this->CRasterAttributeTable::setElement(row, fieldIndex, var);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CRasterAttributeTable::toXmlElement();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CRasterAttributeTable::fromXmlElement(element);
					}
				};
				REGISTER_FACTORY_CLASS(CRasterAttributeTableProxy);
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getRowCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterAttributeTable* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX;
					if (dynamic_cast<CRasterAttributeTableProxy*>((EarthView::World::Spatial2D::Raster::CRasterAttributeTable*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::getRowCount();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getRowCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getRowCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getRowCount_ev_uint32_Callback* pCallback )
				{
					CRasterAttributeTableProxy* ptr = dynamic_cast<CRasterAttributeTableProxy*>((EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getRowCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getRowCount_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterAttributeTable* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::getRowCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getFieldCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterAttributeTable* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX;
					if (dynamic_cast<CRasterAttributeTableProxy*>((EarthView::World::Spatial2D::Raster::CRasterAttributeTable*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::getFieldCount();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getFieldCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getFieldCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getFieldCount_ev_uint32_Callback* pCallback )
				{
					CRasterAttributeTableProxy* ptr = dynamic_cast<CRasterAttributeTableProxy*>((EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getFieldCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getFieldCount_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterAttributeTable* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::getFieldCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IFields*  _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getFields_IFields(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterAttributeTable* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX;
					if (dynamic_cast<CRasterAttributeTableProxy*>((EarthView::World::Spatial2D::Raster::CRasterAttributeTable*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::getFields();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->getFields();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getFields_IFields( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getFields_IFields_Callback* pCallback )
				{
					CRasterAttributeTableProxy* ptr = dynamic_cast<CRasterAttributeTableProxy*>((EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getFields_IFields(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IFields*  _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getFields_IFields_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterAttributeTable* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::getFields();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getField_IField_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial2D::Raster::CRasterAttributeTable* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX;
					if (dynamic_cast<CRasterAttributeTableProxy*>((EarthView::World::Spatial2D::Raster::CRasterAttributeTable*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::getField(index);
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->getField(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getField_IField_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getField_IField_ev_uint32_Callback* pCallback )
				{
					CRasterAttributeTableProxy* ptr = dynamic_cast<CRasterAttributeTableProxy*>((EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getField_IField_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getField_IField_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial2D::Raster::CRasterAttributeTable* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::getField(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getValueField_IField(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterAttributeTable* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX;
					if (dynamic_cast<CRasterAttributeTableProxy*>((EarthView::World::Spatial2D::Raster::CRasterAttributeTable*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::getValueField();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->getValueField();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getValueField_IField( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getValueField_IField_Callback* pCallback )
				{
					CRasterAttributeTableProxy* ptr = dynamic_cast<CRasterAttributeTableProxy*>((EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getValueField_IField(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getValueField_IField_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterAttributeTable* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::getValueField();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_findField_ev_uint32_EVString(void *pObjectXXXX, _inout char*& fieldName )
				{
					EarthView::World::Core::ev_string fieldName1 = fieldName;
					const EarthView::World::Spatial2D::Raster::CRasterAttributeTable* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX;
					if (dynamic_cast<CRasterAttributeTableProxy*>((EarthView::World::Spatial2D::Raster::CRasterAttributeTable*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::findField(fieldName1);
						fieldName=fieldName1.makeBuffer();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->findField(fieldName1);
						fieldName=fieldName1.makeBuffer();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_findField_ev_uint32_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterAttributeTable_findField_ev_uint32_EVString_Callback* pCallback )
				{
					CRasterAttributeTableProxy* ptr = dynamic_cast<CRasterAttributeTableProxy*>((EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_findField_ev_uint32_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_findField_ev_uint32_EVString_NoVirtual(void *pObjectXXXX, _inout char*& fieldName )
				{
					EarthView::World::Core::ev_string fieldName1 = fieldName;
					const EarthView::World::Spatial2D::Raster::CRasterAttributeTable* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::findField(fieldName1);
					fieldName=fieldName1.makeBuffer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_addField_void_IField(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IField* pField )
				{
					EarthView::World::Spatial2D::Raster::CRasterAttributeTable* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX;
					if (dynamic_cast<CRasterAttributeTableProxy*>((EarthView::World::Spatial2D::Raster::CRasterAttributeTable*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::addField(pField);
					else
						ptrNativeObject->addField(pField);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_addField_void_IField( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterAttributeTable_addField_void_IField_Callback* pCallback )
				{
					CRasterAttributeTableProxy* ptr = dynamic_cast<CRasterAttributeTableProxy*>((EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_addField_void_IField(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_addField_void_IField_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IField* pField )
				{
					EarthView::World::Spatial2D::Raster::CRasterAttributeTable* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::addField(pField);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeField_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial2D::Raster::CRasterAttributeTable* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX;
					if (dynamic_cast<CRasterAttributeTableProxy*>((EarthView::World::Spatial2D::Raster::CRasterAttributeTable*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::removeField(index);
					else
						ptrNativeObject->removeField(index);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeField_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeField_void_ev_uint32_Callback* pCallback )
				{
					CRasterAttributeTableProxy* ptr = dynamic_cast<CRasterAttributeTableProxy*>((EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeField_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeField_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial2D::Raster::CRasterAttributeTable* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::removeField(index);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeAllFields_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CRasterAttributeTable* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX;
					if (dynamic_cast<CRasterAttributeTableProxy*>((EarthView::World::Spatial2D::Raster::CRasterAttributeTable*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::removeAllFields();
					else
						ptrNativeObject->removeAllFields();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeAllFields_void( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeAllFields_void_Callback* pCallback )
				{
					CRasterAttributeTableProxy* ptr = dynamic_cast<CRasterAttributeTableProxy*>((EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeAllFields_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeAllFields_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CRasterAttributeTable* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::removeAllFields();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_addRow_void_CVariantArray(void *pObjectXXXX, _inout void* varArray )
				{
					EarthView::World::Spatial2D::Raster::CRasterAttributeTable* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX;
					if (dynamic_cast<CRasterAttributeTableProxy*>((EarthView::World::Spatial2D::Raster::CRasterAttributeTable*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::addRow(*(EarthView::World::Core::CVariantArray*)varArray);
					else
						ptrNativeObject->addRow(*(EarthView::World::Core::CVariantArray*)varArray);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_addRow_void_CVariantArray( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterAttributeTable_addRow_void_CVariantArray_Callback* pCallback )
				{
					CRasterAttributeTableProxy* ptr = dynamic_cast<CRasterAttributeTableProxy*>((EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_addRow_void_CVariantArray(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_addRow_void_CVariantArray_NoVirtual(void *pObjectXXXX, _inout void* varArray )
				{
					EarthView::World::Spatial2D::Raster::CRasterAttributeTable* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::addRow(*(EarthView::World::Core::CVariantArray*)varArray);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeRow_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 row )
				{
					EarthView::World::Spatial2D::Raster::CRasterAttributeTable* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX;
					if (dynamic_cast<CRasterAttributeTableProxy*>((EarthView::World::Spatial2D::Raster::CRasterAttributeTable*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::removeRow(row);
					else
						ptrNativeObject->removeRow(row);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeRow_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeRow_void_ev_uint32_Callback* pCallback )
				{
					CRasterAttributeTableProxy* ptr = dynamic_cast<CRasterAttributeTableProxy*>((EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeRow_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeRow_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 row )
				{
					EarthView::World::Spatial2D::Raster::CRasterAttributeTable* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::removeRow(row);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeAllRows_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CRasterAttributeTable* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX;
					if (dynamic_cast<CRasterAttributeTableProxy*>((EarthView::World::Spatial2D::Raster::CRasterAttributeTable*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::removeAllRows();
					else
						ptrNativeObject->removeAllRows();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeAllRows_void( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeAllRows_void_Callback* pCallback )
				{
					CRasterAttributeTableProxy* ptr = dynamic_cast<CRasterAttributeTableProxy*>((EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeAllRows_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_removeAllRows_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CRasterAttributeTable* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::removeAllRows();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getElement_ev_bool_ev_uint32_ev_uint32_CVariant(void *pObjectXXXX, _in ev_uint32 row, _in ev_uint32 fieldIndex, _inout void* var )
				{
					const EarthView::World::Spatial2D::Raster::CRasterAttributeTable* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX;
					if (dynamic_cast<CRasterAttributeTableProxy*>((EarthView::World::Spatial2D::Raster::CRasterAttributeTable*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::getElement(row, fieldIndex, *(EarthView::World::Core::CVariant*)var);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getElement(row, fieldIndex, *(EarthView::World::Core::CVariant*)var);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getElement_ev_bool_ev_uint32_ev_uint32_CVariant( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getElement_ev_bool_ev_uint32_ev_uint32_CVariant_Callback* pCallback )
				{
					CRasterAttributeTableProxy* ptr = dynamic_cast<CRasterAttributeTableProxy*>((EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getElement_ev_bool_ev_uint32_ev_uint32_CVariant(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_getElement_ev_bool_ev_uint32_ev_uint32_CVariant_NoVirtual(void *pObjectXXXX, _in ev_uint32 row, _in ev_uint32 fieldIndex, _inout void* var )
				{
					const EarthView::World::Spatial2D::Raster::CRasterAttributeTable* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::getElement(row, fieldIndex, *(EarthView::World::Core::CVariant*)var);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_setElement_ev_bool_ev_uint32_ev_uint32_CVariant(void *pObjectXXXX, _in ev_uint32 row, _in ev_uint32 fieldIndex, _in const void* var )
				{
					EarthView::World::Spatial2D::Raster::CRasterAttributeTable* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX;
					if (dynamic_cast<CRasterAttributeTableProxy*>((EarthView::World::Spatial2D::Raster::CRasterAttributeTable*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::setElement(row, fieldIndex, *(EarthView::World::Core::CVariant*)var);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->setElement(row, fieldIndex, *(EarthView::World::Core::CVariant*)var);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_setElement_ev_bool_ev_uint32_ev_uint32_CVariant( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterAttributeTable_setElement_ev_bool_ev_uint32_ev_uint32_CVariant_Callback* pCallback )
				{
					CRasterAttributeTableProxy* ptr = dynamic_cast<CRasterAttributeTableProxy*>((EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_setElement_ev_bool_ev_uint32_ev_uint32_CVariant(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_setElement_ev_bool_ev_uint32_ev_uint32_CVariant_NoVirtual(void *pObjectXXXX, _in ev_uint32 row, _in ev_uint32 fieldIndex, _in const void* var )
				{
					EarthView::World::Spatial2D::Raster::CRasterAttributeTable* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::setElement(row, fieldIndex, *(EarthView::World::Core::CVariant*)var);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterAttributeTable* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX;
					if (dynamic_cast<CRasterAttributeTableProxy*>((EarthView::World::Spatial2D::Raster::CRasterAttributeTable*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::toXmlElement();
						EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->toXmlElement();
						EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterAttributeTable_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CRasterAttributeTableProxy* ptr = dynamic_cast<CRasterAttributeTableProxy*>((EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterAttributeTable* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial2D::Raster::CRasterAttributeTable* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX;
					if (dynamic_cast<CRasterAttributeTableProxy*>((EarthView::World::Spatial2D::Raster::CRasterAttributeTable*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterAttributeTable_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CRasterAttributeTableProxy* ptr = dynamic_cast<CRasterAttributeTableProxy*>((EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterAttributeTable_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterAttributeTable_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial2D::Raster::CRasterAttributeTable* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
			}
		}
	}
}
