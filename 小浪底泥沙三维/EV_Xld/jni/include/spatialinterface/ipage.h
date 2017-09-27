#ifndef EARTHVIEW_WORLD_SPATIAL_CARTO_IPAGE_H
#define EARTHVIEW_WORLD_SPATIAL_CARTO_IPAGE_H

#include "spatialinterface/ispatialdisplay.h"
#include "spatialinterface/imap.h"
#include "spatialinterface/icolor.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Carto
			{
				/// <summary>
				/// 纸张单位
				/// </summary>
				enum EVPageUnits
				{
					PU_Unknown          = 0, //未知单位
					PU_Meters           = 1, //米
					PU_Millimeters	    = 2, //毫米
					PU_Centimeters		= 3, //厘米
					PU_Inches			= 4, //英寸
					PU_Points			= 5, //磅（也译作点，打印单位，1磅 = 1 / 72英寸）
					PU_Pixel			= 6	 //像素
				};

				/// <summary>
				/// 纸张方向
				/// </summary>
				enum EVPageOrientation
				{
					PO_Portrait     = 0, //纵向
					PO_Landscape       = 1, //横向
				};

				/// <summary>
				/// 纸张类型
				/// </summary>
				enum EVPageSize 
				{ 
					PS_A4, PS_B5, PS_Letter, PS_Legal, PS_Executive,
					PS_A2, PS_A3, PS_A5, PS_B4, PS_C5E, PS_Comm10E,
					PS_DLE, PS_Folio, PS_Ledger, PS_Tabloid, PS_Custom 
				};

				class EV_INTERFACE_DLL IPage : public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 虚构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~IPage();

				public:

					/// <summary>
					/// 获取纸张类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>纸张类型</returns>
					virtual EVPageSize getPageType() const;

					/// <summary>
					/// 设置纸张类型
					/// </summary>
					/// <param name="type">纸张类型</param>
					/// <returns></returns>
					virtual ev_void setPageType(EVPageSize type);

					/// <summary>
					/// 获取边框风格
					/// </summary>
					/// <param name=""></param>
					/// <returns>边框风格</returns>
					virtual  EarthView::World::Spatial::Display::ISymbol* getBoderSymbol() const;

					/// <summary>
					/// 设置边框风格
					/// </summary>
					/// <param name="boder">边框风格</param>
					/// <returns></returns>
					virtual ev_void setBoderSymbol(_in  EarthView::World::Spatial::Display::ISymbol* boder);

					/// <summary>
					/// 获取背景风格
					/// </summary>
					/// <param name=""></param>
					/// <returns>背景风格</returns>
					virtual EarthView::World::Spatial::Display::IColor* getBackgroundColor() const;

					/// <summary>
					/// 设置背景风格
					/// </summary>
					/// <param name="background">背景风格</param>
					/// <returns></returns>
					virtual ev_void setBackgroundColor(_in EarthView::World::Spatial::Display::IColor* background);

					/// <summary>
					/// 获取阴影颜色
					/// </summary>
					/// <param name=""></param>
					/// <returns>阴影颜色</returns>
					virtual EarthView::World::Spatial::Display::IColor* getShadowColor() const;

					/// <summary>
					/// 设置阴影颜色
					/// </summary>
					/// <param name="background">阴影颜色</param>
					/// <returns></returns>
					virtual ev_void setShadowColor(_in EarthView::World::Spatial::Display::IColor* pColor);
					/// <summary>
					/// 获取方向
					/// </summary>
					/// <param name=""></param>
					/// <returns>方向类型</returns>
					virtual EVPageOrientation getOrientation() const;

					/// <summary>
					/// 自定义设置纸张大小
					/// </summary>
					/// <param name="width">宽度</param>
					/// <param name="height">高度</param>
					/// <returns></returns>
					virtual ev_void setPageSize(_in ev_real64 width,_in ev_real64 height);

					/// <summary>
					/// 设置方向
					/// </summary>
					/// <param name="oritention">方向类型</param>
					/// <returns></returns>
					virtual ev_void setOrientation(_in EVPageOrientation oritention);
					
					/// <summary>
					/// 查询纸张大小
					/// </summary>
					/// <param name="width">宽度</param>
					/// <param name="height">高度</param>
					/// <param name="pageUnit">高度</param>
					/// <returns></returns>
					virtual ev_void queryPageSize(_out ev_real64 &width, _out ev_real64 &height, _out EVPageUnits &pageUnit);

					/// <summary>
					/// 获取纸张单位
					/// </summary>
					/// <param name=""></param>
					/// <returns>纸张单位</returns>
					virtual EVPageUnits getPageUnits() const;

					/// <summary>
					/// 设置纸张单位
					/// </summary>
					/// <param name="pageUnit">纸张单位</param>
					/// <returns></returns>
					virtual ev_void setPageUnits(EVPageUnits pageUnit);

					/// <summary>
					/// 绘制纸张
					/// </summary>
					/// <param name="display">绘制设备</param>
					/// <param name="earseColor">纸张颜色</param>
					/// <returns></returns>
					virtual ev_void draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display);
					/// <summary>
					/// 设置自定义纸张类型宽度（单位：CM）
					/// </summary>
					/// <param name="dPageCustomWidth">宽度</param>
					/// <returns></returns>
					virtual ev_void setCustomPageWidth(ev_real64 dPageCustomWidth);
					/// <summary>
					/// 设置自定义纸张类型宽度（单位：CM）
					/// </summary>
					/// <param name="dPageCustomWidth">高度</param>
					/// <returns></returns>
					virtual ev_void setCustomPageHeight(ev_real64 dPageCustomHeight);
					/// <summary>
					/// 克隆纸张
					/// </summary>
					/// <param name=""></param>
					/// <returns>地图纸张</returns>
					virtual IPage *clone() const;
					/// <summary>
					/// 将纸张的配置以流的方式导出
					/// </summary>
					/// <param name="stream">导出的流</param>
					/// <returns></returns>
					virtual ev_void toStream( _out EarthView::World::Core::CDataStream &stream ) const;

					/// <summary>
					/// 将纸张的配置以XML的方式导出
					/// </summary>
					/// <param name=""></param>
					/// <returns>xml</returns>
					virtual EVString toXML() const;

					/// <summary>
					/// 从xml元素中恢复纸张的配置
					/// </summary>
					/// <param name="element">xml元素</param>
					/// <returns></returns>
					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);

					/// <summary>
					/// 把纸张的配置保存到xml元素中
					/// </summary>
					/// <param name=""></param>
					/// <returns>xml元素</returns>
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;
			ev_internal:
					virtual ev_void fromStream( EarthView::World::Core::CDataStream& stream );	
				protected:
					IPage();
			ev_private:
					IPage(EarthView::World::Core::CNameValuePairList *pList);
				private:
					IPage(IPage &obj);
				};
			}
		}
	}
}


#endif