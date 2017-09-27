#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_ITHEME_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_ITHEME_H

#include "core/memoryallocatedobject.h"

#include "spatialinterface/isymbol.h"
#include "spatialinterface/config.h"

namespace EarthView{
	namespace World{ 
		namespace Spatial{
			namespace GeoDataset{
				class IQueryFilter;
				class IFeature;
				class IFeatureClass;
				class IFeatureSelection;
			}
			namespace Geometry{
				class IEnvelope;
				class IGeometry;
			}
		}
	}
}

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Theme{

				enum EVThemeType
				{
					TT_UNKNOWN               = 0,//未知
					TT_SIMPLE                = 1,//简单专题图
					TT_UNIQUEVALUE           = 2,//唯一值专题图
					TT_UNIQUEVALUEMATCHSYMBOL    = 3,//匹配符号库中符号的唯一值专题图
					TT_RANGE                 = 4,//范围专题图
					TT_STATISTICS            = 5,//统计专题图
					TT_CADUNIQUEENTITYVALUE   =  6
				};
				/// <summary>
				/// 专题图基类
				/// </summary>
				class EV_INTERFACE_DLL ITheme :
					public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 默认析构函数      
					/// </summary>
					virtual ~ITheme();
				public:
					/// <summary>
					/// 获取专题图类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回专题图类型</returns>
					virtual EarthView::World::Spatial::Theme::EVThemeType getType() const;
					/// <summary>
					/// 获取标题
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回标题</returns>
					virtual EVString getCaption() const;
					/// <summary>
					/// 设置标题
					/// </summary>
					/// <param name="caption">标题</param>
					/// <returns></returns>
					virtual ev_void setCaption( _in const EVString & caption );
					/// <summary>
					/// 是否为用户自定义符号
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果是返回true；否则返回false</returns>
					virtual ev_bool useDefaultSymbol() const;
					/// <summary>
					/// 设置是否为用户自定义符号
					/// </summary>
					/// <param name="usable">是否用户自定义</param>
					/// <returns></returns>
					virtual ev_void setUseDefaultSymbol( _in ev_bool usable);
					/// <summary>
					/// 获取自定义符号
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回符号</returns>
					virtual EarthView::World::Spatial::Display::ISymbol* getDefaultSymbol() const;
					/// <summary>
					/// 设置自定义符号
					/// </summary>
					/// <param name="symbol">自定义符号</param>
					/// <returns></returns>
					virtual ev_void setDefaultSymbol( _in const EarthView::World::Spatial::Display::ISymbol * symbol);
					/// <summary>
					/// 是否与指定专题图相同
					/// </summary>
					/// <param name="theme">指定的专题图</param>
					/// <returns>如果是返回true；否则返回false</returns>
					virtual ev_bool equals(const EarthView::World::Spatial::Theme::ITheme* theme);
					/// <summary>
					/// 复制专题图
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回复制的专题图</returns>
					virtual EarthView::World::Spatial::Theme::ITheme * clone() const;
					/// <summary>
					/// 将专题图输出到流
					/// </summary>
					/// <param name="stream">输出参数，流</param>
					/// <returns></returns>
					virtual ev_void toStream( _out EarthView::World::Core::CDataStream & stream ) const;
					/// <summary>
					/// 将专题图输出为xml字符串
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回xml字符串</returns>
					EVString toXML() const;
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

					virtual ev_void onBeforeQuery( EarthView::World::Spatial::GeoDataset::IFeatureClass *fc,EarthView::World::Spatial::GeoDataset::IQueryFilter * filter );
					virtual ev_void onAfterQuery( EarthView::World::Spatial::GeoDataset::IFeatureSelection *fs, EarthView::World::Spatial::Geometry::IGeometry *dst );

                ev_private:
					ITheme( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					ITheme();
				ev_internal:
					virtual ev_void fromStream( EarthView::World::Core::CDataStream& stream );
				private:
					ITheme(ITheme & theme);
				};
			}
		}
	}
}

#endif
