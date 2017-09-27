#ifndef MESH_CACHE_WRITE_UTILITY_H__
#define MESH_CACHE_WRITE_UTILITY_H__
#include "core/variant.h"
#include "spatialdatabase/propertyset.h"
#include "cachemanager/cacheasynchronousaccessor.h"
#include "cachemanager/cacheaccessor.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
		
			class EV_CACHEMANAGER_DLL CModelCacheWriteUtility : public CacheAccessor
			{
			public:
				CModelCacheWriteUtility();
				~CModelCacheWriteUtility();

			};

			// <summary>
			// 对外提供接口，一次写入模型、实体、资源及资源引用数据
			// </summary>
			class EV_CACHEMANAGER_DLL CModelCacheSyncWriteUtility : public CacheSyncWriteAccessor
			{
			public:
				~CModelCacheSyncWriteUtility();

			ev_private:
				typedef map<EVString, EarthView::World::Core::CVariant> ModelParam;
				typedef map<EVString, EarthView::World::Core::CVariant> EntieyParam;
				typedef map<EVString, EarthView::World::Core::CVariant> ResourceParam;
				typedef vector<ResourceParam> ResourceParams;

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				 ev_bool write(const EVString& meshtable,
					const EVString& entitytable,
					const EVString& resourcetable,
					const EVString& meshresourcereftable,
					ModelParam& modelaram, 
					const EntieyParam& entityaram, 
					const ResourceParams& resourceparams);

				/// <summary>
				/// 写模型资源（非模型模板）
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				 ev_bool writeModelResource(GeoDataset::CPropertySet* mpPropertySet);

			public:
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_int32 writeCacheFunc();



			protected:
				friend class CModelCacheWriteUtility;
			private:
				CModelCacheSyncWriteUtility();
				class Param : public CacheSyncWriteAccessor::PrivateData
				{
				public:
					EVString meshtable;
					EVString entitytable;
					EVString resourcetable;
					EVString meshresourcereftable;
					ModelParam modelaram;
					EntieyParam entityaram;
					ResourceParams resourceparams;
				};

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_void writeModel(CModelCacheSyncWriteUtility::Param* param);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_void writeModelTemplata(CModelCacheSyncWriteUtility::Param* param);
			};
		}}}

#endif
