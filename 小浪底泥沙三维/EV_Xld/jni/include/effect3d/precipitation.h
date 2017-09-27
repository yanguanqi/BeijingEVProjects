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
				/// 降水枚举
				/// </summary>
				enum EVPrecipitationType
				{
					/// <summary>
					/// 小雨
					/// </summary>
					PT_DRIZZLE		= 0,
					/// <summary>
					/// 雨
					/// </summary>
					PT_RAIN			= 1,
					/// <summary>
					/// 雪
					/// </summary>
					PT_SNOW			= 2,
					/// <summary>
					/// 雨夹雪
					/// </summary>
					PT_SNOWGRAINS	= 3,
					/// <summary>
					/// 冰晶
					/// </summary>
					PT_ICECRYSTALS	= 4,
					/// <summary>
					/// 冰粒
					/// </summary>
					PT_ICEPELLETS	= 5,
					/// <summary>
					/// 冰雹
					/// </summary>
					PT_HAIL			= 6,
					/// <summary>
					/// 小冰雹
					/// </summary>
					PT_SMALLHAIL	= 7,
					/// <summary>
					/// 无
					/// </summary>
					PT_NONE         = 8,
				};

				/// <summary>
				/// 降水控制类
				/// </summary>
				class EV_EFFECT3D_DLL CPrecipitation : public EarthView::World::Core::CBaseObject
				{
ev_private:
					CPrecipitation(EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					CPrecipitation();
					/// <summary>
					/// 构造函数
					/// </summary>
					CPrecipitation(EarthView::World::Spatial::Effect3D::EVPrecipitationType type);
					/// <summary>
					/// 获取名称
					/// </summary>
					EVString getName() const;

					/// <summary>
					/// 设置名称
					/// </summary>
					void setName(const EVString &name);
					/// <summary>
					/// 设置降水类型
					/// </summary>
					void setPresetType (EarthView::World::Spatial::Effect3D::EVPrecipitationType type);
					/// <summary>
					/// 获取降水类型
					/// </summary>
					EarthView::World::Spatial::Effect3D::EVPrecipitationType getPresetType () const;

					/// Precipitation speed (affects direction). Part of a preset
					/// <summary>
					/// 设置速度
					/// </summary>
					void setSpeed(Real value);
					/// <summary>
					/// 获取速度
					/// </summary>
					Real getSpeed() const;

					
					/// <summary>
					/// 设置密度
					/// </summary>
					void setIntensity(Real value);
					/// <summary>
					/// 获取密度
					/// </summary>
					Real getIntensity() const;

					/// <summary>
					/// 设置降雨高度
					/// </summary>
					void setFallingHeight(Real height);
					/// <summary>
					/// 获取降雨高度
					/// </summary>
					Real getFallingHeight();
					/// <summary>
					/// 设置可见性
					/// </summary>
					void setVisible(ev_bool visible);
					/// <summary>
					/// 返回可见性
					/// </summary>
					ev_bool isVisible();

					ev_bool operator==(const EarthView::World::Spatial::Effect3D::CPrecipitation &other) const;
					ev_bool operator!=(const EarthView::World::Spatial::Effect3D::CPrecipitation &other) const;
					/// <summary>
					/// 降雨类型到英文字符串的转换
					/// </summary>
                    static EVString EVPrecipitationTypeToString(EarthView::World::Spatial::Effect3D::EVPrecipitationType type);
					/// <summary>
					/// 降雨类型到中文字符串的转换
					/// </summary>
					static EVString EVPrecipitationTypeToStringCHS(EarthView::World::Spatial::Effect3D::EVPrecipitationType type);
					/// <summary>
					/// 英文字符串到降雨类型的转换
					/// </summary>
                    static EarthView::World::Spatial::Effect3D::EVPrecipitationType StringtoEVPrecipitationType(const EVString& type);
					/// <summary>
					/// 中文字符串到类型的转换
					/// </summary>
                    static EarthView::World::Spatial::Effect3D::EVPrecipitationType StringtoEVPrecipitationTypeCHS(const EVString& type);
				private:
					EarthView::World::Spatial::Effect3D::EVPrecipitationType mType;
					Real mSpeed;
					Real mIntensity;
					Real mFollingHeight;
					ev_bool mbVisible;
					EVString mName;
				};
			}
		}
	}
}

