#ifndef EARTHVIEW_WORLD_SPATIAL_CARTO_IMARKNORTHARROW_H
#define EARTHVIEW_WORLD_SPATIAL_CARTO_IMARKNORTHARROW_H

#include "core/xml.h"
#include "core/memoryallocatedobject.h"
#include "spatialinterface/ispatialdisplay.h"
#include "spatialinterface/imapframe.h"
#include "spatialinterface/isymbol.h"
#include "spatialinterface/imapsurrround.h"
#include "spatialinterface/igeometry.h"
#include "spatialinterface/ibitmap.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Carto
			{
				/// <summary>
				/// 指北针类型
				/// </summary>
				enum EVNorthArrowType
				{
					NAT_DoubleTriangle		= 0,	// 双三角形
					NAT_Prismatic		    = 1,	// 棱形
					NAT_FourAngleStar	    = 2,	// 四角星
					NAT_EightAngleStar		= 3,	// 八角星
					NAT_SingleArrow_Line	= 4,	// 线状箭头
					NAT_SingleArrow_Solid	= 5,	// 实心箭头
					NAT_Fan_Line		    = 6,	// 线状风扇
					NAT_Fan_Solid			= 7,	// 实心风扇
					NAT_Compass_Line		= 8,	// 线状罗盘
					NAT_Compass_Solid		= 9,	// 实心罗盘
					NAT_FourArrow_Line		= 10,	// 线状四个箭头
					NAT_FourArrow_Solid		= 11,	// 实心四个箭头
					NAT_LibMarkSymbol		= 12,	// 库指北针
				};

				class EV_INTERFACE_DLL IMarkNorthArrow : public IMapSurround
				{
				public:	
					/// <summary>
					/// 虚构函数
					/// </summary>
					/// <param name="type"></param>
					/// <returns></returns>
					virtual ~IMarkNorthArrow();
				public:

					/// <summary>
					/// 获取元素类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>元素类型</returns>
					virtual EVElementType getElementType() const;

					/// <summary>
					/// 设置指北针类型
					/// </summary>
					/// <param name="type">指北针类型</param>
					/// <returns></returns>
					virtual ev_void setType(const EVNorthArrowType type);

					/// <summary>
					/// 获取指北针类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>指北针类型</returns>
					virtual EVNorthArrowType getType() const;
					/// <summary>
					/// 设置指北针风格
					/// </summary>
					/// <param name="symbol">指北针风格</param>
					/// <returns></returns>
					virtual ev_void setMarkerSymbol(EarthView::World::Spatial::Display::ISymbol* symbol);

					/// <summary>
					/// 获取指北针风格
					/// </summary>
					/// <param name=""></param>
					/// <returns>指北针风格</returns>
					virtual EarthView::World::Spatial::Display::ISymbol* getMarkerSymbol() const;

					/// <summary>
					///获取指北针边框范围
					/// </summary>
					/// <param name="symbol"></param>
					/// <returns>指北针边框范围</returns>
					virtual  EarthView::World::Spatial::Geometry::IEnvelope* getEnvelope() const;

					/// <summary>
					///设置指北针边框范围
					/// </summary>
					/// <param name="pEnvelope">指北针边框范围</param>
					/// <returns></returns>
					virtual ev_void setEnvelope(EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope);

					/// <summary>
					///获取地图当前角度
					/// </summary>
					/// <param name=""></param>
					/// <returns>symbol</returns>
 					virtual ev_real64 getMapAngle() const;

					/// <summary>
					///获取指北针校正角度
					/// </summary>
					/// <param name=""></param>
					/// <returns>校正角度</returns>
					virtual ev_real64 getCorrectionAngle() const;

					/// <summary>
					/// 设置指北针校正角度
					/// </summary>
					/// <param name="dAngle">校正角度</param>
					/// <returns></returns>
					virtual ev_void setCorrectionAngle(const ev_real64 dAngle);

					/// <summary>
					/// 设置比例尺对应的数据框
					/// </summary>
					/// <param name="pMapFrame">比例尺对应的数据框</param>
					/// <returns></returns>
					virtual ev_void setMapFrame(const EarthView::World::Spatial::Carto::IMapFrame *pMapFrame);

					/// <summary>
					/// 设置指北针的大小
					/// </summary>
					/// <param name="size">大小</param>
					/// <returns></returns>
					virtual ev_void setSize(const ev_real64 size);
					/// <summary>
					/// 获取指北针的大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回大小</returns>
					virtual ev_real64 getSize() const;

					/// <summary>
					/// 设置指北针颜色
					/// </summary>
					/// <param name="pColor">指北针颜色</param>
					/// <returns></returns>
					virtual ev_void setColor(const EarthView::World::Spatial::Display::IColor *pColor);

					/// <summary>
					/// 获取指北针颜色
					/// </summary>
					/// <param name=""></param>
					/// <returns>指北针颜色</returns>
					virtual EarthView::World::Spatial::Display::IColor* getColor() const;

					/// <summary>
					/// 获取预览图标
					/// </summary>
					/// <param name="pPageDisplay">绘制图标设备</param>
					/// <returns>预览图标</returns>
					virtual EarthView::World::Display::IBitmap* getPreviw(EarthView::World::Spatial::Display::ISpatialDisplay* pPageDisplay);

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
					/// 判断指北针是否被选择
					/// </summary>
					/// <param name="pDisplay"></param>
					/// <returns>如果是被选择状态，返回true,否则返回false</returns>
					virtual ev_bool isSelected();

					/// <summary>
					/// 设置指北针是否被选择
					/// </summary>
					/// <param name="pDisplay">是否被选择</param>
					/// <returns></returns>
					virtual ev_void setSelected(ev_bool b);

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
					/// 把指北针的配置导出成xml
					/// </summary>
					/// <param name=""></param>
					/// <returns>xml元素</returns>
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;
	ev_internal:
					virtual ev_void fromStream(_in EarthView::World::Core::CDataStream& stream );	
				protected:
					IMarkNorthArrow();
	ev_private:
					IMarkNorthArrow(EarthView::World::Core::CNameValuePairList *pList );
				private:
					IMarkNorthArrow(IMarkNorthArrow & obj);
					EarthView::World::Spatial::Carto::IMapFrame* m_pMapFrame;
				};
			}
		}
	}
}
#endif