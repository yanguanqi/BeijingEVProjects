#ifndef GLOBENODETRACK_H_
#define GLOBENODETRACK_H_

#include "spatial3dengine/spatial3dengineconfig.h"

#include "spatial3dengine/controlpoint.h"
#include "spatial3dengine/nodetrack.h"


namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			/// <summary>
			///节点动画类(以经纬度作为控制点)
			/// </summary>
			class EV_Spatial3DEngine_DLL CGlobeNodeTrackAnimation:public EarthView::World::Spatial3D::CTrackAnimation
			{
			public: 
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="name">名字</param>
				/// <param name="ref_sceneManager">场景管理器</param>
				/// <returns></returns>
				CGlobeNodeTrackAnimation(_in const EVString& name,_in EarthView::World::Graphic::CSceneManager* ref_sceneManager);
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				virtual ~CGlobeNodeTrackAnimation();
				/// <summary>
				/// 创建动画
				/// </summary>
				/// <param name="ref_node">动画作用的节点。</param>
				/// <returns></returns>
				virtual void createAnimation(_in EarthView::World::Graphic::CSceneNode* ref_node);
				/// <summary>
				/// 销毁动画
				/// </summary>
				/// <returns></returns>
				virtual void destoryAnimation();
				/// <summary>
				/// 设置模型的上方向
				/// </summary>
				/// <param name="upAxis">上方向的名字，x轴为XAxis ,y轴为YAxis,z轴为ZAxis</param>
				/// <returns></returns>
				void setNodeUpAxis(_in const EVString& upAxis) const;
				/// <summary>
				/// 返回模型的上方向
				/// </summary>
				/// <returns></returns>
				EVString getNodeUpAxis() const;

				//void setNodeRightAxis(_in const EarthView::World::Spatial::Math::CVector3& rightAxis);
				/// <summary>
				/// 获取位置
				/// </summary>
				/// <returns></returns>
				EarthView::World::Spatial::Math::CVector3 getPosition();
				/// <summary>
				/// 获取偏航角
				/// </summary>
				/// <returns></returns>
				ev_real64 getHeading();
				/// <summary>
				/// 增加控制点
				/// </summary>
				/// <param name="time">时间</param>
				/// <param name="globeControlPoint">控制点</param>
				/// <returns></returns>
				void insertGlobePoint(_in ev_real64 time,_in const EarthView::World::Spatial3D::CGlobeControlPoint& globeControlPoint);

ev_private:
				CGlobeNodeTrackAnimation(_in EarthView::World::Core::CNameValuePairList* plist);

				CGlobeControlPointMap mglobeControlPointMap;
			};
			/// <summary>
			///节点动画类的智能指针
			/// </summary>
			class EV_Spatial3DEngine_DLL CGlobeNodeTrackAnimationPtr:public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::CGlobeNodeTrackAnimation>
			{
ev_private:
				CGlobeNodeTrackAnimationPtr(_in EarthView::World::Core::CNameValuePairList *pList);
				explicit CGlobeNodeTrackAnimationPtr(EarthView::World::Spatial3D::CGlobeNodeTrackAnimation *rep, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<CGlobeNodeTrackAnimation>(rep, inFreeMethod) {}
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>
				CGlobeNodeTrackAnimationPtr();
				explicit CGlobeNodeTrackAnimationPtr(EarthView::World::Spatial3D::CGlobeNodeTrackAnimation *rep);
				CGlobeNodeTrackAnimationPtr(const CGlobeNodeTrackAnimationPtr &tp);

				EarthView::World::Spatial3D::CGlobeNodeTrackAnimation *get() const
				{
					return EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::CGlobeNodeTrackAnimation>::get();
				}

				EarthView::World::Spatial3D::CGlobeNodeTrackAnimationPtr &operator=(const EarthView::World::Spatial3D::CGlobeNodeTrackAnimationPtr &r);

			};
		}
	}
}

#endif
