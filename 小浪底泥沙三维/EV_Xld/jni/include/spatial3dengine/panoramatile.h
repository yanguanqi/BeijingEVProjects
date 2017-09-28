#ifndef __PanoramaTile_H__
#define __PanoramaTile_H__
#pragma  once

#include "spatial3dengine/spatial3dengineconfig.h"

#include "core/file.h"
#include "spatialgui/guievent.h"
#include <graphic/root.h>
#include "graphic/simplerenderable.h"
#include "graphic/image.h"
#include "graphic/technique.h"
#include "graphic/pass.h"
#include "graphic/texturemanager.h"
#include "graphic/scenenode.h"
#include "graphic/resourcegroupmanager.h"
#include "graphic/materialmanager.h"
#include "graphic/scenemanager.h"
#include "graphic/camera.h"
#include "graphic/viewport.h"
#include <graphic/hardwareindexbuffer.h>
#include <graphic/hardwarebuffermanager.h>
#include <graphic/hardwarevertexbuffer.h>
#include "mathengine/earthradius.h"
#include "mathengine/mathutility.h"
#include "geometry3d/geometry3dextension/multipoint3dextension.h"
#include "geometry3d/visibleobject.h"

#include "spatial3dengine/globecamera.h"

#include "display/bitmap.h"
#include "ga/guieventhandler.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Atlas
			{
				class CPanoramaTileEx;

				class EV_Spatial3DEngine_DLL CPanoramaTile : public EarthView::World::Graphic::CSimpleRenderable
				{
					/*class CGuiPanorama360EventHandler : public EarthView::World::Spatial3D::Controls::CGUIEventHandler
					{
						CGuiPanorama360EventHandler(CPanoramaTile* obj);
						virtual ~CGuiPanorama360EventHandler();
						/// <summary>
						/// 事件处理接口
						/// </summary>
						/// <param name="guiEvent">事件对象</param>
						/// <returns></returns>
						virtual ev_bool handleEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
					private:
						CPanoramaTile* mpPanorama360;

					};*/
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="name">名称</param>
					/// <param name="imageFilePath">本地图片路径</param>
					/// <param name="uri">服务器地址</param>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="altitude">相对地面高度</param>
					/// <param name="radius">半径</param>
					CPanoramaTile(EVString name,EarthView::World::Graphic::CSceneManager* sceneMgr,EarthView::World::Spatial3D::CGlobeCamera* camera,EVString imageFilePath,EVString uri,double latitude,double longitude,double altitude,float radius);
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="name">名称</param>
					/// <param name="imageFilePath">本地图片路径</param>
					/// <param name="iconFilePath">图标路径</param>
					/// <param name="uri">服务器地址</param>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="altitude">相对地面高度</param>
					/// <param name="radius">半径</param>
					/// <param name="heading">图片拍摄时相机方向相对正北的夹角，以度为单位</param>
					CPanoramaTile(EVString name,EarthView::World::Graphic::CSceneManager* sceneMgr,EarthView::World::Spatial3D::CGlobeCamera* camera,EVString imageFilePath, EVString iconFilePath, EVString uri,double latitude,double longitude,double altitude,float radius, ev_real32 heading);
					/// <summary>
					/// 释放
					/// </summary>
					virtual ~CPanoramaTile();
				protected:
					/// <summary>
					/// 构造函数
					/// </summary>
					CPanoramaTile(EarthView::World::Graphic::CSceneManager* sceneMgr);
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="name">名称</param>
					/// <param name="imageFilePath">本地图片路径</param>
					/// <param name="uri">服务器地址</param>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="altitude">相对地面高度</param>
					/// <param name="radius">半径</param>
					/// <param name="south">最小纬度</param>
					/// <param name="north">最大纬度</param>
					/// <param name="west">最小经度</param>
					/// <param name="east">最大经度</param>
					/// <param name="level">所属级别</param>
					CPanoramaTile(EVString name,EarthView::World::Graphic::CSceneManager* sceneMgr, EVString imageFilePath,EVString uri,EarthView::World::Spatial::Math::CVector3 centerPos, double latitude, double longitude, double altitude, float radius,
						double south, double north, double west, double east, int level);
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="name">名称</param>
					/// <param name="imageFilePath">本地图片路径</param>
					/// <param name="iconFilePath">图标路径</param>
					/// <param name="uri">服务器地址</param>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="altitude">相对地面高度</param>
					/// <param name="radius">半径</param>
					/// <param name="south">最小纬度</param>
					/// <param name="north">最大纬度</param>
					/// <param name="west">最小经度</param>
					/// <param name="east">最大经度</param>
					/// <param name="level">所属级别</param>
					/// <param name="heading">图片拍摄时相机方向相对正北的夹角，以度为单位</param>
					CPanoramaTile(EVString name,EarthView::World::Graphic::CSceneManager* sceneMgr, EVString imageFilePath, EVString iconFilePath, EVString uri,EarthView::World::Spatial::Math::CVector3 centerPos, double latitude, double longitude, double altitude, float radius,
						double south, double north, double west, double east, int level, ev_real32 heading);
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CPanoramaTile(_in EarthView::World::Core::CNameValuePairList * pList);

				public:
					virtual ev_void setSelectable(ev_bool selectable);
										
					/// <summary>
					/// 设置是否可见               
					/// </summary>
					/// <param name="visible">是否可见</param>
					/// <returns></returns>
					virtual void setVisible(ev_bool visible);
					/// <summary>
					/// 初始化
					/// </summary>
					/// <param name="drawArgs">渲染参数</param>
					virtual void build();   

					void setPanoramaTilePath(EVString imageFilePath);
					float getCameraDistance();
					void reset();
					/// <summary>
					/// 渲染
					/// </summary>
					/// <param name="drawArgs">渲染参数</param>
					void render();

					void derender();

					void resetResource(EVString imageFilePath,EVString uri);

					EVString getMovableType() const;

					void _notifyCurrentCamera(EarthView::World::Graphic::CCamera *cam);

					virtual Real getSquaredViewDepth(const EarthView::World::Graphic::CCamera *cam) const;

					ev_bool doubleClickEvent(EarthView::World::Graphic::CViewport* viewPort,ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);

					ev_bool mouseDownEvent(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);

					ev_bool mouseUpEvent(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);

					ev_bool mouseMoveEvent(EarthView::World::Graphic::CViewport* viewPort,ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);

					ev_bool mouseWheelEvent(ev_int32 delta,ev_int32 x,ev_int32 y,ev_int32 flag);

					ev_bool isCameraIn();
				private:
					EarthView::World::Graphic::CSceneNode* m_pNode;
public:
					ev_real64 getLatitude() const;
					ev_real64 getLongitude() const;
					ev_real64 getAbsoluteAltitude() const;
					EarthView::World::Spatial::Math::CVector3 getCenterPosition() const;



				protected:

					class CCameraListenerInternal : public CGlobeCamera::CGlobeCameraListener
					{
					public:
						CCameraListenerInternal(CPanoramaTile* parent);
						~CCameraListenerInternal();
					public:
						virtual void cameraParamChanged(_in EarthView::World::Graphic::CCamera* camera);
						virtual void cameraDestroyed( _in EarthView::World::Graphic::CCamera *cam);
						void beginListen(EarthView::World::Graphic::CCamera *camera);
						void endListen();
						EarthView::World::Graphic::CCamera* getCamera(){return mCamera;}
					protected:
						CPanoramaTile* mParent;
						EarthView::World::Graphic::CCamera* mCamera;
					};
					CCameraListenerInternal* mCameraListener;

					class CPanoramaTileInternal : public EarthView::World::Geometry3D::CVisibleObject
					{
					public:
						CPanoramaTileInternal(CPanoramaTile* parent);
						virtual ~CPanoramaTileInternal();

					public:
						/// <summary>
						///  加载资源，需要重写
						/// </summary>
						/// <returns>true成功，false失败</returns>
						virtual ev_bool load();

						/// <summary>
						///  卸载模型资源，需要重写
						/// </summary>
						/// <returns>true成功，false失败</returns>
						virtual ev_bool unload();

						/// <summary>
						///  直接挂到场景，******选择重写******
						/// <param name="n">instance直接挂到场景</param>
						/// </summary>
						/// <returns>true成功，false失败</returns>
						virtual ev_bool attachToScene();

						/// <summary>
						///  从场景反挂接，******选择重写******
						/// </summary>
						/// <returns>true成功，false失败</returns>
						virtual ev_bool detachFromScene();

					private:
						CPanoramaTile* mParent;
					};
										
					class CInternalCameraProjectMatrixListener : public EarthView::World::Spatial3D::CGlobeCamera::CProjectMatrixListener
					{
					public:
						/// <summary>
						/// 构造函数
						/// </summary>
						/// <returns></returns>
						CInternalCameraProjectMatrixListener(Real nearDis);
					public:

						virtual ~CInternalCameraProjectMatrixListener();

						/// <summary>
						/// 设置投影变换矩阵参数
						/// </summary>
						/// <param name="camera">相机</param>
						/// <returns></returns>
						virtual ev_void parameterChanging(_in EarthView::World::Spatial3D::CGlobeCamera* globeCamera,_in ev_real64& nearDistance ,_in ev_real64& farDistance );
					private:
						Real mNearDistance;
					};
					
					EarthView::World::Spatial3D::CGlobeCamera::CProjectMatrixListener* mpOldCameraProjectMatrixListener;
					CInternalCameraProjectMatrixListener* mpCameraProjectMatrixListener;

					ev_real64 calculateZoomFactor(_in ev_real32 mouseWheelDelta);

					void computePosition();
					
					/// <summary>
					/// 更新
					/// </summary>
					/// <param name="drawArgs">渲染参数</param>
					void update(EarthView::World::Graphic::CCamera* camera);

					/// <summary>
					/// 建立mesh
					/// </summary>
					void createMesh();
					/// <summary>
					/// 添加子块
					/// </summary>       
					void createChildren();

					/// <summary>
					/// 建立瓦片对象的关键字
					/// </summary>
					/// <param name="level">级别</param>
					/// <param name="row">行号</param>
					/// <param name="column">列号</param>
					/// <returns></returns>
					EVString keyString(int level, int row, int column);
					/// <summary>
					/// 解析瓦片对象关键字
					/// </summary>
					/// <param name="name">名称</param>
					/// <returns></returns>
					EVString parseKeyString(EVString name);

					/// <summary>
					/// 获得瓦片行数
					/// </summary>
					/// <param name="latitude">中心纬度</param>
					/// <param name="tileSize">纬度范围</param>
					/// <returns></returns>
					int getRowFromLatitude(double latitude, double tileSize);
					/// <summary>
					/// 获得瓦片列数
					/// </summary>
					/// <param name="longitude">中心经度</param>
					/// <param name="tileSize">经度范围</param>
					/// <returns></returns>
					int getColFromLongitude(double longitude, double tileSize);       
					/// <summary>
					/// 计算包围盒
					/// </summary>
					/// <returns>包围盒顶点的世界坐标</returns>    
					void computeBoundingBox();   

					void recurAbort();
				public:
					void setDoubleClicked(ev_bool clicked)
					{
						mIsDoubleClicked = clicked;
					}
				protected:

					/// <summary>
					/// 描述信息
					/// </summary>
					EVString Description;
					/// <summary>
					/// 瓦片中心点距相机的距离
					/// </summary>
					float CameraDistance;
					/// <summary>
					/// 全景对象显示的距离
					/// </summary>
					float ShowPanoramaDis;
					/// <summary>
					/// 全景地标显示的距离
					/// </summary>
					float ShowSpriteDis;

					EarthView::World::Graphic::CSceneManager* mpSceneMgr;
					EarthView::World::Spatial3D::CGlobeCamera* mpGlobeCamera;
					EarthView::World::Spatial::Math::CVector3 mPosition;
					double m_latitude;
					double m_longitude;
					double m_altitude;
					float m_radius;
					float m_heading;
					int m_level;  
					EVString m_imageFilePath;
					EVString m_iconFilePath;
					EVString m_uri;
					EVString m_name;
					EVString m_pathKey;
					EVString m_spriteTexture;
					float m_spriteScaling;
					map<EVString, CPanoramaTile*> m_children;

					mutable EarthView::World::Core::CRecursiveMutex mLock;

					bool m_isCenter;
					bool m_isUpdating;
					bool m_isDisposing;
					ev_uint32 m_meshPointCount;

					bool m_isInitialized;

					bool mIsDoubleClicked;
					ev_uint32 mMoveTime;

                    bool mIsPanoramaTileVisible;				

					/// <summary>
					/// 最小纬度
					/// </summary>
					double m_south;
					/// <summary>
					/// 最大纬度
					/// </summary>
					double m_north;
					/// <summary>
					/// 最小经度
					/// </summary>
					double m_west;
					/// <summary>
					/// 最大经度
					/// </summary>
					double m_east;

					int mLastMousePostionX;
					int mLastMousePostionY;

					EarthView::World::Spatial::Math::CVector3 mUp;

					ev_int32 mLastStepZoomTickCount;

					EarthView::World::Geometry3D::CMultiPoint3DExtension* mBBS;

					CPanoramaTileInternal* mInternal;

					friend class CPanoramaTileEx;
				};
			}
		}
	}
}
#endif