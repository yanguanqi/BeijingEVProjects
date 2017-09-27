#ifndef _GEOMETRY_REVOLVINGVOLUME_H_
#define _GEOMETRY_REVOLVINGVOLUME_H_

#include <core/memoryallocatedobject.h>
#include <core/name_value_pair.h>

#include <mathengine/ray.h>

#include "spatialobject/geometry/volume.h"
#include "spatialobject/geometry/linestring.h"

// using namespace EarthView::World::Core;
// using namespace EarthView::World::Spatial::Math;

namespace EarthView{
    namespace World{
        namespace Spatial{
            namespace Geometry{				

                /// <summary>
                /// 旋转体类，一个基类，定义任意线段绕固定轴旋转而成的几何体。
                /// </summary>
                class EV_GEOMETRY_DLL CRevolvingVolume : public EarthView::World::Spatial::Geometry::CVolume
                {
                public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
                    CRevolvingVolume();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="axis">旋转轴</param>
					///<param name="geometry">母线</param>
					/// <returns></returns>
                    CRevolvingVolume(const EarthView::World::Spatial::Math::CRay& axis,const EarthView::World::Spatial::Geometry::CLineString& geometry);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
                    virtual ~CRevolvingVolume();
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
                    CRevolvingVolume(EarthView::World::Core::CNameValuePairList* pList);
                public:
                    /// <summary>
                    /// 获取旋转轴
                    /// </summary>
                    /// <param name="axis">旋转轴</param>                    
                    /// <returns>旋转轴</returns>
                    const EarthView::World::Spatial::Math::CRay& getAxis() const;                    

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
                    /// 获得母线
                    /// </summary>
                    /// <param name=""></param>                    
                    /// <returns>母线</returns>
                    const EarthView::World::Spatial::Geometry::CLineString& getGeneratrix()const;
                    
					/// <summary>
					/// 获取旋转角度
					/// </summary>
					/// <param name=""></param>                    
					/// <returns>旋转角度</returns>
					const EarthView::World::Spatial::Math::CDegree& getAngle()const;	
					/// <summary>
					/// 设置旋转角度
					/// </summary>
					/// <param name="degree">旋转角度</param>                    
					/// <returns>是否设置成功</returns>
					virtual ev_bool setAngle(const EarthView::World::Spatial::Math::CDegree& degree);

					/// <summary>
					/// 更新
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
                    virtual ev_void update() const;

                private:		
                   C_DISABLE_COPY(CRevolvingVolume);
                protected:
                    mutable EarthView::World::Spatial::Math::CRay mAxis;
                    mutable EarthView::World::Spatial::Geometry::CLineString* mGeometry;
					mutable EarthView::World::Spatial::Math::CDegree mDegree;

                    mutable ev_bool mDirty;

                };
            }
        }
    }
}

#endif
