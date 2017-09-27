#ifndef __Ray_H_
#define __Ray_H_
#pragma once
#include "vector3.h"
#include "mathengine_config.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{

				class CPlane;
				class CPlaneBoundedVolume;
				/// <summary>
				/// 射线类,
				/// 定义了射线操作
				/// </summary>
				class EV_MATHENGINE_DLL CRay: public EarthView::World::Core::CBaseObject
				{
				protected:
					EarthView::World::Spatial::Math::CVector3 mOrigin;
					EarthView::World::Spatial::Math::CVector3 mDirection;
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CRay();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="origin">射线源点</param>
					/// <param name="direction">射线方向</param>
					/// <returns></returns>
					CRay( _in const EarthView::World::Spatial::Math::CVector3 &origin, _in const EarthView::World::Spatial::Math::CVector3 &direction);
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CRay(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 设置射线源点坐标
					/// </summary>
					/// <param name="origin">源点坐标</param>
					/// <returns></returns>
					void setOrigin( _in const EarthView::World::Spatial::Math::CVector3 &origin);
					/// <summary>
					/// 获得射线源点坐标
					/// </summary>
					/// <param name=""></param>
					/// <returns>源点坐标</returns>
					const EarthView::World::Spatial::Math::CVector3 &getOrigin() const;

					/// <summary>
					/// 设置射线方向向量
					/// </summary>
					/// <param name="dir">方向向量</param>
					/// <returns></returns>
					void setDirection( _in const EarthView::World::Spatial::Math::CVector3 &dir);
					/// <summary>
					/// 返回射线方向向量
					/// </summary>
					/// <param name=""></param>
					/// <returns>射线方向向量</returns>
					const EarthView::World::Spatial::Math::CVector3 &getDirection() const;

					/// <summary>
					/// 返回射线方向t单位长度的点坐标
					/// </summary>
					/// <param name="t">长度t</param>
					/// <returns>点坐标</returns>
					EarthView::World::Spatial::Math::CVector3 getPoint( _in Real t) const;
					
					/// <summary>
					/// 返回点与射线的垂足
					/// </summary>
					/// <param name="point">点</param>
					/// <returns>点坐标</returns>
					EarthView::World::Spatial::Math::CVector3 getPoint( _in const EarthView::World::Spatial::Math::CVector3& point) const;
					/// <summary>
					/// 返回射线方向t单位长度的点坐标
					/// </summary>
					/// <param name="t">长度t</param>
					/// <returns>点坐标</returns>
					EarthView::World::Spatial::Math::CVector3 operator*(_in Real t) const;
					/// <summary>
					/// 判断射线是否与面相交
					/// </summary>
					/// <param name="p">面对像</param>
					/// <returns>返回是否相交，和若相交其距离</returns>
					EarthView::World::Spatial::Math::IntersectResPair intersects( _in const EarthView::World::Spatial::Math::CPlane &p) const;
					/// <summary>
					/// 判断射线是否与凸多面体相交
					/// </summary>
					/// <param name="p">凸多面体对像</param>
					/// <returns>返回是否相交，和若相交其距离</returns>
					EarthView::World::Spatial::Math::IntersectResPair intersects( _in const EarthView::World::Spatial::Math::CPlaneBoundedVolume &p) const;
					/// <summary>
					/// 判断射线是否与球体相交
					/// </summary>
					/// <param name="s">球体对像</param>
					/// <returns>返回是否相交，和若相交其距离</returns>
					EarthView::World::Spatial::Math::IntersectResPair intersects( _in const EarthView::World::Spatial::Math::CSphere &s) const;
					/// <summary>
					/// 判断射线是否与平行轴线框盒相交
					/// </summary>
					/// <param name="box">线框盒对像</param>
					/// <returns>返回是否相交，和若相交其距离</returns>
					EarthView::World::Spatial::Math::IntersectResPair intersects( _in const EarthView::World::Spatial::Math::CAxisAlignedBox &box) const;

					/// <summary>
					/// 判断射线是否与线段相交
					/// </summary>
					/// <param name="startPt">线段起点</param>
					/// <param name="entPt">线段终点</param>
					/// <param name="vpvMatrix">视口投影观察矩阵</param>
					/// <param name="piexlTolerance">像素容差</param>
					/// <returns>返回是否相交，和若相交其距离</returns>
					EarthView::World::Spatial::Math::IntersectResPair intersects(_in const EarthView::World::Spatial::Math::CVector3& startPt,_in const EarthView::World::Spatial::Math::CVector3& endPt, const EarthView::World::Spatial::Math::CMatrix4& vpvMatrix, ev_uint32 piexlTolerance)const;

					ev_void mul(const EarthView::World::Spatial::Math::CMatrix4& matrix);
					ev_void devide(const EarthView::World::Spatial::Math::CMatrix4& matrix);
				};
			}
		}    
	}
}

#endif

