#ifndef EARTHVIEW_WORLD_SPATIAL3D_RESOURCEDATASET_H
#define EARTHVIEW_WORLD_SPATIAL3D_RESOURCEDATASET_H
 
#include "spatialinterface/ifeatureclass.h"
#include "spatial3ddataset/spatial3ddatasetconfig.h"
#include "spatial3ddataset/spatial3ddatasetcomdef.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{
				class IFeatureIterator;
				class IFeatureSelection;
				class IDataSource;
				class IFields;

                class CPropertySet;
                class CQueryFilter;
			}
		}
	}
}



namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Dataset{
				class CResourceDatasetEditor;

				class EV_Spatial3DDataset_DLL CResourceDataset : public EarthView::World::Spatial::GeoDataset::IFeatureClass
				{
					friend class CResourceFeature;
					friend class CEntityDataset;
					friend class CWebEntityDataset;
					friend class CMeshTemplateDataset;
					friend class CResourceGeometry;
					friend class CResourceIterator;
					friend class CWebMeshTemplateDataset;

				private:
					EVString mDatasetName;
					EVString mDatasetAliasName;
					EVString mRefMeshColumn;
					EVString mRefResColumn;
					EVString mRefTab;
					EVString mResTab;
			
					EarthView::World::Spatial::GeoDataset::IFeatureSelection* mpSelection;
					EarthView::World::Spatial::GeoDataset::IDataSource* mpDataSource;
					EarthView::World::Spatial::GeoDataset::IFields* mpFlds;
					EarthView::World::Spatial::GeoDataset::IFeatureClass* mpParentDataset;

					/******************
					数据集编辑
					******************/
					ev_bool						mIsEditing;
					ev_bool						mbUndo;
					CResourceDatasetEditor* mpEditor;

				public:
					ev_bool mIsTempl;

                ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CResourceDataset(_in EarthView::World::Core::CNameValuePairList *pList);
				protected:
					CResourceDataset(EarthView::World::Spatial::GeoDataset::IDataSource* ref_datasource, const EVString& datasetName, const  EVString& datasetAliasName, ev_bool bIsFromTemplate);
				public:	
					virtual ~CResourceDataset();


					/*********************************************************************************
					基类虚函数
					**********************************************************************************/
					/// <summary>
					/// 获取数据集名称
					/// </summary>
					/// <returns>EVString，数据集名称</returns>
					virtual EVString getName() const;

					/// <summary>
					/// 获取数据集别名
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					virtual EVString getAliasName() const;

					/// <summary>
					/// 判断数据集是否具有编辑能力
					/// </summary>
					/// <param name=""></param>
					/// <returns>是，返回true;否则，返回false</returns>
					virtual ev_bool canEdit() const;
					/// <summary>
					/// 判断数据集是否处在编辑状态
					/// </summary>
					/// <param name=""></param>
					/// <returns>是，返回true;否则，返回false</returns>
					virtual ev_bool isEditing() const;
					/// <summary>
					/// 开始编辑，用于标识数据集处在编辑状态，并根据参数，设置相关编辑对象。
					/// </summary>
					/// <param name="withUndo">确定是否开启Undo功能</param>
					/// <returns>开启编辑成功，返回true；否则，返回false</returns>
					virtual ev_bool startEditing(ev_bool withUndo);
					/// <summary>
					/// 保存编辑
					/// </summary>
					/// <param name="withUndo">确定是否开启Undo功能</param>
					/// <returns>开启编辑成功，返回true；否则，返回false</returns>
					virtual ev_bool saveEditing();
					/// <summary>
					/// 结束编辑，用于标识数据集结束编辑，根据参数，确实是否保存数据。
					/// </summary>
					/// <param name="isSave">需要保存编辑数据，设置true;否则，设置false</param>
					/// <returns>结束编辑成功，返回true;否则，返回false</returns>
					virtual ev_bool stopEditing(ev_bool isSave);

					/// <summary>
					/// 获取GEOMETRY字段
					/// </summary>
					/// <returns>EarthView::World::Spatial::GeoDataset::IField*，字段描述</returns>
					virtual const EarthView::World::Spatial::GeoDataset::IField* getGeometryField() const;


					/// <summary>
					/// 获取主键ID字段
					/// </summary>
					/// <returns>EarthView::World::Spatial::GeoDataset::IField*，字段描述</returns>
					virtual const EarthView::World::Spatial::GeoDataset::IField* getIDField() const;


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
					/// 根据MeshID和resID获取要素
					/// </summary>
					/// <param name="meshID">模型ID</param>
					/// <param name="resID">资源ID</param>
					/// <returns>EarthView::World::Spatial::GeoDataset::IFeature*，失败返回NULL，内存由内部申请，外部需要释放，可调用静态函数releaseFeautre</returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::IFeature* getFeature(ev_uint32 meshID,ev_uint32 resID) ;

					/// <summary>
					/// 根据MESHid获取FEATURE
					/// </summary>
					/// <param name="meshID">模型ID</param>
					/// <param name="resID">资源ID</param>
					/// <returns>EarthView::World::Spatial::GeoDataset::IFeature*，失败返回NULL，内存由内部申请，外部需要释放，可调用静态函数releaseFeautre</returns>
					virtual _extfree ev_bool getFeatureVector(ev_uint32 meshID, _out EarthView::World::Spatial3D::Dataset::FeatureVector & fs);

					/// <summary>
					/// 要素查询，返回迭代器遍历
					/// </summary>
					/// <param name="filter">查询条件</param>
					/// <returns>EarthView::World::Spatial::GeoDataset::IFeatureIterator*，返回迭代器指针，在迭代的时候返回的FEATURE指针内存由内部管理，每次NEXT会释放上一次FEATURE</returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::IFeatureIterator* query(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);

					/// <summary>
					/// 要素查询，返回选择器遍历
					/// </summary>
					/// <param name="filter">查询条件</param>
					/// <returns>EarthView::World::Spatial::GeoDataset::IFeatureSelection*，失败返回NULL</returns>
					EarthView::World::Spatial::GeoDataset::IFeatureSelection* select(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);

					/// <summary>
					/// 根据查询条件获取要素个数
					/// </summary>
					/// <param name="filter">查询条件</param>
					/// <returns>ev_uint32，失败返回-1</returns>
					virtual ev_uint32 getFeatureCount(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);


					/// <summary>
					/// 创建一条空的要素对象，在插入时需要创建一个这样的对象来设置字段值，内部申请空间需要外部释放realeasefeature
					/// </summary>
					/// <param name="bFromTemplate">是否创建从模板库来的FEATURE</param>
					/// <returns>EarthView::World::Spatial::GeoDataset::IFeature*，失败返回NULL</returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::IFeature* createFeatureBuffer();

					/// <summary>
					/// 直接插入一条空的要素到数据库
					/// </summary>
					/// <returns>EarthView::World::Spatial::GeoDataset::IFeature*，失败返回NULL</returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::IFeature* insert();

					/// <summary>
					/// 插入要素(不计算，重复的则为多条记录)，根据createfeaturebuffer句柄来插入
					/// </summary>
					/// <param name="buffer">将要插入的要素句柄</param>
					/// <returns>ev_uint32，返回插入成功后要素的ID</returns>
					virtual ev_uint32 insertFeatureBuffer(const EarthView::World::Spatial::GeoDataset::IFeature* buffer);

					/// <summary>
					/// 插入要素，根据createfeaturebuffer句柄来插入
					/// </summary>
					/// <param name="buffer">将要插入的要素句柄</param>
					/// <param name="bRefCount">true重复名称文件会计数，false重复的文件为多条记录</param>
					/// <returns>ev_uint32，返回插入成功后要素的ID</returns>
					virtual ev_uint32 insertFeatureBuffer(const EarthView::World::Spatial::GeoDataset::IFeature* buffer, ev_bool bRefCount);

					/// <summary>
					/// 更新要素
					/// </summary>
					/// <param name="buffer">将要更新的要素句柄，一般为查询返回的句柄</param>
					/// <returns>ev_bool，TURE成功，FALSE失败</returns>
					virtual ev_bool update(const EarthView::World::Spatial::GeoDataset::IFeature* buffer);
					/// <summary>
					/// 删除MeshID对应的一条资源
					/// </summary>
					/// <param name="meshID">MeshID/param>
					/// <param name="resID">resID/param>
					/// <returns>ev_bool，TURE成功，FALSE失败</returns>
					virtual ev_bool deleteFeature(ev_uint32 meshID, ev_uint32 resID);
					ev_bool deleteFeature(ev_uint32 meshID);

					/// <summary>
					/// 释放要素空间，静态函数
					/// </summary>
					/// <param name="feature">要素句柄</param>
					/// <returns>ev_bool，TURE成功，FALSE失败</returns>
					static ev_void releaseFeature(EarthView::World::Spatial::GeoDataset::IFeature* feature);

					/// <summary>
					/// 获取数据源句柄
					/// </summary>
					/// <returns>EarthView::World::Spatial::GeoDataset::IDataSource*，数据源句柄</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef()  const;

				protected:
					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool isWebResourceDataSource() const;

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EarthView::World::Spatial::GeoDataset::IFeature* getWebResourceFeature(ev_uint32 meshID,ev_uint32 resID);

					/// <summary>
					/// 根据MeshID和resID获取要素
					/// </summary>
					/// <param name="meshID">模型ID</param>
					/// <param name="resID">资源ID</param>
					/// <returns>EarthView::World::Spatial::GeoDataset::IFeature*，失败返回NULL，内存由内部申请，外部需要释放，可调用静态函数releaseFeautre</returns>
					virtual EarthView::World::Spatial::GeoDataset::IFeature* getFeature2(ev_uint32 meshID,ev_uint32 resID) const;

					/// <summary>
					/// 根据MESHid获取FEATURE
					/// </summary>
					/// <param name="meshID">模型ID</param>
					/// <param name="resID">资源ID</param>
					/// <returns>EarthView::World::Spatial::GeoDataset::IFeature*，失败返回NULL，内存由内部申请，外部需要释放，可调用静态函数releaseFeautre</returns>
					virtual ev_bool getFeatureVector2(ev_uint32 meshID, EarthView::World::Spatial3D::Dataset::FeatureVector& fs);


					/// <summary>
					/// 插入要素，根据createfeaturebuffer句柄来插入
					/// </summary>
					/// <param name="buffer">将要插入的要素句柄</param>
					/// <returns>ev_uint32，返回插入成功后要素的ID</returns>
					virtual ev_uint32 insertFeatureBuffer_common(const EarthView::World::Spatial::GeoDataset::IFeature* buffer, ev_bool bRefCountFlag);

					/// <summary>
					/// 更新要素
					/// </summary>
					/// <param name="buffer">将要更新的要素句柄，一般为查询返回的句柄</param>
					/// <returns>ev_bool，TURE成功，FALSE失败</returns>
					virtual ev_bool update2(const EarthView::World::Spatial::GeoDataset::IFeature* buffer);

					/// <summary>
					/// 删除MeshID对应的一条资源
					/// </summary>
					/// <param name="meshID">MeshID/param>
					/// <param name="resID">resID/param>
					/// <returns>ev_bool，TURE成功，FALSE失败</returns>
					virtual ev_bool deleteFeature2(ev_uint32 meshID, ev_uint32 resID);

					
				};

				

			}//namespace
		}
	}
}

#endif
