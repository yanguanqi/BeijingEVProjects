#ifndef EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CMATH3DSLOPE_H
#define EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CMATH3DSLOPE_H

#include "spatial3danalysisobject_config.h"
#include "math3dbaseobject.h"
#include "core/core_common.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Analysis
			{
				/// <summary>
				/// 坡度分析计算类
				/// 计算给定范围内所有点的坡度值，并进行统计
				/// </summary>
				class EV_ANALYSIS3DOBJECT_DLL CMath3DSlope : public EarthView::World::Spatial3D::Analysis::CMath3DBaseObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					CMath3DSlope(_in EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pAltitude3DListener">高度控件</param>
					CMath3DSlope(EarthView::World::Spatial3D::Analysis::CAltitude3DListener* ref_pAltitude3DListener);
					/// <summary>
					/// 析构函数
					/// </summary>
					~CMath3DSlope();
					/// <summary>
					/// 设置是否停止计算
					/// </summary>
					/// <param name="val"></param>
					ev_void setNeedStop(ev_bool val);
					/// <summary>
					/// 获取是否停止计算
					/// </summary>
					/// <returns></returns>
					ev_bool getNeedStop();
					/// <summary>
					/// 设置采样间隔距离
					/// </summary>
					/// <param name="value">采样间隔距离</param>
					ev_void setInterval(const ev_real64& value);
					/// <summary>
					/// 获取采样间隔距离
					/// </summary>
					/// <returns>采样间隔距离</returns>
					ev_real64 getInterval() const;
					/// <summary>
					/// 获取坡度分布
					/// </summary>
					/// <returns>坡度分布数组</returns>
					EarthView::World::Core::RealVector& getSlopeDistributing();
					/// <summary>
					/// 获取坡度值列表
					/// </summary>
					/// <returns>坡度值列表</returns>
					EarthView::World::Core::RealVector& getSlopeValues();
					/// <summary>
					/// 获取坡向值列表
					/// </summary>
					/// <returns>坡向值列表</returns>
					EarthView::World::Core::RealVector& getAspectValues();
					/// <summary>
					/// 获取采样点列表
					/// </summary>
					/// <returns>采样点列表</returns>
					EarthView::World::Spatial::Math::VertexList& getSlopePositionList();
					/// <summary>
					/// 获取X方向插值个数
					/// </summary>
					/// <returns>X方向插值个数</returns>
					ev_int32 getInterpolationCountX();
					/// <summary>
					/// 获取Y方向插值个数
					/// </summary>
					/// <returns>Y方向插值个数</returns>
					ev_int32 getInterpolationCountY();
					/// <summary>
					/// 获取计算进度值
					/// </summary>
					/// <returns>计算进度值</returns>
					ev_int32 getProgressV();
					/// <summary>
					/// 统计坡度
					/// </summary>
					/// <param name="boundaryPts">边界点列表</param>
					/// <param name="divisions">坡度级别</param>
					ev_void calcuSlopeDistributing(_in EarthView::World::Spatial::Math::VertexList& boundaryPts,_in const EarthView::World::Core::RealVector& divisions);

				protected:
					/// <summary>
					/// 初始化
					/// </summary>
					virtual ev_void initialize();
					/// <summary>
					/// 计算边界值以及跨度
					/// </summary>
					/// <param name="boundaryPts">边界点列表</param>
					ev_void calcuBoundaryAndSpan(_in EarthView::World::Spatial::Math::VertexList& boundaryPts);
					/// <summary>
					/// 计算所有点的坡度
					/// </summary>
					/// <param name="boundaryPts">边界点列表</param>
					ev_void calcuSlopes(_in EarthView::World::Spatial::Math::VertexList& boundaryPts);
					/// <summary>
					/// 计算坡向
					/// </summary>
					/// <param name=""></param>
					ev_real64 calcuSlopeAspect(ev_real64 dx, ev_real64 dy);
					/// <summary>
					/// 坡度分布结果
					/// </summary>
					EarthView::World::Core::RealVector mSlopeDistributing;
					/// <summary>
					/// 坡度列表
					/// </summary>
					EarthView::World::Core::RealVector mSlopeList;
					/// <summary>
					/// 坡向值列表
					/// </summary>
					EarthView::World::Core::RealVector mAspectList;
					/// <summary>
					/// 坡度采样点坐标
					/// </summary>
					EarthView::World::Spatial::Math::VertexList mSlopePositionList;
					/// <summary>
					/// X方向插值个数
					/// </summary>
					ev_int32 mInterpolationCountX;
					/// <summary>
					/// Y方向插值个数
					/// </summary>
					ev_int32 mInterpolationCountY;
					/// <summary>
					/// 采样间隔
					/// </summary>
					ev_real64 mInterval;
					/// <summary>
					/// 东
					/// </summary>
					ev_real64 mEast;
					/// <summary>
					/// 西
					/// </summary>
					ev_real64 mWest;
					/// <summary>
					/// 北
					/// </summary>
					ev_real64 mNorth;
					/// <summary>
					/// 南
					/// </summary>
					ev_real64 mSouth;
					/// <summary>
					/// X方向跨度
					/// </summary>
					ev_real64 mSpanX;
					/// <summary>
					/// Y方向跨度
					/// </summary>
					ev_real64 mSpanY;
					/// <summary>
					/// 计算进度值
					/// </summary>
					ev_int32 mProgressV;
					/// <summary>
					/// 是否需要停止计算
					/// </summary>
					ev_bool mNeedStop;
				};
			}
		}
	}
}
#endif
