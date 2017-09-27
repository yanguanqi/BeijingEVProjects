#ifndef EV_MODELDATASOURCE_TOOL_CONFIG_H__
#define EV_MODELDATASOURCE_TOOL_CONFIG_H__
#include "core/global.h"
#include "core/xml.h"
#include "spatialinterface/idataset.h"
#include "spatialinterface/idatasource.h"
#include "spatial3ddataset/entitydataset.h"
#include "spatial3ddataset/modeldatasource.h"
#include "spatial3ddataset/modeldatasourcefactory.h"
#include "spatial3dengine/spatial3denginecomdef.h"
#include "spatial3ddataset/entityiterator.h"
#include "spatial3ddataset/entityfeature.h"
#include "spatial3ddataset/meshtemplatedataset.h"
#include "spatial3ddataset/meshtemplatefeature.h"
#include "spatial3ddataset/meshtemplateiterator.h"
#include "spatial3ddataset/resourcedataset.h"
#include "spatial3ddataset/resourcefeature.h"
#include "spatial3ddataset/resourceiterator.h"
#include "spatial3dengine/modeldbimportlistener.h"
#include "spatial3ddataset/usertypemanager.h"
#include "spatial3ddataset/propertymanager.h"
#include "spatialdatabase/queryfilter.h"
#include "spatialdatabase/fields.h"
#include "cachemanager/cachemanager.h"
//
#ifdef  EV_BUILD_SPATIAL3DPROXY_MANAGER 
#define EV_SPATIAL3DPROXY_DLL EV_DLL_EXPORT
#else
#define EV_SPATIAL3DPROXY_DLL EV_DLL_IMPORT
#endif
//#define  EV_MODELDATASOURCE_TOOL_DLL

#define BEGIN_MODEL_TOOL_NAMESPACE		namespace EarthView{namespace World{ namespace Spatial3DProxy {
#define END_MODEL_TOOL_NAMESPACE		}}}
#endif
