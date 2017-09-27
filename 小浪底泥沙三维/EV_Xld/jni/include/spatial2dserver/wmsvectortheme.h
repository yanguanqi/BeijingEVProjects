#ifndef EARTHVIEW_WORLD_SPATIAL_EVWMSVECTORTHEME_H
#define EARTHVIEW_WORLD_SPATIAL_EVWMSVECTORTHEME_H
#include "spatial2dserver/config.h"
#include "spatialinterface/itheme.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Theme{
				class EV_2DWMS_DLL CEVWMSVectorTheme : public EarthView::World::Spatial::Theme::ITheme
				{
				public:
					enum EVWMSRequestType
					{
						EV_RT_RequestByMap = 0,
						EV_RT_RequestByTile = 1
					};
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CEVWMSVectorTheme();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CEVWMSVectorTheme();
					/// <summary>
					/// 设置图层背景色
					/// </summary>
					/// <param name="r">r值</param>
					/// <param name="g">g值</param>
					/// <param name="b">b值</param>
					/// <param name="trans">是否透明</param>
					/// <returns></returns>
					void setBackColor(ev_int32 r, ev_int32 g, ev_int32 b,ev_bool trans);
					/// <summary>
					/// 获取图层背景色
					/// </summary>
					/// <param name="r">r值</param>
					/// <param name="g">g值</param>
					/// <param name="b">b值</param>
					/// <param name="trans">是否透明</param>
					/// <returns></returns>
					void getBackColor(ev_int32 &r, ev_int32 &g, ev_int32 &b,ev_bool &trans);					
					/// <summary>
					/// 设置请求样式
					/// </summary>
					/// <param name="style">请求样式</param>
					/// <returns></returns>
					void setRequestStyle(EVString style);
					/// <summary>
					/// 获取请求样式
					/// </summary>
					/// <returns></returns>
					EVString getRequestStyle();					
					/// <summary>
					/// 设置请求格式
					/// </summary>
					/// <param name="style">请求格式</param>
					/// <returns></returns>
					void setRequestFormat(EVString format);
					/// <summary>
					/// 获取请求格式
					/// </summary>
					/// <returns></returns>
					EVString getRequestFormat();

					EarthView::World::Spatial::Theme::ITheme * clone() const;
					/// <summary>
					/// 是否与指定专题图相同
					/// </summary>
					/// <param name="theme">指定的专题图</param>
					/// <returns>如果是返回true；否则返回false</returns>
					virtual ev_bool equals(const EarthView::World::Spatial::Theme::ITheme* theme);
					/// <summary>
					/// 从EarthView::World::Core::CXmlElement读取专题图
					/// </summary>
					/// <param name="element">指定的EarthView::World::Core::CXmlElement</param>
					/// <returns></returns>
					virtual ev_void fromXmlElement( EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// 将专题图输出为EarthView::World::Core::CXmlElement
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回EarthView::World::Core::CXmlElement</returns>
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;
					/// <summary>
					/// 从流序列化专题图
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
					virtual ev_void setRequestType(EVWMSRequestType requestType);
					virtual EVWMSRequestType getRequestType();
ev_private:
					CEVWMSVectorTheme( EarthView::World::Core::CNameValuePairList *pList );
				private:
					EVWMSRequestType m_RequestType;
					EVString  m_RequestStyle;
					EVString  m_RequestFormat;
					ev_int32  m_Color_R;
					ev_int32  m_Color_G;
					ev_int32  m_Color_B;
					ev_bool   m_Trans;
				};
}}}}
#endif