#ifndef EV_IMAGE_TILE_TABLE___H
#define 	EV_IMAGE_TILE_TABLE___H
#include "core/datastream.h"
#include"mathengine/ev_math.h"
#include "cachemanager/cachetable.h"
namespace EarthView{
	namespace World{
		namespace Spatial{

			// <summary>
			// 创建、读写、维护Image_Table表格
			// </summary>
			class EV_CACHEMANAGER_DLL ImageTileTable : public CacheTable
			{
			public:
				ImageTileTable();

				~ImageTileTable();

				/// <summary>
				/// 在给定的数据库连接对象中初始化表格
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>		
				virtual ev_bool initTable(EarthView::World::Core::Database::CSqlDatabase* pdbcon);

				/// <summary>
				/// 
				/// </summary>
				/// <param name="type">JPG = 0;EVG = 1;</param>
				/// <returns></returns>		
				EarthView::World::Core::MemoryDataStreamPtr readTile(EarthView::World::Core::Database::CSqlDatabase* pdbcon, 
					_in const ev_int32 tilelevel, 
					_in const ev_int32 row, 
					_in const ev_int32 col, 
					_out ev_int32& type);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool readTile(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
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
				EarthView::World::Core::MemoryDataStreamPtr readTileByType(EarthView::World::Core::Database::CSqlDatabase* pdbcon, 
					_in const ev_int32 tilelevel, 
					_in const ev_int32 row, 
					_in const ev_int32 col, 
					_in const ev_int32& type);


				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>		
				ev_bool readTileInfo(_in EarthView::World::Core::Database::CSqlDatabase* pdbcon, 
					_in const ev_int32 tilelevel,
					_in const ev_int32 row,
					_in const ev_int32 col,
					_out ev_bool& isLastest,
					_out EarthView::World::Core::CCoreTime& updateTime,
					_out EarthView::World::Core::CCoreTime& dateTime,
					_out EarthView::World::Core::MemoryDataStreamPtr& property);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>		
				ev_bool write(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
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
				ev_bool update(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
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
				///  清除缓存数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool clearCache(EarthView::World::Core::Database::CSqlDatabase* pdbcon);
			protected:
			private:
			};
		}}}
#endif