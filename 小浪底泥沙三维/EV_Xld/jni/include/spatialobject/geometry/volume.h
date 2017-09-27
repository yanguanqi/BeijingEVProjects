#ifndef _GEOMETRY_VOLUME_H_
#define _GEOMETRY_VOLUME_H_

#include <core/memoryallocatedobject.h>
#include <core/name_value_pair.h>

#include <mathengine/vector3.h>
#include <mathengine/quaternion.h>
#include <mathengine/matrix4.h>

#include "spatialobject/geometry/geometry.h"
#include "spatialobject/geometry/coordinate.h"

// using namespace EarthView::World::Core;
// using namespace EarthView::World::Spatial::Math;

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{

				/// <summary>
				/// 几何实体类
				/// 
				/// </summary>
				class EV_GEOMETRY_DLL CVolume
					:public EarthView::World::Spatial::Geometry::CGeometry
				{
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CVolume();

				public:				
					/// <summary>
					/// 获取旋转四元数
					/// </summary>
					/// <param name=""></param>
					/// <returns>旋转四元数</returns>
					virtual const EarthView::World::Spatial::Math::CQuaternion& getRotate() const;		
					/// <summary>
					/// 获取缩放参数
					/// </summary>
					/// <param name=""></param>
					/// <returns>缩放参数</returns>
					virtual const EarthView::World::Spatial::Math::CVector3& getScale() const;
					/// <summary>
					/// 获取缩平移参数
					/// </summary>
					/// <param name=""></param>
					/// <returns>平移参数</returns>
					virtual const EarthView::World::Spatial::Math::CVector3& getTranslateX() const;
					/// <summary>
					/// 获取变换矩阵
					/// </summary>
					/// <param name=""></param>
					/// <returns>变换矩阵</returns>
                    virtual EarthView::World::Spatial::Math::CMatrix4 getMatrix() const;
					
					/// <summary>
					/// 设置平移参数
					/// </summary>
					/// <param name="offset">平移参数</param>
					/// <returns></returns>
					virtual void setTranslate(const EarthView::World::Spatial::Math::CVector3 & offset);
					/// <summary>
					/// 设置缩放参数
					/// </summary>
					/// <param name="scale">缩放参数</param>
					/// <returns></returns>
					virtual void setScale(const EarthView::World::Spatial::Math::CVector3 & scale);
					/// <summary>
					/// 设置旋转参数
					/// </summary>
					/// <param name="orientation">旋转参数</param>
					/// <returns></returns>
					virtual void setRotation(const EarthView::World::Spatial::Math::CQuaternion& orientation);
					/// <summary>
					/// 设置变换矩阵
					/// </summary>
					/// <param name="matrix">变换矩阵</param>
					/// <returns></returns>
					virtual void setMatrix(const EarthView::World::Spatial::Math::CMatrix4& matrix);

					/// <summary> 
					/// 深度拷贝几何体对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>拷贝后的几何体对象</returns>
					virtual EarthView::World::Spatial::Geometry::IGeometry* clone() const;
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CVolume();
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
                    CVolume(EarthView::World::Core::CNameValuePairList* pList);
                public:
					/// <summary>
					/// 转换为笛卡尔坐标
					/// </summary>
					/// <param name="sr">参考系</param>
					/// <param name="point">源坐标</param>
					/// <returns>笛卡尔坐标</returns>
                    static EarthView::World::Spatial::Geometry::CCoordinate toCartesian(const EarthView::World::Spatial::Geometry::ISpatialReference* sr,const EarthView::World::Spatial::Geometry::CCoordinate& point);
					/// <summary>
					/// 笛卡尔坐标转为定义坐标
					/// </summary>
					/// <param name="sr">参考系</param>
					/// <param name="point">笛卡尔坐标</param>
					/// <returns>目标坐标</returns>
                    static EarthView::World::Spatial::Geometry::CCoordinate fromCartesian(const EarthView::World::Spatial::Geometry::ISpatialReference* sr,const EarthView::World::Spatial::Geometry::CCoordinate& point);
                    
					/// <summary>
					/// 获得与vector垂直的任意一个的向量
					/// </summary>
					/// <param name="vector">向量</param>
					/// <returns>垂直向量</returns>
                    static EarthView::World::Spatial::Math::CVector3 getAnApeakVector(const EarthView::World::Spatial::Math::CVector3& vector);
				private:
					C_DISABLE_COPY(CVolume);
				protected:
					mutable EarthView::World::Spatial::Math::CVector3 mPosition;
                    mutable EarthView::World::Spatial::Math::CVector3 mScale;
                    mutable EarthView::World::Spatial::Math::CQuaternion mOrientation;
				};
			}
		}
	}
}

#endif
