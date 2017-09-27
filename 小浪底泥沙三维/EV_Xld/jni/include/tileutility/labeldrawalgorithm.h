#ifndef EARTHVIEW_WORLD_SPATIAL_CLABELDRAWALGORITHM_H
#define EARTHVIEW_WORLD_SPATIAL_CLABELDRAWALGORITHM_H
#include "tileutility/tileutilityexports.h"
#include "core/memoryallocatedobject.h"
#include "tileutility/vectortileenums.h"
#include "tileutility/geoelement.h"
#include "spatialinterface/ipaintdevice.h"
#include "spatialinterface/isymbol.h"
// using namespace EarthView::World::Spatial::Display;
namespace EarthView{
	namespace World{
		namespace Spatial{
			/// <summary>
            /// 注记算法类
            /// </summary>
			class EV_TILEUTILITY_DLL  CLabelDrawAlgorithm:
				public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
                /// 默认构造函数
                /// </summary>
                /// <returns></returns>
				CLabelDrawAlgorithm();

				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				virtual ~CLabelDrawAlgorithm();

				/// <summary>
                /// 默认构造函数
                /// </summary>
				/// <param name="device">绘图设备</param>
				/// <param name="symbol">风格</param>
				/// <param name="geoElement">地理元素</param>
				/// <param name="value">要素字符</param>
                /// <returns></returns>
				ev_void draw(_in const EarthView::World::Display::IPaintDevice* device,_in const EarthView::World::Spatial::Display::ISymbol* symbol,_in const EarthView::World::Spatial::CGeoElement* geoElement,_in const EarthView::World::Core::ev_string& value) const;
			ev_private:
				CLabelDrawAlgorithm(_in EarthView::World::Core::CNameValuePairList* pList);
			private:
				C_DISABLE_COPY( CLabelDrawAlgorithm );
			protected:
				EVLabelDrawingType mnDrawingType;
			};
		}
	}
}
#endif
