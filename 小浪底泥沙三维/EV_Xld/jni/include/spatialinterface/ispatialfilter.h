#ifndef EARTHVIEW_WORLD_SPATIAL_GEODATASET_ISPATIALFILTER_H
#define EARTHVIEW_WORLD_SPATIAL_GEODATASET_ISPATIALFILTER_H

#include "iqueryfilter.h"
#include "igeometry.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{

				enum EVQueryOrderType
				{
					QOT_UNKNOWN                  = 0,
				};

				enum EVSpatialRelationEnum
				{
					SRE_UNKNOWN                  = 0,
				};
				///<summary>
				///空间查询过滤器
				///</summary>
				class EV_INTERFACE_DLL ISpatialFilter :
					public EarthView::World::Spatial::GeoDataset::IQueryFilter
				{
				public:		
					///<summary>
					///析构函数
					///</summary>
					virtual ~ISpatialFilter();
				public:
					///<summary>
					///获取查询几何体
					///</summary>
					///<param name=""></param>
					///<returns>返回几何体</returns>
					virtual EarthView::World::Spatial::Geometry::IGeometry* getGeometryRef() const;
					///<summary>
					///获取查询几何体拷贝
					///</summary>
					///<param name=""></param>
					///<returns>返回拷贝几何体</returns>
					virtual EarthView::World::Spatial::Geometry::IGeometry* getCopyGeometry() const;
					///<summary>
					///获取查询顺序
					///</summary>
					///<param name=""></param>
					///<returns>返回查询顺序</returns>
					virtual EarthView::World::Spatial::GeoDataset::EVQueryOrderType getQueryOrder() const;
					///<summary>
					///获取查询空间关系枚举
					///</summary>
					///<param name=""></param>
					///<returns>返回空间关系枚举</returns>
					virtual EarthView::World::Spatial::GeoDataset::EVSpatialRelationEnum getRelationEnum() const;
					///<summary>
					///获取查询空间关系矩阵
					///</summary>
					///<param name=""></param>
					///<returns>返回空间关系矩阵</returns>
					virtual EVString getSpatialRelationMatrix() const;
					///<summary>
					///设置查询几何体
					///</summary>
					///<param name="geom">几何体</param>
					///<returns></returns>
					virtual ev_void setGeometry(const EarthView::World::Spatial::Geometry::IGeometry * geom);
					///<summary>
					///设置查询顺序
					///</summary>
					///<param name="type">顺序</param>
					///<returns></returns>
					virtual ev_void setQueryOrder(EarthView::World::Spatial::GeoDataset::EVQueryOrderType type);
					///<summary>
					///设置空间关系枚举
					///</summary>
					///<param name="type">空间关系枚举</param>
					///<returns></returns>
					virtual ev_void setSpatialRelationEnum(EarthView::World::Spatial::GeoDataset::EVSpatialRelationEnum relation);
					///<summary>
					///设置空间关系矩阵
					///</summary>
					///<param name="matrix">空间关系矩阵</param>
					///<returns></returns>
					virtual ev_void setSpatialRelationMatrix(const EVString& matrix);
					
					virtual EarthView::World::Spatial::GeoDataset::IQueryFilter * clone() const;
                ev_private:
					ISpatialFilter( EarthView::World::Core::CNameValuePairList *pList );
					//virtual ISpatialFilter * clone() const;
				protected:
					ISpatialFilter();
				private:
					ISpatialFilter(ISpatialFilter& obj);
				};
			}
		}
	}
}

#endif
