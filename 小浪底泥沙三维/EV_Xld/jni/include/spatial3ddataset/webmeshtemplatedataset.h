#ifndef EARTHVIEW_WORLD_SPATIAL3D_WEB_MESHTEMPLATEDATASET_H
#define EARTHVIEW_WORLD_SPATIAL3D_WEB_MESHTEMPLATEDATASET_H

#include "spatial3ddataset/spatial3ddatasetconfig.h"
#include "spatialinterface/ifeatureclass.h"
#include "spatialserverclient/evmetaobjectinfo.h"
#include "download/globeserviceconnection.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			class CEVSpatialServer;
			class CEVBaseModelDataset;
		}}}


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{
				class IFeatureIterator;
				class IFeatureSelection;
				class IFields;
				class CPropertySet;
			}}}}


namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Dataset{


				class EV_Spatial3DDataset_DLL CWebMeshTemplateDataset : public EarthView::World::Spatial::GeoDataset::IFeatureClass
				{
					friend class CWebEntityDataset;
				private:					
					EarthView::World::Spatial::GeoDataset::IFields* mpFlds;
					EarthView::World::Spatial::CEVSpatialServer* mpNetServer;
					EarthView::World::Spatial::CEVBaseModelDataset* mpNetDataset;
					EarthView::World::Spatial::GeoDataset::IFeatureClass* mpResDataset;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CWebMeshTemplateDataset(_in EarthView::World::Core::CNameValuePairList *pList);
				protected:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="datasource">数据源对象</param>
					/// <returns></returns>

					CWebMeshTemplateDataset(EarthView::World::Spatial::CEVSpatialServer* ref_datasource,
						EarthView::World::Spatial::CEVBaseModelDataset* ref_dataset);
				public:

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_int32 getEntityObject(_in ev_int32 entityid,_out EarthView::World::Spatial::CServerTemplateEntityObject& entityObject);
					
					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EarthView::World::Spatial::Utility::EVAltitudeMode getAltitudeMode() const{return EarthView::World::Spatial::Utility::AM_UNKNOW;}

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_real64 getAltitudeValue() const
					{
						return 0;
					}

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CWebMeshTemplateDataset();

					/// <summary>
					/// 获取数据集类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集类型</returns>

					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const{return EarthView::World::Spatial::GeoDataset::DT_SERVER_MODEL_TEMPLATE_DATASET;}

					/// <summary>
					/// 获取数据集名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集名称</returns>
					EVString getName() const;

					/// <summary>
					/// 获取GEOMETRY字段
					/// </summary>
					/// <returns>EarthView::World::Spatial::GeoDataset::IField*，字段描述</returns>
					virtual const EarthView::World::Spatial::GeoDataset::IField* getGeometryField() const{return NULL;}

					/// <summary>
					/// 获取主键ID字段
					/// </summary>
					/// <returns>EarthView::World::Spatial::GeoDataset::IField*，字段描述</returns>
					virtual const EarthView::World::Spatial::GeoDataset::IField* getIDField() const{return NULL;}

					/// <summary>
					/// 获取要素字段结构
					/// </summary>
					/// <returns>EarthView::World::Spatial::GeoDataset::IFields*，失败则返回空</returns>
					virtual const EarthView::World::Spatial::GeoDataset::IFields* getFieldsRef() const;

					/// <summary>
					/// 获取要素字段个数
					/// </summary>
					/// <returns>ev_uint32，返回要素字段个数</returns>
					virtual ev_uint32 getFieldCount() const{return 0;}

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
					virtual ev_int32 findField(const EVString& fieldName) const{return 0;}

					/// <summary>
					/// 根据ID获取要素
					/// </summary>
					/// <param name="id">实体ID</param>
					/// <returns>EarthView::World::Spatial::GeoDataset::IFeature*，失败返回NULL，内存由内部申请，外部需要释放，可调用静态函数releaseFeautre</returns>
					virtual EarthView::World::Spatial::GeoDataset::IFeature* getFeature(ev_uint32 id);

					/// <summary>
					/// 要素查询，返回迭代器遍历
					/// </summary>
					/// <param name="filter">查询条件</param>
					/// <returns>EarthView::World::Spatial::GeoDataset::IFeatureIterator*，返回迭代器指针，在迭代的时候返回的FEATURE指针内存由内部管理，每次NEXT会释放上一次FEATURE</returns>
					virtual EarthView::World::Spatial::GeoDataset::IFeatureIterator* query(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter){return NULL;}

					/// <summary>
					/// 要素查询，返回选择器遍历
					/// </summary>
					/// <param name="filter">查询条件</param>
					/// <returns>EarthView::World::Spatial::GeoDataset::IFeatureSelection*，失败返回NULL</returns>
					virtual EarthView::World::Spatial::GeoDataset::IFeatureSelection* select(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter){return NULL;}

					/// <summary>
					/// 根据查询条件获取要素个数
					/// </summary>
					/// <param name="filter">查询条件</param>
					/// <returns>ev_uint32，失败返回-1</returns>
					virtual ev_uint32 getFeatureCount(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);

					/// <summary>
					/// 创建一条空的要素对象，在插入时需要创建一个这样的对象来设置字段值，内部申请空间需要外部释放realeasefeature
					/// 创建的时候给默认的属性类别名称
					/// </summary>
					/// <returns>EarthView::World::Spatial::GeoDataset::IFeature*，失败返回NULL</returns>
					virtual EarthView::World::Spatial::GeoDataset::IFeature* createFeatureBuffer();

					/// <summary>
					///创建一条空的要素对象，在插入时需要创建一个这样的对象来设置字段值，内部申请空间需要外部释放realeasefeature 
					///创建的时候可以设置属性类别名称
					/// </summary>
					/// <param name="typeName">属性类别名称，通过propertymanager创建</param>
					/// <returns>EarthView::World::Spatial::GeoDataset::IFeature*，失败返回NULL</returns>
					virtual EarthView::World::Spatial::GeoDataset::IFeature* createFeatureBuffer(const EVString& typeName){return NULL;}

					/// <summary>
					/// 直接插入一条空的要素到数据库
					/// </summary>
					/// <returns>EarthView::World::Spatial::GeoDataset::IFeature*，失败返回NULL</returns>
					virtual EarthView::World::Spatial::GeoDataset::IFeature* insert(){return NULL;}

					/// <summary>
					/// 插入要素，根据createfeaturebuffer句柄来插入
					/// </summary>
					/// <param name="buffer">将要插入的要素句柄</param>
					/// <returns>ev_uint32，返回插入成功后要素的ID</returns>
					virtual ev_uint32 insertFeatureBuffer(const EarthView::World::Spatial::GeoDataset::IFeature* buffer){return 0;}

					/// <summary>
					/// 更新要素
					/// </summary>
					/// <param name="buffer">将要更新的要素句柄，一般为查询返回的句柄</param>
					/// <returns>ev_bool，TURE成功，FALSE失败</returns>
					virtual ev_bool update(const EarthView::World::Spatial::GeoDataset::IFeature* buffer){return false;}

					/// <summary>
					/// 更新要素
					/// </summary>
					/// <param name="buffer">将要更新的要素句柄，一般为查询返回的句柄</param>
					/// <returns>ev_bool，TURE成功，FALSE失败</returns>
					virtual ev_bool deleteFeature(EarthView::World::Spatial::GeoDataset::IFeature* feature){return false;}

					/// <summary>
					/// 释放要素空间，静态函数
					/// </summary>
					/// <param name="feature">要素句柄</param>
					/// <returns>ev_bool，TURE成功，FALSE失败</returns>
					static ev_void releaseFeature(EarthView::World::Spatial::GeoDataset::IFeature* feature){}

					/// <summary>
					/// 获取数据源句柄
					/// </summary>
					/// <returns>EarthView::World::Spatial::GeoDataset::IDataSource*，数据源句柄</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const{return (EarthView::World::Spatial::GeoDataset::IDataSource*)const_cast<EarthView::World::Spatial::CEVSpatialServer *>(mpNetServer);}

					/// <summary>
					/// 获取资源数据集句柄
					/// </summary>
					/// <returns>EarthView::World::Spatial::GeoDataset::IDataSource*，数据源句柄</returns>
					virtual EarthView::World::Spatial::GeoDataset::IFeatureClass* getResourceDatasetRef();

					/// <summary>
					/// 清理dataset
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>

					ev_bool clearDataset(){return false;}

					/// <summary>
					/// 获取最大的mesh instantce id 
					/// </summary>
					/// <param name=""></param>
					/// <returns>获取的id</returns>

					ev_int32 getMaxMeshInstID(){return 0;}

					/// <summary>
					/// 获取属性关联信息
					/// </summary>
					/// <param name="meshTmplID">模型ID</param>
					/// <param name="attrType">属性类别</param>
					/// <param name="attrID">资源ID</param>
					/// <returns>ev_bool，TURE成功，FALSE失败</returns>
					virtual ev_bool getAttrRef(ev_uint32 meshTmplID, _out EVString& attrType, _out ev_uint32& attrID){return false;}

					/// <summary>
					/// 获取属性信息
					/// </summary>
					/// <param name="attrType">模型ID</param>
					/// <param name="attrID">属性类别</param>
					/// <param name="ps">键值对</param>
					/// <returns>ev_bool，TURE成功，FALSE失败</returns>
					virtual ev_bool getAttr(const EVString& attrType, ev_uint32 attrID, _inout EarthView::World::Spatial::GeoDataset::CPropertySet* ps){return false;}

private:
					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EarthView::World::Spatial::GeoDataset::IFeature* getFeature(EarthView::World::Spatial::Download::ModelDatasetFeatures::ModelDatasetFeature& feature);

				};



			} //namespace 
		}
	}
}
#endif

