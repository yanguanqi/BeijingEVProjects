#ifndef EARTHVIEW_WORLD_SPATIAL_CARTO_MAPTITLE_H
#define EARTHVIEW_WORLD_SPATIAL_CARTO_MAPTITLE_H

#include "spatialinterface/imaptitle.h"
#include "spatial2dcarto/cartoconfig.h"
#include "symbol/textsymbol.h"
#include "symbol/linesymbol.h"
#include "symbol/fillsymbol.h"
#include "spatialinterface/ispatialtransformer.h"
#include "spatial2dcarto/symbolconvertor.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Carto
			{
				class EV_SPATIAL2DCARTO_DLL CMapTitle : public IMapTitle
				{
				public:

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CMapTitle();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CMapTitle();

				public:


					/// <summary>
					/// 获取元素类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>元素类型</returns>
					virtual EarthView::World::Spatial::Carto::EVElementType getElementType() const;

					/// <summary>
					/// 获取元素名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>元素名称</returns>
					virtual EVString getName() const;
					/// <summary>
					/// 获取文本内容
					/// </summary>
					/// <param name=""></param>
					/// <returns>文本内容</returns>
					virtual EVString getText() const;

					/// <summary>
					///设置文本内容
					/// </summary>
					/// <param name="strText">文本内容</param>
					/// <returns></returns>
					virtual ev_void setText(EVString strText);

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
					/// 设置横向间隔
					/// </summary>
					/// <param name="horizontalGap">横向间隔</param>
					/// <returns></returns>
					virtual ev_void setHorizontalGap(const ev_real64 horizontalGap);

					/// <summary>
					/// 获取横向间隔
					/// </summary>
					/// <param name=""></param>
					/// <returns>横向间隔</returns>
					virtual ev_real64 getHorizontalGap() const;

					/// <summary>
					/// 设置纵向间隔
					/// </summary>
					/// <param name="verticalGap">纵向间隔</param>
					/// <returns></returns>
					virtual ev_void setVerticalGap(const ev_real64 verticalGap);

					/// <summary>
					/// 获取纵向间隔
					/// </summary>
					/// <param name=""></param>
					/// <returns>纵向间隔</returns>
					virtual ev_real64 getVerticalGap() const;

					/// <summary>
					///获取地图标题的风格
					/// </summary>
					/// <param name="symbol"></param>
					/// <returns>地图标题的风格</returns>
					virtual  EarthView::World::Spatial::Display::ISymbol* getTitleSymbol() const;

					/// <summary>
					///设置地图标题的风格
					/// </summary>
					/// <param name="symbol">地图标题的风格</param>
					/// <returns></returns>
					virtual ev_void setTitleSymbol(EarthView::World::Spatial::Display::ISymbol* symbol);

					/// <summary>
					/// 设置背景颜色
					/// </summary>
					/// <param name="symbol">背景颜色</param>
					/// <returns></returns>
					virtual ev_void setBackgroundColor(const EarthView::World::Spatial::Display::IColor* pColor);

					/// <summary>
					/// 获取背景颜色
					/// </summary>
					/// <param name=""></param>
					/// <returns>背景颜色</returns>
					virtual EarthView::World::Spatial::Display::IColor* getBackgroundColor() const;

					/// <summary>
					/// 设置是否绘制背景色
					/// </summary>
					/// <param name="bDraw">是否绘制背景色</param>
					/// <returns></returns>
					virtual ev_void setDrawBackground(bool bDraw);

					/// <summary>
					/// 获取是否绘制背景色
					/// </summary>
					/// <param name=""></param>
					/// <returns>是否绘制背景色</returns>
					virtual ev_bool isDrawBackground() const;

					/// <summary>
					/// 设置阴影颜色
					/// </summary>
					/// <param name="symbol">阴影颜色</param>
					/// <returns></returns>
					virtual ev_void setShadowColor(const EarthView::World::Spatial::Display::IColor* pColor);

					/// <summary>
					/// 获取阴影颜色
					/// </summary>
					/// <param name=""></param>
					/// <returns>阴影颜色</returns>
					virtual EarthView::World::Spatial::Display::IColor* getShadowColor() const;

					/// <summary>
					/// 设置是否绘制阴影
					/// </summary>
					/// <param name="bDraw">是否绘制阴影</param>
					/// <returns></returns>
					virtual ev_void setDrawShadow(bool bDraw);

					/// <summary>
					/// 获取是否绘制阴影
					/// </summary>
					/// <param name=""></param>
					/// <returns>是否绘制阴影</returns>
					virtual ev_bool isDrawShadow() const;

					/// <summary>
					/// 设置边框风格
					/// </summary>
					/// <param name="pSymbol">边框风格</param>
					/// <returns></returns>
					virtual ev_void setFrameSymbol( const EarthView::World::Spatial::Display::ISymbol* pSymbol);

					/// <summary>
					/// 获取边框风格
					/// </summary>
					/// <param name="pSymbol"></param>
					/// <returns>边框风格</returns>
					virtual EarthView::World::Spatial::Display::ISymbol* getFrameSymbol() const;

					/// <summary>
					/// 设置是否绘制边框
					/// </summary>
					/// <param name=" bDraw">是否绘制边框</param>
					/// <returns></returns>
					virtual ev_void setDrawFrame(const ev_bool bDraw);

					/// <summary>
					/// 获取是否绘制边框
					/// </summary>
					/// <param name=""></param>
					/// <returns>是否绘制边框</returns>
					virtual ev_bool isDrawFrame() const;
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
					virtual ev_void fromStream( _in EarthView::World::Core::CDataStream& stream );	
				 private:
					 ev_void init();
					 ev_bool setSizeByEnvelope(EarthView::World::Spatial::Geometry::IEnvelope *pEnvelope);
					 EVString calculateScale(EarthView::World::Spatial::Display::ISpatialDisplay *pMapDisplay, EarthView::World::Spatial::Display::ISpatialDisplay *pPageDisplay);//如果比例发生改变
					 ev_void correctEnvelope(EarthView::World::Spatial::Display::ISpatialTransformer *pTransformer);
				ev_private:
					CMapTitle(EarthView::World::Core::CNameValuePairList *pList );
				private:
					CMapTitle(CMapTitle& obj);
				private:
					ev_real64 m_dBarWidth;
					ev_real64 m_dBarHeight;
					ev_real64 m_dFrameWidth;
					ev_real64 m_dVerticalGap;
					ev_real64 m_dHorizontalGap;
					EVString m_strName;
					EarthView::World::Spatial::Display::CLineSymbol* m_pFrameSymbol;
					EarthView::World::Spatial::Display::CTextSymbol* m_pTitleSymbol;
					EarthView::World::Spatial::Display::IColor* m_pShadowColor;
					EarthView::World::Spatial::Display::IColor* m_pBackColor;
					EarthView::World::Spatial::Geometry::IEnvelope *m_pEnvelope;
					EarthView::World::Spatial::Display::ISpatialDisplay* m_pPageDisplay;
					CSymbolConvertor *m_pSymbolConvertor;
					ev_bool m_bSelected;
					ev_bool m_bDrawShadow;
					ev_bool m_bDrawBackground;
					ev_bool m_bDrawFrame;
				};
			}
		}
	}
}
#endif