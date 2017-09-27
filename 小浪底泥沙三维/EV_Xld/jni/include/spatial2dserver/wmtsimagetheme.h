#ifndef EARTHVIEW_WORLD_SPATIAL_WMTSIMAGETHEME_H
#define EARTHVIEW_WORLD_SPATIAL_WMTSIMAGETHEME_H
#include "spatial2dserver/config.h"
#include "spatialinterface/itheme.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Theme{
				/// <summary>
				/// WMS图层默认专题图专题图类
				/// </summary>
				class EV_2DWMS_DLL CEVWMTSImageTheme : public EarthView::World::Spatial::Theme::ITheme
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CEVWMTSImageTheme();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CEVWMTSImageTheme();
					/// <summary>
					/// 复制专题图
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回复制的专题图</returns>
					virtual EarthView::World::Spatial::Theme::ITheme * clone() const;
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
					CEVWMTSImageTheme( EarthView::World::Core::CNameValuePairList *pList );
				};
}}}}
#endif