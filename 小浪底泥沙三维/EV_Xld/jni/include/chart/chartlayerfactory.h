#ifndef EARTHVIEW_WORLD_CHART_CCHARTLAYERFACTORY_H
#define EARTHVIEW_WORLD_CHART_CCHARTLAYERFACTORY_H
#include "chartlayerexports.h"
#include "spatialinterface/ilayer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Atlas
			{
				/// <summary>
				/// 海图图层类工厂
				/// </summary>
				class EVCHART_DLL CChartLayerFactory
					:public EarthView::World::Spatial::Atlas::ILayerFactory
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <returns></returns>
					CChartLayerFactory();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CChartLayerFactory();
				ev_private:
					CChartLayerFactory(_in EarthView::World::Core::CNameValuePairList* pList);
                public:
					/// <summary>
					/// 获取工厂类型
					/// </summary>
					/// <returns>海图图层类型：LT_VECTOR_CHARTLAYER</returns>
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType()const;

					/// <summary>
					/// 创建图层实例
					/// </summary>
					/// <returns>图层对象指针，用factory析构</returns>
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance();
					
					/// <summary>
					/// 从xml解析图层实例
					/// </summary>
					/// <param name="strXml">xml格式的图层描述</param>
					/// <returns>图层对象指针，用factory析构</returns>
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(const EVString& strXml);

					/// <summary>
					/// 从EarthView::World::Core::CXmlElement对象解析图层实例
					/// </summary>
					/// <param name="element">图层描述</param>
					/// <returns>图层对象指针，用factory析构</returns>
                    virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(EarthView::World::Core::CXmlElement& element);

					/// <summary>
					/// 析构layer对象
					/// </summary>
					/// <param name="layer">要析构的layer</param>
					/// <returns>成功返回true</returns>
					virtual ev_bool destroyInstance(EarthView::World::Spatial::Atlas::ILayer* layer);
				};
			}
		}
	}
}
#endif


