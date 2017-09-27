#ifndef EARTHVIEW_WORLD_SPATIAL_CATTRIBUTIONTITLE_H
#define EARTHVIEW_WORLD_SPATIAL_CATTRIBUTIONTITLE_H
#include "tileutility/tileutilityexports.h"
#include "core/memoryallocatedobject.h"
#include "core/variant.h"
#include "core/datastream.h"
#include "spatialinterface/ifield.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			/// <summary>
            /// 瓦片属性类，描述一个瓦片所有要素的一种属性
            /// </summary>
			class EV_TILEUTILITY_DLL  CAttributionTile:
				public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CAttributionTile();

				/// <summary>
                /// 从信息流解析获取EarthView::World::Spatial::CAttributionTile对象
                /// </summary>
				/// <param name="stream">信息流</param>
				/// <param name="fieldName">字段名称</param>
                /// <returns>EarthView::World::Spatial::CAttributionTile对象指针</returns>
				static _extfree EarthView::World::Spatial::CAttributionTile * fromStream(_in EarthView::World::Core::CDataStream & stream, _in const EarthView::World::Core::ev_string& fieldName);

				/// <summary>
                /// 获取要素个数
                /// </summary>
                /// <returns>要素个数</returns>
				ev_uint32 getElementCount() const;

				/// <summary>
                /// 获取指定索引相应要素的ID
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>相应ID</returns>
				ev_uint32 getID(_in ev_uint32 index) const;

				/// <summary>
                /// 按索引获取要素属性
                /// </summary>
				/// <param name="index">要素索引</param>
                /// <returns>指定要素属性</returns>
				EarthView::World::Core::CVariant getAttribution(_in ev_uint32 index);

				/// <summary>
                /// 按ID获取要素属性
                /// </summary>
				/// <param name="id">要素的ID</param>
                /// <returns>指定要素属性</returns>
				EarthView::World::Core::CVariant getAttributionByID(_in ev_uint32 id);

				/// <summary>
                /// 获取字段名称
                /// </summary>
                /// <returns>字段名称</returns>
				const EVString& getFieldName() const;

				/// <summary>
                /// 获取字段类型
                /// </summary>
                /// <returns>字段类型</returns>
				EarthView::World::Spatial::GeoDataset::EVFieldType getFieldType() const;
				
			protected:
				/// <summary>
                /// 默认构造函数
                /// </summary>
                /// <returns></returns>
				CAttributionTile();
			ev_private:
					CAttributionTile(_in EarthView::World::Core::CNameValuePairList* pList );
			private:
				C_DISABLE_COPY( CAttributionTile );
			protected:
				///属性名称
				EarthView::World::Core::ev_string mstrFieldName;
				///属性类型
				EarthView::World::Spatial::GeoDataset::EVFieldType mstrFieldType;
				///属性列表
				EarthView::World::Core::ev_hashmap<ev_uint32,EarthView::World::Core::CVariant> mmapAttributionValues;
				///要素列表
				ev_vector<ev_uint32> mvectorIDs;
			};
		}
	}
}
#endif
