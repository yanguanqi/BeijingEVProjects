/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "vectorfileparser/featureclassdriver.h"
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
			namespace VectorFileParser
			{
				typedef char*  ( _stdcall EarthView_World_Spatial_VectorFileParser_CFeatureClassDriver_getName_EVString_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial_VectorFileParser_CFeatureClassDriver_openDataset_IDataset_IFileDataSource_EVString_Callback)(_in EarthView::World::Spatial::GeoDataset::IFileDataSource* pDataSource, _in char*& name);
				class CFeatureClassDriverProxy : public EarthView::World::Spatial::VectorFileParser::CFeatureClassDriver
				{
				private:
					EarthView_World_Spatial_VectorFileParser_CFeatureClassDriver_getName_EVString_Callback* m_EarthView_World_Spatial_VectorFileParser_CFeatureClassDriver_getName_EVString_Callback;
					EarthView_World_Spatial_VectorFileParser_CFeatureClassDriver_openDataset_IDataset_IFileDataSource_EVString_Callback* m_EarthView_World_Spatial_VectorFileParser_CFeatureClassDriver_openDataset_IDataset_IFileDataSource_EVString_Callback;
				public:
					CFeatureClassDriverProxy(EarthView::World::Core::CNameValuePairList *pList) : CFeatureClassDriver(pList)
					{
						m_EarthView_World_Spatial_VectorFileParser_CFeatureClassDriver_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_CFeatureClassDriver_openDataset_IDataset_IFileDataSource_EVString_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CFeatureClassDriverProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_CFeatureClassDriver_getName_EVString(EarthView_World_Spatial_VectorFileParser_CFeatureClassDriver_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_CFeatureClassDriver_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_CFeatureClassDriver_openDataset_IDataset_IFileDataSource_EVString(EarthView_World_Spatial_VectorFileParser_CFeatureClassDriver_openDataset_IDataset_IFileDataSource_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_CFeatureClassDriver_openDataset_IDataset_IFileDataSource_EVString_Callback = pCallback;
					}
					virtual EVString getName()
					{
						if(m_EarthView_World_Spatial_VectorFileParser_CFeatureClassDriver_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_VectorFileParser_CFeatureClassDriver_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CFeatureClassDriver::getName();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* openDataset(_in EarthView::World::Spatial::GeoDataset::IFileDataSource* pDataSource, _in const EVString& name)
					{
						if(m_EarthView_World_Spatial_VectorFileParser_CFeatureClassDriver_openDataset_IDataset_IFileDataSource_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial_VectorFileParser_CFeatureClassDriver_openDataset_IDataset_IFileDataSource_EVString_Callback(pDataSource, name_Char);
							return returnValue;
						}
						else
							return this->CFeatureClassDriver::openDataset(pDataSource, name);
					}
				};
				REGISTER_FACTORY_CLASS(CFeatureClassDriverProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_VectorFileParser_CFeatureClassDriver_getName_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial::VectorFileParser::CFeatureClassDriver* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::CFeatureClassDriver*) pObjectXXXX;
					if (dynamic_cast<CFeatureClassDriverProxy*>((EarthView::World::Spatial::VectorFileParser::CFeatureClassDriver*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::CFeatureClassDriver::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_CFeatureClassDriver_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_CFeatureClassDriver_getName_EVString_Callback* pCallback )
				{
					CFeatureClassDriverProxy* ptr = dynamic_cast<CFeatureClassDriverProxy*>((EarthView::World::Spatial::VectorFileParser::CFeatureClassDriver*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_CFeatureClassDriver_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_VectorFileParser_CFeatureClassDriver_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::VectorFileParser::CFeatureClassDriver* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::CFeatureClassDriver*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::CFeatureClassDriver::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial_VectorFileParser_CFeatureClassDriver_openDataset_IDataset_IFileDataSource_EVString(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IFileDataSource* pDataSource, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::VectorFileParser::CFeatureClassDriver* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::CFeatureClassDriver*) pObjectXXXX;
					if (dynamic_cast<CFeatureClassDriverProxy*>((EarthView::World::Spatial::VectorFileParser::CFeatureClassDriver*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::CFeatureClassDriver::openDataset(pDataSource, name1);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->openDataset(pDataSource, name1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_CFeatureClassDriver_openDataset_IDataset_IFileDataSource_EVString( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_CFeatureClassDriver_openDataset_IDataset_IFileDataSource_EVString_Callback* pCallback )
				{
					CFeatureClassDriverProxy* ptr = dynamic_cast<CFeatureClassDriverProxy*>((EarthView::World::Spatial::VectorFileParser::CFeatureClassDriver*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_CFeatureClassDriver_openDataset_IDataset_IFileDataSource_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial_VectorFileParser_CFeatureClassDriver_openDataset_IDataset_IFileDataSource_EVString_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IFileDataSource* pDataSource, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::VectorFileParser::CFeatureClassDriver* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::CFeatureClassDriver*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::CFeatureClassDriver::openDataset(pDataSource, name1);
					return objXXXX;
				}
			}
		}
	}
}
