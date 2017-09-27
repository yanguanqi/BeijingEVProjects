#ifndef EARTHVIEW_WORLD_CARTO_CLEGENDFORMAT_H
#define EARTHVIEW_WORLD_CARTO_CLEGENDFORMAT_H

#include "carto/ilegendformat.h"
#include "carto/cartoconfig.h"
#include "symbol/textsymbol.h"

namespace EarthView
{
	namespace World
	{
		namespace Carto
		{
			class EV_CARTO_DLL CLegendFormat : public ILegendFormat
			{
			public:
				CLegendFormat();
				~CLegendFormat();
				//获取总共有多少列
				ev_uint8 getColumns() const;
				//设置总共有多少列
				ev_void setColumns(ev_uint8 columns);
				//获取是否显示标题
				ev_bool getIsShowTitle() const;
				//设置是否显示标题
				ev_void setIsShowTitle(ev_bool isShowTitle);
				//获取标题的样式
				EarthView::World::Spatial::Display::CTextSymbol* getTitleSymbol() const;
				//设置标题的样式
				ev_void setTitleSymbol(EarthView::World::Spatial::Display::CTextSymbol* titleSymbol);
				//获取标签和描述之间的距离
				ev_real64 getTextGap() const;
				//设置标签和描述之间的距离
				ev_void setTextGap(ev_real64 textGap);
				//获取标题和第一个legendItem之间的距离
				ev_real64 getTitleGap() const;
				//设置标题和第一个legendItem之间的距离
				ev_void setTitleGap(ev_real64 titleGap);
				//获取图例项之间的水平间距
				ev_real64 getHorizontalItemGap() const;
				//设置图例项之间的水平间距
				ev_void setHorizontalItemGap(ev_real64 gap);
				//获取patch之间的水平间距
				ev_real64 getHorizontalPatchGap() const;
				//设置patch之间的水平间距
				ev_void setHorizontalPatchGap(ev_real64 gap);
				//获取图例项之间的垂直间距
				ev_real64 getVerticalItemGap() const;
				//设置图例项之间的垂直间距
				ev_void setVerticalItemGap(ev_real64 gap);
				//获取patch之间的垂直间距
				ev_real64 getVerticalPatchGap() const;
				//设置patch之间的垂直间距
				ev_void setVerticalPatchGap(ev_real64 gap);
				//获取图形和图层名之间的间距
				ev_real64 getLayerNameGap() const;
				//设置图形和图层名之间的间距
				ev_void setLayerNameGap(ev_real64 gap);
				//所有距离缩放一个比例因子
				ev_void scale(ev_real64 xScale,ev_real64 yScale);
				//获取图例文本的对其方式
				LegendTitleAlignment1 getTitleAligment() const;
				//设置图例文本的对其方式
				ev_void setTitleAlignment(LegendTitleAlignment1 aligment);
			private:
				ev_bool m_isShowTitle;
				ev_uint8 m_columns;
				EarthView::World::Spatial::Display::CTextSymbol* m_titleSymbol;
				LegendTitleAlignment1 m_titleAligment;
				ev_real64 m_textGap;
				ev_real64 m_titleGap;
				ev_real64 m_horizontalItemGap;
				ev_real64 m_horizontalPatchGap;
				ev_real64 m_verticalItemGap;
				ev_real64 m_verticalPatchGap;
				ev_real64 m_layerNameGap;

			};
		}
	}
}
#endif