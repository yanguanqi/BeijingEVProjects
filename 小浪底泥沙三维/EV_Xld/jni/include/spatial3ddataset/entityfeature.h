#ifndef EARTHVIEW_WORLD_SPATIAL3D_ENTITYFEATURE_H
#define EARTHVIEW_WORLD_SPATIAL3D_ENTITYFEATURE_H

#include "spatialinterface/ifeature.h" 
#include "spatial3ddataset/spatial3ddatasetconfig.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				class IGeometry;
			}
        }
    }
}

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{
				class IFields;
				class IFeatureClass;

                class CPropertySet;

                class CFields;	
			}
        }
    }
}





namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Dataset{

				class EV_Spatial3DDataset_DLL CEntityFeature :  public EarthView::World::Spatial::GeoDataset::IFeature
				{
					friend class CEntityDataset;
					friend class CWebEntityDataset;
					friend class CWebMeshTemplateDataset;
					friend class CEntityIterator;
					friend class CEntityGeometry;
					friend class CEntityDatasetEditor;
				private:
					ev_uint32 mID;
					EarthView::World::Spatial::GeoDataset::IFeatureClass* mpDataset;
					EarthView::World::Spatial::GeoDataset::IFields* mpFlds;
					EarthView::World::Spatial::Geometry::IGeometry* mpGeometry;
					EarthView::World::Spatial::Geometry::IEnvelope* mpEnvelop;
					EarthView::World::Spatial::GeoDataset::CPropertySet* mpPropertySet;
					ev_bool mIsFromTemplate;
				protected:
					CEntityFeature();
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CEntityFeature(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					virtual ~CEntityFeature();

					/*********************************************************************************
					基类虚接口
					**********************************************************************************/
					/// <summary>
					/// 获取模型实体要素ID
					/// </summary>
					/// <returns>ev_uint32，返回ID</returns>
					virtual ev_uint32 getID() const;

					/// <summary>
					/// 是否是instance图层的feature
					/// </summary>
					/// <returns>ev_uint32，返回ID</returns>
					virtual ev_bool isTemplate() const;

					/// <summary>
					/// 获取GEOMETRY类别
					/// </summary>
					/// <returns>EarthView::World::Spatial::Geometry::EVGeometryType， 返回GEOMETRY类别</returns>
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const;

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
					virtual ev_void getValue(_out EarthView::World::Core::CVariant& value, const EVString& name) const;

					/// <summary>
					/// 获取GEOMETRY的引用
					/// </summary>
					/// <returns>EarthView::World::Spatial::Geometry::IGeometry*，返回句柄</returns>
					virtual const EarthView::World::Spatial::Geometry::IGeometry * getGeometryRef() const;

					/// <summary>
					/// 获取包围盒相关参数
					/// </summary>
					/// <returns>EarthView::World::Spatial::Geometry::IEnvelope*，失败则返回空</returns>
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const;

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
					/// 保存修改
					/// </summary>
					/// <returns>ev_bool，成功TRUE，失败FALSE</returns>
					virtual ev_bool saveFeature();

					/// <summary>
					/// 克隆
					/// </summary>
					/// <returns>克隆的要素</returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::IFeature* clone() const;

					/// <summary>
					/// 创建属性feature
					/// </summary>
					/// <returns>返回feature需要释放</returns>
					_extfree EarthView::World::Spatial::GeoDataset::IFeature* createAttrFeature();
				};
			}//namespace
		}
	}
}

#endif
