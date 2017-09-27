#ifndef EARTHVIEW_WORLD_ITILEDATASET_H
#define EARTHVIEW_WORLD_ITILEDATASET_H

#include "tileutilityexports.h"
#include "core/memoryallocatedobject.h"
#include "core/datastream.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			enum EVTileDatasetType
			{
				/// <summary>
				/// 未知类型
				/// </summary>
				EV_TileDatasetType_Unknown,
				/// <summary>
				/// 影像瓦片
				/// </summary>
				EV_TileDatasetType_Image,
				/// <summary>
				/// DEM瓦片
				/// </summary>
				EV_TileDatasetType_DEM,
				/// <summary>
				/// 矢量瓦片
				/// </summary>
				EV_TileDatasetType_Vector
			};

			enum EVTileFormatType
			{
				/// <summary>
				/// 格式未知
				/// </summary>
				EV_TileFormatType_Unknown = 0,
				/// <summary>
				/// JPG格式
				/// </summary>
				EV_TileFormatType_JPG = 1,
				/// <summary>
				/// EVG格式
				/// </summary>
				EV_TileFormatType_EVG = 2,
				/// <summary>
				/// BMP的7z压缩格式
				/// </summary>
				EV_TileFormatType_BMP_7Z = 100,
				/// <summary>
				/// 矢量格式
				/// </summary>
				EV_TileFormatType_EVV = 101,
				/// <summary>
				/// 矢量的7z压缩格式
				/// </summary>
				EV_TileFormatType_EVV_7Z = 102,
				/// <summary>
				/// PNG格式
				/// </summary>
				EV_TileFormatType_PNG = 121,
				/// <summary>
				/// 矢量瓦片格式
				/// </summary>
				EV_TileFormatType_EVP = 151,
				/// <summary>
				/// 矢量瓦片的7z压缩格式
				/// </summary>
				EV_TileFormatType_EVP_7Z = 152,
				/// <summary>
				/// BIL格式
				/// </summary>
				EV_TileFormatType_BIL = 201,
				/// <summary>
				/// BIL的7z压缩格式
				/// </summary>
				EV_TileFormatType_BIL_7Z = 202
			};
			enum EVTileRasterDataType
			{
				/// <summary>
				/// 类型未知
				/// </summary>
				EV_TileDataType_Unknown			= 0,
				/// <summary>
				/// 多波段影像
				/// </summary>
				EV_TileDataType_Image_Multi		= 1,
				/// <summary>
				/// 单波段影像
				/// </summary>
				EV_TileDataType_Image_Single		= 2,
				/// <summary>
				/// 整型DEM
				/// </summary>
				EV_TileDataType_DEM_int32			= 11,
				/// <summary>
				/// 浮点型DEM
				/// </summary>
				EV_TileDataType_DEM_Float			= 12,
				/// <summary>
				/// 整型8位DEM
				/// </summary>
				EV_TileDataType_DEM_int8			= 13,
				/// <summary>
				/// 整型16位DEM
				/// </summary>
				EV_TileDataType_DEM_int16			= 14,
				/// <summary>
				/// 整型16位DEM
				/// </summary>
				EV_TileDataType_DEM_uint32			= 15,
				/// <summary>
				/// 整型16位DEM
				/// </summary>
				EV_TileDataType_DEM_uint16			= 16,
			};

			class ITileMetaInfo;

			class EV_TILEUTILITY_DLL ITileDataset: public EarthView::World::Core::CAllocatedObject
			{
			public:
				virtual ~ITileDataset();

				/// <summary>
				/// 获取数据集类型
				/// </summary>
				/// <param name=""></param>
				/// <returns>数据集类型</returns>
				virtual EarthView::World::Spatial::EVTileDatasetType getType() const;
				/// <summary>
				/// 获取数据集名称
				/// </summary>
				/// <param name=""></param>
				/// <returns>数据集名称</returns>
				virtual EVString getName() const;
				/// <summary>
				/// 获取数据集版本号，该方法是确认数据变更情况。
				/// </summary>
				/// <param name=""></param>
				/// <returns>数据集版本号</returns>
				virtual ev_uint64 getDataVersion() const;
				/// <summary>
				/// 获取数据集描述
				/// </summary>
				/// <param name=""></param>
				/// <returns>数据集描述</returns>
				virtual EVString getDescription() const;
				/// <summary>
				/// 获取数据集更新时间
				/// </summary>
				/// <param name=""></param>
				/// <returns>数据集更新时间</returns>
				virtual EVString getUpdateTime() const;
				/// <summary>
				/// 获取瓦片数据集的元数据信息
				/// </summary>
				/// <param name=""></param>
				/// <returns>元数据信息</returns>
				virtual const ITileMetaInfo* getMetaInfo() const;
				/// <summary>
				/// 获取指定级别行列号的瓦片数据流
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual EarthView::World::Core::MemoryDataStreamPtr getTileStream(ev_int32 level, 
					ev_int32 row, ev_int32 col, EVTileFormatType& format);
				
            ev_private:
				ITileDataset(EarthView::World::Core::CNameValuePairList *pList);
			protected:
				ITileDataset();
			private:
				ITileDataset(const ITileDataset&);
				ITileDataset& operator= (const ITileDataset&);
			};
		}
	}
}

#endif