#ifndef CCommonSceneControl_H_
#define CCommonSceneControl_H_

#include "globecontrol/evglobecontrol_config.h"
#include "globecontrol/guieventhandlers.h"
#include "globecontrol/3dcontrol.h"
#include "globecontrol/commonscenerayquerytool.h"
#include "globecontrol/commonscenequerylistener.h"
#include "ga/commonscenecameramanipulator.h"



namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Controls
			{
				class CToolHandler;
				/// <summary>
				/// 通用场景控制类
				/// </summary>
				class EV_GLOBECONTROL_DLL CCommonSceneControl:public EarthView::World::Spatial3D::Controls::C3DControl
				{
					typedef vector<EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener*> CommomSceneQueryListeners;
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="uintHwnd">窗口句柄</param>
					/// <param name="winWidth">窗口宽度</param>
					/// <param name="winHeight">窗口高度</param>
					/// <returns></returns>	
					CCommonSceneControl(_in ev_uint32 uintHwnd,_in ev_uint32 winWidth,_in ev_uint32 winHeight);

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="strHwnd">窗口句柄</param>
					/// <param name="winWidth">窗口宽度</param>
					/// <param name="winHeight">窗口高度</param>
					/// <returns></returns>	
					CCommonSceneControl(_in const EVString& strHwnd,_in ev_uint32 winWidth,_in ev_uint32 winHeight);

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="windowName">窗口名称</param>
					/// <param name="winWidth">窗口宽度</param>
					/// <param name="winHeight">窗口高度</param>
					/// <param name="isFullScreen">是否全屏</param>
					/// <returns></returns>	
					CCommonSceneControl(_in const EVString& windowName,_in ev_uint32 winWidth, _in ev_uint32 winHeight, ev_bool isFullScreen);
					
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					virtual ~CCommonSceneControl();

					/// <summary>
					/// 选择处理
					/// </summary>
					/// <param name="result">射线查询结果集</param>
					/// <returns></returns>	
					ev_void  fireSelectionChanged(_in EarthView::World::Graphic::RaySceneQueryResult& result);

					/// <summary>
					/// 选择处理
					/// </summary>
					/// <param name="result">场景查询结果集</param>
					/// <returns></returns>	
					ev_void  fireSelectionChanged(_in EarthView::World::Graphic::SceneQueryResult& result);

					/// <summary>
					/// 选择处理
					/// </summary>
					/// <param name="result">选择集</param>
					/// <returns></returns>	
					ev_void  fireSelectionChanged(_in EarthView::World::Spatial3D::CGlobeSelection& result);

					/// <summary>
					/// 移动处理
					/// </summary>
					/// <param name="entry">射线查询结果集记录</param>
					/// <param name="newMatrix">世界变换矩阵</param>
					/// <param name="type">时间类型标识</param>
					/// <returns></returns>	
					ev_void  fireSelectedObjectMoved(_in EarthView::World::Graphic::RaySceneQueryResultEntry& entry,_in const EarthView::World::Spatial::Math::CMatrix4& newMatrix,_in EarthView::World::Spatial::SystemUI::CGUIEvent::GUIEventType type);
					
					/// <summary>
					/// 按下Delete键处理
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					ev_void  fireDeleteKeyPressed();

					/// <summary>
					/// 设置当前要使用的工具
					/// </summary>
					/// <param name="tool">工具对象</param>
					/// <returns>返回true</returns>	
					ev_bool setCurrentTool(_in EarthView::World::Spatial::SystemUI::ITool* ref_tool);

					/// <summary>
					/// 获得当前使用的工具对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>工具对象</returns>	
					const EarthView::World::Spatial::SystemUI::ITool* getCurrentTool();

					/// <summary>
					/// 获得通用场景查询Listener
					/// </summary>
					/// <param name="index">索引号</param>
					/// <returns>通用场景查询Listener</returns>	
					const EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener* getICommonSceneQueryListener(_in ev_uint32 index);

					/// <summary>
					/// 添加通用场景查询Listener
					/// </summary>
					/// <param name="listener">通用场景查询Listener</param>
					/// <returns>添加成功返回true,失败返回false</returns>	
					ev_bool addQueryListener(_in EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener* ref_listener);

					/// <summary>
					/// 删除通用场景查询Listener
					/// </summary>
					/// <param name="listener">通用场景查询Listener</param>
					/// <returns>删除成功返回true,失败返回false</returns>
					ev_bool removeQueryListener(_in EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener* listener);

					/// <summary>
					/// 初始化通用场景射线查询工具类
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void initCommonSceneRayQueryTool();
				
					/// <summary>
					/// 场景中默认的有向光方向与相机方向一致
					/// </summary>
					/// <param name="flag">是否一致</param>
					/// <returns></returns>
					void setLightCameraMode(ev_bool flag);

					/// <summary>
					/// 获取场景中默认的有向光方向是否与相机关联
					/// </summary>
					/// <returns>ev_bool;true，关联;false,不关联</returns>
					ev_bool isLightCameraModel();

					/// <summary>
					/// 还原场景中有向光默认朝向
					/// </summary>
					/// <returns></returns>
					void resetLightDirection();
				ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>	
					CCommonSceneControl(_in EarthView::World::Core::CNameValuePairList* pList);
				
				protected:
					/// <summary>
					/// 默认事件处理
					/// </summary>
					/// <param name="guiEvent">Gui事件</param>
					/// <returns>返回true</returns>
					virtual ev_bool eventHandlingDefault(_inout EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
					EarthView::World::Spatial3D::Controls::CToolHandler* mToolHandler;
					CCommonSceneCameraManipulator* mCameraManipulator;
					EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener* mCommonSceneQueryListener;
					EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool *mCommonSceneRayQueryTool;
					CommomSceneQueryListeners  mCommonSceneQueryListeners;			
					ev_bool bLightCameraMode;
				};
			}
		}
	}
}


#endif

