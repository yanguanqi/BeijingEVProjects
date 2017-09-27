#ifndef EARTHVIEW_WORLD_SPATIAL2D_ATLAS_MAPSELECTION_H
#define EARTHVIEW_WORLD_SPATIAL2D_ATLAS_MAPSELECTION_H

#include "spatial2datlas/spatial2datlasconfig.h"
#include "spatialinterface/imapselection.h"
#include "spatialinterface/ilayer.h"
namespace EarthView{ namespace World{ namespace Spatial{ namespace Atlas{ class IMap;}}}}

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Atlas{
				class CLayerSelection;
				/// <summary>
				/// 地图选择类
				/// </summary>
				class EV_SPATIAL2DATLAS_DLL CMapSelection : public EarthView::World::Spatial::Atlas::IMapSelection
				{
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CMapSelection();

				public:
					/// <summary>
					/// 获取地图中选中要素的数量
					/// </summary>
					/// <param name=""></param>
					/// <returns>个数</returns>
					
					ev_uint32 getSelectionCount() const;
					/// <summary>
					/// 获取地图选择集中图层的数量
					/// </summary>
					/// <param name=""></param>
					/// <returns>个数</returns>

					ev_uint32 getSelectionLayerCount() const;
					/// <summary>
					/// 获取指定索引的图层选择集
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns>图层选择集</returns>
					
					EarthView::World::Spatial::Atlas::ILayerSelection * getLayerSelection( _in ev_uint32 index ) const;
					/// <summary>
					/// 获取指定索引的图层
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns>图层</returns>
					EarthView::World::Spatial::Atlas::ILayer * getLayer( _in ev_uint32 index ) const;

					/// <summary>
					/// 获取指定图层的图层选择集
					/// </summary>
					/// <param name="pLayer">图层</param>
					/// <returns>图层选择集</returns>
					EarthView::World::Spatial::Atlas::ILayerSelection * getLayerSelection( EarthView::World::Spatial::Atlas::ILayer* pLayer ) const;
					/// <summary>
					/// 查询是否存在该图层选择集记录
					/// </summary>
					/// <param name="layer">图层</param>
					/// <returns>存在返回true，否则返回false</returns>	
					ev_bool exist(EarthView::World::Spatial::Atlas::ILayer* layer)const;
					/// <summary>
					/// 清空地图选择集
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					ev_void clearSelection();

				protected:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CMapSelection( EarthView::World::Spatial::Atlas::IMap* map );
					EarthView::World::Spatial::Atlas::IMap* mMap;
					map<EarthView::World::Spatial::Atlas::ILayer*,EarthView::World::Spatial::Atlas::ILayerSelection*> m_vecSelection;
				ev_private:
					CMapSelection( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CMapSelection )

					friend class CMap;
				};
			}
		}
	}
}
#endif

