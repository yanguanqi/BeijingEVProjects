#ifndef __EARTHVIEW_WORLD_SPATIAL3D_EFFECTDATASET_H__
#define __EARTHVIEW_WORLD_SPATIAL3D_EFFECTDATASET_H__
#pragma once

#include "spatial3ddataset/spatial3ddatasetconfig.h"
#include "spatialinterface/idatasetiterator.h"
#include "spatialinterface/ifeatureclass.h"
#include "databaseutility/sqlquery.h"
#include "spatial3ddataset/effectfeature.h"
#include "spatial3ddataset/effecttabledef.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			class EffectCacheAccessor;
			namespace Utility{

			};
			namespace Math{
				class CVector3;
			}
		};
		namespace Spatial3D{
			class CMaterialResourceInfo;

		};
		namespace Core{
		};
	}
}


namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Dataset
			{

				class CEffectDataSource;

				/// <summary>
				/// 特效数据集迭代器对象
				/// </summary>
				class EV_Spatial3DDataset_DLL CEffectDataSetIterator : public EarthView::World::Spatial::GeoDataset::IDatasetIterator
				{
ev_private:         
					/// <summary>
					/// 自动化封装使用的构造函数
					/// </summary>
					/// <param name="pList"></param>
					/// <returns></returns>
					CEffectDataSetIterator(EarthView::World::Core::CNameValuePairList *pList);
				public:					
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CEffectDataSetIterator();
					/// <summary>
					/// 下一个数据集对象，如果超出范围，这返回NULL
					/// </summary>
					/// <param name=""></param>
					/// <returns>EarthView::World::Spatial::GeoDataset::IDataset*,数据集</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataset* next();

					/// <summary>
					/// 获取迭代器中数据集的个数
					/// </summary>
					/// <param name=""></param>
					/// <returns>ev_uint32,数据集的个数</returns>
					virtual ev_uint32 getSize() const;

					/// <summary>
					/// 获取迭代器中数据集的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>EarthView::World::Spatial::GeoDataset::EVDatasetType,数据集类型</returns>
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const;
				protected:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CEffectDataSetIterator();
				private:
					/// <summary>
					/// 拷贝构造函数
					/// </summary>
					/// <param name="iterator"></param>
					/// <returns></returns>
					CEffectDataSetIterator(CEffectDataSetIterator & iterator);
				private:
					EarthView::World::Spatial3D::Dataset::CEffectDataSource* mpDatasource;
					EarthView::World::Core::Database::CSqlQuery mQuery;
					friend class CEffectDataSource;
				};


				/// <summary>
				/// 特效数据集
				/// </summary>
				class EV_Spatial3DDataset_DLL CEffectDataSet :public EarthView::World::Spatial::GeoDataset::IFeatureClass
				{
ev_private:
					/// <summary>
					/// 自动化封装使用的构造函数
					/// </summary>
					/// <param name="pList"></param>
					/// <returns></returns>
					CEffectDataSet(EarthView::World::Core::CNameValuePairList *pList);
				public :
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CEffectDataSet();
				public:
					/// <summary>
					/// 获得所有数据集下的feature
					/// </summary>
					/// <param name=""></param>
					/// <returns>EarthView::World::Spatial3D::Dataset::CEffectFeatureVector&,feature</returns>
					EarthView::World::Spatial3D::Dataset::CEffectFeatureVector& getFeatures();

					/// <summary>
					/// 当数据集表有修改时，刷新数据
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void refresh();					

					/// <summary>
					/// 取得最大的ID
					/// </summary>
					/// <returns>ev_int32,返回的编码</returns>
					ev_int32 getMaxID();

					/// <summary>
					/// 取得所属坐标系的ID编码
					/// </summary>
					/// <param name=""></param>
					/// <returns>ev_int32,返回的编码</returns>
					ev_int32 getSrid() const;

					/// <summary>
					/// 插入特效实例表
					/// </summary>
					/// <param name="val">EarthView::World::Spatial3D::Dataset::CEffectInstance值</param>
					/// <returns>ev_uint32,返回主键</returns>
					ev_uint32 addEffectInstance(EarthView::World::Spatial3D::Dataset::CEffectInstance val);

					/// <summary>
					/// 删除特效实例
					/// </summary>
					/// <param name="id">EVID</param>
					/// <returns>ev_bool,删除成功，返回true;删除失败，返回false</returns>
					ev_bool deleteEffectInstance(ev_uint32 id);	

					/// <summary>
					/// 修改特效实例
					/// </summary>
					/// <param name="val">特效实例</param>
					/// <returns>ev_bool,更新成功，返回true;更新失败，返回false</returns>
					ev_bool updateEffectInstance(EarthView::World::Spatial3D::Dataset::CEffectInstance val);	

					/// <summary>
					/// 通过主键获取特效实例
					/// </summary>
					/// <param name="id">EVID</param>
					/// <returns>EarthView::World::Spatial3D::Dataset::CEffectInstance,特效实例</returns>
					ev_bool getEffectInstanceById(ev_uint32 id,_out EarthView::World::Spatial3D::Dataset::CEffectInstance& val);

					/// <summary>
					/// 查询出所有的特效实例
					/// </summary>
					/// <param name=""></param>
					/// <returns>EarthView::World::Spatial3D::Dataset::CEffectInstanceVector,返回特效实例信息集合</returns>
					EarthView::World::Spatial3D::Dataset::CEffectInstanceVector getEffectInstances();

					/// <summary>
					///通过feature的ID从数据集里移除feature
					/// </summary>
					/// <param name="id">特效ID</param>
					/// <returns>EarthView::World::Spatial3D::Dataset::CEffectInfo*,特效信息</returns>
					ev_bool removeFeatureBuffer(ev_uint32 id);

					/// <summary>
					///根据特效ID查找EffectInfo
					/// </summary>
					/// <param name="id">特效ID</param>
					/// <param name="info">查询到的EarthView::World::Spatial3D::Dataset::CEffectInfo</param>
					/// <returns>操作是否成功</returns>
					ev_bool getEffectInfoById( ev_uint32 id ,_out EarthView::World::Spatial3D::Dataset::CEffectInfo& info);

					/// <summary>
					///根据特效ID查找相应特效资源ID集合
					/// </summary>
					/// <param name="id">特效ID</param>
					///<param name="resouceIds">特效资源ID集合</param>
					/// <returns></returns>
					ev_void getResourceIdsByEffectID(ev_uint32 effectId,_out EarthView::World::Core::CStringArray& resouceIds);

					/// <summary>
					///通过资源ID获取资源信息
					/// </summary>
					/// <param name="id">资源ID</param>
					/// <param name="val">查询到的资源的对象EarthView::World::Spatial3D::Dataset::CEffectResourceInfo</param>
					/// <returns>数据操作是否成功</returns>
					ev_bool getResourceByID(ev_uint32 id,_out EarthView::World::Spatial3D::Dataset::CEffectResourceInfo& val);

					/// <summary>
					///将EV_Effect表中相关的资源和Effect插入到数据集相关的表中
					/// </summary>
					/// <param name="effect"></param>
					/// <returns>ev_uint32,数据集Effect表中新插入的EffectID</returns>
					//ev_uint32 addEffect(EarthView::World::Spatial3D::Dataset::CEffect* effect);

					ev_uint32 addEffect(ev_uint32 effectId,_in EarthView::World::Spatial3D::Dataset::CEffectInfoVector& infoVec,_in EarthView::World::Core::CStringArray& scriptArray);
					/// <summary>
					///更新相应的Effect记录
					/// </summary>
					/// <param name="effect">Effect对象</param>
					/// <returns></returns>
					//void updateEffect(ev_uint32 effectId,EarthView::World::Spatial3D::Dataset::CEffect* effect);
					void updateEffect(ev_uint32 effectId,_in EarthView::World::Spatial3D::Dataset::CEffectInfoVector& infoVec,_in EarthView::World::Core::CStringArray& scriptArray );

					/// <summary>
					///插入一条Effect对象信息，并更新与其相关联的表
					/// </summary>
					/// <param name="info">Effect对象信息</param>
					/// <returns>ev_uint32,最后添加进去的特效ID</returns>
					ev_uint32 addEffectInfo(EarthView::World::Spatial3D::Dataset::CEffectInfo& info);

					/// <summary>
					/// 更新一条Effect对象信息
					/// </summary>
					/// <param name="info">Effect对象信息</param>
					/// <returns>ev_bool,更新成功，返回true;更新失败，返回false</returns>
					ev_bool updateEffectInfo(EarthView::World::Spatial3D::Dataset::CEffectInfo& info);


#pragma region iFeatureClass基类方法

					/// <summary>
					/// 获取特效要素类型
					/// </summary>
					/// <returns>EarthView::World::Spatial::GeoDataset::EVFeatureClassType,特效要素类类型</returns>
					virtual EarthView::World::Spatial::GeoDataset::EVFeatureClassType getFeatureClassType() const;

					/// <summary>
					/// 几何体类型
					/// </summary>
					/// <returns>EarthView::World::Spatial::Geometry::EVGeometryType,几何体类型</returns>
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const;

					/// <summary>
					///获得数据集表里的字段集合
					/// </summary>
					/// <returns></returns>
					virtual const EarthView::World::Spatial::GeoDataset::IFields* getFieldsRef() const;

					/// <summary>
					///获得字段的个数
					/// </summary>
					/// <returns></returns>
					virtual ev_uint32 getFieldCount() const;

					/// <summary>
					///通过索引返回具体的字段对象
					/// </summary>
					/// <param name="index">字段的索引号</param>
					/// <returns></returns>
					virtual const EarthView::World::Spatial::GeoDataset::IField* getFieldRef(ev_uint32 index)const;

					/// <summary>
					///通过字段名称来获得字段所在的索引号
					/// </summary>
					/// <param name="fieldName">字段名称</param>
					/// <returns>返回字段的索引号</returns>
					virtual ev_int32 findField(const EVString& fieldName) const;

					/// <summary>
					///获得Geometry字段对象（在特效数据集中，没有使用此对象，所以一直返回NULL)
					/// </summary>
					/// <returns>Geometry字段对象</returns>
					virtual const EarthView::World::Spatial::GeoDataset::IField* getGeometryField() const;

					/// <summary>
					///获得主键的字段对象
					/// </summary>
					/// <returns>字段对象</returns>
					virtual const EarthView::World::Spatial::GeoDataset::IField* getIDField() const;

					/// <summary>
					///获得空间索引类型
					/// </summary>
					/// <returns>控件索引类型枚举</returns>
					virtual EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum getSpatialIndexEnum() const;

					/// <summary>
					///通过Feature的ID来获得Feature对象
					/// </summary>
					/// <param name="id"></param>
					/// <returns></returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::IFeature* getFeature(ev_uint32 id);

					/// <summary>
					///通过筛选器来获得Feature的迭代器
					/// </summary>
					/// <param name="filter"></param>				   
					/// <returns></returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::IFeatureIterator* query(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);

					/// <summary>
					/// 按照指定条件，进行选择
					/// </summary>
					/// <param name="filter">指定空间索引类型</param>
					/// <returns>要素选择器</returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::IFeatureSelection* select(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);

					/// <summary>
					/// 获取指定查询条件的要素数目
					/// </summary>
					/// <param name="filter">查询条件</param>
					/// <returns>要素数目</returns>
					virtual ev_uint32 getFeatureCount(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);

					/// <summary>
					/// 为数据集，创建指定空间索引
					/// </summary>
					/// <param name="spaIndex">指定空间索引类型</param>
					/// <returns>ture，成功；false，失败</returns>
					virtual ev_bool createSpatialIndex(EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum spaIndex);

					/// <summary>
					/// 重建空间索引
					/// </summary>
					/// <returns>true，成功；false，失败</returns>
					virtual ev_bool rebulidSpatialIndex();

					/// <summary>
					/// 删除空间索引
					/// </summary>
					/// <returns>true，成功；false，失败</returns>
					virtual ev_bool deleteSpatialIndex();

					/// <summary>
					/// 删除指定索引的字段
					/// </summary>
					/// <param name="index">指定索引</param>
					/// <returns>ture，成功；false，失败</returns>
					virtual ev_bool deleteField(ev_uint32 index);

					/// <summary>
					/// 创建要素缓存对象，内存中创建，用于一次性写入数据集。
					/// </summary>
					/// <returns>要素对象</returns>
					virtual EarthView::World::Spatial::GeoDataset::IFeature* createFeatureBuffer();

					/// <summary>
					/// 在数据集上，插入新要素。
					/// </summary>
					/// <param name="feature">返回的要素对象</param>
					/// <returns>ture，成功；false，失败</returns>
					virtual ev_bool insert(EarthView::World::Spatial::GeoDataset::IFeature* feature);

					/// <summary>
					/// 插入已知要素到数据集中
					/// </summary>
					/// <param name="buffer">指定要素对象</param>
					/// <returns>返回插入索引</returns>
					virtual ev_uint32 insertFeatureBuffer(const EarthView::World::Spatial::GeoDataset::IFeature* feature);

					/// <summary>
					/// 更新已知要素
					/// </summary>
					/// <param name="buffer">要素对象</param>
					/// <returns>ture，成功；false，失败</returns>
					virtual ev_bool update(const EarthView::World::Spatial::GeoDataset::IFeature* feature);

					/// <summary>
					/// 获取数据集的范围
					/// </summary>
					/// <returns>包围盒对象</returns>
					virtual EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const;

					/// <summary>
					/// 获取数据集的空间坐标系参考对象
					/// </summary>
					/// <returns>空间坐标参考系对象，内部引用，无需释放</returns>
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReferenceRef() const;

					/// <summary>
					/// 删除指定ID的要素
					/// </summary>
					/// <param name="id">指定ID</param>
					/// <returns>ture，成功；false，失败</returns>
					virtual ev_bool	deleteFeature(ev_uint32 id);

					/// <summary>
					/// 创建一个数据表的代理对象。
					/// </summary>
					/// <returns></returns>
					virtual EarthView::World::Spatial::GeoDataset::ITableProxy* createTableProxy();

#pragma endregion

#pragma region iDataSet基类方法
					/// <summary>
					/// 获取数据集类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>EarthView::World::Spatial::GeoDataset::EVDatasetType,数据集类型</returns>
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const;

					/// <summary>
					/// 获取数据集名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>EVString,数据集名称</returns>
					virtual EVString getName() const;

					/// <summary>
					/// 获取数据集版本号，该方法是确认数据变更情况。
					/// </summary>
					/// <param name=""></param>
					/// <returns>ev_uint64,数据集版本号</returns>
					virtual ev_uint64 getDataVersion() const;

					/// <summary>
					/// 获取数据集描述
					/// </summary>
					/// <param name=""></param>
					/// <returns>EVString,数据集描述</returns>
					virtual EVString getDescription() const;

					/// <summary>
					/// 获取数据集更新时间
					/// </summary>
					/// <param name=""></param>
					/// <returns>EVString,数据集更新时间</returns>
					virtual EVString getUpdateTime() const;

					/// <summary>
					/// 判断是否包含子数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns>ev_bool,是，返回true;否则，返回false</returns>
					virtual ev_bool hasSubDataset() const;

					/// <summary>
					/// 获取数据集所在数据源对象，该值为引用对象指针。
					/// </summary>
					/// <param name=""></param>
					/// <returns>EarthView::World::Spatial::GeoDataset::IDataSource*,数据集所在数据源对象指针</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const;

					/// <summary>
					/// 判断数据集是否具有编辑能力
					/// </summary>
					/// <param name=""></param>
					/// <returns>ev_bool,是，返回true;否则，返回false</returns>
					virtual ev_bool canEdit() const;

					/// <summary>
					/// 判断数据集是否处在编辑状态
					/// </summary>
					/// <param name=""></param>
					/// <returns>ev_bool,是，返回true;否则，返回false</returns>
					virtual ev_bool isEditing() const;

					/// <summary>
					/// 开始编辑，用于标识数据集处在编辑状态，并根据参数，设置相关编辑对象。
					/// </summary>
					/// <param name="withUndo">确定是否开启Undo功能</param>
					/// <returns>ev_bool,开启编辑成功，返回true；否则，返回false</returns>
					virtual ev_bool startEditing(ev_bool withUndo);

					/// <summary>
					/// 结束编辑，用于标识数据集结束编辑，根据参数，确实是否保存数据。
					/// </summary>
					/// <param name="isSave">需要保存编辑数据，设置true;否则，设置false</param>
					/// <returns>ev_bool,结束编辑成功，返回true;否则，返回false</returns>
					virtual ev_bool stopEditing(ev_bool isSave);

					/// <summary>
					/// 保存数据。
					/// </summary>
					/// <param name=""></param>
					/// <returns>ev_bool,保存成功，返回true;否则，返回false</returns>
					virtual ev_bool saveEditing();

					/// <summary>
					/// 判断数据集是否处在编辑操作状态
					/// </summary>
					/// <param name=""></param>
					/// <returns>ev_bool,是，返回true;否则，返回false</returns>
					virtual ev_bool isBeginEditingOperation();

					/// <summary>
					/// 开启编辑操作，用于标识数据集编辑操作。
					/// 在调用endEditingOperation操作后，把两次操作之间的编辑，作为一次编辑状态提交。
					/// </summary>
					/// <param name=""></param>
					/// <returns>ev_bool,开启编辑操作成功，返回true;否则，返回false</returns>
					virtual ev_bool beginEditingOperation();

					/// <summary>
					/// 结束编辑操作，用于标识数据集编辑操作结束。
					/// 在调用endEditingOperation操作后，把两次操作之间的编辑，作为一次编辑状态提交。
					/// </summary>
					/// <param name="isConfirm">提交操作，设置true;否则，设置false</param>
					/// <returns>ev_bool,结束编辑操作成功，返回true;否则，返回false</returns>
					virtual ev_bool endEditingOperation(ev_bool isConfirm);
					
					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool isDatasetLocked();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool lockDataset();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void unlockDataset();
#pragma endregion
				protected:
					/// <summary>
					///特效数据的构造函数
					/// </summary>
					/// <param name="datasource">特效数据源的指针</param>
					/// <param name="name">数据集的名称</param>
					/// <param name="fields">数据集构建表所需字段的集合</param>
					/// <returns></returns>
					CEffectDataSet(EarthView::World::Spatial::GeoDataset::IDataSource* datasource, const EVString& name, EarthView::World::Spatial::GeoDataset::IFields* fields);
				private:
					EarthView::World::Spatial3D::Dataset::CEffectFeatureVector mEffectFeatures;

					/// <summary>
					/// 设置数据集的坐标系统
					/// </summary>
					/// <param name="srid">坐标系统的编码ID</param>
					/// <returns></returns>
					void setSpatialReferenceRef(ev_int32 srid);

					/// <summary>
					/// 坐标系统转换
					/// </summary>
					/// <param name="posV3">将其他的坐标系统转成WGS_84的坐标</param>
					/// <returns></returns>
					ev_void tranformCoordinate(EarthView::World::Spatial::Math::CVector3& posV3,ev_int32 sourceSRID,ev_int32 targetSRID);
				private:
					EarthView::World::Spatial::EffectCacheAccessor* pCacheAccessor;
					EarthView::World::Spatial3D::Dataset::CEffectDataSource* mpDataSource;
					EarthView::World::Core::Database::CSqlDatabase mDB;
					EarthView::World::Spatial::GeoDataset::IFields* mpFlds;
					EarthView::World::Spatial::GeoDataset::IFeatureIterator* mpIterator;
					//地理或投影坐标系ID
					ev_int32 mSRID;
					//坐标参考系
					EarthView::World::Spatial::Geometry::ISpatialReference* mpSpatialRef;
					EVString mDataSetID;
					EVString mDataSetName;
					EVString mDataSetTableName;
					ev_bool	mIsEditing;
					ev_bool	mbUndo;
					ev_uint32 mMaxID;

					friend class CEffectDataSource;	
					friend class CEffectFeature;
					friend class CEffectFeatureIterator;
				};
			}
		}
	}
}

#endif
