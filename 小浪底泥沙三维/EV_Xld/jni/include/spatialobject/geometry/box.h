#ifndef _GEOMETRY_BOX_H_
#define _GEOMETRY_BOX_H_

#include "core/memoryallocatedobject.h"
#include "core/name_value_pair.h"

#include "spatialobject/geometry/volume.h"
#include "spatialobject/geometry/coordinate.h"

// using namespace EarthView::World::Core;

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{				

				/// <summary>
				/// 长方体类
				/// 管理长方体
				/// </summary>
				class EV_GEOMETRY_DLL CBox : public EarthView::World::Spatial::Geometry::CVolume
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CBox();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name="minpoint">最小点</param>
					///<param name="maxpoint">最大点</param>
					/// <returns></returns>
					CBox(const EarthView::World::Spatial::Geometry::CCoordinate& minpoint,const EarthView::World::Spatial::Geometry::CCoordinate& maxpoint);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CBox();
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CBox(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 获取最小点
					/// </summary>
					/// <param name=""></param>
					/// <returns>最小点</returns>
					const EarthView::World::Spatial::Geometry::CCoordinate& getMinmum() const;
					/// <summary>
					/// 获取最小点
					/// </summary>
					/// <param name=""></param>
					/// <returns>最小点</returns>
					EarthView::World::Spatial::Geometry::CCoordinate& getMinmum();	
					/// <summary>
					/// 设置最小点
					/// </summary>
					/// <param name="minpoint">最小点</param>
					/// <returns></returns>
					ev_void setMinmum(const EarthView::World::Spatial::Geometry::CCoordinate& minpoint);

					/// <summary>
					/// 获取最大点
					/// </summary>
					/// <param name=""></param>
					/// <returns>最大点</returns>
					const EarthView::World::Spatial::Geometry::CCoordinate& getMaxmum() const;
					/// <summary>
					/// 获取最大点
					/// </summary>
					/// <param name=""></param>
					/// <returns>最大点</returns>
					EarthView::World::Spatial::Geometry::CCoordinate& getMaxmum();	
					/// <summary>
					/// 设置最大点
					/// </summary>
					/// <param name="maxpoint">最大点</param>
					/// <returns></returns>
					ev_void setMaxmum(const EarthView::World::Spatial::Geometry::CCoordinate& maxpoint);
										
					/// <summary>
					/// 判断是否为空
					/// </summary>
					/// <param name=""></param>
					/// <returns>是否为空</returns>
					virtual ev_bool isEmpty() const;
					/// <summary> 
					/// 深度拷贝几何体对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>拷贝后的几何体对象</returns>
					virtual EarthView::World::Spatial::Geometry::IGeometry* clone() const;

					/// <summary>
					/// 更新
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
                    ev_void update();
				protected:
					virtual CEnvelope getEnvelope() const;
				private:		
					C_DISABLE_COPY(CBox);

				protected:
					EarthView::World::Spatial::Geometry::CCoordinate mMinPoint;
					EarthView::World::Spatial::Geometry::CCoordinate mMaxPoint;
				};
			}
		}
	}
}

#endif
