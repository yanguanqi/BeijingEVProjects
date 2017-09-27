#ifndef EARTHVIEW_WORLD_SPATIAL_GEODATASET_ISCALEBAR_H
#define EARTHVIEW_WORLD_SPATIAL_GEODATASET_ISCALEBAR_H

#include "core/memoryallocatedobject.h"
#include "spatialinterface/config.h"
#include "spatialinterface/ispatialdisplay.h"
#include "spatialinterface/isymbol.h"
#include "spatialinterface/imapsurrround.h"
#include "core/xml.h"
#include "spatialinterface/imap.h"
#include "spatialinterface/ibitmap.h"
#include "spatialinterface/imapframe.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Carto
			{

				/// <summary>
				/// 比例尺类型
				/// </summary>
				enum EVScaleType
				{
					ST_Line_MarkUp			= 0,	//刻度在主尺上边的线状
					ST_Line_Crossing		= 1,	//刻度与主尺交叉的线状
					ST_Line_MarkDown		= 2,	//刻度在主尺下边的线状
					ST_Line_Step			= 3,	//刻度与主尺成阶梯式的线状
					ST_Bar_Altemating		= 4,	//交互式条状
					ST_Bar_DoubleAltemating	= 5,	//双交互式条状
					ST_Bar_Hollow			= 6,	//内部为空的条状
					ST_Bar_SingleDivision	= 7,	//单分隔条状
					ST_Bar_SawTooth	        = 8,	//锯齿状
					
				};

				/// <summary>
				/// 数字标注位置
				/// </summary>
				enum DataLabelPosition
				{
					DLP_LabelUp		= 0,   // 上方
					DLP_LabelDown	= 1,   // 上方
				};

				class EV_INTERFACE_DLL IScaleBar : public IMapSurround
				{
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name="c"></param>
					/// <returns></returns>
					virtual ~IScaleBar();
				public:

					/// <summary>
					/// 获取元素类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>元素类型</returns>
					virtual EVElementType getElementType() const;

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
				protected:
					IScaleBar();
				ev_private:
					IScaleBar( EarthView::World::Core::CNameValuePairList *pList );
				private:
					IScaleBar(IScaleBar & obj);
				};
			}
		}
	}
}
#endif
