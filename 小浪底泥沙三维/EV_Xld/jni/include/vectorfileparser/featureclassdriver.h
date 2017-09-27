#ifndef FEATURECLASSDRIVER_H
#define FEATURECLASSDRIVER_H
#include "core/memoryallocatedobject.h"
#include "vectorfileparser/vectorfileparser_config.h"
namespace EarthView{namespace World{namespace Spatial{namespace GeoDataset{
	class IFileDataSource;
	class IDataset;
}}}}
namespace EarthView{namespace World{namespace Spatial{namespace VectorFileParser{
	class EV_VECTORFILEPARSER_LIB CFeatureClassDriver
						: public EarthView::World::Core::CAllocatedObject
	{
	public:
		virtual ~CFeatureClassDriver();
		virtual EVString getName();
		virtual EarthView::World::Spatial::GeoDataset::IDataset* openDataset(
										EarthView::World::Spatial::GeoDataset::IFileDataSource* pDataSource,
										const EVString& name);
ev_private:
		CFeatureClassDriver(EarthView::World::Core::CNameValuePairList* pList);
	protected:
		C_DISABLE_COPY(CFeatureClassDriver);
		CFeatureClassDriver();
	};
}}}}
#endif