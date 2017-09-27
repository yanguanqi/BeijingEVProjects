/**
* Copyright (C) 2011，北京国遥新天地信息技术有限公司(http://www.ev-image.com)
* All rights reserved.
* 
* 文件名称：measuretoolselect.h
* 摘    要：测量工具
*
* 当前版本：1.0
* 作    者：梁金刚
* 完成日期：2013年06月01日
*
* 修改历史：
* [修改序列]   [修改日期]    [修改者]	[修改内容]
*    1		   2013-04-22	  梁金刚     1.0.0版本的内容声明
* 
**/

#ifndef MEASURETOOLSELECT_H
#define MEASURETOOLSELECT_H

#include "qtlibs/viewtoolbar_global.h"
#include "mapcontrol/trackinggeomsitem.h"
#include "mapcontrol/trackinggeometryitem.h"
#include "mapcontrol/trackingtextitem.h"
#include "mapcontrol/mapcontrolconfig.h"
#include "mapcontrol/tool2d.h"
#include "spatialobject/geometry/rectangle.h"
#include "symbol/simplefillsymbol.h"
#include "mapcontrol/trackinglayer.h"
#include "spatialdisplay/spatialunitconverter.h"
#include "symbol/simpletextsymbol.h"
#include "symbol/simplelinesymbol.h"
#include "symbol/simplefillsymbol.h"
#include "spatialobject/geometry/polyline.h"

#include <QWidget>
#include <QPoint>
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
				class CTrackingGeomsItem;
			}
		}
	}
}

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Atlas
			{
				class IMap;
				class ILayer;
			}
		}
	}
}

namespace EarthView
{
	namespace World
	{
		namespace Desktop
		{
			namespace QT
			{
				enum MeasureType
				{
					MEASURE_DISTANCE = 0,  //测量距离
					MEASURE_AREA = 1,	   //测量面积
					MEASURE_FEATURE = 2,   //测量要素
				};

				enum DataShowType
				{
					DST_FrameShow = 0,  //界面显示
					DST_MapShow = 1,	//地图显示
				};
				class CFrmMeasureMessage;
				class VIEWTOOLBAR_EXPORT CMeasureToolSelect : public EarthView::World::Spatial2D::Controls::CTool2D
				{
				public:
					CMeasureToolSelect();
					~CMeasureToolSelect();
				public:
					/// <summary>
					/// 获取工具栏类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>工具栏类型</returns>
					ev_uint32 getToolBarType() const;

					/// <summary>
					/// 获取工具类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>工具类型</returns>
					ev_uint32 getType() const;

					/// <summary>
					/// 获取工具名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>工具名称</returns>
					EVString getName() const;

					/// <summary>
					/// 获取工具类别
					/// </summary>
					/// <param name=""></param>
					/// <returns>工具类别名称</returns>
					EVString getCategory() const;

					/// <summary>
					/// 获取工具提示
					/// </summary>
					/// <param name=""></param>
					/// <returns>工具提示</returns>
					EVString getToolTip() const;

					/// <summary>
					/// 获取图标
					/// </summary>
					/// <param name=""></param>
					/// <returns>命令的图标</returns>
					EarthView::World::Display::IBitmap * getIcon() const;

					/// <summary>
					/// 是否可以选择
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果可以选择，返回true,如果不可以选择，返回false</returns>
					ev_bool isCheckable() const;

					/// <summary>
					/// 点击工具
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void onClicked();

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
					/// 获取光标样式
					/// </summary>
					/// <param name=""></param>
					/// <returns>光标样式枚举</returns>
					ev_int32 getCursor();

					/// <summary>
					/// 右键菜单事件触发
					/// </summary>
					/// <param name="x">光标位置x</param>
					/// <param name="y">光标位置y</param>
					/// <returns>是否继续向父控件发送该事件</returns>
					ev_bool onContextMenu(ev_int32 x,ev_int32 y);

					/// <summary>
					/// 鼠标按下事件触发
					/// </summary>
					/// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
					/// <param name="shift">shift键是否同时被按下</param>
					/// <param name="x">光标位置x</param>
					/// <param name="y">光标位置y</param>
					/// <returns></returns>
					ev_bool onMouseDown(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);

					/// <summary>
					/// 鼠标移动事件触发
					/// </summary>
					/// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
					/// <param name="shift">shift键是否同时被按下</param>
					/// <param name="x">光标位置x</param>
					/// <param name="y">光标位置y</param>
					/// <returns>标识此事件是否已经被ITool处理过,true:处理过(不再向父控件传递此事件);false:未处理(父控件对象可以继续处理)</returns>
					ev_bool onMouseMove(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);

					/// <summary>
					/// 鼠标弹起事件触发
					/// </summary>
					/// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
					/// <param name="shift">shift键是否同时被释放</param>
					/// <param name="x">光标位置x</param>
					/// <param name="y">光标位置y</param>
					/// <returns>标识此事件是否已经被ITool处理过,true:处理过(不再向父控件传递此事件);false:未处理(父控件对象可以继续处理)</returns>
					ev_bool onMouseUp(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);

					/// <summary>
					/// 鼠标双击
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果鼠标双击，返回true,如果没有双击，返回false</returns>
					ev_bool onDoubleClick();

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
					
					/// <summary>
					///获取距离
					/// </summary>
					/// <param name=""></param>
					/// <returns>距离</returns>
					ev_real64 getDisdance();
					/// <summary>
					///获取总距离
					/// </summary>
					/// <param name=""></param>
					/// <returns>总距离</returns>
					ev_real64 getLength();
					
					/// <summary>
					///获取周长
					/// </summary>
					/// <param name=""></param>
					/// <returns>周长</returns>
					ev_real64 getGirth();
					
					/// <summary>
					///获取面积
					/// </summary>
					/// <param name=""></param>
					/// <returns>面积</returns>
					ev_real64 getArea();

					/// <summary>
					/// 操作更新
					/// </summary>
					/// <param name="e">操作事件</param>
					/// <returns>如果有操作更新，返回true,如果没有，返回false</returns>
					ev_bool update( _in EarthView::World::Core::CEvent* e );
				private:
					void setFillSymbol();
					void setLineSymbol();
					//数据的初始化
					void initData();
					//初始化浮动层临时显示要素
					void initElement();
					//清除浮动层临时显示要素
					void clearElement();
					//计算距离
					void calculateDisdance();
					//计算临时周长
					void calculateTempGirth();
					//计算多边形的周长
					void calculateGirth();
					//计算多边形的面积
					void calculateArea();
					//计算多边形面积的临时参数
					void calculateAreaTempParameter();
					//计算多边形面积的第一个坐标差参数
					void calculateFirstParameter();

					//ev_bool getIsMeasure(ev_vector<EarthView::World::Spatial::Atlas::ILayer*> layers);

				protected:
					//矩形框
					EarthView::World::Spatial::Geometry::CRectangle* m_pRectSlection;
					EarthView::World::Spatial::Geometry::CLineString *m_pLines;
					//线
					EarthView::World::Spatial::Geometry::CPolyline *m_pPolyLine;
					//浮动层临时显示要素
					EarthView::World::Spatial2D::Controls::CTrackingGeomsItem *m_pMarkerItem;
					//浮动层临时显示要素
					EarthView::World::Spatial2D::Controls::CTrackingGeometryItem *m_pGeometryItem;
					//跟踪层文本要素
					EarthView::World::Spatial2D::Controls::CTrackingTextItem *m_pTextElement;
					//第一个点
					EarthView::World::Spatial::Geometry::CPoint *m_pFirst;
					//上一个点
					EarthView::World::Spatial::Geometry::CPoint *m_pLast;
					//起点
					EarthView::World::Spatial::Geometry::CPoint m_startPoint;
					//终点
					EarthView::World::Spatial::Geometry::CPoint m_endPoint;
					//浮动层
					EarthView::World::Spatial2D::Controls::CTrackingLayer *m_pTrackingLayer;
					//地图接口
					EarthView::World::Spatial::Atlas::IMap *m_pMap;
					//距离 
					ev_real64 m_dDistance;
					//总距离
					ev_real64 m_dSumDistance;
					//临时总距离
					ev_real64 m_dTempSumDistance;
					//周长
					ev_real64 m_dGrith;
					//临时周长
					ev_real64 m_dTempGrith;
					//计算周长时最后一个点到第一个点的距离
					ev_real64 m_dEndToFirstDistance;
					//面积
					ev_real64 m_dArea;
					//计算面积时临时坐标积差
					ev_real64 m_dAreaTempParameter;
					//计算面积时所有坐标积差之和
					ev_real64 m_dAreaSumParameter;
					//计算面积时第一个坐标积差
					ev_real64 m_dEndToFirstParameter;
					//是否可以计算
					bool m_bCaculate;

				private:
					//测量类型
					EarthView::World::Desktop::QT::MeasureType m_measureType;
					//测量信息对话框
					CFrmMeasureMessage *m_msgDlg;

					QWidget * m_activeWindow;

					QPoint m_dlgShowPoint;

					EarthView::World::Spatial::Display::IColor *m_pTrackingColor;

					EarthView::World::Spatial::Display::CSpatialUnitConverter *m_pUnitConverter;

					EarthView::World::Spatial::Atlas::EVMapUnits m_mapUnit;
					
				ev_private:
					CMeasureToolSelect( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CMeasureToolSelect )
				};
			}
		}
	}
}

#endif // TOOLGETINFORMATION_H
