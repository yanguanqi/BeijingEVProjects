#ifndef EV_IMAGEOVERLAYEREDITTOOL_H
#define EV_IMAGEOVERLAYEREDITTOOL_H
#include "spatial3dengine/spatial3dengineconfig.h"
#include "libgdiplus/gdip.h"  
#include "libgdiplus/gdipstructs.h"
#include "libgdiplus/gdiplusdef.h"
#include "spatialgui/itool.h"
#include "spatial3dengine/ikmlobserver.h"
#include "spatial3dengine/positioncolor.h"
#include "graphic/root.h"
#include "graphic/resourcegroupmanager.h"
#include "graphic/scenemanager.h"
#include "graphic/manualobject.h" 
#include "graphic/camera.h"
#include "graphic/viewport.h"
#include "graphic/technique.h"
#include "graphic/scenenode.h"
#include "graphic/materialmanager.h"
#include "kmlserializer/kmldocument.h"
#include "spatialinterface/altitudemode.h"
#include "geometry3d/geometry3dextension/multipoint3dextension.h"
#include "geometry3d/geometry3d/vector_graphics.h"
#include "libgdiplus/matrix.h"


namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace KmlManager
			{
				class  EV_Spatial3DEngine_DLL CImageOverlayerEditTool: public EarthView::World::Spatial::SystemUI::ITool
				{
ev_private: 
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CImageOverlayerEditTool(EarthView::World::Core::CNameValuePairList* pList);

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="sceneMgr">场景管理器</param>
					/// <param name="camera">相机</param>
					/// <param name="geoObj">地理对象</param>
					/// <param name="parent">kml文档</param>
					/// <returns></returns>
					CImageOverlayerEditTool(EarthView::World::Graphic::CSceneManager* ref_sceneMgr,EarthView::World::Graphic::CCamera* ref_camera,EarthView::World::Graphic::CViewport* ref_viewPort,EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj,EarthView::World::Spatial::Kml::CKmlDocument* ref_parent);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CImageOverlayerEditTool();

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
					/// 鼠标双击事件触发
					/// </summary>
					/// <returns>是否继续向父控件发送该事件</returns>
					virtual ev_bool onDoubleClick();
					virtual ev_bool onDoubleClick(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y){return onDoubleClick();}
					/// <summary>
					/// 获取编辑工具的类型
					/// </summary>
					/// <returns>返回编辑工具的类型</returns>
					virtual ev_uint32 getType() const;
					/// <summary>
					/// 获取地理对象的kmldoc
					/// </summary>
					/// <returns>返回kmldoc文档</returns>
					EarthView::World::Spatial::Kml::CKmlDocument* getGeoObjectParent();
					/// <summary>
					/// 获取地理对象
					/// </summary>
					/// <returns>返回地理对象</returns>
					EarthView::World::Spatial::Kml::CGeoObjectExtension* getGeoObject();
					virtual ev_void deactivate();
					EarthView::World::Graphic::CCamera* mCamera;
					EVString mFilePath;
					ev_bool mIsNeedRefresh;
					ev_bool mHasImage;
					EVString mPictureGUID;
					ev_bool mIsRemovePictureCache;
					/// <summary>
					/// 更新高程
					/// </summary>
					/// <returns></returns>
					ev_void updateGeoPolygonAlt();
					/// <summary>
					/// 更新顶点缓冲区
					/// </summary>
					/// <param name="isRefreshLine">是否刷新线</param>
					/// <returns></returns>
					ev_void updateVertexBuffer(ev_bool isRefreshLine);
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
					/// 设置CGeoObjectExtension属性
					/// </summary>
					/// <param name="att">CGeoObjectExtension属性</param>
					/// <returns></returns>
					ev_void setGeoObjectExtensionAttribute(EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute att);
				protected:
					int mLastX;
					int mLastY;
					ev_bool mIsDraging;
					int mDragingIndex;
					EVString mName;
					ev_bool mIsVisible;
				private:
					EarthView::World::Spatial::Kml::CGeoObjectExtension* mpGeoObj;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute m_geoAttribute;
					EarthView::World::Graphic::CViewport* m_viewPort;
					EarthView::World::Geometry3D::CMovablePolyline2* line2;
					GpMatrix *drawing2DMatrix;
					ev_bool hasUsedMatrix;
					//测试
					//ev_void renderTestPoint(CVector3 testWorldPos);
					//CManualObject* mPoint;
					//CSceneNode* mNode2;
					//end
					vector<EarthView::World::Spatial3D::KmlManager::IKmlObserver*> mObserverList;
					ev_void _notify(ev_bool isRefershView);
					EarthView::World::Spatial::Kml::CKmlDocument* mParent;
					//CKmlFeatureEditToolManager* mManager;
					ev_bool contains(EarthView::World::Spatial::Math::CVector3 vP,int x,int y);
					double mEast;
					double mWest;
					double mSouth;
					double mNorth;
					double mRotateAngle;
					double mCenterLat;
					double mCenterLon;
					EarthView::World::Spatial::Utility::EVAltitudeMode mAltitudeMode;
					double mAltitude;
					double mCenterTerrainAlt;
					EarthView::World::Graphic::CSceneManager* mSceneMgr;
					EarthView::World::Graphic::CMaterialPtr mMaterial;
					EarthView::World::Graphic::CSceneNode* mNode;
					ev_void createOutFrame(ev_bool bestHeight);
					double normalize(double lon);
					EarthView::World::Spatial::Math::CVector3 mLocalCenter;
					EarthView::World::Spatial::Math::CVector3 mRotatePoint;
					ev_uint32 mColor;

					EarthView::World::Spatial::Math::CVector3 mVerts[37];
					ev_uint32 mIndices[56];
					//GpPointF tempPs[38];
					ev_real64 tempPsX[38];
					ev_real64 tempPsY[38];
					ev_void renderFrame(ev_bool isRefersh);
					ev_void createBoundary(ev_real64 leftTopX,ev_real64 leftTopY,ev_real64 rightBottomX,ev_real64 rightBottomY);
					ev_void refresh();
					ev_bool pickingRayIntersection(_in int screenX,_in int screenY,_inout double& latitude,_inout double& longitude,_inout double& alt,_in ev_bool interestModel/*=false*/);
					EarthView::World::Spatial::Math::CRay screenToScene(_in int x,_in int y);
					ev_bool computeIntersectPoint(const EarthView::World::Spatial::Math::CVector3& selectedPoint,const EarthView::World::Spatial::Math::CVector3& reversePoint, const EarthView::World::Spatial::Math::CVector3& leftPoint,
						const EarthView::World::Spatial::Math::CVector3& rightPoint, EarthView::World::Spatial::Math::CVector2& mousePosition,  EarthView::World::Spatial::Math::CVector2& intersectPoint);
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
					/// <summary>
					/// 转屏幕坐标
					/// </summary>
					/// <param name="start">带转换的点</param>
					/// <returns>返回屏幕坐标</returns>
					EarthView::World::Spatial::Math::CVector3 convertToScreenPoint(const EarthView::World::Spatial::Math::CVector3& vec);
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
					/// 经纬度转世界坐标
					/// </summary>
					/// <param name="lat">纬度</param>
					/// <param name="lon">经度</param>
					/// <returns>返回世界坐标</returns>
					EarthView::World::Spatial::Math::CVector3 convertToWorldPosition(ev_bool bestHeight,double lat,double lon);
				};
			}
		}
	}
}
#endif

