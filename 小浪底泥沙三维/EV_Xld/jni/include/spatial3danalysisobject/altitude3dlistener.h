#ifndef EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CALTITUDE3DLISTENER_H
#define EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CALTITUDE3DLISTENER_H

#include "spatial3danalysisobject_config.h"
#include "core/memoryallocatedobject.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Analysis
			{
				/// <summary>
				/// 获取高程枚举
				/// </summary>
				enum GetAltitudeStyle
				{
					/// <summary>
					/// 获取当前缓存中最高精度的高程(memorycache -> dbcache)
					/// 调用geoscenemanager.h中的virtual Real getBestHeightAt(Real latitude,Real longitude);
					/// 该模式效率最高，主要用于采点过程中的渲染
					/// </summary>
					GAS_Draw,
					/// <summary>
					/// 获取最高精度的高程，按照如下规则查找瓦片数据memorycache -> dbcache ->server
					/// 调用geoscenemanager.h中的virtual Real getHeightAt(Real latitude,Real longitude,ev_real32 targetSamplesPerDegrees);
					/// targetSamplesPerDegrees表示每度采样数，计算获取高程的瓦片级别，-1表示最高级别
					/// 该模式下计算精度最高，targetSamplesPerDegrees取定值-1.0
					/// </summary>
					GAS_CalcuHighest,
					/// <summary>
					/// 获取指定级别的高程，按照如下规则查找瓦片数据memorycache -> dbcache ->server
					/// 调用geoscenemanager.h中的virtual Real getHeightAt(Real latitude,Real longitude,ev_real32 targetSamplesPerDegrees);
					/// targetSamplesPerDegrees表示每度采样数，计算获取高程的瓦片级别，-1表示最高级别
					/// 该模式下的计算精度根据用户设置的插值间隔距离确定,targetSamplesPerDegrees的值需根据插值间隔距离确定
					/// </summary>
					GAS_CalcuAdapt
				};

				/// <summary>
				/// 根据坐标值(经纬度)获取DEM数据
				/// </summary>
				class EV_ANALYSIS3DOBJECT_DLL CAltitude3DListener : public EarthView::World::Core::CBaseObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					CAltitude3DListener(_in EarthView::World::Core::CNameValuePairList *pList);

				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					CAltitude3DListener();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					~CAltitude3DListener();
					/// <summary>
					/// 根据经纬度获取指定点的高程
					/// </summary>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <returns>高程值</returns>
					virtual ev_real64 getAltitude(ev_real64 latitude,ev_real64 longitude) const;
					/// <summary>
					/// 获取高程模式
					/// </summary>
					/// <returns>获取高程模式</returns>
					EarthView::World::Spatial3D::Analysis::GetAltitudeStyle getDemMode();
					/// <summary>
					/// 设置获取高程模式
					/// </summary>
					/// <param name="value">获取高程模式</param>
					ev_void setDemMode(EarthView::World::Spatial3D::Analysis::GetAltitudeStyle value);
					/// <summary>
					/// 获取插值间隔距离
					/// </summary>
					/// <param name=""></param>
					/// <returns>插值间隔距离</returns>
					ev_real64 getInterval();
					/// <summary>
					/// 设置插值间隔距离
					/// </summary>
					/// <param name="value">插值间隔距离</param>
					ev_void setInterval(ev_real64 value);

				protected:
					/// <summary>
					/// 获取高程模式
					/// </summary>
					EarthView::World::Spatial3D::Analysis::GetAltitudeStyle mDemMode;
					/// <summary>
					/// 插值间隔距离，根据该值计算targetSamplesPerDegrees（每度采样数，-1表示最高精度），确定获取DEM的对应精度
					/// </summary>
					ev_real64 mInterval;
				};
			}
		}
	}
}
#endif
