#ifndef EARTHVIEW_WORLD_CHART_CCHARTDATASOURCEFACTORY_H
#define EARTHVIEW_WORLD_CHART_CCHARTDATASOURCEFACTORY_H
#include "chartexports.h"
#include "spatialinterface/idatasourcefactory.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
				/// <summary>
				/// 海图数据源类
				/// </summary>
				class CChartDataSource;

				/// <summary>
				/// 海图数据源类工厂
				/// </summary>
				class EVCHART_DLL CChartDataSourceFactory:
					public EarthView::World::Spatial::GeoDataset::IDataSourceFactory
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CChartDataSourceFactory();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CChartDataSourceFactory();
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
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* createFromXML(const EVString& xml);
					/// <summary>
					/// 打开一个存在的数据源
					/// </summary>
					/// <param name="path">路径</param>
					/// <param name="fileName">文件名称</param>
					/// <returns>数据源对象</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataSource * openDataSource(_in const EVString& path,_in const EVString& fileName);
					/// <summary>
					/// 打开一个存在的数据源
					/// </summary>
					/// <param name="connection">连接字符对</param>
					/// <returns>数据源对象</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataSource * openDataSource(_in EarthView::World::Spatial::GeoDataset::IPropertySet * connection);
					/// <summary>
					/// 销毁一个数据源对象
					/// </summary>
					/// <param name="pDataSource">数据源对象</param>
					/// <returns></returns>
					virtual ev_void destroyDataSource(_in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource);
				ev_private:
					CChartDataSourceFactory(_in EarthView::World::Core::CNameValuePairList* pList);
				};
			}
		}
	}
}
#endif

