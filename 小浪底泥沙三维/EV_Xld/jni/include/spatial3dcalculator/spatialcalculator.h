#ifndef _SPATIAL_CALCULATOR_H
#define _SPATIAL_CALCULATOR_H

#include "config.h"

#include <core/memoryallocatedobject.h>

#include <mathengine/vector3.h>
#include <mathengine/ev_math.h>
#include <mathengine/ray.h>
#include <mathengine/matrix4.h>

#include <graphic/common.h>
#include <graphic/vertexindexdata.h>
#include <graphic/renderoperation.h>

#include <spatialobject/coordinatesystem/coordinatesysenumtype.h>
#include "mathengine/earthradius.h"
#include "mathengine/axisalignedbox.h"

#include "spatialobject/geometry/linestring.h"

namespace EarthView{
    namespace World{

		namespace Graphic
		{
			class CViewport;
		}

        namespace Spatial{
            namespace Geometry{
                class ISpatialReference;
				class IEnvelope;
            }
        }
    }
}



namespace EarthView
{
    namespace World
    {
        namespace Spatial3D
        {
            namespace Utility
            {
                class EV_SPATIAL3DCALCULATOR_DLL CSpatialCalculator : public EarthView::World::Core::CBaseObject
                {
                public:
                    CSpatialCalculator();
ev_private:
                    CSpatialCalculator(EarthView::World::Core::CNameValuePairList* pList);

                public:
					 enum EVAxisUpType
					{
						AUT_XAxisUP=0,
						AUT_YAxisUP,
						AUT_ZAxisUP
					};
					

                    static ev_bool intersect(const EarthView::World::Spatial::Math::CRay& ray,const EarthView::World::Graphic::CViewport* viewport,const EarthView::World::Spatial::Math::CMatrix4& worldMatrix,const EarthView::World::Graphic::CVertexData* vData,const EarthView::World::Graphic::CIndexData* iData,EarthView::World::Graphic::CRenderOperation::OperationType ot,EarthView::World::Graphic::CullingMode mode, EarthView::World::Spatial::Math::CVector3& point);
					 
                    /// <summary>
                    /// 由经纬度和地球半径计算出空间坐标
                    /// </summary>
                    /// <param name="latitude">纬度，单位为度</param>
                    /// <param name="longitude">经度，单位为度</param>
                    /// <param name="radius">点到球心的距离</param>
                    /// <returns>空间坐标</returns>
                    static EarthView::World::Spatial::Math::CVector3 sphericalToCartesian(ev_real64 latitude, ev_real64 longitude, ev_real64 radius);



                    /// <summary>
                    /// 由经纬度和地球半径计算出空间坐标
                    /// </summary>
                    /// <param name="latitude">纬度</param>
                    /// <param name="longitude">经度</param>
                    /// <param name="radius">点到球心的距离</param>
                    /// <returns>空间坐标</returns>
                    static EarthView::World::Spatial::Math::CVector3 sphericalToCartesian(const EarthView::World::Spatial::Math::CRadian& latitude, const EarthView::World::Spatial::Math::CRadian& longitude, Real radius);

                    /// <summary>
                    /// 由经纬度和地球半径计算出空间坐标
                    /// </summary>
                    /// <param name="latitude">纬度</param>
                    /// <param name="longitude">经度</param>
                    /// <param name="radius">点到球心的距离</param>
                    /// <returns>空间坐标</returns>
                    static EarthView::World::Spatial::Math::CVector3 sphericalToCartesian(const EarthView::World::Spatial::Math::CDegree& latitude, const EarthView::World::Spatial::Math::CDegree& longitude, Real radius);

                    /// <summary>
                    /// 笛卡尔坐标转极坐标
                    /// </summary>
                    /// <param name="EarthView::World::Spatial::Math::CVector3">笛卡尔坐标系坐标点</param>
                    /// <returns>极坐标系 x:点到球心的距离; y:纬度(单位为弧度); z:经度(单位为弧度)</returns>
                    static EarthView::World::Spatial::Math::CVector3 cartesianToSpherical(const EarthView::World::Spatial::Math::CVector3& v);                    

                    /// <summary>
                    /// 球面上两点求距离
                    /// </summary>
                    /// <param name="latA">第一个的点的纬度（度）</param>
                    /// <param name="lonA">第一个的点的经度（度）</param>
                    /// <param name="latB">第二个的点的纬度（度）</param>
                    /// <param name="lonB">第二个的点的经度（度）</param>
                    /// <returns>球面上的距离，单位为弧度</returns>
                    static ev_real64 sphericalDistance(ev_real64 latA, ev_real64 lonA, ev_real64 latB, ev_real64 lonB);

					/// <summary>
					/// 空间两点求距离
					/// </summary>
					/// <param name="latA">第一个的点的纬度（度）</param>
					/// <param name="lonA">第一个的点的经度（度）</param>
					/// <param name="altA">第一个的高程（米）</param>
					/// <param name="latB">第二个的点的纬度（度）</param>
					/// <param name="lonB">第二个的点的经度（度）</param>
					/// <param name="altB">第二个的高程（米）</param>
					/// <returns>空间距离,单位为米</returns>
					static ev_real64 distance(ev_real64 latA, ev_real64 lonA,ev_real64 altA, ev_real64 latB, ev_real64 lonB,ev_real64 altB);

                    /// <summary>
                    /// 球面上两点的矩离和两点的转轴
                    /// </summary>
                    /// <param name="latA">第一个的点的纬度（度）</param>
                    /// <param name="lonA">第一个的点的经度（度）</param>
                    /// <param name="latB">第二个的点的纬度（度）</param>
                    /// <param name="lonB">第二个的点的经度（度）</param>
                    /// <param name="ev_real64">两点的间距（弧度）</param>
                    /// <param name="raxis">转轴（已单位化）</param>
                    static void getRotationAngleAxis(ev_real64 latA,ev_real64 lonA,ev_real64 latB,ev_real64 lonB,ev_real64& frkAngle,EarthView::World::Spatial::Math::CVector3& raxis);

                    /// <summary>
                    /// 由投影坐标转换成地理坐标
                    /// </summary>
                    /// <param name="sr">空间参考系统参数</param>
                    /// <param name="in_x">东坐标(m)</param>
                    /// <param name="in_y">北坐标(m)</param>
					/// <param name="in_z">高程(m)</param>                   
                    /// <param name="latitude">纬度(°)</param>
                    /// <param name="longitude">经度(°)</param>
                    /// <param name="radius">高程</param>
                    /// <returns>true表示成功</returns>
                    static ev_void ProjCoordinateToGeoCoordinate(const EarthView::World::Spatial::Geometry::ISpatialReference* sr,const ev_real64& in_x,const ev_real64& in_y,const ev_real64& in_z , ev_real64& latitude,ev_real64& longitude,ev_real64& radius);

                    /// <summary>
                    /// 由投影坐标转换成地理坐标
                    /// </summary>
                    /// <param name="sr">空间参考系统参数</param>
                    /// <param name="x">东坐标</param>
                    /// <param name="y">北坐标</param>
                    /// <param name="z">高程</param>                    
                    /// <returns>true表示成功</returns>
                    static ev_void ProjCoordinateToGeoCoordinate( const EarthView::World::Spatial::Geometry::ISpatialReference* sr,ev_real64& x,ev_real64& y,ev_real64& z);

                    /// <summary>
                    /// 由投影坐标转换成地理坐标
                    /// </summary>
                    /// <param name="sr">空间参考系统参数</param>
                    /// <param name="nCount">坐标个数</param>   
					/// <param name="pdfX">东坐标</param>
					/// <param name="pdfY">北坐标</param>
					/// <param name="pdfZ">高程</param>        
                    /// <returns>true表示成功</returns>
                    static ev_void ProjCoordinateToGeoCoordinate(const EarthView::World::Spatial::Geometry::ISpatialReference* sr,_in ev_uint32 nCount,_inout ev_real64*pdfX,_inout ev_real64*pdfY,_inout ev_real64*pdfZ);

					/// <summary>
					/// 地理坐标转投影坐标，相同椭球体
					/// </summary>					
					/// <param name="srcCoordinate">源地理坐标</param>
					/// <param name="resCoordinate">目标投影坐标</param>
					/// <param name="sr">目标参考</param>
					/// <returns></returns>
					static ev_void geoCoordinateToProjCoordinate(const EarthView::World::Spatial::Math::CVector3& srcCoordinate,EarthView::World::Spatial::Math::CVector3& resCoordinate,const EarthView::World::Spatial::Geometry::ISpatialReference* sr);

					/// <summary>
					/// 地理坐标或投影坐标转换为笛卡尔坐标
					/// </summary>
					/// <param name="sr">空间参考</param>
					/// <param name="srcCoordinate">源坐标</param>
					/// <param name="resCoordinate">目标坐标</param>
					/// <returns>三维图形转换信息</returns>
					static ev_void coordinateToCartesian(const EarthView::World::Spatial::Geometry::ISpatialReference* sr,const EarthView::World::Spatial::Math::CVector3& srcCoordinate,EarthView::World::Spatial::Math::CVector3& resCoordinate);

					/// <summary>
					/// 笛卡尔坐标转地理坐标或投影坐标
					/// </summary>
					/// <param name="sr">参考</param>
					/// <param name="srcCoordinate">源坐标</param>
					/// <param name="resCoordinate">目标坐标</param>
					/// <returns>三维图形转换信息</returns>
					static ev_void cartensionToCoordinate(const EarthView::World::Spatial::Geometry::ISpatialReference* sr,const EarthView::World::Spatial::Math::CVector3& srcCoordinate,EarthView::World::Spatial::Math::CVector3& resCoordinate);

					/// <summary>
					/// 判断两条线段是否相交，不包含边界，输入点为经纬度坐标
					/// </summary>
					/// <param name="node0">线段1端点,地理坐标</param>
					/// <param name="node1">线段1端点,地理坐标</param>
					/// <param name="node2">线段2端点,地理坐标</param>
					/// <param name="node3">线段2端点,地理坐标</param>
					/// <returns>两条线段是否相交</returns>
					static ev_bool calculateIntersection(EarthView::World::Spatial::Math::CVector3 node0, EarthView::World::Spatial::Math::CVector3 node1, EarthView::World::Spatial::Math::CVector3 node2, EarthView::World::Spatial::Math::CVector3 node3);

					/// <summary>
					/// 由两点间的经纬度计算出两点的圆心的夹角
					/// </summary>
					/// <param name="latA">第一点的纬度，角度制</param>
					/// <param name="lonA">第一点的经度，角度制</param>
					/// <param name="latB">第二点的纬度，角度制</param>
					/// <param name="lonB">第二点的经度，角度制</param>
					/// <returns>两点间圆心角的大小，弧度制</returns>
					static ev_real64 approxAngularDistance(_in ev_real64 latA,_in ev_real64 lonA, _in ev_real64 latB,_in ev_real64 lonB);

					/// <summary>
					/// 反距离权重插值
					/// </summary>
					/// <param name="point">需要插值的点</param>
					/// <param name="arry">离计算点最近的插值点</param>
					/// <param name="power">采用的幂次方</param>
					/// <returns>插值结果值</returns>
					static ev_real64 interpolate(const EarthView::World::Spatial::Math::CVector3& point, const EarthView::World::Spatial::Math::VertexList& arry, ev_int32 power);

					static EarthView::World::Spatial::Math::CMatrix4 composeWorldMatrix(ev_real64 lat,ev_real64 lon,ev_real64 alt,const EarthView::World::Spatial::Math::CVector3& scaleInLocal,const EarthView::World::Spatial::Math::CQuaternion& orientInLocal);
					static ev_void decomposeWorldMatrix(const EarthView::World::Spatial::Math::CMatrix4& worldMatrix,ev_real64& lat,ev_real64& lon,ev_real64& alt,EarthView::World::Spatial::Math::CVector3& scaleInLocal,EarthView::World::Spatial::Math::CQuaternion& orientInLocal);
					
					static EarthView::World::Spatial::Math::CMatrix4 composeWorldMatrix(ev_real64 lat,ev_real64 lon,ev_real64 alt,const EarthView::World::Spatial::Math::CVector3& scaleInLocal,const EarthView::World::Spatial::Math::CQuaternion& orientInLocal,EarthView::World::Spatial3D::Utility::CSpatialCalculator::EVAxisUpType axisUpType);
					static ev_void decomposeWorldMatrix(const EarthView::World::Spatial::Math::CMatrix4& worldMatrix,ev_real64& lat,ev_real64& lon,ev_real64& alt,EarthView::World::Spatial::Math::CVector3& scaleInLocal,EarthView::World::Spatial::Math::CQuaternion& orientInLocal,EarthView::World::Spatial3D::Utility::CSpatialCalculator::EVAxisUpType axisUpType);
					/// <summary>
					/// 球面视距计算(目的:剔除海平面以下的物体)
					///         /----------------
					///  d =   /  h ^2 + 2 h r           (h > 0)
					///      \/
					/// </summary>
					/// <param name="vCamera">相机向量</param>
					/// <returns>当前镜头高度下的视距</returns>
					static Real visibleDistance(const EarthView::World::Spatial::Math::CVector3& vCamera);
					//{
					//	ev_real64 rCam= sqrt(vCamera.x *vCamera.x + vCamera.y* vCamera.y + vCamera.z * vCamera.z);
					//	Real height = rCam - EV_EARTHRADIUS;
					//	return visableDistance(height,EV_EARTHRADIUS);
					//}

					//static inline Real visableDistance(Real h, Real r)
					//{
					//	if(h > 0)
					//		return sqrt(h * h + 2 * h * r);
					//	else
					//		return 0.0;
					//}

					static EarthView::World::Spatial::Math::CAxisAlignedBox envelope2Box(const EarthView::World::Spatial::Geometry::ISpatialReference* sr,const EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope,ev_real64 minz,ev_real64 maxz,ev_real64 ex);
					static EarthView::World::Spatial::Math::CAxisAlignedBox envelope2Box(const EarthView::World::Spatial::Geometry::ISpatialReference* sr,const EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope,ev_real64 minz,ev_real64 maxz)
					{
						return envelope2Box(sr,pEnvelope,minz,maxz,0.0);
					}

					static ev_bool upwardsHorizon(const EarthView::World::Spatial::Math::CVector3& vCamera,const EarthView::World::Spatial::Math::CVector3& vPoint);

					/// <summary>
					/// 获取geometry中心点
					/// </summary>
					/// <param name="geometry">geometry</param>
					/// <param name="center">中心点，坐标系同geometry</param>
					/// <returns>正确获取</returns>
					static ev_bool getGeometryCenter(const EarthView::World::Spatial::Geometry::IGeometry* geometry, EarthView::World::Spatial::Math::CVector3& center);
				ev_private:
					/// <summary>
					/// 计算三角面法线，注：三角网是TriangleList
					/// </summary>
					/// <param name="verts">三角顶点集合</param>
					/// <param name="indices">三角顶点索引集合</param>
					/// <param name="normals">输出法线</param>
					/// <returns>插值结果值</returns>
					static ev_void computeNormals(const vector<EarthView::World::Spatial::Math::CVector3>& verts, const list<ev_uint32>& indices,_out vector<EarthView::World::Spatial::Math::CVector3>& normals );

					//判断平面线段是否相交
					//p1,p2前线
					//p3,p4后线
					//p交点坐标
					//相交在线上1，交于外面return 0,不相交return -1
					static ev_int32 lineCross(const EarthView::World::Spatial::Math::CVector2& p1,const EarthView::World::Spatial::Math::CVector2& p2,const EarthView::World::Spatial::Math::CVector2& p3,const EarthView::World::Spatial::Math::CVector2& p4,EarthView::World::Spatial::Math::CVector2& p);
				
					//线转换为linestring
					static ev_void getLineString( const EarthView::World::Spatial::Geometry::IGeometry* geometry,ev_uint32 smooth , list<EarthView::World::Spatial::Geometry::CLineString*>& lstLines );
					static ev_bool getPolygonCenter(const EarthView::World::Spatial::Geometry::IGeometry* geometry, EarthView::World::Spatial::Math::CVector3& center);

               };
            }
        }
    }
}

#endif
