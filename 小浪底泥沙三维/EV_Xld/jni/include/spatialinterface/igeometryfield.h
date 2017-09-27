#ifndef EARTHVIEW_WORLD_SPATIAL_GEODATASET_IGEOMETRYFIELD_H
#define EARTHVIEW_WORLD_SPATIAL_GEODATASET_IGEOMETRYFIELD_H

#include "spatialinterface/ifield.h"
#include "spatialinterface/igeometry.h"
#include "spatialinterface/ispatialreference.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{
				/// <summary>
				/// 几何体字段接口，继承于字段接口
				/// </summary>
				class EV_INTERFACE_DLL IGeometryField :
					public EarthView::World::Spatial::GeoDataset::IField
				{
				public:
					/// <summary>
					/// 默认析构函数
					/// </summary>
					virtual ~IGeometryField();
				public:
					/// <summary>
					/// 获取几何体类型
					/// </summary>
					/// <returns>几何体类型枚举</returns>
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const;
					/// <summary>
					/// 设置几何体类型
					/// </summary>
					/// <param name="type">几何体类型枚举</param>
					/// <returns></returns>
					virtual ev_void setGeometryType(EarthView::World::Spatial::Geometry::EVGeometryType type);
					/// <summary>
					/// 获取空间坐标参考
					/// </summary>
					/// <returns>空间坐标参考</returns>
					virtual const EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const;
					/// <summary>
					/// 设置空间坐标参考
					/// </summary>
					/// <param name="sr">空间坐标参考</param>
					/// <returns></returns>
					virtual ev_void setSpatialReference(const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
ev_private:
					/// <summary>
					/// 用于封装的构造函数
					/// </summary>
					IGeometryField( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					IGeometryField();
				private:
					/// <summary>
					/// 拷贝构造函数
					/// </summary>
					C_DISABLE_COPY(IGeometryField);
				};
			}
		}
	}
}

#endif
