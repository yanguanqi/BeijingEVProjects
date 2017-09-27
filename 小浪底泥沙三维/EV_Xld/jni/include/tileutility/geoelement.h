#ifndef EARTHVIEW_WORLD_SPATIAL_CGEOELEMENT_H
#define EARTHVIEW_WORLD_SPATIAL_CGEOELEMENT_H
#include "tileutility/tileutilityexports.h"
#include "tileutility/vectortileenums.h"
#include "spatialinterface/ienvelope.h"
#include "core/datastream.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			/// <summary>
            /// 像素点类
            /// </summary>
			class CPixelPoint;

			/// <summary>
            /// 要素几何对象类，描述一个要素的几何对象
            /// </summary>
			class EV_TILEUTILITY_DLL CGeoElement:
				public EarthView::World::Core::CAllocatedObject
			{
			protected:
				/// <summary>
                /// 默认构造函数
                /// </summary>
                /// <returns></returns>
				CGeoElement();
			public:
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				virtual ~CGeoElement();

				/// <summary>
                /// 从数据流中解析地理元素对象
                /// </summary>
				/// <param name="stream">数据流</param>
				/// <param name="type">地理要素类型</param>
				/// <param name="width">瓦片宽度，单位：像素</param>
				/// <param name="height">瓦片高度，单位：像素</param>
				/// <param name="byteOrder">数据流所对应大小尾：大尾为0，小尾为1</param>
                /// <returns>生成地理元素对象的指针</returns>
				static _extfree EarthView::World::Spatial::CGeoElement* fromStream(_in EarthView::World::Core::CDataStream & stream,_in EarthView::World::Spatial::EVGeoElementType type, _in ev_uint32 width,_in ev_uint32 height,_in ev_int32 byteOrder);

				/// <summary>
                /// 从数据流中获取指定ID的地理元素对象
                /// </summary>
				/// <param name="stream">数据流</param>
				/// <param name="id">所要解析要素的ID</param>
				/// <param name="width">瓦片宽度，单位：像素</param>
				/// <param name="height">瓦片高度，单位：像素</param>
                /// <returns>生成地理元素对象的指针</returns>
				static _extfree EarthView::World::Spatial::CGeoElement* fromTileStreamByID(_in EarthView::World::Core::CDataStream & stream, _in ev_uint32 id,_in ev_uint32 width,_in ev_uint32 height) ;

				/// <summary>
                /// 从数据流中获取指定索引的地理元素对象
                /// </summary>
				/// <param name="stream">数据流</param>
				/// <param name="index">所要解析要素的索引</param>
				/// <param name="width">瓦片宽度，单位：像素</param>
				/// <param name="height">瓦片高度，单位：像素</param>
                /// <returns>生成地理元素对象的指针</returns>
				static _extfree EarthView::World::Spatial::CGeoElement* fromTileStreamByIndex(_in EarthView::World::Core::CDataStream & stream, _in ev_uint32 index,_in ev_uint32 width,_in ev_uint32 height) ;

				/// <summary>
                /// 获取要素ID
                /// </summary>
                /// <returns>要素ID</returns>
				ev_uint32 getID() const;

				/// <summary>
                /// 获取要素类型
                /// </summary>
                /// <returns>要素类型</returns>
				EarthView::World::Spatial::EVGeoElementType getElementType() const;

				/// <summary>
                /// 获取要素部分数
                /// </summary>
                /// <returns>要素部分数</returns>
				ev_uint32 getPartNum() const;

				/// <summary>
                /// 获取要素总点数
                /// </summary>
                /// <returns>要素总点数</returns>
				ev_uint32 getPointNum() const;

				/// <summary>
                /// 获取要素指定部分点数
                /// </summary>
				/// <param name="index">部分索引</param>
                /// <returns>要素指定部分点数</returns>
				ev_uint32 getPointNumByPart(_in ev_uint32 index) const;

				/// <summary>
                /// 获取要素包围盒x方向最小值
                /// </summary>
                /// <returns>要素包围盒x方向最小值</returns>
				ev_real64 getMinX() const;

				/// <summary>
                /// 获取要素包围盒y方向最小值
                /// </summary>
                /// <returns>要素包围盒y方向最小值</returns>
				ev_real64 getMinY() const;

				/// <summary>
                /// 获取要素包围盒x方向最大值
                /// </summary>
                /// <returns>要素包围盒x方向最大值</returns>
				ev_real64 getMaxX() const;

				/// <summary>
                /// 获取要素包围盒y方向最大值
                /// </summary>
                /// <returns>要素包围盒y方向最大值</returns>
				ev_real64 getMaxY() const;

				/// <summary>
                /// 获取指定像素点
                /// </summary>
				/// <param name="index">点的索引号</param>
                /// <returns>像素点对象指针</returns>
				const EarthView::World::Spatial::CPixelPoint* getPointRef(_in ev_uint32 index) const;
			protected:
				/// <summary>
                /// 获取包围盒外边框
                /// </summary>
                /// <returns>包围盒外边框指针，不需释放</returns>
				EarthView::World::Spatial::CGeoElement* getOutline() const;

				/// <summary>
                /// 获取描述要素的坐标点串
                /// </summary>
				/// <param name="x">坐标串，外部分配内存</param>
				/// <param name="y">坐标串，外部分配内存</param>
				/// <param name="segment">各部分点数，外部分配内存</param>
				/// <param name="segmentCount">部分数</param>
                /// <returns></returns>
				ev_void toXY(_out ev_real64* x,_out ev_real64* y,_out ev_int32* segment,_out ev_uint32& segmentCount) const;
			private:
				ev_void toXYwithExtends(_out ev_real64* px,_out ev_real64* py,_out ev_int32* segment,_out ev_uint32& segmentCount) const;
				ev_int32 getPointNumWithExtends()const;
			ev_private:
                CGeoElement(_in EarthView::World::Core::CNameValuePairList* pList);

			private:
				C_DISABLE_COPY( CGeoElement );
			protected:
				///要素ID
				ev_uint32 mnID;
				///要素类型
				EarthView::World::Spatial::EVGeoElementType mnElementType;
				///要素范围，上边界坐标
				ev_uint32 mnTop;
				///要素范围，下边界坐标
				ev_uint32 mnBottom;
				///要素范围，左边界坐标
				ev_uint32 mnLeft;
				///要素范围，右边界坐标
				ev_uint32 mnRight;

				///要素组成部分数
				ev_uint32 mnPartNum;
				///要素总点数
				ev_uint32 mnPointNum;
				///各部分起始点在坐标中的索引
				ev_vector<ev_uint32> mvectorParts;
				///要素点列表
				ev_vector<EarthView::World::Spatial::CPixelPoint*> mvectorPoints;

				// 边界，只有Polygon才有此类型
				EarthView::World::Spatial::CGeoElement* mpOutline;
				friend class CGeoElementDrawing;
			};
		}
	}
}
#endif
