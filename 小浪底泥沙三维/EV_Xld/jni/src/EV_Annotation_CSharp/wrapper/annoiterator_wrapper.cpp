/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "annotation/annoiterator.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace GeoDataset
			{
				typedef EarthView::World::Spatial::GeoDataset::IFeature*  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_next_IFeature_Callback)();
				typedef const EarthView::World::Spatial::GeoDataset::IFields*  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_getFields_IFields_Callback)();
				typedef const EarthView::World::Spatial::GeoDataset::IField*  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_getField_IField_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_findField_ev_int32_EVString_Callback)(_in char*& fieldName);
				class CAnnoIteratorProxy : public EarthView::World::Spatial2D::GeoDataset::CAnnoIterator
				{
				private:
					EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_next_IFeature_Callback* m_EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_next_IFeature_Callback;
					EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_getFields_IFields_Callback* m_EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_getFields_IFields_Callback;
					EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_getField_IField_ev_uint32_Callback* m_EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_getField_IField_ev_uint32_Callback;
					EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_findField_ev_int32_EVString_Callback* m_EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_findField_ev_int32_EVString_Callback;
				public:
					CAnnoIteratorProxy(EarthView::World::Core::CNameValuePairList *pList) : CAnnoIterator(pList)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_next_IFeature_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_getFields_IFields_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_getField_IField_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_findField_ev_int32_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_next_IFeature(EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_next_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_next_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_getFields_IFields(EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_getFields_IFields_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_getFields_IFields_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_getField_IField_ev_uint32(EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_getField_IField_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_getField_IField_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_findField_ev_int32_EVString(EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_findField_ev_int32_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_findField_ev_int32_EVString_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeature* next()
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_next_IFeature_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeature* returnValue = m_EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_next_IFeature_Callback();
							return returnValue;
						}
						else
							return this->CAnnoIterator::next();
					}
					virtual const EarthView::World::Spatial::GeoDataset::IFields* getFields() const
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_getFields_IFields_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IFields* returnValue = m_EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_getFields_IFields_Callback();
							return returnValue;
						}
						else
							return this->CAnnoIterator::getFields();
					}
					virtual const EarthView::World::Spatial::GeoDataset::IField* getField(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_getField_IField_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IField* returnValue = m_EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_getField_IField_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CAnnoIterator::getField(index);
					}
					virtual ev_int32 findField(_in const EVString& fieldName) const
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_findField_ev_int32_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* fieldName_Char = fieldName.makeBuffer();
							ev_int32 returnValue = m_EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_findField_ev_int32_EVString_Callback(fieldName_Char);
							return returnValue;
						}
						else
							return this->CAnnoIterator::findField(fieldName);
					}
				};
				REGISTER_FACTORY_CLASS(CAnnoIteratorProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_next_IFeature(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CAnnoIterator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CAnnoIterator*) pObjectXXXX;
					if (dynamic_cast<CAnnoIteratorProxy*>((EarthView::World::Spatial2D::GeoDataset::CAnnoIterator*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CAnnoIterator::next();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->next();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_next_IFeature( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_next_IFeature_Callback* pCallback )
				{
					CAnnoIteratorProxy* ptr = dynamic_cast<CAnnoIteratorProxy*>((EarthView::World::Spatial2D::GeoDataset::CAnnoIterator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_next_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_next_IFeature_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CAnnoIterator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CAnnoIterator*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CAnnoIterator::next();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IFields*  _stdcall EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_getFields_IFields(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CAnnoIterator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CAnnoIterator*) pObjectXXXX;
					if (dynamic_cast<CAnnoIteratorProxy*>((EarthView::World::Spatial2D::GeoDataset::CAnnoIterator*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CAnnoIterator::getFields();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->getFields();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_getFields_IFields( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_getFields_IFields_Callback* pCallback )
				{
					CAnnoIteratorProxy* ptr = dynamic_cast<CAnnoIteratorProxy*>((EarthView::World::Spatial2D::GeoDataset::CAnnoIterator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_getFields_IFields(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IFields*  _stdcall EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_getFields_IFields_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CAnnoIterator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CAnnoIterator*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CAnnoIterator::getFields();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_getField_IField_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial2D::GeoDataset::CAnnoIterator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CAnnoIterator*) pObjectXXXX;
					if (dynamic_cast<CAnnoIteratorProxy*>((EarthView::World::Spatial2D::GeoDataset::CAnnoIterator*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CAnnoIterator::getField(index);
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->getField(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_getField_IField_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_getField_IField_ev_uint32_Callback* pCallback )
				{
					CAnnoIteratorProxy* ptr = dynamic_cast<CAnnoIteratorProxy*>((EarthView::World::Spatial2D::GeoDataset::CAnnoIterator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_getField_IField_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_getField_IField_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial2D::GeoDataset::CAnnoIterator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CAnnoIterator*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CAnnoIterator::getField(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_findField_ev_int32_EVString(void *pObjectXXXX, _in const char* fieldName )
				{
					EarthView::World::Core::ev_string fieldName1 = fieldName;
					const EarthView::World::Spatial2D::GeoDataset::CAnnoIterator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CAnnoIterator*) pObjectXXXX;
					if (dynamic_cast<CAnnoIteratorProxy*>((EarthView::World::Spatial2D::GeoDataset::CAnnoIterator*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CAnnoIterator::findField(fieldName1);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->findField(fieldName1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_findField_ev_int32_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_findField_ev_int32_EVString_Callback* pCallback )
				{
					CAnnoIteratorProxy* ptr = dynamic_cast<CAnnoIteratorProxy*>((EarthView::World::Spatial2D::GeoDataset::CAnnoIterator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_findField_ev_int32_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_GeoDataset_CAnnoIterator_findField_ev_int32_EVString_NoVirtual(void *pObjectXXXX, _in const char* fieldName )
				{
					EarthView::World::Core::ev_string fieldName1 = fieldName;
					const EarthView::World::Spatial2D::GeoDataset::CAnnoIterator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CAnnoIterator*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CAnnoIterator::findField(fieldName1);
					return objXXXX;
				}
			}
		}
	}
}
