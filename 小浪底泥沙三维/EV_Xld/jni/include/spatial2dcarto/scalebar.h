#ifndef EARTHVIEW_WORLD_SPATIAL2D_ATLAS_SCALEBAR_H
#define EARTHVIEW_WORLD_SPATIAL2D_ATLAS_SCALEBAR_H
#include "symbol/textsymbol.h"
#include "symbol/linesymbol.h"
#include "symbol/fillsymbol.h"
#include "spatialinterface/imap.h"
#include "spatial2dcarto/cartoconfig.h"
#include "spatialinterface/iscalebar.h"
#include "spatialinterface/igeometry.h"
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
				/// 比例尺类
				/// </summary>
				class EV_SPATIAL2DCARTO_DLL CScaleBar:
					public EarthView::World::Spatial::Carto::IScaleBar
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CScaleBar();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CScaleBar();
				public:

					/// <summary>
					/// 获取元素类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>元素类型</returns>
					virtual EarthView::World::Spatial::Carto::EVElementType getElementType() const;

					/// <summary>
					/// 设置比例尺类型
					/// </summary>
					/// <param name="type">比例尺类型</param>
					/// <returns></returns>
					virtual ev_void setScaleType(const EarthView::World::Spatial::Carto::EVScaleType type);

					/// <summary>
					/// 获取比例尺类型
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::Carto::EVScaleType getScaleType() const;

					/// <summary>
					/// 设置数字标注位置
					/// </summary>
					/// <param name="pos">数字标注位置</param>
					/// <returns></returns>
					virtual ev_void setDataLabelPositon(const EarthView::World::Spatial::Carto::DataLabelPosition pos);

					/// <summary>
					/// 获取数字标注位置
					/// </summary>
					/// <param name=""></param>
					/// <returns>数字标注位置</returns>
					virtual EarthView::World::Spatial::Carto::DataLabelPosition getDataLabelPositon() const;

					/// <summary>
					/// 设置比例尺背景颜色
					/// </summary>
					/// <param name="symbol">比例尺背景颜色</param>
					/// <returns></returns>
					virtual ev_void setBackgroundColor(const EarthView::World::Spatial::Display::IColor* pColor);

					/// <summary>
					/// 获取比例尺背景颜色
					/// </summary>
					/// <param name=""></param>
					/// <returns>比例尺背景颜色</returns>
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
					/// 获取阴影颜色
					/// </summary>
					/// <param name=""></param>
					/// <returns>阴影颜色</returns>
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
					/// 设置比例尺边框风格
					/// </summary>
					/// <param name="pSymbol">边框风格</param>
					/// <returns></returns>
					virtual ev_void setFrameSymbol( const EarthView::World::Spatial::Display::ISymbol* pSymbol);

					/// <summary>
					/// 获取比例尺边框风格
					/// </summary>
					/// <param name="pSymbol"></param>
					/// <returns>边框风格</returns>
					virtual EarthView::World::Spatial::Display::ISymbol* getFrameSymbol() const;

					/// <summary>
					/// 设置是否绘制比例尺边框
					/// </summary>
					/// <param name=" bDraw">是否绘制比例尺边框</param>
					/// <returns></returns>
					virtual ev_void setIsDrawFrame(const ev_bool bDraw);

					/// <summary>
					/// 获取是否绘制比例尺边框
					/// </summary>
					/// <param name=""></param>
					/// <returns>是否绘制比例尺边框</returns>
					virtual ev_bool getIsDrawFrame() const;

					/// <summary>
					/// 设置比例尺对应的数据框
					/// </summary>
					/// <param name="pMapFrame">比例尺对应的数据框</param>
					/// <returns></returns>
					virtual ev_void setMapFrame(const EarthView::World::Spatial::Carto::IMapFrame *pMapFrame);


					/// <summary>
					/// 设置比例尺单位
					/// </summary>
					/// <param name="label">比例尺单位</param>
					/// <returns></returns>
					virtual ev_void setScaleUnit(const EarthView::World::Spatial::Atlas::EVMapUnits scaleUnit);

					/// <summary>
					/// 获取比例尺单位
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo>比例尺单位</memo>
					virtual EarthView::World::Spatial::Atlas::EVMapUnits getScaleUnit() const;

					/// <summary>
					/// 设置比例尺主尺颜色
					/// </summary>
					/// <param name="color"></param>
					/// <returns></returns>
					virtual ev_void setScaleColor(const EarthView::World::Spatial::Display::IColor* color);
					/// <summary>
					/// 获取比例尺主尺颜色
					/// </summary>
					/// <param name=""></param>
					/// <returns>比例尺主尺颜色</returns>
					virtual EarthView::World::Spatial::Display::IColor* getScaleColor() const;

					/// <summary>
					/// 设置比例尺主刻度个数
					/// </summary>
					/// <param name="divisons"></param>
					/// <returns></returns>
					virtual ev_void setDivisions(const ev_int32 divisons);

					/// <summary>
					/// 获取比例尺主刻度个数
					/// </summary>
					/// <param name=""></param>
					/// <returns>比例尺主刻度个数</returns>
					virtual ev_int32 getDivisions() const;

					/// <summary>		
					/// 设置比例尺刻度长度
					/// </summary>
					/// <param name="dDivLength">比例尺刻度长度</param>
					/// <returns></returns>
					virtual ev_void setDivisionLength(const ev_real64 dDivLength);

					/// <summary>
					/// 获取比例尺刻度长度
					/// </summary>
					/// <param name=""></param>
					/// <returns>比例尺刻度长度</returns>
					virtual ev_real64 getDivisionLength() const;

					/// <summary>
					/// 设置比例尺分刻度个数
					/// </summary>
					/// <param name="subdivisons"></param>
					/// <returns></returns>
					virtual ev_void setSubDivisions(const ev_int32 subdivisons);

					/// <summary>
					/// 获取比例尺分刻度个数
					/// </summary>
					/// <param name=""></param>
					/// <returns>比例尺分刻度个数</returns>
					virtual ev_int32 getSubDivisions() const;

					/// <summary>
					/// 设置比例尺与标注的横向间隔
					/// </summary>
					/// <param name="labelGap"></param>
					/// <returns></returns>
					virtual ev_void setHorizontalGap(const ev_real64 horizontalGap);

					/// <summary>
					/// 获取比例尺与标注的横向间隔
					/// </summary>
					/// <param name=""></param>
					/// <returns>比例尺与标注的横向间隔</returns>
					virtual ev_real64 getHorizontalGap() const;

					/// <summary>
					/// 设置比例尺与标注的纵向间隔
					/// </summary>
					/// <param name="verticalGap">比例尺与标注的纵向间隔</param>
					/// <returns></returns>
					virtual ev_void setVerticalGap(const ev_real64 verticalGap);

					/// <summary>
					/// 获取比例尺与标注的纵向间隔
					/// </summary>
					/// <param name=""></param>
					/// <returns>比例尺与标注的纵向间隔</returns>
					virtual ev_real64 getVerticalGap() const;

					/// <summary>
					/// 设置比例尺主刻度高度
					/// </summary>
					/// <param name="divisionMarkHeight"></param>
					/// <returns></returns>
					virtual ev_void setDivisionMarkHeight(const ev_real64 divisionMarkHeight);

					/// <summary>
					/// 获取比例尺主刻度高度
					/// </summary>
					/// <param name=""></param>
					/// <returns>比例尺主刻度高度</returns>
					virtual ev_real64 getDivisionMarkHeight() const;

					/// <summary>
					/// 设置比例尺分刻度高度
					/// </summary>
					/// <param name="subdivisionMarkHeight"></param>
					/// <returns></returns>
					virtual ev_void setSubdivisionMarkHeight(const ev_real64 subdivisionMarkHeight);

					/// <summary>
					/// 获取比例尺分刻度高度
					/// </summary>
					/// <param name=""></param>
					/// <returns>比例尺分刻度高度</returns>
					virtual ev_real64 getSubdivisionMarkHeight() const;

					/// <summary>
					/// 设置比例尺主刻度风格
					/// </summary>
					/// <param name="symbol"></param>
					/// <returns></returns>
					virtual ev_void setDivisionMarkSymbol(const EarthView::World::Spatial::Display::ISymbol* symbol);

					/// <summary>
					/// 获取比例尺主刻度风格
					/// </summary>
					/// <param name=""></param>
					/// <returns>比例尺主刻度风格</returns>
					virtual EarthView::World::Spatial::Display::ISymbol* getDivisionMarkSymbol() const;

					/// <summary>
					/// 设置比例尺分刻度风格
					/// </summary>
					/// <param name="symbol"></param>
					/// <returns></returns>
					virtual ev_void setSubDivisionMarkSymbol(const EarthView::World::Spatial::Display::ISymbol* symbol);

					/// <summary>
					/// 获取比例尺分刻度风格
					/// </summary>
					/// <param name=""></param>
					/// <returns>比例尺分刻度风格</returns>
					virtual EarthView::World::Spatial::Display::ISymbol* getSubDivisionMarkSymbol() const;

					/// <summary>
					/// 设置比例尺标注风格
					/// </summary>
					/// <param name="symbol"></param>
					/// <returns></returns>
					virtual ev_void setDataLabelSymbol(const EarthView::World::Spatial::Display::ISymbol* symbol);

					/// <summary>
					/// 获取比例尺数据标注风格
					/// </summary>
					/// <param name=""></param>
					/// <returns>比例尺数据标注风格</returns>
					virtual EarthView::World::Spatial::Display::ISymbol* getDataLabelSymbol() const;

					/// <summary>
					/// 设置比例尺单位标注风格
					/// </summary>
					/// <param name="symbol">比例尺单位标注风格</param>
					/// <returns></returns>
					virtual ev_void setUnitLabelSymbol(const EarthView::World::Spatial::Display::ISymbol* symbol);

					/// <summary>
					/// 获取比例尺单位标注风格
					/// </summary>
					/// <param name=""></param>
					/// <returns>比例尺单位标注风格</returns>
					virtual EarthView::World::Spatial::Display::ISymbol* getUnitLabelSymbol() const;

					/// <summary>
					///获取比例尺边框范围
					/// </summary>
					/// <param name="symbol"></param>
					/// <returns>比例尺边框范围</returns>
					virtual  EarthView::World::Spatial::Geometry::IEnvelope* getEnvelope() const;

					/// <summary>
					///设置比例尺边框范围
					/// </summary>
					/// <param name="pEnvelope">比例尺边框范围</param>
					/// <returns></returns>
					virtual ev_void setEnvelope(EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope);

					/// <summary>
					/// 判断比例尺是否被选择
					/// </summary>
					/// <param name="pDisplay"></param>
					/// <returns>如果是被选择状态，返回true,否则返回false</returns>
					virtual ev_bool isSelected();

					/// <summary>
					/// 设置比例尺是否被选择
					/// </summary>
					/// <param name="pDisplay">是否被选择</param>
					/// <returns></returns>
					virtual ev_void setSelected(ev_bool b);

					/// <summary>
					/// 获取预览图标
					/// </summary>
					/// <param name="pPageDisplay">绘制图标设备</param>
					/// <returns>预览图标</returns>
					virtual EarthView::World::Display::IBitmap* getPreviw(EarthView::World::Spatial::Display::ISpatialDisplay* pPageDisplay);

					/// <summary>
					/// 绘制比例尺准备
					/// </summary>
					/// <param name="pDisplay">指定设备</param>
					/// <returns></returns>
					virtual ev_bool drawPrepare(EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay);

					/// <summary>
					/// 绘制比例尺
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
					ev_void fromStream( _in EarthView::World::Core::CDataStream& stream );	
				ev_private:
					CScaleBar( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CScaleBar )
				private:
					ev_void initData();		  
					ev_void drawBarFrame();
					ev_void drawLineMarkUp();
					ev_void drawLineMarkCrossing();
					ev_void drawLineMarkDown();
					ev_void drawLineStep();
					ev_void drawBarAltemating();
					ev_void drawBarDoubleAltemating();
					ev_void drawBarHollow();
					ev_void drawBarSingleDivision();
					ev_void drawBarSawTooth();
					ev_void correctEnvelope(EarthView::World::Spatial::Display::ISpatialTransformer *pTransformer);
					ev_void drawPrepare(EarthView::World::Spatial::Display::ISpatialDisplay* pPageDisplay,  EarthView::World::Spatial::Display::ISpatialDisplay* pMapDisplay);
					ev_bool setSizeByEnvelope(EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope);
				private:
					EVString m_strPrecision;
					EVString m_strUnitLabel;

					EarthView::World::Spatial::Atlas::EVMapUnits m_eUnits;
					EarthView::World::Spatial::Carto::EVScaleType m_scaleType;
					EarthView::World::Spatial::Carto::DataLabelPosition m_labelPosition;
					//用于保存数据的参数
					ev_real64 m_dBarWidth;
					ev_real64 m_dBarHeight;
					ev_real64 m_dZeroWidth;//0刻度的宽度
					ev_real64 m_dRealDivision;//实际距离
					ev_real64 m_dUnitGap;
					ev_real64 m_dHorizontalGap;
					ev_real64 m_dVerticalGap;
					ev_real64 m_dFrameWidth;
					ev_real64 m_dSubDivision;//分刻度显示长度
					ev_real64 m_dDivisionMarkHeight;
					ev_real64 m_dSubdivisionMarkHeight;
					ev_real64 m_dPageScale;
					ev_real64 m_dShadowWidth;
					ev_int32 m_nDivisions;//主刻度数
					ev_int32 m_nSubDivisions;//分刻度数
					ev_bool m_bDrawFrame;
					ev_bool m_bDrawBackground;
					ev_bool m_bIsSelected;
					ev_bool m_bDrawShadow;
					ev_bool m_bDrawPreview;
					//用于显示的参数
					ev_real64 m_dShowShadowWidth;
					ev_real64 m_dSubShowDivision;//分刻度显示长度
					ev_real64 m_dShowHorizontalGap;
					ev_real64 m_dShowUnitGap;
					ev_real64 m_dShowDivisionMarkHeight;
					ev_real64 m_dShowSubdivisionMarkHeight;
					ev_real64 m_dShowVerticalGap;
					ev_real64 m_dShowDivisionWidth;//主刻度单位长度
					ev_real64 m_dShowUnitWidth;//主刻度单位长度
					ev_real64 m_dShowUnitHeight;//主刻度单位长度
					ev_real64 m_dShowLabelWidth;
					ev_real64 m_dShowLabelHeight;
					ev_real64 m_dShowZeroLabelHeight;
					ev_real64 m_dStartPX;
					ev_real64 m_dStartPY;

					ev_real64 m_dDevEnvWidth;
					ev_real64 m_dDevEnvHeight;

					EarthView::World::Display::IBitmap* m_pPreviewBmp;
					EarthView::World::Spatial::Display::CTextSymbol* m_pUnitShowSymbol;
					EarthView::World::Spatial::Display::CTextSymbol* m_pDataShowSymbol;
					EarthView::World::Spatial::Display::CTextSymbol* m_pDataLabelSymbol;
					EarthView::World::Spatial::Display::CTextSymbol* m_pUnitLabelSymbol;
					EarthView::World::Spatial::Display::CLineSymbol* m_pDivisionMarkSymbol;
					EarthView::World::Spatial::Display::CLineSymbol* m_pSubdivisionMarkSymbol;
					EarthView::World::Spatial::Display::CLineSymbol* m_pFrameSymbol;
					CSymbolConvertor *m_pSymbolConvertor;
					EarthView::World::Spatial::Display::CLineSymbol* m_pLineSymbol;
					EarthView::World::Spatial::Display::IColor* m_pScaleColor;
					EarthView::World::Spatial::Display::IColor* m_pShadowColor;
					EarthView::World::Spatial::Display::IColor* m_pBackgroundColor;
					EarthView::World::Spatial::Geometry::IEnvelope* m_pEnvelope;
					EarthView::World::Spatial::Atlas::EVMapUnits m_scaleUnit;
					EarthView::World::Spatial::Carto::IMapFrame* m_pMapFrame;
					EarthView::World::Spatial::Display::ISpatialDisplay* m_pPageDisplay;
					EVString m_strDivisionValue;
				};
			}
		}
	}
}
#endif
