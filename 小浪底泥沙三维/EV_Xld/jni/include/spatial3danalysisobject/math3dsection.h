#ifndef EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CMATH3DSECTION_H
#define EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CMATH3DSECTION_H

#include "spatial3danalysisobject/math3dbaseobject.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Analysis
			{
				/// <summary>
				/// 断面分析结果类
				/// </summary>
				class EV_ANALYSIS3DOBJECT_DLL CSectionLineInfo : public EarthView::World::Core::CBaseObject 
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					CSectionLineInfo(_in EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					CSectionLineInfo();
					/// <summary>
					/// 析构函数
					/// </summary>
					~CSectionLineInfo();
					/// <summary>
					/// 所有插值点的地理坐标（包括端点）
					/// </summary>
					EarthView::World::Spatial::Math::VertexList mGeoPoints;
					/// <summary>
					/// 所有插值点的坡度,与mGeoPoints对应（不包括最后一个点）
					/// <summary>
					EarthView::World::Core::RealVector mSlopeVec;
					/// <summary>
					/// 最大坡度
					/// </summary>
					ev_real64 mMaxSlope;
					/// <summary>
					/// 最小坡度
					/// </summary>
					ev_real64 mMinSlope;
					/// <summary>
					/// 最大高程
					/// </summary>
					ev_real64 mMaxAltitude;
					/// <summary>
					/// 最小高程
					/// </summary>
					ev_real64 mMinAltitude;
					/// <summary>
					/// 最大坡度索引,指向mGeoPoints中的点
					/// </summary>
					ev_int32 mMaxSlopeIndex;
					/// <summary>
					/// 最小坡度索引,指向mGeoPoints中的点
					/// </summary>
					ev_int32 mMinSlopeIndex;
					/// <summary>
					/// 最大高程点索引,指向mGeoPoints中的点
					/// </summary>
					ev_int32 mMaxAltitudeIndex;
					/// <summary>
					/// 最小高程点索引,指向mGeoPoints中的点
					/// </summary>
					ev_int32 mMinAltitudeIndex;
					/// <summary>
					/// 最大坡度点坐标
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 mMaxSlopePoint;
					/// <summary>
					/// 最小坡度点坐标
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 mMinSlopePoint;
					/// <summary>
					/// 最大高程点坐标
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 mMaxAltitudePoint;
					/// <summary>
					/// 最小高程点坐标
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 mMinAltitudePoint;
					/// <summary>
					/// 贴地距离
					/// </summary>
					ev_real64 mClampedDistance;
					/// <summary>
					/// 直线距离
					/// </summary>
					ev_real64 mStraightDistance;
					/// <summary>
					/// 投影距离
					/// </summary>
					ev_real64 mProjectDistance;
				};

				/// <summary>
				/// 三维分析之断面分析算法
				/// </summary>
				class EV_ANALYSIS3DOBJECT_DLL CMath3DSection : public EarthView::World::Spatial3D::Analysis::CMath3DBaseObject
				{				
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					CMath3DSection(_in EarthView::World::Core::CNameValuePairList* pList);

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pAltitude3DListener">高度控件</param>
					CMath3DSection(EarthView::World::Spatial3D::Analysis::CAltitude3DListener* ref_pAltitude3DListener);
					/// <summary>
					/// 析构函数
					/// </summary>
					~CMath3DSection();
					/// <summary>
					/// 计算断面分析结果
					/// </summary>
					/// <param name="inPts">点列表</param>
					/// <param name="sectionInfo">断面分析结果</param>
					ev_void calcuSectionInfo(_in const EarthView::World::Spatial::Math::VertexList& inPts,_out EarthView::World::Spatial3D::Analysis::CSectionLineInfo& sectionInfo);
					/// <summary>
					/// 计算两点之间的断面分析结果
					/// </summary>
					/// <param name="detail">控制断面分析结果信息精确程度</param>
					/// <param name="interval">采样间隔距离</param>
					/// <param name="p0">输入点,地理坐标（经度、纬度、高程或0）</param>
					/// <param name="p1">输入点,地理坐标（经度、纬度、高程或0）</param>
					/// <param name="vertices">插值后的渲染点列表</param>
					/// <param name="pSectionInfo">断面分析结果指针</param>
					ev_void calcuSectionLineInfo(_in ev_bool detail,_inout ev_real64& interval,_in EarthView::World::Spatial::Math::CVector3 p0,_in EarthView::World::Spatial::Math::CVector3 p1,
						_out EarthView::World::Spatial::Math::VertexList& vertices,_out EarthView::World::Spatial3D::Analysis::CSectionLineInfo* pSectionInfo);
					/// <summary>
					/// 服务器端计算
					/// </summary>
					/// <param name="inPts">点列表</param>
					/// <param name="sectionInfo">断面分析结果</param>
					ev_void calculateOnServer(_in const EarthView::World::Spatial::Math::VertexList& inPts, _out EarthView::World::Spatial3D::Analysis::CSectionLineInfo& sectionInfo);
				};
			}
		}
	}
}
#endif
