#ifndef EARTHVIEW_WORLD_SPATIAL_WMTSOGCTHEME_H
#define EARTHVIEW_WORLD_SPATIAL_WMTSOGCTHEME_H
#include "spatial2dserver/config.h"
#include "spatialinterface/itheme.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Theme{
				/// <summary>
				/// WMS图层默认专题图专题图类
				/// </summary>
				class EV_2DWMS_DLL COGCWMTSTheme : public EarthView::World::Spatial::Theme::ITheme
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					COGCWMTSTheme();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~COGCWMTSTheme();
					/// <summary>
					/// 获取请求样式
					/// </summary>
					/// <returns></returns>
					EVString getRequestStyle();
					/// <summary>
					/// 设置请求样式
					/// </summary>
					/// <param name="style">请求样式</param>
					/// <returns></returns>
					void setRequestStyle(EVString style);
					/// <summary>
					/// 获取请求格式
					/// </summary>
					/// <returns></returns>
					EVString getRequestFormat();
					/// <summary>
					/// 设置请求格式
					/// </summary>
					/// <param name="style">请求格式</param>
					/// <returns></returns>
					void setRequestFormat(EVString format);
					/// <summary>
					/// 获取请求瓦片集
					/// </summary>
					/// <returns></returns>
					EVString getRequestTileSet();
					/// <summary>
					/// 设置请求瓦片集
					/// </summary>
					/// <param name="style">请求样式</param>
					/// <returns></returns>
					void setRequestTileSet(EVString tileSet);
					EarthView::World::Spatial::Theme::ITheme * clone() const;
					/// <summary>
					/// 是否与指定专题图相同
					/// </summary>
					/// <param name="theme">指定的专题图</param>
					/// <returns>如果是返回true；否则返回false</returns>
					virtual ev_bool equals(const EarthView::World::Spatial::Theme::ITheme* theme);
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
				ev_private:
					COGCWMTSTheme( EarthView::World::Core::CNameValuePairList *pList );
				private:
					EVString m_RequestStyle;
					EVString m_RequestFormat;
					EVString m_RequestTileSet;
				};
}}}}
#endif