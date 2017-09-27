#ifndef EARTHVIEW_WORLD_SPATIAL_DEM_TILE_CACHE_ACCESSOR_H
#define EARTHVIEW_WORLD_SPATIAL_DEM_TILE_CACHE_ACCESSOR_H
#include "cachemanager/cacheaccessor.h"
#include "cachemanager/cacheasynchronousaccessor.h"
namespace EarthView{
	namespace World{
		namespace Spatial{

			// <summary>
			// DemTileCacheAccessor
			// </summary>
			class EV_CACHEMANAGER_DLL DemTileCacheAccessor : public EarthView::World::Spatial::CacheAccessor
			{
				friend class CacheAccessorManager;
			public:
				DemTileCacheAccessor();

				~DemTileCacheAccessor();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool readTileInfo(const EVString& datasetname,
					const ev_int32 tilelevel, 
					const ev_int32 tilerow, 
					const ev_int32 tilecol,
					_out ev_bool& isLastest,
					_out EarthView::World::Core::CCoreTime& updateTime,
					_out EarthView::World::Core::CCoreTime& dateTime,
					_out EarthView::World::Core::CCoreTime& downTime);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				EarthView::World::Core::MemoryDataStreamPtr readTile(const EVString& datasetname,
					const ev_int32 tilelevel, 
					const ev_int32 tilerow, 
					const ev_int32 tilecol,
					const ev_int32 tileType);

			ev_private:
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				EarthView::World::Core::MemoryDataStreamPtr readTile(const EVString& datasetname,
					const ev_int32 levelCount,
					const vector<ev_int32>& rows,
					const vector<ev_int32>& cols,
					const ev_int32 tileType,
					_out ev_int32& row,
					_out ev_int32& col,
					_out ev_int32& level);

			public:
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeTile(const EVString& datasetname,
					const ev_int32 tilelevel, 
					const ev_int32 tilerow, 
					const ev_int32 tilecol,
					const ev_int32 tileType,
					const ev_bool isLastest,
					const EarthView::World::Core::CCoreTime& updateTime,
					const EarthView::World::Core::CCoreTime& dateTime,
					const EarthView::World::Core::CCoreTime& downTime,
					const EarthView::World::Core::MemoryDataStreamPtr& tileData,
					const ev_real32 centerx,
					const ev_real32 centery);

			protected:
			private:
			};


			class EV_CACHEMANAGER_DLL DemTileCacheSyncAccessor : public EarthView::World::Spatial::CacheSyncWriteAccessor
			{
			public:
				DemTileCacheSyncAccessor();

				~DemTileCacheSyncAccessor();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_int32 writeCacheFunc();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeTile(const EVString& datasetname,
					const ev_int32 tilelevel, 
					const ev_int32 tilerow, 
					const ev_int32 tilecol,
					const ev_int32 tileType,
					const ev_bool isLastest,
					const EarthView::World::Core::CCoreTime& updateTime,
					const EarthView::World::Core::CCoreTime& dateTime,
					const EarthView::World::Core::CCoreTime& downTime,
					const EarthView::World::Core::MemoryDataStreamPtr& tileData,
					const ev_real32 centerx,
					const ev_real32 centery);

			protected:
			private:
				class Param : public EarthView::World::Spatial::CacheSyncWriteAccessor::PrivateData
				{
				public:
					ev_int32 tilelevel; 
					ev_int32 tilerow; 
					ev_int32 tilecol;
					ev_int32 tileType;
					ev_bool isLastest;
					EarthView::World::Core::CCoreTime updateTime;
					EarthView::World::Core::CCoreTime dateTime;
					EarthView::World::Core::CCoreTime downTime;
					EarthView::World::Core::MemoryDataStreamPtr tileData;
					ev_real32 centerx;
					ev_real32 centery;
					EVString datasetname;

					Param(const EVString& datasetname,
						const ev_int32 tilelevel, 
						const ev_int32 tilerow, 
						const ev_int32 tilecol,
						const ev_int32 tileType,
						const ev_bool isLastest,
						const EarthView::World::Core::CCoreTime& updateTime,
						const EarthView::World::Core::CCoreTime& dateTime,
						const EarthView::World::Core::CCoreTime& downTime,
						const EarthView::World::Core::MemoryDataStreamPtr& tileData,
						const ev_real32 centerx,
						const ev_real32 centery)
						:datasetname(datasetname),
						tilelevel(tilelevel), 
						tilerow(tilerow), 
						tilecol(tilecol),
						tileType(tileType),
						isLastest(isLastest),
						updateTime(updateTime),
						dateTime(dateTime),
						downTime(downTime),
						tileData(tileData),
						centerx(centerx),
						centery(centery)
					{
					}
					Param(){};
					~Param()
					{
						//if (!tileData.isNull())
						//{
						//	tileData.setNull();
						//}
					}
				};
			};
		}}}
#endif