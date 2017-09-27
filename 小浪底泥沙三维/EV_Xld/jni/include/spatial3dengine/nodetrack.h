#ifndef NODETRACK_H_
#define NODETRACK_H_

#include "spatial3dengine/spatial3dengineconfig.h"

#include "graphic/animation.h"
#include "graphic/framelistener.h"
#include "core/commonstringpairlist.h"
#include "spatial3dengine/controlpoint.h"
#include "core/sharedptr.h"
#include "core/memoryallocatedobject.h"


namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class CAnimation;
			class CAnimationState;
			class CSceneNode;
			class CSceneManager;
			class CAnimationTrack::CAnimationTrackListener;
		}
		namespace Spatial3D
		{
			/// <summary>
			/// 时间比例监听器
			/// </summary>
			class EV_Spatial3DEngine_DLL CTrackAnimationTimeListener : public EarthView::World::Core::CBaseObject
			{
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>
				CTrackAnimationTimeListener();
				/// <summary>
				/// 计算时间比例
				/// </summary>
				/// <param name="timePostion">当前时间</param>
				/// <param name="timeLength">时间段的长度</param>
				/// <returns></returns>
				virtual ev_real64 calculateTimeRatio(_in ev_real64 timePostion,_in ev_real64 timeLength);				

			ev_private:
				CTrackAnimationTimeListener(_in EarthView::World::Core::CNameValuePairList* plist);
			};
			/// <summary>
			///动画类
			/// </summary>
			class EV_Spatial3DEngine_DLL CTrackAnimation : public EarthView::World::Graphic::CFrameListener
			{
			public: 
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="name">名字</param>
				/// <param name="ref_sceneManager">场景管理器</param>
				/// <returns></returns>
				CTrackAnimation(_in const EVString& name,_in EarthView::World::Graphic::CSceneManager* ref_sceneManager);
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
				/// 开始动画
				/// </summary>
				/// <returns></returns>
				void startAnimation();
				/// <summary>
				/// 停止动画
				/// </summary>
				/// <returns></returns>
				void stopAnimation();
				/// <summary>
				/// 暂停动画
				/// </summary>
				/// <returns></returns>
				void pauseAnimation();
				/// <summary>
				/// 继续动画
				/// </summary>
				/// <returns></returns>
				void continueAnimation();
				/// <summary>
				/// 返回时间长度
				/// </summary>
				/// <returns></returns>
				ev_real64 getLength();
				/// <summary>
				/// 设置时间比例监听器
				/// </summary>
				/// <returns></returns>
				ev_void setTimeListener(_in EarthView::World::Spatial3D::CTrackAnimationTimeListener* ref_listener);

				/// <summary>
				/// 返回动画作用的节点
				/// </summary>
				/// <returns></returns>
				EarthView::World::Graphic::CSceneNode* getSceneNode();

				/// <summary>
				///设置是否循环
				/// </summary>
				/// <param name="loop">是否循环</param>
				/// <returns></returns>
				void setLoop(_in bool loop);

				/// <summary>
				///获取是否循环
				/// </summary>
				/// <returns></returns>
				bool getLoop();

				/// <summary>
				///设置当前时间比例　
				/// </summary>
				/// <param name="timeRatio">时间比例</param>
				/// <returns></returns>
				void setTimeRatiio(_in ev_real64 timeRatio);

				/// <summary>
				///设置动画监听　
				/// </summary>
				/// <param name="ref_listener">监听</param>
				/// <returns></returns>
				void setTrackListener(_in EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener* ref_listener);
				/// <summary>
				///析构函数
				/// </summary>
				/// <returns></returns>
				virtual ~CTrackAnimation();
				/// <summary>
				///处理每一帧的事件。
				/// </summary>
				/// <param name="evt">帧事件</param>
				/// <returns></returns>
				virtual ev_bool frameRenderingQueued(_in const EarthView::World::Graphic::FrameEvent &evt);

				
				EarthView::World::Graphic::CAnimationState* getAnimationState()const {return mAnimationState;}

ev_private:
				CTrackAnimation(_in EarthView::World::Core::CNameValuePairList* plist);

			protected:
				EVString mName;
				EarthView::World::Graphic::CSceneManager* msceneManager;
				ev_bool mPlayAnimation;
				EarthView::World::Graphic::CSceneNode* mSceneNode;
				EarthView::World::Graphic::CAnimation* mAnimation;
				EarthView::World::Graphic::CAnimationState* mAnimationState;
				EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener* mTrackListener;
				ev_bool mPaused;
				double mTimeRatio;
				EarthView::World::Spatial3D::CTrackAnimationTimeListener* mTimeListener;
				ev_bool mCreated;				
			};
			/// <summary>
			///节点动画类
			/// </summary>
			class EV_Spatial3DEngine_DLL CNodeTrackAnimation:public EarthView::World::Spatial3D::CTrackAnimation
			{
			public: 
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="name">名字</param>
				/// <param name="ref_sceneManager">场景管理器</param>
				/// <returns></returns>
				CNodeTrackAnimation(_in const EVString& name,_in EarthView::World::Graphic::CSceneManager* ref_sceneManager);
				/// <summary>
				/// 创建动画
				/// </summary>
				/// <param name="ref_node">动画作用的节点。</param>
				/// <returns></returns>
				virtual void createAnimation(_in EarthView::World::Graphic::CSceneNode* ref_node);
				/// <summary>
				/// 设置位置插值方式
				/// </summary>
				/// <param name="interpolationMode">位置的插值方式</param>
				/// <returns></returns>
				void setInterpolationMode(_in EarthView::World::Graphic::CAnimation::InterpolationMode interpolationMode);
				/// <summary>
				/// 设置旋转的插值方式
				/// </summary>
				/// <param name="rotationInterpolationMode">旋转的插值方式</param>
				/// <returns></returns>
				void setRotationInterpolationMode(_in EarthView::World::Graphic::CAnimation::RotationInterpolationMode rotationInterpolationMode);
				/// <summary>
				/// 加入控制点
				/// </summary>
				/// <param name="time">时间</param>
				/// <param name="controlPoint">控制点</param>
				/// <returns></returns>
				void insertControlPoint(_in ev_real64 time,_in const EarthView::World::Spatial3D::CControlPoint& controlPoint);
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				virtual ~CNodeTrackAnimation();
				/// <summary>
				/// 设置控制点
				/// </summary>
				/// <param name="controlPointMap">控制点容器</param>
				/// <returns></returns>
				void setControlPointMap(_in const EarthView::World::Spatial3D::CControlPointMap& controlPointMap)
				{
					mcontrolPointMap = controlPointMap;
				}

            ev_private:
				CNodeTrackAnimation(_in EarthView::World::Core::CNameValuePairList* plist);

			protected:
				EarthView::World::Graphic::CAnimation::InterpolationMode minterpolationMode;
				EarthView::World::Graphic::CAnimation::RotationInterpolationMode mrotationInterpolationMode;
				EarthView::World::Spatial3D::CControlPointMap mcontrolPointMap;
			};
			/// <summary>
			///节点动画类的智能指针
			/// </summary>
			class EV_Spatial3DEngine_DLL CNodeTrackAnimationPtr:public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::CNodeTrackAnimation>
			{
ev_private:
				CNodeTrackAnimationPtr(_in EarthView::World::Core::CNameValuePairList *pList);
				explicit CNodeTrackAnimationPtr(CNodeTrackAnimation *rep, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<CNodeTrackAnimation>(rep, inFreeMethod) {}
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>
				CNodeTrackAnimationPtr();
				explicit CNodeTrackAnimationPtr(CNodeTrackAnimation *rep);
				CNodeTrackAnimationPtr(const CNodeTrackAnimationPtr &tp);

				EarthView::World::Spatial3D::CNodeTrackAnimation *get() const
				{
					return EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::CNodeTrackAnimation>::get();
				}

				EarthView::World::Spatial3D::CNodeTrackAnimationPtr &operator=(const EarthView::World::Spatial3D::CNodeTrackAnimationPtr &r);

			};
			/// <summary>
			///动画类的容器
			/// </summary>
			class EV_Spatial3DEngine_DLL CTrackAnimationVector:public EarthView::World::Core::CBaseObject
			{
ev_private:
				typedef vector<EarthView::World::Spatial3D::CTrackAnimation*> InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::reference reference;
				typedef InternalList::const_reference const_reference;
				typedef InternalList::value_type value_type;
				RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
				/// <summary>
				/// 集合插入元素
				/// </summary>
				/// <param name="pos">位置迭代器</param>
				/// <param name="t">元素值</param>
				/// <returns>插入元素后元素迭代器</returns>
				CTrackAnimationVector::iterator insert(_in CTrackAnimationVector::iterator pos, _in CTrackAnimation* const &t);
			private:
				InternalList mList;
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CTrackAnimationVector(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CTrackAnimationVector();
				/// <summary>
				/// 在容器最后添加元素
				/// </summary>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				ev_void push_back(_in EarthView::World::Spatial3D::CTrackAnimation* const &t);
				/// <summary>
				/// 删除容器最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void pop_back();
				/// <summary>
				/// 返回容器首个元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器首个元素</returns>
				EarthView::World::Spatial3D::CTrackAnimation*& front();
				/// <summary>
				/// 返回容器最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器最后元素</returns>
				EarthView::World::Spatial3D::CTrackAnimation*& back();
				/// <summary>
				/// 容器中间位置插入元素
				/// </summary>
				/// <param name="pos">位置</param>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				ev_void insert(_in ev_uint32 pos, _in EarthView::World::Spatial3D::CTrackAnimation* const &t);
				/// <summary>
				/// 删除容器中间位置元素
				/// </summary>
				/// <param name="pos">位置</param>
				/// <returns></returns>
				ev_void remove(_in ev_size_t pos);
				/// <summary>
				/// 返回容器是否为空
				/// </summary>
				/// <param name=""></param>
				/// <returns>容器为空返回true，否则false</returns>
				ev_bool empty() const;
				/// <summary>
				/// 重载[]操作符
				/// </summary>
				/// <param name="n">下标位置</param>
				/// <returns>返回下标对应的值</returns>
				EarthView::World::Spatial3D::CTrackAnimation*& operator[](_in ev_size_t n);
				/// <summary>
				/// 重载[]操作符
				/// </summary>
				/// <param name="n">下标位置</param>
				/// <returns>返回下标对应的值</returns>
				EarthView::World::Spatial3D::CTrackAnimation* const &operator[](_in ev_size_t n) const;
				/// <summary>
				/// 返回某位置的元素值
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>返回位置对应的值</returns>
				EarthView::World::Spatial3D::CTrackAnimation*& at(_in ev_size_t n);
				/// <summary>
				/// 返回某位置的元素值
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>返回位置对应的值</returns>
				EarthView::World::Spatial3D::CTrackAnimation* const &at(_in ev_size_t n) const;
				/// <summary>
				/// 返回元素的数量大小
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回元素的数量大小</returns>
				ev_size_t size() const;
				/// <summary>
				/// 改变容器中元素数量大小
				/// </summary>
				/// <param name="newSize">改变的容器中元素数量大小</param>
				/// <returns></returns>
				ev_void resize(_in ev_size_t newSize);
				/// <summary>
				/// 改变容器中最小的元素容纳数量
				/// </summary>
				/// <param name="count">最小的元素容纳数量</param>
				/// <returns></returns>
				ev_void reserve(_in ev_size_t count);
				/// <summary>
				/// 清空所有元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void clear();
			};

		}
	}
}

#endif
