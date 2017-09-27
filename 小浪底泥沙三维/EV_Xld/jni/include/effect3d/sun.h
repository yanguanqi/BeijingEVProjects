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
				/// 太阳类型
				/// </summary>
				enum EVSunType
				{
					ST_SPHERE,
					ST_SPRITE
				};
				/// <summary>
				///  太阳控制类
				/// </summary>
				/// <returns></returns>
				class EV_EFFECT3D_DLL CSun : public EarthView::World::Core::CBaseObject
				{
ev_private:
					CSun(EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					CSun();
					/// <summary>
					/// 构造函数
					/// </summary>
					///<param "textureName">纹理名称</param>
					CSun(const EVString &textureName);
					/// <summary>
					/// 构造函数
					/// </summary>
					///<param "textureName">纹理名称</param>
					///<param "textureName">角度大小</param>
					CSun(const EVString &textureName, EarthView::World::Spatial::Math::CDegree& sunTextureAngularSize);
					~CSun();
					/// <summary>
					/// 获取资源名称
					/// </summary>
					/// <returns></returns>
					EVString getResourceName();
					/// <summary>
					/// 对太阳进行缩放
					/// </summary>
					///<param "scale">缩放系数</param>
					///<returns></returns>
					void setScale(ev_real32 scale);
					
					/// <summary>
					/// 获取太阳缩放系数
					/// </summary>
					///<returns>缩放系数</returns>
					ev_real32 getScale();
					/// <summary>
					/// 获取太阳大小，以视域角度为单位
					/// </summary>
					/// <returns>太阳大小，以视域角度为单位</returns>
					EarthView::World::Spatial::Math::CDegree getSunTextureAngularSize();
					/// <summary>
					/// 设置可见性
					/// </summary>
					/// <returns></returns>
					void setVisible(ev_bool visible);
					/// <summary>
					/// 获取可见性
					/// </summary>
					/// <returns></returns>
					ev_bool isVisible();
					/// <summary>
					/// 重载==
					/// </summary>
					/// <returns></returns>
					ev_bool operator==(const EarthView::World::Spatial::Effect3D::CSun &other) const;
					/// <summary>
					/// 重载!=
					/// </summary>
					/// <returns></returns>
					ev_bool operator!=(const EarthView::World::Spatial::Effect3D::CSun &other) const;
				protected:
					EVString mResourceName;
					EarthView::World::Spatial::Math::CDegree mSunTextureAngularSize;
					ev_real32 mScale;
					ev_bool mbVisible;
				};
			}
		}
	}
}
