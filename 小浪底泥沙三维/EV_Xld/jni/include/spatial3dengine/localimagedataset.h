#ifndef EARTHVIEW_WORLD_SPATIAL3D_LOCALIMAGEDATASET_H
#define EARTHVIEW_WORLD_SPATIAL3D_LOCALIMAGEDATASET_H

#include "core/memoryallocatedobject.h"
#include "core/datastream.h"
#include "spatial3dengine/spatial3denginecomdef.h"
#include "spatialinterface/idataset.h"
#include "core/name_value_pair.h"
#include "spatialserverclient/evdatasets.h"
#include "tileutility/tilepathenums.h"





namespace EarthView{
	namespace World{
		namespace Spatial3D{

				class EV_Spatial3DEngine_DLL CImageCacheReader : public EarthView::World::Core::CAllocatedObject
				{

				public:
					~CImageCacheReader();
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
					EarthView::World::Core::MemoryDataStreamPtr readTile(EarthView::World::Spatial::EVTileModeType tilemode,_in const EVString& layerPath,
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
						_in const EVString& layerPath,
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
						const EVString& layerPath,
						const ev_int32 tilelevel,
						const ev_int32 row,
						const ev_int32 col,
						_out ev_bool& isLastest,
						_out EarthView::World::Core::CCoreTime& updateTime,
						_out EarthView::World::Core::CCoreTime& dateTime,
						_out EarthView::World::Core::MemoryDataStreamPtr& property);

					static CImageCacheReader *getSinglePtr();

				protected:

ev_private:
					CImageCacheReader(_in EarthView::World::Core::CNameValuePairList* pList);


				private:
					CImageCacheReader();
					static CImageCacheReader *mpInstance;
	
				};

				class EV_Spatial3DEngine_DLL CLocalImageDataset : public EarthView::World::Spatial::CEVWMTSDataset
				{
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CLocalImageDataset();

					/// <summary>
					/// 获取瓦片
					/// </summary>
					/// <param name="style">渲染风格</param>
					/// <param name="format">瓦片格式</param>
					/// <param name="level">级别</param>
					/// <param name="row">行</param>
					/// <param name="col">列</param>
					/// <param name="getoriginformat">true表示获取对应瓦片的原始格式信息</param>
					/// <param name="gettime">true表示获取对应瓦片的时间信息</param>
					/// <param name="tileInfo">查询结果</param>
					/// <returns>ok返回0，其他值均为错误</returns>
					virtual ev_int32 getTile(_in const EVString& style,_in const EVString& format,_in ev_int32 level,_in ev_uint32 row ,_in ev_uint32 col,
						_in ev_bool getoriginformat,_in ev_bool gettime,_out EarthView::World::Spatial::CEVTileInfo& tileInfo);

					/// <summary>
					/// 获取瓦片属性
					/// </summary>
					/// <param name="level">级别</param>
					/// <param name="row">行</param>
					/// <param name="col">列</param>
					/// <param name="fieldname">字段名</param>
					/// <param name="serverresult">查询结果</param>
					/// <returns>ok返回0，其他值均为错误</returns>
					virtual ev_int32 getTileProperty(_in ev_int32 level,_in ev_uint32 row ,_in ev_uint32 col,
						_in const EVString& fieldname,_out EarthView::World::Spatial::CMemoryStreamResult& serverresult);

					/// <summary>
					/// 查询某瓦片某像素点的几何要素的信息
					/// </summary>
					/// <param name="level">级别</param>
					/// <param name="tilerow">行</param>
					/// <param name="tilecol">列</param>
					/// <param name="x">查询像素点x</param>
					/// <param name="y">查询像素点y</param>
					/// <param name="infoformat">返回数据格式</param>
					/// <param name="serverresult">查询结果</param>
					/// <returns>ok返回0，其他值均为错误</returns>
					virtual ev_int32 getFeatureInfo(_in ev_int32 level,_in ev_uint32 tilerow,_in ev_uint32 tilecol,
						_in ev_int32 x,_in ev_int32 y,_in const EVString& infoformat,_out EarthView::World::Spatial::CMemoryStreamResult& serverresult);

					/// <summary>
					/// 获取OGC元数据对象
					/// </summary>
					/// <returns>OGC格式的源数据对象指针</returns>
					virtual const EarthView::World::Spatial::CWMTSServerInfo* getOGCWMTSCapabilitiesRef();

					/// <summary>
					/// 获取xml格式的EarthView元数据
					/// </summary>
					/// <param name="value">查询结果</param>
					/// <returns>ok返回0，其他值均为错误</returns>
					virtual ev_int32 getEVWMTSCapabilities(_inout EVString& value);

					/// <summary>
					/// 获取EarthView元数据对象
					/// </summary>
					/// <returns>元数据对象指针</returns>
					virtual const EarthView::World::Spatial::CEVWMTSLayerInfo* getLayerInfoRef()const;

					/// <summary>
					/// 获取更新时间
					/// </summary>
					/// <returns>更新时间</returns>
					virtual EVString getUpdateTime() const;

					/// <summary>
					/// 获取缓存数据类型
					/// </summary>
					/// <returns>vector/image/dem</returns>
					virtual EarthView::World::Spatial::EVSSCCacheDataType getCacheDataType();
ev_private:
					CLocalImageDataset(_in EarthView::World::Core::CNameValuePairList* pList);
				protected:
					CLocalImageDataset(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type,_in EarthView::World::Spatial::GeoDataset::IDataSource* ref_source,_in const EVString& name);
					void getBlockRC(ev_bool is84,ev_int32& level,ev_int32& minrow,ev_int32 &maxrow,ev_int32& mincol,ev_int32& maxcol);
					ev_bool readDBTile(ev_bool isWgs84,ev_int32 level,ev_int32 row,ev_int32 col,EarthView::World::Spatial::CEVTileInfo& tileInfo);
					EVString getDBPathbyBlock(ev_bool isWgs84,ev_int32 level,ev_int32 row,ev_int32 col);
					EVString mDataFolder;
					friend class CLocalImageDataSource;


				};
			
		}
	}
}
#endif
