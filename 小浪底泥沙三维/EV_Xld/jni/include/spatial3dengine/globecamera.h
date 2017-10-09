#ifndef CGLOBECAMERA_H
#define CGLOBECAMERA_H

#define TILT_TEST 1

#include "plugin_octreescenemanager/octreecamera.h"
#include "spatial3dengine/spatial3dengineconfig.h"

#include "mathengine/earthradius.h"
#include "mathengine/ev_math.h"
#include "mathengine/matrix3.h"
#include "mathengine/matrix4.h"

#include "core/threaddefines.h"

#include <float.h>

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
			class CViewport;
		}
	}
}

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			class CGeoSceneManager;
			/// <summary>
			/// 四元数类，数据精度为64位浮点，跟一般的四元数类相比增加了一些差值方法
			/// </summary>
			class UNWARP_EXPORT CQuaternion4d
			{
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>
				CQuaternion4d();
ev_private:
				CQuaternion4d(_in EarthView::World::Core::CNameValuePairList* pList);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="x"></param>
				/// <param name="y"></param>
				/// <param name="z"></param>
				/// <param name="w"></param>
				/// <returns></returns>
				CQuaternion4d(_in ev_real64 x,_in ev_real64 y,_in ev_real64 z, _in ev_real64 w);
				/// <summary>
				/// 由欧拉角转换成四元数
				/// </summary>
				/// <param name="yaw">偏航角</param>
				/// <param name="pitch">俯仰角</param>
				/// <param name="roll">横滚角</param>
				/// <returns></returns>
				static CQuaternion4d eulerToQuaternion(_in ev_real64 yaw, _in ev_real64 pitch, _in ev_real64 roll);
				/// <summary>
				/// 由四元数转成欧拉角
				/// </summary>
				/// <param name="q">四元数</param>
				/// <returns></returns>
				static EarthView::World::Spatial::Math::CVector3 quaternionToEuler(_in const CQuaternion4d& q);
				/// <summary>
				/// 加号运算符
				/// </summary>
				/// <param name="b">右操作数</param>
				/// <returns></returns>
				CQuaternion4d operator + (_in const CQuaternion4d& b);
				/// <summary>
				/// 加号运算符
				/// </summary>
				/// <param name="b">右操作数</param>
				/// <returns></returns>
				CQuaternion4d operator + (_in const CQuaternion4d& b) const;
				/// <summary>
				/// 减号运算符
				/// </summary>
				/// <param name="b">右操作数</param>
				/// <returns></returns>
				CQuaternion4d operator - (_in const CQuaternion4d& b);
				/// <summary>
				/// 减号运算符
				/// </summary>
				/// <param name="b">右操作数</param>
				/// <returns></returns>
				CQuaternion4d operator - (_in const CQuaternion4d& b) const;
				/// <summary>
				/// 乘号运算符
				/// </summary>
				/// <param name="b">右操作数</param>
				/// <returns></returns>
				CQuaternion4d operator * (_in ev_real64 s);
				/// <summary>
				/// 除号运算符
				/// </summary>
				/// <param name="b">右操作数</param>
				/// <returns></returns>
				CQuaternion4d operator / ( _in ev_real64 s);
				/// <summary>
				/// 除号运算符
				/// </summary>
				/// <param name="b">右操作数</param>
				/// <returns></returns>
				CQuaternion4d operator / ( _in ev_real64 s) const;
				/// <summary>
				/// 乘号运算符
				/// </summary>
				/// <param name="s">浮点数</param>
				/// <param name="q">四无数</param>
				/// <returns></returns>
				friend CQuaternion4d operator * (_in ev_real64 s, _in const CQuaternion4d& q)
				{
					return CQuaternion4d(s * q.mx, s * q.my, s * q.mz, s * q.mw);
				}
				/// <summary>
				/// 乘号运算符
				/// </summary>
				/// <param name="q">四无数</param>
				/// <param name="s">浮点数</param>
				/// <returns></returns>
				friend CQuaternion4d operator * (_in const CQuaternion4d& q, _in ev_real64 s)
				{
					return CQuaternion4d(s * q.mx, s * q.my, s * q.mz, s * q.mw);
				}
				/// <summary>
				/// 乘号运算符
				/// </summary>
				/// <param name="a">左操作数</param>
				/// <param name="b">右操作数</param>
				/// <returns></returns>
				friend CQuaternion4d operator * (_in const CQuaternion4d& a,_in const CQuaternion4d& b)
				{
					return CQuaternion4d(
						a.mw * b.mx + a.mx * b.mw + a.my * b.mz - a.mz * b.my,
						a.mw * b.my + a.my * b.mw + a.mz * b.mx - a.mx * b.mz,
						a.mw * b.mz + a.mz * b.mw + a.mx * b.my - a.my * b.mx,
						a.mw * b.mw - a.mx * b.mx - a.my * b.my - a.mz * b.mz);
				}
				/// <summary>
				/// 赋值运算符
				/// </summary>
				/// <param name="q">右操作数</param>
				/// <returns></returns>
				void operator = (_in const CQuaternion4d& q);
				/// <summary>
				/// 取反
				/// </summary>
				/// <returns></returns>
				CQuaternion4d conjugate();

				CQuaternion4d conjugate() const
				{
					return CQuaternion4d( -mx, -my, -mz, mw);
				}
				/// <summary>
				/// 在两个四元数之间按比例插值
				/// </summary>
				/// <param name="q0">第一个四元数</param>
				/// <param name="q1">第二个四元数</param>
				/// <param name="t">插值比例</param>
				/// <returns></returns>
				static CQuaternion4d slerp(_in const CQuaternion4d& q0, _in const CQuaternion4d& q1, _in ev_real64 t);
				/// <summary>
				/// 四元数的长度
				/// </summary>
				/// <returns></returns>
				ev_real64 length();

				/// <summary>
				/// 四元数的长度
				/// </summary>
				/// <returns></returns>
				ev_real64 length() const
				{
					return sqrt(mx * mx + my * my +mz * mz + mw * mw);
				}
				/// <summary>
				/// 四元数的单位化
				/// </summary>
				/// <returns></returns>
				void normalize();

				static CQuaternion4d squad(_in const CQuaternion4d& q1,_in const CQuaternion4d& a,_in const CQuaternion4d& b,_in const CQuaternion4d& c,_in ev_real64 t);

				static CQuaternion4d Ln(_in const CQuaternion4d& q);

				static CQuaternion4d exp(_in const CQuaternion4d& q);

				static void squadSetup(_in CQuaternion4d& outA,_in CQuaternion4d& outB,_in CQuaternion4d& outC,_in CQuaternion4d q0,_in CQuaternion4d q1,_in CQuaternion4d q2,_in CQuaternion4d q3);

			public:
				ev_real64 mx;
				ev_real64 my;
				ev_real64 mz;
				ev_real64 mw;
			};

			/// <summary>
			/// 数字地球相机
			/// </summary>
			class EV_Spatial3DEngine_DLL CGlobeCamera: public EarthView::World::Graphic::COctreeCamera
			{
			public:
				class EV_Spatial3DEngine_DLL CGlobeCameraListener : public EarthView::World::Graphic::CCamera::CCameraListener
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CGlobeCameraListener();
ev_private:
					CGlobeCameraListener(_in EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 相机变化后通知接口
					/// </summary>
					/// <param name="camera">相机</param>
					/// <returns></returns>
					virtual void cameraParamChanged(_in EarthView::World::Graphic::CCamera* camera){}
				};

				class EV_Spatial3DEngine_DLL CProjectMatrixListener : public EarthView::World::Graphic::CCamera::CCameraListener
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CProjectMatrixListener();
ev_private:
					CProjectMatrixListener(_in EarthView::World::Core::CNameValuePairList* pList);
				public:

					virtual ~CProjectMatrixListener();

					/// <summary>
					/// 设置投影变换矩阵参数
					/// </summary>
					/// <param name="camera">相机</param>
					/// <returns></returns>
					virtual ev_void parameterChanging(_in EarthView::World::Spatial3D::CGlobeCamera* globeCamera,_inout ev_real64& nearDistance ,_inout ev_real64& farDistance );
				};

ev_private:
				CGlobeCamera(_in EarthView::World::Core::CNameValuePairList* pList);
			public:
				/// <summary>
				/// 指示相机是否变化过
				/// </summary>
				/// <returns></returns>
				ev_bool hasChanged() const 
				{
					return mviewMatrixChanged;
				}
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="name">名称</param>
				/// <param name="sm">场景管理器</param>
				/// <returns></returns>
				CGlobeCamera(_in const EVString& name, _in EarthView::World::Graphic::CSceneManager* ref_sm);
				/// <summary>
				/// ==运算符
				/// </summary>
				/// <param name="rhs">右操作数</param>
				/// <returns></returns>
				ev_bool operator == (_in const EarthView::World::Spatial3D::CGlobeCamera& rhs);
				/// <summary>
				/// !=运算符
				/// </summary>
				/// <param name="rhs">右操作数</param>
				/// <returns></returns>
				ev_bool operator != (_in const EarthView::World::Spatial3D::CGlobeCamera& rhs);
				/// <summary>
				/// 赋值运算符
				/// </summary>
				/// <param name="rhs">右操作数</param>
				/// <returns></returns>
				void operator = (_in const EarthView::World::Spatial3D::CGlobeCamera& rhs);
				virtual _extfree EarthView::World::Graphic::CCamera* clone(const EVString& newName)const;
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				virtual ~CGlobeCamera();

				/// <summary>
				/// 设置计算投影变换矩阵的监听
				/// </summary>
				/// <param name="pPorjectMatrixListener">监听</param>
				/// <returns></returns>
				ev_void setProjectMatrixListener(_in EarthView::World::Spatial3D::CGlobeCamera::CProjectMatrixListener* pPorjectMatrixListener);

				/// <summary>
				/// 获取计算投影变换矩阵的监听
				/// </summary>
				/// <returns></returns>
				EarthView::World::Spatial3D::CGlobeCamera::CProjectMatrixListener* getProjectMatrixListener();

				/// <summary>
				/// 由屏幕上的点坐标得到射线
				/// </summary>
				/// <param name="x">屏幕点的x坐标</param>
				/// <param name="y">屏幕点的y坐标</param>
				/// <param name="top">视口左上角的Ｙ坐标</param>
				/// <param name="left">视口左上角的X坐标</param>
				/// <param name="width">视口的宽度</param>
				/// <param name="height">视口的高度</param>
				/// <returns></returns>
				EarthView::World::Spatial::Math::CRay screenToScene(_in ev_real32 x,_in ev_real32 y,_in ev_real64 top, _in ev_real64 left,_in ev_real64 width,_in ev_real64 height);

				virtual ev_bool isVisible(_in const EarthView::World::Spatial::Math::CAxisAlignedBox &bound, _in EarthView::World::Graphic::FrustumPlane *culledBy) const;
				/// <summary>
				///判断包围盒是否可见
				/// </summary>
				/// <param name="bound">包围盒</param>
				/// <returns></returns>
				virtual ev_bool isVisible(_in const EarthView::World::Spatial::Math::CAxisAlignedBox &bound) const;
				/// <summary>
				///返回相机上一帧的视图变换矩阵
				///</summary>
				/// <returns></returns>
				EarthView::World::Spatial::Math::CMatrix4 getLastViewMatrix() const
				{
					return mlastViewMatrix;
				}

				ev_bool getIntersectPointWithPlane(_in const EarthView::World::Spatial::Math::CRay& ray,_in const EarthView::World::Spatial::Math::CVector3& normal,_in const EarthView::World::Spatial::Math::CVector3& point, _out EarthView::World::Spatial::Math::CVector3& intersectPoint);
ev_private:
				/// <summary>
				///返回惯性角度
				///</summary>
				/// <returns></returns>
				ev_real64 getInertiaRotationRadian()
				{
					return mDeltaPan;
				}
				/// <summary>
				///设置惯性角度
				///</summary>
				/// <returns></returns>
				void setInertiaRotationRadian(ev_real64 inertiaRate);

				/// <summary>
				///设置惯性转动的减速度
				///</summary>
				/// <returns></returns>
				void setInertiaDecelerateRate(ev_real64 inertiaDecelerateRate,ev_real64 totalTime);

				/// <summary>
				///重置惯性转动的相关参数
				///</summary>
				/// <returns></returns>
				void resetInertia();

	            void setInertialAxisAndAngle(_in const EarthView::World::Spatial::Math::CVector3& axis,_in ev_real64 angle);

				/// <summary>
				///惯性转动
				///</summary>
				/// <returns></returns>
				void inertiaPan(ev_real64 time);

			public:
				/// <summary>
				///转动相机
				///</summary>
				/// <param name="preLatitude">第一个点的纬度</param>
				/// <param name="preLongitude">第一个点的纬度</param>
				/// <param name="latitude">当前点的纬度</param>
				/// <param name="longitude">当前点的纬度</param>
				/// <returns></returns>
				void pan(_in ev_real64 preLatitude,_in ev_real64 preLongitude,_in ev_real64 latitude,_in ev_real64 longitude)
				{
					pan(EarthView::World::Spatial::Math::CDegree(preLatitude),EarthView::World::Spatial::Math::CDegree(preLongitude),EarthView::World::Spatial::Math::CDegree(latitude),EarthView::World::Spatial::Math::CDegree(longitude));
				}
				/// <summary>
				///转动相机
				///</summary>
				/// <param name="preLatitude">第一个点的纬度</param>
				/// <param name="preLongitude">第一个点的纬度</param>
				/// <param name="latitude">当前点的纬度</param>
				/// <param name="longitude">当前点的纬度</param>
				/// <returns></returns>
				void pan(_in const EarthView::World::Spatial::Math::CDegree& preLatitude,_in const EarthView::World::Spatial::Math::CDegree& preLongitude,_in const EarthView::World::Spatial::Math::CDegree& latitude,_in const EarthView::World::Spatial::Math::CDegree& longitude);
				/// <summary>
				///转动相机
				///</summary>
				/// <param name="latitudeStep">纬度变化量</param>
				/// <param name="longitudeStep">经度变化量</param>
				/// <returns></returns>
				void pan(const ev_real64 latitudeStep,const ev_real64 longitudeStep);

				/// <summary>
				///转动相机到目标点
				///</summary>
				/// <param name="targetLatitude">目标处的纬度</param>
				/// <param name="targetLongitude">目标处的经度</param>
				/// <returns></returns>
				inline void panTo(_in ev_real64 targetLatitude,_in ev_real64 targetLongitude)
				{
					pan((EarthView::World::Spatial::Math::CDegree(targetLatitude)-mlatitude).valueDegrees(),(EarthView::World::Spatial::Math::CDegree(targetLongitude)-mlongitude).valueDegrees());
				}
				/// <summary>
				///转动相机到目标点
				///</summary>
				/// <param name="targetLatitude">目标处的纬度</param>
				/// <param name="targetLongitude">目标处的经度</param>
				/// <returns></returns>
				inline void panTo(_in const EarthView::World::Spatial::Math::CDegree& targetLatitude,_in const EarthView::World::Spatial::Math::CDegree& targetLongitude)
				{
					pan((targetLatitude-mlatitude).valueDegrees(),(targetLongitude-mlongitude).valueDegrees());
				}

				/// <summary>
				///计算在目标点处的标准矩阵
				///</summary>
				/// <param name="latitude">目标处的纬度</param>
				/// <param name="lonitude">目标处的经度</param>
				/// <returns></returns>
				EarthView::World::Spatial::Math::CMatrix3 computeAxisMatrix(_in ev_real64 latitude,_in ev_real64 lonitude)
				{
					return computeAxisMatrix(latitude,lonitude,(ev_real64)(mradius));
				}
				/// <summary>
				///计算在目标点处的标准矩阵
				///</summary>
				/// <param name="latitude">目标处的纬度</param>
				/// <param name="lonitude">目标处的经度</param>
				/// <param name="radius">目标处的半径</param>
				/// <returns></returns>
				EarthView::World::Spatial::Math::CMatrix3 computeAxisMatrix(_in ev_real64 latitude,_in ev_real64 lonitude,_in ev_real64 radius )
				{
					return computeAxisMatrix(EarthView::World::Spatial::Math::CDegree(latitude),EarthView::World::Spatial::Math::CDegree(lonitude),radius );
				}
				/// <summary>
				///计算在目标点处的标准矩阵
				///</summary>
				/// <param name="latitude">目标处的纬度</param>
				/// <param name="lonitude">目标处的经度</param>
				/// <returns></returns>
				EarthView::World::Spatial::Math::CMatrix3 computeAxisMatrix(_in const EarthView::World::Spatial::Math::CDegree& latitude,_in const EarthView::World::Spatial::Math::CDegree& longitude)
				{
					return computeAxisMatrix(latitude,longitude,(ev_real64)(mradius));
				}
				/// <summary>
				///计算在目标点处的标准矩阵
				///</summary>
				/// <param name="latitude">目标处的纬度</param>
				/// <param name="lonitude">目标处的经度</param>
				/// <param name="radius">目标处的半径</param>
				/// <returns></returns>
				EarthView::World::Spatial::Math::CMatrix3 computeAxisMatrix(_in const EarthView::World::Spatial::Math::CDegree& latitude,_in const EarthView::World::Spatial::Math::CDegree& longitude,_in ev_real64 radius);
				/// <summary>
				///设置允许自动计算投影变换矩阵
				///</summary>
				/// <param name="enable"></param>
				/// <returns></returns>
				ev_void setAutoCalculateProjectMatrix(ev_bool enable)
				{
					mAutoCalculateProjectMatrix = enable;
				}
				/// <summary>
				///返回是否允许自动计算投影变换矩阵
				///</summary>
				/// <returns></returns>
				ev_bool getAutoCalculateProjectMatrix() const
				{
					return mAutoCalculateProjectMatrix;
				}
				/// <summary>
				///设置相机的倾角
				///</summary>
				/// <param name="enable"></param>
				/// <returns></returns>
				void setTilt(_in EarthView::World::Spatial::Math::CDegree& tilt);
				/// <summary>
				///设置相机的位置
				///</summary>
				/// <param name="latitude">纬度</param>
				/// <param name="longitude">经度</param>
				/// <param name="heading">偏航角</param>
				/// <param name="tilt">倾角</param>
				/// <param name="altitude">海拔</param>
				/// <param name="moditifAltitude">目标处的海拔</param>
				/// <returns></returns>
				void setPosition(_in const EarthView::World::Spatial::Math::CDegree& latitude,_in const EarthView::World::Spatial::Math::CDegree& longitude,_in const EarthView::World::Spatial::Math::CDegree& heading,_in const EarthView::World::Spatial::Math::CDegree& tilt,_in ev_real64 altitude,_in ev_real64 moditifAltitude);
				/// <summary>
				///设置相机的位置
				///</summary>
				/// <param name="latitude">纬度</param>
				/// <param name="longitude">经度</param>
				/// <param name="heading">偏航角</param>
				/// <param name="tilt">倾角</param>
				/// <param name="altitude">海拔</param>
				/// <returns></returns>
				void setPosition(_in const EarthView::World::Spatial::Math::CDegree& latitude,_in const EarthView::World::Spatial::Math::CDegree& longitude,_in const EarthView::World::Spatial::Math::CDegree& heading,_in const EarthView::World::Spatial::Math::CDegree& tilt,_in ev_real64 altitude)
				{
					setPosition(latitude,longitude,heading,tilt,altitude,0.0);
				}
				/// <summary>
				///计算相机的倾角
				///</summary>
				/// <param name="target">目标点</param>
				/// <param name="observer">观察者</param>
				/// <param name="upVector">相机的上方向</param>
				/// <returns></returns>
				ev_real64 computeCameraTilt(_in const EarthView::World::Spatial::Math::CVector3& target,_in const EarthView::World::Spatial::Math::CVector3& observer,_in const EarthView::World::Spatial::Math::CVector3& upVector);
				/// <summary>
				///计算相机的偏肮角
				///</summary>
				/// <param name="up">相机的上方向</param>
				/// <param name="look">观察方向</param>
				/// <param name="tiltRadious">相机的倾角</param>
				/// <param name="target">目标点</param>
				/// <returns></returns>
				ev_real64 computeCameraHeading(_in const EarthView::World::Spatial::Math::CVector3& up,_in const EarthView::World::Spatial::Math::CVector3& look,_in ev_real64 tiltRadious,_in const EarthView::World::Spatial::Math::CVector3& target);
				/// <summary>
				///锁定相机到某个节点
				///</summary>
				/// <param name="node">目标点</param>
				/// <returns></returns>
				void lockToTarget(_in EarthView::World::Graphic::CSceneNode* node);
				/// <summary>
				///设置相机锁定的倾角
				///</summary>
				/// <param name="lockTarget">倾角</param>
				/// <returns></returns>
				void setLockTilt(_in const EarthView::World::Spatial::Math::CDegree& lockTarget)
				{
					mlockTilt = lockTarget;
				}
				/// <summary>
				///返回相机锁定的倾角
				///</summary>
				/// <returns></returns>
				EarthView::World::Spatial::Math::CDegree getLockTilt()
				{
					return mlockTilt;
				}
				/// <summary>
				///设置相机锁定的偏航角
				///</summary>
				/// <param name="lockHeading">偏航角</param>
				/// <returns></returns>
				void setLockHeading(_in const EarthView::World::Spatial::Math::CDegree& lockHeading);
				/// <summary>
				///返回相机锁定的偏航角
				///</summary>
				/// <returns></returns>
				EarthView::World::Spatial::Math::CDegree& getLockHeading()
				{
					return mlockHeading;
				}

				/// <summary>
				///设置相机锁定的偏角
				///</summary>
				/// <param name="lockYaw">相机的偏角</param>
				/// <returns></returns>
				void setLockYaw(_in const EarthView::World::Spatial::Math::CDegree& lockYaw);
				/// <summary>
				///返回相机锁定的偏角
				///</summary>
				/// <returns></returns>
				EarthView::World::Spatial::Math::CDegree& getLockYaw()
				{
					return mlockYaw;
				}

				/// <summary>
				///设置相机锁定的距离
				///</summary>
				/// <param name="lockDistance">距离</param>
				/// <returns></returns>
				void setLockDistance(_in ev_real64 lockDistance)
				{
					mlockDistance = lockDistance;
				}
				/// <summary>
				///返回相机锁定的距离
				///</summary>c
				/// <returns></returns>
				ev_real64 getLockDistance()
				{
					return mlockDistance;
				}
				/// <summary>
				///计算相机在锁定点处的观察矩阵
				///</summary>
				/// <returns></returns>
				EarthView::World::Spatial::Math::CMatrix4 computeLockTargetViewMatrix();
				/// <summary>
				///返回相机距地面的距离
				///</summary>
				/// <returns></returns>
				ev_real64 getCameraDistanceOfGround() const
				{
					return maltitude - mAltitudeUnderCamera;
				}
				/// <summary>
				///返回相机正下方地面的高程
				///</summary>
				/// <returns></returns>
				ev_real64 getAltitudeUnderCamera() const 
				{
					return mAltitudeUnderCamera;
				}
				/// <summary>
				///根据欧拉角转动相机
				///</summary>
				/// <param name="yaw">偏航角</param>
				/// <param name="pitch">倾斜角</param>
				/// <param name="roll">横磙角</param>
				/// <returns></returns>
				void rotationYawPitchRoll(_in ev_real64 yaw, _in ev_real64 pitch, _in ev_real64 roll)
				{
					mquaternion = CQuaternion4d::eulerToQuaternion(yaw, pitch, roll)*mquaternion;

					EarthView::World::Spatial::Math::CVector3 v = CQuaternion4d::quaternionToEuler(mquaternion);

					if(!EarthView::World::Spatial::Math::CMath::isNaN(v.y))
						mlatitude = EarthView::World::Spatial::Math::CRadian(v.y);
					if(!EarthView::World::Spatial::Math::CMath::isNaN(v.x))
						mlongitude = EarthView::World::Spatial::Math::CRadian(v.x);
					if(!EarthView::World::Spatial::Math::CMath::isNaN(v.z))
						mheading = EarthView::World::Spatial::Math::CRadian(v.z);
				}
				/// <summary>
				///返回上一次观察方向与地面是否相交
				///</summary>
				/// <returns></returns>
				inline ev_bool getLastIntersected()
				{
					return mlastIntersected;
				}
				/// <summary>
				///返回纬度
				///</summary>
				/// <returns></returns>
				inline const EarthView::World::Spatial::Math::CDegree& getLatitude() const
				{
					
						return mlatitude;
				}
				/// <summary>
				///设置相机的纬度
				///</summary>
				/// <param name="lat">纬度</param>
				/// <returns></returns>
				inline void setLatitude(_in const EarthView::World::Spatial::Math::CDegree& lat)
				{
					
						mlatitude = lat;
					//_notifyParamChanged();
				}
				/// <summary>
				///返回相机的经度
				///</summary>
				/// <returns></returns>
				inline const EarthView::World::Spatial::Math::CDegree& getLongitude() const
				{
					
						return mlongitude;
				}
				/// <summary>
				///返回相机的偏航角
				///</summary>
				/// <returns></returns>
				inline const EarthView::World::Spatial::Math::CDegree& getHeading() const
				{
					
						return mheading;
				}
				/// <summary>
				///设置相机的偏航角
				///</summary>
				/// <param name="heading">偏航角</param>
				/// <returns></returns>
				inline void setHeading(_in const EarthView::World::Spatial::Math::CDegree& heading)
				{
					
						mheading = heading;
				}
				/// <summary>
				///返回相机的倾角
				///</summary>
				/// <returns></returns>
				inline const EarthView::World::Spatial::Math::CDegree& getTilt() const
				{
					
						return mtilt;
				}
				/// <summary>
				///返回相机的海拔
				///</summary>
				/// <returns></returns>
				inline ev_real64 getAltitude() const
				{
					
						return maltitude;
				}
				/// <summary>
				///设置相机的海拔
				///</summary>
				/// <param name="altitude">海拔</param>
				/// <returns></returns>
				void setAltitude(_in ev_real64 altitude)
				{
					
						if(altitude < mminAltitude)
							altitude = mminAltitude;
					if(altitude > mmaxAltitude)
						altitude = mmaxAltitude;
					maltitude = altitude;
					computeDistance(maltitude,mtilt);
					//_notifyParamChanged();
				}
				/// <summary>
				///设置相机海拔的最大值
				///</summary>
				/// <param name="altitude">海拔</param>
				/// <returns></returns>
				void setMaxLimitAltitude(_in ev_real64 maxAltitude)
				{
					mmaxAltitude = maxAltitude;
				}
				/// <summary>
				///获取相机海拔的最小值
				///</summary>
				/// <returns></returns>
				ev_real64 getMaxLimitAltitude() const
				{
					return mmaxAltitude;
				}
				/// <summary>
				///返回相机的距离
				///</summary>
				/// <returns></returns>
				inline ev_real64 getDistance() const
				{
					
						return mdistance;
				}
				/// <summary>
				///设置相机的目标点
				///</summary>
				/// <param name="target">目标点</param>
				/// <returns></returns>
				inline void setTarget(_in const EarthView::World::Spatial::Math::CVector3& target)
				{
					
						mtarget = target;
					//_notifyParamChanged();
				}
				/// <summary>
				///返回相机的目标点
				///</summary>
				/// <returns></returns>
				inline EarthView::World::Spatial::Math::CVector3& getTarget()
				{
					
						return mtarget;
				}
				/// <summary>
				///返回相机真实的目标点
				///</summary>
				/// <returns></returns>
				EarthView::World::Spatial::Math::CVector3& getRealTarget()
				{
					return mrealTarget;
				}
				/// <summary>
				///设置相机的观察点
				///</summary>
				/// <param name="observer">观察点</param>
				/// <returns></returns>
				inline void setObserver(_in const EarthView::World::Spatial::Math::CVector3& observer)
				{
					
						mobserver = observer;
					//_notifyParamChanged();
				}
				/// <summary>
				///返回相机的观察点
				///</summary>
				/// <returns></returns>
				inline const EarthView::World::Spatial::Math::CVector3& getObserver()
				{
					
						return mobserver;
				}
				/// <summary>
				///设置相机的上方向
				///</summary>
				/// <param name="upVector">上方向</param>
				/// <returns></returns>
				inline void setUpVector(_in const EarthView::World::Spatial::Math::CVector3& upVector)
				{
					
						mupVector = upVector;
					//_notifyParamChanged();
				}
				/// <summary>
				///返回相机距目标点的距离
				///</summary>
				/// <returns></returns>
				inline ev_real64 getTrueDistance() const
				{
					
						return mTrueDistance;
				}
				/// <summary>
				///设置相机的真实距离
				///</summary>
				/// <param name="distance">距离</param>
				/// <returns></returns>
				void setTrueDistance(_in ev_real64 distance);
				/// <summary>
				///返回相机的上方向
				///</summary>
				/// <returns></returns>
				inline const EarthView::World::Spatial::Math::CVector3& getUpVector()
				{
					
						return mupVector;
				}
				/// <summary>
				///设置相机的观察方向
				///</summary>
				/// <param name="lookVector">观察方向</param>
				/// <returns></returns>
				inline void setLookVector(_in const EarthView::World::Spatial::Math::CVector3& lookVector)
				{
					
						mlookVector = lookVector;
				}
				/// <summary>
				///返回相机的观察方向
				///</summary>
				/// <returns></returns>
				inline const EarthView::World::Spatial::Math::CVector3& getLookVector()
				{
					
						return mlookVector;
				}
				/// <summary>
				///返回相机的右方向
				///</summary>
				/// <returns></returns>
				inline const EarthView::World::Spatial::Math::CVector3& getRightVector()
				{
					
						return mrightVector;
				}
				/// <summary>
				///设置相机的距离
				///</summary>
				/// <param name="lookVector">距离</param>
				/// <returns></returns>
				void setDistance(_in ev_real64 distance);
				/// <summary>
				///返回相机的视域角
				///</summary>
				/// <returns></returns>
				inline const EarthView::World::Spatial::Math::CDegree&  getViewRange()
				{
					
						return mViewRange;
				}
				/// <summary>
				///返回相机真实的视域角
				///</summary>
				/// <returns></returns>
				inline const EarthView::World::Spatial::Math::CDegree& getTrueViewRange()
				{
					
						return mTrueViewRange;
				}
				/// <summary>
				///返回相机目标点的高程
				///</summary>
				/// <returns></returns>
				inline ev_real64 getTargetAltitude()
				{
					return mtargetAltiude;
				}
				/// <summary>
				///设置相机的局部原点
				///</summary>
				/// <param name="localCenter">局部原点</param>
				/// <returns></returns>
				ev_void setLocalCenter(const EarthView::World::Spatial::Math::CVector3& localCenter)
				{
					mlocalCenter = localCenter;
				}
				/// <summary>
				///返回相机的局部原点
				///</summary>
				/// <returns></returns>
				EarthView::World::Spatial::Math::CVector3 getLocalCenter()
				{
					return mlocalCenter;
				}
				/// <summary>
				///设置半径
				///</summary>
				/// <param name="radius">半径</param>
				/// <returns></returns>
				ev_void setRadius(ev_real64 radius)
				{
					mradius = radius;
				}
				/// <summary>
				///返回半径
				///</summary>
				/// <returns></returns>
				ev_real64 getRadius()
				{
					return mradius;
				}
				///// <summary>
				/////设置视图变换矩阵
				/////</summary>
				///// <param name="viewMatrix">视图变换短阵</param>
				///// <returns></returns>
				//void setViewMatrix(_in const EarthView::World::Spatial::Math::CMatrix4& viewMatrix);
				/// <summary>
				///设置视图变换矩阵
				///</summary>
				/// <param name="cameraPostion">相机的位置</param>
				/// <param name="q">四元数</param>
				/// <returns></returns>
				void setViewMatrix(_in const EarthView::World::Spatial::Math::CVector3& cameraPostion,_in const EarthView::World::Spatial::Math::CQuaternion& q);
				/// <summary>
				///设置视图变换矩阵
				///</summary>
				/// <param name="target">目标点</param>
				/// <param name="observer">观察者</param>
				/// <param name="upVector">上方向</param>
				/// <returns></returns>
				void setViewMatrix(_in const EarthView::World::Spatial::Math::CVector3& target,_in const EarthView::World::Spatial::Math::CVector3& observer,_in const EarthView::World::Spatial::Math::CVector3& upVector);
				/// <summary>
				///校正相机的目标点
				///</summary>
				/// <param name="oldTarget">原始目标点</param>
				/// <param name="observer">观察者</param>
				/// <param name="target">校正后的目标点</param>
				/// <param name="worldradius">地球半径</param>
				/// <returns></returns>
				void adjustTarget(const EarthView::World::Spatial::Math::CVector3& oldTarget,const EarthView::World::Spatial::Math::CVector3& observer,EarthView::World::Spatial::Math::CVector3& target,ev_real64 worldradius);
				/// <summary>
				///计算视图变换矩阵
				///</summary>
				/// <returns></returns>
				EarthView::World::Spatial::Math::CMatrix4 computeViewMatrix();    

				EarthView::World::Spatial::Math::CMatrix4 computeNextViewMatrix();
				/// <summary>
				///计算投影变换矩阵
				///</summary>
				/// <returns></returns>
				EarthView::World::Spatial::Math::CMatrix4 computeProjectMatrix();

				/// <summary>
				///设置相机近裁剪面距离的比例系数
				///</summary>
				/// <param name="nearPlaneDistanceQuotiety">比例系数</param>
				/// <returns></returns>
				ev_void setNearClipRate(_in ev_real64 nearClipRate);

				/// <summary>
				///获取相机近裁剪面距离的比例系数
				///</summary>
				/// <returns></returns>
				ev_real64 getNearClipRate() const;

				/// <summary>
				///返回相机最大的倾角
				///</summary>
				/// <returns></returns>
				const EarthView::World::Spatial::Math::CDegree& getMaxTilt()
				{
					return mmaxTilt;
				}
				/// <summary>
				///是否为从相机
				///</summary>
				/// <returns></returns>
				ev_bool isSlaveCamera()
				{
					return mIsSlaveCamera;
				}
				/// <summary>
				///挎贝矩阵
				///</summary>
				/// <returns></returns>
				void copyMatrix();
				/// <summary>
				///返回锁定点
				///</summary>
				/// <returns></returns>
				EarthView::World::Graphic::CSceneNode* getLockTarget()
				{
					return mlockTarget;
				}
				/// <summary>
				///设置为主相机
				///</summary>
				/// <param name="masterCamera">主相机</param>
				/// <returns></returns>
				void setMasterCamera(EarthView::World::Spatial3D::CGlobeCamera* masterCamera)
				{
					mmasterCamera = masterCamera;
					mIsSlaveCamera = true;
				}
				/// <summary>
				///设置子视口相机的目标点是否需与主相机一致
				///</summary>
				/// <param name="needCopyMasterCamera"></param>
				/// <returns></returns>
				ev_void setNeedCopyMasterCameraTarget(_in ev_bool needCopyMasterCameraTarget);
				/// <summary>
				///获取子视口相机的目标点是否需与主相机一致
				///</summary>
				/// <returns></returns>
				ev_bool getNeedCopyMasterCameraTarget() const;

				/// <summary>
				///返回地下镜头的模式
				///</summary>
				/// <returns></returns>
				ev_bool getIsUnderGroundMode() const
				{
					return misUnderGroundMode;
				}
				/// <summary>
				///设置地下镜头的模式
				///</summary>
				/// <param name="isUnderGroundMode">地下镜头模式</param>
				/// <returns></returns>
				void setIsUnderGroundMode(ev_bool isUnderGroundMode)
				{
					misUnderGroundMode = isUnderGroundMode;
				}
				/// <summary>
				///返回点处的高程
				///</summary>
				/// <returns></returns>
				ev_real64 getModitifAltitude() const
				{
					return mmoditifAltitude;
				}
				/// <summary>
				///镜头当前是否在地下
				///</summary>
				/// <returns></returns>
				ev_bool isUnderGround() const
				{
					return (maltitude-0.5) <= mAltitudeUnderCamera;
				}

				//void setCameraDepth(ev_real64 cameraDepth) 
				//{
				//	mcameraControlDepth=cameraDepth;
				//}

				//ev_real64 getCameraDepth() const
				//{
				//	return mcameraControlDepth;
				//}
				/// <summary>
				///设置是否计算相交
				///</summary>
				/// <param name="calculateIntersect">是否相交</param>
				/// <returns></returns>
				void setCalculateIntersect(ev_bool calculateIntersect)
				{
					mcalculateIntersect = calculateIntersect;
				}
				/// <summary>
				///设置是否基于平面的地下模式
				///</summary>
				/// <param name="planeBase"></param>
				/// <returns></returns>
				void setIsPlaneBased(ev_bool planeBase)
				{
					misPlaneBased = planeBase;
				}
				/// <summary>
				///返回是否基于平面的地下模式
				///</summary>
				/// <returns></returns>
				ev_bool getIsPlaneBased() const
				{
					return misPlaneBased;
				}
				/// <summary>
				///设置是否基于模型的地下模式
				///</summary>
				/// <param name="modelBase"></param>
				/// <returns></returns>
				void setIsModelBased(ev_bool modelBase)
				{
					mIsMoveAtModelMode = modelBase;
				}
				/// <summary>
				///返回是否基于模型的地下模式
				///</summary>
				/// <returns></returns>
				ev_bool getIsModelBased() const
				{
					return mIsMoveAtModelMode;
				}

				/// <summary>
				///设置基于模型的地下模式的操作中心
				///</summary>
				/// <param name="center"></param>
				/// <returns></returns>
				void setModelBasedMoveCenter(EarthView::World::Spatial::Math::CVector3 center)
				{
					mDefaultMoveCenter = center;
				}
				/// <summary>
				///返回基于模型的地下模式的操作中心
				///</summary>
				/// <returns></returns>
				EarthView::World::Spatial::Math::CVector3 getModelBasedMoveCenter() const
				{
					return mDefaultMoveCenter;
				}

				/// <summary>
				///设置地下镜头的基准深度
				///</summary>
				/// <param name="cameraDepth">基准深度</param>
				/// <returns></returns>
				void setCameraControlDepth(ev_real64 cameraDepth) 
				{
					mcameraControlDepth = cameraDepth;
				}
				/// <summary>
				///返回地下镜头的基准深度
				///</summary>
				/// <returns></returns>
				ev_real64 getCameraControlDepth() const 
				{
					return mcameraControlDepth;
				}
				/// <summary>
				///返回地下绘制物体的宽度
				///</summary>
				/// <returns></returns>
				ev_real64 getUnderGroundWidth()
				{
					return mUnderGroundWidth;
				}
				/// <summary>
				///返回地下绘制物体的深度
				///</summary>
				/// <returns></returns>
				ev_real64 getUnderGroundDepth()
				{
					return mUnderGroundDepth;
				}
				/// <summary>
				///计算真实的矩离
				///</summary>
				/// <returns></returns>
				void computeTrueDistance();

				/// <summary>
				///返回绝对投影矩阵
				/// <returns></returns>
				virtual EarthView::World::Spatial::Math::CMatrix4 getAbsoluteProjectMatrix() const;

				/// <summary>
				///返回返回相机是否锁定某个目标
				/// <returns></returns>
				virtual ev_bool isLockingToTarget() const;

				/// <summary>
				///返回相机的最小远裁面值
				///</summary>
				/// <returns></returns>
				inline ev_real64 getMinFarDistance()
				{
					
						return mMinFarDistance;
				}
				/// <summary>
				///设置相机的最小远裁面值
				///</summary>
				/// <param name="distance">最小远裁面</param>
				/// <returns></returns>
				inline ev_void setMinFarDistance(ev_real64 distance)
				{
					
						mMinFarDistance = distance;
				}

ev_internal:
				/// <summary>
				///设置矩离
				///</summary>
				/// <param name="altitude">相机的海拔</param>
				/// <param name="tilt">相机的倾角</param>
				/// <returns></returns>
				void computeDistance(_in ev_real64 altitude,_in const EarthView::World::Spatial::Math::CDegree& tilt)
				{
					computeDistance(altitude,tilt,true);
				}
				/// <summary>
				///设置矩离
				///</summary>
				/// <param name="altitude">相机的海拔</param>
				/// <param name="tilt">相机的倾角</param>
				/// <param name="isNearToTarget">是否靠近目标点</param>
				/// <returns></returns>
				void computeDistance(_in ev_real64 altitude,_in const EarthView::World::Spatial::Math::CDegree& tilt,_in ev_bool isNearToTarget);
				/// <summary>
				///设置矩离
				///</summary>
				/// <param name="altitude">相机的海拔</param>
				/// <param name="tilt">相机的倾角</param>
				/// <returns></returns>
				void computeTrueDistance(_in ev_real64 altitude,_in const EarthView::World::Spatial::Math::CDegree& tilt)
				{
					computeTrueDistance(altitude,tilt,true);
				}
				/// <summary>
				///设置矩离
				///</summary>
				/// <param name="altitude">相机的海拔</param>
				/// <param name="tilt">相机的倾角</param>
				/// <param name="isNearToTarget">是否靠近目标点</param>
				/// <returns></returns>
				void computeTrueDistance(_in ev_real64 altitude,_in const EarthView::World::Spatial::Math::CDegree& tilt,_in ev_bool isNearToTarget);
				/// <summary>
				///设置相机的海拔
				///</summary>
				/// <param name="distance">矩离</param>
				/// <param name="tilt">相机的倾角</param>
				/// <returns></returns>
				void computeAltitude(_in ev_real64 distance, _in const EarthView::World::Spatial::Math::CDegree& tilt)
				{
					computeAltitude(distance,tilt,true);
				}
				/// <summary>
				///设置相机的海拔
				///</summary>
				/// <param name="distance">矩离</param>
				/// <param name="tilt">相机的倾角</param>
				/// <param name="isNearToTarget">是否靠近目标点</param>
				/// <returns></returns>
				void computeAltitude(_in ev_real64 distance, _in const EarthView::World::Spatial::Math::CDegree& tilt,_in ev_bool isNearToTarget);
				/// <summary>
				///设置相机真实的海拔
				///</summary>
				/// <param name="distance">矩离</param>
				/// <param name="tilt">相机的倾角</param>
				/// <returns></returns>
				void computeTrueAltitude(_in ev_real64 distance,_in  const EarthView::World::Spatial::Math::CDegree& tilt)
				{
					ev_real64 radius = mradius+mtargetAltiude;
					ev_real64 dfromeq = 0;
					dfromeq =  EarthView::World::Spatial::Math::CMath::Sqrt(radius * radius + distance * distance -2 * radius * distance * EarthView::World::Spatial::Math::CMath::Cos(EarthView::World::Spatial::Math::CMath::PI - tilt.valueRadians()));
					ev_real64 alt = dfromeq - radius;
					maltitude = alt;
				}
				/// <summary>
				///设置相机的距离
				///</summary>
				/// <param name="alt">海拔</param>
				/// <param name="distance">距离</param>
				/// <returns></returns>
				void computeTilt(_in ev_real64 alt, _in ev_real64 distance)
				{
					//这里有四种情况,暂时只算两种既只有距观察点最近的两点
					ev_real64 a = mradius + alt;
					ev_real64 b = distance;
					ev_real64 c = mradius+mtargetAltiude;
					mtilt = EarthView::World::Spatial::Math::CRadian(EarthView::World::Spatial::Math::CMath::PI - EarthView::World::Spatial::Math::CMath::ACos((c * c + b * b - a * a) / (2 * c * b)).valueRadians());
					if (mtilt > mmaxTilt)
						mtilt = mmaxTilt;
				}

				void calcProjectionParameter(_inout ev_real64 &left, _inout ev_real64 &right, _inout ev_real64 &bottom, _inout ev_real64 &top)const;

				/// <summary>
				///计算绝对投影矩阵
				/// <param name="trueDistance">相机的真实距离</param>
				/// <param name="farDistance">最远的距离</param>
				/// <returns></returns>
				void computeAbsoluteProjectMatrix(_in ev_real64 trueDistance,_in ev_real64 farDistance);

			public:
				/// <summary>
				///通知相机的参数发生了变化
				///</summary>
				/// <returns></returns>
				void _notifyParamChanged();

				/// <summary>
				///返回视口
				///</summary>
				/// <returns></returns>
				EarthView::World::Graphic::CViewport* getGlobeViewport() const;

ev_private:
				void setGlobeViewport(EarthView::World::Graphic::CViewport* viewport);

				void setTrueTargetInfo(_in const EarthView::World::Spatial::Math::CVector3& realTarget,_in ev_real64 trueDistance,_in ev_real64 targetAltitude,_in ev_real64 altitudeUnderCamera,_in const EarthView::World::Spatial::Math::CDegree& trueViewRange);

				void getTrueTargetInfo(_in EarthView::World::Spatial::Math::CVector3& realTarget,_in ev_real64& trueDistance,_in ev_real64& targetAltitude,_in ev_real64& altitudeUnderCamera,_in EarthView::World::Spatial::Math::CDegree& trueViewRange);

				void resetLastViewMatrix();
ev_internal: 

				EarthView::World::Spatial::Math::CDegree mlatitude;
				EarthView::World::Spatial::Math::CDegree mlongitude;
				EarthView::World::Spatial::Math::CDegree mheading;
				EarthView::World::Spatial::Math::CDegree mtilt;
#if 0
				//EarthView::World::Spatial::Math::CDegree mRoll;
#endif


				EarthView::World::Spatial::Math::CDegree mminTilt;
				EarthView::World::Spatial::Math::CDegree mmaxTilt;

				ev_real64 maltitude;

				ev_real64 mminAltitude;
				ev_real64 mmaxAltitude;

				ev_real64 mdistance;

				ev_real64 mTrueDistance;

				ev_real64 mtargetAltiude;

				volatile ev_real64 mAltitudeUnderCamera;

				EarthView::World::Spatial::Math::CVector3 mtarget;
				EarthView::World::Spatial::Math::CVector3 mobserver;
				EarthView::World::Spatial::Math::CVector3 mupVector;
				EarthView::World::Spatial::Math::CVector3 mlookVector;
				EarthView::World::Spatial::Math::CVector3 mrightVector;

				EarthView::World::Spatial::Math::CDegree mViewRange;
				EarthView::World::Spatial::Math::CDegree mTrueViewRange;

				EarthView::World::Spatial3D::CGeoSceneManager* mGeoSceneManager;

				EarthView::World::Spatial3D::CGlobeCamera* mmasterCamera;
				ev_bool mIsSlaveCamera;
				ev_bool mNeedCopyMasterCameraTarget;

				EarthView::World::Graphic::CSceneNode* mlockTarget;
				EarthView::World::Spatial::Math::CDegree mlockTilt;
				EarthView::World::Spatial::Math::CDegree mlockHeading;
				EarthView::World::Spatial::Math::CDegree mlockYaw;
				ev_real64 mlockDistance;

				ev_bool misUnderGroundMode;

				ev_real64 mMinFarDistance;

#if TILT_TEST
				EarthView::World::Spatial::Math::CVector3 mrealTarget;
				ev_real64 mmoditifAltitude;

				ev_real64 mcameraControlDepth;

				ev_real64 mUnderGroundDepth;
				ev_real64 mUnderGroundWidth;
				ev_bool misPlaneBased;
				bool mcalculateIntersect;
				ev_bool mIsMoveAtModelMode;
				EarthView::World::Spatial::Math::CVector3 mDefaultMoveCenter;
#endif
				EarthView::World::Spatial::Math::CVector3 mlocalCenter;
				ev_real64 mradius;
				EarthView::World::Spatial::Math::CMatrix4 mlastViewMatrix;
				ev_bool mlastIntersected;
				bool mviewMatrixChanged;
				//EV_MUTEX(mMutex)

				EarthView::World::Spatial::Math::CVector3 mlastPanRotationAxis;
				ev_real64 mInertiaRotationRatian;
				ev_real64 minertiaDecelerateRate;
				EarthView::World::Spatial::Math::CVector3 mInertialObserver;
				EarthView::World::Spatial::Math::CVector3 mInertialUpVector;
				EarthView::World::Spatial::Math::CVector3 mInertialLookVector;
				ev_real64 mInertialAngleDistance;
				ev_real64 mInertialDistance;
				ev_bool mBeginInertialPan;
				ev_real64 mDeltaPan;
				ev_bool mAutoCalculateProjectMatrix;
				EarthView::World::Spatial::Math::CMatrix4 mAbsoluteProjectMatrix;

			protected:
				CQuaternion4d mquaternion;

				EarthView::World::Graphic::CViewport* mGlobeViewport;

				ev_void copyTargetFromMasterCamera();

				CProjectMatrixListener* mProjectMatrixListener;

				ev_real64 mNearClipRate;
			};


		}
	}
}

#endif

