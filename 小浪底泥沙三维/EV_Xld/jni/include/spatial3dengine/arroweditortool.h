#ifndef _KML_ARROW_EDITOR_TOOL_H_
#define _KML_ARROW_EDITOR_TOOL_H_

#include "spatial3dengine/spatial3dengineconfig.h"
#include "spatialgui/itool.h"
#include "mathengine/ray.h"
#include "mathengine/vector2.h"
#include "graphic/colourvalue.h"
#include "graphic/material.h"
#include "core/variant.h"
namespace EarthView{
	namespace World{
		namespace Geometry3D{
			class CMultiPoint3DExtension;
		}
		namespace Spatial{
			namespace Math{
				class CVector3;
				class CVector2;
			}
			namespace Utility{
				class CSpatialReference;
			}
			namespace Display{
				class CBillboard3DSymbol;
			}
			namespace Kml{
				class CKmlDocument;
				class CGeoObjectExtension;
			}}
		namespace Graphic{
			class CCamera;
			class CViewport;
			class CSceneManager;
			class CMovableObject;
			class CManualObject;
			class CSceneNode;
			class CColourValue;
			class CMaterialPtr;
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			class CKmlArrowObjectEx;
		}
		namespace Spatial3D
		{
			namespace KmlManager
			{
				/// <summary>
				/// 箭头状态
				/// </summary>
				enum KmlArrowState
				{
					/// <summary>
					/// 创建中
					/// </summary>
					KAS_Creating,
					/// <summary>
					///　编辑中 
					/// </summary>
					KAS_Editing
				};
				class IKmlObserver;
				
				class CPositionColor;
				class EV_Spatial3DEngine_DLL CArrowEditorTool:public EarthView::World::Spatial::SystemUI::ITool
				{
ev_private: 
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CArrowEditorTool(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="sceneMgr">场景管理器</param>
					/// <param name="camera">相机</param>
					/// <param name="geoObj">地理对象</param>
					/// <param name="parent">kml文档</param>
					/// <returns></returns>
					CArrowEditorTool(EarthView::World::Graphic::CSceneManager* ref_sceneMgr,EarthView::World::Graphic::CCamera* ref_camera,EarthView::World::Graphic::CViewport* ref_viewPort,EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj,EarthView::World::Spatial::Kml::CKmlDocument* ref_parent);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CArrowEditorTool();
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
					virtual ev_bool onDoubleClick(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);			
					/// <summary>
					/// 获取编辑工具的类型
					/// </summary>
					/// <returns>返回编辑工具的类型</returns>
					virtual ev_uint32 getType() const;
					virtual ev_void deactivate();
					/// <summary>
					/// 设置编辑的对象
					/// </summary>
					/// <returns></returns>
					ev_void setEditorArrowObj(EarthView::World::Geometry3D::CKmlArrowObjectEx* pKmlArrowObj);
					/// <summary>
					/// 获取地理对象 需要外部释放
					/// </summary>
					/// <returns>返回地理对象</returns>
					EarthView::World::Spatial::Kml::CGeoObjectExtension* getGeoObject();
					/// <summary>
					/// 获取地理对象的kmldoc
					/// </summary>
					/// <returns>返回kmldoc文档</returns>
					EarthView::World::Spatial::Kml::CKmlDocument* getGeoObjectParent();
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
					/// 设置编辑的类型
					/// </summary>
					/// <param name="isRefreshLine">是否刷新线</param>
					/// <returns></returns>
					ev_void setKmlArrowState(KmlArrowState ArrowState);
					/// <summary>
					/// 获取标绘的状态
					/// </summary>
					/// <param name="isRefreshLine">是否刷新线</param>
					/// <returns></returns>
					KmlArrowState getKmlArrowState();
					/// <summary>
					/// 更新顶点缓冲区
					/// </summary>
					/// <param name="isRefreshLine">是否刷新线</param>
					/// <returns></returns>
					ev_void updateVertexBuffer(ev_bool isRefreshLine);
					/// <summary>
					/// 更新扩展对象的属性
					/// </summary>
					/// <param name="key">键</param>
					/// <param name="val">值</param>
					/// <returns></returns>
					ev_void updateGeoExProperty(EVString key, EarthView::World::Core::CVariant& val);
					/// <summary>
					/// 设置正在编辑的点坐标和索引
					/// </summary>
					/// <param name="index">索引</param>
					/// <param name="point">点坐标</param>
					/// <returns></returns>
					ev_void setEditorPointAndIndex(ev_int32 index, EarthView::World::Spatial::Math::CVector3 point);
					/// <summary>
					/// 获取正在编辑的点坐标和索引
					/// </summary>
					/// <param name="point">点坐标</param>
					/// <returns>索引</returns>
					ev_int32 getEditorPointIndex(EarthView::World::Spatial::Math::CVector3& point);
					ev_bool reLoad();
					ev_void updataEditKeyPoints();
					/// <summary>
					/// 渲染编辑的控制点
					/// </summary>
					/// <returns></returns>
					ev_void renderEditKeyPoints();
					ev_void deRender();
				protected:
					
					/// <summary>
					/// 鼠标点转换为射线
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial::Math::CRay screenToScene(_in int x,_in int y);
					/// <summary>
					/// 鼠标点射线求交
					/// </summary>
					/// <returns></returns>
					ev_bool pickingRayIntersection(_in int screenX,_in int screenY,_inout double& latitude,_inout double& longitude,_inout double& alt,_in ev_bool interestModel/*=false*/);
					//顶点操作
					ev_void insertPoint(int index, const EarthView::World::Spatial::Math::CVector3& point3d, ev_bool isRefresh);
					ev_void replacePoint(int index, const EarthView::World::Spatial::Math::CVector3& point3d, ev_bool isRefresh);
					ev_void removePoint(int index);
					/// <summary>
					/// 改变顶点的颜色
					/// </summary>
					/// <returns></returns>
					ev_void changeVertexColor(int index, const EarthView::World::Graphic::CColourValue& vertexColor);
					/// <summary>
					/// 转换为世界坐标
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial::Math::CVector3 convertToWorldPosition(const EarthView::World::Spatial::Math::CVector3& point3d);	        
					/// <summary>
					/// 转换为屏幕坐标
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial::Math::CVector3 convertToScreenPoint(const EarthView::World::Spatial::Math::CVector3& vec);
					/// <summary>
					// 处理鼠标移动
					/// </summary>
					/// <returns></returns>
					ev_void performMouseMove(int mouseX, int mouseY);
					/// <summary>
					// 是否包含指定的点
					/// </summary>
					/// <returns></returns>
					ev_bool contains(const EarthView::World::Spatial::Math::CVector3& vP,int x,int y);
					/// <summary>
					// 发送消息
					/// </summary>
					/// <returns></returns>
					ev_void _notify(ev_bool isRefershView);
					/// <summary>
					// 析构扩展
					/// </summary>
					/// <returns></returns>
					ev_void disposePoint(EarthView::World::Geometry3D::CMultiPoint3DExtension* pointExt,ev_bool bRelease);

					ev_void createArrowLine();
					EVString keyPointsToString();

				protected:
					EarthView::World::Graphic::CSceneManager* mpScenemanager;
					EarthView::World::Graphic::CCamera* mpCamera;
					EarthView::World::Graphic::CViewport* mpViewPort;
					EarthView::World::Spatial::Kml::CGeoObjectExtension* mpGeoObjectExtension;
					EarthView::World::Spatial::Kml::CKmlDocument* mpParent;
										
					EarthView::World::Graphic::CMaterialPtr mMaterial;
					EarthView::World::Graphic::CManualObject* mArrowLine;//箭头编辑线
					EarthView::World::Graphic::CSceneNode* mArrowLineNode;//箭头线节点

					// 编辑的渲染对象（即是一个点扩展）
					EarthView::World::Geometry3D::CMultiPoint3DExtension* mEditRedFrame;
					EarthView::World::Geometry3D::CMultiPoint3DExtension* mEditGreenFrame;
					EarthView::World::Geometry3D::CMultiPoint3DExtension* mEditBlueFrame;

					EarthView::World::Spatial::Display::CBillboard3DSymbol *mEditRedSymbol;
					EarthView::World::Spatial::Display::CBillboard3DSymbol *mEditGreenSymbol;
					EarthView::World::Spatial::Display::CBillboard3DSymbol *mEditBlueSymbol;

					EarthView::World::Spatial::Utility::CSpatialReference* mpEditSpatialRef;

					KmlArrowState mArrowState;

					ev_bool mIsDraging;
					ev_bool mIsSelected;
					ev_bool mIsDoubleClick;
					ev_bool notifyQT;// 标示顶点改变时需不需要通知界面
					ev_bool mIsReload;

					ev_int32 mMouseDown;					
					int mDragingIndex;
					int mSelectIndex;

					EVString mEditKeyPointMateralName;


					EarthView::World::Spatial::Math::CVector2 mDownPixel;// 鼠标按下的像素位置
					EarthView::World::Spatial::Math::CVector3 mMouseUpPosition;

					EarthView::World::Spatial::Math::CVector3 mEditingCenter;
					/// <summary>
					/// 编辑顶点的假设中心
					/// </summary>
					list<EarthView::World::Spatial3D::KmlManager::CPositionColor> mEditVerts;

					vector<EarthView::World::Spatial3D::KmlManager::IKmlObserver*> mObserverList;

					ev_int32 mEditPointIndex;
					EarthView::World::Spatial::Math::CVector3 mEditKeyPoint;
				};
			}
		}
	}
}
#endif