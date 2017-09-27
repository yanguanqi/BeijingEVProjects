#ifndef EARTHVIEW_WORLD_SPATIAL_CACHEMANAGER_GLOBAL_H
#define EARTHVIEW_WORLD_SPATIAL_CACHEMANAGER_GLOBAL_H
#include "core/global.h"
#include "core/ev_logger.h"
#include "core/ev_time.h"

//动态库导出导入宏
//------------------------------------------------------------------------------------------------------------------------------------//
#ifdef EV_BUILD_CACHEMANAGER
#define EV_CACHEMANAGER_DLL EV_DLL_EXPORT
#else
#define EV_CACHEMANAGER_DLL EV_DLL_IMPORT
#endif

#define EV_CACHEMANAGER_LOG "cachemanager"

//cache访问对象实例名称
//------------------------------------------------------------------------------------------------------------------------------------//
//#define EV_MATERIAL_RESOURCE_CACHE_ACCESSOR					"ev_materialresourcecache"
//#define	EV_MATERIAL_REF_CACHE_ACCESSOR								"ev_materialrefcache"
//#define EV_PARTICLE_SCRIPT_CACHE_ACCESSOR							"ev_articlescriptcache"
//#define EV_PARTICLE_LAYER_CACHE_ACCESSOR								"ev_particlelayercache"
#define EV_DATASET_INFO_CACHE_ACCESSOR								"ev_datasetInfocache"
//#define EV_MESH_TEMPLATE_CACHE_ACCESSOR							"ev_meshtemplatecache"
#define EV_OCTREE_CACHE_ACCESSOR												"ev_octreecache"
#define EV_VECTOR_OCTREE_CACHE_ACCESSOR						"ev_vectoroctreecache"
#define EV_IMAGE_TILE_CACHE_ACCESSOR										"ev_imagetilecache"
#define EV_DEM_TILE_CACHE_ACCESSOR											"ev_demtilecache"
//#define EV_MAP_TILE_CACHE_ACCESSOR											"ev_maptilecache"
#define EV_MODEL_CACHE_ACCESSOR												"ev_modelcache"
#define EV_MODEL_TEMPLATE_CACHE_ACCESSOR							"ev_modeltemplatecache"
#define EV_ENTITY_CACHE_ACCESSOR												"ev_entitycache"
#define EV_VECTOR_TILE_CACHE_ACCESSOR									"ev_vectortilecache"
#define EV_EFFECT_CACHE_ACCESSOR												"ev_effectcache"
#define EV_KML_CACHE_ACCESSOR												"ev_kmlcache"
#define EV_WEBMETADATA_ACCESSOR												"ev_webmetadatacache"


//cache更新代理实例名称
//------------------------------------------------------------------------------------------------------------------------------------//

//#define EV_MATERIAL_RESOURCE_CACHE_UPDATE_PROXY					EV_MATERIAL_RESOURCE_CACHE_ACCESSOR
//#define EV_MATERIAL_REF_CACHE_UPDATE_PROXY								EV_MATERIAL_REF_CACHE_ACCESSOR
//#define EV_PARTICLE_SCRIPT_CACHE_UPDATE_PROXY							EV_PARTICLE_SCRIPT_CACHE_ACCESSOR
//#define EV_PARTICLE_LAYER_CACHE_UPDATE_PROXY							EV_PARTICLE_LAYER_CACHE_ACCESSOR
#define EV_DATASET_INFO_CACHE_UPDATE_PROXY								EV_DATASET_INFO_CACHE_ACCESSOR
//#define EV_MESH_TEMPLATE_CACHE_UPDATE_PROXY							EV_MESH_TEMPLATE_CACHE_ACCESSOR
#define EV_OCTREE_CACHE_UPDATE_PROXY											EV_OCTREE_CACHE_ACCESSOR
#define EV_VECTOR_OCTREE_CACHE_UPDATE_PROXY							EV_VECTOR_OCTREE_CACHE_ACCESSOR
#define EV_IMAGE_TILE_CACHE_UPDATE_PROXY										EV_IMAGE_TILE_CACHE_ACCESSOR
#define EV_DEM_TILE_CACHE_UPDATE_PROXY										EV_DEM_TILE_CACHE_ACCESSOR
//#define EV_MAP_TILE_CACHE_UPDATE_PROXY										EV_MAP_TILE_CACHE_ACCESSOR
#define EV_MODEL_CACHE_UPDATE_PROXY											EV_MODEL_CACHE_ACCESSOR
#define EV_MODEL_TEMPLATE_CACHE_UPDATE_PROXY											EV_MODEL_TEMPLATE_CACHE_ACCESSOR
#define EV_ENTITY_CACHE_UPDATE_PROXY												EV_ENTITY_CACHE_ACCESSOR
#define EV_VECTOR_TILE_CACHE_UPDATE_PROXY									EV_VECTOR_TILE_CACHE_ACCESSOR
#define EV_EFFECT_CACHE_ACCESSOR_PROXY										EV_EFFECT_CACHE_ACCESSOR
#define EV_WEBMETADATA_ACCESSOR_PROXY										EV_WEBMETADATA_ACCESSOR

ev_void formatTime(_in EVString& strTime, EarthView::World::Core::CCoreTime& time);
ev_void formatTime(_in const EarthView::World::Core::CCoreTime& time, EVString& strTime);
EarthView::World::Core::CCoreTime formatTime(const EVString& strTime);
EVString formatTime(const EarthView::World::Core::CCoreTime& time);

#if 0
#define HAVE_CacheAccessTimeTag
class CacheAccessTimeTag
{
public:
	CacheAccessTimeTag(ev_int32 tag);

	~CacheAccessTimeTag();

protected:
	ev_uint32 mThreadID;
	ev_int32 mTag;
	EarthView::World::Core::CCoreTime mAccessTime;
private:
};

#define CACHE_ACCESS_TIME_TAG(tag) CacheAccessTimeTag __t__(tag);

#else
#define CACHE_ACCESS_TIME_TAG(tag)
#endif
#endif
