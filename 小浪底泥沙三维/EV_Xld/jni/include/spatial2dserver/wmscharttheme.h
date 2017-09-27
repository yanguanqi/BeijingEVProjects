#ifndef EARTHVIEW_WORLD_SPATIAL_WMSCHAETTHEME_H
#define EARTHVIEW_WORLD_SPATIAL_WMSCHAETTHEME_H
#include "spatial2dserver/config.h"
#include "spatialinterface/itheme.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Theme{
/*				参数说明
				colorMode(海图颜色模式):
				//晴天
				SunnyDay(1),
				//傍晚
				Nightfall(2),
				//白天
				DayTime(3),
				//有雾
				Misty(4),
				//黑夜
				Night(5);

				displayMode(海图显示模式):
				//未知
				Unknown(0),
				//基础显示
				Base(1), 
				//标准显示
				Stand(2), 
				//全部显示
				All(3);

				symbolMode(海图符号样式):
				//简单符号
				SimpleSymbol
				//传统符号
				Tradition

				isobath(海图安全等深线):
				//5米
				FiveMeter(5),
				//十米
				TenMeter(10),
				//二十米
				TwentyMeter(20),
				//三十米
				ThirtyMeter(30);

				annotationMode(海图注记样式):
				// 英文
				English(true),
				// 中文
				Chinese(false);
*/

				/// <summary>
				/// WMS图层默认专题图专题图类
				/// </summary>
				class EV_2DWMS_DLL CEVWMSChartTheme : public EarthView::World::Spatial::Theme::ITheme
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CEVWMSChartTheme();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CEVWMSChartTheme();
					/// <summary>
					/// 设置显示模式
					/// </summary>
					/// <returns></returns>
					virtual ev_void setDisplayMode(const EVString& displayMode);
					/// <summary>
					/// 获取显示模式
					/// </summary>
					/// <returns></returns>
					virtual EVString getDisplayMode() const;
					/// <summary>
					/// 设置颜色模式
					/// </summary>
					/// <returns></returns>
					virtual ev_void setColorMode(const EVString& colorMode);
					/// <summary>
					/// 获取颜色模式
					/// </summary>
					/// <returns></returns>
					virtual EVString getColorMode() const;
					/// <summary>
					/// 设置符号模式
					/// </summary>
					/// <returns></returns>
					virtual ev_void setSymbolMode(const EVString& symbolMode);
					/// <summary>
					/// 获取符号模式
					/// </summary>
					/// <returns></returns>
					virtual EVString getSymbolMode() const;
					/// <summary>
					/// 设置安全等深线
					/// </summary>
					/// <returns></returns>
					virtual ev_void setIsoBath(const EVString& isoBath);
					/// <summary>
					/// 获取安全等深线参数
					/// </summary>
					/// <returns></returns>
					virtual EVString getIsoBath() const;
					/// <summary>
					/// 设置注记类型
					/// </summary>
					/// <returns></returns>
					virtual ev_void setAnnoMode(const EVString& annoMode);
					/// <summary>
					/// 获取注记类型
					/// </summary>
					/// <returns></returns>
					virtual EVString getAnnoMode() const;
					/// <summary>
					/// 复制专题图
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回复制的专题图</returns>
					virtual EarthView::World::Spatial::Theme::ITheme * clone() const;
					/// <summary>
					/// 是否与指定专题图相同
					/// </summary>
					/// <param name="theme">指定的专题图</param>
					/// <returns>如果是返回true；否则返回false</returns>
					virtual ev_bool equals(const EarthView::World::Spatial::Theme::ITheme* theme);
					/// <summary>
					/// 将专题图输出到流
					/// </summary>
					/// <param name="stream">输出参数，流</param>
					/// <returns></returns>
					virtual ev_void toStream( _out EarthView::World::Core::CDataStream & stream ) const;
					ev_internal:
					/// <summary>
					/// 从流序列化专题图
					/// </summary>
					/// <param name="stream">输出参数，流</param>
					/// <returns></returns>
					virtual ev_void fromStream( EarthView::World::Core::CDataStream& stream );
				public:
					/// <summary>
					/// 将专题图输出为EarthView::World::Core::CXmlElement
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回EarthView::World::Core::CXmlElement</returns>
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;
					/// <summary>
					/// 从EarthView::World::Core::CXmlElement读取专题图
					/// </summary>
					/// <param name="element">指定的EarthView::World::Core::CXmlElement</param>
					/// <returns></returns>
					virtual ev_void fromXmlElement( EarthView::World::Core::CXmlElement& element);
				ev_private:
					CEVWMSChartTheme( EarthView::World::Core::CNameValuePairList *pList );
				private:
					EVString m_DisplayMode;
					EVString m_ColorMode;
					EVString m_SymbolMode;
					EVString m_IsoBath;
					EVString m_AnnoMode;
				};
}}}}
#endif