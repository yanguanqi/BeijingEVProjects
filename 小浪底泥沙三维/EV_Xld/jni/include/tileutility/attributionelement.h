#ifndef EARTHVIEW_WORLD_SPATIAL_CATTRIBUTIONELEMENT_H
#define EARTHVIEW_WORLD_SPATIAL_CATTRIBUTIONELEMENT_H
#include "tileutility/tileutilityexports.h"
#include "core/memoryallocatedobject.h"
#include "core/any.h"
#include "spatialinterface/ifield.h"
#include "core/datastream.h"
namespace EarthView{
	namespace World{
		namespace Spatial{

			/// <summary>
            /// 属性要素类，描述一个要素的一个属性
            /// </summary>
			class EV_TILEUTILITY_DLL  CAttributionElement:
				public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				virtual ~CAttributionElement();

				/// <summary>
                /// 从流中获取属性元素
                /// </summary>
				/// <param name="stream">数据流</param>
				/// <param name="fieldName">字段名称</param>
				/// <param name="fieldType">地理要素类型,int32 1,long 2,real64 11,string 12,unknown 0</param>
				/// <param name="byteOrder">数据流大小尾，小尾1，大尾0</param>
                /// <returns>属性元素</returns>
				static _extfree EarthView::World::Spatial::CAttributionElement* fromStream(_in EarthView::World::Core::CDataStream& stream, _in EarthView::World::Core::ev_string fieldName, _in ev_int32 fieldType, _in ev_int32 byteOrder);

				/// <summary>
                /// 获取要素ID
                /// </summary>
                /// <returns>要素ID</returns>
				ev_uint32 getID() const;

				/// <summary>
                /// 获取属性元素
                /// </summary>
                /// <returns>属性</returns>
				EarthView::World::Core::CVariant getAttributionValue() const;

				/// <summary>
                /// 获取字段类型
                /// </summary>
                /// <returns>字段类型</returns>
				EarthView::World::Spatial::GeoDataset::EVFieldType getFieldType() const;

				/// <summary>
                /// 获取字段名称
                /// </summary>
                /// <returns>字段名称</returns>
				EarthView::World::Core::ev_string getFieldName() const;
			protected:
				/// <summary>
                /// 默认构造函数
                /// </summary>
                /// <returns></returns>
				CAttributionElement();
			ev_private:
					CAttributionElement(_in EarthView::World::Core::CNameValuePairList* pList );
			private:
				C_DISABLE_COPY(CAttributionElement );
			private:
				///要素ID 
				ev_uint32 mnID;
				///字段名
				EarthView::World::Core::ev_string mstrFieldName;
				///字段类型
				EarthView::World::Spatial::GeoDataset::EVFieldType mnFieldType;
				///属性值
				EarthView::World::Core::CVariant mValue;
			};
		}
	}
}
#endif
