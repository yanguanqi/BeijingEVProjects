#pragma once;
#include "effect3d_config.h"
#include <mathengine/vector3.h>
#include "heightrange.h"
#include "mathengine/ev_math.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Effect3D
			{
				/// <summary>
				/// 风向枚举
				/// </summary>
				enum EVWindDirection
				{
					/// <summary>
					/// 东
					/// </summary>
					WD_EAST		    = 0,
					/// <summary>
					/// 南
					/// </summary>
					WD_SOUTH		= 1,
					/// <summary>
					/// 西
					/// </summary>
					WD_WEST     	= 2,
					/// <summary>
					/// 北
					/// </summary>
					WD_NORTH		= 3,
					/// <summary>
					/// 东南
					/// </summary>
					WD_SOUTHEAST	= 4,
					/// <summary>
					/// 东北
					/// </summary>
					WD_NORTHEAST	= 5,
					/// <summary>
					/// 西南
					/// </summary>
					WD_SOUTHWEST	= 6,
					/// <summary>
					/// 西北
					/// </summary>
					WD_NORTHWEST	= 7,
				};

				/// <summary>
				/// 风控制类
				/// </summary>
				class EV_EFFECT3D_DLL CWind : public EarthView::World::Core::CBaseObject
				{
ev_private:
					CWind(EarthView::World::Core::CNameValuePairList *pList);

					friend class CRegionAtmosphere;
				public:
					
					/// <summary>
					/// 析构函数
					/// </summary>
					~CWind();
					/// <summary>
					/// 获取名称
					/// </summary>
					EVString getName() const;
					/// <summary>
					/// 设置名称
					/// </summary>
					void setName(const EVString &name);
					/// <summary>
					/// 获取风的可用性
					/// </summary>
					/// <returns>风速向量</returns>
					ev_bool isWindEnabled() const;
					/// <summary>
					/// 设置风的可用性
					/// </summary>
					/// <returns>风速向量</returns>
					void setWindEnabled(bool enabled);
					/// <summary>
					/// 获取风速
					/// </summary>
					/// <returns>风速向量</returns>
					EarthView::World::Spatial::Math::CVector3 getWindSpeed() const;
					/// <summary>
					/// 设置风速向量
					/// </summary>
					/// <param name = "speed">风速向量</param>
					/// <returns></returns>
					void setWindSpeed(const EarthView::World::Spatial::Math::CVector3 &speed);
					/// <summary>
					/// 获取高度范围
					/// </summary>
					/// <returns>高度范围</returns>
					EarthView::World::Spatial::Effect3D::CHeightRange getHeightRange();
					/// <summary>
					/// 设置高度范围
					/// </summary>
					/// <param name = "height">高度范围</param>
					/// <returns></returns>
					void setHeightRange(EarthView::World::Spatial::Effect3D::CHeightRange height);
					
					/// <summary>
					/// 设置风向
					/// </summary>
					/// <param name="direction">风向</param>
					/// <returns></returns>
					void setWindDirection(EarthView::World::Spatial::Effect3D::EVWindDirection direction);
					/// <summary>
					/// 获取风向
					/// </summary>
					/// <returns>风向</returns>
					EarthView::World::Spatial::Effect3D::EVWindDirection getWindDirection() const;
					/// <summary>
					/// 设置风速
					/// </summary>
					/// <param name="velocity">风速</param>
					/// <returns></returns>
					void setWindVelocity(const Real &velocity);
					/// <summary>
					/// 获取风速
					/// </summary>
					/// <returns>风速</returns>
					Real getWindVelocity() const;

					/// <summary>
					///克隆风对象
					/// </summary>
					/// <returns>风对象指针</returns>
					EarthView::World::Spatial::Effect3D::CWind* clone();

				private:
					/// <summary>
					/// 计算风速向量
					/// </summary>
					/// <param name="direction">方向</param>
					/// <param name="velocity">大小</param>
					/// <returns></returns>
					EarthView::World::Spatial::Math::CVector3 computeWindSpeed(EarthView::World::Spatial::Effect3D::EVWindDirection direction, const Real &velocity);

					/// <summary>
					/// 构造函数
					/// </summary>
					CWind();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name = "direction">方向</param>
					/// <param name = "volocity">风速</param>
					/// <returns></returns>
					CWind(EarthView::World::Spatial::Effect3D::EVWindDirection direction, const Real &velocity);

					CWind(const CWind&);
					EarthView::World::Spatial::Effect3D::CWind& operator=(const EarthView::World::Spatial::Effect3D::CWind&);
ev_private:
					/// <summary>
					/// 重载==
					/// </summary>
					/// <returns>比较结果</returns>
					ev_bool operator==(const EarthView::World::Spatial::Effect3D::CWind &other) const;
					/// <summary>
					/// 重载!=
					/// </summary>
					/// <returns>比较结果</returns>
					ev_bool operator!=(const EarthView::World::Spatial::Effect3D::CWind &other) const;
				protected:
					EarthView::World::Spatial::Math::CVector3 mSpeed;
					EarthView::World::Spatial::Effect3D::CHeightRange mHeight;
					EVString mName;
					EarthView::World::Spatial::Effect3D::EVWindDirection mWindDirection;
					Real mWindVelocity;
					ev_bool mEnabled;
				
				};
			}
		}
	}
}
