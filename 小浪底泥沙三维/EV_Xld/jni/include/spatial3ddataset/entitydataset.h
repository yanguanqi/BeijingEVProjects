#ifndef EARTHVIEW_WORLD_SPATIAL3D_ENTITYDATASET_H
#define EARTHVIEW_WORLD_SPATIAL3D_ENTITYDATASET_H

#include "spatial3ddataset/spatial3ddatasetcomdef.h"
#include "spatialinterface/ifeatureclass.h"
#include "spatialinterface/altitudemode.h"
#include "spatial3ddataset/modeldataset.h"
#include "graphic/common.h"

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

            class CSpatial3DColumnMap;
        }
    }
}

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Dataset{
				class CModelOctreeManager;
				class CEntityDatasetEditor;
				class ModelEditOperation;

				class EV_Spatial3DDataset_DLL CEntityDataset : public CModelDataset
				{
					friend class CEntityFeature;
					friend class CModelDataSource;
					friend class CEntityGeometry;
					friend class CEntityIterator;
					friend class CEntityDatasetEditor;
					friend class CResourceDataset;
				private:
					
					IntMap mIDMap;
					
					ev_bool mIsEditDataset;
					

					EarthView::World::Spatial::Utility::EVAltitudeMode mAltitudeMode;
					ev_real64 mAltitudeValue;
			
					EarthView::World::Spatial::GeoDataset::IFeatureSelection* mpSelection;
					EarthView::World::Spatial::GeoDataset::IDataSource* mpDataSource;
					

					/******************
					数据集编辑
					******************/
					ev_bool						mIsEditing;
					ev_uint32					mMaxID;

					ev_bool						mbUndo;
					EarthView::World::Spatial3D::Dataset::CEntityDatasetEditor* mpEditor;
					
					
					// <summary>
					// 表名
					// </summary>
					EVString mAttrTable;
					EVString mEntityTable;
					EVString mMeshTable;
					EVString mResourceTable;
					EVString mMeshRefTable;
					EVString mEntityOctreeTable;

					/******************
					事务
					******************/
					ev_bool mIsTransaction;

					typedef vector<EarthView::World::Spatial3D::Dataset::ModelEditOperation> TransactionHistory;
					TransactionHistory mTransactionHistory;

					ev_bool mIsAutoCreateIndex;
					CModelOctreeManager* mSharedOctreeManager;
					ev_bool mForcedRebuildOctree;
					ev_bool mRebuildedOctree;

ev_private:
					/// <summary>
					/// 键值对构造函数
					/// </summary>
					///<returns></returns>
					CEntityDataset(_in EarthView::World::Core::CNameValuePairList* pList);
				protected:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="datasource">数据源句柄</param>
					/// <param name="name">数据集名称</param>
					/// <param name="datasetID">数据集id</param>
					/// <param name="isTempl">是否是模板数据集</param>
					/// <param name="pEnvelop">数据集包围盒</param>
					/// <param name="srid">数据集坐标系统</param>
					/// <param name="version">数据集版本</param>
					/// <returns></returns>
					
					CEntityDataset(EarthView::World::Spatial::GeoDataset::IDataSource* ref_datasource, 
						const EVString& name, 
						ev_uint32 datasetID, 
						ev_bool isTempl, 
						const EarthView::World::Spatial::Geometry::IEnvelope* pEnvelop,
						const ev_int32 srid,
						EarthView::World::Spatial::Utility::EVAltitudeMode altitudeMode,
						ev_real64 altitudeValue,
						const ev_int32 version);

				private:
					/// <summary>
					/// 初始化数据集相关的一系列表名
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					virtual ev_void initEntityDatasetTablesName();
				public:	
					virtual ~CEntityDataset();
					ev_uint64 getDataVersion() const;
					ev_bool checkVersion();

					/*********************************************************************************
					基类虚函数
					**********************************************************************************/
					/// <summary>
					/// 获取包围盒
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集包围盒对象</returns>
					virtual EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const;


					/// <summary>
					/// 获取坐标系统信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>坐标参考信息</returns>
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReferenceRef() const;

					/// <summary>
					/// 获取数据集名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集名称</returns>
					virtual EVString getName() const;

					/// <summary>
					/// 获取别名
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集别名</returns>
					
					EVString getAliasName() const;

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
					/// 开始编辑后，数据集被锁定，事务自动开启
					/// </summary>
					/// <param name="withUndo">确定是否开启Undo功能</param>
					/// <returns>开启编辑成功，返回true；否则，返回false</returns>
					virtual ev_bool startEditing(ev_bool withUndo);

					/// <summary>
					/// 保存编辑
					/// </summary>
					/// <returns>开启编辑成功，返回true；否则，返回false</returns>
					virtual ev_bool saveEditing();

					/// <summary>
					/// 结束编辑，用于标识数据集结束编辑，根据参数，确实是否保存数据。
					/// </summary>
					/// <param name="isSave">需要保存编辑数据，设置true;否则，设置false</param>
					/// <returns>结束编辑成功，返回true;否则，返回false</returns>
					virtual ev_bool stopEditing(ev_bool isSave);

					/// <summary>
					/// 
					/// 开始编辑后，数据集被锁定，无需saveEditing，直接入库，未在内部开启事务
					/// </summary>
					/// <returns>开启编辑成功，返回true；否则，返回false</returns>
					ev_bool startEditingSimple();

					/// <summary>
					/// 结束编辑，解除数据集锁定
					/// </summary>
					/// <returns>结束编辑成功，返回true;否则，返回false</returns>
					ev_bool stopEditingSimple();

					/// <summary>
					/// 是否开启事务
					/// </summary>
					/// <returns></returns>
					ev_bool isTransaction();

					/// <summary>
					/// 开始事务
					/// </summary>
					/// <returns></returns>
					virtual void transaction();

					/// <summary>
					/// 提交事务
					/// </summary>
					/// <returns></returns>
					virtual void commit();

					/// <summary>
					/// 撤消事务
					/// </summary>
					/// <returns></returns>
					virtual void rollback();
						
					/// <summary>
					/// 数据更新后，返回更新的ID
					/// </summary>
					/// <returns>更新的ID</returns>
					virtual ev_uint32 getUpdateID();

					/// <summary>
					/// 数据更新后，通过返回的实体ID取MESHID
					/// </summary>
					/// <returns>MESHID</returns>
					virtual ev_uint32 getMeshID(ev_uint32 entID);

					/// <summary>
					/// 获取ID值
					/// </summary>
					/// <param name=""></param>
					/// <returns>SRID</returns>
					virtual ev_uint32 getID() const;

					/// <summary>
					/// 获取数据集坐标参考SRID值
					/// </summary>
					/// <param name=""></param>
					/// <returns>SRID</returns>
					virtual ev_int32 getSRID() const;

					/// <summary>
					/// 获取GEOMETRY类别
					/// </summary>
					/// <returns>EarthView::World::Spatial::Geometry::EVGeometryType， 返回GEOMETRY类别</returns>
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const;

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
					/// 获取要素类别
					/// </summary>
					/// <returns>EarthView::World::Spatial::GeoDataset::EVFeatureClassType，要素类别</returns>
					virtual EarthView::World::Spatial::GeoDataset::EVFeatureClassType getFeatureClassType() const;

					/// <summary>
					/// 获取要素字段结构
					/// </summary>
					/// <returns>EarthView::World::Spatial::GeoDataset::IFields*，失败则返回空</returns>
					virtual const EarthView::World::Spatial::GeoDataset::IFields* getFieldsRef() const;

					/// <summary>
					/// 获取属性表字段结构
					/// </summary>
					/// <returns>EarthView::World::Spatial::GeoDataset::IFields*，失败则返回空</returns>
					virtual const EarthView::World::Spatial::GeoDataset::IFields* getAttrFieldsRef() const;

					/// <summary>
					/// 获取用户定义字段结构
					/// </summary>
					/// <returns>EarthView::World::Spatial::GeoDataset::IFields*，失败则返回空</returns>
					virtual const EarthView::World::Spatial::GeoDataset::IFields* getCustomerFieldsRef() const;

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
					/// 添加扩展表字段(会修改数据库表)
					/// </summary>
					/// <param name="field">字段</param>
					/// <returns>ture，成功；false，失败</returns>
					virtual ev_bool addField(const EarthView::World::Spatial::GeoDataset::IField* field);

					/// <summary>
					/// 删除扩展表指定的字段(会修改数据库表)
					/// </summary>
					/// <param name="field">字段</param>
					/// <returns>ture，成功；false，失败</returns>
					virtual ev_bool deleteField(const EarthView::World::Spatial::GeoDataset::IField* field);

					/// <summary>
					/// 根据ID获取要素
					/// </summary>
					/// <param name="id">实体ID</param>
					/// <returns>EarthView::World::Spatial::GeoDataset::IFeature*，失败返回NULL，内存由内部申请，外部需要释放，可调用静态函数releaseFeautre</returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::IFeature* getFeature(ev_uint32 id);

					/// <summary>
					/// 根据ID获取只包含基本属性的要素
					/// </summary>
					/// <param name="id">实体ID</param>
					/// <returns>EarthView::World::Spatial::GeoDataset::IFeature*，失败返回NULL，内存由内部申请，外部需要释放，可调用静态函数releaseFeautre</returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::IFeature* getAttrFeature(ev_uint32 id);

					/// <summary>
					/// 要素查询，返回迭代器遍历
					/// </summary>
					/// <param name="filter">查询条件</param>
					/// <returns>EarthView::World::Spatial::GeoDataset::IFeatureIterator*，返回迭代器指针，外部需要释放, 在迭代的时候返回的FEATURE指针内存由内部管理，每次NEXT会释放上一次FEATURE</returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::IFeatureIterator* query(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);

					/// <summary>
					/// 要素查询，返回选择器遍历
					/// </summary>
					/// <param name="filter">查询条件</param>
					/// <returns>EarthView::World::Spatial::GeoDataset::IFeatureSelection*，外部需要释放, 失败返回NULL</returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::IFeatureSelection* select(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);

					/// <summary>
					/// 根据查询条件获取要素个数
					/// </summary>
					/// <param name="filter">查询条件</param>
					/// <returns>ev_uint32，返回要素个数</returns>
					virtual ev_uint32 getFeatureCount(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);

					/// <summary>
					/// 创建一条空的要素对象，在插入时需要创建一个这样的对象来设置字段值，内部申请空间需要外部释放realeasefeature
					/// </summary>
					/// <returns>EarthView::World::Spatial::GeoDataset::IFeature*，内存由内部申请，外部需要释放,失败返回NULL</returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::IFeature* createFeatureBuffer();

					/// <summary>
					/// 创建一条空的要素对象，在插入时需要创建一个这样的对象来设置字段值，内部申请空间需要外部释放realeasefeature
					/// 不指定ID
					/// </summary>
					/// <returns>EarthView::World::Spatial::GeoDataset::IFeature*，内存由内部申请，外部需要释放,失败返回NULL</returns>
					_extfree EarthView::World::Spatial::GeoDataset::IFeature* createFeatureBufferWithoutID();

					/// <summary>
					/// 直接插入一条空的要素到数据库
					/// </summary>
					/// <returns>EarthView::World::Spatial::GeoDataset::IFeature*，内存由内部申请，外部需要释放,失败返回NULL</returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::IFeature* insert();

					/// <summary>
					/// 插入要素，根据createfeaturebuffer句柄来插入
					/// </summary>
					/// <param name="buffer">将要插入的要素句柄</param>
					/// <returns>ev_uint32，返回插入成功后要素的ID</returns>
					virtual ev_uint32 insertFeatureBuffer(const EarthView::World::Spatial::GeoDataset::IFeature* buffer);

					/// <summary>
					/// 更新要素
					/// </summary>
					/// <param name="buffer">将要更新的要素句柄，一般为查询返回的句柄</param>
					/// <returns>ev_bool，TURE成功，FALSE失败</returns>
					virtual ev_bool update(const EarthView::World::Spatial::GeoDataset::IFeature* buffer);

					/// <summary>
					/// 删除要素
					/// </summary>
					/// <param name="feature">要素句柄</param>
					/// <returns>ev_bool，TURE成功，FALSE失败</returns>
					virtual ev_bool deleteFeature(ev_uint32 id);

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
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const;

					/// <summary>
					/// 获取资源数据集句柄
					/// </summary>
					/// <param name="bFromTemplate">TRUE获取模板库的资源数据集，FALSE获取本地模型资源数据集</param>
					/// <returns>EarthView::World::Spatial::GeoDataset::IFeatureClass*，数据集句柄</returns>
					virtual EarthView::World::Spatial::GeoDataset::IFeatureClass* getResourceDatasetRef();

					/// <summary>
					/// 设置是否自动创建八叉树索引
					/// </summary>
					virtual void SetAutoRecreateIndex(ev_bool autoInit);

				ev_private:
					/// <summary>
					/// 获取八叉树管理器句柄
					/// </summary>
					/// <param name="camera">相机</param>
					/// <param name="objectIDs">可见的对象ID集</param>
					/// <returns>ev_bool，TURE成功，FALSE失败</returns>
					EarthView::World::Spatial3D::Dataset::CModelOctreeManager* getCloneSpatialIndex(ev_bool autoInit);

					/// <summary>
					/// 获取共享八叉树管理器句柄
					/// </summary>
					/// <param name="camera">相机</param>
					/// <param name="objectIDs">可见的对象ID集</param>
					/// <returns>ev_bool，TURE成功，FALSE失败</returns>
					EarthView::World::Spatial3D::Dataset::CModelOctreeManager* getSharedOctreeManager(ev_bool autoInit);

					ev_bool isRebuildedOctree();

				public:
					/// <summary>
					/// 判断数据集是否被锁
					/// </summary>
					/// <returns>ev_bool，TRUE成功/FALSE失败</returns>
					virtual ev_bool isDatasetLocked();
					
					/// <summary>
					/// 锁数据集
					/// </summary>
					/// <returns>ev_bool，TRUE成功/FALSE失败</returns>
					virtual ev_bool lockDataset();

					/// <summary>
					/// 解锁数据集
					/// </summary>
					/// <returns></returns>
					virtual ev_void unlockDataset();

					/// <summary>
					/// 创建八叉树索引，如果修改了数据集，在关闭的时候默认创建
					/// </summary>
					/// <param name="spaIndex">索引类别，目前只支持SIE_OCTREE</param>
					/// <returns>ev_bool，TRUE成功/FALSE失败</returns>
					virtual ev_bool createSpatialIndex(EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum spaIndex);

					/// <summary>
					/// 修改对象后，同步索引
					/// </summary>
					/// <param name="feature">要素句柄</param>
					/// <returns>ev_bool，TURE成功，FALSE失败</returns>
					virtual void updateSpatialIndex(const EarthView::World::Spatial::GeoDataset::IFeature* feature, EarthView::World::Spatial3D::Dataset::EntityDatasetOperType type);
					
					/// <summary>
					/// 获取数据集类别
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const;

					/// <summary>
					/// 获取最大实体ID和MESHID
					/// </summary>
					/// <returns></returns>
					ev_bool getMaxID(ev_uint32& entID, ev_uint32& meshID);

					/// <summary>
					/// 清空数据集记录
					/// </summary>
					/// <returns></returns>
					ev_bool clearDataset();

					/// <summary>
					/// 刷新数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns>0:不需要刷新 1：刷新成功 2:刷新失败</returns>	
					ev_int32 refreshDataset();

					/// <summary>
					/// 强制重建八叉树
					/// </summary>
					/// <param name=""></param>
					void setForcedRebuildOctree();

				protected:
					/// <summary>
					/// 构造函数初始化
					/// </summary>
					/// <returns></returns>
					void _init(EarthView::World::Spatial::GeoDataset::IDataSource* datasource, const EVString& name, ev_uint32 datasetID, ev_bool isTempl, const EarthView::World::Spatial::Geometry::IEnvelope* pEnvelop, const ev_int32 srid, EarthView::World::Spatial::Utility::EVAltitudeMode altitudeMode, ev_real64 altitudeValue, const ev_int32 version);

					/// <summary>
					/// 保存内存中的索引到数据库
					/// </summary>
					/// <param name="filter">查询条件</param>
					/// <returns></returns>
					virtual void saveSpatialIndex();
					
					
					/// <summary>
					/// 检查查询条件的字段
					/// </summary>
					/// <param name="fldNames">(传入传出)全部字段</param>
					/// <returns></returns>
					virtual ev_void filterAttrFields(_inout EVString& fldNames);

					/// <summary>
					/// 查询从模板库导入的要素，返回迭代器遍历
					/// </summary>
					/// <param name="filter">查询条件</param>
					/// <returns>EarthView::World::Spatial::GeoDataset::IFeatureIterator*，返回迭代器指针，在迭代的时候返回的FEATURE指针内存由内部管理，每次NEXT会释放上一次FEATURE</returns>
					virtual EarthView::World::Spatial::GeoDataset::IFeatureIterator* queryFromTemplateImport(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);

					/// <summary>
					/// 查询直接本地导入的要素，返回迭代器遍历
					/// </summary>
					/// <param name="filter">查询条件</param>
					/// <returns>EarthView::World::Spatial::GeoDataset::IFeatureIterator*，返回迭代器指针，在迭代的时候返回的FEATURE指针内存由内部管理，每次NEXT会释放上一次FEATURE</returns>
					virtual EarthView::World::Spatial::GeoDataset::IFeatureIterator* queryFromLocalImport(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);

					/// <summary>
					/// 根据ID获取要素
					/// </summary>
					/// <param name="id">实体ID</param>
					/// <returns>EarthView::World::Spatial::GeoDataset::IFeature*，失败返回NULL，内存由内部申请，外部需要释放，可调用静态函数releaseFeautre</returns>
					virtual EarthView::World::Spatial::GeoDataset::IFeature* getFeature_Base(ev_uint32 id, EarthView::World::Spatial::GeoDataset::EVQueryModeType queryMode) const;

					/// <summary>
					/// 根据ID获取要素
					/// </summary>
					/// <param name="id">实体ID</param>
					/// <returns>EarthView::World::Spatial::GeoDataset::IFeature*，失败返回NULL，内存由内部申请，外部需要释放，可调用静态函数releaseFeautre</returns>
					virtual EarthView::World::Spatial::GeoDataset::IFeature* getFeature_FromLocalImport(ev_uint32 id, EarthView::World::Spatial::GeoDataset::EVQueryModeType queryModel) const;

					/// <summary>
					/// 插入要素，根据createfeaturebuffer句柄来插入
					/// </summary>
					/// <param name="buffer">将要插入的要素句柄</param>
					/// <returns>ev_uint32，返回插入成功后要素的ID</returns>
					virtual ev_uint32 insertFeatureBuffer_FromLocalImport(const EarthView::World::Spatial::GeoDataset::IFeature* buffer);

					/// <summary>
					/// 更新要素
					/// </summary>
					/// <param name="buffer">将要更新的要素句柄，一般为查询返回的句柄</param>
					/// <returns>ev_bool，TURE成功，FALSE失败</returns>
					virtual ev_bool update_FromLocalImport(const EarthView::World::Spatial::GeoDataset::IFeature* buffer);
					
					/// <summary>
					/// 删除要素
					/// </summary>
					/// <param name="feature">要素句柄</param>
					/// <returns>ev_bool，TURE成功，FALSE失败</returns>
					virtual ev_bool deleteFeature_FromLocalImport(ev_uint32 id);

					//-------------------------------模型库------------------------------------

					/// <summary>
					/// 根据ID获取要素
					/// </summary>
					/// <param name="id">实体ID</param>
					/// <returns>EarthView::World::Spatial::GeoDataset::IFeature*，失败返回NULL，内存由内部申请，外部需要释放，可调用静态函数releaseFeautre</returns>
					virtual EarthView::World::Spatial::GeoDataset::IFeature* getFeature_FromTemplateImport(ev_uint32 id, EarthView::World::Spatial::GeoDataset::EVQueryModeType queryModel) const;

					/// <summary>
					/// 插入ENT_XXX相关要素，根据createfeaturebuffer句柄来插入
					/// </summary>
					/// <param name="buffer">将要插入的要素句柄</param>
					/// <returns>ev_uint32，返回插入成功后要素的ID</returns>
					virtual ev_uint32 insertFeatureBuffer_FromTemplateImport(const EarthView::World::Spatial::GeoDataset::IFeature* buffer);

					/// <summary>
					/// 更新要素
					/// </summary>
					/// <param name="buffer">将要更新的要素句柄，一般为查询返回的句柄</param>
					/// <returns>ev_bool，TURE成功，FALSE失败</returns>
					virtual ev_bool update_FromTemplateImport(const EarthView::World::Spatial::GeoDataset::IFeature* buffer);

					/// <summary>
					/// 删除要素
					/// </summary>
					/// <param name="feature">要素句柄</param>
					/// <returns>ev_bool，TURE成功，FALSE失败</returns>
					virtual ev_bool deleteFeature_FromTemplateImport(ev_uint32 id);

					/// <summary>
					/// 数据更新后，存储entiD对应的meshID
					/// </summary>
					/// <returns>ev_bool，TURE成功，FALSE失败</returns>
					virtual void updateIDMap(ev_uint32 entID, ev_uint32 meshID);

					/// <summary>
					/// 添加事务的操作历史
					/// </summary>
					/// <returns>ev_bool，TURE成功，FALSE失败</returns>
					virtual void addTranscationHistory(const EarthView::World::Spatial::GeoDataset::IFeature* f, EarthView::World::Spatial3D::Dataset::EntityDatasetOperType oper);

					/// <summary>
					/// 清空事务的操作历史
					/// </summary>
					/// <returns>ev_bool，TURE成功，FALSE失败</returns>
					virtual void clearTranscationHistory(ev_bool isRollBack);

					/// <summary>
					/// 获取属性表字段结构
					/// </summary>
					/// <returns></returns>
					EVString getAttrFieldNames();

					/// <summary>
					/// 删除缓存
					/// </summary>
					/// <returns></returns>
					void deleteCache();

					/// <summary>
					/// 获取模型数量
					/// </summary>
					/// <returns></returns>
					ev_uint32 getEntityCount();

					ev_bool checkOctreeValid();
				};

				class EV_Spatial3DDataset_DLL ModelEditOperation : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					ModelEditOperation(_in EarthView::World::Core::CNameValuePairList *pList)
					{
						mpOperValue = NULL;
						mOperType = EDS_DONOTHING;
					}
				public:
					ModelEditOperation()
					{
						mpOperValue = NULL;
						mOperType = EDS_DONOTHING;
					}
					EarthView::World::Spatial3D::Dataset::EntityDatasetOperType mOperType; 
					EarthView::World::Spatial::GeoDataset::IFeature* mpOperValue;
				};

				
			}//namespace
		}
	}
}

#endif
