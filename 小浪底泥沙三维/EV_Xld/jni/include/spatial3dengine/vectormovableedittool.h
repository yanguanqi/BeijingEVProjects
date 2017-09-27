#ifndef _KML_VECTOR_MOVABLE_EDITOR_TOOL_H_
#define _KML_VECTOR_MOVABLE_EDITOR_TOOL_H_

#include "spatial3dengine/spatial3dengineconfig.h"
#include "spatialgui/itool.h"
#include "kmlserializer/geoobjectextension.h"
#include "mathengine/matrix4.h"
#include "graphic/editboundingbox.h"
#include "graphic/movableobject.h"
#include "graphic/scenemanager.h"
#include <graphic/material.h>
#include "geometry3d/geometry3d/geometry3dex.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
				class ISymbol;
			}
			namespace Kml{
				class CKmlDocument;
			}}
		namespace Graphic{
			class CCamera;
			class CViewport;
			class CSceneManager;
			class CMovableObject;
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
				class IKmlObserver;
				class CKmlVectorMovable;
				class EV_Spatial3DEngine_DLL CVectorMovableEditTool : public EarthView::World::Spatial::SystemUI::ITool
				{
					enum KmlMouseOpType
					{
						KMOT_MouseDown,
						KMOT_MouseMove,
						KMOT_MouseUp
					};
ev_private: 
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CVectorMovableEditTool(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="sceneMgr">场景管理器</param>
					/// <param name="camera">相机</param>
					/// <param name="geoObj">地理对象</param>
					/// <param name="parent">kml文档</param>
					/// <returns></returns>
					CVectorMovableEditTool(EarthView::World::Graphic::CSceneManager* ref_sceneMgr, EarthView::World::Graphic::CCamera* ref_camera, EarthView::World::Graphic::CViewport* ref_viewPort, EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, EarthView::World::Spatial::Kml::CKmlDocument* ref_parent);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CVectorMovableEditTool();
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
					/// 鼠标弹起事件触发
					/// </summary>
					/// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
					/// <param name="shift">shift键是否同时被释放</param>
					/// <param name="x">光标位置x</param>
					/// <param name="y">光标位置y</param>
					/// <returns>是否继续向父控件发送该事件</returns>
					virtual ev_bool onMouseUp(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);
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
					/// 工具deactivate
					/// </summary>
					/// <returns></returns>
					virtual ev_void deactivate();
					/// <summary>
					/// 获取编辑工具的类型
					/// </summary>
					/// <returns>返回编辑工具的类型</returns>
					virtual ev_uint32 getType() const;
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
					/// 设置EarthView::World::Spatial::Kml::CGeoObjectExtension属性
					/// </summary>
					/// <param name="att">EarthView::World::Spatial::Kml::CGeoObjectExtension属性</param>
					/// <returns></returns>
					ev_void setGeoObjectExtension(EarthView::World::Spatial::Kml::CGeoObjectExtension* pObj, ev_bool refreshPos, ev_bool build);
					/// <summary>
					/// 发送消息，观察对象处理
					/// </summary>
					/// <param name="observer">监听者</param>
					/// <returns></returns>
					ev_void _notify(ev_bool isRefershView);
					/// <summary>
					/// 更新对象
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>           
					ev_void updateVectorMovable();
					/// <summary>
					/// 开始编辑
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>           
					ev_bool startEdit();
					/// <summary>
					/// 结束编辑
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>           
					ev_bool endEdit();
					/// <summary>
					/// 只更新位置、旋转、缩放， 记得需要同步更新
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>                           
					ev_void refreshEditingObj();
					/// <summary>
					/// 设置编辑对象
					/// </summary>
					/// <param name="pKmlModel">编辑对象</param>
					/// <returns></returns>                           
					ev_void setEditingObj(EarthView::World::Geometry3D::CGeometry3DEx* pKmlVectorMovable );
				protected:
					ev_void updateSelectedObjectTo(ev_int32 key,ev_int32 x,ev_int32 y,KmlMouseOpType type);
					// 通过鼠标编辑的时候，如果是贴地需要调用
					ev_void updataExtensionPos( EarthView::World::Graphic::CMovableObject* pMovableObject);
					EarthView::World::Spatial::Math::CVector3 inverseProject(const EarthView::World::Spatial::Math::CVector3& position);
					ev_bool isEditing()const;

				protected:
					EarthView::World::Graphic::CSceneManager* mSceneMgr;
					EarthView::World::Graphic::CCamera* mCamera;
					EarthView::World::Graphic::CViewport* mViewPort;
					EarthView::World::Spatial::Kml::CGeoObjectExtension* mpGeoobjectExtension;
					EarthView::World::Spatial::Kml::CKmlDocument* mParent;

					EarthView::World::Geometry3D::CGeometry3DEx* mpKmlVectorMovable; 
					ev_bool mDoubleClicked;
					ev_bool mDraging;
					ev_int32 mDownX;
					ev_int32 mDownY;
					EarthView::World::Core::CCoreTime mDownTime;
					EarthView::World::Spatial::Math::CMatrix4 mDownMatrix;
					EarthView::World::Graphic::CEditBoundingBox::TrackingType mTrackingType;					
				private:
					vector<EarthView::World::Spatial3D::KmlManager::IKmlObserver*> mObserverList;
				};
			}
		}
	}
}
#endif