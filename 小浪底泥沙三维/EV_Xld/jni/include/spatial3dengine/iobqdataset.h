#ifndef EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_IOBQDATASET_H
#define EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_IOBQDATASET_H

#include "core/memoryallocatedobject.h"
#include "core/datastream.h"
#include "spatial3dengine/spatial3denginecomdef.h"
#include "spatialinterface/idataset.h"
#include "tileutility/meshstream.h"
#include "spatial3dengine/obliquedbutility.h"
#include "spatial3dengine/obliquexmlparser.h"

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace ModelManager{
				class CObliqueDBUtility;
				class CLocal7zReader;
				/// <summary>
				/// 数据源类
				/// </summary>
				class EarthView::World::Spatial::GeoDataset::IFileDataSource;


				/// <summary>
				/// 倾斜摄影数据集基类
				/// </summary>
				class EV_Spatial3DEngine_DLL IObqDataset : public EarthView::World::Spatial::GeoDataset::IDataset
				{
				public:
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~IObqDataset();
				public:
					/// <summary>
					/// 获取数据集类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集类型</returns>
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const;

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
					/// 获取数据集所在数据源对象，该值为引用对象指针。
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集所在数据源对象指针</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const;

					/************************其它基本信息********************/
					EVString getGUID(){return mGUID;}

					EVString getSrcFolder(){return mSrcFolder;}

					EVString getOBQFile(){return mOBQFile;}

					EVString getBILFolder(){return mBILFolder;}

					EVString getDataFolder(){return mDataFolder;}

					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* getDBUtlility(){return mpDBUtility;}

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


					//读元数据信息
					virtual ev_bool readMetaDataInfo(_out OBQMetaInfo& info);

					/// <summary>
					/// 更新元数据高度信息
					/// <param name="altitude">高度</param>
					/// <returns>ev_bool，返回true，更新成功，返回false，更新失败</returns>
					virtual ev_bool updateMetaDataInfo(ev_real64 altitude);
					virtual ev_bool updateMetaDataInfo(const OBQMetaInfo& info);

ev_private:
					IObqDataset( EarthView::World::Core::CNameValuePairList *pList );

				protected:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					IObqDataset();

				private:
					/// <summary>
					/// 拷贝构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					IObqDataset(IObqDataset & dataset);

				protected:
					EVString mDatasetName;
					EVString mGUID;
					EVString mSrcFolder;
					EVString mOBQFile;
					EVString mDataFolder;
					EVString mBILFolder;

					EarthView::World::Spatial::GeoDataset::IFileDataSource* mpDataSource;	
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* mpDBUtility;	
					CLocal7zReader* mpDataReader;
				};
			}
		}
	}
}

#endif
