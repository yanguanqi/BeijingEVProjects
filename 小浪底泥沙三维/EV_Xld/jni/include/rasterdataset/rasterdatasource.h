#ifndef _RASTER_DATASOURCE_H_
#define _RASTER_DATASOURCE_H_

#include "spatialinterface/idatasource.h"
#include "spatialinterface/idatasourcefactory.h"
#include "rasterdatasetenume.h"

namespace EarthView{
    namespace World{
        namespace Spatial{
			namespace GeoDataset{
				class  IDataMetaInfo;
				class  IDataMetaInfos;
				class  IPropertySet;
			}
		}
	}}
///////////////////


namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{ 
			namespace Raster
			{

////namespace
			class EV_RASTER_DLL CRasterDataSource: public EarthView::World::Spatial::GeoDataset::IFileDataSource
			{    
				ev_private:
				    CRasterDataSource(EarthView::World::Core::CNameValuePairList*pList);
			public:
				
				 /// <summary>
				/// 析构函数
				/// </summary>
				~CRasterDataSource();
				 /// <summary>
				/// 获取数据源名称
				/// </summary>
				/// <param name=""></param>
				/// <returns>数据源名称</returns>
				virtual EVString getName() const;
				/// <summary>
				/// 获取数据源类型
				/// </summary>
				/// <param name=""></param>
				/// <returns>数据源类型</returns>
				virtual ev_int32 getType() const;
				/// <summary>
				/// 获取数据源参数
				/// </summary>
				/// <param name=""></param>
				/// <returns>数据源KeyValue参数</returns>
				virtual _extfree EarthView::World::Spatial::GeoDataset::IPropertySet* getPropertySet() const;
				/// <summary>
				/// 判断数据源是否有效
				/// </summary>
				/// <param name=""></param>
				/// <returns>是，返回true;否则，返回false</returns>
				virtual ev_bool isValid() const;
				/// <summary>
				/// 获取指定数据集的数据元信息
				///外部不能释放
				/// </summary>
				/// <param name=""></param>
				/// <returns>数据元信息</returns>
				virtual _extfree EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getDatasetInfo(const EVString &name);
				/// <summary>
				/// 获取指定数据集类型的数据元信息
				/// 外部不能释放
				/// </summary>
				/// <param name=""></param>
				/// <returns>数据元信息集合对象</returns>
				virtual _extfree EarthView::World::Spatial::GeoDataset::IDataMetaInfos* getDatasetInfos(EarthView::World::Spatial::GeoDataset::EVDatasetType type);
				/// <summary>
				/// 打开指定数据集名称的数据集
				///由外部关闭数据集
				/// </summary>
				/// <param name="name">指定名称(包括扩展名 )</param>
				/// <returns>数据集对象指针，如果名字不存在，这返回null</returns>
				virtual EarthView::World::Spatial::GeoDataset::IDataset * openDataset(const EVString& name);
				/// <summary>
				///关闭打开的数据集
				/// </summary>
				/// <param name="dataset">数据集指针</param>
				/// <returns>返回false</returns>
				 ev_bool closeDataset(EarthView::World::Spatial::GeoDataset::IDataset *dataset);
				/// <summary>
				/// 删除指定数据集名称的数据集
				///未实现
				/// </summary>
				/// <param name="name">指定名称</param>
				/// <returns>返回false</returns>
				virtual ev_bool deleteDataset(const EVString& name);
				/// <summary>
				/// 序列化字符串
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual EVString toXML() const;
				/// <summary>
				/// 深度拷贝
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual _extfree EarthView::World::Spatial::GeoDataset::IDataSource* clone() const;
				///<summary>
				///是否包含特定名称的数据集
				///</summary>
				/// <param name="name">数据集名称(包括扩展名)</param>
				/// <returns></returns>
				ev_bool containDataset(const EVString &name);
			protected:
				/// <summary>
				/// 构造函数
				/// </summary>
				 CRasterDataSource(const EVString &srcname);
		   private:
					/// <summary>
					/// 拷贝构造
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CRasterDataSource(CRasterDataSource & datasource);
			private:
				EVString m_SrcName; ///dataSource名字
				vector<EarthView::World::Spatial::GeoDataset::IDataset*> m_DatasetList;
				///友元
				friend class EV_RASTER_DLL CRasterDataSourceFactory;
			};
			/*********************************************************************/
			//class CRasterDataSourceFactory
			/**********************************************************************/
			class EV_RASTER_DLL CRasterDataSourceFactory : public EarthView::World::Spatial::GeoDataset::IDataSourceFactory
			{   
				/// <summary>
				/// 封装构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_private:
				    CRasterDataSourceFactory(EarthView::World::Core::CNameValuePairList*pList);
			public:
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ~CRasterDataSourceFactory();
				/// <summary>
                /// 返回对应的数据源类型
                /// </summary>
                /// <param name=""></param>
                /// <returns>数据源类型</returns>
				virtual ev_int32 getType() const;
				/// <summary>
				/// 从XML创建数据源对象
				/// </summary>
				/// <param name="xml">xml字符串</param>
				/// <returns>数据源对象</returns>
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* createFromXML(const EVString &xml);
				/// <summary>
				/// 打开一个存在的数据源
				/// </summary>
				/// <param name="path">路径</param>
				/// <param name="fileName">文件名称</param>
				/// <returns>数据源对象</returns>
				virtual EarthView::World::Spatial::GeoDataset::IDataSource * openDataSource(const EVString &path,const EVString &fileName);
				/// <summary>
				/// 打开一个存在的数据源
				/// </summary>
				/// <param name="connection">连接字符对</param>
				/// <returns>数据源对象</returns>
				virtual EarthView::World::Spatial::GeoDataset::IDataSource * openDataSource(EarthView::World::Spatial::GeoDataset::IPropertySet * connection);
				/// <summary>
				/// 创建一个数据源
				/// </summary>
				/// <param name="path">路径</param>
				/// <param name="fileName">文件名称</param>
				/// <returns>数据源对象</returns>
				virtual EarthView::World::Spatial::GeoDataset::IDataSource * createDataSource(const EVString &path,const EVString &fileName);
				/// <summary>
				/// 创建一个数据源
				/// </summary>
				/// <param name="connection">连接字符对</param>
				/// <returns>数据源对象</returns>
				virtual  EarthView::World::Spatial::GeoDataset::IDataSource * createDataSource(EarthView::World::Spatial::GeoDataset::IPropertySet * connection);
				/// <summary>
				/// 关闭一个数据源对象
				/// </summary>
				/// <param name="pDataSource">数据源对象</param>
				/// <returns></returns>
				void closeDataSource(EarthView::World::Spatial::GeoDataset::IDataSource *pDataSource);
				/// <summary>
				/// 关闭一个数据源对象
				/// </summary>
				/// <param name="pDataSource">数据源对象</param>
				/// <returns></returns>
				ev_void destroyDataSource(EarthView::World::Spatial::GeoDataset::IDataSource *pDataSource);
				/// <summary>
				/// 获取栅格数据源工厂单件对象
				/// </summary>
				/// <returns>栅格数据源工厂</returns>
				static EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory* getSingletonPtr();
			protected:
				/// <summary>
				/// 构造函数
				/// </summary>
				CRasterDataSourceFactory();
			private:
				CRasterDataSourceFactory(CRasterDataSourceFactory & obj);

				static EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory* m_pSingleton;
			};
////namespace
			}
		}
	}
}
///namesapce
#endif//_RASTER_DATASOURCE_H_
