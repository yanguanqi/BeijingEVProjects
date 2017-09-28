#ifndef EARTHVIEW_WORLD_SPATIAL3D_LOCALDEMDATASET_H
#define EARTHVIEW_WORLD_SPATIAL3D_LOCALDEMDATASET_H

#include "core/memoryallocatedobject.h"
#include "core/datastream.h"
#include "spatial3dengine/spatial3denginecomdef.h"
#include "spatialinterface/idataset.h"
#include "core/name_value_pair.h"
#include "spatialserverclient/evdatasets.h"
#include "cachemanager/demtable.h"

 
using namespace EarthView::World::Spatial;

namespace EarthView{
	namespace World{
		namespace Spatial3D{

				class EV_Spatial3DEngine_DLL CDemCacheReader : public EarthView::World::Core::CAllocatedObject
				{
				public:
					~CDemCacheReader();
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

					EarthView::World::Core::MemoryDataStreamPtr readTile(
						const EVString& datasetname,
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

					EarthView::World::Core::MemoryDataStreamPtr readTile(
						const EVString& datasetname,
						const ev_int32 levelCount,
						const vector<ev_int32>& rows,
						const vector<ev_int32>& cols,
						const ev_int32 tileType,
						_out ev_int32& row,
						_out ev_int32& col,
						_out ev_int32& level);

					static CDemCacheReader *getSinglePtr();
				protected:
ev_private:
					CDemCacheReader(_in EarthView::World::Core::CNameValuePairList* pList);

				private:
					CDemCacheReader();
					static CDemCacheReader *mpInstance;
					EarthView::World::Spatial::DEMTable*  mpCacheTable;

				};
				class EV_Spatial3DEngine_DLL CLocalDemDataset : public EarthView::World::Spatial::CEVDEMDataset
				{
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CLocalDemDataset();

					/// <summary>
					/// 获取DEM数据
					/// </summary>
					/// <param name="level">级别</param>
					/// <param name="row">行</param>
					/// <param name="col">列</param>
					/// <param name="serverresult">查询结果</param>
					/// <returns>ok返回0，其他值均为错误</returns>
					virtual ev_int32 getDEMFile(_in ev_int32 level,_in ev_int32 row,_in ev_int32 col,_out EarthView::World::Spatial::CMemoryStreamResult& serverresult);

					/// <summary>
					/// 获取元数据信息
					/// </summary>
					/// <returns>元数据对象指针</returns>
					virtual const EarthView::World::Spatial::CEVDEMLayerInfo* getLayerInfoRef() const;
					/// <summary>
					/// 更新时间
					/// </summary>
					/// <returns>结果</returns>
					virtual EVString getUpdateTime() const;
ev_private:
					CLocalDemDataset(_in EarthView::World::Core::CNameValuePairList* pList);
				protected:
					CLocalDemDataset(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type,_in EarthView::World::Spatial::GeoDataset::IDataSource* ref_source,_in const EVString& name);
					void getBlockRC(ev_bool is84,ev_int32& level,ev_int32& minrow,ev_int32 &maxrow,ev_int32& mincol,ev_int32& maxcol);
					ev_bool readDBTile(ev_bool isWgs84,ev_int32 level,ev_int32 row,ev_int32 col,_out EarthView::World::Spatial::CMemoryStreamResult& serverresult);
					EVString getDBPathbyBlock(ev_bool isWgs84,ev_int32 level,ev_int32 row,ev_int32 col);
					EVString mDataFolder;
					friend class CLocalDemDataSource;


				};
			
		}
	}
}
#endif
