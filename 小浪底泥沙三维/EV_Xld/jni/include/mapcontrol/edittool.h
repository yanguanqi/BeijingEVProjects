#ifndef EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_EDITTOOL_H
#define EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_EDITTOOL_H

#include "mapcontrol/mapcontrolconfig.h"
#include "mapcontrol/tool2d.h"
#include "spatialobject/geometry/point.h"
const ev_real64 EDIT_PRECISION = 0.000001;
using namespace EarthView::World::Spatial::Geometry;
namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Controls{
class CDataEditor;
class CTrackingGeometryItem;
class EV_MAPCONTROL_DLL CEditTool : public CTool2D
{
public:

	/// <summary>
	/// 默认析构函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	~CEditTool( );

public:

	/// <summary>
	/// 创建编辑工具
	/// </summary>
	/// <param name="ctrl">空间控制对象</param>
	/// <returns></returns>
	/// <memo></memo>
	ev_void create( _in EarthView::World::Spatial::Atlas::ISpatialControl *ref_ctrl );

	/// <summary>
	/// 激活任务
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void activate();

	/// <summary>
	/// 取消任务的激活状态
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
    ev_void deactivate();

	/// <summary>
	/// 点击鼠标右键菜单 
	/// </summary>
	/// <param name="x">鼠标右键的x坐标</param>
	/// <param name="y">鼠标右键的y坐标</param>
	/// <returns>如果鼠标右键按下，返回true,如果没有按下，返回false</returns>
	ev_bool onContextMenu(ev_int32 x,ev_int32 y);

	/// <summary>
	/// 鼠标左键按下 
	/// </summary>
	/// <param name="button">左键判定</param>
	/// <param name="shift">shift键判定</param>
	/// <param name="x">鼠标左键按下时的x坐标</param>
	/// <param name="y">鼠标左键按下时的y坐标</param>
	/// <returns>如果鼠标左键按下，返回true,如果没有按下，返回false</returns>
	ev_bool onMouseDown(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);

	/// <summary>
	/// 鼠标移动 
	/// </summary>
	/// <param name="button">左键判定</param>
	/// <param name="shift">shift键判定</param>
	/// <param name="x">鼠标移动时的x坐标</param>
	/// <param name="y">鼠标移动时的y坐标</param>
	/// <returns>如果鼠标移动，返回true,如果没有移动，返回false</returns>
    ev_bool onMouseMove(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);

	/// <summary>
	/// 鼠标抬起 
	/// </summary>
	/// <param name="button">左键判定</param>
	/// <param name="shift">shift键判定</param>
	/// <param name="x">鼠标抬起时的x坐标</param>
	/// <param name="y">鼠标抬起时的y坐标</param>
	/// <returns>如果鼠标抬起，返回true,如果没有抬起，返回false</returns>
    ev_bool onMouseUp(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);

	/// <summary>
	/// 操作更新
	/// </summary>
	/// <param name="e">操作事件</param>
	/// <returns>如果有操作更新，返回true,如果没有，返回false</returns>
	ev_bool update( _in EarthView::World::Core::CEvent* e );
	/// <summary>
	/// 清空临时几何对象的痕迹
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void clearTrace();

	/// <summary>
	/// 设置跟踪层颜色
	/// </summary>
	/// <param name="pColor">跟踪层颜色</param>
	/// <returns></returns>
	ev_void setColor(EarthView::World::Spatial::Display::IColor *pColor);

	/// <summary>
	/// 获取跟踪层颜色
	/// </summary>
	/// <param name="pColor"></param>
	/// <returns>跟踪层颜色</returns>
	EarthView::World::Spatial::Display::IColor* getColor();
protected:
	ev_void init();
	CDataEditor *mpDataEditor;
	CPoint mMagicPoint;
	CTrackingGeometryItem *mpElem;
	EarthView::World::Spatial::Display::IColor *m_pTrackingColor;
ev_private:
	/// <summary>
	/// 构造函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	CEditTool( EarthView::World::Core::CNameValuePairList *pList );
protected:

	/// <summary>
	/// 默认构造函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	CEditTool();
					
};

class EV_MAPCONTROL_DLL CNewGeometryTool : public CEditTool
{
public:

	/// <summary>
	/// 默认析构函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	~CNewGeometryTool();

public:

	/// <summary>
	/// 获取工具栏类型
	/// </summary>
	/// <param name=""></param>
	/// <returns>工具栏类型</returns>
	ev_uint32 getToolBarType() const;

	/// <summary>
	/// 操作更新
	/// </summary>
	/// <param name="e">操作事件</param>
	/// <returns></returns>
	ev_bool update( _in EarthView::World::Core::CEvent* e );
	/// <summary>
	/// 鼠标双击
	/// </summary>
	/// <param name=""></param>
	/// <returns>如果鼠标双击，返回true,如果没有双击，返回false</returns>
	ev_bool onDoubleClick();
ev_private:

	/// <summary>
	/// 构造函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	CNewGeometryTool( EarthView::World::Core::CNameValuePairList *pList );

protected:

	/// <summary>
	/// 默认构造函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	CNewGeometryTool();
};

class EV_MAPCONTROL_DLL CNewNonPointTypeTool : public CNewGeometryTool
{
public:

	/// <summary>
	/// 默认析构函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	~CNewNonPointTypeTool();
public:

	/// <summary>
	/// 操作更新
	/// </summary>
	/// <param name="e">操作事件</param>
	/// <returns></returns>
	ev_bool update( _in EarthView::World::Core::CEvent* e );

ev_private:
	/// <summary>
	/// 构造函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	CNewNonPointTypeTool( EarthView::World::Core::CNameValuePairList* list );
protected:
	/// <summary>
	/// 默认构造函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	CNewNonPointTypeTool();
	C_DISABLE_COPY( CNewNonPointTypeTool )
};

class EV_MAPCONTROL_DLL CNewCurveTypeTool : public CNewGeometryTool
{
public:

	/// <summary>
	/// 默认析构函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	~CNewCurveTypeTool();
public:

	/// <summary>
	/// 操作更新
	/// </summary>
	/// <param name="e">操作事件</param>
	/// <returns></returns>
	ev_bool update( _in EarthView::World::Core::CEvent* e );

ev_private:
	/// <summary>
	/// 构造函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	CNewCurveTypeTool( EarthView::World::Core::CNameValuePairList* list );
protected:
	/// <summary>
	/// 默认构造函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	CNewCurveTypeTool();
	C_DISABLE_COPY( CNewCurveTypeTool )
};
			}
		}
	}
}
#endif
