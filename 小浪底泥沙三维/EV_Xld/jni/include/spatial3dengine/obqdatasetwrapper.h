#ifndef EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_OBQDATASETWRAPPER_H
#define EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_OBQDATASETWRAPPER_H

#include "spatial3dengine/spatial3dengineconfig.h"
#include "core/memoryallocatedobject.h"
#include "spatial3dengine/obliquedbutility.h"
#include "tileutility/meshstream.h"
#include "spatial3dengine/obqbildef.h"
namespace EarthView{
	namespace World{
		namespace Spatial
		{
			namespace GeoDataset
			{
				class IDataset;
			}
		}
		namespace Spatial3D{
			namespace ModelManager{
				//class IObqDataset;

				/// <summary>
				/// 倾斜摄影数据集基类
				/// </summary>
				class EV_Spatial3DEngine_DLL CObqDatasetWrapper : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					CObqDatasetWrapper( EarthView::World::Core::CNameValuePairList *pList );
				public:

					CObqDatasetWrapper(EarthView::World::Spatial::GeoDataset::IDataset* ref_ds);

					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CObqDatasetWrapper();
				public:
					EarthView::World::Spatial::GeoDataset::IDataset* getDataset(){return mpDataset;}

					/// <summary>
					/// 获取数据集名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集名称</returns>
					EVString getName() const;

					/// <summary>
					/// 获取数据集类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集类型</returns>
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const;

					/// <summary>
					/// 获取GUID
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EVString getGUID();

					/// <summary>
					/// 初始化BILcache
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void initBILCache(ev_int32 pointNumberPerSide);

					/************************需要重写数据流读写接口********************/

					/// <summary>
					/// 读取初始化信息
					/// </summary>
					/// <param name="initData">初始化信息</param>
					/// <returns>成功0，失败非0</returns>
					virtual ev_int32 readInitData(_out OBQInitData& initData);

					/// <summary>
					/// 读取瓦块流信息
					/// </summary>
					/// <param name="filename">文件名</param>
					/// <param name="tileName">瓦块名</param>
					/// <param name="lodID">当前请求的文件瓦块的LODID</param>
					/// <param name="meshStream">传出，请求数据流资源</param>
					/// <param name="childIndexVec">传出，请求数据子瓦块索引，（注意：传出的childIndexVec指针需要释放内存）</param>
					/// <returns>失败返回-1</returns>
					ev_int32 readTileData(const EVString& filename
											, const EVString& tileName
											, ev_uint32 lodID
											, _out EarthView::World::Spatial::MeshStream& meshStream
											, _out LodIndexVector& childIndexVec
											);

					ev_int32 readTileMeshData(const EVString& filename
											, const EVString& tileName
											, _out EarthView::World::Core::MemoryDataStreamPtr& meshStream
											);


					/// <summary>
					/// 读取DEM信息
					/// </summary>
					/// <param name="level">级别</param>
					/// <param name="row">行号</param>
					/// <param name="col">列号</param>
					/// <param name="bisStream">bil流</param>
					/// <returns>失败返回-1</returns>
					ev_int32 readDem(ev_uint32 level
											, ev_uint32 row
											, ev_uint32 col
											, _out EarthView::World::Core::MemoryDataStreamPtr& bilStream);

					//读元数据信息
					ev_bool readMetaDataInfo(_out OBQMetaInfo& info);

					//读dem数据信息
					ev_bool readDemMetaDataInfo(_out OBQDemMetaInfo& info);

					/// <summary>
					/// 更新元数据高度信息
					/// <param name="altitude">高度</param>
					/// <returns>ev_bool，返回true，更新成功，返回false，更新失败</returns>
					ev_bool updateMetaDataInfo(ev_real64 altitude);
					ev_bool updateMetaDataInfo(const OBQMetaInfo& info);

					/// <summary>
					/// 根据行列值获取高度信息
					/// <returns>高度信息</returns>
					ev_real32 getHeightFromBIL(ev_uint32 level
												, ev_real32 x
												, ev_real32 z);

				protected:
					ev_bool readBIL(ev_int32 level
									,ev_real32 x 
									,ev_real32 z
									,_out BILStruct& bilStruct);

					void refreshMetaInfoStream();
				protected:
					OBQDemMetaInfo mCache_DemMetaInfo;
					OBQMetaInfo mCache_MetaInfo;
					EarthView::World::Core::IntPairVector mCache_mapLevel;
					ev_bool mCacheMetaInfoDirty;
					ev_bool mCacheDemMetaInfoDirty;
					ev_bool mbHasSharedTexture;
					EarthView::World::Spatial::GeoDataset::IDataset* mpDataset;
					CBILCache* mpBilMemoryCache;

					EVString mShareCacheName;

				};
			}
		}
	}
}

#endif
