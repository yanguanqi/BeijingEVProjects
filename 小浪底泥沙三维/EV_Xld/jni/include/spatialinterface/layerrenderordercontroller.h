#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_IRENDERINGORDERCONTROLLER_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_IRENDERINGORDERCONTROLLER_H

#include "spatialinterface/config.h"
#include "core/memoryallocatedobject.h"
#include "spatialinterface/imap.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			class CXmlElement;
}}}

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Atlas{
				class EV_INTERFACE_DLL LayerRenderOrderController : public EarthView::World::Core::CAllocatedObject
				{
				public:

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					LayerRenderOrderController(const EarthView::World::Spatial::Atlas::IMap *pMap);

					/// <summary>
					/// 虚构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~LayerRenderOrderController();

					/// <summary>
					/// 判断是否按数据图层顺序渲染
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果按数据图层顺序渲染，返回true,否则返回false</returns>

					virtual ev_bool isUseCustomOrder() const; 

					/// <summary>
					/// 设置是否按数据图层顺序渲染
					/// </summary>
					/// <param name="bControl">是否按数据图层顺序渲染</param>
					/// <returns></returns>
					virtual ev_void setUseCustomOrder(ev_bool bControl); 

					/// <summary>
					/// 向地图中追加一个图层
					/// </summary>
					/// <param name="layer">要追加的图层</param>
					/// <returns></returns>
					virtual ev_void addLayer( _in EarthView::World::Spatial::Atlas::ILayer *layer );

					/// <summary>
					/// 插入一个图层到指定索引处
					/// </summary>
					/// <param name="index">索引</param>
					/// <param name="layer">图层</param>
					/// <returns></returns>
					virtual ev_void insertLayer( _in ev_uint32 index, _in EarthView::World::Spatial::Atlas::ILayer * layer);

					/// <summary>
					/// 移除指定索引的图层
					/// </summary>
					/// <param name="index">要移除图层的索引</param>
					/// <returns></returns>
					/// <memo>不删除内存</memo>
					virtual ev_void removeLayer( _in ev_uint32 index );

					/// <summary>
					/// 移除指定的图层
					/// </summary>
					/// <param name="pLayer">要移除的图层</param>
					/// <returns></returns>
					/// <memo>不删除内存</memo>
					virtual ev_void removeLayer(EarthView::World::Spatial::Atlas::ILayer *pLayer);

					/// <summary>
					/// 移除地图中的所有图层
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo>不删除内存</memo>
					virtual ev_void removeAll();

					/// <summary>
					/// 移动指定索引处的图层到新的索引处
					/// </summary>
					/// <param name="oldIndex">之前的索引</param>
					/// <param name="newIndex">目标索引</param>
					/// <returns></returns>
					virtual ev_void moveLayer( _in ev_uint32 oldIndex, _in ev_uint32 newIndex );

					/// <summary>
					/// 获取图层
					/// </summary>
					/// <param name="index">数据图层的索引</param>
					/// <returns>数据图层</returns>
					virtual EarthView::World::Spatial::Atlas::LayerList getLayerList() const;

					/// <summary>
					/// 重置渲染顺序
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void resetOrder();

					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);

					virtual EarthView::World::Core::CXmlElement toXmlElement() const;
				ev_private:
					LayerRenderOrderController( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( LayerRenderOrderController )
				private:
					ev_bool isExist(EarthView::World::Spatial::Atlas::ILayer *pLayer);
				private:
					ev_bool m_bUseCustom;
					EarthView::World::Spatial::Atlas::LayerList m_CustomLayerList;
				
					const EarthView::World::Spatial::Atlas::IMap* m_pMap;
				};
			}
		}
	}
}
#endif


