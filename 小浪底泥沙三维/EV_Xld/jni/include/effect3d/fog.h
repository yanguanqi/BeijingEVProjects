#pragma once;
#include "effect3d_config.h"
#include <graphic/colourvalue.h>
#include <mathengine/ev_math.h>

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Effect3D
			{
				/// <summary>
				/// 雾对象
				/// </summary>
				class EV_EFFECT3D_DLL CGroundFog : public EarthView::World::Core::CBaseObject
				{
ev_private:
					CGroundFog(EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					CGroundFog();
					/// <summary>
					/// 构造函数
					/// </summary>
					CGroundFog(const EVString &domeMaterialName, const EVString &domeEntityName);
					/// <summary>
					/// 析构函数
					/// </summary>
					~CGroundFog();
					/// <summary>
					/// 设置可见性
					/// </summary>
					void setVisible(ev_bool visible);
					/// <summary>
					/// 返回可见性
					/// </summary>
					ev_bool isVisible();
					/// <summary>
					/// 返回材质名称
					/// </summary>
					EVString getDomeMaterialName();
					/// <summary>
					/// 返回实体名称
					/// </summary>
					EVString getDomeEntityName();
					/// <summary>
					/// 设置雾颜色
					/// </summary>
					void setGroundFogColourMultiplier(const EarthView::World::Graphic::CColourValue &colour);
					/// <summary>
					/// 获取雾颜色
					/// </summary>
					EarthView::World::Graphic::CColourValue getGroundFogColourMultiplier();
					/// <summary>
					/// 设置雾密度
					/// </summary>
					void setGroundFogDensityMultiplier(Real value);
					/// <summary>
					/// 返回雾密度
					/// </summary>
					Real getGroundFogDensityMultiplier() const;
					/// <summary>
					/// 设置等级
					/// </summary>
					void setGroundLevel (Real GroundLevela);
					/// <summary>
					/// 返回等级
					/// </summary>
					Real getGroundLevel () const;
					/// <summary>
					/// ==操作符重载
					/// </summary>
					ev_bool operator==(const EarthView::World::Spatial::Effect3D::CGroundFog &other) const;
					/// <summary>
					/// !=操作符重载
					/// </summary>
					ev_bool operator!=(const EarthView::World::Spatial::Effect3D::CGroundFog &other) const;

				protected:
					EVString mDomeMaterialName;
					EVString mDomeEntityName;
					EarthView::World::Graphic::CColourValue mGroundFogColourMultiplier;
					ev_bool mbVisible;
					Real mGoundFogDensityMultiplier;
					Real mGroundLevel;
				};
			}
		}
	}
}
