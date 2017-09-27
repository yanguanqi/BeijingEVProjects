/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialserverclient/webdatasetiterator.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial_CWebDatasetIterator_next_IDataset_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CWebDatasetIterator_getSize_ev_uint32_Callback)();
			typedef int  ( _stdcall EarthView_World_Spatial_CWebDatasetIterator_getDatasetType_EVDatasetType_Callback)();
			class CWebDatasetIteratorProxy : public EarthView::World::Spatial::CWebDatasetIterator
			{
			private:
				EarthView_World_Spatial_CWebDatasetIterator_next_IDataset_Callback* m_EarthView_World_Spatial_CWebDatasetIterator_next_IDataset_Callback;
				EarthView_World_Spatial_CWebDatasetIterator_getSize_ev_uint32_Callback* m_EarthView_World_Spatial_CWebDatasetIterator_getSize_ev_uint32_Callback;
				EarthView_World_Spatial_CWebDatasetIterator_getDatasetType_EVDatasetType_Callback* m_EarthView_World_Spatial_CWebDatasetIterator_getDatasetType_EVDatasetType_Callback;
			public:
				CWebDatasetIteratorProxy(EarthView::World::Core::CNameValuePairList *pList) : CWebDatasetIterator(pList)
				{
					m_EarthView_World_Spatial_CWebDatasetIterator_next_IDataset_Callback = NULL;
					m_EarthView_World_Spatial_CWebDatasetIterator_getSize_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CWebDatasetIterator_getDatasetType_EVDatasetType_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CWebDatasetIterator_next_IDataset(EarthView_World_Spatial_CWebDatasetIterator_next_IDataset_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebDatasetIterator_next_IDataset_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebDatasetIterator_getSize_ev_uint32(EarthView_World_Spatial_CWebDatasetIterator_getSize_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebDatasetIterator_getSize_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebDatasetIterator_getDatasetType_EVDatasetType(EarthView_World_Spatial_CWebDatasetIterator_getDatasetType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebDatasetIterator_getDatasetType_EVDatasetType_Callback = pCallback;
				}
				virtual ev_uint32 getSize() const
				{
					if(m_EarthView_World_Spatial_CWebDatasetIterator_getSize_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CWebDatasetIterator_getSize_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CWebDatasetIterator::getSize();
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const
				{
					if(m_EarthView_World_Spatial_CWebDatasetIterator_getDatasetType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CWebDatasetIterator_getDatasetType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CWebDatasetIterator::getDatasetType();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataset* next()
				{
					if(m_EarthView_World_Spatial_CWebDatasetIterator_next_IDataset_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial_CWebDatasetIterator_next_IDataset_Callback();
						return returnValue;
					}
					else
						return this->CWebDatasetIterator::next();
				}
			};
			REGISTER_FACTORY_CLASS(CWebDatasetIteratorProxy);
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWebDatasetIterator_getSize_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebDatasetIterator* ptrNativeObject = (EarthView::World::Spatial::CWebDatasetIterator*) pObjectXXXX;
				if (dynamic_cast<CWebDatasetIteratorProxy*>((EarthView::World::Spatial::CWebDatasetIterator*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebDatasetIterator::getSize();
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->getSize();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebDatasetIterator_getSize_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CWebDatasetIterator_getSize_ev_uint32_Callback* pCallback )
			{
				CWebDatasetIteratorProxy* ptr = dynamic_cast<CWebDatasetIteratorProxy*>((EarthView::World::Spatial::CWebDatasetIterator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebDatasetIterator_getSize_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWebDatasetIterator_getSize_ev_uint32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebDatasetIterator* ptrNativeObject = (EarthView::World::Spatial::CWebDatasetIterator*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebDatasetIterator::getSize();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CWebDatasetIterator_getDatasetType_EVDatasetType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebDatasetIterator* ptrNativeObject = (EarthView::World::Spatial::CWebDatasetIterator*) pObjectXXXX;
				if (dynamic_cast<CWebDatasetIteratorProxy*>((EarthView::World::Spatial::CWebDatasetIterator*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebDatasetIterator::getDatasetType();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->getDatasetType();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebDatasetIterator_getDatasetType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CWebDatasetIterator_getDatasetType_EVDatasetType_Callback* pCallback )
			{
				CWebDatasetIteratorProxy* ptr = dynamic_cast<CWebDatasetIteratorProxy*>((EarthView::World::Spatial::CWebDatasetIterator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebDatasetIterator_getDatasetType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CWebDatasetIterator_getDatasetType_EVDatasetType_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebDatasetIterator* ptrNativeObject = (EarthView::World::Spatial::CWebDatasetIterator*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebDatasetIterator::getDatasetType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebDatasetIterator_next_IDataset( void *pObjectXXXX, EarthView_World_Spatial_CWebDatasetIterator_next_IDataset_Callback* pCallback )
			{
				CWebDatasetIteratorProxy* ptr = dynamic_cast<CWebDatasetIteratorProxy*>((EarthView::World::Spatial::CWebDatasetIterator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebDatasetIterator_next_IDataset(pCallback);
				}
			}
			typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial_CEVWebDatasetIterator_next_IDataset_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CEVWebDatasetIterator_getSize_ev_uint32_Callback)();
			typedef int  ( _stdcall EarthView_World_Spatial_CEVWebDatasetIterator_getDatasetType_EVDatasetType_Callback)();
			class CEVWebDatasetIteratorProxy : public EarthView::World::Spatial::CEVWebDatasetIterator
			{
			private:
				EarthView_World_Spatial_CEVWebDatasetIterator_next_IDataset_Callback* m_EarthView_World_Spatial_CEVWebDatasetIterator_next_IDataset_Callback;
				EarthView_World_Spatial_CEVWebDatasetIterator_getSize_ev_uint32_Callback* m_EarthView_World_Spatial_CEVWebDatasetIterator_getSize_ev_uint32_Callback;
				EarthView_World_Spatial_CEVWebDatasetIterator_getDatasetType_EVDatasetType_Callback* m_EarthView_World_Spatial_CEVWebDatasetIterator_getDatasetType_EVDatasetType_Callback;
			public:
				CEVWebDatasetIteratorProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVWebDatasetIterator(pList)
				{
					m_EarthView_World_Spatial_CEVWebDatasetIterator_next_IDataset_Callback = NULL;
					m_EarthView_World_Spatial_CEVWebDatasetIterator_getSize_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CEVWebDatasetIterator_getDatasetType_EVDatasetType_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CEVWebDatasetIterator_next_IDataset(EarthView_World_Spatial_CEVWebDatasetIterator_next_IDataset_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWebDatasetIterator_next_IDataset_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWebDatasetIterator_getSize_ev_uint32(EarthView_World_Spatial_CEVWebDatasetIterator_getSize_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWebDatasetIterator_getSize_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWebDatasetIterator_getDatasetType_EVDatasetType(EarthView_World_Spatial_CEVWebDatasetIterator_getDatasetType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWebDatasetIterator_getDatasetType_EVDatasetType_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataset* next()
				{
					if(m_EarthView_World_Spatial_CEVWebDatasetIterator_next_IDataset_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial_CEVWebDatasetIterator_next_IDataset_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CEVWebDatasetIterator::next();
				}
				virtual ev_uint32 getSize() const
				{
					if(m_EarthView_World_Spatial_CEVWebDatasetIterator_getSize_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CEVWebDatasetIterator_getSize_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CEVWebDatasetIterator::getSize();
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const
				{
					if(m_EarthView_World_Spatial_CEVWebDatasetIterator_getDatasetType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CEVWebDatasetIterator_getDatasetType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CEVWebDatasetIterator::getDatasetType();
				}
			};
			REGISTER_FACTORY_CLASS(CEVWebDatasetIteratorProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial_CEVWebDatasetIterator_next_IDataset(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVWebDatasetIterator* ptrNativeObject = (EarthView::World::Spatial::CEVWebDatasetIterator*) pObjectXXXX;
				if (dynamic_cast<CEVWebDatasetIteratorProxy*>((EarthView::World::Spatial::CEVWebDatasetIterator*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWebDatasetIterator::next();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->next();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWebDatasetIterator_next_IDataset( void *pObjectXXXX, EarthView_World_Spatial_CEVWebDatasetIterator_next_IDataset_Callback* pCallback )
			{
				CEVWebDatasetIteratorProxy* ptr = dynamic_cast<CEVWebDatasetIteratorProxy*>((EarthView::World::Spatial::CEVWebDatasetIterator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWebDatasetIterator_next_IDataset(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial_CEVWebDatasetIterator_next_IDataset_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVWebDatasetIterator* ptrNativeObject = (EarthView::World::Spatial::CEVWebDatasetIterator*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWebDatasetIterator::next();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWebDatasetIterator_getSize_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CEVWebDatasetIterator_getSize_ev_uint32_Callback* pCallback )
			{
				CEVWebDatasetIteratorProxy* ptr = dynamic_cast<CEVWebDatasetIteratorProxy*>((EarthView::World::Spatial::CEVWebDatasetIterator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWebDatasetIterator_getSize_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWebDatasetIterator_getDatasetType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CEVWebDatasetIterator_getDatasetType_EVDatasetType_Callback* pCallback )
			{
				CEVWebDatasetIteratorProxy* ptr = dynamic_cast<CEVWebDatasetIteratorProxy*>((EarthView::World::Spatial::CEVWebDatasetIterator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWebDatasetIterator_getDatasetType_EVDatasetType(pCallback);
				}
			}
			typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial_CWMSDatasetIterator_next_IDataset_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CWMSDatasetIterator_getSize_ev_uint32_Callback)();
			typedef int  ( _stdcall EarthView_World_Spatial_CWMSDatasetIterator_getDatasetType_EVDatasetType_Callback)();
			class CWMSDatasetIteratorProxy : public EarthView::World::Spatial::CWMSDatasetIterator
			{
			private:
				EarthView_World_Spatial_CWMSDatasetIterator_next_IDataset_Callback* m_EarthView_World_Spatial_CWMSDatasetIterator_next_IDataset_Callback;
				EarthView_World_Spatial_CWMSDatasetIterator_getSize_ev_uint32_Callback* m_EarthView_World_Spatial_CWMSDatasetIterator_getSize_ev_uint32_Callback;
				EarthView_World_Spatial_CWMSDatasetIterator_getDatasetType_EVDatasetType_Callback* m_EarthView_World_Spatial_CWMSDatasetIterator_getDatasetType_EVDatasetType_Callback;
			public:
				CWMSDatasetIteratorProxy(EarthView::World::Core::CNameValuePairList *pList) : CWMSDatasetIterator(pList)
				{
					m_EarthView_World_Spatial_CWMSDatasetIterator_next_IDataset_Callback = NULL;
					m_EarthView_World_Spatial_CWMSDatasetIterator_getSize_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CWMSDatasetIterator_getDatasetType_EVDatasetType_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CWMSDatasetIterator_next_IDataset(EarthView_World_Spatial_CWMSDatasetIterator_next_IDataset_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSDatasetIterator_next_IDataset_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSDatasetIterator_getSize_ev_uint32(EarthView_World_Spatial_CWMSDatasetIterator_getSize_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSDatasetIterator_getSize_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSDatasetIterator_getDatasetType_EVDatasetType(EarthView_World_Spatial_CWMSDatasetIterator_getDatasetType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSDatasetIterator_getDatasetType_EVDatasetType_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataset* next()
				{
					if(m_EarthView_World_Spatial_CWMSDatasetIterator_next_IDataset_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial_CWMSDatasetIterator_next_IDataset_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CWMSDatasetIterator::next();
				}
				virtual ev_uint32 getSize() const
				{
					if(m_EarthView_World_Spatial_CWMSDatasetIterator_getSize_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CWMSDatasetIterator_getSize_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CWMSDatasetIterator::getSize();
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const
				{
					if(m_EarthView_World_Spatial_CWMSDatasetIterator_getDatasetType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CWMSDatasetIterator_getDatasetType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CWMSDatasetIterator::getDatasetType();
				}
			};
			REGISTER_FACTORY_CLASS(CWMSDatasetIteratorProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial_CWMSDatasetIterator_next_IDataset(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CWMSDatasetIterator* ptrNativeObject = (EarthView::World::Spatial::CWMSDatasetIterator*) pObjectXXXX;
				if (dynamic_cast<CWMSDatasetIteratorProxy*>((EarthView::World::Spatial::CWMSDatasetIterator*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMSDatasetIterator::next();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->next();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSDatasetIterator_next_IDataset( void *pObjectXXXX, EarthView_World_Spatial_CWMSDatasetIterator_next_IDataset_Callback* pCallback )
			{
				CWMSDatasetIteratorProxy* ptr = dynamic_cast<CWMSDatasetIteratorProxy*>((EarthView::World::Spatial::CWMSDatasetIterator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSDatasetIterator_next_IDataset(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial_CWMSDatasetIterator_next_IDataset_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CWMSDatasetIterator* ptrNativeObject = (EarthView::World::Spatial::CWMSDatasetIterator*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMSDatasetIterator::next();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSDatasetIterator_getSize_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CWMSDatasetIterator_getSize_ev_uint32_Callback* pCallback )
			{
				CWMSDatasetIteratorProxy* ptr = dynamic_cast<CWMSDatasetIteratorProxy*>((EarthView::World::Spatial::CWMSDatasetIterator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSDatasetIterator_getSize_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSDatasetIterator_getDatasetType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CWMSDatasetIterator_getDatasetType_EVDatasetType_Callback* pCallback )
			{
				CWMSDatasetIteratorProxy* ptr = dynamic_cast<CWMSDatasetIteratorProxy*>((EarthView::World::Spatial::CWMSDatasetIterator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSDatasetIterator_getDatasetType_EVDatasetType(pCallback);
				}
			}
			typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial_CWMTSDatasetIterator_next_IDataset_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CWMTSDatasetIterator_getSize_ev_uint32_Callback)();
			typedef int  ( _stdcall EarthView_World_Spatial_CWMTSDatasetIterator_getDatasetType_EVDatasetType_Callback)();
			class CWMTSDatasetIteratorProxy : public EarthView::World::Spatial::CWMTSDatasetIterator
			{
			private:
				EarthView_World_Spatial_CWMTSDatasetIterator_next_IDataset_Callback* m_EarthView_World_Spatial_CWMTSDatasetIterator_next_IDataset_Callback;
				EarthView_World_Spatial_CWMTSDatasetIterator_getSize_ev_uint32_Callback* m_EarthView_World_Spatial_CWMTSDatasetIterator_getSize_ev_uint32_Callback;
				EarthView_World_Spatial_CWMTSDatasetIterator_getDatasetType_EVDatasetType_Callback* m_EarthView_World_Spatial_CWMTSDatasetIterator_getDatasetType_EVDatasetType_Callback;
			public:
				CWMTSDatasetIteratorProxy(EarthView::World::Core::CNameValuePairList *pList) : CWMTSDatasetIterator(pList)
				{
					m_EarthView_World_Spatial_CWMTSDatasetIterator_next_IDataset_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSDatasetIterator_getSize_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSDatasetIterator_getDatasetType_EVDatasetType_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CWMTSDatasetIterator_next_IDataset(EarthView_World_Spatial_CWMTSDatasetIterator_next_IDataset_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSDatasetIterator_next_IDataset_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSDatasetIterator_getSize_ev_uint32(EarthView_World_Spatial_CWMTSDatasetIterator_getSize_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSDatasetIterator_getSize_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSDatasetIterator_getDatasetType_EVDatasetType(EarthView_World_Spatial_CWMTSDatasetIterator_getDatasetType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSDatasetIterator_getDatasetType_EVDatasetType_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataset* next()
				{
					if(m_EarthView_World_Spatial_CWMTSDatasetIterator_next_IDataset_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial_CWMTSDatasetIterator_next_IDataset_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CWMTSDatasetIterator::next();
				}
				virtual ev_uint32 getSize() const
				{
					if(m_EarthView_World_Spatial_CWMTSDatasetIterator_getSize_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CWMTSDatasetIterator_getSize_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CWMTSDatasetIterator::getSize();
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const
				{
					if(m_EarthView_World_Spatial_CWMTSDatasetIterator_getDatasetType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CWMTSDatasetIterator_getDatasetType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CWMTSDatasetIterator::getDatasetType();
				}
			};
			REGISTER_FACTORY_CLASS(CWMTSDatasetIteratorProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial_CWMTSDatasetIterator_next_IDataset(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CWMTSDatasetIterator* ptrNativeObject = (EarthView::World::Spatial::CWMTSDatasetIterator*) pObjectXXXX;
				if (dynamic_cast<CWMTSDatasetIteratorProxy*>((EarthView::World::Spatial::CWMTSDatasetIterator*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSDatasetIterator::next();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->next();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSDatasetIterator_next_IDataset( void *pObjectXXXX, EarthView_World_Spatial_CWMTSDatasetIterator_next_IDataset_Callback* pCallback )
			{
				CWMTSDatasetIteratorProxy* ptr = dynamic_cast<CWMTSDatasetIteratorProxy*>((EarthView::World::Spatial::CWMTSDatasetIterator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSDatasetIterator_next_IDataset(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial_CWMTSDatasetIterator_next_IDataset_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CWMTSDatasetIterator* ptrNativeObject = (EarthView::World::Spatial::CWMTSDatasetIterator*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSDatasetIterator::next();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSDatasetIterator_getSize_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CWMTSDatasetIterator_getSize_ev_uint32_Callback* pCallback )
			{
				CWMTSDatasetIteratorProxy* ptr = dynamic_cast<CWMTSDatasetIteratorProxy*>((EarthView::World::Spatial::CWMTSDatasetIterator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSDatasetIterator_getSize_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSDatasetIterator_getDatasetType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CWMTSDatasetIterator_getDatasetType_EVDatasetType_Callback* pCallback )
			{
				CWMTSDatasetIteratorProxy* ptr = dynamic_cast<CWMTSDatasetIteratorProxy*>((EarthView::World::Spatial::CWMTSDatasetIterator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSDatasetIterator_getDatasetType_EVDatasetType(pCallback);
				}
			}
		}
	}
}
