#ifndef EARTHVIEW_WORLD_SPATIAL_CTILEREFERENCEFACTORY_H
#define EARTHVIEW_WORLD_SPATIAL_CTILEREFERENCEFACTORY_H
#include "tileutility/tileutilityexports.h"
#include "core/memoryallocatedobject.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			/// <summary>
            /// 瓦片参数类
            /// </summary>
			class CTileReference;

			/// <summary>
            /// 瓦片参数类工厂
            /// </summary>
			class EV_TILEUTILITY_DLL CTileReferenceFactory:
				public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
                /// 默认构造函数
                /// </summary>
                /// <returns></returns>
				CTileReferenceFactory();

				/// <summary>
                /// 默认析构函数
                /// </summary>
                /// <returns></returns>
				~CTileReferenceFactory();

			public:
				/// <summary>
                /// 创建WGS84格式影像的TileReference对象
                /// </summary>
                /// <returns>WGS84格式影像的TileReference对象指针</returns>
				static _extfree EarthView::World::Spatial::CTileReference * createImageTileReferenceForWGS84();

				/// <summary>
                /// 创建WGS84格式矢量的TileReference对象
                /// </summary>
                /// <returns>WGS84格式矢量的TileReference对象指针</returns>
				static _extfree EarthView::World::Spatial::CTileReference * createVectorTileReferenceForWGS84();

				/// <summary>
                /// 创建WGS84格式DEM的TileReference对象
                /// </summary>
                /// <returns>WGS84格式DEM的TileReference对象指针</returns>
				static _extfree EarthView::World::Spatial::CTileReference * createDEMTileReferenceForWGS84();
				static _extfree EarthView::World::Spatial::CTileReference * createDEMTileReferenceForWGS84(ev_real64 spanofzero);

				/// <summary>
                /// 创建Mercator格式TileReference对象
                /// </summary>
                /// <returns>Merctor格式TileReference对象指针</returns>
				static _extfree EarthView::World::Spatial::CTileReference * createForWebMercator();

				/// <summary>
                /// 销毁动态生成的TileReference对象
                /// </summary>
				/// <param name="tileReference">TileReference对象指针</param>
                /// <returns></returns>
				static ev_void destroyTileReference(_in const EarthView::World::Spatial::CTileReference* tileReference);
			ev_private:
				CTileReferenceFactory(_in EarthView::World::Core::CNameValuePairList * pList);
			private:
				C_DISABLE_COPY( CTileReferenceFactory );
			};
		}
	}
}
#endif


