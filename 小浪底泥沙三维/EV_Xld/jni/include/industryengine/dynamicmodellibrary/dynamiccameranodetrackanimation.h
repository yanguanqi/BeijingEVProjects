#ifndef __DYNAMICCAMERANODETRACKANIMATION_H__
#define __DYNAMICCAMERANODETRACKANIMATION_H__

#include "spatial3dengine/nodetrack.h"
#include "industryengine/dynamicmodellibrary/dynamicmodel_cfg.h"
#include "spatial3dengine/globeflypath.h"

namespace EarthView
{
	namespace IndustryEngine
	{
		namespace DynamicModelLibrary
		{
			class CDynamicObjectEventManager;
		}
	}
}

namespace EarthView
{
	namespace IndustryEngine
	{
		namespace DynamicModelLibrary
		{
			/// <summary>
			/// 动态目标相机动画
			/// </summary>
			class EV_DYNAMICMODELLIBRARY_DLL CDynamicCameraNodeTrackAnimation : public EarthView::World::Spatial3D::CNodeTrackAnimation
			{
			public: 
				/// <summary>
				/// 动态目标相机动画构造函数
				/// </summary>
				/// <param name="name">名称</param>
				/// <param name="ref_sceneManager">场景管理器</param>
				/// <param name="ref_eventManager">事件管理器，该参数对象的生命周期要保持大于本对象的生命周期</param>
				CDynamicCameraNodeTrackAnimation(_in const EVString& name,_in EarthView::World::Graphic::CSceneManager* ref_sceneManager,_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager* ref_eventManager);
				/// <summary>
				/// 动态目标相机动画析构函数
				/// </summary>
				virtual ~CDynamicCameraNodeTrackAnimation();
				/// <summary>
				/// 生成相机动画
				/// </summary>
				virtual void createAnimation();
				/// <summary>
				/// 动态刷新相机动画
				/// </summary>
				/// <param name="refreshPoints">控制点参数</param>
				virtual void refreshAnimation(const EarthView::World::Spatial3D::CControlPointMap& refreshPoints);
				/// <summary>
				/// 设置当前帧时间
				/// </summary>
				/// <param name="time">当前动画帧时间</param>
				virtual ev_void setCurrentFrameTime(const ev_real64& time);
				/// <summary>
				/// 获取当前帧时间
				/// </summary>
				/// <returns>当前动画帧时间</returns>
				virtual ev_real64 getCurrentFrameTime() const;
				/// <summary>
				/// 清除所有动画关键控制点
				/// </summary>
				virtual ev_void clearAllCameraNodeTrackPoints();
				/// <summary>
				/// 是否可以开始相机动画
				/// </summary>
				virtual ev_bool canStart()const;
				/// <summary>
				/// 是否发送过创建动画请求
				/// </summary>
				virtual ev_bool  hasRequestCreateAnimation()const;
				/// <summary>
				/// 设置是否开启在线模式（优化内存管理，不可以进行动画重播功能）
				/// </summary>
				/// <param name="enable">是否开启在线</param>
				/// <returns></returns>
				virtual ev_void setOnLineModeEnabled(const ev_bool& enable);
				/// <summary>
				/// 获取是否开启在线模式（优化内存管理，不可以进行动画重播功能）
				/// </summary>
				/// <returns>是否开启在线，如果开启该模式则会定时清除轨迹点，优化内存管理，但是开启该功能后不可以进行轨迹重播功能</returns>
				virtual ev_bool getOnLineModeEnabled()const;
				/// <summary>
				/// 帧渲染之后被调用
				/// </summary>
				/// <param name="evt"></param>
				/// <returns></returns>
				virtual ev_bool frameEnded(const EarthView::World::Graphic::FrameEvent &evt);
				/// <summary>
				/// 在所有的渲染目标已经获得渲染命令，渲染窗体被要求跳出缓存之前调用
				/// </summary>
				/// <param name="evt"></param>
				/// <returns></returns>
				virtual ev_bool frameRenderingQueued(_in const EarthView::World::Graphic::FrameEvent &evt);
ev_private:
				/// <summary>
				/// 动态目标相机动画构造函数
				/// </summary>
				/// <param name="plist">参数列表</param>
				CDynamicCameraNodeTrackAnimation(_in EarthView::World::Core::CNameValuePairList* plist);
			protected:
				ev_bool mRequestCreateAnimation;
				ev_bool mOnlineModeEnable;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager* mEventManager;
				ev_bool mAnimationIsLooping;
			private:
				ev_void clearOtiosePoint();

			};  
		}
	}
}

#endif

