#ifndef EVFEATURECLASSDRIVERREGISTER_H
#define EVFEATURECLASSDRIVERREGISTER_H
#include "core/memoryallocatedobject.h"
#include "core/readwritelock.h"
#include "vectorfileparser/vectorfileparser_config.h"
namespace EarthView{namespace World{namespace Core{
	class CDynLib;
}}}
namespace EarthView{namespace World{namespace Spatial{namespace GeoDataset{
	class IFileDataSource;
	class IDataset;
}}}}
namespace EarthView{namespace World{namespace Spatial{namespace VectorFileParser{
	class CFeatureClassDriver;
	class EV_VECTORFILEPARSER_LIB EVFeatureClassDriverRegister : public EarthView::World::Core::CAllocatedObject
	{
		friend class CEVAutoRegisterDrivers;
	public:
		static EVFeatureClassDriverRegister* getRegisterDrivers();
		EarthView::World::Spatial::GeoDataset::IDataset* openDataset(
									EarthView::World::Spatial::GeoDataset::IFileDataSource* pDataSource,
									const EVString& name);
		~EVFeatureClassDriverRegister();
		ev_void EVRegisterDriver(CFeatureClassDriver* pDriver);
		CFeatureClassDriver* getDriverByName(const EVString& driverName);
ev_private:
		EVFeatureClassDriverRegister(EarthView::World::Core::CNameValuePairList* pList);
	protected:
		EVFeatureClassDriverRegister();
		ev_void AutoLoadDrivers();
	private:
		static EVFeatureClassDriverRegister* mFeatureClassDriverRegister;
		vector<CFeatureClassDriver*> mRegisterDrivers;
		vector<EarthView::World::Core::CDynLib*> mDriverLibs;
		EarthView::World::Core::CReadWriteLock mReadWriteLock;
	};
}}}}
#endif