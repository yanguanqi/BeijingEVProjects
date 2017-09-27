#ifndef EARTHVIEW_WORLD_SPATIAL3D_DATAEXCHANGE_DATASOURCEHELPER_H_ 
#define EARTHVIEW_WORLD_SPATIAL3D_DATAEXCHANGE_DATASOURCEHELPER_H_

#include "spatial3ddataexchange/spatial3ddataexchange_config.h"
#include "datasourceurl.h"

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Dataset{
				class CModelDataSource;
				class CEntityDataset;
				class CMeshTemplateDataset;
			}
		}
	}
}
namespace EarthView{namespace World{namespace Spatial3D{namespace DataExchange
{
	/// <summary>
	/// 辅助类，提供一些对模型数据源、数据集的操作
	/// </summary>
	class EV_Spatial3DDataExchange_DLL CDatasourceHelper: public EarthView::World::Core::CAllocatedObject
	{
ev_private:
		CDatasourceHelper(EarthView::World::Core::CNameValuePairList* pList);
	public:
		/// <summary>
		/// 构造函数
		/// </summary>
		/// <returns></returns>
		CDatasourceHelper();
		/// <summary>
		/// 析构函数
		/// </summary>
		/// <returns></returns>
		~CDatasourceHelper();
		/// <summary>
		/// 打开一个数据源
		/// </summary>
		/// <param name="datasourceURL">数据源的链接属性描述</param>
		/// <returns>成功返回true，否则返回false</returns>
		ev_bool openDatasource(const EarthView::World::Spatial3D::DataExchange::CDataSourceUrl& datasourceURL);
		/// <summary>
		/// 创建一个数据源
		/// </summary>
		/// <param name="datasourceURL">数据源的链接属性描述</param>
		/// <returns>成功返回true，否则返回false</returns>
		ev_bool createDatasource(const EarthView::World::Spatial3D::DataExchange::CDataSourceUrl& datasourceURL);
		/// <summary>
		/// 获取一个数据源
		/// </summary>
		/// <returns>返回数据源</returns>
		EarthView::World::Spatial3D::Dataset::CModelDataSource* getDatasource()const;
		/// <summary>
		/// 指定一个数据源
		/// </summary>
		/// <param name="pSource">数据源</param>
		/// <returns></returns>
		ev_void setDatasource(EarthView::World::Spatial3D::Dataset::CModelDataSource* ref_pSource);
		/// <summary>
		/// 根据数据集名字打开一个存在的数据集
		/// </summary>
		/// <param name="name">数据集名称</param>
		/// <returns>成功返回true，否则返回false</returns>
		ev_bool openDatasetByName(const EVString name);
		/// <summary>
		/// 清空数据源和数据集
		/// </summary>
		/// <returns>成功返回true，否则返回false</returns>
		ev_bool deleteData();
		/// <summary>
		/// 实现入库之前清空 导入目标里面的数据
		/// </summary>
		/// <returns>成功返回true，否则返回false</returns>
		ev_bool clearDataset();
		/// <summary>
		/// 实现入库之前清空 导入目标里面的数据
		/// </summary>
		/// <returns>成功返回true，否则返回false</returns>
		ev_bool clearModelDatabase();
		/// <summary>
		/// 验证模型库是否已经存在该模型
		/// </summary>
		/// <param name="meshName">模型名字</param>
		/// <returns>存在返回true，否则返回false</returns>
		ev_bool isExistModelDatabase(EVString meshName);
		/// <summary>
		/// 验证数据集是否已经存在该模型
		/// </summary>
		/// <param name="meshName">模型名字</param>
		/// <returns>存在返回true，否则返回false</returns>
		ev_bool isExistModelInDataset(EVString meshName);
		/// <summary>
		/// 打开模型库
		/// </summary>
		/// <returns>成功返回true，否则返回false</returns>
		ev_bool openModelDatabase();
		/// <summary>
		/// 获取实体数据集
		/// </summary>
		/// <returns>返回数据集</returns>
		EarthView::World::Spatial3D::Dataset::CEntityDataset* getDataset()const;
		/// <summary>
		/// 获取模型库数据集
		/// </summary>
		/// <returns>返回模型库</returns>
		EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* getModelDatabase()const; 
		/// <summary>
		/// 关闭数据集
		/// </summary>
		/// <returns>成功返回true，否则返回false</returns>
		ev_bool closeDateset();
	private:
		/// <summary>
		/// 解析数据库的配置字符串 sqlite
		/// </summary>
		/// <param name="connectParameter">连接参数</param>
		/// <param name="path">数据源的路径</param>
		/// <param name="dbname">数据库名字</param>
		/// <param name="username">用户名</param>
		/// <param name="passworld">密码</param>
		/// <param name="sourcename">数据源假名</param>
		/// <returns>成功返回true，否则返回false</returns>
		ev_bool parseConnectParameter_sqlite(const EVString& connectParameter, 
			EVString& path, 
			EVString& dbname, 
			EVString& username, 
			EVString& passworld, 
			EVString& sourcename);
		/// <summary>
		/// 解析数据库的配置字符串 sqlserver
		/// </summary>
		/// <param name="connectParameter">连接参数</param>
		/// <param name="ip">ip地址</param>
		/// <param name="port">端口号</param>
		/// <param name="username">用户名</param>
		/// <param name="passworld">密码</param>
		/// <param name="sourcename">数据源假名</param>
		/// <returns>成功返回true，否则返回false</returns>
		ev_bool parseConnectParameter_sqlserver(const EVString& connectParameter, 
			EVString& ip, 
			EVString& port, 
			EVString& username, 
			EVString& passworld, 
			EVString& sourcename);
		/// <summary>
		/// 解析数据库的配置字符串 oracle
		/// </summary>
		/// <param name="connectParameter">连接参数</param>
		/// <param name="ip">ip地址</param>
		/// <param name="port">端口号</param>
		/// <param name="username">用户名</param>
		/// <param name="passworld">密码</param>
		/// <param name="sourcename">数据源假名</param>
		/// <returns>成功返回true，否则返回false</returns>
		ev_bool parseConnectParameter_oracle(const EVString& connectParameter, 
			EVString& ip, 
			EVString& port, 
			EVString& username, 
			EVString& passworld, 
			EVString& sourcename);

	private:
		EarthView::World::Spatial3D::Dataset::CModelDataSource*        mpDatasource;
		EarthView::World::Spatial3D::Dataset::CEntityDataset*	           	mpEntityDataSet;                     //数据集对象
		EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*        mpMeshTemplateDataset;                //导数据库时用的
	};
}}}}

#endif
