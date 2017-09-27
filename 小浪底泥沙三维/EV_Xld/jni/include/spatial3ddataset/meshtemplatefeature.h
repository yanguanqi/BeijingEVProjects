#ifndef EARTHVIEW_WORLD_SPATIAL3D_MESHTEMPLATEFEATURE_H
#define EARTHVIEW_WORLD_SPATIAL3D_MESHTEMPLATEFEATURE_H

#include "spatial3ddataset/spatial3ddatasetconfig.h"
#include "spatialinterface/ifeature.h" 

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{
				class IFeatureClass;
                class CPropertySet;
			}
        }
    }
}


namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Dataset{		
				class CMeshTemplateDataset;

				class EV_Spatial3DDataset_DLL CMeshTemplateFeature : public EarthView::World::Spatial::GeoDataset::IFeature
				{
					friend class CMeshTemplateDataset;
					friend class CWebMeshTemplateDataset;
					friend class CMeshTemplateGeometry;
					friend class CMeshTemplateIterator;

				private:
					ev_uint32 mID;
					EVString mAttrType;

					///EarthView::World::Spatial::GeoDataset::IFeatureClass* mpDataset    //2013-3-5 xhl;
					EarthView::World::Spatial::GeoDataset::IFeatureClass* mpDataset;
					EarthView::World::Spatial::GeoDataset::IFields* mpFlds;
					EarthView::World::Spatial::Geometry::IGeometry* mpGeometry;
					EarthView::World::Spatial::GeoDataset::CPropertySet* mpPropertySet;
					vector<ev_uint32> mResRefs;
				    ev_uint32 mMeshIDRef;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CMeshTemplateFeature(_in EarthView::World::Core::CNameValuePairList *pList);
                protected:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					CMeshTemplateFeature();
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					virtual ~CMeshTemplateFeature();

					/*********************************************************************************
					基类虚接口
					**********************************************************************************/
					/// <summary>
					/// 获取模型实体要素ID
					/// </summary>
					/// <returns>ev_uint32，返回ID</returns>
					virtual ev_uint32 getID() const;


					/// <summary>
					/// 获取要素字段结构
					/// </summary>
					/// <returns>EarthView::World::Spatial::GeoDataset::IFields*，失败则返回空</returns>
					virtual const EarthView::World::Spatial::GeoDataset::IFields* getFieldsRef() const;

					/// <summary>
					/// 获取要素字段个数
					/// </summary>
					/// <returns>ev_uint32，返回要素字段个数</returns>
					virtual ev_uint32 getFieldCount() const;

					/// <summary>
					/// 根据字段下标获取字段结构描述
					/// </summary>
					/// <param name="index">字段下标</param>
					/// <returns>EarthView::World::Spatial::GeoDataset::IField*，失败则返回空</returns>
					virtual const EarthView::World::Spatial::GeoDataset::IField* getFieldRef(ev_uint32 index) const;

					/// <summary>
					/// 查询字段
					/// </summary>
					/// <param name="fieldName">字段名称</param>
					/// <returns>ev_int32，如果失败则返回-1，成功则返回字段下标</returns>
					virtual ev_int32 findField(const EVString& fieldName) const;

					/// <summary>
					/// 根据字段下标获取字段的值
					/// </summary>
					/// <param name="value">返回的字段的值</param>
					/// <param name="index">字段下标</param>
					/// <returns>ev_bool</returns>
					virtual ev_void getValue(_out EarthView::World::Core::CVariant & value,ev_uint32 index) const;

					/// <summary>
					/// 根据字段名称获取字段的值
					/// </summary>
					/// <param name="value">返回的字段的值</param>
					/// <param name="name">字段名称</param>
					/// <returns>ev_void</returns>
					virtual ev_void getValue(_out EarthView::World::Core::CVariant & value, const EVString& name) const;

					/// <summary>
					/// 获取GEOMETRY的引用
					/// </summary>
					/// <returns>EarthView::World::Spatial::Geometry::IGeometry*，返回句柄</returns>
					virtual const EarthView::World::Spatial::Geometry::IGeometry * getGeometryRef() const;

					/// <summary>
					/// 设置GEOMETRY，可以快速设置模型、资源二进制字段
					/// </summary>
					/// <param name="geom">GEOMETRY句柄</param>
					/// <returns>ev_void</returns>
					virtual ev_void setGeometry(const EarthView::World::Spatial::Geometry::IGeometry * geom);

					/// <summary>
					/// 根据下标设置字段值
					/// </summary>
					/// <param name="value">设置的字段值</param>
					/// <param name="index">字段下标</param>
					/// <returns>ev_void</returns>
					virtual ev_void setValue(const EarthView::World::Core::CVariant & value,ev_uint32 index);

					/// <summary>
					/// 根据下标名称设置字段值
					/// </summary>
					/// <param name="value">设置的字段值</param>
					/// <param name="name">字段名称</param>
					/// <returns>ev_bool</returns>
					virtual ev_void setValue(const EarthView::World::Core::CVariant & value, const EVString& name);
					
					/// <summary>
					/// 删除要素
					/// </summary>
					/// <returns>ev_bool，成功TRUE，失败FALSE</returns>
					virtual ev_bool deleteFeature();

					/// <summary>
					/// 绑定已入库的模型，此接口在N个INSTANCE同时引用同一个模型时使用
					/// </summary>
					/// <param name="meshID">已入库模型的ID</param>>
					/// <returns>ev_void</returns>
					virtual ev_void setMeshDataRef(ev_uint32 meshID);


					/*********************************************************************************
					模型属性相关接口
					**********************************************************************************/
					/// <summary>
					/// 获取属性类别
					/// </summary>
					/// <returns>EVString，属性类别名称</returns>
					virtual EVString getPropertyType();

					/// <summary>
					/// 获取属性类别字段结构
					/// </summary>
					/// <returns>EarthView::World::Spatial::GeoDataset::IFields*，失败返回NULL</returns>
					virtual EarthView::World::Spatial::GeoDataset::IFields* getPropertyFieldRef();

					/// <summary>
					/// 克隆
					/// </summary>
					/// <param name=""></param>
					/// <returns>克隆的要素</returns>
					
					_extfree EarthView::World::Spatial::GeoDataset::IFeature* clone() const;

				};
	
			} //namespace 
		}
	}
}
#endif

