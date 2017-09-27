#ifndef EV_REGIONLODEDITTOOL_H
#define EV_REGIONLODEDITTOOL_H

#include "spatial3dengine/spatial3dengineconfig.h"
#include "spatial3dengine/ikmlobserver.h"
#include "spatial3dengine/positioncolor.h"
#include "graphic/root.h"
#include "graphic/scenemanager.h"
#include "graphic/manualobject.h" 
#include "graphic/camera.h"
#include "graphic/viewport.h"
#include "graphic/technique.h"
#include "graphic/scenenode.h"
#include "graphic/materialmanager.h"
#include "graphic/resourcegroupmanager.h"
#include "geometry3d/geometry3dextension/multipoint3dextension.h"
#include "geometry3d/geometry3d/vector_graphics.h"
#include "spatialgui/itool.h"

namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			class CGeoPolygonEx;
		}
		namespace Spatial
		{
			class CGeoObject;
			namespace Geometry
			{
				class CPolygon;
			}
			namespace Display
			{
				class CSimpleFill3DSymbol;
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
			namespace KmlManager
			{
				class  EV_Spatial3DEngine_DLL CRegionLodEditTool: public EarthView::World::Spatial::SystemUI::ITool
				{
ev_private: 
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CRegionLodEditTool(EarthView::World::Core::CNameValuePairList* pList);

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_sceneMgr">场景管理器</param>
					/// <param name="ref_camera">相机</param>
					/// <param name="ref_viewPort">视口</param>
					/// <param name="ref_geoExtAttribute">CGeoObjectExtension属性</param>
					/// <returns></returns>
					CRegionLodEditTool(EarthView::World::Graphic::CSceneManager* ref_sceneMgr,EarthView::World::Graphic::CCamera* ref_camera,EarthView::World::Graphic::CViewport* ref_viewPort,EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ref_geoAttribute);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CRegionLodEditTool();
					/// <summary>
					/// 鼠标弹起事件触发
					/// </summary>
					/// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
					/// <param name="shift">shift键是否同时被释放</param>
					/// <param name="x">光标位置x</param>
					/// <param name="y">光标位置y</param>
					/// <returns>是否继续向父控件发送该事件</returns>
					virtual ev_bool onMouseUp(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);
					/// <summary>
					/// 鼠标按下事件触发
					/// </summary>
					/// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
					/// <param name="shift">shift键是否同时被按下</param>
					/// <param name="x">光标位置x</param>
					/// <param name="y">光标位置y</param>
					/// <returns>是否继续向父控件发送该事件</returns>
					virtual ev_bool onMouseDown(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);
					/// <summary>
					/// 鼠标移动事件触发
					/// </summary>
					/// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
					/// <param name="shift">shift键是否同时被按下</param>
					/// <param name="x">光标位置x</param>
					/// <param name="y">光标位置y</param>
					/// <returns>是否继续向父控件发送该事件</returns>
					virtual ev_bool onMouseMove(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);
					/// <summary>
					/// 获取编辑工具的类型
					/// </summary>
					/// <returns>返回编辑工具的类型</returns>
					virtual ev_uint32 getType() const;
					/// <summary>
					/// 不使用Tool，重写基类中方法
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void deactivate();
					/// <summary>
					/// 更新响应鼠标操作的边框（最小、最大高程改变时更新）
					/// </summary>
					/// <returns></returns>
					ev_void updateOutFrameLatLonAlt();
					/// <summary>
					/// 更新响应鼠标操作的边框(经纬度改变时更新)
					/// </summary>
					/// <param name="isRefreshLine">是否刷新</param>
					/// <returns></returns>
					ev_void updateOutFrameLatLon(ev_bool isRefersh);
					/// <summary>
					/// 注册监听
					/// </summary>
					/// <param name="observer">监听者</param>
					/// <returns></returns>
					ev_void registerObserver(EarthView::World::Spatial3D::KmlManager::IKmlObserver* ref_observer);
					/// <summary>
					/// 反注册监听
					/// </summary>
					/// <param name="observer">监听者</param>
					/// <returns></returns>
					ev_void unRegisterObserver(EarthView::World::Spatial3D::KmlManager::IKmlObserver* observer);
					/// <summary>
					/// 获取北方向的范围
					/// </summary>
					/// <returns>返回北方向值</returns>
					double getNorth();
					/// <summary>
					/// 设置往北方向的范围
					/// </summary>
					/// <param name="north">北方向的值</param>
					/// <returns></returns>
					ev_void setNorth(double north);
					/// <summary>
					/// 获取南方向的范围
					/// </summary>
					/// <returns>返回南方向值</returns>
					double getSouth();
					/// <summary>
					/// 设置往南方向的范围
					/// </summary>
					/// <param name="south">南方向的值</param>
					/// <returns></returns>
					ev_void setSouth(double south);
					/// <summary>
					/// 获取东方向的范围
					/// </summary>
					/// <returns>返回东方向值</returns>
					double getEast();
					/// <summary>
					/// 设置往东方向的范围
					/// </summary>
					/// <param name="east">东方向的值</param>
					/// <returns></returns>
					ev_void setEast(double east);
					/// <summary>
					/// 获取往西方向的范围
					/// </summary>
					/// <returns>返回西方向值</returns>
					double getWest();
					/// <summary>
					/// 设置往西方向的范围
					/// </summary>
					/// <param name="west">西方向的值</param>
					/// <returns></returns>
					ev_void setWest(double west);
					/// <summary>
					/// 获取CGeoObjectExtension属性
					/// </summary>
					/// <returns>CGeoObjectExtension属性</returns>
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* getGeoObjectExtensionAttribute();
					/// <summary>
					/// 设置CGeoObjectExtension属性
					/// </summary>
					/// <param name="att">CGeoObjectExtension属性</param>
					/// <returns></returns>
					ev_void setGeoObjectExtensionAttribute(EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* att);

				protected:
					/// <summary>
					/// 构建地理包围盒
					/// </summary>
					/// <returns></returns>
					ev_void createBoundary(ev_real64 leftTopX,ev_real64 leftTopY,ev_real64 rightBottomX,ev_real64 rightBottomY);
					/// <summary>
					/// 创建响应鼠标操作的边框
					/// </summary>
					/// <param name="isRefersh">true表示仅刷新，false表示第一次创建</param>
					/// <returns></returns>
					ev_void createOutFrame(ev_bool isRefersh);
					/// <summary>
					/// 屏幕坐标转经纬度坐标
					/// </summary>
					/// <returns></returns>
					ev_bool pickingRayIntersection(_in int screenX,_in int screenY,_inout double& latitude,_inout double& longitude,_in ev_bool interestModel/*=false*/);
					/// <summary>
					/// 判断给定的世界坐标点是否被选中
					/// </summary>
					/// <param name="vP">给定的世界坐标点</param>
					/// <param name="x">当前的鼠标位置</param>
					/// <param name="y">当前的鼠标位置</param>
					/// <returns>True表示选中，False表示未选中</returns>
					ev_bool contains(EarthView::World::Spatial::Math::CVector3 vP,int x,int y);
					/// <summary>
					/// 计算相交点
					/// </summary>
					/// <returns></returns>
					ev_void computeIntersectPoint(const EarthView::World::Spatial::Math::CVector3& selectedPoint,const EarthView::World::Spatial::Math::CVector3& reversePoint, const EarthView::World::Spatial::Math::CVector3& leftPoint,
						const EarthView::World::Spatial::Math::CVector3& rightPoint, EarthView::World::Spatial::Math::CVector2& mousePosition,EarthView::World::Spatial::Math::CVector2& intersectPoint);

					EarthView::World::Graphic::CSceneManager* mSceneMgr;
					EarthView::World::Graphic::CCamera* mCamera;
					EarthView::World::Graphic::CViewport* mViewPort;
					EarthView::World::Graphic::CSceneNode* mNode;
					EarthView::World::Graphic::CMaterialPtr mMaterial;

					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* mGeoAttribute;
					vector<EarthView::World::Spatial3D::KmlManager::IKmlObserver*> mObserverList;
					EarthView::World::Geometry3D::CMovablePolyline2* mLine2;					
					
					ev_bool mIsNeedRefresh;
					ev_bool mIsDraging;
					int mDragingIndex;
					ev_uint32 mColor;
					double mEast;
					double mWest;
					double mSouth;
					double mNorth;
					double mAltitude;
					double mMinAltitude;
					double mMaxAltitude;
					double mCenterLat;
					double mCenterLon;			

				private:
					/// <summary>
					/// 通知监听刷新
					/// </summary>
					/// <returns></returns>
					ev_void _notify(ev_bool isRefershView);
					/// <summary>
					/// 通过屏幕坐标计算拾取射线
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial::Math::CRay screenToScene(_in int x,_in int y);	
					/// <summary>
					/// 世界坐标转屏幕坐标
					/// </summary>
					/// <param name="vec">转换的点</param>
					/// <returns>返回屏幕坐标</returns>
					EarthView::World::Spatial::Math::CVector3 convertToScreenPoint(const EarthView::World::Spatial::Math::CVector3& vec);
					/// <summary>
					/// 计算两点之间的斜率
					/// </summary>
					/// <param name="start">起始点</param>
					/// <param name="end">终点</param>
					/// <returns>返回斜率</returns>
					ev_real32 lineSlope(const EarthView::World::Spatial::Math::CVector3& start,const EarthView::World::Spatial::Math::CVector3& end);
					/// <summary>
					/// 计算过point点且平行于直线的截距
					/// </summary>
					/// <param name="point">给定的点</param>
					/// <param name="slope">斜率</param>
					/// <returns>返回截距</returns>
					ev_real32 lineIntercept(const EarthView::World::Spatial::Math::CVector2& point,float slope);
					/// <summary>
					/// 计算过两点的直线的斜率和截距
					/// </summary>
					/// <param name="start">起始点</param>
					/// <param name="end">终点</param>
					/// <param name="slope">斜率</param>
					/// <param name="intercept">截距</param>
					/// <returns></returns>
					ev_void computeSlopeAndIntercept(const EarthView::World::Spatial::Math::CVector3& start,const EarthView::World::Spatial::Math::CVector3& end, ev_real32& slope, ev_real32& intercept);
					/// <summary>
					/// 计算两点之间的距离
					/// </summary>
					/// <param name="start">起始点</param>
					/// <param name="end">终点</param>
					/// <returns>返回距离</returns>
					double distance(const EarthView::World::Spatial::Math::CVector2& start,const EarthView::World::Spatial::Math::CVector2& end);									
					/// <summary>
					/// 标准化经度值
					/// </summary>
					/// <returns>经度值</returns>
					double lonNormalize(double lon);
					/// <summary>
					/// 构建响应鼠标操作的边框
					/// </summary>
					/// <returns></returns>
					ev_void createVertexAndIndexDataOutFrame();
					/// <summary>
					/// 渲染响应鼠标操作的边框
					/// </summary>
					/// <returns></returns>
					ev_void renderOutFrame(ev_bool isRefersh);
					/// <summary>
					/// 渲染扩展面
					/// </summary>
					/// <param name="pts">点列表</param>
					ev_void renderPolygon3D(EarthView::World::Spatial::Math::VertexList& pts);
					/// <summary>
					/// 屏幕点转换为球面坐标
					/// </summary>
					/// <param name="soucreScreenPoint">屏幕点坐标</param>
					/// <param name="deltaX">屏幕中心x坐标</param>
					/// <param name="deltaY">屏幕中心y坐标</param>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <returns></returns>
					ev_bool computeSphericalPoint(EarthView::World::Spatial::Math::CVector3 soucreScreenPoint, ev_real32 deltaX, ev_real32 deltaY, double& latitude, double& longitude);
					
					EarthView::World::Spatial::Math::CVector3 mVerts[33];
					ev_uint32 mIndices[48];
					ev_real64 tempPsX[33];
					ev_real64 tempPsY[33];
					/// <summary>
					/// 三维填充样式
					/// </summary>
					EarthView::World::Spatial::Display::CSimpleFill3DSymbol* mpSymbol3D;
					/// <summary>
					/// 几何对象
					/// </summary>
					EarthView::World::Spatial::CGeoObject* mpGeoObj3D;
					/// <summary>
					/// 多边形扩展对象
					/// </summary>
					EarthView::World::Geometry3D::CGeoPolygonEx* mpGeoPolygonEx3D;
				};
			}
		}
	}
}
#endif

