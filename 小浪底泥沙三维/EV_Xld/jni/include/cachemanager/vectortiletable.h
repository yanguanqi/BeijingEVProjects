#ifndef EV_VECTOR_TILE_TABLE___H
#define  EV_VECTOR_TILE_TABLE___H
#include "core/datastream.h"
#include"mathengine/ev_math.h"
#include "cachemanager/cachetable.h"
namespace EarthView{
	namespace World{
		namespace Spatial{

			// <summary>
			// 创建、读写、维护DEM_Table表格
			// </summary>
			class EV_CACHEMANAGER_DLL VectorTileTable : public EarthView::World::Spatial::CacheTable
			{
			public:
				VectorTileTable();

				~VectorTileTable();

				/// <summary>
				/// 在给定的数据库连接对象中初始化表格
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				virtual ev_bool initTable(EarthView::World::Core::Database::CSqlDatabase* pdbcon);
				ev_bool initMergedVectorTileTable(EarthView::World::Core::Database::CSqlDatabase* pdbcon);
				ev_bool initObliqueImageVectorTable(EarthView::World::Core::Database::CSqlDatabase* pdbcon);

				/// <summary>
				/// 写入新数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeData(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
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
				/// <returns>NotFound = -1;EVV = 1;EVV_7Z = 2;PNG = 11; EVP = 21; EVP_7Z_Stream = 22;</returns>
		
				ev_int32 readTileType(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					const ev_int32 tilelevel, 
					const ev_int32 tilerow, 
					const ev_int32 tilecol);

				/// <summary>
				/// 
				/// </summary>
				/// <param name="tileType">EVV = 1;EVV_7Z = 2;PNG = 11; EVP = 21; EVP_7Z_Stream = 22</param>
				/// <returns></returns>
		
				EarthView::World::Core::MemoryDataStreamPtr readTile(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					const ev_int32 tilelevel, 
					const ev_int32 tilerow, 
					const ev_int32 tilecol,
					_out ev_int32& tileType);

				/// <summary>
				/// 读取风格类型
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				EarthView::World::Core::MemoryDataStreamPtr readThemeStyle(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					const ev_int32 tilelevel, 
					const ev_int32 tilerow, 
					const ev_int32 tilecol);

				/// <summary>
				/// 
				/// </summary>
				/// <param name="imageType">System = 0; SurperMap = 1; Esri = 2;</param>
				/// <returns></returns>
		
				EarthView::World::Core::MemoryDataStreamPtr readTileImage(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					const ev_int32 tilelevel, 
					const ev_int32 tilerow, 
					const ev_int32 tilecol,
					const ev_int32 imageType);

				EarthView::World::Core::MemoryDataStreamPtr readTileImage(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
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
		
				ev_bool updateTileImage(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
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
		
				ev_bool writeMergedTileData(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					const ev_int32 tileLevel,
					const ev_int32 tileRow,
					const ev_int32 tileCol,
					const ev_int32 tileType,
					const EarthView::World::Core::MemoryDataStreamPtr& themeStyle,
					const EarthView::World::Core::MemoryDataStreamPtr& tileData);

				ev_bool writeObliqueImageData(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
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
		
				ev_bool updataMergedTileData(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					const ev_int32 tileLevel,
					const ev_int32 tileRow,
					const ev_int32 tileCol,
					const ev_int32 tileType,
					const EarthView::World::Core::MemoryDataStreamPtr& themeStyle,
					const EarthView::World::Core::MemoryDataStreamPtr& tileData);

				ev_bool updataObliqueImageData(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
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
		
				EarthView::World::Core::MemoryDataStreamPtr readMergedTileThemeStyle(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					const ev_int32 tileLevel,
					const ev_int32 tileRow,
					const ev_int32 tileCol);

				EarthView::World::Core::MemoryDataStreamPtr readObliqueImageThemeStyle(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					const ev_int32 minX,
					const ev_int32 minY,
					const ev_int32 maxX,
					const ev_int32 maxY);

				/// <summary>
				/// 读取合并后的图层数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				EarthView::World::Core::MemoryDataStreamPtr readMergedTileData(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					const ev_int32 tileLevel,
					const ev_int32 tileRow,
					const ev_int32 tileCol,
				   _out ev_int32& tileType);

				EarthView::World::Core::MemoryDataStreamPtr readMergedTileData(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					const ev_int32 tileLevel,
					const ev_int32 tileRow,
					const ev_int32 tileCol,
					_out ev_int32& tileType,
					_out EarthView::World::Core::MemoryDataStreamPtr& themePtr);

				EarthView::World::Core::MemoryDataStreamPtr readObliqueImageData(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					const ev_int32 minX,
					const ev_int32 minY,
					const ev_int32 maxX,
					const ev_int32 maxY,
					_out ev_int32& tileType);

				EarthView::World::Core::MemoryDataStreamPtr readObliqueImageData(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					const ev_int32 minX,
					const ev_int32 minY,
					const ev_int32 maxX,
					const ev_int32 maxY,
					_out ev_int32& tileType,
					_out EarthView::World::Core::MemoryDataStreamPtr& themePtr);

				/// <summary>
				/// 清除指定图层的缓存数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool clearCache(EarthView::World::Core::Database::CSqlDatabase* pdbcon)	;

			protected:
			private:
			};
		}}}
#endif