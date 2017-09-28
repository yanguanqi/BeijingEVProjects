#ifndef __ITOOL_H_
#define __ITOOL_H_

#include "core/stdheaders.h"
#include "core/ev_time.h"
#include "spatialgui/icommand.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace SystemUI
			{
				enum EVToolType
				{
					TT_None = 0,

					//////////  二维Tool从2000起  //////////
					//常规操作
					TT_ZoomIn				= 2000,
					TT_ZoomOut				= 2001,
					TT_ZoomFree				= 2002,
					TT_Pan					= 2003,
					TT_PointSelect			= 2004,
					TT_RectangleSelect		= 2005,
					TT_PolygonSelect		= 2006,
					TT_Measure				= 2007,
					CT_DefaultTool          = 2008,
					//编辑
					TT_SketchFeature		= 2050,
					TT_ModifyFeatures		= 2051,
					TT_MidPoint				= 2052,
					TT_RightAngle			= 2053,
					TT_RightAngleRestrain	= 2054,
					TT_ParallelRestrain		= 2055,
					TT_GeometryTracking		= 2056,
					TT_TangentCurve			= 2057,

					//添加几何要素
					TT_ThreePointsArc1		= 2100,
					TT_ThreePointsArc2		= 2101,
					TT_AngleArc				= 2102,
					TT_EllipticArc			= 2103,
					TT_BezierCurve			= 2104,
					TT_Parallel				= 2105,
					TT_ConcentricCircle		= 2106,
					TT_TwoPointsCircle		= 2107,
					TT_ThreePointsCircle	= 2108,
					TT_CircleChord			= 2109,
					TT_CircleSector			= 2110,
					TT_Ellipse				= 2111,
					TT_EllipticChord		= 2112,
					TT_EllipticSector		= 2113,
					TT_Rectangle			= 2114,
					TT_RoundRectangle		= 2115,
					TT_Parallelogram		= 2116,

					//修改操作
					TT_RotateFeatures		= 2150,
					TT_EditSelect		= 2151,

					//高级编辑
					TT_CopyFeature			= 2170,
					TT_CircularAngle		= 2171,
					TT_StretchLine			= 2172,
					TT_BreakLine			= 2173,
					TT_TrimLine				= 2174,
					TT_IntersectionLine		= 2175,
					TT_CombineParts			= 2176,
					TT_SplitParts		    = 2176,
					TT_LineSimplify			= 2177,
					TT_LineSmooth			= 2178,
					TT_ClipFeature			= 2179,
					TT_GeometryUnion		= 2180,
					TT_SplitObject			= 2181,
					TT_OffsetObject			= 2182,
					TT_Mirror				= 2183,
					TT_Recondition			= 2184,
					//网络分析
					TT_NetworkAnalysis			= 2200,//分析
					TT_NetworkAnalyst_Stop		= 2201,
					TT_NetworkAnalyst_Barriar   = 2202,
					TT_NetworkAnalyst_Adjust	= 2203,

					TT_Rectification        = 2300,///纠正工具,by jiang guowei

					///////////////////////////////////////////////////////////////////////
					TT_Unknown3D			= 3000, //三维Tool从3000起

					TT_RaySelect			= 3001, //射线选择
					TT_ComponentSelect		= 3002,	//组件选择
					TT_RectSelect3D			= 3003,	//矩形选择(3D)
					TT_TerrainQuery         = 3004, //地形选择
					TT_RegionQuery          = 3005, //区域选择
					TT_CurtainEdit			= 3006,	//卷帘范围编辑工具
					TT_StreetViewSelect     = 3007, //街景选择工具

					TT_CommonRaySelect		= 3099, //局部场景射线选择
					//三维分析
					TT_Visibibility         = 3150,
					TT_Section				= 3151,
					TT_Slope				= 3152,
					TT_Volume				= 3153,
					TT_RegionFlood			= 3154,
					TT_Skyline				=3155,

					//三维测量
					TT_Measure3DLength      = 3160,
					TT_Measure3DArea        = 3161,
					TT_Measure3DVertical    = 3162,
					TT_Measure3DPoint       = 3163,
					TT_Measure3DAzimuth     = 3164,

					//kml编辑
					TT_PlaceMarkEditor		= 3200,
					TT_LineStringEditor		= 3201,
					TT_PolygonEditor		= 3202,
					TT_ImageOverlayerEditor = 3203,
					TT_PolygonExEditor      = 3204,
					TT_ModelEditor          = 3205,
					TT_PhotoEditor          = 3206,
					TT_VectorMovableEditor  = 3207,
					TT_ArrowEditor          = 3208,
					TT_RegionLodEditor      = 3209,
					
					//三维图层编辑
					TT_LAYER3DEDITOR		= 3300,
					//布局
					//纸张浏览工具
					TT_PAGEPAN				= 4000,
					TT_PAGEZOOMIN			= 4001,
					TT_PAGEZOOMOUT			= 4002,
					TT_ELEMENTSELECTION		= 4003,

				};

				//手势事件坐标点
				class EV_SPATIALGUI_DLL MotionEventPoint : public EarthView::World::Core::CAllocatedObject
				{
				public:
					MotionEventPoint();
					MotionEventPoint(const MotionEventPoint& point);
					MotionEventPoint(ev_real64 x,ev_real64 y);
					virtual ~MotionEventPoint();
ev_private:
					MotionEventPoint(EarthView::World::Core::CNameValuePairList* pList);
				public:
					ev_real64 getX() const;
					ev_real64 getY() const;
					ev_void setX(ev_real64 value);
					ev_void setY(ev_real64 value);
					ev_void setPoint(ev_real64 x,ev_real64 y);
				private:
					ev_real64 mX;
					ev_real64 mY;
				};

				//手势事件
				class EV_SPATIALGUI_DLL MotionEvent : public EarthView::World::Core::CAllocatedObject
				{
				public:
					enum MotionEventType
					{
						MET_Down,		//按下
						MET_Up,			//释放
						MET_Move		//移动
					};
					MotionEvent();
					~MotionEvent();
ev_private:
					MotionEvent(EarthView::World::Core::CNameValuePairList* pList);

				public:
					/// <summary>
					/// 设置手势事件产生的时间
					/// </summary>
					/// <param name="y">年</param>
					/// <param name="mon">月</param>
					/// <param name="d">日</param>
					/// <param name="h">时</param>
					/// <param name="m">分</param>
					/// <param name="s">秒</param>
					/// <param name="ms">毫秒</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void setEventTime(EarthView::World::Core::CCoreTime& time);

					/// <summary>
					/// 获取手势事件产生的时间
					/// </summary>
					/// <param name="type">事件类型</param>
					/// <returns></returns>
					/// <memo></memo>
					EarthView::World::Core::CCoreTime getEventTime() const;

					/// <summary>
					/// 设置手势事件类型，该类型通过操作系统手势事件传递
					/// </summary>
					/// <param name="type">事件类型</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void setEventType(EarthView::World::Spatial::SystemUI::MotionEvent::MotionEventType type);

					/// <summary>
					/// 返回手势事件类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>手势事件类型</returns>
					/// <memo></memo>
					EarthView::World::Spatial::SystemUI::MotionEvent::MotionEventType getEventType() const;

					/// <summary>
					/// 添加手势接触点
					/// </summary>
					/// <param name="x">接触点x坐标</param>
					/// <param name="y">接触点y坐标</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_bool addTouchPoint(ev_real64 x, ev_real64 y);

					/// <summary>
					/// 清除所有手势接触点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void clearTouchPoint();

					/// <summary>
					/// 返回手势事件接触点数量
					/// </summary>
					/// <param name=""></param>
					/// <returns>接触点数量</returns>
					/// <memo></memo>
					ev_real64 pointerCount() const;

					/// <summary>
					/// 获取指定编号接触点的x坐标值
					/// </summary>
					/// <param name="index">接触点编号</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_real64 getX(ev_int16 index = 1)  const;

					/// <summary>
					/// 获取指定编号接触点的y坐标值
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					ev_real64 getY(ev_int16 index = 1) const ;

				protected:
				private:
					static const ev_int32 MaxPointCount;			//多点触摸最大触摸点数量
					ev_vector<EarthView::World::Spatial::SystemUI::MotionEventPoint> mPoints;											//手势事件触摸点序列
					EarthView::World::Core::CCoreTime mEventTime;										//手势事件事件
					EarthView::World::Spatial::SystemUI::MotionEvent::MotionEventType mType;								//手势事件类型
				};


				class EV_SPATIALGUI_DLL ITool:
					public EarthView::World::Spatial::SystemUI::ICommand
				{
				public:
					virtual ~ITool();

				public:
					/// <summary>
					/// 获取工具所属的工具栏类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>工具栏类型</returns>
					virtual ev_uint32 getToolBarType() const;
					/// <summary>
					/// 获取工具的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>类型</returns>
					virtual ev_uint32 getType() const;
					/// <summary>
					/// 获取工具的名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>名称</returns>
					virtual EVString getName() const;
					/// <summary>
					/// 获取工具所属类别
					/// </summary>
					/// <param name=""></param>
					/// <returns>类别</returns>
					virtual EVString getCategory() const;
					/// <summary>
					/// 工具提示
					/// </summary>
					/// <param name=""></param>
					/// <returns>提示信息</returns>
					virtual EVString getToolTip() const;
					/// <summary>
					/// 工具的显示图标
					/// </summary>
					/// <param name=""></param>
					/// <returns>图标</returns>
					virtual EarthView::World::Display::IBitmap * getIcon() const;
					/// <summary>
					/// 判断工具是否支持"按下"状态
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果支持"按下"则返回true,反之则否</returns>
					virtual ev_bool isCheckable() const;
					/// <summary>
					/// 当工具按钮被点击的时候,调用该方法
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void onClicked();
					/// <summary>
					/// 获取工具是否被按下
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果命令项被按下了则返回true,反之则否</returns>
					virtual ev_bool getChecked() const;
					/// <summary>
					/// 获取工具是否可用
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果命令项可用则返回true,反之则否</returns>
					virtual ev_void setChecked( _in ev_bool checked );
					/// <summary>
					/// 获取工具是否可用
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果命令项可用则返回true,反之则否</returns>
					virtual ev_bool getEnabled() const;
					/// <summary>
					/// 设置工具是否可用
					/// </summary>
					/// <param name="enabled">如果为true,则设置该命令项可用,反之则否</param>
					/// <returns></returns>
					virtual ev_void setEnabled( _in ev_bool enabled );
					/// <summary>
					/// 使工具与指定的控件相关联
					/// </summary>
					/// <param name="ctrl">待关联的控件</param>
					/// <returns></returns>
					virtual ev_void create( _in EarthView::World::Spatial::Atlas::ISpatialControl *ref_ctrl );
					/// <summary>
					/// 当有事件被触发时,会调用该方法
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns>如果状态发生变化则返回true,反之则否</returns>
					virtual ev_bool update( _in EarthView::World::Core::CEvent* e );

				public:
					/// <summary>
					/// 启用Tool
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void activate();

					/// <summary>
					/// 不使用Tool
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void deactivate();

					/// <summary>
					/// 获取光标样式
					/// </summary>
					/// <param name=""></param>
					/// <returns>光标样式枚举</returns>
					virtual ev_int32 getCursor();

					/// <summary>
					/// 右键菜单事件触发
					/// </summary>
					/// <param name="x">光标位置x</param>
					/// <param name="y">光标位置y</param>
					/// <returns>标识此事件是否已经被ITool处理过,true:处理过(不再向父控件传递此事件);false:未处理(父控件对象可以继续处理)</returns>
					virtual ev_bool onContextMenu(ev_int32 x,ev_int32 y);

					/// <summary>
					/// 鼠标双击事件触发
					/// </summary>
					/// <param name=""></param>
					/// <returns>标识此事件是否已经被ITool处理过,true:处理过(不再向父控件传递此事件);false:未处理(父控件对象可以继续处理)</returns>
					virtual ev_bool onDoubleClick();

					virtual ev_bool onDoubleClick(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y){return onDoubleClick();}

					/// <summary>
					/// 键盘按下事件触发
					/// </summary>
					/// <param name="key">按下的键</param>
					/// <param name="shift">shift键是否同时被按下</param>
					/// <returns>标识此事件是否已经被ITool处理过,true:处理过(不再向父控件传递此事件);false:未处理(父控件对象可以继续处理)</returns>
					virtual ev_bool onKeyDown(ev_int32 keyCode,ev_int32 shift);

					/// <summary>
					/// 键盘弹起事件触发
					/// </summary>
					/// <param name="key">弹起的键</param>
					/// <param name="shift">shift键是否同时被释放</param>                    
					/// <returns>标识此事件是否已经被ITool处理过,true:处理过(不再向父控件传递此事件);false:未处理(父控件对象可以继续处理)</returns>
					virtual ev_bool onKeyUp(ev_int32 keyCode,ev_int32 shift);

					/// <summary>
					/// 鼠标按下事件触发
					/// </summary>
					/// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
					/// <param name="shift">shift键是否同时被按下</param>
					/// <param name="x">光标位置x</param>
					/// <param name="y">光标位置y</param>
					/// <returns>标识此事件是否已经被ITool处理过,true:处理过(不再向父控件传递此事件);false:未处理(父控件对象可以继续处理)</returns>
					virtual ev_bool onMouseDown(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);

					/// <summary>
					/// 鼠标移动事件触发
					/// </summary>
					/// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
					/// <param name="shift">shift键是否同时被按下</param>
					/// <param name="x">光标位置x</param>
					/// <param name="y">光标位置y</param>
					/// <returns>标识此事件是否已经被ITool处理过,true:处理过(不再向父控件传递此事件);false:未处理(父控件对象可以继续处理)</returns>
					virtual ev_bool onMouseMove(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);

					/// <summary>
					/// 鼠标弹起事件触发
					/// </summary>
					/// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
					/// <param name="shift">shift键是否同时被释放</param>
					/// <param name="x">光标位置x</param>
					/// <param name="y">光标位置y</param>
					/// <returns>标识此事件是否已经被ITool处理过,true:处理过(不再向父控件传递此事件);false:未处理(父控件对象可以继续处理)</returns>
					virtual ev_bool onMouseUp(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);

					/// <summary>
					/// 鼠标滚轮滚动事件触发
					/// </summary>
					/// <param name="delta">滚动的幅度</param>        
					/// <param name="x">光标位置x</param>
					/// <param name="y">光标位置y</param>
					/// <param name="flag">标识位</param>  
					/// <returns>标识此事件是否已经被ITool处理过,true:处理过(不再向父控件传递此事件);false:未处理(父控件对象可以继续处理)</returns>
					virtual ev_bool onMouseWheel(ev_int32 delta,ev_int32 x,ev_int32 y,ev_int32 flag);

					/// <summary>
					/// 触屏接触事件触发
					/// </summary>
					/// <param name="touchEvent">事件参数</param>  
					/// <returns>标识此事件是否已经被ITool处理过,true:处理过(不再向父控件传递此事件);false:未处理(父控件对象可以继续处理)</returns>
					virtual ev_bool onTouchDown(const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent);

					/// <summary>
					/// 触屏接触事件触发
					/// </summary>
					/// <param name="touchEvent">事件参数</param>  
					/// <returns>标识此事件是否已经被ITool处理过,true:处理过(不再向父控件传递此事件);false:未处理(父控件对象可以继续处理)</returns>
					virtual ev_bool onTouchUp(const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent);

					/// <summary>
					/// 触屏接触事件触发
					/// </summary>
					/// <param name="touchEvent">事件参数</param>  
					/// <returns>标识此事件是否已经被ITool处理过,true:处理过(不再向父控件传递此事件);false:未处理(父控件对象可以继续处理)</returns>
					virtual ev_bool onTouchMove(const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent);


ev_private:
					ITool( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( ITool )
ev_internal:
					ITool();
				};
			}
		}
	}
}
#endif
