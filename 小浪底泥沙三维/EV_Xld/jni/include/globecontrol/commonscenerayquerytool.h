#ifndef COMMONSCENERAYQUERYTOOL_H
#define COMMONSCENERAYQUERYTOOL_H

#include "globecontrol/evglobecontrol_config.h"
#include "commonscenequerylistener.h"
#include "spatialgui/itool.h"
#include "graphic/movableobject.h"
#include "graphic/editboundingbox.h"
#include "graphic/selector.h"
#include "spatial3dengine/commonscenecamera.h"


namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Controls
			{
				class CCommonSceneControl;
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
			namespace SystemUI
			{
				/// <summary>
				/// 通用场景射线查询工具类
				/// </summary>
				class EV_GLOBECONTROL_DLL CCommonSceneRayQueryTool : public EarthView::World::Spatial::SystemUI::ITool
				{
				protected:
					/// <summary>
					/// 选择监听类
					/// </summary>
					class CSelectionListener : public EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener
					{
					public:
						/// <summary>
						/// 构造函数
						/// </summary>
						/// <param name="parent">通用场景射线查询工具</param>
						/// <returns></returns>	
						CSelectionListener(CCommonSceneRayQueryTool* parent) : mParent(parent)
						{
						}
						/// <summary>
						/// 析构函数
						/// </summary>
						/// <param name=""></param>
						/// <returns></returns>	
						~CSelectionListener(){};
					public:
						/// <summary>
						/// 选择处理
						/// </summary>
						/// <param name="globeControl">场景控件</param>
						/// <param name="result">选择集</param>
						/// <returns></returns>	
						virtual void onSelectionChanged(EarthView::World::Spatial3D::Controls::CCommonSceneControl* globeControl,CGlobeSelection& result);
					protected:
						CCommonSceneRayQueryTool* mParent;
					};

					/// <summary>
					/// 对象监听类
					/// 主要在对象销毁之前做一些操作
					/// </summary>
					class CObjectListener : public EarthView::World::Graphic::CMovableObject::CMovableObjectListener
					{
					public:
						/// <summary>
						/// 构造函数
						/// </summary>
						/// <param name="parent">通用场景射线查询工具</param>
						/// <returns></returns>	
						CObjectListener(CCommonSceneRayQueryTool* parent)
							: mParent(parent)
						{
						}
						/// <summary>
						/// 析构函数
						/// </summary>
						/// <param name=""></param>
						/// <returns></returns>	
						~CObjectListener(){};
					public:
						/// <summary>
						/// 对象销毁前的处理
						/// </summary>
						/// <param name="pMovableObject">销毁前要进行处理的对象</param>
						/// <returns></returns>	
						virtual void objectDestroyed(EarthView::World::Graphic::CMovableObject *pMovableObject);
					protected:
						CCommonSceneRayQueryTool* mParent;
					};

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_ctrl">抽象三维场景控件</param>
					/// <returns></returns>	
					CCommonSceneRayQueryTool(EarthView::World::Spatial3D::Controls::CCommonSceneControl* ref_ctrl);

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					virtual ~CCommonSceneRayQueryTool();

				ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>	
					CCommonSceneRayQueryTool(EarthView::World::Core::CNameValuePairList* pList);

				public:		
					/// <summary>
					/// 单击处理
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					virtual ev_void onClicked();

					/// <summary>
					/// 查看抽象三维场景控件是否使用当前工具类
					/// </summary>
					/// <param name=""></param>
					/// <returns>是返回true,否返回false</returns>	
					virtual ev_bool getChecked() const;

					/// <summary>
					/// 查看抽象三维场景控件是否已设置好场景
					/// </summary>
					/// <param name=""></param>
					/// <returns>有返回true,没有返回false</returns>	
					virtual ev_bool getEnabled() const;					

					/// <summary>
					/// 设置是否按照到相机的距离排序
					/// </summary>
					/// <param name="sort">是否排序</param>
					/// <returns></returns>	
					void setSortByDistance(ev_bool sort);

					/// <summary>
					/// 设置是否按照到相机的距离排序和结果集大小
					/// </summary>
					/// <param name="sort">是否排序</param>
					/// <param name="maxresults">结果集大小</param>
					/// <returns></returns>	
					void setSortByDistance(ev_bool sort, ev_uint16 maxresults);

					/// <summary>
					/// 查看是否按照到相机的距离排序
					/// </summary>
					/// <param name=""></param>
					/// <returns>是返回true,否返回false</returns>
					ev_bool getSortByDistance() const;

					/// <summary>
					/// 获得结果集大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>结果集大小</returns>	
					ev_uint16 getMaxResults() const;

					/// <summary>
					/// 初始化
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					void init();

					/// <summary>
					/// 重置结果集
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					void resetResults();

					/// <summary>
					/// 返回当前类类型标识
					/// </summary>
					/// <param name=""></param>
					/// <returns>类型标识</returns>	
					virtual ev_uint32 getType() const;

					/// <summary>
					/// 鼠标按下处理
					/// </summary>
					/// <param name="button">鼠标按钮标识</param>
					/// <param name="shift">shift标识</param>
					/// <param name="x">鼠标按下的点在x轴上的位置</param>
					/// <param name="y">鼠标按下的点在y轴上的位置</param>
					/// <returns>处理完毕返回false,射线不与包围盒相交返回true</returns>	
					virtual ev_bool onMouseDown(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);

					/// <summary>
					/// 鼠标双击处理
					/// </summary>
					/// <param name="button">鼠标按钮标识</param>
					/// <param name="shift">shift标识</param>
					/// <param name="x">鼠标按下的点在x轴上的位置</param>
					/// <param name="y">鼠标按下的点在y轴上的位置</param>
					/// <returns>处理完毕返回false,结束编辑返回true</returns>	
					virtual ev_bool onDoubleClick(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);

					/// <summary>
					/// 鼠标释放处理
					/// </summary>
					/// <param name="button">鼠标按钮标识</param>
					/// <param name="shift">shift标识</param>
					/// <param name="x">鼠标按下的点在x轴上的位置</param>
					/// <param name="y">鼠标按下的点在y轴上的位置</param>
					/// <returns>返回false</returns>	
					virtual ev_bool onMouseUp(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);

					/// <summary>
					/// 鼠标移动处理
					/// </summary>
					/// <param name="button">鼠标按钮标识</param>
					/// <param name="shift">shift标识</param>
					/// <param name="x">鼠标按下的点在x轴上的位置</param>
					/// <param name="y">鼠标按下的点在y轴上的位置</param>
					/// <returns>返回false</returns>	
					virtual ev_bool onMouseMove(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);

					/// <summary>
					/// 键盘按下处理
					/// </summary>
					/// <param name="keyCode">键位标识</param>
					/// <param name="shift">shift标识</param>
					/// <returns>按下的键是Delete键返回true,按下的键不是Delete键返回false</returns>	
					virtual ev_bool onKeyDown(ev_int32 keyCode,ev_int32 shift);

				protected:
					/// <summary>
					/// 将射线所经过的moveable中，选择最近的moveable赋给mPickingMovable
					/// </summary>
					/// <param name="ray">射线</param>
					/// <param name="shift">shift标识</param>
					/// <returns>相交的moveable已经为编辑状态返回true,不为编辑状态返回false</returns>	
					ev_bool pickEditableObjectFromResult(const EarthView::World::Spatial::Math::CRay& ray);

					/// <summary>
					/// 移动处理
					/// </summary>
					/// <param name="key">鼠标按钮标识</param>
					/// <param name="x">当前鼠标在x轴上的位置</param>
					/// <param name="y">当前鼠标在y轴上的位置</param>
					/// <param name="type">事件类型</param>
					/// <returns></returns>
					ev_void updateSelectedObjectTo(ev_int32 key,ev_int32 x,ev_int32 y,EarthView::World::Spatial::SystemUI::CGUIEvent::GUIEventType type);

					/// <summary>
					/// 反转处理
					/// </summary>
					/// <param name="position">坐标</param>
					/// <returns>反转后的坐标</returns>
					EarthView::World::Spatial::Math::CVector3 inverseProject(const EarthView::World::Spatial::Math::CVector3& position);

					/// <summary>
					/// 反转处理
					/// </summary>
					/// <param name="position">坐标</param>
					/// <param name="distance">距离</param>
					/// <returns>反转后的坐标</returns>
					EarthView::World::Spatial::Math::CVector3 inverseProject(const EarthView::World::Spatial::Math::CVector3& position,ev_real32 distance);

					/// <summary>
					/// 获得编辑状态
					/// </summary>
					/// <param name=""></param>
					/// <returns>在编辑状态返回true,不在返回false</returns>
					ev_bool isEditing()const;
				protected:
					EVString mControlName;
					EarthView::World::Spatial3D::Controls::CCommonSceneControl *mControl;
					EarthView::World::Graphic::CRaySelector *mSelector;
					ev_int32 mDownX;
					ev_int32 mDownY;
					EarthView::World::Spatial::Math::CMatrix4 mDownMatrix;
					EarthView::World::Core::CCoreTime mDownTime;
					ev_bool mDraging;
					ev_bool mDoubleClicked;
					EarthView::World::Graphic::CEditBoundingBox::TrackingType mTrackingType;					
					EarthView::World::Graphic::RaySceneQueryResultEntry *mPickingMovable;
					CSelectionListener *mpSelectionListener;
					CObjectListener *mpObjectListener;

					EV_AUTO_MUTEX;

				private:
					C_DISABLE_COPY( CCommonSceneRayQueryTool );
				};
			}
		}
	}
}


#endif


