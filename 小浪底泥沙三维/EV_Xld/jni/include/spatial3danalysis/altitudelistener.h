#ifndef EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CALTITUDELISTENER_H
#define EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CALTITUDELISTENER_H

#include "analysis3d_config.h"
#include "spatial3danalysisobject/altitude3dlistener.h"
#include "spatial3dengine/geoscenemanager.h"
#include "spatial3dlayer/iterrainlayer.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Analysis
			{
				/// <summary>
				/// 默认高程类，继承自EarthView::World::Spatial3D::Analysis::CAltitude3DListener，
				/// 用户可根据情况重写此类
				/// </summary>
				class EV_ANALYSIS3D_DLL CAltitudeListener : public EarthView::World::Spatial3D::Analysis::CAltitude3DListener
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					CAltitudeListener(_in EarthView::World::Core::CNameValuePairList* pList);

				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					CAltitudeListener();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pManager">地球场景管理器</param>
					CAltitudeListener(EarthView::World::Spatial3D::CGeoSceneManager* ref_pManager);
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pTerrainLayer"> 地形图层或图层组CTerrainLayer、CLocalTerrainLayer、CTerrainGroupLayer</param>
					CAltitudeListener(EarthView::World::Spatial3D::Atlas::ITerrainLayer* ref_pTerrainLayer);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					~CAltitudeListener();
					/// <summary>
					/// 根据经纬度获取高程值
					/// </summary>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">精度</param>
					/// <returns>高程值</returns>
					virtual ev_real64 getAltitude(ev_real64 latitude,ev_real64 longitude) const;
					/// <summary>
					/// 设置场景管理器
					/// </summary>
					/// <param name="ref_pManager">场景管理器</param>
					ev_void setGeoSceneManager(EarthView::World::Spatial3D::CGeoSceneManager* ref_pManager);
					/// <summary>
					/// 设置地形图层或图层组
					/// </summary>
					/// <param name="ref_pTerrainLayer">地形图层或图层组</param>
					ev_void setTerrainLayer(EarthView::World::Spatial3D::Atlas::ITerrainLayer* ref_pTerrainLayer);

				protected:
					/// <summary>
					/// 场景管理器
					/// </summary>
					EarthView::World::Spatial3D::CGeoSceneManager* mpGeoSceneManager;
					/// <summary>
					/// 地形图层或图层组
					/// </summary>
					EarthView::World::Spatial3D::Atlas::ITerrainLayer* mpTerrainLayer;
				};
			}
		}
	}
}

#endif
