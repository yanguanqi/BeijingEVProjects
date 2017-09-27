#ifndef _GEOMETRY_CYLINDER_H_
#define _GEOMETRY_CYLINDER_H_

#include "core/memoryallocatedobject.h"
#include "core/name_value_pair.h"

#include "spatialobject/geometry/revolvingvolume.h"
#include "spatialobject/geometry/circle.h"

// using namespace EarthView::World::Core;
// using namespace EarthView::World::Spatial::Math;

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{

				/// <summary>
				/// 圆柱体类
				/// 管理圆柱体
				/// </summary>
				class EV_GEOMETRY_DLL CColumn : public EarthView::World::Spatial::Geometry::CRevolvingVolume
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CColumn();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="bottomCircle">底圆</param>
					///<param name="height">高度</param>
					/// <returns></returns>
					CColumn(const EarthView::World::Spatial::Geometry::CCircle& bottomCircle, ev_real64 height);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CColumn();
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CColumn(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 获取底圆
					/// </summary>
					/// <param name=""></param>
					/// <returns>底圆</returns>
					const EarthView::World::Spatial::Geometry::CCircle& getCircle() const;
					/// <summary>
					/// 获取底圆
					/// </summary>
					/// <param name=""></param>
					/// <returns>底圆</returns>
					EarthView::World::Spatial::Geometry::CCircle& getCircle();	
					/// <summary>
					/// 设置底圆
					/// </summary>
					/// <param name="centerPoint">底圆</param>
					/// <returns></returns>
					ev_void setCircle(const EarthView::World::Spatial::Geometry::CCircle& centerPoint);

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
					C_DISABLE_COPY(CColumn);
				protected:
					EarthView::World::Spatial::Geometry::CCircle mBottomCircle;
					ev_real64 mHeight;                    
				};
			}
		}
	}
}

#endif
