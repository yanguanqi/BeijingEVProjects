#ifndef IVECTORFILEANNOLAYERFACTORY_H
#define IVECTORFILEANNOLAYERFACTORY_H
#include "spatialinterface/ilayer.h"
#include "vectorfileparser/vectorfileparser_config.h"
namespace EarthView{namespace World{namespace Spatial{namespace VectorFileParser{
class EV_VECTORFILEPARSER_LIB IVectorFileAnnoLayerFactory
	: public EarthView::World::Spatial::Atlas::ILayerFactory
{
public:
	IVectorFileAnnoLayerFactory();
	~IVectorFileAnnoLayerFactory();
	EarthView::World::Spatial::Atlas::EVLayerType getType()const;
	EarthView::World::Spatial::Atlas::ILayer* createInstance();
	EarthView::World::Spatial::Atlas::ILayer* createInstance(EarthView::World::Core::CXmlElement& element);
	ev_bool destroyInstance(EarthView::World::Spatial::Atlas::ILayer* layer);
ev_private:
	IVectorFileAnnoLayerFactory(EarthView::World::Core::CNameValuePairList* pList);
};
}}}}
#endif