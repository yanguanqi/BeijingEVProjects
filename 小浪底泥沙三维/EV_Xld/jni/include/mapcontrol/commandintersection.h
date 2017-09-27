#ifndef EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_COMMANDINTERSECTION_H
#define EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_COMMANDINTERSECTION_H

#include "mapcontrol/mapcontrolconfig.h"
#include "mapcontrol/mapcommand.h"
#include "spatialinterface/igeometry.h"
#include "mapcontrol/trackinggeomsitem.h"
#include "mapcontrol/trackinglayer.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Geometry
			{
				class CPolyline;
				class CLineString;
				class CPoint;
			}
		}
	}
}


namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Controls{

				class CTrackingTimer;
				class EV_MAPCONTROL_DLL CCommandIntersection : public CEditCommand
				{
				public:

					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CCommandIntersection( );

					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CCommandIntersection( );

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
					/// 操作更新
					/// </summary>
					/// <param name="e">操作事件</param>
					/// <returns>如果有操作更新，返回true,如果没有，返回false</returns>
					ev_bool update( _in EarthView::World::Core::CEvent* e );
				private:
					ev_void intersectionSplit();
				ev_private:
					CCommandIntersection( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					ev_void init();
					C_DISABLE_COPY( CCommandIntersection )
				};
			}
		}
	}
}
#endif