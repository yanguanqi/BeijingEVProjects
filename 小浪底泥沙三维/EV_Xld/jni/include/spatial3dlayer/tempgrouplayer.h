#ifndef _TEMP_GROUP_LAYER_H
#define _TEMP_GROUP_LAYER_H

#include <core/memoryallocatedobject.h>
#include <core/name_value_pair.h>
#include <geometry3d/iglobelayer.h>

#include "spatial3dlayer/3dlayerconfig.h"


namespace EarthView{
	namespace World{
		namespace Graphic{
			class CCamera;
			class CSceneManager;
		}
	}
}

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Atlas
			{				
				class CKmlLayer;

				/// <summary>
				/// CTempGroupLayer(临时图层组)管理临时图层，任何EarthView::World::Spatial3D::Atlas::IGlobeLayer的派生类都可以加入其中，但不会被保存到工程文件
				/// </summary>
				class EV_3DLAYER_DLL CTempGroupLayer
					:public EarthView::World::Spatial3D::Atlas::IGlobeLayer
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CTempGroupLayer(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CTempGroupLayer();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="name">图层名</param>
					/// <returns></returns>
					CTempGroupLayer(const EVString& name);		
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CTempGroupLayer();

				public:
					/// <summary>
					/// 获取图层的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层的类型</returns>
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType()const;
					/// <summary>
					/// 获取瓦片
					/// </summary>
					/// <param name="level">瓦片级别</param>
					/// <param name="row">瓦片行号</param>
					/// <param name="col">瓦片列号</param>
					/// <param name="tile">返回的瓦片数据信息</param>
					/// <returns>是否成功</returns>
					virtual ev_bool getTile(ev_int32 level,ev_int32 row,ev_int32 col,_inout EarthView::World::Spatial::CTileData& tile);
					
					/// <summary>
					/// 获取瓦片
					/// </summary>
					/// <param name="minX">瓦片经纬度范围minX</param>
					/// <param name="minY">瓦片经纬度范围minY</param>
					/// <param name="maxX">瓦片经纬度范围maxX</param>
					/// <param name="maxY">瓦片经纬度范围maxY</param>
					/// <param name="tile">返回的瓦片数据信息</param>
					/// <returns>是否成功</returns>
					virtual ev_bool getTile(Real minX,Real minY,Real maxX,Real maxY,_inout EarthView::World::Spatial::CTileData& tile);

					/// <summary>
					/// 添加一个图层
					/// </summary>
					/// <param name="layer">图层</param>
					/// <returns></returns>
					virtual ev_bool addLayer(EarthView::World::Spatial3D::Atlas::IGlobeLayer* ref_layer);
					/// <summary>
					/// 插入一个图层
					/// </summary>
					/// <param name="pos">插入的位置</param>
					/// <param name="layer">图层</param>
					/// <returns></returns>
					virtual ev_bool insertLayer(ev_uint32 index,EarthView::World::Spatial3D::Atlas::IGlobeLayer* ref_layer);
					/// <summary>
					/// 删除一个图层
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns>是否成功</returns>
					virtual ev_bool removeLayer(ev_uint32 index);
					/// <summary>
					/// 删除一个图层
					/// </summary>
					/// <param name="layer">图层</param>
					/// <returns>是否成功</returns>
					virtual ev_bool removeLayer(EarthView::World::Spatial3D::Atlas::IGlobeLayer* layer);
					/// <summary>
					/// 获取图层的数量
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层的数量</returns>
					virtual ev_uint32 getLayerCount() const;
					/// <summary>
					/// 获取图层的索引
					/// </summary>
					/// <param name="layer">图层图层</param>
					/// <returns>图层的索引</returns>
					virtual ev_int32 getLayerIndex(const EarthView::World::Spatial3D::Atlas::IGlobeLayer* layer) const;
					/// <summary>
					/// 获取图层
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns>图层</returns>
					virtual EarthView::World::Spatial3D::Atlas::IGlobeLayer* getLayer(ev_uint32 index) const;
					/// <summary>
					/// 移动图层顺序
					/// </summary>
					/// <param name="index">索引</param>
					/// <param name="pos">移动后的顺序</param>
					/// <returns>是否成功</returns>
					ev_bool moveLayer(ev_uint32 index,ev_uint32 pos);
					/// <summary>
					/// 按照默认的方法排序 (瓦片时间)
					/// </summary>
					/// <param name=""></param>
					/// <returns>是否成功</returns>
					ev_void sortLayerDefault();
					
					/// <summary>
					/// 通知图层增加
					/// </summary>
					/// <param name="pSceneMgr">场景管理器</param>
					/// <returns></returns>
					virtual ev_void _notifyLayerAdd(EarthView::World::Graphic::CSceneManager* pSceneMgr);
					/// <summary>
					/// 通知图层移除
					/// </summary>
					/// <param name="pSceneMgr">场景管理器</param>
					/// <returns></returns>
					virtual ev_void _notifyLayerRemoved_impl(EarthView::World::Graphic::CSceneManager* pSceneMgr);

					/// <summary>
					/// 数据集变更通知
					/// </summary>
					/// <param name="strDataSourceName">数据源名称</param>
					/// <param name="strDatasetName">数据集名称</param>
					/// <returns></returns>
					virtual ev_void _notifyDataChanged(const EVString& strDataSourceName,const EVString& strDatasetName, EarthView::World::Core::CEvent* pEvent);
ev_internal:
					/// <summary>
					/// Globe刷新时调用的函数
					/// </summary>
					/// <param name="camera">当前的相机</param>
					/// <param name="updateType">刷新类型</param>
					/// <returns></returns>
					virtual ev_void _notifyRefreshed_impl(const EarthView::World::Graphic::CCamera* camera,EarthView::World::Spatial3D::Atlas::LayerRefreshFactor updateType);

				protected:
					EarthView::World::Core::MemoryDataStreamPtr drawImages(list<EarthView::World::Core::DataStreamPtr>& images,ev_bool dds);
				private:
					CTempGroupLayer(const CTempGroupLayer& obj);

					ev_bool mergeTiles(ev_int32 level, ev_int32 row, ev_int32 col, EarthView::World::Core::MemoryDataStreamPtr& imageStream);
					ev_bool mergeTiles(Real minX,Real minY,Real maxX,Real maxY,EarthView::World::Core::MemoryDataStreamPtr& imageStream);
					ev_bool insertLayer_nolock(ev_uint32 pos,EarthView::World::Spatial3D::Atlas::IGlobeLayer* layer);

					friend class CFeatureGroupLayerFactory;
				protected:
					typedef list<EarthView::World::Spatial3D::Atlas::IGlobeLayer*> FeatureLayers;
					FeatureLayers mFeatureLayers;
					const EarthView::World::Graphic::CCamera* mpCamera;

					mutable EarthView::World::Core::CReadWriteLock mLock;

					CTempGroupLayer* mParentLayer;
				};

			}
		}
	}
}




#endif
