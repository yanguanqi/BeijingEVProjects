#ifndef _MATHUTILITY_H__
#define _MATHUTILITY_H__
#include "mathengine_config.h"
#include "core/memoryallocatedobject.h"
#include "ev_math.h"
#include "core/stdheaders.h"

#ifndef EV_MERCATOR_MAX_DEGREE
#define EV_MERCATOR_MAX_DEGREE 85
#endif

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				class CVector3;
				class CMath;
				class CDegree;
				class CRadian;
				class CMatrix3;
				class CMatrix4;
				class CQuaternion;

				class EV_MATHENGINE_DLL CMathUtility: public EarthView::World::Core::CBaseObject
				{
				public:
					CMathUtility();
					~CMathUtility();
ev_private:
					CMathUtility(_in EarthView::World::Core::CNameValuePairList *pList);

					/// <summary>
					/// 由经纬度和到球心的距离计算笛卡尔坐标
					/// </summary>
					/// <param name="latitude">纬度，单位为度</param>
					/// <param name="longitude">经度，单位为度</param>
					/// <param name="radius">到球心的距离</param>
					/// <returns>空间坐标</returns>
				public:
					static EarthView::World::Spatial::Math::CVector3 sphericalToCartesian(_in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 radius);

					/// <summary>
					/// 由经纬度和到球心的距离计算笛卡尔坐标
					/// </summary>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="radius">到球心的距离</param>
					/// <returns>空间坐标</returns>
					static EarthView::World::Spatial::Math::CVector3 sphericalToCartesian(_in const EarthView::World::Spatial::Math::CDegree& latitude, _in const EarthView::World::Spatial::Math::CDegree& longitude, _in ev_real64 radius);

					/// <summary>
					/// 由经纬度和到球心的距离计算笛卡尔坐标
					/// </summary>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="radius">到球心的距离</param>
					/// <returns>空间坐标</returns>
					static EarthView::World::Spatial::Math::CVector3 sphericalToCartesian(_in const EarthView::World::Spatial::Math::CRadian& latitude, _in const EarthView::World::Spatial::Math::CRadian& longitude, _in ev_real64 radius);

					/// <summary>
					/// 由笛卡尔坐标转极坐标
					/// </summary>
					/// <param name="v">笛卡尔坐标系坐标点</param>
					/// <returns>极坐标(x:到球心的距离；y：纬度，以弧度为单位；z：经度,以弧度为单位)</returns>
					static EarthView::World::Spatial::Math::CVector3 cartesianToSpherical(_in const EarthView::World::Spatial::Math::CVector3& v);

					/// <summary>
					/// 球面上两点求距离
					/// </summary>
					/// <param name="latA">第一个的点的纬度（度）</param>
					/// <param name="lonA">第一个的点的经度（度）</param>
					/// <param name="latB">第二个的点的纬度（度）</param>
					/// <param name="lonB">第二个的点的经度（度）</param>
					/// <returns>球面上的距离，弧度为单位</returns>
					static ev_real64 sphericalDistance(_in ev_real64 latA, _in ev_real64 lonA, _in ev_real64 latB, _in ev_real64 lonB);

					/// <summary>
					/// 给定两点经纬度计算方位角（正北方向偏角）
					/// </summary>
					/// <param name="latA">A点纬度(度)</param>
					/// <param name="lonA">A点经度(度)</param>
					/// <param name="latB">B点纬度(度)</param>
					/// <param name="lonB">B点经度(度)</param>
					/// <returns>方位角 (度) </returns>
					static ev_real64 Azimuth( _in ev_real64 latA, _in ev_real64 lonA, _in ev_real64 latB, _in ev_real64 lonB );

					/// <summary>
					/// 球面上两点的矩离和两点的转轴
					/// </summary>
					/// <param name="latA">第一个的点的纬度（度）</param>
					/// <param name="lonA">第一个的点的经度（度）</param>
					/// <param name="latB">第二个的点的纬度（度）</param>
					/// <param name="lonB">第二个的点的经度（度）</param>
					/// <param name="frkAngle">两点的间距（弧度）</param>
					/// <param name="raxis">转轴（已单位化）</param>
					///<returns>有无旋转</returns>
					static ev_bool getRotationAngleAxis(_in ev_real64 latA,_in ev_real64 lonA,_in ev_real64 latB,_in ev_real64 lonB,_inout ev_real64& frkAngle,_inout EarthView::World::Spatial::Math::CVector3& raxis);

					static ev_bool getInterpolaterLatitudeLongitude(_in ev_real64 latA,_in ev_real64 lonA,_in ev_real64 latB,_in ev_real64 lonB,_in ev_real64 ratio, _inout ev_real64& latitude,_inout ev_real64& longitude);

					static ev_bool getInterpolaterLatitudeLongitude(_in const EarthView::World::Spatial::Math::CDegree& latA,_in const EarthView::World::Spatial::Math::CDegree& lonA,_in const EarthView::World::Spatial::Math::CDegree& latB,_in const EarthView::World::Spatial::Math::CDegree& lonB,_in ev_real64 ratio,_inout EarthView::World::Spatial::Math::CDegree& latitude,_inout EarthView::World::Spatial::Math::CDegree& longitude)
					{
						ev_real64 lat = 0,lon = 0;
						ev_bool interpolatered;
						interpolatered = getInterpolaterLatitudeLongitude(latA.valueDegrees(),lonA.valueDegrees(),latB.valueDegrees(),lonB.valueDegrees(),ratio,lat,lon);
						latitude = CDegree(lat);
						longitude = CDegree(lon);
						return interpolatered;
					}

					/// <summary>
					/// 球面上两点的矩离和两点的转轴
					/// </summary>
					/// <param name="latA">第一个的点的纬度（度）</param>
					/// <param name="lonA">第一个的点的经度（度）</param>
					/// <param name="latB">第二个的点的纬度（度）</param>
					/// <param name="lonB">第二个的点的经度（度）</param>
					/// <param name="ev_real64">两点的间距（弧度）</param>
					/// <param name="raxis">转轴（已单位化）</param>
					///<returns>有无旋转</returns>
					static ev_bool getRotationAngleAxis(_in const EarthView::World::Spatial::Math::CDegree& latA,_in const EarthView::World::Spatial::Math::CDegree& lonA,_in const EarthView::World::Spatial::Math::CDegree& latB,_in const EarthView::World::Spatial::Math::CDegree& lonB,_inout ev_real64& frkAngle,_inout EarthView::World::Spatial::Math::CVector3& raxis)
					{
						return getRotationAngleAxis(latA.valueDegrees(),lonA.valueDegrees(),latB.valueDegrees(),lonB.valueDegrees(),frkAngle,raxis);
					}

					/// <summary>
					/// 计屏幕上的点在世界坐标系中的坐标
					/// </summary>
					/// <param name="scenePoint">屏幕坐标系中的点的坐标。z值在(0-1)</param>
					/// <param name="modelViewMatrix">模型视图变换矩阵</param>
					/// <param name="projectMatrix">投影变换矩阵</param>
					/// <param name="viewportMatrix">视口变换矩阵</param>
					/// <param name="worldPoint">世界坐标系中的点</param
					///<returns></returns>

					static ev_void unProject(_in const EarthView::World::Spatial::Math::CVector3& scenePoint,_in const EarthView::World::Spatial::Math::CMatrix4& modelViewMatrix,_in const EarthView::World::Spatial::Math::CMatrix4& projectMatrix, _in const EarthView::World::Spatial::Math::CMatrix4& viewportMatrix,_inout EarthView::World::Spatial::Math::CVector3& worldPoint);

					/// <summary>
					/// 计屏幕上的点计逄经纬度
					/// </summary>
					/// <param name="screenX">点的x坐标</param>
					/// <param name="screenY">点的y坐标阵</param>
					/// <param name="worldradius">球的斗径</param>
					/// <param name="isOutside">是否是外面的点</param>
					/// <param name="modelViewMatrix">模型视图变换矩阵</param>
					/// <param name="projectMatrix">投影变换矩阵</param>
					/// <param name="viewportMatrix">视口变换矩阵</param>
					/// <param name="latitude">球面上的经度</param>
					/// <param name="longitude">球面上的纬度</param>
					///<returns>是否相交</returns>
					static ev_bool pickingRayIntersection(_in ev_int32 screenX,_in ev_int32 screenY,_in ev_real64 worldradius,_in ev_bool isOutside,_in const EarthView::World::Spatial::Math::CMatrix4& modelViewMatrix,_in const EarthView::World::Spatial::Math::CMatrix4& projectMatrix,_in  const EarthView::World::Spatial::Math::CMatrix4& viewportMatrix,_inout ev_real64& latitude,_inout ev_real64& longitude);

					static ev_bool pickingRayIntersection(_in ev_int32 screenX,_in ev_int32 screenY,_in ev_real64 worldradius,_in ev_bool isOutside,_in const EarthView::World::Spatial::Math::CMatrix4& modelViewMatrix,_in const EarthView::World::Spatial::Math::CMatrix4& projectMatrix,_in const EarthView::World::Spatial::Math::CMatrix4& viewportMatrix,_inout EarthView::World::Spatial::Math::CVector3& pointA,_inout EarthView::World::Spatial::Math::CVector3& pointB);
					/// <summary>
					/// 射线与球面上相交的点
					/// </summary>
					/// <param name="lookVector">射线方向</param>
					/// <param name="observerPostion">射线的起始点</param>
					/// <param name="worldradius">球的半径</param>
					/// <param name="isOutside">交点</param>
					///<returns>是否相交</returns>
					static ev_bool pickingRayIntersection(_in const EarthView::World::Spatial::Math::CVector3& lookVector,_in const EarthView::World::Spatial::Math::CVector3& observerPostion,_in ev_real64 worldradius,_inout EarthView::World::Spatial::Math::CVector3& intersectionPostion);

					static ev_bool pickingRayWithLookDirIntersection(_in const EarthView::World::Spatial::Math::CVector3& lookVector,_in const EarthView::World::Spatial::Math::CVector3& observerPostion,_in ev_real64 worldradius,_inout EarthView::World::Spatial::Math::CVector3& intersectionPostion);

					static EarthView::World::Spatial::Math::CMatrix4 computeWorldMatrix(_in ev_real64 latitude,_in ev_real64 longitude,_in ev_real64 height,_in const EarthView::World::Spatial::Math::CQuaternion& quaternion,_in const EarthView::World::Spatial::Math::CVector3& scale);
					static void decomputeWorldMatrix(_in const EarthView::World::Spatial::Math::CMatrix4& mat4,_out ev_real64& latitude,_out ev_real64& longitude,_out ev_real64& height,_out EarthView::World::Spatial::Math::CQuaternion& quaternion,_out EarthView::World::Spatial::Math::CVector3& scale);

					static EarthView::World::Spatial::Math::CMatrix4 computeWorldMatrix(_in ev_real64 latitude,_in ev_real64 longitude,_in ev_real64 height,_in ev_real32 rotationXDegree,_in ev_real32 rotationYDegree,_in ev_real32 rotationZDegree,_in const EarthView::World::Spatial::Math::CVector3& scale);
					static void decomputeWorldMatrix(_in const EarthView::World::Spatial::Math::CMatrix4& mat4,_out ev_real64& latitude,_out ev_real64& longitude,_out ev_real64& height,_out ev_real32& rotationXDegree,_out ev_real32& rotationYDegree,_out ev_real32& rotationZDegree,_out EarthView::World::Spatial::Math::CVector3& scale);

					static EarthView::World::Spatial::Math::CMatrix4 computeWorldMatrix(_in const EarthView::World::Spatial::Math::CVector3& postion,_in const EarthView::World::Spatial::Math::CQuaternion& quaternion,_in const EarthView::World::Spatial::Math::CVector3& scale);


					//角度转墨卡托弧度
					static ev_real64 latitudeDegreeToMercator(_in ev_real64 degree);
					static ev_real64 longitudeDegreeToMercator(_in ev_real64 degree);

					/* 墨卡托弧度转角度 */
					static ev_real64 mercatorToLatitudeDegree(_in ev_real64 radian);
					static ev_real64 mercatorToLongitudeDegree(_in ev_real64 radian);

					/// <summary>
					/// 从经度获取瓦片所在列
					/// </summary>
					/// <param name="longitude">经度，单位为度</param>
					/// <param name="tileSize">瓦片大小</param>
					///<returns>瓦片所在列</returns>
					static ev_int64 getColFromLongitude(_in ev_real64 longitude, _in ev_real64 tileSize);

					/// <summary>
					/// 从纬度获取瓦片所在行
					/// </summary>
					/// <param name="longitude">纬度，单位为度</param>
					/// <param name="tileSize">瓦片大小</param>
					///<returns>瓦片所在行</returns>
					static ev_int64 getRowFromLatitude(_in ev_real64 latitude, _in ev_real64 tileSize);

				    static EarthView::World::Spatial::Math::CMatrix3 computeAxisMatrix(_in const EarthView::World::Spatial::Math::CDegree& latitude,_in const EarthView::World::Spatial::Math::CDegree& longitude,_in ev_real64 radius);

					static ev_real64 computeCameraTilt(_in const EarthView::World::Spatial::Math::CVector3& target,_in const EarthView::World::Spatial::Math::CVector3& observer,_in const EarthView::World::Spatial::Math::CVector3& upVector,_in const EarthView::World::Spatial::Math::CVector3 localCenter);

					static ev_real64 computeCameraHeading(_in const EarthView::World::Spatial::Math::CVector3& up,_in const EarthView::World::Spatial::Math::CVector3& look,_in ev_real64 tiltRadious,_in const EarthView::World::Spatial::Math::CVector3& target,_in const EarthView::World::Spatial::Math::CVector3 localCenter);

					static void adjustTarget(_in const EarthView::World::Spatial::Math::CVector3& oldTarget,_in const EarthView::World::Spatial::Math::CVector3& observer,_inout EarthView::World::Spatial::Math::CVector3& target,_in const EarthView::World::Spatial::Math::CVector3 localCenter,_in ev_real64 worldradius);

					static void transformKMLCameraTag(_in const EarthView::World::Spatial::Math::CDegree& cameraLatitude,_in const EarthView::World::Spatial::Math::CDegree& cameraLongitude,_in ev_real64 radius,_in const EarthView::World::Spatial::Math::CDegree& heading,_in const EarthView::World::Spatial::Math::CDegree& tilt,_in const EarthView::World::Spatial::Math::CDegree& roll,_inout EarthView::World::Spatial::Math::CVector3& target,_inout EarthView::World::Spatial::Math::CVector3& observer,_inout EarthView::World::Spatial::Math::CVector3& upVector);

					static void transformKMLLookAtTag(_in const EarthView::World::Spatial::Math::CDegree& targetLatitude,_in const EarthView::World::Spatial::Math::CDegree& targetLongitude,_in ev_real64 radius,_in const EarthView::World::Spatial::Math::CDegree& heading,_in const EarthView::World::Spatial::Math::CDegree& tilt,_in ev_real64 range,_inout EarthView::World::Spatial::Math::CVector3& target,_inout EarthView::World::Spatial::Math::CVector3& observer,_inout EarthView::World::Spatial::Math::CVector3& upVector);

					static void transformToCameraPostion(_in const EarthView::World::Spatial::Math::CVector3& target,_in const EarthView::World::Spatial::Math::CVector3& observer,_in const EarthView::World::Spatial::Math::CVector3& up,_in const double worldradius,_inout double& latitude,_inout double& longitude,_inout double &heading,_inout double& tilt,_inout double& altitude,_inout double& moditifAltitude)
					{
						ev_real64 distance = 0;
						transformToCameraPostion(target,observer,up,worldradius,latitude,longitude,heading,tilt,altitude,moditifAltitude,distance);
					}


					static void transformToCameraPostion(_in const EarthView::World::Spatial::Math::CVector3& target,_in const EarthView::World::Spatial::Math::CVector3& observer,_in const EarthView::World::Spatial::Math::CVector3& up,_in const double worldradius,_inout double& latitude,_inout double& longitude,_inout double &heading,_inout double& tilt,_inout double& altitude,_inout double& moditifAltitude,_inout ev_real64& distance);

				ev_private:
					/// <summary>
					/// 圆滑不闭合折线之间的角
					/// </summary>
					/// <param name="points">构成折线的点数组</param>
					/// <param name="pos">直线开始圆滑的位置，取值在0-0.5之间，超过0.5两直线之间会有交叉</param>
					/// <param name="t">圆润参数，在0-1之间，值越小越圆滑</param>
					/// <returns>Vector3d数组</returns>
					static void smoothOpenFoldline(const vector<EarthView::World::Spatial::Math::CVector3>& points,ev_real64 pos,ev_real64 t,vector<EarthView::World::Spatial::Math::CVector3>& pointss);

											
				};
			}
		}
	}
}


#endif
