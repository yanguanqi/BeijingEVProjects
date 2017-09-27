#ifndef EARTHVIEW_WORLD_SPATIAL2D_ATLAS_MAPSET_H
#define EARTHVIEW_WORLD_SPATIAL2D_ATLAS_MAPSET_H

#include "spatial2datlasconfig.h"

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Atlas{
				class CMap;
				/// <summary>
				/// 地图集
				/// </summary>
				class EV_SPATIAL2DATLAS_DLL CMapSet : public EarthView::World::Core::CBaseObject
				{
				public:	
					/// <summary>
					/// 默认构造函数
					/// </summary>
					CMapSet();
					/// <summary>
					/// 默认析构函数
					/// </summary>
					~CMapSet();

				public:
					/// <summary>
					/// 获取地图集合中地图的个数
					/// </summary>
					/// <param name=""></param>
					/// <returns>地图个数</returns>
					
					ev_uint32 getMapCount() const;
					/// <summary>
					/// 获取指定索引处的地图
					/// </summary>
					/// <param name="index">地图索引</param>
					/// <returns>地图</returns>
					
					EarthView::World::Spatial2D::Atlas::CMap * getMap( _in ev_uint32 index ) const;
					/// <summary>
					/// 把地图添加到地图集合中
					/// </summary>
					/// <param name="map">待添加的地图指针</param>
					/// <returns>如果添加成功则返回true,反之则否</returns>
	
					ev_bool add( _in EarthView::World::Spatial2D::Atlas::CMap *ref_map );
					/// <summary>
					/// 添加一个地图
					/// </summary>
					/// <param name="index">插入的位置</param>
					/// <param name="map">待插入的地图</param>
					/// <returns>如果插入成功则返回true,反之则否</returns>
				
					ev_bool insert( _in ev_uint32 index, _in EarthView::World::Spatial2D::Atlas::CMap *ref_map );
					/// <summary>
					/// 移除地图索引处的地图
					/// </summary>
					/// <param name="index">待移除地图的索引</param>
					/// <returns>如果移除成功则返回true,反之则否</returns>
					
					ev_bool remove( _in ev_uint32 index );
					/// <summary>
					/// 把所有地图都移除掉
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					ev_void removeAll();
					/// <summary>
					/// 移动地图的位置
					/// </summary>
					/// <param name="oldIndex">地图原来的索引</param>
					/// <param name="newIndex">地图的目标索引</param>
					/// <returns>移动成功则返回true,反之则否</returns>
					
					ev_bool move( _in ev_uint32 oldIndex, _in ev_uint32 newIndex );
					/// <summary>
					/// 获取当前地图的索引
					/// </summary>
					/// <param name=""></param>
					/// <returns>地图索引</returns>
					
					ev_uint32 getCurrentMapIndex() const;
					/// <summary>
					/// 设置当前地图的索引
					/// </summary>
					/// <param name="index">地图的索引</param>
					/// <returns></returns>
					
					ev_void setCurrentMapIndex( _in ev_uint32 index );
					/// <summary>
					/// 从流中恢复地图集
					/// </summary>
					/// <param name="stream">地图集的流</param>
					/// <returns></returns>
					
					ev_void load( _in EarthView::World::Core::CDataStream &stream );
					/// <summary>
					/// 从xml中恢复地图集
					/// </summary>
					/// <param name="xml">xml</param>
					/// <returns></returns>
					
					ev_void load( _in const EVString &xml );
					/// <summary>
					/// 把地图集的配置保存到流中
					/// </summary>
					/// <param name="stream">流对象</param>
					/// <returns></returns>
					
					ev_void toStream( _out EarthView::World::Core::CDataStream &stream ) const;
					/// <summary>
					/// 把地图集保存到xml中
					/// </summary>
					/// <param name=""></param>
					/// <returns>xml</returns>
					
					EVString toXML() const;

				ev_private:
					CMapSet( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CMapSet )

					ev_vector<EarthView::World::Spatial2D::Atlas::CMap*> m_vecMap;
					ev_uint32 m_nCurrentMapIndex;

				};
			}
		}
	}
}
#endif

