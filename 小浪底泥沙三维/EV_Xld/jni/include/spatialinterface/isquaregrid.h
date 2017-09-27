#ifndef EARTHVIEW_WORLD_SPATIAL_CARTO_ISQUAREGRID_H
#define EARTHVIEW_WORLD_SPATIAL_CARTO_ISQUAREGRID_H

#include "spatialinterface/ielement.h"
#include "spatialinterface/ispatialdisplay.h"
#include "spatialinterface/isymbol.h"
#include "spatialinterface/imapframe.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Carto
			{

				enum EVSquareGridType
				{
					SGT_Graticales			= 0, //经纬网
					SGT_KilometerGrid		= 1, //方里格网
					SGT_ReferenceGrid		= 2, //参考格网
					
				};

				/// <summary>
				/// 方格网类
				/// </summary>
				class EV_INTERFACE_DLL ISquareGrid : public IElement
				{
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~ISquareGrid();

				public:

					/// <summary>
					/// 获取元素类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>元素类型</returns>
					virtual EVElementType getElementType() const;

					/// <summary>
					/// 获取元素名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>元素名称</returns>
					virtual EVString getName() const;

					/// <summary>
					///设置元素名称
					/// </summary>
					/// <param name="name">元素名称</param>
					/// <returns></returns>
					virtual ev_void setName(EVString name);

					/// <summary>
					/// 获取方格网类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>方格网类型</returns>
					virtual EVSquareGridType getType() const;

					/// <summary>
					///获取元素边框范围
					/// </summary>
					/// <param name="symbol"></param>
					/// <returns>元素边框范围</returns>
					virtual  EarthView::World::Spatial::Geometry::IEnvelope* getEnvelope() const;

					/// <summary>
					///设置元素边框范围
					/// </summary>
					/// <param name="pEnvelope">元素边框范围</param>
					/// <returns></returns>
					virtual ev_void setEnvelope(EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope);

					/// <summary>
					/// 设置方格网对应的数据框
					/// </summary>
					/// <param name="pMapFrame">方格网对应的数据框</param>
					/// <returns></returns>
					virtual ev_void setMapFrame(const EarthView::World::Spatial::Carto::IMapFrame *pMapFrame);

					/// <summary>
					/// 获取元素是否被选中
					/// </summary>
					/// <param name=""></param>
					/// <returns>是否被选中</returns>
					virtual ev_bool isSelected();

					/// <summary>
					/// 设置元素是否被选中
					/// </summary>
					/// <param name="bSelected">是否被选中</param>
					/// <returns></returns>
					virtual ev_void setSelected(ev_bool bSelected);


					/// <summary>
					/// 获取是否绘制网格
					/// </summary>
					/// <param name=""></param>
					/// <returns>是否绘制网格</returns>
					virtual ev_bool isDrawGridline();

					/// <summary>
					/// 设置是否绘制网格
					/// </summary>
					/// <param name="bSelected">是否绘制网格</param>
					/// <returns></returns>
					virtual ev_void setDrawGridline(ev_bool bSelected);

					/// <summary>
					/// 获取是否处于激活状态
					/// </summary>
					/// <param name=""></param>
					/// <returns>是否处于激活状态</returns>
					virtual ev_bool isActive() const;

					/// <summary>
					/// 设置是否处于激活状态
					/// </summary>
					/// <param name="bSelected">是否处于激活状态</param>
					/// <returns></returns>
					virtual ev_void setActive(ev_bool bActive);

					/// <summary>
					///获取地图格网风格
					/// </summary>
					/// <param name="symbol"></param>
					/// <returns>地图格网风格</returns>
					virtual  EarthView::World::Spatial::Display::ISymbol* getGridlineSymbol() const;

					/// <summary>
					///设置地图格网风格
					/// </summary>
					/// <param name="symbol">地图格网风格</param>
					/// <returns></returns>
					virtual ev_void setGridlineSymbol(EarthView::World::Spatial::Display::ISymbol* symbol);

					/// <summary>
					///获取文本风格
					/// </summary>
					/// <param name="symbol"></param>
					/// <returns>文本风格</returns>
					virtual  EarthView::World::Spatial::Display::ISymbol* getTextSymbol() const;

					/// <summary>
					///设置文本风格
					/// </summary>
					/// <param name="symbol">文本风格</param>
					/// <returns></returns>
					virtual ev_void setTextSymbol(EarthView::World::Spatial::Display::ISymbol* symbol);

					/// <summary>
					/// 绘制元素准备
					/// </summary>
					/// <param name="pDisplay">指定设备</param>
					/// <returns></returns>
					virtual ev_bool drawPrepare(EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay);

					/// <summary>
					/// 绘制元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void draw();

					/// <summary>
					/// 绘制结束后续处理
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void drawOver();

					/// <summary>
					/// 克隆元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>地图元素</returns>
					virtual EarthView::World::Spatial::Carto::IElement *clone() const;
					/// <summary>
					/// 将地图的配置以流的方式导出
					/// </summary>
					/// <param name="stream">导出的流</param>
					/// <returns></returns>
					virtual ev_void toStream( _out EarthView::World::Core::CDataStream &stream ) const;

					/// <summary>
					/// 将地图的配置以XML的方式导出
					/// </summary>
					/// <param name=""></param>
					/// <returns>xml</returns>
					virtual EVString toXML() const;
					/// <summary>
					/// 从xml元素中恢复指北针的配置
					/// </summary>
					/// <param name="element">xml元素</param>
					/// <returns></returns>
					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// 把比例尺的配置保存到xml元素中
					/// </summary>
					/// <param name=""></param>
					/// <returns>xml元素</returns>
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;
				ev_internal:
					virtual ev_void fromStream(_in EarthView::World::Core::CDataStream& stream);	
				protected:
					ISquareGrid();
				ev_private:
					ISquareGrid(_in EarthView::World::Core::CNameValuePairList *pList);
				private:
					ISquareGrid(ISquareGrid& obj);
					
				};
			}
		}
	}
}
#endif