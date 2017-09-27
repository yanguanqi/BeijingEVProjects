#ifndef EARTHVIEW_WORLD_SPATIAL_CARTO_REFERENCEGRID_H
#define EARTHVIEW_WORLD_SPATIAL_CARTO_REFERENCEGRID_H

#include "spatial2dcarto/squaregrid.h"
#include "spatial2dcarto/cartoconfig.h"
#include "symbol/textsymbol.h"
#include "symbol/linesymbol.h"
#include "symbol/fillsymbol.h"
#include "spatialinterface/ispatialtransformer.h"
#include "spatialobject/geometry/rectanglering.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Carto
			{
				/// <summary>
				/// 方格网类
				/// </summary>
				class EV_SPATIAL2DCARTO_DLL CReferenceGrid : public CSquareGrid
				{
				public:

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CReferenceGrid();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CReferenceGrid();

				public:
					/// <summary>
					/// 获取方格网类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>方格网类型</returns>
					virtual EarthView::World::Spatial::Carto::EVSquareGridType getType() const;

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
					///获取元素边框范围
					/// </summary>
					/// <param name="symbol"></param>
					/// <returns>元素边框范围</returns>
					virtual EarthView::World::Spatial::Geometry::IEnvelope* getEnvelope() const;

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
					/// 获取选项卡颜色
					/// </summary>
					/// <param name=""></param>
					/// <returns>选项卡颜色</returns>
					EarthView::World::Spatial::Display::IColor* getOptionColor() const;

					/// <summary>
					/// 设置选项卡颜色
					/// </summary>
					/// <param name="pColor">选项卡颜色</param>
					/// <returns></returns>
					ev_void setOptionColor(const EarthView::World::Spatial::Display::IColor* pColor);

					/// <summary>
					/// 设置横向间隔
					/// </summary>
					/// <param name="horizontalGap">横向间隔</param>
					/// <returns></returns>
					virtual ev_void setRowCount(const ev_int32 nRowCount);

					/// <summary>
					/// 获取横向间隔
					/// </summary>
					/// <param name=""></param>
					/// <returns>横向间隔</returns>
					virtual ev_int32 getRowCount() const;

					/// <summary>
					/// 设置纵向间隔
					/// </summary>
					/// <param name="verticalGap">纵向间隔</param>
					/// <returns></returns>
					virtual ev_void setColumnCount(const ev_int32 nColumnCount);

					/// <summary>
					/// 获取纵向间隔
					/// </summary>
					/// <param name=""></param>
					/// <returns>纵向间隔</returns>
					virtual ev_int32 getColumnCount() const;

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
					/// <param name="bDraw">是否绘制网格</param>
					/// <returns></returns>
					virtual ev_void setDrawGridline(ev_bool bDraw);
					
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
					/// 创建比例尺的克隆体
					/// </summary>
					/// <param name=""></param>
					/// <returns>比例尺的克隆体</returns>
					virtual EarthView::World::Spatial::Carto::IElement * clone() const;
					
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
					virtual ev_void fromStream( _in EarthView::World::Core::CDataStream& stream );	
				 private:
					ev_void init();
					ev_void calculateEnvelope();
					ev_void calculateGap();
					ev_void correctEnvelope(EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope);
				ev_private:
					CReferenceGrid(EarthView::World::Core::CNameValuePairList *pList );
				private:
					CReferenceGrid(CReferenceGrid& obj);
				private:
					ev_int32 m_nRowCount;
					ev_int32 m_nColumnCount;
					EarthView::World::Spatial::Display::IColor* m_pOptionBackColor;
					EarthView::World::Spatial::Geometry::IEnvelope* m_pEnvelope;
					ev_bool m_bIsSelected;
					ev_real64 m_dOptiongWidth;
					ev_real64 m_dEnvWidth;
					ev_real64 m_dEnvHeight;
				};
			}
		}
	}
}
#endif