#ifndef __GLOBETEXTMOVABLE_H__
#define __GLOBETEXTMOVABLE_H__

#include "graphic/texturemovabletext.h"
#include "geometry3d/geometry3d_config.h"



namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class CTextureTextStyle;
		}

		namespace Geometry3D
		{
			class EV_GEOMETRY3D_DLL CGlobeTextMovable:public EarthView::World::Graphic::CTextureMovableText
			{
			public:
				/// <summary>
				/// 设置文本在球面上的走向
				/// 
				///   A P P L E 
				///     ====>
				/// 
				/// </summary>
				/// <param name="direction">要想文本走向始终和相机左方向平行,可传入 VEC_FACETO_CAMERA</param>
				void setDirection( const EarthView::World::Spatial::Math::CVector3& direction )
				{
					mDirection = direction;
					mDirection.normalise();
				}
				/// <summary>
				/// 获取当前文本的走向
				/// </summary>
				const EarthView::World::Spatial::Math::CVector3& getDirection() const
				{
					return mDirection;
				}

				/// <summary>
				/// 使文本走向随相机而变
				/// <summary>
				void holdDirectionForCamera(ev_bool bHold)\
				{
					mIsHoldingDirectionForCamera = bHold;
				}

				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="str>unicode串</param>
				/// <param name="fontAttr">字体属性</param>
				/// <param name="sharedCache">共享缓存:可使用默认值CFontLatticeCache::getDefaultCache())</param>
				CGlobeTextMovable(const EarthView::World::Core::CUnicodeString& str,EarthView::World::Graphic::CTextureTextStyle* ref_style);
			ev_private:
				CGlobeTextMovable(EarthView::World::Core::CNameValuePairList* pList);
				/// <summary>
				/// 计算世界变换矩阵
				/// </summary>
				void computeWorldMatrix(EarthView::World::Graphic::CCamera *cam);
			private:
				EarthView::World::Spatial::Math::CVector3 mDirection;
				ev_bool mIsHoldingDirectionForCamera;
			//public:
				//enum eAdaptMode
				//{
				//	KEEP_PIXELSIZE,
				//	FACETO_CAMERA,					
				//};
				///// <summary>
				///// 地球场景适应特性设置
				///// </summary>
				///// <param name=adaptMode></param>
				//void setGlobeAdaptMode(eAdaptMode adapt);
			};




		}
	}
}

#endif
