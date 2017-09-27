#ifndef EARTHVIEW_WORLD_SPATIAL_VECTOR_TILE_CACHE_ACCESSOR_H
#define EARTHVIEW_WORLD_SPATIAL_VECTOR_TILE_CACHE_ACCESSOR_H
#include "core/datastream.h"
#include"mathengine/ev_math.h"
#include "cachemanager/cacheasynchronousaccessor.h"
#include "cachemanager/cacheaccessor.h"
#include "tileutility/tilepathenums.h"


namespace EarthView{
	namespace World{
		namespace Spatial{

			class EV_CACHEMANAGER_DLL VectorTileCacheAccessor : public CacheAccessor
			{
				friend class CacheAccessorManager;
			public:
				VectorTileCacheAccessor();

				~VectorTileCacheAccessor();

				/// <summary>
				/// 写入新数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeData(_in EarthView::World::Spatial::EVTileModeType tilemode,
					const EVString& layerName,
					const ev_int32 tileLevel,
					const ev_int32 tileRow,
					const ev_int32 tileCol,
					const ev_int32 tileType,
					const EarthView::World::Core::MemoryDataStreamPtr& dataValue,
					const ev_int32 isLastest,
					const EarthView::World::Core::CCoreTime& updateTime,
					const EarthView::World::Core::CCoreTime& dataTime,
					const EarthView::World::Core::MemoryDataStreamPtr& themeStyle,
					const EarthView::World::Core::MemoryDataStreamPtr& sysImg,
					const EarthView::World::Core::CCoreTime& sysImgUpdateTime,
					const EarthView::World::Core::MemoryDataStreamPtr& supImg,
					const EarthView::World::Core::CCoreTime& supImgUpdateTime,
					const EarthView::World::Core::MemoryDataStreamPtr& arcImg,
					const EarthView::World::Core::CCoreTime& arcImgUpdateTime,
					const EarthView::World::Core::MemoryDataStreamPtr& property,
					const Real centerX,
					const Real centerY);


				/// <summary>
				/// 写入图层组合并后的数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeMergedTileData(_in EarthView::World::Spatial::EVTileModeType tilemode,
					const EVString& layerName, 
					const ev_int32 tileLevel,
					const ev_int32 tileRow,
					const ev_int32 tileCol,
					const ev_int32 tileType,
					const EarthView::World::Core::MemoryDataStreamPtr& themeStyle,
					const EarthView::World::Core::MemoryDataStreamPtr& tileData);

				ev_bool writeObliqueImageData(_in EarthView::World::Spatial::EVTileModeType tilemode,
					const EVString& layerName, 
					const ev_int32 minX,
					const ev_int32 minY,
					const ev_int32 maxX,
					const ev_int32 maxY,
					const ev_int32 tileType,
					const EarthView::World::Core::MemoryDataStreamPtr& themeStyle,
					const EarthView::World::Core::MemoryDataStreamPtr& tileData);

				/// <summary>
				/// 更新合并的图层数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool updataMergedTileData(_in EarthView::World::Spatial::EVTileModeType tilemode,
					const EVString& layerName, 
					const ev_int32 tileLevel,
					const ev_int32 tileRow,
					const ev_int32 tileCol,
					const ev_int32 tileType,
					const EarthView::World::Core::MemoryDataStreamPtr& themeStyle,
					const EarthView::World::Core::MemoryDataStreamPtr& tileData);

				ev_bool updataObliqueImageData(_in EarthView::World::Spatial::EVTileModeType tilemode,
					const EVString& layerName, 
					const ev_int32 minX,
					const ev_int32 minY,
					const ev_int32 maxX,
					const ev_int32 maxY,
					const ev_int32 tileType,
					const EarthView::World::Core::MemoryDataStreamPtr& themeStyle,
					const EarthView::World::Core::MemoryDataStreamPtr& tileData);

				/// <summary>
				/// 读取合并后的图层的风格
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				EarthView::World::Core::MemoryDataStreamPtr readMergedTileThemeStyle(_in EarthView::World::Spatial::EVTileModeType tilemode,
					const EVString& layerName, 
					const ev_int32 tileLevel,
					const ev_int32 tileRow,
					const ev_int32 tileCol);

				EarthView::World::Core::MemoryDataStreamPtr readObliqueImageThemeStyle(_in EarthView::World::Spatial::EVTileModeType tilemode,
					const EVString& layerName, 
					const Real minX,
					const Real minY,
					const Real maxX,
					const Real maxY);
				/// <summary>
				/// 读取合并后的图层数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				EarthView::World::Core::MemoryDataStreamPtr readMergedTileData(_in EarthView::World::Spatial::EVTileModeType tilemode,
					const EVString& layerName, 
					const ev_int32 tileLevel,
					const ev_int32 tileRow,
					const ev_int32 tileCol,
					_out ev_int32& tileType);
				EarthView::World::Core::MemoryDataStreamPtr readMergedTileData(_in EarthView::World::Spatial::EVTileModeType tilemode,
					const EVString& layerName, 
					const ev_int32 tileLevel,
					const ev_int32 tileRow,
					const ev_int32 tileCol,
					_out ev_int32& tileType,
					_out EarthView::World::Core::MemoryDataStreamPtr& themePtr);

				EarthView::World::Core::MemoryDataStreamPtr readObliqueImageData(_in EarthView::World::Spatial::EVTileModeType tilemode,
					const EVString& layerName, 
					const ev_int32 minX,
					const ev_int32 minY,
					const ev_int32 maxX,
					const ev_int32 maxY,
					_out ev_int32& tileType);
				EarthView::World::Core::MemoryDataStreamPtr readObliqueImageData(_in EarthView::World::Spatial::EVTileModeType tilemode,
					const EVString& layerName, 
					const ev_int32 minX,
					const ev_int32 minY,
					const ev_int32 maxX,
					const ev_int32 maxY,
					_out ev_int32& tileType,
					_out EarthView::World::Core::MemoryDataStreamPtr& themePtr);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns>NotFound = -1;EVV = 1;EVV_7Z = 2;PNG = 11; EVP = 21; EVP_7Z_Stream = 22;</returns>
		
				ev_int32 readTileType(_in EarthView::World::Spatial::EVTileModeType tilemode,
					const EVString& layerName,
					const ev_int32 tilelevel, 
					const ev_int32 tilerow, 
					const ev_int32 tilecol);

				/// <summary>
				/// 
				/// </summary>
				/// <param name="tileType">EVV = 1;EVV_7Z = 2;PNG = 11; EVP = 21; EVP_7Z_Stream = 22</param>
				/// <returns></returns>
		
				EarthView::World::Core::MemoryDataStreamPtr readTile(_in EarthView::World::Spatial::EVTileModeType tilemode,
					const EVString& layerName,
					const ev_int32 tilelevel, 
					const ev_int32 tilerow, 
					const ev_int32 tilecol,
					_out ev_int32& tileType);

				/// <summary>
				/// 读取风格类型
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				EarthView::World::Core::MemoryDataStreamPtr readThemeStyle(_in EarthView::World::Spatial::EVTileModeType tilemode,
					const EVString& layerName,
					const ev_int32 tilelevel, 
					const ev_int32 tilerow, 
					const ev_int32 tilecol);

				/// <summary>
				/// 
				/// </summary>
				/// <param name="imageType">System = 0; SurperMap = 1; Esri = 2;</param>
				/// <returns></returns>
		
				EarthView::World::Core::MemoryDataStreamPtr readTileImage(_in EarthView::World::Spatial::EVTileModeType tilemode,
					const EVString& layerName,
					const ev_int32 tilelevel, 
					const ev_int32 tilerow, 
					const ev_int32 tilecol,
					const ev_int32 imageType);

				EarthView::World::Core::MemoryDataStreamPtr readTileImage(_in EarthView::World::Spatial::EVTileModeType tilemode,
					const EVString& layerName,
					const ev_int32 tilelevel, 
					const ev_int32 tilerow, 
					const ev_int32 tilecol,
					const ev_int32 imageType,
					_out EarthView::World::Core::MemoryDataStreamPtr& themePtr);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool updateTileImage(_in EarthView::World::Spatial::EVTileModeType tilemode,
					const EVString& layerName,
					const ev_int32 tilelevel, 
					const ev_int32 tilerow, 
					const ev_int32 tilecol,
					const ev_int32 imageType,
					const EarthView::World::Core::MemoryDataStreamPtr& themeStyle,
					const EarthView::World::Core::MemoryDataStreamPtr& pTileValue);

				/// <summary>
				/// 清除指定图层的缓存数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool clearCache(const EVString& layerName)	;


			protected:
			private:
			};

			class EV_CACHEMANAGER_DLL VectorTileCacheSyncAccessor : public CacheSyncWriteAccessor
			{
			public:
				VectorTileCacheSyncAccessor();

				~VectorTileCacheSyncAccessor();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_int32 writeCacheFunc();

				/// <summary>
				/// 写入新数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeData(_in EarthView::World::Spatial::EVTileModeType tilemode,
					const EVString& layerName,
					const ev_int32 tileLevel,
					const ev_int32 tileRow,
					const ev_int32 tileCol,
					const ev_int32 tileType,
					const EarthView::World::Core::MemoryDataStreamPtr& dataValue,
					const ev_int32 isLastest,
					const EarthView::World::Core::CCoreTime& updateTime,
					const EarthView::World::Core::CCoreTime& dataTime,
					const EarthView::World::Core::MemoryDataStreamPtr& themeStyle,
					const EarthView::World::Core::MemoryDataStreamPtr& sysImg,
					const EarthView::World::Core::CCoreTime& sysImgUpdateTime,
					const EarthView::World::Core::MemoryDataStreamPtr& supImg,
					const EarthView::World::Core::CCoreTime& supImgUpdateTime,
					const EarthView::World::Core::MemoryDataStreamPtr& arcImg,
					const EarthView::World::Core::CCoreTime& arcImgUpdateTime,
					const EarthView::World::Core::MemoryDataStreamPtr& property,
					const Real centerX,
					const Real centerY);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool updateTileImage(_in EarthView::World::Spatial::EVTileModeType tilemode,
					const EVString& layerName,
					const ev_int32 tilelevel, 
					const ev_int32 tilerow, 
					const ev_int32 tilecol,
					const ev_int32 imageType,
					const EarthView::World::Core::MemoryDataStreamPtr& themeStyle,
					const EarthView::World::Core::MemoryDataStreamPtr& pTileValue);

				/// <summary>
				/// 写入图层组合并后的数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeMergedTileData(_in EarthView::World::Spatial::EVTileModeType tilemode,
					const EVString& layerName, 
					const ev_int32 tileLevel,
					const ev_int32 tileRow,
					const ev_int32 tileCol,
					const ev_int32 tileType,
					const EarthView::World::Core::MemoryDataStreamPtr& themeStyle,
					const EarthView::World::Core::MemoryDataStreamPtr& tileData);

				ev_bool writeObliqueImageData(_in EarthView::World::Spatial::EVTileModeType tilemode,
					const EVString& layerName, 
					const ev_int32 minX,
					const ev_int32 minY,
					const ev_int32 maxX,
					const ev_int32 maxY,
					const ev_int32 tileType,
					const EarthView::World::Core::MemoryDataStreamPtr& themeStyle,
					const EarthView::World::Core::MemoryDataStreamPtr& tileData);

				/// <summary>
				/// 更新合并的图层数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool updataMergedTileData(_in EarthView::World::Spatial::EVTileModeType tilemode,
					const EVString& layerName, 
					const ev_int32 tileLevel,
					const ev_int32 tileRow,
					const ev_int32 tileCol,
					const ev_int32 tileType,
					const EarthView::World::Core::MemoryDataStreamPtr& themeStyle,
					const EarthView::World::Core::MemoryDataStreamPtr& tileData);

				ev_bool updataObliqueImageData(_in EarthView::World::Spatial::EVTileModeType tilemode,
					const EVString& layerName, 
					const ev_int32 minX,
					const ev_int32 minY,
					const ev_int32 maxX,
					const ev_int32 maxY,
					const ev_int32 tileType,
					const EarthView::World::Core::MemoryDataStreamPtr& themeStyle,
					const EarthView::World::Core::MemoryDataStreamPtr& tileData);


			protected:
			private:
				class Param : public CacheSyncWriteAccessor::PrivateData
				{
				public:
					EarthView::World::Spatial::EVTileModeType tilemode;
					EVString layerName;
					ev_int32 tilelevel; 
					ev_int32 tilerow; 
					ev_int32 tilecol;
					ev_int32 minX;
					ev_int32 minY;
					ev_int32 maxX;
					ev_int32 maxY;
					ev_int32 tiletype;
					EarthView::World::Core::MemoryDataStreamPtr dataValue;
					ev_bool isLastest;
					EarthView::World::Core::CCoreTime updateTime;
					EarthView::World::Core::CCoreTime dataTime;
					EarthView::World::Core::MemoryDataStreamPtr themeStyle;
					EarthView::World::Core::MemoryDataStreamPtr sysImg;
					EarthView::World::Core::CCoreTime sysImgUpdateTime;
					EarthView::World::Core::MemoryDataStreamPtr supImg;
					EarthView::World::Core::CCoreTime supImgUpdateTime;
					EarthView::World::Core::MemoryDataStreamPtr arcImg;
					EarthView::World::Core::CCoreTime arcImgUpdateTime;
					EarthView::World::Core::MemoryDataStreamPtr property;
					Real centerx;
					Real centery;

					//更新
					ev_int32 updateImgType;
					EarthView::World::Core::MemoryDataStreamPtr updateTileVal;

					//更新or写入合并的数据				(0：无操作，1：写入，2：更新)
					ev_int32 mergedTileProcType;

					Param()
					{
						mergedTileProcType= 0; 
						tilelevel = -1;
						tilerow = -1;
						tilecol = -1;
						minX = -1;
						minY = -1;
						maxX = -1;
						maxY = -1;
					};
					~Param()
					{
						//if (!dataValue.isNull())
						//{
						//	dataValue.setNull();
						//}
						//if (!themeStyle.isNull())
						//{
						//	themeStyle.setNull();
						//}
						//if (!sysImg.isNull())
						//{
						//	sysImg.setNull();
						//}
						//if (!supImg.isNull())
						//{
						//	supImg.setNull();
						//}
						//if (!arcImg.isNull())
						//{
						//	arcImg.setNull();
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