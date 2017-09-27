#ifndef VECTORFILEDATASOURCEFACTORY_H
#define VECTORFILEDATASOURCEFACTORY_H
#include "spatialinterface/idatasourcefactory.h"
#include "vectorfileparser/vectorfileparser_config.h"
namespace EarthView{namespace World{namespace Spatial{namespace GeoDataset{
	class IDataSource;
}}}}

namespace EarthView{namespace World{namespace Spatial{namespace VectorFileParser{
class EV_VECTORFILEPARSER_LIB CVectorFileDataSourceFactory:
	public EarthView::World::Spatial::GeoDataset::IDataSourceFactory
{
public:
	CVectorFileDataSourceFactory();
	~CVectorFileDataSourceFactory();
	ev_int32 getType() const;
	EarthView::World::Spatial::GeoDataset::IDataSource* createFromXML(const EVString& xml);
	EarthView::World::Spatial::GeoDataset::IDataSource* openDataSource(
																										const EVString &path,
																										const EVString &fileName);
	void closeDataSource(EarthView::World::Spatial::GeoDataset::IDataSource *pDataSource);
	ev_void destroyDataSource(EarthView::World::Spatial::GeoDataset::IDataSource *pDataSource);
	static CVectorFileDataSourceFactory* getSingletonPtr();
ev_private:
	CVectorFileDataSourceFactory(EarthView::World::Core::CNameValuePairList* pList);
private:
	static CVectorFileDataSourceFactory* m_pSingleton;
};
}}}}
#endif