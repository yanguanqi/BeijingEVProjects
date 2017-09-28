
#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_COORDINATE_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_COORDINATE_H

#include "spatialobject/config.h"
#include "geom_define.h"

//EV_DECLARE_GEOMETRY_CLASS_PRIVATE(CCoordinate);
//
//EV_DECLARE_GEOMETRY_CLASS_UTILITY(CGeometryHelper);

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				namespace Private{
					class CCoordinatePrivate;
				}
				namespace Utility{
					class CGeometryHelper;

				}
				/// <summary>
				/// 
				/// </summary>
				enum EVCoordinateType
				{
					CT_UNKNOWN                   = 0,
					CT_XY                        = 1,
					CT_XYZ                       = 2,
					CT_XYM                       = 3,
					CT_XYZM                      = 4
				};

				/// <summary>
				/// 坐标点类，用于存储坐标点X,Y,Z以及M值。
				/// </summary>
				class EV_GEOMETRY_DLL CCoordinate
					:public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <return></return>
					CCoordinate();
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <return></return>
					virtual ~CCoordinate();
					/// <summary>
					/// 参数构造函数
					/// </summary>
					/// <param name="x">坐标轴X值</param>
					/// <param name="y">坐标轴Y值</param>
					/// <return></return>
					CCoordinate(_in ev_real64 x, _in ev_real64 y);
					/// <summary>
					/// 参数构造函数
					/// </summary>
					/// <param name="x">坐标轴X值</param>
					/// <param name="y">坐标轴Y值</param>
					/// <param name="z">坐标轴Z值</param>
					/// <return></return>
					CCoordinate(_in ev_real64 x,_in ev_real64 y,_in ev_real64 z);
					/// <summary>
					/// 参数构造函数
					/// </summary>
					/// <param name="x">坐标轴X值</param>
					/// <param name="y">坐标轴Y值</param>
					/// <param name="z">坐标轴Z值</param>
					/// <param name="m">坐标轴M值</param>
					/// <return></return>
					CCoordinate(_in ev_real64 x,_in ev_real64 y,_in ev_real64 z,_in ev_real64 m);
					/// <summary>
					/// 默认拷贝构造函数
					/// </summary>
					/// <param name=""></param>
					/// <return></return>
					CCoordinate(_in const CCoordinate & obj);
					/// <summary>
					/// 默认拷贝构造函数, added by wangwei 2013-10-17
					/// </summary>
					/// <param name=""></param>
					/// <return></return>
					CCoordinate& operator=(_in const CCoordinate & obj);
ev_private:
					CCoordinate(_in EV_GEOMETY_PRIVATE_PREFIX::CCoordinatePrivate* ref_p);
ev_private:
					/// <summary>
					/// 参数构造函数
					/// </summary>
					/// <param name="pList">参数键值对</param>
					/// <return></return>
					CCoordinate(_in EarthView::World::Core::CNameValuePairList * pList);
				public:
					/// <summary>
					/// 获取坐标轴X值
					/// </summary>
					/// <param name=""></param>
					/// <return>X值</return>
					ev_real64 getX() const;
					/// <summary>
					/// 设置坐标轴X值
					/// </summary>
					/// <param name="value">X值</param>
					/// <return></return>
					ev_void setX(_in ev_real64 value);
					/// <summary>
					/// 获取坐标轴Y值
					/// </summary>
					/// <param name=""></param>
					/// <return>Y值</return>
					ev_real64 getY() const;
					/// <summary>
					/// 设置坐标轴Y值
					/// </summary>
					/// <param name="value">Y值</param>
					/// <return></return>
					ev_void setY(_in ev_real64 value);
					/// <summary>
					/// 获取坐标轴Z值
					/// </summary>
					/// <param name=""></param>
					/// <return>Z值</return>
					ev_real64 getZ() const;
					/// <summary>
					/// 设置坐标轴Z值
					/// </summary>
					/// <param name="value">Z值</param>
					/// <return></return>
					ev_void setZ(_in ev_real64 value);
					/// <summary>
					/// 获取坐标轴M值
					/// </summary>
					/// <param name=""></param>
					/// <return>M值</return>
					ev_real64 getM() const;
					/// <summary>
					/// 设置坐标轴M值
					/// </summary>
					/// <param name="value">M值</param>
					/// <return></return>
					ev_void setM(_in ev_real64 value);
					/// <summary>
					/// 计算两点间距离
					/// </summary>
					/// <param name="coord">指定坐标点</param>
					/// <return>两点间距离</return>
					virtual ev_real64 distance(_in const CCoordinate& coord) const;
					/// <summary>
					/// 计算两点间在坐标XY上的投影距离
					/// </summary>
					/// <param name="coord">指定坐标点</param>
					/// <return>两点间的投影距离</return>
					virtual ev_real64 distanceOnPlane(_in const CCoordinate& coord) const;
					/// <summary>
					/// 计算两点间在坐标XY上的投影距离,等同于distanceOnPlane
					/// </summary>
					/// <param name="coord">指定坐标点</param>
					/// <return>两点间的投影距离</return>
					virtual ev_real64 distanceXY(_in const CCoordinate& coord) const; // added by wangwei
					/// <summary>
					/// 判断两点位置是否相等
					/// </summary>
					/// <param name="coord">指定点</param>
					/// <param name="tolerance">指定误差范围</param>
					/// <return>位置相等，则返回true;否则，返回false</return>
					virtual ev_bool equals(_in const CCoordinate& coord,_in ev_real64 tolerance) const;
					/// <summary>
					/// 深度拷贝
					/// </summary>
					/// <param name=""></param>
					/// <return>坐标点</return>
					virtual _extfree CCoordinate* clone() const;
					/// <summary>
					/// 深度拷贝
					/// </summary>
					/// <param name=""></param>
					/// <return>坐标点</return>
					virtual CCoordinate clone2() const;
					/// <summary>
					/// 获取指定坐标点类型的字符串形式，如果type == 0，则默认为CT_XY。
					/// </summary>
					/// <param name="type">坐标点类型</param>
					/// <return>坐标点字符串，用“,”隔开</return>
					virtual EVString toString(_in EarthView::World::Spatial::Geometry::EVCoordinateType type) const;
					/// <summary>
					/// 把坐标点序列化数据流。
					/// </summary>
					/// <param name="stream">序列化流</param>
					/// <return></return>
					virtual ev_void toStream(_inout EarthView::World::Core::CDataStream & stream) const;
					/// <summary>
					/// 平移几何体，默认提供中心点平移
					/// </summary>
					/// <param name="x">X轴方向平移值</param>
					/// <param name="y">Y轴方向平移值</param>
					/// <param name="z">Z轴方向平移值</param>
					/// <return></return>
					virtual ev_void offset(_in ev_real64 x,_in ev_real64 y,_in ev_real64 z);
					/// <summary>
					/// 旋转几何体，默认提供包围盒中心点旋转
					/// </summary>
					/// <param name="xRef">旋转参考点X值</param>
					/// <param name="yRef">旋转参考点Y值</param>
					/// <param name="zRef">旋转参考点Z值</param>
					/// <param name="x">X轴方向旋转角度</param>
					/// <param name="y">Y轴方向旋转角度</param>
					/// <param name="z">Z轴方向旋转角度</param>
					/// <return></return>
					virtual ev_void rotate(_in ev_real64 xRef,_in ev_real64 yRef,_in ev_real64 zRef,_in ev_real64 xAngle,_in ev_real64 yAngle,_in ev_real64 zAngle);
					/// <summary>
					/// 旋转几何体，默认提供包围盒中心点缩放
					/// </summary>
					/// <param name="x">X轴方向缩放比例，[-1,1]</param>
					/// <param name="y">Y轴方向缩放比例，[-1,1]</param>
					/// <param name="z">Z轴方向缩放比例，[-1,1]</param>
					/// <return></return>
					virtual ev_void scale(_in ev_real64 xRef,_in ev_real64 yRef,_in ev_real64 zRef,_in ev_real64 x,_in ev_real64 y,_in ev_real64 z);
				
					virtual _extfree CCoordinate* mirror(const CCoordinate* coord1,const CCoordinate* coord2) const;

					virtual CCoordinate mirror2(const CCoordinate& coord1,const CCoordinate& coord2) const; // added by wangwei			

				private:
					EV_DEFINE_CLASS_PRIVATE(CCoordinate);
					friend class EarthView::World::Spatial::Geometry::Utility::CGeometryHelper;
				};
			}
		}
	}
}

#endif
