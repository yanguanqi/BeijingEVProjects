#ifndef EARTHVIEW_WORLD_SPATIAL_CVECTORTILE_H
#define EARTHVIEW_WORLD_SPATIAL_CVECTORTILE_H
#include "core/memoryallocatedobject.h"
#include "tileutility/tileutilityexports.h"
#include "tileutility/vectortileenums.h"
#include "core/datastream.h"
#include "core/stdheaders.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			/// <summary>
            /// 要素几何对象类
            /// </summary>
			class CGeoElement;

			/// <summary>
            /// 瓦片几何要素类，描述一个瓦片所有要素的几何信息
            /// </summary>
			class EV_TILEUTILITY_DLL CVectorTile:
				public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				virtual ~CVectorTile();

				/// <summary>
                /// 生成VectorTile对象
                /// </summary>
				/// <param name="stream">数据流</param>
				/// <param name="width">瓦片宽度</param>
				/// <param name="height">瓦片高度</param>
                /// <returns>VectorTile对象</returns>
				static _extfree EarthView::World::Spatial::CVectorTile* fromStream(_in EarthView::World::Core::CDataStream & stream,_in ev_uint32 width,_in ev_uint32 height);

				/// <summary>
                /// 获取要素个数
                /// </summary>
                /// <returns>要素个数</returns>
				ev_uint32 getElementCount() const;

				/// <summary>
                /// 按索引获取要素
                /// </summary>
				/// <param name="index">要素的索引号</param>
                /// <returns>指定要素对象的指针</returns>
				const EarthView::World::Spatial::CGeoElement* getGeoElement(_in ev_uint32 index);

				/// <summary>
                /// 获取指定索引号对应要素的ID
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>相应ID</returns>
				ev_uint32 getID(_in ev_uint32 index) const;

				/// <summary>
                /// 按ID获取要素
                /// </summary>
				/// <param name="index">要素的ID</param>
                /// <returns>指定要素对象的指针</returns>
				const EarthView::World::Spatial::CGeoElement * getGeoElementByID(_in ev_uint32 id);

				/// <summary>
                /// 要素类型
                /// </summary>
                /// <returns>要素类型</returns>
				EarthView::World::Spatial::EVGeoElementType getElementType();
			protected:
				/// <summary>
                /// 默认构造函数
                /// </summary>
                /// <returns></returns>
				CVectorTile();
			ev_private:
				CVectorTile(_in EarthView::World::Core::CNameValuePairList * pList);
			private:
				C_DISABLE_COPY( CVectorTile );
			protected:
				///地理元素哈希表
				EarthView::World::Core::ev_hashmap<ev_uint32,EarthView::World::Spatial::CGeoElement*> mmapGeoElements;
				///ID列表
				ev_vector<ev_uint32> mvectorIDs;
			};
		}
	}
}

#endif
