#ifndef EARTHVIEW_WORLD_SPATIAL_IMAGE_TILE_CACHE_ACCESSOR_H
#define EARTHVIEW_WORLD_SPATIAL_IMAGE_TILE_CACHE_ACCESSOR_H
#include "core/datastream.h"
#include "cachemanager/cacheaccessor.h"
#include "cachemanager/cacheasynchronousaccessor.h"
#include "tileutility/tilepathenums.h"

namespace EarthView{
	namespace World{
		namespace Spatial{

			class EV_CACHEMANAGER_DLL ImageTileCacheAccessor : public EarthView::World::Spatial::CacheAccessor
			{
				friend class CacheAccessorManager;
			public:
				ImageTileCacheAccessor();

				~ImageTileCacheAccessor();

				/// <summary>
				/// 
				/// </summary>
				/// <param name="type">JPG = 0;EVG = 1;</param>
				/// <returns></returns>		
				EarthView::World::Core::MemoryDataStreamPtr readTileByType(EarthView::World::Spatial::EVTileModeType tilemode,const EVString& layerName,
					const ev_int32 tilelevel, 
					const ev_int32 row, 
					const ev_int32 col, 
					const ev_int32 type);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				EarthView::World::Core::MemoryDataStreamPtr readTile(EarthView::World::Spatial::EVTileModeType tilemode,_in const EVString& layerName,
					_in const ev_int32 tilelevel, 
					_in const ev_int32 row, 
					_in const ev_int32 col, 
					_out ev_int32& type);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool readTile(_in EarthView::World::Spatial::EVTileModeType tilemode,
					_in const EVString& layerName,
					_in const ev_int32 tilelevel,
					_in const ev_int32 row,
					_in const ev_int32 col,
					_out ev_int32& tileType,
					_out EarthView::World::Core::MemoryDataStreamPtr& dataValue,
					_out EarthView::World::Core::MemoryDataStreamPtr& property);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool readTileInfo(EarthView::World::Spatial::EVTileModeType tilemode,
					const EVString& layerName,
					const ev_int32 tilelevel,
					const ev_int32 row,
					const ev_int32 col,
					_out ev_bool& isLastest,
					_out EarthView::World::Core::CCoreTime& updateTime,
					_out EarthView::World::Core::CCoreTime& dateTime,
					_out EarthView::World::Core::MemoryDataStreamPtr& property);

				/// <summary>
				/// 
				/// </summary>
				/// <param name="tileType">-1:无，0：空，1：jpg, 2:evg, 3:bmp, 4:dds, 5:pvr</param>
				/// <returns></returns>		
				ev_bool write(EarthView::World::Spatial::EVTileModeType tilemode,
					const EVString& layerName,
					const ev_int32 tilelevel,
					const ev_int32 row,
					const ev_int32 col,
					const ev_int32 tileType,
					const EarthView::World::Core::MemoryDataStreamPtr& dataValue,
					const ev_bool isLastest,
					const EarthView::World::Core::CCoreTime& updateTime,
					const EarthView::World::Core::CCoreTime& dateTime,
					const EarthView::World::Core::MemoryDataStreamPtr& property,
					const ev_real32 centerx,
					const ev_real32 centery);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool update(EarthView::World::Spatial::EVTileModeType tilemode,
					const EVString& layerName,
					const ev_int32 tilelevel,
					const ev_int32 row,
					const ev_int32 col,
					const ev_int32 tileType,
					const EarthView::World::Core::MemoryDataStreamPtr& dataValue,
					const ev_bool isLastest,
					const EarthView::World::Core::CCoreTime& updateTime,
					const EarthView::World::Core::CCoreTime& dateTime,
					const EarthView::World::Core::MemoryDataStreamPtr& property,
					const ev_real32 centerx,
					const ev_real32 centery);

				/// <summary>
				/// 
				/// </summary>
				/// <param name="folder">文件夹</param>
				/// <returns></returns>
				ev_int32 deleteCacheFiles(const EVString& folder);

			protected:
		
			};

			class EV_CACHEMANAGER_DLL ImageTileCacheSyncAccessor : public EarthView::World::Spatial::CacheSyncWriteAccessor
			{
			public:
				ImageTileCacheSyncAccessor();

				~ImageTileCacheSyncAccessor();

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
				ev_bool write(EarthView::World::Spatial::EVTileModeType tilemode,
					const EVString& layerName,
					const ev_int32 tilelevel,
					const ev_int32 row,
					const ev_int32 col,
					const ev_int32 tileType,
					const EarthView::World::Core::MemoryDataStreamPtr& dataValue,
					const ev_bool isLastest,
					const EarthView::World::Core::CCoreTime& updateTime,
					const EarthView::World::Core::CCoreTime& dateTime,
					const EarthView::World::Core::MemoryDataStreamPtr& property,
					const ev_real32 centerx,
					const ev_real32 centery);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool update(EarthView::World::Spatial::EVTileModeType tilemode,
					const EVString& layerName,
					const ev_int32 tilelevel,
					const ev_int32 row,
					const ev_int32 col,
					const ev_int32 tileType,
					const EarthView::World::Core::MemoryDataStreamPtr& dataValue,
					const ev_bool isLastest,
					const EarthView::World::Core::CCoreTime& updateTime,
					const EarthView::World::Core::CCoreTime& dateTime,
					const EarthView::World::Core::MemoryDataStreamPtr& property,
					const ev_real32 centerx,
					const ev_real32 centery);
			protected:
			private:
				class Param : public CacheSyncWriteAccessor::PrivateData
				{
				public:
					EarthView::World::Spatial::EVTileModeType tileMode;
					EVString layerName;
					ev_int32 tilelevel;
					ev_int32 row;
					ev_int32 col;
					ev_int32 tileType;
					EarthView::World::Core::MemoryDataStreamPtr dataValue;
					ev_bool isLastest;
					EarthView::World::Core::CCoreTime updateTime;
					EarthView::World::Core::CCoreTime dateTime;
					EarthView::World::Core::MemoryDataStreamPtr property;
					ev_real32 centerx;
					ev_real32 centery;

					ev_bool isUpdate;

					Param(EarthView::World::Spatial::EVTileModeType tilemode,
						const EVString& layerName,
						const ev_int32 tilelevel,
						const ev_int32 row,
						const ev_int32 col,
						const ev_int32 tileType,
						const EarthView::World::Core::MemoryDataStreamPtr& dataValue,
						const ev_bool isLastest,
						const EarthView::World::Core::CCoreTime& updateTime,
						const EarthView::World::Core::CCoreTime& dateTime,
						const EarthView::World::Core::MemoryDataStreamPtr& property,
						const ev_real32 centerx,
						const ev_real32 centery)
						: tileMode(tilemode),
						layerName(layerName),
						tilelevel(tilelevel),
						row(row),
						col(col),
						tileType(tileType),
						dataValue(dataValue),
						isLastest(isLastest),
						updateTime(updateTime),
						dateTime(dateTime),
						property(property),
						centerx(centerx),
						centery(centery)
					{
						isUpdate = false;
					}
					Param(){};
					~Param()
					{
						//if (!dataValue.isNull())
						//{
						//	dataValue.setNull();
						//}
						//if (!property.isNull())
						//{
						//	property.setNull();
						//}
					}
				};
			};
		}}}
#endif