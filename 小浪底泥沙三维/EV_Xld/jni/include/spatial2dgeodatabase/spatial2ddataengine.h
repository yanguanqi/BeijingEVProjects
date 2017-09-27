#ifndef _SPATIAL2D_DATAENGINE_H_H_
#define _SPATIAL2D_DATAENGINE_H_H_

#include "spatial2dgeodatabase/config.h"
#include "spatialinterface/idatasetoperator.h"
#include "spatialinterface/idataset.h"


namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace GeoDataset{

class /*EV_2DGEODATABSE_DLL*/ CSpatial2DDataEngine
{
public:
	 EarthView::World::Spatial::GeoDataset::IDatasetOperator* getOperator(EarthView::World::Spatial::GeoDataset::EVDatasetType type);
	void registerOperator(EarthView::World::Spatial::GeoDataset::EVDatasetType type,EarthView::World::Spatial::GeoDataset::IDatasetOperator* opr);

};






}}}} // End of Namespaces

#endif //_SPATIAL2D_DATAENGINE_H_H_

