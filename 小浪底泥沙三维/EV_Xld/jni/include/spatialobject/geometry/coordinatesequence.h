
#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_COORDINATESEQUENCE_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_COORDINATESEQUENCE_H

#include "spatialobject/config.h"
#include "coordinate.h"
#include "geom_define.h"



namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				namespace Private{
					class CCoordinateSequencePrivate;
				}
				namespace Utility{
					class CGeometryHelper;

				}
				/// <summary>
				/// 坐标点串，描述一组坐标点
				/// </summary>
				class EV_GEOMETRY_DLL CCoordinateSequence
					:public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <return></return>
					CCoordinateSequence();
					CCoordinateSequence(_in ev_uint32 size);
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <return></return>
					virtual ~CCoordinateSequence();
					/// <summary>
					/// 参数构造函数
					/// </summary>
					/// <param name="coords">坐标点列表</param>
					/// <param name="size">坐标点数目</param>
					/// <return></return>					
					CCoordinateSequence(_in const CCoordinateSequence& obj);
					EarthView::World::Spatial::Geometry::CCoordinateSequence& operator=(_in const EarthView::World::Spatial::Geometry::CCoordinateSequence& obj);
ev_private:
					CCoordinateSequence(EV_GEOMETY_PRIVATE_PREFIX::CCoordinateSequencePrivate* p);
					CCoordinateSequence(_in const CCoordinate* cpy_coords[],_in ev_uint32 size);
					/// <summary>
					/// 创建构造函数
					/// </summary>
					/// <param name="pList">参数列表</param>
					/// <return></return>
					CCoordinateSequence(_in EarthView::World::Core::CNameValuePairList* pList);
				public:					
					/// <summary>
					/// 获取坐标点数目
					/// </summary>
					/// <param name=""></param>
					/// <return>坐标点数目</return>
					ev_uint32 getCount() const;
					/// <summary>
					/// 获取指定索引的坐标点。
					/// 返回对象指针是坐标序列内部指针，外部无需释放。
					/// </summary>
					/// <param name="index">指定索引</param>
					/// <return>如果索引超出范围，则返回NULL</return>
					EarthView::World::Spatial::Geometry::CCoordinate getCoordinate(_in ev_uint32 index) const;
					/// <summary>
					/// 获取最大X值
					/// </summary>
					/// <param name=""></param>
					/// <return>最大值</return>
					ev_real64 getMaxX() const;
					/// <summary>
					/// 获取最小X值
					/// </summary>
					/// <param name=""></param>
					/// <return>最小值</return>
					ev_real64 getMinX() const;
					/// <summary>
					/// 获取最大Y值
					/// </summary>
					/// <param name=""></param>
					/// <return>最大值</return>
					ev_real64 getMaxY() const;
					/// <summary>
					/// 获取最小Y值
					/// </summary>
					/// <param name=""></param>
					/// <return>最小值</return>
					ev_real64 getMinY() const;
					/// <summary>
					/// 获取最大Z值
					/// </summary>
					/// <param name=""></param>
					/// <return>最大值</return>
					ev_real64 getMaxZ() const;
					/// <summary>
					/// 获取最小Z值
					/// </summary>
					/// <param name=""></param>
					/// <return>最小值</return>
					ev_real64 getMinZ() const;
					/// <summary>
					/// 获取最大M值
					/// </summary>
					/// <param name=""></param>
					/// <return>最大值</return>
					ev_real64 getMaxM() const;
					/// <summary>
					/// 获取最小M值
					/// </summary>
					/// <param name=""></param>
					/// <return>最小值</return>
					ev_real64 getMinM() const;

					
					ev_uint32 add(_in const EarthView::World::Spatial::Geometry::CCoordinate& coords,_in ev_int32 index);
					/// <summary>
					/// 添加坐标点到坐标序列末尾
					/// </summary>
					/// <param name="coords">坐标点列表</param>
					/// <param name="size">坐标点数目</param>
					/// <return>返回添加坐标点数目</return>
					ev_uint32 add(_in const EarthView::World::Spatial::Geometry::CCoordinateSequence & coords,_in ev_int32 index);

					ev_uint32 append(_in const EarthView::World::Spatial::Geometry::CCoordinate& coords);
					ev_uint32 append(_in const EarthView::World::Spatial::Geometry::CCoordinateSequence & coords);

					ev_uint32 insert(_in const EarthView::World::Spatial::Geometry::CCoordinate& coords,_in ev_uint32 index);
					ev_uint32 insert(_in const EarthView::World::Spatial::Geometry::CCoordinateSequence& coords,_in ev_uint32 index);

					ev_uint32 replace(_in const EarthView::World::Spatial::Geometry::CCoordinate& coord,_in ev_uint32 index);
					ev_uint32 replace(_in const EarthView::World::Spatial::Geometry::CCoordinateSequence& coords,_in ev_uint32 index);

					/// <summary>
					/// 移除指定索引处的指定数目坐标点
					/// </summary>
					/// <param name="index">指定索引</param>
					/// <param name="size">指定数目</param>
					/// <return>成功移除坐标点数目</return>
					ev_uint32 remove(_in ev_uint32 index,_in ev_uint32 size);
					ev_void clear();
					//ev_void makeZ(_in ev_real64 value);
					//ev_void makeM(_in ev_real64 value);
					/// <summary>
					/// 反转指定索引处的指定数目坐标点
					/// </summary>
					/// <param name="index">指定索引</param>
					/// <param name="size">指定数目</param>
					/// <return>成功反转坐标点数目</return>
					ev_void reserve();
					ev_void reverse();
					//ev_void reserve(_in ev_uint32 index,_in ev_uint32 size);
					/// <summary>
					/// 查询坐标点位置是否已经存在
					/// </summary>
					/// <param name="coord">指定坐标点</param>
					/// <param name="tolerance">容差范围</param>
					/// <return>如果存在，则返回索引；否则，返回-1</return>
					ev_int32 queryCoordinate(_in const EarthView::World::Spatial::Geometry::CCoordinate& coord,_in ev_real64 tolerance) const;
					/// <summary>
					/// 判断是否需要重新计算
					/// </summary>
					/// <param name=""></param>
					/// <return></return>
					ev_bool isDirty() const;
					ev_void update();
					/// <summary>
					/// 重新计算范围
					/// </summary>
					/// <param name=""></param>
					/// <return></return>
					ev_void recalculateBoundingbox();	
					/// <summary>
					/// 深度拷贝
					/// </summary>
					/// <param name=""></param>
					/// <return>坐标序列对象指针</return>
					_extfree EarthView::World::Spatial::Geometry::CCoordinateSequence* clone() const;
					EarthView::World::Spatial::Geometry::CCoordinateSequence clone2() const;
					/// <summary>
					/// 序列化字符串
					/// </summary>
					/// <param name=""></param>
					/// <return>字符串</return>
					EVString toString(_in EarthView::World::Spatial::Geometry::EVCoordinateType type) const;
					/// <summary>
					/// 序列化流
					/// </summary>
					/// <param name="stream">数据流</param>
					/// <return></return>
					ev_void toStream(_inout EarthView::World::Core::CDataStream & stream) const;
					ev_void toStream(_inout EarthView::World::Core::CDataStream & stream,_in EarthView::World::Spatial::Geometry::EVCoordinateType type) const;

					ev_void offset(_in ev_real64 x,_in ev_real64 y,_in ev_real64 z);
					ev_void rotate(_in ev_real64 xRef,_in ev_real64 yRef,_in ev_real64 zRef,_in ev_real64 xAngle,_in ev_real64 yAngle,_in ev_real64 zAngle);
					ev_void scale(_in ev_real64 xRef,_in ev_real64 yRef,_in ev_real64 zRef,_in ev_real64 x,_in ev_real64 y,_in ev_real64 z);

					_extfree EarthView::World::Spatial::Geometry::CCoordinateSequence* mirror(const CCoordinate* coord1,const CCoordinate* coord2) const;
					EarthView::World::Spatial::Geometry::CCoordinateSequence mirror2(const CCoordinate& coord1,const CCoordinate& coord2) const;
ev_internal:
					const ev_real64* getXPtr() const ;
					const ev_real64* getYPtr() const;
private:
					EV_DEFINE_CLASS_PRIVATE(CCoordinateSequence);
					friend class EarthView::World::Spatial::Geometry::Utility::CGeometryHelper;
				};
			}
		}
	}
}

#endif
