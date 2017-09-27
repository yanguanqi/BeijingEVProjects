#ifndef EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_SMART3DDATASET 
#define EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_SMART3DDATASET

#include "spatial3dengine/iobqdataset.h"

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace ModelManager{

				class EV_Spatial3DEngine_DLL CSmart3DDataset : public IObqDataset
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CSmart3DDataset(_in EarthView::World::Core::CNameValuePairList *pList);

				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <returns></returns>
					CSmart3DDataset();

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="">数据集的名字</param>
					/// <returns></returns>
					CSmart3DDataset(const EVString& name, EarthView::World::Spatial::GeoDataset::IDataSource* ref_DataSource);

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CSmart3DDataset();

					/// <summary>
					/// 获取数据集类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集类型</returns>
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const;

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
					virtual ev_int32 readTileData(const EVString& filename
												, const EVString& tileName
												, ev_uint32 lodID
												, _out EarthView::World::Spatial::MeshStream& meshStream
												, _out LodIndexVector& childIndexVec);


					virtual ev_int32 readTileMeshData(const EVString& filename
													, const EVString& tileName
													, _out EarthView::World::Core::MemoryDataStreamPtr& meshStream);

					/// <summary>
					/// 读取DEM信息
					/// </summary>
					/// <param name="level">级别</param>
					/// <param name="row">行号</param>
					/// <param name="col">列号</param>
					/// <param name="bilStream">bil流</param>
					/// <returns>失败返回-1</returns>
					virtual ev_int32 readDem(ev_uint32 level
											, ev_uint32 row
											, ev_uint32 col
											, _out EarthView::World::Core::MemoryDataStreamPtr& bilStream);

					//读dem数据信息
					virtual ev_bool readDemMetaDataInfo(_out OBQDemMetaInfo& info);
				};
			}
		}
	}
}
#endif
