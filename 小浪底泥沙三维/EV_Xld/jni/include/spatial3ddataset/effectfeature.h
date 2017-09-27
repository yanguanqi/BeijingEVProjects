#ifndef EARTHVIEW_WORLD_SPATIAL3D_EFFECTFEATURE_H
#define EARTHVIEW_WORLD_SPATIAL3D_EFFECTFEATURE_H

#include "spatialinterface/ifeature.h"
#include "spatial3ddataset/spatial3ddatasetconfig.h"
#include "databaseutility/sqldatabase.h"
#include "spatial3ddataset/spatial3ddatasetcomdef.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				class IGeometry;
				class IEnvelope;
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
				

				/// <summary>
				/// 特效要素
				/// </summary>
				class EV_Spatial3DDataset_DLL CEffectFeature :  public EarthView::World::Spatial::GeoDataset::IFeature
				{

ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CEffectFeature(_in EarthView::World::Core::CNameValuePairList *pList);

				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CEffectFeature();

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CEffectFeature();

					/// <summary>
					/// 此Feature是否被删除
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool isDelete();

					/// <summary>
					/// 设置是否被删除
					/// </summary>
					/// <param name="val">TRUE/FALSE</param>
					/// <returns></returns>
					void setIsDelete(ev_bool val);

					/// <summary>
					/// 此Feature是否被修改
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool isUpdate();

					/// <summary>
					/// 设置是否被修改
					/// </summary>
					/// <param name="val">TRUE/FALSE</param>
					/// <returns></returns>
					void setIsUpdate(ev_bool val);

					/// <summary>
					/// 此Feature是否为新创建feature
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool isNewFeature();

					/// <summary>
					/// 设置是否为新建
					/// </summary>
					/// <param name="val">TRUE/FALSE</param>
					/// <returns></returns>
					void setIsNewFeature(ev_bool val);

					/*********************************************************************************
					基类虚接口
					**********************************************************************************/
					/// <summary>
					/// 获取EffectInstance的ID
					/// </summary>
					/// <param name=""></param>
					/// <returns>ev_uint32，返回ID</returns>
					virtual ev_uint32 getID() const;

					/// <summary>
					/// 获取GEOMETRY类别
					/// </summary>
					/// <param name=""></param>
					/// <returns>EarthView::World::Spatial::Geometry::EVGeometryType， 返回GEOMETRY类别</returns>
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const;

					/// <summary>
					/// 获取要素字段结构
					/// </summary>
					/// <param name=""></param>
					/// <returns>EarthView::World::Spatial::GeoDataset::IFields*，失败则返回空</returns>
					virtual const EarthView::World::Spatial::GeoDataset::IFields* getFieldsRef() const;

					/// <summary>
					/// 获取要素字段个数
					/// </summary>
					/// <param name=""></param>
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
					/// <param name="varValue">返回的字段的值</param>
					/// <param name="index">字段下标</param>
					/// <returns>ev_bool</returns>
					virtual ev_void getValue(_out EarthView::World::Core::CVariant & varValue,ev_uint32 index) const;

					/// <summary>
					/// 根据字段名称获取字段的值
					/// </summary>
					/// <param name="varValue">返回的字段的值</param>
					/// <param name="name">字段名称</param>
					/// <returns>ev_void</returns>
					virtual ev_void getValue(_out EarthView::World::Core::CVariant& varValue, const EVString& name) const;

					/// <summary>
					/// 获取GEOMETRY的引用
					/// </summary>
					/// <param name=""></param>
					/// <returns>EarthView::World::Spatial::Geometry::IGeometry*，返回句柄</returns>
					virtual const EarthView::World::Spatial::Geometry::IGeometry * getGeometryRef() const;

					/// <summary>
					/// 获取包围盒相关参数
					/// </summary>
					/// <param name=""></param>
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
					/// <param name="varValue">设置的字段值</param>
					/// <param name="index">字段下标</param>
					/// <returns>ev_void</returns>
					virtual ev_void setValue(const EarthView::World::Core::CVariant & varValue,ev_uint32 index);

					/// <summary>
					/// 根据下标名称设置字段值
					/// </summary>
					/// <param name="varValue">设置的字段值</param>
					/// <param name="name">字段名称</param>
					/// <returns>ev_bool</returns>
					virtual ev_void setValue(const EarthView::World::Core::CVariant & varValue, const EVString& name);

					/// <summary>
					/// 删除要素
					/// </summary>
					/// <param name=""></param>
					/// <returns>ev_bool，成功TRUE，失败FALSE</returns>
					virtual ev_bool deleteFeature();

					/// <summary>
					/// 保存修改
					/// </summary>
					/// <param name=""></param>
					/// <returns>ev_bool，成功TRUE，失败FALSE</returns>
					virtual ev_bool saveFeature();

					/// <summary>
					/// 设置数据集
					/// </summary>
					/// <param name="ref_fc">CEffectDataSet指针</param>
					/// <returns></returns>
					ev_void setDataSet(EarthView::World::Spatial::GeoDataset::IFeatureClass* ref_fc);

					/// <summary>
					/// 获得数据集指针
					/// </summary>	
					/// <param name=""></param>
					/// <returns>返回CEffectDataset指针</returns>
					EarthView::World::Spatial::GeoDataset::IFeatureClass* getDataSet();

					ev_void setEffect(ev_uint32 effectId,_in const EarthView::World::Spatial3D::Dataset::CEffectInfoVector& infoVec,_in const EarthView::World::Core::CStringArray& scriptArray);

					ev_void getEffect(_out ev_uint32& effectId,_out EarthView::World::Spatial3D::Dataset::CEffectInfoVector& vec,_out EarthView::World::Core::CStringArray& scripts);


					/// <summary>
					/// 设置Feature的字段信息
					/// </summary>
					/// <param name="fields">字段集合指针</param>
					/// <returns></returns>
					ev_void setFields(EarthView::World::Spatial::GeoDataset::IFields* ref_fields);

					/// <summary>
					/// 返回字段集合
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回字段集合指针</returns>
					EarthView::World::Spatial::GeoDataset::IFields* getFields();


					/// <summary>
					/// 克隆方法
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回克隆的指针，由外部释放</returns>
					_extfree virtual EarthView::World::Spatial::GeoDataset::IFeature* clone() const;

					private:
						ev_uint32 mID;
						EarthView::World::Spatial::GeoDataset::IFeatureClass* mpDataset;
						EarthView::World::Spatial::GeoDataset::IFields* mpFlds;
						EarthView::World::Spatial::Geometry::IGeometry* mpGeometry;
						EarthView::World::Spatial::Geometry::IEnvelope* mpEnvelop;
						EarthView::World::Spatial::GeoDataset::CPropertySet* mpPropertySet;
						
						ev_bool mIsUpdate;
						ev_bool mIsNew;
						ev_bool mIsDelete;
						ev_uint32 mEffectID;
						EarthView::World::Spatial3D::Dataset::CEffectInfoVector mEffectInfoVector;
						EarthView::World::Core::CStringArray mScripts;
						
                    friend class CEffectDataset;
					friend class CEffectFeatureIterator;
					
				};
			}//namespace
		}
	}
}

#endif
