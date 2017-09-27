#ifndef EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CMATH3DMEASURELENGTH_H
#define EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CMATH3DMEASURELENGTH_H

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
				/// 三维分析之距离测量算法
				/// </summary>
				class EV_ANALYSIS3DOBJECT_DLL CMath3DMeasureLength : public EarthView::World::Spatial3D::Analysis::CMath3DBaseObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					CMath3DMeasureLength(_in EarthView::World::Core::CNameValuePairList* pList);

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pAltitude3DListener">高度控件</param>
					CMath3DMeasureLength(EarthView::World::Spatial3D::Analysis::CAltitude3DListener* ref_pAltitude3DListener);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					~CMath3DMeasureLength();
					/// <summary>
					/// 计算两点之间的贴地距离
					/// </summary>
					/// <param name="num">插入点数目</param>
					/// <param name="p0">输入点,地理坐标（经度、纬度、高程或0）</param>
					/// <param name="p1">输入点,地理坐标（经度、纬度、高程或0）</param>
					/// <param name="vertices">插值后的点列表</param>
					/// <returns>贴地距离</returns>
					ev_real64 calcuClampedDistance(_in ev_int32 num, _in EarthView::World::Spatial::Math::CVector3 p0, _in EarthView::World::Spatial::Math::CVector3 p1, _out EarthView::World::Spatial::Math::VertexList& vertices);
					/// <summary>
					/// 计算两点之间的直线距离
					/// </summary>
					/// <param name="p0">输入点,地理坐标（经度、纬度、高程）</param>
					/// <param name="p1">输入点,地理坐标（经度、纬度、高程）</param>
					/// <returns>直线距离</returns>
					ev_real64 calcuStraightDistance(_in EarthView::World::Spatial::Math::CVector3 p0, _in EarthView::World::Spatial::Math::CVector3 p1);
					/// <summary>
					/// 计算两点之间的投影距离
					/// </summary>
					/// <param name="p0">输入点,地理坐标（经度、纬度、高程或0）</param>
					/// <param name="p1">输入点,地理坐标（经度、纬度、高程或0）</param>
					/// <returns>投影距离</returns>
					ev_real64 calcuProjectDistance(_in EarthView::World::Spatial::Math::CVector3 p0, _in EarthView::World::Spatial::Math::CVector3 p1);
					/// <summary>
					/// 计算每两个点的中点
					/// 用于渲染折线
					/// 此方法可能不用
					/// </summary>
					/// <param name="inpoints">用户采集的计算点的集合，地理坐标</param>
					/// <param name="middlepoints">每条线段的中点，世界坐标</param>
					/// <returns>true为计算成功，false为计算失败</returns>
					ev_bool calcuMiddlePoints(_in const EarthView::World::Spatial::Math::VertexList &inpoints,_out EarthView::World::Spatial::Math::VertexList &middlepoints);
					/// <summary>
					/// 获取贴地直线离散点
					/// 用于渲染贴地直线
					/// 此方法可能不用
					/// </summary>
					/// <param name="inpoints">用户采集的计算点的集合，地理坐标</param>
					/// <param name="outpoints">插值后的点的集合，世界坐标，带高程</param>
					/// <returns>true为插值成功，false为插值失败</returns>
					ev_bool calcuInterWorldPoints( _in const EarthView::World::Spatial::Math::VertexList &inpoints, _out EarthView::World::Spatial::Math::VertexList &outpoints);
					/// <summary>
					/// 服务器端计算
					/// </summary>
					/// <param name="num">插入点数目</param>
					/// <param name="inpoints">输入点集合，地理坐标</param>					
					/// <param name="clampedDistance">贴地距离</param>
					/// <param name="straightDistance">直线距离</param>
					/// <param name="projectDistance">投影距离</param>
					ev_void calculateOnServer(_in ev_int32 num, _in const EarthView::World::Spatial::Math::VertexList& inpoints, _out ev_real64& clampedDistance, _out ev_real64& straightDistance, _out ev_real64& projectDistance);
				};
			}
		}
	}
}
#endif
