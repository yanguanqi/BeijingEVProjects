#ifndef _GEOMETRY_ELLIPSOID_H_
#define _GEOMETRY_ELLIPSOID_H_

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
                /// 椭球体
                /// </summary>
				class EV_GEOMETRY_DLL CEllipsoid : public EarthView::World::Spatial::Geometry::CRevolvingVolume
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CEllipsoid();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="centerPoint">球心</param>
					///<param name="width">宽度</param>
					///<param name="height">高度</param>
					/// <returns></returns>
                    CEllipsoid(const EarthView::World::Spatial::Geometry::CCoordinate& centerPoint,ev_real64 width, ev_real64 height);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CEllipsoid();
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CEllipsoid(EarthView::World::Core::CNameValuePairList* pList);

				public:
					/// <summary>
					/// 获取球心
					/// </summary>
					/// <param name=""></param>
					/// <returns>球心</returns>
					const EarthView::World::Spatial::Geometry::CCoordinate* getCenterPoint() const;
					EarthView::World::Spatial::Geometry::CCoordinate* getCenterPoint();
					/// <summary>
					/// 设置球心
					/// </summary>
					/// <param name="centerPoint">球心</param>
					/// <returns></returns>
					ev_void setCenterPoint(const EarthView::World::Spatial::Geometry::CCoordinate& centerPoint);
					/// <summary>
					/// 获取宽度
					/// </summary>
					/// <param name=""></param>
					/// <returns>宽度</returns>
					ev_real64 getWidth() const;
					/// <summary>
					/// 设置宽度
					/// </summary>
					/// <param name="width">宽度</param>
					/// <returns></returns>
					ev_void setWidth(ev_real64 width) ;
					/// <summary>
					/// 获取高度
					/// </summary>
					/// <param name=""></param>
					/// <returns>高度</returns>
					ev_real64 getHeight() const;
					/// <summary>
					/// 设置高度
					/// </summary>
					/// <param name="height">高度</param>
					/// <returns></returns>
					ev_void setHeight(ev_real64 height) ;	

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
					C_DISABLE_COPY(CEllipsoid);
				protected:
					EarthView::World::Spatial::Geometry::CCoordinate mCenterPoint;
					ev_real64 mWidth;
					ev_real64 mHeight;					
				};
			}
		}
	}
}

#endif
