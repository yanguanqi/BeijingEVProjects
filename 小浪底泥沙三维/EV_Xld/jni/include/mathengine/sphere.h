#ifndef __Sphere_H_
#define __Sphere_H_
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

				/// <summary>
				/// 球体类
				/// 定义了球体操作
				/// </summary>
				class EV_MATHENGINE_DLL CSphere: public EarthView::World::Core::CBaseObject
				{
				protected:
					Real mRadius;
					EarthView::World::Spatial::Math::CVector3 mCenter;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CSphere(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CSphere();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="center">球体中心点</param>
					/// <param name="radius">球体半径</param>
					/// <returns></returns>
					CSphere( _in const EarthView::World::Spatial::Math::CVector3 &center, _in Real radius);
					/// <summary>
					/// 获得球体半径
					/// </summary>
					/// <param name=""></param>
					/// <returns>球体半径</returns>
					Real getRadius() const;
					/// <summary>
					/// 设置球体半径
					/// </summary>
					/// <param name="radius">球体半径</param>
					/// <returns></returns>
					void setRadius(_in Real radius);
					/// <summary>
					/// 获得球心坐标
					/// </summary>
					/// <param name=""></param>
					/// <returns>球心坐标</returns>
					const EarthView::World::Spatial::Math::CVector3 &getCenter() const;
					/// <summary>
					/// 设置球心坐标
					/// </summary>
					/// <param name="center">球心坐标</param>
					/// <returns></returns>
					void setCenter( _in const EarthView::World::Spatial::Math::CVector3 &center);
					/// <summary>
					/// 判断与另一球体是否相交
					/// </summary>
					/// <param name="s">另一球体</param>
					/// <returns>相交返回true，否则false</returns>
					ev_bool intersects( _in const EarthView::World::Spatial::Math::CSphere &s) const;
					/// <summary>
					/// 判断与平行轴边框盒是否相交
					/// </summary>
					/// <param name="box">边框盒对象</param>
					/// <returns>相交返回true，否则false</returns>
					ev_bool intersects( _in const EarthView::World::Spatial::Math::CAxisAlignedBox &box) const;
					/// <summary>
					/// 判断与平面是否相交
					/// </summary>
					/// <param name="plane">平面对象</param>
					/// <returns>相交返回true，否则false</returns>
					ev_bool intersects( _in const EarthView::World::Spatial::Math::CPlane &plane) const;
					/// <summary>
					/// 判断是否包含某点
					/// </summary>
					/// <param name="v">空间点坐标</param>
					/// <returns>包含返回true，否则false</returns>
					ev_bool intersects( _in const EarthView::World::Spatial::Math::CVector3 &v) const;
					///zxt updatefor v1.8
					/** Merges another Sphere into the current sphere */
					void merge(const EarthView::World::Spatial::Math::CSphere &oth);
				};
			}
		}
	}
}

#endif

