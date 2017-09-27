#ifndef __DYNAMICGLOBENODETRACKANIMATION_H__
#define __DYNAMICGLOBENODETRACKANIMATION_H__

#include "spatial3dengine/globenodetrack.h"
#include "industryengine/dynamicmodellibrary/dynamicmodel_cfg.h"
#include "spatial3dengine/globeflypath.h"
#include "spatial3dengine/nodetrack.h"


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
			class  CDynamicGlobeNodeTrackAnimationListener;
			//class  CControlPointBuffer;
			/// <summary>
			/// 动态目标轨迹动画
			/// </summary>
			class EV_DYNAMICMODELLIBRARY_DLL CDynamicGlobeNodeTrackAnimation : public EarthView::World::Spatial3D::CGlobeNodeTrackAnimation
			{	
			public: 
				/// <summary>
				/// 动态目标轨迹动画构造函数
				/// </summary>
				/// <param name="name">名称</param>
				/// <param name="ref_sceneManager">场景管理器</param>
				/// <param name="ref_eventManager">事件管理器，该参数对象的生命周期要保持大于本对象的生命周期</param>
				CDynamicGlobeNodeTrackAnimation(_in const EVString& name,_in EarthView::World::Graphic::CSceneManager* ref_sceneManager,_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager* ref_eventManager);
				/// <summary>
				/// 动态目标轨迹动画析构
				/// </summary>
				virtual ~CDynamicGlobeNodeTrackAnimation();
				/// <summary>
				/// 生成轨迹动画
				/// </summary>
				virtual void createAnimation();
				/// <summary>
				/// 动态刷新轨迹动画
				/// </summary>
				/// <param name="refreshPoints">控制点参数</param>
				virtual void refreshAnimation(const EarthView::World::Spatial3D::CGlobeControlPointMap& refreshPoints);
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
				/// 获取当前帧的控制点参数
				/// </summary>
				/// <returns>控制点参数</returns>
				virtual EarthView::World::Spatial3D::CGlobeControlPoint getCurrentFrameControlPoint() const;
				/// <summary>
				/// 获取指定关键帧时间对应的控制点参数
				/// </summary>
				/// <param name="time">指定关键帧时间</param>
				/// <returns>控制点参数</returns>
				virtual EarthView::World::Spatial3D::CGlobeControlPoint getKeyFrameControlPoint(const ev_real64& time)const;
				/// <summary>
				/// 获取动画是否要进入循环播放状态
				/// </summary>
				/// <returns>动画是否要进入循环播放状态</returns>
				virtual ev_bool getAnimationIsLooping();
				/// <summary>
				/// 设置高度模式
				/// </summary>
				/// <param name="altitudeMode">高度模式</param>
				virtual ev_void setAltitudeMode(EarthView::World::Spatial3D::CFLyParam::AltitudeMode altitudeMode);
				/// <summary>
				/// 获取高度模式
				/// </summary>
				/// <returns>高度模式</returns>
				virtual EarthView::World::Spatial3D::CFLyParam::AltitudeMode getAltitudeMode();
				/// <summary>
				/// 设置动画监听
				/// </summary>
				/// <param name="ref_globeNodeTrackAnimationListener">动画监听,该参数对象的生命周期要保持大于本对象的生命周期</param>
				virtual ev_void setGlobeNodeTrackAnimationListener(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener* ref_globeNodeTrackAnimationListener);
				/// <summary>
				/// 获取动画监听
				/// </summary>
				/// <returns>动画监听</returns>
				virtual EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener* getGlobeNodeTrackAnimationListener();
				/// <summary>
				/// 帧渲染之前调用
				/// </summary>
				/// <param name="evt"></param>
				/// <returns></returns>
				virtual ev_bool frameStarted(const EarthView::World::Graphic::FrameEvent &evt);
				 /// <summary>
                /// 在所有的渲染目标已经获得渲染命令，渲染窗体被要求跳出缓存之前调用
                /// </summary>
				/// <param name="evt"></param>
				/// <returns></returns>
				virtual ev_bool frameRenderingQueued(_in const EarthView::World::Graphic::FrameEvent &evt);
				/// <summary>
                /// 帧渲染之后被调用
                /// </summary>
				/// <param name="evt"></param>
				/// <returns></returns>
				virtual ev_bool frameEnded(const EarthView::World::Graphic::FrameEvent &evt);
				/// <summary>
				/// 清除所有动画关键控制点
				/// </summary>
				virtual ev_void clearAllGlobeNodeTrackPoints();
				/// <summary>
				/// 是否可以开始轨迹动画
				/// </summary>
				virtual ev_bool canStart()const;
				/// <summary>
				/// 是否发送过创建动画请求
				/// </summary>
				virtual ev_bool  hasRequestCreateAnimation()const;
				/// <summary>
				/// 是否已经完成创建动画
				/// </summary>
				virtual ev_bool hasCreatedAnimation()const;
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
				/// 设置是否启用动画
				/// </summary>
				/// <param name="enable">是否启用动画</param>
				/// <returns></returns>
				virtual ev_void setAnimationsetEnabled(const ev_bool& enable);
				/// <summary>
				/// 获取是否启用动画
				/// </summary>
				/// <returns>是否启用动画</returns>
				virtual ev_bool getAnimationsetEnabled()const;
				/// <summary>
				/// 设置动画处于休眠状态时的自动唤醒频率
				/// </summary>
				/// <param name="frequency">唤醒频率</param>
				/// <returns></returns>
				virtual ev_void setArouseFrequency(const ev_real64& frequency);
				/// <summary>
				/// 获取动画处于休眠状态时的自动唤醒频率
				/// </summary>
				/// <returns>唤醒频率</returns>
				virtual ev_real64 getArouseFrequency()const;
				/// <summary>
				/// 强制唤醒动画
				/// </summary>
				/// <returns></returns>
				virtual ev_void forceArouseAnimation();

				/// <summary>
				/// 获取控制点容器
				/// </summary>
				/// <returns>控制点容器</returns>
				EarthView::World::Spatial3D::CGlobeControlPointMap getControlPointMap();
ev_private:
				/// <summary>
				/// 动态目标轨迹动画构造函数
				/// </summary>
				/// <param name="plist">参数列表</param>
				CDynamicGlobeNodeTrackAnimation(_in EarthView::World::Core::CNameValuePairList* plist);

			protected:
				ev_bool mIsForceArouseAnimationFlag;//////////强制唤醒动画标志
				ev_real64 mDormancyTime;/////休眠时间
				ev_real64 mArouseFrequency;//////唤醒动画的频率
				ev_bool mAnimationStateEnabled;
				ev_bool mRequestCreateAnimation;
				ev_bool mAnimationIsLooping;
				ev_bool mOnlineModeEnable;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener* mGlobeNodeTrackAnimationListener;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager* mEventManager;
				EarthView::World::Spatial3D::CGlobeControlPointMap mNeedRefreshMap;
				EarthView::World::Core::CReadWriteLock mGlobeControlLocker;
				private:
					ev_void clearOtiosePoint();
					//EarthView::IndustryEngine::DynamicModelLibrary::CControlPointBuffer* mFirstPointBuffer;
					//EarthView::IndustryEngine::DynamicModelLibrary::CControlPointBuffer* mSecondPointBuffer;

			};  
		}
	}
}
#endif

