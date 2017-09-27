/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/idatasetoperator.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
				typedef int  ( _stdcall EarthView_World_Spatial_GeoDataset_IDatasetOperator_getDatasetType_EVDatasetType_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_GeoDataset_IDatasetOperator_getDataSourceType_EVDataSourceType_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_IDatasetOperator_openDataset_ev_bool_CDataStream_EVString_Callback)(_inout void* stream, _in char*& name);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_IDatasetOperator_deleteDataset_ev_bool_EVString_Callback)(_in char*& name);
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_GeoDataset_IDatasetOperator_getDataSourceRef_IDataSource_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDatasetOperator*  ( _stdcall EarthView_World_Spatial_GeoDataset_IDatasetOperator_clone_IDatasetOperator_Callback)();
				class IDatasetOperatorProxy : public EarthView::World::Spatial::GeoDataset::IDatasetOperator
				{
				private:
					EarthView_World_Spatial_GeoDataset_IDatasetOperator_getDatasetType_EVDatasetType_Callback* m_EarthView_World_Spatial_GeoDataset_IDatasetOperator_getDatasetType_EVDatasetType_Callback;
					EarthView_World_Spatial_GeoDataset_IDatasetOperator_getDataSourceType_EVDataSourceType_Callback* m_EarthView_World_Spatial_GeoDataset_IDatasetOperator_getDataSourceType_EVDataSourceType_Callback;
					EarthView_World_Spatial_GeoDataset_IDatasetOperator_openDataset_ev_bool_CDataStream_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_IDatasetOperator_openDataset_ev_bool_CDataStream_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_IDatasetOperator_deleteDataset_ev_bool_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_IDatasetOperator_deleteDataset_ev_bool_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_IDatasetOperator_getDataSourceRef_IDataSource_Callback* m_EarthView_World_Spatial_GeoDataset_IDatasetOperator_getDataSourceRef_IDataSource_Callback;
					EarthView_World_Spatial_GeoDataset_IDatasetOperator_clone_IDatasetOperator_Callback* m_EarthView_World_Spatial_GeoDataset_IDatasetOperator_clone_IDatasetOperator_Callback;
				public:
					IDatasetOperatorProxy(EarthView::World::Core::CNameValuePairList *pList) : IDatasetOperator(pList)
					{
						m_EarthView_World_Spatial_GeoDataset_IDatasetOperator_getDatasetType_EVDatasetType_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IDatasetOperator_getDataSourceType_EVDataSourceType_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IDatasetOperator_openDataset_ev_bool_CDataStream_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IDatasetOperator_deleteDataset_ev_bool_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IDatasetOperator_getDataSourceRef_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IDatasetOperator_clone_IDatasetOperator_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IDatasetOperator_getDatasetType_EVDatasetType(EarthView_World_Spatial_GeoDataset_IDatasetOperator_getDatasetType_EVDatasetType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IDatasetOperator_getDatasetType_EVDatasetType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IDatasetOperator_getDataSourceType_EVDataSourceType(EarthView_World_Spatial_GeoDataset_IDatasetOperator_getDataSourceType_EVDataSourceType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IDatasetOperator_getDataSourceType_EVDataSourceType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IDatasetOperator_openDataset_ev_bool_CDataStream_EVString(EarthView_World_Spatial_GeoDataset_IDatasetOperator_openDataset_ev_bool_CDataStream_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IDatasetOperator_openDataset_ev_bool_CDataStream_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IDatasetOperator_deleteDataset_ev_bool_EVString(EarthView_World_Spatial_GeoDataset_IDatasetOperator_deleteDataset_ev_bool_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IDatasetOperator_deleteDataset_ev_bool_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IDatasetOperator_getDataSourceRef_IDataSource(EarthView_World_Spatial_GeoDataset_IDatasetOperator_getDataSourceRef_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IDatasetOperator_getDataSourceRef_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IDatasetOperator_clone_IDatasetOperator(EarthView_World_Spatial_GeoDataset_IDatasetOperator_clone_IDatasetOperator_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IDatasetOperator_clone_IDatasetOperator_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType()
					{
						if(m_EarthView_World_Spatial_GeoDataset_IDatasetOperator_getDatasetType_EVDatasetType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_GeoDataset_IDatasetOperator_getDatasetType_EVDatasetType_Callback();
							return returnValue;
						}
						else
							return this->IDatasetOperator::getDatasetType();
					}
					virtual EarthView::World::Spatial::GeoDataset::EVDataSourceType getDataSourceType()
					{
						if(m_EarthView_World_Spatial_GeoDataset_IDatasetOperator_getDataSourceType_EVDataSourceType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVDataSourceType returnValue = (EarthView::World::Spatial::GeoDataset::EVDataSourceType)m_EarthView_World_Spatial_GeoDataset_IDatasetOperator_getDataSourceType_EVDataSourceType_Callback();
							return returnValue;
						}
						else
							return this->IDatasetOperator::getDataSourceType();
					}
					virtual ev_bool openDataset(_inout EarthView::World::Core::CDataStream& stream, _in const EVString& name)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IDatasetOperator_openDataset_ev_bool_CDataStream_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_IDatasetOperator_openDataset_ev_bool_CDataStream_EVString_Callback(&stream, name_Char);
							return returnValue;
						}
						else
							return this->IDatasetOperator::openDataset(stream, name);
					}
					virtual ev_bool deleteDataset(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IDatasetOperator_deleteDataset_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_IDatasetOperator_deleteDataset_ev_bool_EVString_Callback(name_Char);
							return returnValue;
						}
						else
							return this->IDatasetOperator::deleteDataset(name);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef()
					{
						if(m_EarthView_World_Spatial_GeoDataset_IDatasetOperator_getDataSourceRef_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_GeoDataset_IDatasetOperator_getDataSourceRef_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->IDatasetOperator::getDataSourceRef();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDatasetOperator* clone() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IDatasetOperator_clone_IDatasetOperator_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDatasetOperator* returnValue = m_EarthView_World_Spatial_GeoDataset_IDatasetOperator_clone_IDatasetOperator_Callback();
							return returnValue;
						}
						else
							return this->IDatasetOperator::clone();
					}
				};
				REGISTER_FACTORY_CLASS(IDatasetOperatorProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_IDatasetOperator_getDatasetType_EVDatasetType(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::IDatasetOperator* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDatasetOperator*) pObjectXXXX;
					if (dynamic_cast<IDatasetOperatorProxy*>((EarthView::World::Spatial::GeoDataset::IDatasetOperator*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDatasetOperator::getDatasetType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->getDatasetType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDatasetOperator_getDatasetType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IDatasetOperator_getDatasetType_EVDatasetType_Callback* pCallback )
				{
					IDatasetOperatorProxy* ptr = dynamic_cast<IDatasetOperatorProxy*>((EarthView::World::Spatial::GeoDataset::IDatasetOperator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IDatasetOperator_getDatasetType_EVDatasetType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_IDatasetOperator_getDatasetType_EVDatasetType_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::IDatasetOperator* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDatasetOperator*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDatasetOperator::getDatasetType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_IDatasetOperator_getDataSourceType_EVDataSourceType(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::IDatasetOperator* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDatasetOperator*) pObjectXXXX;
					if (dynamic_cast<IDatasetOperatorProxy*>((EarthView::World::Spatial::GeoDataset::IDatasetOperator*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::EVDataSourceType objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDatasetOperator::getDataSourceType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVDataSourceType objXXXX = ptrNativeObject->getDataSourceType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDatasetOperator_getDataSourceType_EVDataSourceType( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IDatasetOperator_getDataSourceType_EVDataSourceType_Callback* pCallback )
				{
					IDatasetOperatorProxy* ptr = dynamic_cast<IDatasetOperatorProxy*>((EarthView::World::Spatial::GeoDataset::IDatasetOperator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IDatasetOperator_getDataSourceType_EVDataSourceType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_IDatasetOperator_getDataSourceType_EVDataSourceType_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::IDatasetOperator* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDatasetOperator*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVDataSourceType objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDatasetOperator::getDataSourceType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IDatasetOperator_openDataset_ev_bool_CDataStream_EVString(void *pObjectXXXX, _inout void* stream, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::GeoDataset::IDatasetOperator* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDatasetOperator*) pObjectXXXX;
					if (dynamic_cast<IDatasetOperatorProxy*>((EarthView::World::Spatial::GeoDataset::IDatasetOperator*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDatasetOperator::openDataset(*(EarthView::World::Core::CDataStream*)stream, name1);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->openDataset(*(EarthView::World::Core::CDataStream*)stream, name1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDatasetOperator_openDataset_ev_bool_CDataStream_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IDatasetOperator_openDataset_ev_bool_CDataStream_EVString_Callback* pCallback )
				{
					IDatasetOperatorProxy* ptr = dynamic_cast<IDatasetOperatorProxy*>((EarthView::World::Spatial::GeoDataset::IDatasetOperator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IDatasetOperator_openDataset_ev_bool_CDataStream_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IDatasetOperator_openDataset_ev_bool_CDataStream_EVString_NoVirtual(void *pObjectXXXX, _inout void* stream, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::GeoDataset::IDatasetOperator* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDatasetOperator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDatasetOperator::openDataset(*(EarthView::World::Core::CDataStream*)stream, name1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IDatasetOperator_deleteDataset_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::GeoDataset::IDatasetOperator* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDatasetOperator*) pObjectXXXX;
					if (dynamic_cast<IDatasetOperatorProxy*>((EarthView::World::Spatial::GeoDataset::IDatasetOperator*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDatasetOperator::deleteDataset(name1);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->deleteDataset(name1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDatasetOperator_deleteDataset_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IDatasetOperator_deleteDataset_ev_bool_EVString_Callback* pCallback )
				{
					IDatasetOperatorProxy* ptr = dynamic_cast<IDatasetOperatorProxy*>((EarthView::World::Spatial::GeoDataset::IDatasetOperator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IDatasetOperator_deleteDataset_ev_bool_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IDatasetOperator_deleteDataset_ev_bool_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::GeoDataset::IDatasetOperator* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDatasetOperator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDatasetOperator::deleteDataset(name1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_GeoDataset_IDatasetOperator_getDataSourceRef_IDataSource(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::IDatasetOperator* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDatasetOperator*) pObjectXXXX;
					if (dynamic_cast<IDatasetOperatorProxy*>((EarthView::World::Spatial::GeoDataset::IDatasetOperator*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDatasetOperator::getDataSourceRef();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->getDataSourceRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDatasetOperator_getDataSourceRef_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IDatasetOperator_getDataSourceRef_IDataSource_Callback* pCallback )
				{
					IDatasetOperatorProxy* ptr = dynamic_cast<IDatasetOperatorProxy*>((EarthView::World::Spatial::GeoDataset::IDatasetOperator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IDatasetOperator_getDataSourceRef_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_GeoDataset_IDatasetOperator_getDataSourceRef_IDataSource_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::IDatasetOperator* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDatasetOperator*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDatasetOperator::getDataSourceRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDatasetOperator*  _stdcall EarthView_World_Spatial_GeoDataset_IDatasetOperator_clone_IDatasetOperator(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IDatasetOperator* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDatasetOperator*) pObjectXXXX;
					if (dynamic_cast<IDatasetOperatorProxy*>((EarthView::World::Spatial::GeoDataset::IDatasetOperator*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDatasetOperator* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDatasetOperator::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDatasetOperator* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDatasetOperator_clone_IDatasetOperator( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IDatasetOperator_clone_IDatasetOperator_Callback* pCallback )
				{
					IDatasetOperatorProxy* ptr = dynamic_cast<IDatasetOperatorProxy*>((EarthView::World::Spatial::GeoDataset::IDatasetOperator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IDatasetOperator_clone_IDatasetOperator(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDatasetOperator*  _stdcall EarthView_World_Spatial_GeoDataset_IDatasetOperator_clone_IDatasetOperator_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IDatasetOperator* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDatasetOperator*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDatasetOperator* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDatasetOperator::clone();
					return objXXXX;
				}
			}
		}
	}
}
