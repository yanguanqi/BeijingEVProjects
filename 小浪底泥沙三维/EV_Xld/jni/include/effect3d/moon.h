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
				/// 月亮控制类
				/// </summary>
				class EV_EFFECT3D_DLL CMoon : public EarthView::World::Core::CBaseObject
				{
ev_private:
					CMoon(EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					CMoon();
					/// <summary>
					/// 构造函数
					/// </summary>
					///<param "moonTextureName">材质名称</param>
					///<returns></returns>
					CMoon(const EVString& moonTextureName);
					/// <summary>
					/// 构造函数
					/// </summary>
					///<param "moonTextureName">材质名称</param>
					///<param "angularSize">角度</param>
					///<returns></returns>
					CMoon(const EVString& moonTextureName, EarthView::World::Spatial::Math::CDegree angularSize);
					/// <summary>
					/// 析构函数
					/// </summary>
					~CMoon();
					/// <summary>
					/// 获取资源名称
					/// </summary>
					///<returns></returns>
					EVString getResourceName();
					/// <summary>
					/// 对月亮进行缩放
					/// </summary>
					///<param "scale">缩放系数</param>
					///<returns></returns>
					void setScale(ev_real32 scale);
					/// <summary>
					/// 获取月亮缩放系数
					/// </summary>
					///<returns>缩放系数</returns>
					ev_real32 getScale();
					/// <summary>
					/// 获取月亮大小，以视域角度为单位
					/// </summary>
					///<returns>视域角度</returns>
					EarthView::World::Spatial::Math::CDegree getMoonTextureAngularSize();
					//Graphic::CColourValue getBodyColour();
					//void setBodyColour (const Graphic::CColourValue &colour);
					/// <summary>
					/// 可见性设置
					/// </summary>
					///<param "visible">是否可见</param>
					///<returns></returns>
					void setVisible(ev_bool visible);
					/// <summary>
					/// 获取可见性
					/// </summary>
					///<returns>可见性</returns>
					ev_bool isVisible();
					/// <summary>
					/// 重载==
					/// </summary>
					///<returns>比较</returns>
					ev_bool operator==(const EarthView::World::Spatial::Effect3D::CMoon &other) const;
					/// <summary>
					/// 重载!=
					/// </summary>
					///<returns>比较结果</returns>
					ev_bool operator!=(const EarthView::World::Spatial::Effect3D::CMoon &other) const;
				protected:
					EVString mResourceName;
					EarthView::World::Spatial::Math::CDegree mMoonTextureAngularSize;
					ev_real32 mScale;
					//Graphic::CColourValue mBodyColour;
					ev_bool mbVisible;
				};
			}
		}
	}
}
