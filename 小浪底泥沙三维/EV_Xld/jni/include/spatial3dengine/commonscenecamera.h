#ifndef _CCOMMONSCENECAMERA_H_
#define _CCOMMONSCENECAMERA_H_
#pragma once

#include "spatial3dengine/spatial3dengineconfig.h"
#include "graphic/camera.h"
#include "mathengine/ev_math.h"
#include "mathengine/matrix3.h"
#include "mathengine/matrix4.h"
#include "spatial3dengine/commonscenemanager.h"
#include "core/threaddefines.h"
#include <float.h>
#include "mathengine/mathutility.h"
#include "spatial3dengine/globecamera.h"
#include "plugin_octreescenemanager/octreecamera.h"


namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				class CRay;
			}
		}
		namespace Graphic
		{
			class CSceneNode;
		}
	}
}

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			class CCommonSceneManager;

			/// <summary>
			/// 通用场景相机类
			/// 此类定义了通用场景中相机的主要操作
			/// </summary>
			class EV_Spatial3DEngine_DLL CCommonSceneCamera :public EarthView::World::Graphic::COctreeCamera
			{
			public:
				/// <summary>
				/// 构造函数。
				/// </summary>
				/// <param name="name">相机的名字</param>
				/// <param name="ref_sm">场景管理器</param>
				/// <returns></returns>
				CCommonSceneCamera(_in const EVString& name, _in EarthView::World::Graphic::CSceneManager* ref_sm);

				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ~CCommonSceneCamera(void);
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CCommonSceneCamera(_in EarthView::World::Core::CNameValuePairList* pList);

			public:
				/// <summary>
				/// 初始化函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void initialize();

				/// <summary>
				/// 初始角度
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void computeAngles();

				/// <summary>
				/// 设置旋转参数
				/// </summary>
				/// <param name="axisofRotation">旋转轴</param>
				/// <param name="degreePerFrame">每帧旋转角度</param>
				/// <returns></returns>
				ev_void setRotationParam(const EarthView::World::Spatial::Math::CVector3& axisofRotation,const EarthView::World::Spatial::Math::CRadian& degreePerFrame);
				
				/// <summary>
				/// 判断是否为同一个相机
				/// </summary>
				/// <param name="rhs">目标相机</param>
				/// <returns>判断结果</returns>
				ev_bool operator == (_in const EarthView::World::Spatial3D::CCommonSceneCamera& rhs);

				/// <summary>
				/// 判断是否为同一个相机
				/// </summary>
				/// <param name="rhs">目标相机</param>
				/// <returns>判断结果</returns>
				ev_bool operator != (_in const EarthView::World::Spatial3D::CCommonSceneCamera& rhs);

				/// <summary>
				/// 赋值运算符重载
				/// </summary>
				/// <param name="rhs">目标相机</param>
				/// <returns></returns>
				void operator = (_in const EarthView::World::Spatial3D::CCommonSceneCamera& rhs);

				/// <summary>
				/// 设置相机的偏航角
				/// </summary>
				/// <param name="heading">偏航角</param>
				/// <returns></returns>
				inline void setHeading(_in const EarthView::World::Spatial::Math::CDegree& heading)
				{
					EV_LOCK_MUTEX(mMutex)
						mHeading = heading;
				}

				/// <summary>
				/// 获取相机的偏航角
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				inline const EarthView::World::Spatial::Math::CDegree& getHeading() const
				{
					EV_LOCK_MUTEX(mMutex)
						return mHeading;
				}

				/// <summary>
				/// 设置相机的俯仰角
				/// </summary>
				/// <param name="tilt">俯仰角</param>
				/// <returns></returns>
				inline void setTilt(_in const EarthView::World::Spatial::Math::CDegree& tilt)
				{
					EV_LOCK_MUTEX(mMutex)
						mTilt=tilt;
				}

				/// <summary>
				/// 获取相机的俯仰角
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				inline const EarthView::World::Spatial::Math::CDegree& getTilt() const
				{
					EV_LOCK_MUTEX(mMutex)
						return mTilt;
				}

				/// <summary>
				/// 设置观察位置
				/// </summary>
				/// <param name="observer">观察位置</param>
				/// <returns></returns>
				inline void setObserver(_in const EarthView::World::Spatial::Math::CVector3& observer)
				{
					EV_LOCK_MUTEX(mMutex)
						mObserver = observer;
				}

				/// <summary>
				/// 获取观察点位置
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				inline const EarthView::World::Spatial::Math::CVector3& getObserver() const
				{
					EV_LOCK_MUTEX(mMutex)
						return mObserver;
				}

				/// <summary>
				/// 设置观察目标位置
				/// </summary>
				/// <param name="target">观察目标位置</param>
				/// <returns></returns>
				inline void setTarget(_in const EarthView::World::Spatial::Math::CVector3& target)
				{
					EV_LOCK_MUTEX(mMutex)
						mTarget = target;
				}

				/// <summary>
				/// 获取观察目标
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				inline const EarthView::World::Spatial::Math::CVector3& getTarget() const
				{
					EV_LOCK_MUTEX(mMutex)
						return mTarget;
				}

				/// <summary>
				/// 设置相机的上方向
				/// </summary>
				/// <param name="upVector">上方向</param>
				/// <returns></returns>
				inline void setUpVector(_in const EarthView::World::Spatial::Math::CVector3& upVector)
				{
					EV_LOCK_MUTEX(mMutex)
						mUpVector = upVector;
				}

				/// <summary>
				/// 获取相机的上方向
				/// </summary>
				/// <param name=""></param>
				/// <returns>相机的上方向</returns>
				inline const EarthView::World::Spatial::Math::CVector3& getUpVector() const
				{
					EV_LOCK_MUTEX(mMutex)
						return mUpVector;
				}

				/// <summary>
				/// 设置相机的观察方向
				/// </summary>
				/// <param name="lookVector">观察方向</param>
				/// <returns></returns>
				inline void setLookVector(_in const EarthView::World::Spatial::Math::CVector3& lookVector)
				{
					EV_LOCK_MUTEX(mMutex)
						mLookVector = lookVector;
				}

				/// <summary>
				/// 获取相机的观察方向
				/// </summary>
				/// <param name=""></param>
				/// <returns>观察方向</returns>
				inline const EarthView::World::Spatial::Math::CVector3& getLookVector() const
				{
					EV_LOCK_MUTEX(mMutex)
						return mLookVector;
				}

				/// <summary>
				/// 设置相机的右方向
				/// </summary>
				/// <param name="rightVector">右方向</param>
				/// <returns></returns>
				inline void setRightVector(_in const EarthView::World::Spatial::Math::CVector3& rightVector)
				{
					EV_LOCK_MUTEX(mMutex)
						mRightVector=rightVector;
				}

				/// <summary>
				/// 获取相机的右方向
				/// </summary>
				/// <param name=""></param>
				/// <returns>右方向</returns>
				inline const EarthView::World::Spatial::Math::CVector3& getRightVector() const
				{
					EV_LOCK_MUTEX(mMutex)
						return mRightVector;
				}

				/// <summary>
				/// 获取相机的高度
				/// </summary>
				/// <param name=""></param>
				/// <returns>高度</returns>
				inline const ev_real64 getAlititude() const
				{
					EV_LOCK_MUTEX(mMutex)
						return mAltitude;
				}

				/// <summary>
				/// 获取相机跟目标之间的距离
				/// </summary>
				/// <param name=""></param>
				/// <returns>距离</returns>
				inline const ev_real64 getDistance() const
				{
					EV_LOCK_MUTEX(mMutex)
						return mDistance;
				}

				/// <summary>
				/// 获取最小俯仰角
				/// </summary>
				/// <param name=""></param>
				/// <returns>最小俯仰角</returns>
				const EarthView::World::Spatial::Math::CDegree& getMinTilt() const
				{
					return mMinTilt;
				}

				/// <summary>
				/// 获取最大俯仰角
				/// </summary>
				/// <param name=""></param>
				/// <returns>最大俯仰角</returns>
				const EarthView::World::Spatial::Math::CDegree& getMaxTilt() const
				{
					return mMaxTilt;
				}

				/// <summary>
				/// 设置鼠标事件
				/// </summary>
				/// <param name="mouseEvent">鼠标事件</param>
				/// <returns></returns>
				inline void setMouseEvent(_in const ev_bool mouseEvent)
				{
					EV_LOCK_MUTEX(mMutex)
						mMouseEvent=mouseEvent;
				}

				/// <summary>
				/// 获取鼠标事件
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				inline const ev_bool getMouseEvent() const
				{
					EV_LOCK_MUTEX(mMutex)
						return mMouseEvent;
				}

				/// <summary>
				/// 设置滚轮事件
				/// </summary>
				/// <param name="wheelEvent">滚轮事件</param>
				/// <returns></returns>
				inline void setWheelEvent(_in const ev_bool wheelEvent)
				{
					EV_LOCK_MUTEX(mMutex)
						mWheelEvent=wheelEvent;
				}

				/// <summary>
				/// 获取滚轮事件
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				inline const ev_bool getWheelEvent() const
				{
					EV_LOCK_MUTEX(mMutex)
						return mWheelEvent;
				}

				/// <summary>
				/// 计算相机的高度
				/// </summary>
				/// <param name="position">相机的高度</param>
				/// <param name="plane">参考平面</param>
				/// <returns></returns>
				void computeAlitude(_in const EarthView::World::Spatial::Math::CVector3& position,_in const EarthView::World::Spatial::Math::CPlane& plane);
				
				/// <summary>
				/// 计算相机和目标间的距离
				/// </summary>
				/// <param name="point1">相机的位置</param>
				/// <param name="point2">目标的位置</param>
				/// <returns></returns>
				void computeDistance(_in const EarthView::World::Spatial::Math::CVector3 point1,_in const EarthView::World::Spatial::Math::CVector3 point2);
				
				/// <summary>
				/// 设置相机的状态
				/// </summary>
				/// <param name="position">相机的位置</param>
				/// <param name="heading">相机的偏航角</param>
				/// <param name="tilt">相机的俯仰角</param>
				/// <returns></returns>
				void setCameraState(_in const EarthView::World::Spatial::Math::CVector3& position,_in const EarthView::World::Spatial::Math::CDegree& heading,_in const EarthView::World::Spatial::Math::CDegree& tilt);
				
				/// <summary>
				/// 计算相机的俯仰角
				/// </summary>
				/// <param name="target">观察目标</param>
				/// <param name="observer">观察点</param>
				/// <param name="upVector">相机的上方向</param>
				/// <returns></returns>
				ev_real64 computeCameraTilt(_in const EarthView::World::Spatial::Math::CVector3& target,_in const EarthView::World::Spatial::Math::CVector3& observer,_in const EarthView::World::Spatial::Math::CVector3& upVector);
				
				/// <summary>
				/// 计算相机的偏航角
				/// </summary>
				/// <param name="up">相机的上方向</param>
				/// <param name="look">相机的观察方向</param>
				/// <param name="tiltRadious">相机的俯仰半径</param>
				/// <param name="target">观察目标</param>
				/// <returns></returns>
				ev_real64 computeCameraHeading(_in const EarthView::World::Spatial::Math::CVector3& up,_in const EarthView::World::Spatial::Math::CVector3& look,_in ev_real64 tiltRadious,_in const EarthView::World::Spatial::Math::CVector3& target);

				/// <summary>
				/// 计算相机的世界变换矩阵
				/// </summary>
				/// <param name="position">相机的位置</param>
				/// <returns>结果矩阵</returns>
				EarthView::World::Spatial::Math::CMatrix3 computeAxisMatrix(_in EarthView::World::Spatial::Math::CVector3 position);

				/// <summary>
				/// 计算相机的观察矩阵
				/// </summary>
				/// <param name=""></param>
				/// <returns>结果矩阵</returns>
				EarthView::World::Spatial::Math::CMatrix4 computeViewMatrix();  

				/// <summary>
				/// 计算投影矩阵
				/// </summary>
				/// <param name=""></param>
				/// <returns>结果矩阵</returns>
				EarthView::World::Spatial::Math::CMatrix4 computeProjectMatrix();

				/// <summary>
				/// 设置相机的观察矩阵
				/// </summary>
				/// <param name="viewMatrix">观察矩阵</param>
				/// <returns></returns>
				void setViewMatrix(_in const EarthView::World::Spatial::Math::CMatrix4& viewMatrix);
				
				/// <summary>
				/// 设置相机的观察矩阵
				/// </summary>
				/// <param name="observer">观察位置</param>
				/// <param name="target">观察目标</param>
				/// <param name="upVector">相机的上方向</param>
				/// <returns></returns>
				ev_void setViewMatrix(_in const EarthView::World::Spatial::Math::CVector3& observer,_in const EarthView::World::Spatial::Math::CVector3& target,_in const EarthView::World::Spatial::Math::CVector3& upVector);
				
				/// <summary>
				/// 设置相机的初始观察矩阵
				/// </summary>
				/// <param name="Position">相机位置</param>
				/// <param name="target">观察目标</param>
				/// <param name="upVector">相机的上方向</param>
				/// <returns></returns>
				ev_void setInitViewMatrix(EarthView::World::Spatial::Math::CVector3& Position,EarthView::World::Spatial::Math::CVector3& target,EarthView::World::Spatial::Math::CVector3& upVector);
				
				/// <summary>
				/// 求屏幕点在世界空间中所在的射线
				/// </summary>
				/// <param name="x">屏幕点的x坐标</param>
				/// <param name="y">屏幕点的y坐标</param>
				/// <param name="top">视口上边界</param>
				/// <param name="left">视口左边界</param>
				/// <param name="width">视口的宽度</param>
				/// <param name="height">视口的高度</param>
				/// <returns>结果射线</returns>
				EarthView::World::Spatial::Math::CRay screenToScene(_in ev_real32 x,_in ev_real32 y,_in ev_real64 top, _in ev_real64 left,_in ev_real64 width,_in ev_real64 height);

			public:
				EarthView::World::Spatial::Math::CDegree mHeading;                       //偏航角
				EarthView::World::Spatial::Math::CDegree mTilt;                          //俯仰角
				EarthView::World::Spatial::Math::CDegree mMinTilt;
				EarthView::World::Spatial::Math::CDegree mMaxTilt;

				ev_real64 mAltitude;                   //相机与网格平面的距离
				ev_real64 mDistance;                   //观察者与观察点之间的距离

				EarthView::World::Spatial::Math::CVector3 mTarget;
				EarthView::World::Spatial::Math::CVector3 mObserver;
				EarthView::World::Spatial::Math::CVector3 mUpVector;
				EarthView::World::Spatial::Math::CVector3 mLookVector;
				EarthView::World::Spatial::Math::CVector3 mRightVector;
				ev_bool misCameraInitialized;

				EarthView::World::Spatial::Math::CVector3 minitUpVector;
				EarthView::World::Spatial::Math::CVector3 mInitialLookVector;
				EarthView::World::Spatial::Math::CVector3 mCameraInitialPosition;

				EV_MUTEX(mMutex)

				EarthView::World::Spatial3D::CCommonSceneManager* mCommonSceneManager;

				EarthView::World::Spatial::Math::CVector3 mlastRightVector;
				EarthView::World::Spatial::Math::CRadian mAngleX;
				EarthView::World::Spatial::Math::CRadian mAngleY;
				EarthView::World::Spatial::Math::CVector3 mAxisofRotation;
				EarthView::World::Spatial::Math::CRadian mDegreePerFrame; 

				ev_bool mMouseEvent;
				ev_bool mWheelEvent;

			protected:
				CQuaternion4d mQuaternion;
			};
		}
	}
}

#endif
