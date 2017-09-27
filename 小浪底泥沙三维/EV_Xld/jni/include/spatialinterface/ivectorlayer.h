#ifndef EARTHVIEW_WORLD_SPATIAL_ATLAS_IVECTORLAYER_H
#define EARTHVIEW_WORLD_SPATIAL_ATLAS_IVECTORLAYER_H

#include "spatialinterface/ilayer.h"
#include "spatialinterface/ispatialreference.h"
#include "spatialinterface/idataset.h"
#include "spatialinterface/itheme.h"
#include "spatialinterface/ispatialfilter.h"
#include "spatialinterface/ilabelproperty.h"

// using namespace EarthView::World::Spatial::Theme;

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Atlas{
				//迁移到了EarthView::World::Spatial::Atlas::ILayer下
				/*enum EVSelectionResultType
				{
					SRT_New			= 0,
					SRT_Add			= 1,
					SRT_Sub			= 2,
					SRT_And			= 3,
					SRT_XOR			= 4
				};*/

				class ILayerSelection;
				/// <summary>
				/// 矢量图层基类
				/// </summary>
				class EV_INTERFACE_DLL IVectorLayer :
					public EarthView::World::Spatial::Atlas::ILayer
				{
				public:		
					/// <summary>
					/// 默认析构函数      
					/// </summary>
					virtual ~IVectorLayer();
				public:
					/// <summary>
					/// 获取要素集
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回要素集</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset();
					/// <summary>
					/// 设置要素集
					/// </summary>
					/// <param name="dataset">要素集</param>
					/// <returns></returns>
					virtual ev_void setDataset( EarthView::World::Spatial::GeoDataset::IDataset * ref_dataset );
					/// <summary>
					/// 获取显示字段名
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回字段名</returns>
					virtual EVString getDisplayField() const;
					/// <summary>
					/// 设置显示字段
					/// </summary>
					/// <param name="fieldName">显示字段</param>
					/// <returns></returns>
					virtual ev_void setDisplayField(const EVString& fieldName);
					/// <summary>
					/// 获取专题图信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回专题图信息</returns>
					virtual EarthView::World::Spatial::Theme::ITheme * getTheme() const;
					/// <summary>
					/// 设置专题图信息
					/// </summary>
					/// <param name="theme">专题图信息</param>
					/// <returns></returns>
					virtual ev_void setTheme( _in const EarthView::World::Spatial::Theme::ITheme *theme );
					/// <summary>
					/// 获取是否显示提示
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool isShowTip() const;
					/// <summary>
					/// 设置是否显示提示
					/// </summary>
					/// <param name="show">是否显示</param>
					/// <returns></returns>
					virtual ev_void setShowTip(ev_bool show) ;
					/// <summary>
					/// 图层选择
					/// </summary>
					/// <param name="filter">选择过滤条件</param>
					/// <param name="type">选择类型</param>
					/// <returns></returns>
					virtual ev_void select( EarthView::World::Spatial::GeoDataset::IQueryFilter *filter, EarthView::World::Spatial::Atlas::EVSelectionResultType type );
					/// <summary>
					/// 清空图层选择
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void clearSelection();
					/// <summary>
					/// 获取图层选择
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层选择</returns>
					virtual EarthView::World::Spatial::Atlas::ILayerSelection * getLayerSelection();
					/// <summary>
					/// 获取图层标签属性
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层标签属性</returns>
					virtual EarthView::World::Spatial::Display::ILabelProperty * getLayerLabelProperty() const;
					/// <summary>
					/// 设置图层显示过滤条件
					/// </summary>
					/// <param name="filter">过滤条件</param>
					/// <returns></returns>

					virtual ev_void setDisplayFilter(const EVString & filter);
					/// <summary>
					/// 获取图层显示过滤条件
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回过滤条件</returns>

					virtual EVString getDisplayFilter() const;

				ev_private:
					IVectorLayer( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					IVectorLayer();
					C_DISABLE_COPY( IVectorLayer )
				};
			}
		}
	}
}

#endif
