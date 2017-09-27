#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_SPATIALOPERATOR_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_SPATIALOPERATOR_H

#ifdef list
#undef list
#endif
#ifdef vector
#undef vector
#endif
#ifdef set
#undef set
#endif
#include "geos.h" // 搞掉list、vector、set宏定义

#include "core/core_api.h"

// using namespace geos::geom;

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{

				class CGeometry;

				class CSpatialOperator
				{
				public:
					CSpatialOperator(const CGeometry* geom);
					virtual ~CSpatialOperator();
				public:
					ev_void update();
					ev_void setDirty(ev_bool isDirty);
					ev_bool isDirty() const;
					ev_bool isSimple() const;
					CGeometry* simplify();
					/// <summary> 
					/// 获取凸多边形。
					/// 目前，只支持2维几何体对象的空间关系。
					/// </summary>
					/// <param name="dimension">指定几何体维数</param>
					/// <return>如果几何体对象本身就是凸多边形，则返回自身；否则，重新获取新几何体对象。</return>
					virtual CGeometry* convexHull() const;
					/// <summary> 
					/// 获取几何体对象与指定几何体对象之间的不同部分，该不同部分只包含该几何体对象，不包含指定几何体对象
					/// 目前，只支持2维几何体对象的空间关系。
					/// </summary>
					/// <param name="geom">指定几何体对象</param>
					/// <param name="dimension">指定几何体维数</param>
					/// <return>返回不同部分的几何体</return>
					virtual CGeometry* difference(const CGeometry* geom)const;
					/// <summary> 
					/// 获取几何体对象与指定几何体对象之间最小距离。
					/// 目前，只支持2维几何体对象的空间关系。
					/// </summary>
					/// <param name="geom">指定几何体对象</param>
					/// <param name="dimension">指定几何体维数</param>
					/// <return>几何体之间的最小距离</return>
					virtual ev_real64 distance(const CGeometry* geom) const;
                    /// <summary> 
					/// 获取几何体对象与指定几何体对象之间的相交部分。
					/// 目前，只支持2维几何体对象的空间关系。
					/// </summary>
					/// <param name="geom">指定几何体对象</param>
					/// <param name="dimension">指定几何体维数</param>
					/// <return>返回不同部分的几何体</return>
					virtual CGeometry* intersects(const CGeometry* geom) const;
					/// <summary> 
					/// 获取几何体对象与指定几何体对象之间的相叠加。
					/// 目前，只支持2维几何体对象的空间关系。
					/// </summary>
					/// <param name="geom">指定几何体对象</param>
					/// <param name="dimension">指定几何体维数</param>
					/// <return>返回不同部分的几何体</return>
					virtual CGeometry* overlaps(const CGeometry* geom) const;
					/// <summary> 
					/// 获取几何体对象与指定几何体对象之间的不同部分，该部分包括该几何体对象也包括指定几何体对象
					/// 目前，只支持2维几何体对象的空间关系。
					/// </summary>
					/// <param name="geom">指定几何体对象</param>
					/// <param name="dimension">指定几何体维数</param>
					/// <return>返回不同部分的几何体</return>
					virtual CGeometry* symDifference(const CGeometry* geom) const;
					/// <summary> 
					/// 获取几何体对象与指定几何体对象合并后的新几何体对象
					/// 目前，只支持2维几何体对象的空间关系。
					/// </summary>
					/// <param name="geom">指定几何体对象</param>
					/// <param name="dimension">指定几何体维数</param>
					/// <return>返回不同部分的几何体</return>
					virtual CGeometry* unions(const CGeometry* geom) const;

					///////////////////////////////////////////////////////////////////
					/// <summary> 
					/// 判断该几何体对象是否包含指定几何体对象。
					/// 目前，只支持2维几何体对象的空间关系。
					/// </summary>
					/// <param name="geom">指定几何体对象</param>
					/// <param name="dimension">指定几何体维数</param>
					/// <return>如果包含，则返回true；否则，返回false</return>
					virtual ev_bool isContains(const CGeometry* geom) const;
					/// <summary> 
					/// 判断该几何体对象是否与指定几何体对象形状相同。
					/// 目前，只支持2维几何体对象的空间关系。
					/// </summary>
					/// <param name="geom">指定几何体对象</param>
					/// <param name="tolerance">指定误差范围</param>
					/// <param name="dimension">指定几何体维数</param>
					/// <return>如果相等，则返回true；否则，返回false</return>
					virtual ev_bool isEquals(const CGeometry* geom,ev_real64 tolerance) const;
					/// <summary> 
					/// 判断该几何体对象是否相离指定几何体对象。
					/// 目前，只支持2维几何体对象的空间关系。
					/// </summary>
					/// <param name="geom">指定几何体对象</param>
					/// <param name="dimension">指定几何体维数</param>
					/// <return>如果相离，则返回true；否则，返回false</return>
					virtual ev_bool isDisjoin(const CGeometry* geom) const;
					/// <summary> 
					/// 判断该几何体对象是否相交指定几何体对象。
					/// 目前，只支持2维几何体对象的空间关系。
					/// </summary>
					/// <param name="geom">指定几何体对象</param>
					/// <param name="dimension">指定几何体维数</param>
					/// <return>如果相交，则返回true；否则，返回false</return>
					virtual ev_bool isIntersects(const CGeometry* geom) const;
					/// <summary> 
					/// 判断该几何体对象是否被包含在指定几何体对象。
					/// 目前，只支持2维几何体对象的空间关系。
					/// </summary>
					/// <param name="geom">指定几何体对象</param>
					/// <param name="dimension">指定几何体维数</param>
					/// <return>如果被包含，则返回true；否则，返回false</return>
					virtual ev_bool isWithin(const CGeometry* geom) const;
					/// <summary> 
					/// 判断该几何体对象是否与指定几何体对象相接。
					/// 目前，只支持2维几何体对象的空间关系。
					/// </summary>
					/// <param name="geom">指定几何体对象</param>
					/// <param name="dimension">指定几何体维数</param>
					/// <return>如果相接，则返回true；否则，返回false</return>
					virtual ev_bool isTouches(const CGeometry* geom) const;
					/// <summary> 
					/// 判断该几何体对象是否跨越指定几何体对象。
					/// 目前，只支持2维几何体对象的空间关系。
					/// </summary>
					/// <param name="geom">指定几何体对象</param>
					/// <param name="dimension">指定几何体维数</param>
					/// <return>如果跨越，则返回true；否则，返回false</return>
					virtual ev_bool isCrosses(const CGeometry* geom) const;
					/// <summary> 
					/// 判断该几何体对象是否与指定几何体对象有空间关系。
					/// 空间关系，利用九交模型进行描述。
					/// 目前，只支持2维几何体对象的空间关系。
					/// </summary>
					/// <param name="geom">指定几何体对象</param>
					/// <param name="relateMatrix">空间关系九交矩阵</param>
					/// <param name="dimension">指定几何体维数</param>
					/// <return>如果有关系，则返回true；否则，返回false</return>
					virtual ev_bool isRelates(const CGeometry* geom,String relateMatrix) const;
				private:
					CSpatialOperator(const CSpatialOperator& obj);
				private:
					const CGeometry* mpGeom;

					geos::geom::Geometry * mpGeos;

					ev_bool mbIsDirty;
				};
			}
		}
	}
}

#endif
