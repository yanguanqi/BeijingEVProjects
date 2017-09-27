#pragma once;
#include "effect3d_config.h"
#include <graphic/scenemanager.h>
#include <spatialobject/geometry/envelope.h>
#include <mathengine/ev_math.h>
#include <effect3d/precipitation.h>
#include <graphic/material.h>
#include <graphic/particlesystem.h>
#include <plugin_particlefx/boxemitter.h>
#include <plugin_particlefx/linearforceaffector.h>


namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Effect3D
			{
				/// <summary>
				/// 降水强度枚举
				/// </summary>
				enum EVPrecipitationStrength
				{
					//默认
					PS_DEFAULT,
					//小
					PS_SMALL,
					//中
					PS_MIDDLE,
					//大
					PS_LARGE,
					//强烈
					PS_STRONG
				};
				/// <summary>
				///  雨雪系统(粒子系统实现)
				/// </summary>
				class EV_EFFECT3D_DLL CRainSnowSystem : public EarthView::World::Core::CBaseObject
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					CRainSnowSystem(EarthView::World::Graphic::CSceneManager *ref_sceneMgr, EarthView::World::Spatial::Effect3D::EVPrecipitationType type, EarthView::World::Spatial::Geometry::CEnvelope envelope);
					/// <summary>
					/// 构造函数
					/// </summary>
					CRainSnowSystem(EarthView::World::Graphic::CSceneManager *ref_sceneMgr	,EarthView::World::Spatial::Effect3D::EVPrecipitationType type ,EarthView::World::Spatial::Geometry::CEnvelope envelope,EarthView::World::Spatial::Effect3D::EVPrecipitationStrength strength);
					/// <summary>
					/// 析构函数
					/// </summary>
					~CRainSnowSystem();

					/// <summary>
					/// 设置降水类型
					/// </summary>
					void setType(EarthView::World::Spatial::Effect3D::EVPrecipitationType type);
					/// <summary>
					/// 获取降水类型
					/// </summary>
					EarthView::World::Spatial::Effect3D::EVPrecipitationType getType () const;
					/// <summary>
					/// 获取名称
					/// </summary>
                    EVString getName() const;
					/// <summary>
					/// 设置名称
					/// </summary>
					void setName(const EVString &name);
					/// <summary>
					/// 获取密度
					/// </summary>
					Real getIntensity() const;
					/// <summary>
					/// 设置密度
					/// </summary>
					void setIntensity(const Real &intensity);
					/// <summary>
					/// 获取最大速度
					/// </summary>
					Real getMaxVelocity() const;
					/// <summary>
					/// 设置最大速度
					/// </summary>
					void setMaxVelocity(const Real &maxVelocity);
					/// <summary>
					///  获取最小速度
					/// </summary>
					Real getMinVelocity() const;
					/// <summary>
					/// 设置最小速度
					/// </summary>
					void setMinVelocity(const Real &minVelocity);
					/// <summary>
					/// 获取速度
					/// </summary>
					Real getVelocity() const;
					/// <summary>
					/// 设置速度
					/// </summary>
					void setVelocity(const Real &velocity);
					/// <summary>
					/// 获取粒子宽度
					/// </summary>
					Real getParticleWidth() const;
					/// <summary>
					/// 设置粒子宽度
					/// </summary>
					void setParticleWidth(const Real &width);
					/// <summary>
					/// 获取粒子高度
					/// </summary>
					Real getParticleHeight() const;
					/// <summary>
					/// 设置粒子高度
					/// </summary>
					void setParticleHeight(const Real &height);
					/// <summary>
					/// 获取可见性
					/// </summary>
					ev_bool isVisible();
					/// <summary>
					/// 设置可见性
					/// </summary>
					void setVisible(ev_bool visible);
					/// <summary>
					/// 获取世界坐标
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 getWorldPosition() const;
					/// <summary>
					/// 设置世界坐标
					/// </summary>
					void setWorldPosition(const EarthView::World::Spatial::Math::CVector3 &pos);
					/// <summary>
					/// 获取风速
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 getWindSpeed() const;
					/// <summary>
					/// 设置风速
					/// </summary>
					void setWindSpeed(const EarthView::World::Spatial::Math::CVector3 &speed);
					/// <summary>
					/// 获取高度
					/// </summary>
					Real getHeight() const;
					/// <summary>
					/// 设置高度
					/// </summary>
					void setHeight(const Real &height);
					/// <summary>
					/// 更新粒子
					/// </summary>
					void update(const EarthView::World::Spatial::Math::CVector3 cameraPos);
					/// <summary>
					/// 销毁粒子
					/// </summary>
					ev_void destroy();

				protected:
					void createParticleSystem();
					EVString getMaterialName(EarthView::World::Spatial::Effect3D::EVPrecipitationType type);
					ev_int32 genIncreaseNum();
					
				protected:
					EarthView::World::Graphic::CSceneManager *mpSceneMgr;
					EarthView::World::Graphic::CSceneNode *mSnowNode;
					EarthView::World::Graphic::CSceneNode *mRainNode;
					EarthView::World::Graphic::CParticleSystem *mSnowPS;
					EarthView::World::Graphic::CParticleSystem *mRainPS;
					EarthView::World::Plugin::ParticleFX::CBoxEmitter *mBoxEmitter;
					EarthView::World::Plugin::ParticleFX::CLinearForceAffector *mLinearForceAffector;
                    EVString mName;
					EarthView::World::Graphic::CMaterialPtr mMaterial;
					Real mpWidth;
					Real mpLength;
					Real mpMaxVelocity;
					Real mpMinVelocity;
					Real mpVelocity;
					Real mpIntensity;
					Real mParticleWidth;
					Real mParticleHeight;
					Real mpHeight;
					EarthView::World::Spatial::Effect3D::EVPrecipitationType mpType;
					EarthView::World::Spatial::Geometry::CEnvelope mpEnvelope;
                    EarthView::World::Spatial::Math::CVector3 mpGeoPosition;
                    EarthView::World::Spatial::Math::CVector3 mpCenterPos;
					EarthView::World::Spatial::Math::CVector3 mpWindSpeed;
					ev_bool mbVisible;
					EarthView::World::Spatial::Effect3D::EVPrecipitationStrength mStrength;
				private:
					//禁用拷贝赋值
					CRainSnowSystem(const CRainSnowSystem &);
					CRainSnowSystem& operator=(const CRainSnowSystem &);
				ev_private:
					CRainSnowSystem(EarthView::World::Core::CNameValuePairList *pList);

				};
			}
		}
	}
}
