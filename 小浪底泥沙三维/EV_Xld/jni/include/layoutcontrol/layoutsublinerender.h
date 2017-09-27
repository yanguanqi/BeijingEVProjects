#ifndef EARTHVIEW_WORLD_LAYOUT_CONTROLS_CLAYOUTSUBLINERENDER_H
#define EARTHVIEW_WORLD_LAYOUT_CONTROLS_CLAYOUTSUBLINERENDER_H

#include "layoutcontrol/layoutcontrol.h"
#include "layoutcontrol/layoutcontrolconfig.h"
#include "spatialinterface/ispatialdisplay.h"
#include "spatialinterface/igeometry.h"
#include "spatialinterface/isymbol.h"

namespace EarthView
{
	namespace World
	{
		namespace Layout
		{
			namespace Controls
			{
				/// <summary>
				/// 辅助线渲染类，用于布局时绘图，调节坐标等
				/// </summary>
				class EV_LAYOUTCONTROL_DLL CLayoutSublineRender : public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CLayoutSublineRender(CLayoutControl *pControl);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CLayoutSublineRender();
				public:

					/// <summary>
					/// 绘制辅助线
					/// </summary>
					/// <param name="pGeometry">辅助线的几何</param>
					/// <param name="pSymbol">辅助线的风格</param>
					/// <returns></returns>
					ev_void drawSubline(EarthView::World::Spatial::Geometry::IGeometry *pGeometry, EarthView::World::Spatial::Display::ISymbol *pSymbol);
					 
					/// <summary>
					/// 清空辅助线
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void clear();
				private:
					ev_void init();
				private:
					EarthView::World::Spatial::Display::ISpatialDisplay *m_pDisplay;
					CLayoutControl *CCommandElementSort;
					ev_bool mbActive;
				ev_private:
					CLayoutSublineRender( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY(CLayoutSublineRender)
				};	
			}
		}
	}
}
#endif 