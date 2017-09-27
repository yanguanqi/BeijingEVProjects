#ifndef IVECTORFILEDATALAYERFACTORY_H
#define IVECTORFILEDATALAYERFACTORY_H
#include "core/xml.h"
#include "spatialinterface/ilayer.h"
#include "vectorfileparser/vectorfileparser_config.h"
namespace EarthView{namespace World{namespace Spatial{namespace VectorFileParser{
class EV_VECTORFILEPARSER_LIB IVectorFileDataLayerFactory
					: public EarthView::World::Spatial::Atlas::ILayerFactory
{
public:
	IVectorFileDataLayerFactory();
	~IVectorFileDataLayerFactory();
	EarthView::World::Spatial::Atlas::EVLayerType getType()const;
	EarthView::World::Spatial::Atlas::ILayer* createInstance();
	EarthView::World::Spatial::Atlas::ILayer* createInstance(EarthView::World::Core::CXmlElement& element);
	ev_bool destroyInstance(EarthView::World::Spatial::Atlas::ILayer* layer);
ev_private:
	IVectorFileDataLayerFactory(EarthView::World::Core::CNameValuePairList* pList);
};
}}}}
#endif