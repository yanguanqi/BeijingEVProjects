#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_LINE_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_LINE_H

#include "linestring.h"
#include "coordinate.h"
#include "point.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				/// <summary>
				/// 两个顶点的线段类
				/// </summary>
				class EV_GEOMETRY_DLL CLine
					:public EarthView::World::Spatial::Geometry::CLineString
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CLine();
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CLine();
					/// <summary>
					/// 参数构造函数
					/// </summary>
					/// <param name="first">首坐标点</param>
					/// <param name="second">尾坐标点</param>
					/// <returns></returns>
					CLine(const EarthView::World::Spatial::Geometry::CCoordinate & firstCoord,const EarthView::World::Spatial::Geometry::CCoordinate& secondCoord);
					/// <summary>
					/// 参数构造函数
					/// </summary>
					/// <param name="first">首几何点</param>
					/// <param name="second">尾几何点</param>
					/// <returns></returns>
					CLine(const EarthView::World::Spatial::Geometry::CPoint & firstPoint,const EarthView::World::Spatial::Geometry::CPoint & secondPoint);

ev_private:
					/// <summary>
					/// 创建构造函数
					/// </summary>
					/// <param name="pList">参数键值对</param>
					/// <returns></returns>
					CLine(EarthView::World::Core::CNameValuePairList* pList);
				public:
					virtual _extfree EarthView::World::Spatial::Geometry::IGeometry* clone() const;
					EarthView::World::Spatial::Geometry::CLine clone2()const;
					virtual ev_uint32 add(_in const EarthView::World::Spatial::Geometry::CCoordinate& coord,_in ev_int32 index);

					virtual ev_uint32 add(_in const EarthView::World::Spatial::Geometry::CPoint& point,_in ev_int32 index);
					/// <summary>
					/// 添加坐标点列表到指定索引处
					/// </summary>
					/// <param name="coords">指定坐标点列表</param>
					/// <param name="count">坐标点数目</param>
					/// <param name="index">插入索引位置</param>
					/// <returns></returns>
					virtual ev_uint32 add(_in const EarthView::World::Spatial::Geometry::CCoordinate* cpy_coords,_in ev_uint32 count,_in ev_int32 index);
					/// <summary>
					/// 添加几何点列表到指定索引处
					/// </summary>
					/// <param name="coords">指定几何点列表</param>
					/// <param name="count">几何点数目</param>
					/// <param name="index">插入索引位置</param>
					/// <returns></returns>
					virtual ev_uint32 add(_in const EarthView::World::Spatial::Geometry::CPoint* cpy_points,_in ev_uint32 count,_in ev_int32 index);
					/// <summary>
					/// 添加坐标序列到指定索引处
					/// </summary>
					/// <param name="coords">指定坐标序列</param>
					/// <param name="index">插入索引位置</param>
					/// <returns></returns>
					virtual ev_uint32 add(_in const EarthView::World::Spatial::Geometry::CCoordinateSequence& coords,_in ev_uint32 index,_in ev_int32 count,_in ev_int32 insertIndex);
					/// <summary>
					/// 移除指定索引处的指定数目点
					/// </summary>
					/// <param name="index">指定索引</param>
					/// <param name="count">指定数目</param>
					/// <returns></returns>
					virtual ev_uint32 remove(_in ev_uint32 index,_in ev_uint32 count);
					/// <summary>
					/// 设置起点
					/// </summary>
					/// <param name="point">起点</param>
					/// <returns></returns>
					virtual ev_void setStartPoint(_in const EarthView::World::Spatial::Geometry::CPoint& point);
					/// <summary>
					/// 设置起点坐标
					/// </summary>
					/// <param name="coord">起点坐标</param>
					/// <returns></returns>
					virtual ev_void setStartPoint(_in const EarthView::World::Spatial::Geometry::CCoordinate& coord);
					/// <summary>
					/// 设置终点
					/// </summary>
					/// <param name="point">终点</param>
					/// <returns></returns>
					virtual ev_void setEndPoint(_in const EarthView::World::Spatial::Geometry::CPoint& point);
					/// <summary>
					/// 设置终点坐标
					/// </summary>
					/// <param name="coord">终点坐标</param>
					/// <returns></returns>
					virtual ev_void setEndPoint(_in const EarthView::World::Spatial::Geometry::CCoordinate& coord); 

				protected:
					ev_void clone2(EarthView::World::Spatial::Geometry::CLine* line)const;
				public:
					CLine(const CLine& obj);
					EarthView::World::Spatial::Geometry::CLine& operator=(const EarthView::World::Spatial::Geometry::CLine& obj);
				};
			}
		}
	}
}

#endif
