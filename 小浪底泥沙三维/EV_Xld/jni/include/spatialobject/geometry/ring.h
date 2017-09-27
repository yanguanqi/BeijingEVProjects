#ifndef _GEOMETRY_RING_H_
#define _GEOMETRY_RING_H_

#include "core/memoryallocatedobject.h"
#include "core/name_value_pair.h"

#include "spatialobject/geometry/revolvingvolume.h"
#include "spatialobject/geometry/coordinate.h"

// using namespace EarthView::World::Core;
// using namespace EarthView::World::Spatial::Math;

namespace EarthView{
    namespace World{
        namespace Spatial{
            namespace Geometry{	

                /// <summary>
                /// 圆环类
                /// 有一个圆周组成，圆周上每个点的截面都是一个小圆
                /// </summary>
                class EV_GEOMETRY_DLL CRing : public EarthView::World::Spatial::Geometry::CRevolvingVolume
                {
                public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
                    CRing();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="centerPoint">环心</param>
					///<param name="thickness">圆环粗细</param>
					///<param name="radius">半径</param>
					/// <returns></returns>
                    CRing(const EarthView::World::Spatial::Geometry::CCoordinate& centerPoint,ev_real64 thickness,ev_real64 radius);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
                    virtual ~CRing();

ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
                    CRing(EarthView::World::Core::CNameValuePairList* pList);

                public:
					/// <summary>
					/// 获取球心
					/// </summary>
					/// <param name=""></param>
					/// <returns>球心</returns>
                    const EarthView::World::Spatial::Geometry::CCoordinate& getCenterPoint() const;
                    EarthView::World::Spatial::Geometry::CCoordinate& getCenterPoint();
					/// <summary>
					/// 设置球心
					/// </summary>
					/// <param name="centerPoint">球心</param>
					/// <returns></returns>
                    ev_void setCenterPoint(const EarthView::World::Spatial::Geometry::CCoordinate& centerPoint);
                    
                    /// <summary>
                    /// 获得圆环的粗细(截面小环的直径)
                    /// </summary>
                    /// <param name=""></param>                    
                    /// <returns></returns>
                    ev_real64 getThickness() const;
                    ev_real64 getThickness();
					/// <summary>
					/// 设置圆环的粗细
					/// </summary>
					/// <param name="thick">圆环的粗细</param>
					/// <returns></returns>
                    ev_void   setThickness(ev_real64 thick);
                    
                    /// <summary>
                    /// 获得圆环的半径(截面小环圆心到大圈圆心的距离)
                    /// </summary>
                    /// <param name=""></param>                    
                    /// <returns></returns>
                    ev_real64 getRadius() const;
                    ev_real64 getRadius();
					/// <summary>
					/// 设置圆环的半径
					/// </summary>
					/// <param name="radius">圆环的半径</param>
					/// <returns></returns>
                    ev_void   setRadius(ev_real64 radius);
					/// <summary>
					/// 设置旋转轴
					/// </summary>
					/// <param name="axis">旋转轴的方向</param>                    
					/// <returns>是否设置成功</returns>
                    virtual ev_bool setAxis(const EarthView::World::Spatial::Math::CRay& axis);
					/// <summary>
					/// 设置母线
					/// </summary>
					/// <param name="geometry">母线</param>                    
					/// <returns>是否设置成功</returns>
                    virtual ev_bool setGeneratrix(const EarthView::World::Spatial::Geometry::CLineString& geometry);

					/// <summary>
					/// 更新
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
                    virtual ev_void update() const;
                private:		
                    C_DISABLE_COPY(CRing);

                protected:
                    EarthView::World::Spatial::Geometry::CCoordinate mCenterPoint;
                    ev_real64 mfThickness;
                    ev_real64 mfRadius;
                };
            }
        }
    }
}

#endif
