#ifndef  EV_PLACEMARKEDITTOOL_H
#define  EV_PLACEMARKEDITTOOL_H
#include "spatial3dengine/spatial3dengineconfig.h"
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
#include "symbol/billboard3dsymbol.h"
#include "spatialobject/coordinatesystem/spatialreference.h"
#include "kmlserializer/geoobjectextension.h"




namespace EarthView
{
	namespace World
	{
        namespace Spatial
		{
			namespace Kml
			{
				class CGeoObjectExtension;
			}
		}
		namespace Spatial3D
		{
			namespace KmlManager
			{
				class EV_Spatial3DEngine_DLL CPlacemarkEditTool:public EarthView::World::Spatial::SystemUI::ITool
				{
ev_private: 
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CPlacemarkEditTool(EarthView::World::Core::CNameValuePairList* pList);

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="sceneMgr">场景管理器</param>
					/// <param name="camera">相机</param>
					/// <param name="geoObj">地理对象</param>
					/// <param name="parent">kml文档</param>
					/// <returns></returns>
					CPlacemarkEditTool(EarthView::World::Graphic::CSceneManager* ref_sceneMgr,EarthView::World::Graphic::CCamera* ref_camera,EarthView::World::Graphic::CViewport* ref_viewPort,EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj,EarthView::World::Spatial::Kml::CKmlDocument* ref_parent);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CPlacemarkEditTool();

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
					virtual ev_void deactivate();
					/// <summary>
					/// 获取地理对象
					/// </summary>
					/// <returns>返回地理对象</returns>
					EarthView::World::Spatial::Kml::CGeoObjectExtension* getGeoObject();
					/// <summary>
					/// 获取地理对象的kmldoc
					/// </summary>
					/// <returns>返回kmldoc文档</returns>
					EarthView::World::Spatial::Kml::CKmlDocument* getGeoObjectParent();
					EarthView::World::Graphic::CCamera* mCamera;
					EVString mFilePath;
					ev_bool mIsNeedRefresh;
					ev_bool mIsExtrude;
					EarthView::World::Spatial::Display::ISymbol* mSymbol;
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
					/// 获取地标的坐标
					/// </summary>
					/// <returns>返回坐标</returns>
					EarthView::World::Spatial::Math::CVector3 getPoint();
					/// <summary>
					/// 设置坐标
					/// </summary>
					/// <param name="vec">坐标值</param>
					/// <returns></returns>
					ev_void setPoint(EarthView::World::Spatial::Math::CVector3 vec);
					/// <summary>
					/// 设置空间参照
					/// </summary>
					/// <param name="sr">空间参照</param>
					/// <returns></returns>
					ev_void setSpatialRefernce(EarthView::World::Spatial::Utility::CSpatialReference* ref_sr);
					/// <summary>
					/// 设置EarthView::World::Spatial::Kml::CGeoObjectExtension属性
					/// </summary>
					/// <param name="att">EarthView::World::Spatial::Kml::CGeoObjectExtension属性</param>
					/// <returns></returns>
					ev_void setGeoObjectExtensionAttribute(EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute att);

					ev_void renderEditFrame();
					ev_void _notify(ev_bool isRefershView);
				protected:
					int mLastX;
					int mLastY;
					ev_bool mIsDraging;
					int mDragingIndex;
					ev_bool mIsMouseDown;
					EVString mName;
					ev_bool mIsVisible;
				private:
					EarthView::World::Spatial::Kml::CGeoObjectExtension* mpGeoObj;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute m_geoAttribute;
					EarthView::World::Graphic::CViewport* m_viewPort;
					ev_void disposePoint(EarthView::World::Geometry3D::CMultiPoint3DExtension* pointExt,ev_bool isCloneGeometry,ev_bool isCloneSymbol);
					vector<EarthView::World::Spatial3D::KmlManager::IKmlObserver*> mObserverList;
					EarthView::World::Geometry3D::CMultiPoint3DExtension* mEditFrame;
					EarthView::World::Geometry3D::CMovablePolyline2* mEditLine;
					
					ev_void renderEditLine();
					
					EarthView::World::Spatial::Kml::CKmlDocument* mParent;
					EarthView::World::Graphic::CMaterialPtr mMaterial;
					EarthView::World::Graphic::CManualObject* mPoint;
					EarthView::World::Geometry3D::CMovablePolyline2* line2;
					EarthView::World::Graphic::CSceneNode* mNode;
					EarthView::World::Spatial::Math::CVector3 mVert;
					EarthView::World::Spatial::Display::CBillboard3DSymbol *mEditSymbol;
					EarthView::World::Spatial::Utility::CSpatialReference* mEditSR;
					EarthView::World::Spatial3D::KmlManager::CPositionColor mEditVert;
					ev_bool mIsSelected;
					EarthView::World::Spatial::Utility::EVAltitudeMode mAltitudeMode;
					double mAltitude;
					//CKmlFeatureEditToolManager* mManager;

					EarthView::World::Graphic::CSceneManager* mSceneMgr;
					ev_bool contains(const EarthView::World::Spatial::Math::CVector3& vP,int x,int y);
					ev_bool pickingRayIntersection(_in int screenX,_in int screenY,_inout double& latitude,_inout double& longitude,_inout double& alt,_in ev_bool interestModel/*=false*/);
					EarthView::World::Spatial::Math::CRay screenToScene(_in int x,_in int y);
					//计算方法
					EarthView::World::Spatial::Math::CVector3 convertToScreenPoint(const EarthView::World::Spatial::Math::CVector3& vec);
					//
					ev_void changeVertexColor(const EarthView::World::Graphic::CColourValue& vertexColor);

					EarthView::World::Spatial3D::KmlManager::CPositionColor convertToWorldVertex(const EarthView::World::Spatial::Math::CVector3& point3d, const EarthView::World::Graphic::CColourValue& vertexColor);
					EarthView::World::Spatial::Math::CVector3 convertToWorldPosition(const EarthView::World::Spatial::Math::CVector3& point3d);
					ev_void performMouseMove(int mouseX, int mouseY);
					ev_void replacePoint(const EarthView::World::Spatial::Math::CVector3& point3d);
				};
			}
		}
	}
}

#endif
