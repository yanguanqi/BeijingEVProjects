#ifndef EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CMATH3DMEASUREAREA_H
#define EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CMATH3DMEASUREAREA_H

#include "math3dbaseobject.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Analysis
			{
				/// <summary>
				/// 面积测量算法
				/// </summary>
				class EV_ANALYSIS3DOBJECT_DLL CMath3DMeasureArea : public EarthView::World::Spatial3D::Analysis::CMath3DBaseObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					CMath3DMeasureArea(_in EarthView::World::Core::CNameValuePairList* pList);

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pAltitude3DListener">高度控件</param>
					CMath3DMeasureArea(EarthView::World::Spatial3D::Analysis::CAltitude3DListener* ref_pAltitude3DListener);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					~CMath3DMeasureArea();
					/// <summary>
					/// 获取间隔距离
					/// </summary>
					/// <param name=""></param>
					/// <returns>间隔距离</returns>
					ev_real64 getInterval() const;
					/// <summary>
					/// 设置间隔距离
					/// </summary>
					/// <param name="value">间隔距离</param>
					ev_void setInterval(const ev_real64& value);
					/// <summary>
					/// 计算多边形面积（非递归实现方式）
					/// </summary>
					/// <param name="inpoints">多边形边界点集合,经纬度高程</param>
					/// <param name="calcuClampedArea">是否计算贴地面积</param>
					/// <param name="clampedArea">贴地面积</param>
					/// <returns>投影面积</returns>
					ev_real64 calcuPolygonArea(_in EarthView::World::Spatial::Math::VertexList& inpoints,_in ev_bool calcuClampedArea,_out ev_real64& clampedArea);
					/// <summary>
					/// 计算多边形贴地面积
					/// </summary>
					/// <param name="inpoints">多边形边界点集合,经纬度高程</param>
					/// <returns>贴地面积</returns>
					ev_real64 calcuClampedArea(_in EarthView::World::Spatial::Math::VertexList& inpoints);
					/// <summary>
					/// 计算多边形投影面积
					/// </summary>
					/// <param name="inpoints">多边形边界点集合，经纬度高程</param>
					/// <returns>投影面积</returns>
					ev_real64 calcuProjectArea(_in EarthView::World::Spatial::Math::VertexList& inpoints);
					/// <summary>
					/// 计算多边形面积，供服务器调用
					/// </summary>
					/// <param name="inpoints">多边形边界点集合，经纬度高程</param>
					/// <param name="clampArea">贴地面积</param>
					/// <param name="projArea">投影面积</param>
					ev_void calculateOnServer(_in EarthView::World::Spatial::Math::VertexList& inpoints,_out ev_real64& clampArea,_out ev_real64& projArea);

				protected:
					/// <summary>
					/// 计算三角形面积（非递归实现方式）
					/// </summary>
					/// <param name="insertNum">每条边要分割的段数</param>
					/// <param name="pointA">顶点A（经度，纬度，高程）</param>
					/// <param name="pointB">顶点B（经度，纬度，高程）</param>
					/// <param name="pointC">顶点C（经度，纬度，高程）</param>
					/// <param name="calcuClampedArea">是否计算贴地面积</param>
					/// <param name="clampedArea">贴地面积</param>
					/// <returns>投影面积</returns>
					ev_real64 calcuTriangleArea(ev_int32 insertNum,const EarthView::World::Spatial::Math::CVector3& pointA,const EarthView::World::Spatial::Math::CVector3& pointB,const EarthView::World::Spatial::Math::CVector3& pointC,ev_bool calcuClampedArea,ev_real64& clampedArea);
					/// <summary>
					/// 计算三角形面积
					/// </summary>
					/// <param name="insertNum">每条边要分割的段数</param>
					/// <param name="pointA">顶点A（经度，纬度，高程）</param>
					/// <param name="pointB">顶点B（经度，纬度，高程）</param>
					/// <param name="pointC">顶点C（经度，纬度，高程）</param>
					/// <param name="isClampArea">是否为贴地面积</param>
					/// <returns>三角形面积</returns>
					ev_real64 calcuTriangleArea(ev_int32 insertNum,const EarthView::World::Spatial::Math::CVector3& pointA,const EarthView::World::Spatial::Math::CVector3& pointB,const EarthView::World::Spatial::Math::CVector3& pointC,const ev_bool isClampArea);
					/// <summary>
					/// 计算三角形边拆分个数
					/// </summary>
					/// <param name="pointA">顶点A（经度，纬度，高程）</param>
					/// <param name="pointB">顶点B（经度，纬度，高程）</param>
					/// <param name="pointC">顶点C（经度，纬度，高程）</param>
					/// <returns>三角形边拆分个数</returns>
					ev_int32 calcuInsertNum(const EarthView::World::Spatial::Math::CVector3& pointA,const EarthView::World::Spatial::Math::CVector3& pointB,const EarthView::World::Spatial::Math::CVector3& pointC);
					/// <summary>
					/// 拆分间隔
					/// </summary>
					ev_real64 mInterval;
				};
			}
		}
	}
}

#endif
