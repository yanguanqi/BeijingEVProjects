#ifndef IVECTORFILELAYERSELECTION_H
#define IVECTORFILELAYERSELECTION_H
#include "spatialinterface/ilayerselection.h"
#include "vectorfileparser/vectorfileparser_config.h"
namespace EarthView{namespace World{namespace Spatial{namespace VectorFileParser{
class EV_VECTORFILEPARSER_LIB IVectorFileLayerSelection
			: public EarthView::World::Spatial::Atlas::ILayerSelection
{
	friend class IVectorFileDataLayer;
	friend class IVectorFileAnnoLayer;
public:
	IVectorFileLayerSelection();
	~IVectorFileLayerSelection();
	EarthView::World::Spatial::GeoDataset::IFeatureSelection* getSelection() const;
	EarthView::World::Spatial::Display::ISymbol * getSelectionSymbol() const;
	ev_void setSelectionSymbol( _in const EarthView::World::Spatial::Display::ISymbol *symbol );
ev_private:
	IVectorFileLayerSelection(EarthView::World::Core::CNameValuePairList* pList);
protected:
	C_DISABLE_COPY(IVectorFileLayerSelection);
	EarthView::World::Spatial::GeoDataset::IFeatureSelection *m_pSelection;
	EarthView::World::Spatial::Display::ISymbol *m_pSymbol;
};
}}}}
#endif