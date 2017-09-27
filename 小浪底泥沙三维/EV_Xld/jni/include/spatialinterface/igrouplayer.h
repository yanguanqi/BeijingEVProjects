#ifndef EARTHVIEW_WORLD_SPATIAL_ATLAS_IGROUPLAYER_H
#define EARTHVIEW_WORLD_SPATIAL_ATLAS_IGROUPLAYER_H

#include "ilayer.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Atlas{
				class EV_INTERFACE_DLL IGroupLayer : public EarthView::World::Spatial::Atlas::ILayer
				{
				public:
					IGroupLayer();
					~IGroupLayer();

				public:
					/// <summary>
					/// 添加图层
					/// </summary>
					/// <param name="layer">待添加的图层</param>
					/// <returns></returns>
					virtual ev_void add( _in EarthView::World::Spatial::Atlas::ILayer *ref_layer );
					/// <summary>
					/// 插入图层
					/// </summary>
					/// <param name="index">图层插入的位置</param>
					/// <param name="layer">待插入的图层</param>
					/// <returns></returns>
					virtual ev_void insert( _in ev_uint32 index, _in EarthView::World::Spatial::Atlas::ILayer *ref_layer );
					/// <summary>
					/// 移除指定索引处的图层
					/// </summary>
					/// <param name="index">待删除图层的索引</param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::Atlas::ILayer* remove( _in ev_uint32 index );
					/// <summary>
					/// 删除所有的图层
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void removeAll();
					/// <summary>
					/// 移动图层
					/// </summary>
					/// <param name="oldIndex">图层原来的索引</param>
					/// <param name="newIndex">目标索引</param>
					/// <returns></returns>
					virtual ev_void move( _in ev_uint32 oldIndex, _in ev_uint32 newIndex );
					/// <summary>
					/// 图层个数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_uint32 getCount() const;
					/// <summary>
					/// 获取指定索引处的图层
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns>图层</returns>
					virtual EarthView::World::Spatial::Atlas::ILayer* getLayer( _in ev_uint32 index ) const;
					/// <summary>
					/// 获取与指定数据集相关联的图层
					/// </summary>
					/// <param name="dataset">数据集</param>
					/// <returns>图层</returns>
					virtual EarthView::World::Spatial::Atlas::ILayer* getRelatedLayer( _in const EarthView::World::Spatial::GeoDataset::IDataset* dataset ) const;
					/// <summary>
					/// 获取指定名字并且在指定数据源ds中的数据集
					/// </summary>
					/// <param name="ds">数据源</param>
					/// <param name="name">数据集的名称</param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset( _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in const EVString& name ) const;
					/// <summary>
					/// 图层的索引
					/// </summary>
					/// <param name="layer">图层</param>
					/// <returns>索引</returns>
					virtual ev_uint32 indexOfLayer( _in EarthView::World::Spatial::Atlas::ILayer* layer ) const;
					/// <summary>
					/// 判断图层是否被包含
					/// </summary>
					/// <param name="layer">图层</param>
					/// <returns>如果存在则返回true,反之则否</returns>
					virtual ev_bool isExist( _in const EarthView::World::Spatial::Atlas::ILayer* layer ) const;
					///<summary>
					///获取所有的数据层
					///</summary>
					//virtual ev_void getAllDataLayers(list<ILayer*>& layers, ev_bool isContainUnvisLayer = false) const;
					///<summary>
					///设置透明度
					///</summary>
					virtual ev_void setTransparentValue(ev_uint8 transparent);
					///<summary>
					///获取透明度值
					///</summary>
					virtual ev_uint8 getTransparentValue() const;
				ev_private:
					IGroupLayer( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( IGroupLayer )
				};
			}
		}
	}
}
#endif


