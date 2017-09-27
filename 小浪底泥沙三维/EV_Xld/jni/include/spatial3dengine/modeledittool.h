#ifndef KMLMODELEITTOOL_H
#define KMLMODELEITTOOL_H

#include "spatial3dengine/spatial3dengineconfig.h"
#include "spatialgui/itool.h"
#include "kmlserializer/geoobjectextension.h"
#include "mathengine/matrix4.h"
#include "graphic/editboundingbox.h"
#include "graphic/movableobject.h"
#include "graphic/scenemanager.h"
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
				class CKmlModel;
				class EV_Spatial3DEngine_DLL CModelEditTool : public EarthView::World::Spatial::SystemUI::ITool
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
					CModelEditTool(EarthView::World::Core::CNameValuePairList* pList);

				public:

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="sceneMgr">场景管理器</param>
					/// <param name="camera">相机</param>
					/// <param name="geoObj">地理对象</param>
					/// <param name="parent">kml文档</param>
					/// <returns></returns>
					CModelEditTool(EarthView::World::Graphic::CSceneManager* ref_sceneMgr, EarthView::World::Graphic::CCamera* ref_camera, EarthView::World::Graphic::CViewport* ref_viewPort, EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, EarthView::World::Spatial::Kml::CKmlDocument* ref_parent);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CModelEditTool();

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
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute& getGeoObjectAttribute()const;
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
					ev_void setGeoObjectExtensionAttribute(EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute att);
					ev_void _notify(ev_bool isRefershView);

					/// <summary>
					/// 刷新
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>           
					ev_void updateModel();
					ev_bool startEdit();
					ev_bool endEdit();
					// 模型只更新模型的位置、旋转、缩放， 记得需要同步更新
					ev_void refreshEditingObj();
					ev_void setEditingObj(CKmlModel* pKmlModel);
					ev_void addEditingObjListener(EarthView::World::Graphic::CMovableObject::CMovableObjectListener* pListener);
					ev_void removeEditingObjListener(EarthView::World::Graphic::CMovableObject::CMovableObjectListener* pListener);
					EarthView::World::Graphic::CCamera* mCamera;
					EVString mFilePath;
					ev_bool mIsNeedRefresh;
					EarthView::World::Spatial::Display::ISymbol* mSymbol;
					EarthView::World::Spatial::Math::CVector3 mVert;
				protected:
					ev_void updateSelectedObjectTo(ev_int32 key,ev_int32 x,ev_int32 y,KmlMouseOpType type);
					ev_void updateExtensionPos(EarthView::World::Graphic::CMovableObject* pObj);
					EarthView::World::Spatial::Math::CVector3 inverseProject(const EarthView::World::Spatial::Math::CVector3& position);
					ev_bool isEditing()const;

					ev_bool mDraging;
					ev_bool mDoubleClicked;
					ev_int32 mDownX;
					ev_int32 mDownY;
					EarthView::World::Core::CCoreTime mDownTime;
					//EarthView::World::Graphic::CMovableObject* mMovable;
					CKmlModel* mpKmlModel; 
					EarthView::World::Spatial::Math::CMatrix4 mDownMatrix;
					EarthView::World::Graphic::CEditBoundingBox::TrackingType mTrackingType;					
				private:
					EarthView::World::Spatial::Kml::CGeoObjectExtension* mpGeoObj;
					EarthView::World::Graphic::CViewport* mViewPort;
					EarthView::World::Spatial::Kml::CKmlDocument* mParent;
					EarthView::World::Graphic::CSceneManager* mSceneMgr;
					vector<EarthView::World::Spatial3D::KmlManager::IKmlObserver*> mObserverList;
				};
			}
		}
	}
}
#endif