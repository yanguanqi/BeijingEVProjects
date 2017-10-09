#ifndef EARTHVIEW_WORLD_SPATIAL2D_CARTO_LEGEND_H
#define EARTHVIEW_WORLD_SPATIAL2D_CARTO_LEGEND_H

#include "symbol/textsymbol.h"
#include "symbol/linesymbol.h"
#include "symbol/fillsymbol.h"
#include "spatialinterface/imap.h"
#include "spatialinterface/ilayer.h"
#include "spatial2dcarto/cartoconfig.h"
#include "spatialinterface/ilegend.h"
#include "spatialinterface/ilegendItem.h"
#include "spatialinterface/ispatialdisplay.h"
#include "spatial2dcarto/symbolconvertor.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Carto
			{
				/// <summary>
				/// 图例类
				/// </summary>
				class EV_SPATIAL2DCARTO_DLL CLegend:
					public ILegend
				{
				public:

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CLegend();

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CLegend();
				public:

					/// <summary>
					/// 获取元素类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>元素类型</returns>
					virtual EarthView::World::Spatial::Carto::EVElementType getElementType() const;

					/// <summary>
					/// 设置图例背景颜色
					/// </summary>
					/// <param name="symbol">图例背景颜色</param>
					/// <returns></returns>
					virtual ev_void setBackgroundColor(const EarthView::World::Spatial::Display::IColor* pColor);

					/// <summary>
					/// 获取图例背景颜色
					/// </summary>
					/// <param name=""></param>
					/// <returns>图例背景颜色</returns>
					virtual EarthView::World::Spatial::Display::IColor* getBackgroundColor() const;

					/// <summary>
					/// 设置是否图例背景色
					/// </summary>
					/// <param name="bDraw">是否图例背景色</param>
					/// <returns></returns>
					virtual ev_void setDrawBackground(bool bDraw);

					/// <summary>
					/// 获取是否图例背景色
					/// </summary>
					/// <param name=""></param>
					/// <returns>是否图例背景色</returns>
					virtual ev_bool isDrawBackground() const;

					/// <summary>
					/// 设置阴影颜色
					/// </summary>
					/// <param name="symbol">阴影颜色</param>
					/// <returns></returns>
					virtual ev_void setShadowColor(const EarthView::World::Spatial::Display::IColor* pColor);

					/// <summary>
					/// 获取图例阴影颜色
					/// </summary>
					/// <param name=""></param>
					/// <returns>图例阴影颜色</returns>
					virtual EarthView::World::Spatial::Display::IColor* getShadowColor() const;

					/// <summary>
					/// 设置是否绘制图例
					/// </summary>
					/// <param name="bDraw">是否绘制图例</param>
					/// <returns></returns>
					virtual ev_void setDrawShadow(bool bDraw);

					/// <summary>
					/// 获取是否绘制阴影
					/// </summary>
					/// <param name=""></param>
					/// <returns>是否绘制阴影</returns>
					virtual ev_bool isDrawShadow() const;

					/// <summary>
					/// 设置是否绘制图例边框
					/// </summary>
					/// <param name="bDraw">是否绘制图例边框</param>
					/// <returns></returns>
					virtual ev_void setDrawFrame(bool bDraw);

					/// <summary>
					/// 获取是否绘制图例边框
					/// </summary>
					/// <param name=""></param>
					/// <returns>是否绘制图例边框</returns>
					virtual ev_bool isDrawFrame() const;

					/// <summary>
					/// 设置边框风格
					/// </summary>
					/// <param name="symbol">边框风格</param>
					/// <returns></returns>
					virtual ev_void setFrameSymbol(const EarthView::World::Spatial::Display::ISymbol *symbol);

					/// <summary>
					/// 获取边框风格
					/// </summary>
					/// <param name=""></param>
					/// <returns>边框风格</returns>
					virtual EarthView::World::Spatial::Display::ISymbol * getFrameSymbol() const;

					/// <summary>
					/// 设置标题
					/// </summary>
					/// <param name="strTitle">标题</param>
					/// <returns></returns>
					virtual ev_void setTitle(const EVString& strTitle);

					/// <summary>
					/// 获取标题
					/// </summary>
					/// <param name=""></param>
					/// <returns>标题</returns>
					virtual  EVString getTitle() const;

					/// <summary>
					/// 设置标题风格
					/// </summary>
					/// <param name="pSymbol">标题风格</param>
					/// <returns></returns>
					virtual ev_void setTitleSymbol(const EarthView::World::Spatial::Display::ISymbol *pSymbol);

					/// <summary>
					/// 获取标题风格
					/// </summary>
					/// <param name=""></param>
					/// <returns>标题风格</returns>
					virtual EarthView::World::Spatial::Display::ISymbol* getTitleSymbol() const;

					/// <summary>
					/// 设置图例项风格
					/// </summary>
					/// <param name="pSymbol">图例项风格</param>
					/// <returns></returns>
					virtual ev_void setItemSymbol(const EarthView::World::Spatial::Display::ISymbol *pSymbol);

					/// <summary>
					/// 获取图例项风格
					/// </summary>
					/// <param name=""></param>
					/// <returns>图例项风格</returns>
					virtual EarthView::World::Spatial::Display::ISymbol* getItemSymbol() const;

					/// <summary>
					/// 设置标题对齐方式
					/// </summary>
					/// <param name="alignment">标题对齐方式</param>
					/// <returns></returns>
					virtual ev_void setTitleAlignment(EarthView::World::Spatial::Carto::LegendTitleAlignment alignment);

					/// <summary>
					/// 获取标题对齐方式
					/// </summary>
					/// <param name=""></param>
					/// <returns>标题对齐方式</returns>
					virtual EarthView::World::Spatial::Carto::LegendTitleAlignment getTitleAlignment() const;

					/// <summary>
					/// 设置行间距
					/// </summary>
					/// <param name="rowGap">行间距</param>
					/// <returns></returns>
					virtual ev_void setRowGap(ev_real64 rowGap);

					/// <summary>
					/// 获取行间距
					/// </summary>
					/// <param name=""></param>
					/// <returns>行间距</returns>
					virtual ev_real64 getRowGap()const;

					/// <summary>
					/// 设置列间距
					/// </summary>
					/// <param name="colunmGap">列间距</param>
					/// <returns></returns>
					virtual ev_void setColunmGap(ev_real64 colunmGap);

					/// <summary>
					/// 获取列间距
					/// </summary>
					/// <param name=""></param>
					/// <returns>列间距</returns>
					virtual ev_real64 getColunmGap()const;

					/// <summary>
					/// 获取图例项例数
					/// </summary>
					/// <param name="count"></param>
					/// <returns>图例项例数</returns>
					virtual ev_void setColumnCount(const ev_int32 count);

					/// <summary>
					/// 获取图例项例数
					/// </summary>
					/// <param name=""></param>
					/// <returns>图例项例数</returns>
					virtual ev_int32 getColumnCount() const;

					/// <summary>
					/// 添加图例项
					/// </summary>
					/// <param name="vecLayer">图例项</param>
					/// <returns></returns>
					virtual ev_void setLegendItem(const  EarthView::World::Spatial::Carto::ILegendItemVector *pItemVector);

					/// <summary>
					/// 清空图例项
					/// </summary>
					/// <param name="vecLayer"></param>
					/// <returns></returns>
					virtual ev_void clearLegendItem();

					/// <summary>
					///获取图例项
					/// </summary>
					/// <param name="symbol"></param>
					/// <returns>图例项</returns>
					virtual EarthView::World::Spatial::Carto::ILegendItemVector* getLegendItems() const;

					/// <summary>
					///获取图例边框范围
					/// </summary>
					/// <param name="symbol"></param>
					/// <returns>图例边框范围</returns>
					virtual  EarthView::World::Spatial::Geometry::IEnvelope* getEnvelope() const;

					/// <summary>
					///设置图例边框范围
					/// </summary>
					/// <param name="pEnvelope">图例边框范围</param>
					/// <returns></returns>
					virtual ev_void setEnvelope(EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope);

					/// <summary>
					/// 判断图例是否被选择
					/// </summary>
					/// <param name="pDisplay"></param>
					/// <returns>如果是被选择状态，返回true,否则返回false</returns>
					virtual ev_bool isSelected();

					/// <summary>
					/// 设置图例是否被选择
					/// </summary>
					/// <param name="pDisplay">是否被选择</param>
					/// <returns></returns>
					virtual ev_void setSelected(ev_bool b);

					/// <summary>
					/// 绘制图例准备
					/// </summary>
					/// <param name="pDisplay">指定设备</param>
					/// <returns></returns>
					virtual ev_bool drawPrepare(EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay);

					/// <summary>
					/// 绘制图例
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
					/// 创建图例的克隆体
					/// </summary>
					/// <param name=""></param>
					/// <returns>图例的克隆体</returns>
					virtual EarthView::World::Spatial::Carto::IElement * clone() const;

					/// <summary>
					/// 将图例的配置以流的方式导出
					/// </summary>
					/// <param name="stream">导出的流</param>
					/// <returns></returns>
					virtual ev_void toStream( _out EarthView::World::Core::CDataStream &stream ) const;

					/// <summary>
					/// 将图例的配置以XML的方式导出
					/// </summary>
					/// <param name=""></param>
					/// <returns>xml</returns>
					virtual EVString toXML() const;

					/// <summary>
					/// 从xml元素中恢复图例的配置
					/// </summary>
					/// <param name="element">xml元素</param>
					/// <returns></returns>
					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);

					/// <summary>
					/// 把图例的配置保存到xml元素中
					/// </summary>
					/// <param name=""></param>
					/// <returns>xml元素</returns>
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;

				ev_internal:
					ev_void fromStream( _in EarthView::World::Core::CDataStream& stream );
				ev_private:
					CLegend( EarthView::World::Core::CNameValuePairList *pList );
				private:
					ev_void initData();
					ev_bool setSizeByEnvelope(EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope);
					ev_void drawBarFrame(EarthView::World::Spatial::Display::ISpatialDisplay* display);
					ev_void drawBarTitle(EarthView::World::Spatial::Display::ISpatialDisplay* display);
					ev_void correctEnvelope(EarthView::World::Spatial::Display::ISpatialTransformer *pTransformer);
				protected:
					C_DISABLE_COPY(CLegend)
				protected:

					ev_real64 m_dShadowWidth;
					ev_real64 m_dBarWidth;
					ev_real64 m_dBarHeight;
					ev_real64 m_dFrameWidth;
					ev_real64 m_dRowGap;
					ev_real64 m_dColumnGap;
					ev_real64 m_dPageScale;
					ev_int32  m_nColumnCount;
					ev_bool m_bDrawFrame;
					ev_bool m_bIsSelected;
					ev_bool m_bDrawBackground;
					ev_bool m_bDrawShadow;
					EarthView::World::Spatial::Carto::LegendTitleAlignment m_titleAlignment;
					EarthView::World::Spatial::Display::CLineSymbol* m_pFrameSymbol;
					EarthView::World::Spatial::Display::CTextSymbol* m_pTitleSymbol;
					EarthView::World::Spatial::Display::CTextSymbol* m_pItemSymbol;
					EVString m_strTitle;
					private:
					EarthView::World::Spatial::Display::ISpatialDisplay *m_pPageDisplay;
					EarthView::World::Spatial::Geometry::IEnvelope *m_pEnvelope;
					EarthView::World::Spatial::Display::IColor *m_pShadowColor;
					EarthView::World::Spatial::Display::IColor *m_pBackGroundColor;
					int m_nLayerCount;
					CSymbolConvertor *m_pSymbolConvertor;
					ILegendItemVector *m_pItemVector;
				};
			}
		}
	}
}

#endif //EARTHVIEW_WORLD_SPATIAL2D_ATLAS_LEGENDBAR_H
