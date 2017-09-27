#ifndef EARTHVIEW_WORLD_SPATIAL_CGEOELEMENTDRAWING_H
#define EARTHVIEW_WORLD_SPATIAL_CGEOELEMENTDRAWING_H
#include "tileutility/tileutilityexports.h"
#include "core/memoryallocatedobject.h"
#include "spatialinterface/isymbol.h"
#include "tileutility/labeldrawalgorithm.h"
#include "tileutility/geoelement.h"
#include "tileutility/vectortileenums.h"
#include "spatialinterface/ispatialdisplay.h"
#include "symbol/symbolrenderer.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			/// <summary>
            /// 几何要素渲染类
            /// </summary>
			class EV_TILEUTILITY_DLL  CGeoElementDrawing:
				public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
                /// 默认构造函数
                /// </summary>
                /// <returns></returns>
				CGeoElementDrawing();

				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CGeoElementDrawing();

				/// <summary>
                /// 开始绘制。
                /// </summary>
				/// <param name="display">绘图参数</param>
                /// <returns></returns>
				ev_void startDrawing(_in EarthView::World::Spatial::Display::ISpatialDisplay* ref_display );

				/// <summary>
                /// 结束绘制。析构绘图设备，并保存绘制到绘图设备
                /// </summary>
                /// <returns></returns>
				ev_void endDrawing();

				/// <summary>
                /// 设置绘制的风格
                /// </summary>
				/// <param name="symbol">绘制风格</param>
                /// <returns></returns>
				ev_void setSymbol(_in EarthView::World::Spatial::Display::ISymbol* pSymbol);

				///// <summary>
				///// 设置标注绘制算法
				///// </summary>
				///// <param name="algorithm">标注绘制算法</param>
				///// <returns></returns>
				//ev_void setLabelDrawingAlgorithm(_in const CLabelDrawAlgorithm * algorithm);

				/// <summary>
                /// 绘制地理要素
                /// </summary>
				/// <param name="geoElement">地理要素</param>
                /// <returns></returns>
				ev_void draw(_in const EarthView::World::Spatial::CGeoElement *geoElement);

				///// <summary>
				///// 绘制标注
				///// </summary>
				///// <param name="geoElement">地理要素</param>
				///// <param name="value">要素字符</param>
				///// <param name="drawType">绘制类型</param>
				///// <returns></returns>
				//ev_void drawLabel(_in const EarthView::World::Spatial::CGeoElement* geoElement, _in EarthView::World::Core::ev_string value, _in EVLabelDrawingType drawType);
			ev_private:
				CGeoElementDrawing(_in EarthView::World::Core::CNameValuePairList* pList);
			private:
				C_DISABLE_COPY( CGeoElementDrawing );
			private:
				///绘制风格
				EarthView::World::Spatial::Display::ISymbol* mpSymbol;
				///绘制风格(边界)
				EarthView::World::Spatial::Display::ISymbol* mpOutLineSymbol;
				///绘图设备
				EarthView::World::Spatial::Display::ISpatialDisplay* mpDisplay;
				EarthView::World::Display::IPaintDevice* mpPaintDevice;

				EarthView::World::Spatial::Display::CSymbolRenderer* mpSymbolRender;
				EarthView::World::Spatial::Display::CSymbolRenderer* mpOutlineRender;
			};
		}
	}
}
#endif
