#ifndef EV_MODELDATASOURCE_TOOL_CONFIG_H__
#define EV_MODELDATASOURCE_TOOL_CONFIG_H__
#include "core/global.h"
#include "core/xml.h"
#include "spatialinterface/idataset.h"
#include "spatialinterface/idatasource.h"
#include "spatial3dengine/entitydataset.h"
#include "spatial3dengine/spatialdatasource3d.h"
#include "spatial3dengine/spatialdatasource3dfactory.h"
#include "spatial3dengine/spatial3denginecomdef.h"
#include "spatial3dengine/entityiterator.h"
#include "spatial3dengine/entityfeature.h"
#include "spatial3dengine/resourcedataset.h"
#include "spatial3dengine/resourcefeature.h"
#include "spatial3dengine/resourceiterator.h"
#include "spatialdatabase/queryfilter.h"
#include "spatialdatabase/fields.h"
#include "cachemanager/cachemanager.h"
// using namespace EarthView::World::Core;
// using namespace EarthView::World::Spatial;
// using namespace EarthView::World::Spatial::GeoDataset;
// using namespace EarthView::World::Spatial3D::ModelManager;
//
#ifdef EV_MODELDATASOURCE_EXPORT
#define EV_MODELDATASOURCE_TOOL_DLL EV_DLL_EXPORT
#else
#define EV_MODELDATASOURCE_TOOL_DLL EV_DLL_IMPORT
#endif
//#define  EV_MODELDATASOURCE_TOOL_DLL

#define BEGIN_MODEL_TOOL_NAMESPACE		namespace ModelTool {
#define END_MODEL_TOOL_NAMESPACE		}
#define USING_MODEL_TOOL_NAMESPACE		using namespace ModelTool;
#endif