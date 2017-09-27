#ifndef _GEOMETRY_TRIANGLEFAN_H_
#define _GEOMETRY_TRIANGLEFAN_H_

#include "core/memoryallocatedobject.h"
#include "core/name_value_pair.h"

#include "surface.h"
#include "coordinate.h"

// using namespace EarthView::World::Core;

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{

				/// <summary>
				/// 三角扇类
				/// 有第一个点和后面的按顺序每两个点构成三角扇
				/// </summary>
				class EV_GEOMETRY_DLL CTriangleFan : public EarthView::World::Spatial::Geometry::CSurface
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CTriangleFan();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CTriangleFan();
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CTriangleFan(EarthView::World::Core::CNameValuePairList* pList);
				public:				
					/// <summary>
					/// 获取点
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns>点坐标</returns>
					const EarthView::World::Spatial::Geometry::CCoordinate* getPoint(ev_uint32 index) const;
					EarthView::World::Spatial::Geometry::CCoordinate* getPoint(ev_uint32 index);

					/// <summary>
					/// 增加点
					/// </summary>
					/// <param name="point">点</param>
					/// <returns></returns>
					ev_void addPoint(const EarthView::World::Spatial::Geometry::CCoordinate* point);
					/// <summary>
					/// 删除点
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns></returns>
					ev_void removePoint(ev_uint32 index);
					/// <summary>
					/// 插入点
					/// </summary>
					/// <param name="index">索引</param>
					/// <param name="point">点</param>
					/// <returns></returns>
					ev_void insertPoint(ev_uint32 index,const EarthView::World::Spatial::Geometry::CCoordinate* point);
					/// <summary>
					/// 清除点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void clearPoints();	
					/// <summary>
					/// 获取点数量
					/// </summary>
					/// <param name=""></param>
					/// <returns>点数量</returns>
					ev_size_t getPointCount() const;					
				private:		
					CTriangleFan(const CTriangleFan& obj);
				protected:
					vector<EarthView::World::Spatial::Geometry::CCoordinate*> mPoints;
				};
			}
		}
	}
}

#endif
