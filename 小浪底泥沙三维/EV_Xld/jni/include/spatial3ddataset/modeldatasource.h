#ifndef EARTHVIEW_WORLD_SPATIAL3D_MODELDATASOURCE_H
#define EARTHVIEW_WORLD_SPATIAL3D_MODELDATASOURCE_H

#include "spatial3ddataset/spatial3ddatasetconfig.h"
#include "spatial3ddataset/spatial3ddatasetcomdef.h"
#include "mathengine/axisalignedbox.h"
#include "spatialdatabase/databasedatasource.h"
#include "spatialinterface/igeometryfield.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{
				class IFields;
				class IDataMetaInfo;
				class CDataMetaInfo;
				class CDataMetaInfos;	
				class CSqlstandardization;
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			class  CEVSpatialServer;
			class CEVModelDataset;
			class CEVModelTemplateDataset;
			class CWebDataset;
		}}}

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			class CSpatial3DColumnMap;
			namespace Dataset
			{
				class CEffectDataSource;
			}
		}
	}
}

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Dataset{
				class CPropertyManager;
				class CUserTypeManager;
				class CEntityDatasetIterator;
				class CMeshTemplateDataset;
				class CModelOctreeManager;
				class CMeshEffectRefManager;
				class CEntityDatasetEditor;


				class EV_Spatial3DDataset_DLL CModelGeometryField : public EarthView::World::Spatial::GeoDataset::IGeometryField
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CModelGeometryField(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					CModelGeometryField(ev_bool isTempl);

					virtual ~CModelGeometryField();
				public:
					/// <summary>
					/// 获取几何体类型
					/// </summary>
					/// <returns>几何体类型枚举</returns>
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const;
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
				protected:
					EarthView::World::Spatial::Geometry::ISpatialReference* mpSRef;
					ev_bool mIsTempl;
				};

				class EV_Spatial3DDataset_DLL CModelDataSource : public EarthView::World::Spatial::GeoDataset::CDatabaseDataSource
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CModelDataSource(_in EarthView::World::Core::CNameValuePairList *pList);

				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					virtual ~CModelDataSource();


					/***************************************************************************
																继承的接口
					****************************************************************************/
					/// <summary>
					/// 获取数据源名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据源名称</returns>
					virtual EVString getName() const;

					/// <summary>
					/// 通过数据集名称获取某个数据集的SRID值
					/// </summary>
					/// <param name="datasetName">数据集名称</param>
					/// <returns>SRID值</returns>
					virtual ev_int32 getSRID(const EVString& datasetName);

					/// <summary>
					/// 获取数据源类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据源类型</returns>
					virtual ev_int32 getType() const;

					/// <summary>
					/// 获取指定数据集类型的数据元信息
					/// </summary>
					/// <param name="type">数据集类型</param>
					/// <returns>数据元信息集合对象</returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::IDataMetaInfos* getDatasetInfos(EarthView::World::Spatial::GeoDataset::EVDatasetType type);


					/// <summary>
					/// 获取所有模型数据集类型的数据元信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据元信息集合对象</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfos* getModelDatasetInfos();

					
					/// <summary>
					/// 打开指定数据集名称的数据集，用完后通过closedataset来释放资源
					/// </summary>
					/// <param name="name">指定名称</param>
					/// <returns>数据集对象指针，如果名字不存在，这返回null</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataset * openDataset(const EVString& name);

					/// <summary>
					/// 从网络数据源构造一个模型数据集
					/// 创建网络模型数据集时，模型数据源对象不一定存在，所以这里使用一个静态函数
					/// </summary>
					/// <param name=""></param>
					/// <returns>成功删除，返回true;否则，返回false</returns>
					static EarthView::World::Spatial::GeoDataset::IDataset* openDataset(EarthView::World::Spatial::CEVSpatialServer* pNetServer, EarthView::World::Spatial::CWebDataset* pNetDataset);
					
					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					static ev_void closeWebDataset(EarthView::World::Spatial::GeoDataset::IDataset* pdataset);					

					/// <summary>
					/// 删除指定数据集名称的数据集
					/// </summary>
					/// <param name="name">指定名称</param>
					/// <returns>成功删除，返回true;否则，返回false</returns>
					virtual ev_bool deleteDataset(const EVString& name);


					/// <summary>
					/// 序列化字符串
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EVString toXML() const;

					/// <summary>
					/// 获取数据源参数
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据源KeyValue参数</returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::IPropertySet* getPropertySet() const;


					/***************************************************************************
																自定义函数
					****************************************************************************/

					/// <summary>
					/// 获取数据库句柄
					/// </summary>
					/// <param name=""></param>
					/// <returns>EarthView::World::Core::Database::CSqlDatabase，数据库句柄</returns>
					virtual EarthView::World::Core::Database::CSqlDatabase& getDatabase();

					/// <summary>
					/// 获取属性管理器句柄
					/// </summary>
					/// <param name=""></param>
					/// <returns>EarthView::World::Spatial3D::Dataset::CPropertyManager，属性管理器句柄</returns>
					virtual EarthView::World::Spatial3D::Dataset::CPropertyManager* getPropertyManager();

					/// <summary>
					/// 获取用户类别管理器句柄
					/// </summary>
					/// <param name=""></param>
					/// <returns>EarthView::World::Spatial3D::Dataset::CUserTypeManager，用户类别管理器句柄</returns>
					virtual EarthView::World::Spatial3D::Dataset::CUserTypeManager* getUserTypeManager();

					/// <summary>
					/// 获取模型特效管理器句柄
					/// </summary>
					/// <param name=""></param>
					/// <returns>EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager，用户类别管理器句柄</returns>
					virtual EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager* getMeshEffectRefManager();

					/// <summary>
					/// 获取模板数据集句柄，每个数据源只存在一个此种数据集，内存由数据源释放
					/// </summary>
					/// <param name=""></param>
					/// <returns>EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset，模板数据集句柄</returns>
					virtual EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* getMeshTemplateDataset();

					/// <summary>
					/// 获取特效数据源
					/// </summary>
					/// <param name=""></param>
					/// <returns>EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*</returns>
					EarthView::World::Spatial3D::Dataset::CEffectDataSource* getEffectDataSource();

					/// <summary>
					/// 关闭数据集，释放数据集内存
					/// </summary>
					/// <param name="dataset">数据集句柄，此处主指实体数据集</param>
					/// <returns>ev_bool，TRUE成功/FALSE不成功</returns>
					virtual ev_bool closeDataset(EarthView::World::Spatial::GeoDataset::IDataset* dataset);

					/// <summary>
					/// 创建指定类别数据集，对于返回的指针需要通过closedataset来释放资源
					/// </summary>
					/// <param name="name">指定名称</param>
					/// <param name="attrFields">实体数据集的业务属性列表</param>
					/// <param name="istempl">是否创建模板数据集</param>
					/// <param name="srID">地理或是投影坐标系ID</param>
					/// <returns>ev_bool，创建失败返回FALSE</returns>
					virtual ev_bool createDataset(EVString name, const EarthView::World::Spatial::GeoDataset::IFields* attrFields,ev_bool istempl,ev_int32 srID);

					/// <summary>
					/// 创建FeatureClass数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns>EarthView::World::Spatial::GeoDataset::IFeatureClass的指针</returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::IFeatureClass* createFeatureClass(const EVString &name,EarthView::World::Spatial::GeoDataset::IGeometryField &geofield,const EarthView::World::Spatial::GeoDataset::IFields &fields);

					/// <summary>
					/// 从数据源获取给定名称数据集版本
					/// </summary>
					/// <param name="datasetname">数据集名称</param>
					/// <returns></returns>
					
					ev_int32 getDatasetVersionFromDatasource(const EVString& datasetname);

					/// <summary>
					/// 根据数据集名称获取数据集元数据信息
					/// </summary>
					/// <param name="datasetName">数据集名称</param>
					/// <returns>数据元信息集合对象</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getDatasetInfo(const EVString& datasetName);

					/// <summary>
					/// 获取已打开数据集
					/// </summary>
					/// <param name="datasetName">数据集名称</param>
					/// <returns>数据元信息集合对象</returns>
					virtual DataSetVector getExistDataset(const EVString& datasetName);

					/// <summary>
					/// 是否有数据集在编辑
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo>在编辑返回true，没有编辑返回false</memo>
					ev_bool isInEdit();

					/// <summary>
					/// 指定名称的数据集是否在编辑
					/// </summary>
					/// <param name="datasetname">数据集名称</param>
					/// <returns></returns>
					/// <memo>在编辑返回true，没有编辑返回false</memo>
					ev_bool isInEdit(const EVString& datasetname);

					/// <summary>
					/// 更新数据集元数据信息
					/// </summary>
					/// <param name="datasetName">需要更新的数据集名称</param>
					/// <param name="info">元数据信息</param>
					/// <returns>更新成功返回true，更新失败返回false</returns>
					virtual ev_bool updateDatasetInfo(EVString datasetName,EarthView::World::Spatial::GeoDataset::CDataMetaInfo* info);


					/// <summary>
					/// 获取数据源是否可用
					/// </summary>
					/// <param name=""></param>
					/// <returns>可用返回true， 不可用返回false</returns>

					ev_bool getDataSourceUseable(){return mbDSIsUseable;};

					/// <summary>
					/// 获取数据集是否有效
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集是否有效</returns>
					ev_bool isDatasetValid(const EVString& datasetName);

ev_private:
					/// <summary>
					/// 获取数据集图层的索引句柄
					/// </summary>
					/// <returns>索引句柄</returns>
					virtual EarthView::World::Spatial3D::Dataset::CModelOctreeManager* getSpatialIndex();

				protected:
					/// <summary>
					/// 获取数据源八叉树管理对象
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo>数据源八叉树管理对象</memo>
					EarthView::World::Spatial3D::Dataset::CModelOctreeManager* getOctreeManager() const;

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="db">数据源数据库连接对象</param>
					/// <param name="datasourcename">数据源名称</param>
					/// <returns></returns>
					
					CModelDataSource(const EarthView::World::Core::Database::CSqlDatabase &db, const EVString& datasourcename);

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="db">数据源数据库连接对象</param>
					/// <param name="dbType">数据源数据库类型</param>
					/// <param name="datasourcename">数据源名称</param>
					/// <returns></returns>
					
					CModelDataSource(const EarthView::World::Core::Database::CSqlDatabase &db,const EVString& dbType, const EVString& datasourcename);

					/// <summary>
					/// 设置数据源是否可用
					/// </summary>
					/// <param name="uesable">true可用，false不可用</param>
					/// <returns></returns>					
					ev_void setDataSourceUseable(ev_bool uesable);
					
					/// <summary>
					/// 设置序列化字符串
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void setSerializeStr(const EVString& serializeStr);

					/// <summary>
					/// 创建实体数据集八叉树表格
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo>成功返回0</memo>
					ev_int32 createEntityDataSetOctree();

					/// <summary>
					/// 创建材质资源表格
					/// </summary>
					/// <param name=""></param>
					/// <returns>成功返回0</returns>
					
					ev_int32 createMaterialResource();

					/// <summary>
					/// 创建默认属性表
					/// </summary>
					/// <param name=""></param>
					/// <returns>成功返回0</returns>
					
					ev_int32 createMeshDefaultTTR();

					/// <summary>
					/// 创建instantce表格
					/// </summary>
					/// <param name=""></param>
					/// <returns>成功返回0</returns>
					
					ev_int32 createMeshInstance();

					/// <summary>
					/// 创建instance引用表
					/// </summary>
					/// <param name=""></param>
					/// <returns>成功返回0</returns>
					
					ev_int32 createMeshInstanceRef();

					/// <summary>
					/// 创建模板表
					/// </summary>
					/// <param name=""></param>
					/// <returns>成功返回0</returns>
					
					ev_int32 createMeshTemplate();

					/// <summary>
					/// 创建用户类型记录表
					/// </summary>
					/// <param name=""></param>
					/// <returns>成功返回0</returns>
					
					ev_int32 createMeshUserType();

					/// <summary>
					/// 创建Entity八叉树表格
					/// </summary>
					/// <param name=""></param>
					/// <returns>成功返回0</returns>
					
					ev_int32 createEntityOctree(const EVString& name);

					/// <summary>
					/// 创建Entity表
					/// </summary>
					/// <param name=""></param>
					/// <returns>成功返回0</returns>
					
					ev_int32 createEntity(const EVString& name);

					/// <summary>
					/// 创建Entity材质资源表
					/// </summary>
					/// <param name=""></param>
					/// <returns>成功返回0</returns>
					
					ev_int32 createEntityMaterialResource(const EVString& name);

					/// <summary>
					/// 创建Entity mesh表
					/// </summary>
					/// <param name=""></param>
					/// <returns>成功返回0</returns>
					
					ev_int32 createEntityMesh(const EVString& name);

					/// <summary>
					/// 创建Entity mesh引用表
					/// </summary>
					/// <param name=""></param>
					/// <returns>成功返回0</returns>
					
					ev_int32 createEntityMeshRef(const EVString& name);

					/// <summary>
					/// 创建entity属性表
					/// </summary>
					/// <param name=""></param>
					/// <returns>成功返回0</returns>
					
					ev_int32 createEntityAttr(const EVString& name,const EarthView::World::Spatial::GeoDataset::IFields* attrFields);


					/// <summary>
					/// 检查模型Inst表
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void checkMeshInstTable();

					/// <summary>
					/// 更新模型Inst表别名
					/// </summary>
					/// <param name=""></param>
					/// <returns>更新成功返回true，失败返回false</returns>
					ev_bool updateMeshInstAliasName(ev_int32 instID,EVString& aliasname);

					/// <summary>
					/// 删除模型库所有表
					/// </summary>
					/// <param name=""></param>
					/// <returns>删除成功返回true， 失败返回false</returns>
					ev_bool deleteModelDBTable();

					/// <summary>
					/// 获取数据表结构
					/// </summary>
					/// <param name="isTempl">是否是模板数据集</param>
					/// <param name="name">数据集名称</param>
					/// <param name="flds">获取到的表结构</param>
					/// <returns>EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*</returns>
					void getEntityDatasetFlds(ev_bool isTempl, const EVString& name, _out EarthView::World::Spatial::GeoDataset::IFields* flds);

					/// <summary>
					/// 插入数据集元数据信息
					/// </summary>
					/// <param name="info">元数据信息</param>
					/// <returns>ev_bool</returns>
					virtual ev_uint32 insertDatasetInfo(EarthView::World::Spatial::GeoDataset::CDataMetaInfo* info);


					/// <summary>
					/// 删除数据集元数据信息
					/// </summary>
					/// <param name="info">元数据信息</param>
					/// <returns>ev_bool</returns>
					virtual ev_bool deleteDatasetInfo(EVString datasetName);


					/// <summary>
					/// 创建数据集图层的索引
					/// </summary>
					/// <returns>ev_bool</returns>
					virtual ev_bool createDatasetSpatialIndex();

					/// <summary>
					/// 当某个数据集被修改后，更新它的索引
					/// </summary>
					/// <param name="datasetID">需要更新的数据集ID</param>
					/// <param name="box">需要更新的索引数据</param>
					/// <param name="type">操作类型</param>
					/// <returns>ev_bool</returns>
					virtual void updateDatasetSpatialIndex(ev_uint32 datasetID, const EarthView::World::Spatial::Math::CAxisAlignedBox& box, EarthView::World::Spatial3D::Dataset::EntityDatasetOperType type);

					/// <summary>
					/// 写数据集信息到本地缓存
					/// </summary>
					/// <param name="datasourceName">数据源名称</param>
					/// <param name="datasetName">数据集名称</param>
					/// <param name="record">数据集信息查询记录</param>
					/// <returns>写入成功返回true，写入失败返回false</returns>
					
					ev_bool writeDatasetInfotoCache(const EVString& datasourceName, const EVString& datasetName, EarthView::World::Core::Database::CSqlRecord& record);

					/// <summary>
					/// 写数据集信息到本地缓存
					/// </summary>
					/// <param name="datasourceName">数据源名称</param>
					/// <param name="datasetName">数据集名称</param>
					/// <param name="pDatasetInfo">数据集信息对象</param>
					/// <returns>写入成功返回true，写入失败返回false</returns>
					
					ev_bool writeDatasetInfotoCache(const EVString& datasourceName, const EVString& datasetName, EarthView::World::Spatial::GeoDataset::CDataMetaInfo* pDatasetInfo);

					/// <summary>
					/// 从本地缓存读取数据集信息
					/// </summary>
					/// <param name="datasourceName">数据源名称</param>
					/// <param name="datasetName">数据集名称</param>
					/// <param name="datasetVersionInDatasource">数据集在数据源中的版本，设置 -1 忽略缓存数据的版本检查</param>
					/// <returns>数据集信息对象</returns>
					
					EarthView::World::Spatial::GeoDataset::IDataMetaInfo* readDatasetInfoFromCache(const EVString& datasourceName, const EVString& datasetName, const ev_int32 datasetVersionInDatasource);
					
					/// <summary>
					/// 清空数据集本地缓存信息
					/// </summary>
					/// <param name="datasourceName">数据源名称</param>
					/// <param name="datasetName">数据集名称</param>
					/// <returns></returns>
					
					ev_bool clearDatasetInfoFromCache(const EVString& datasourceName, const EVString& datasetName);

					/// <summary>
					/// 清空数据集本地缓存数据
					/// </summary>
					/// <param name="datasourceName">数据源名称</param>
					/// <param name="datasetName">数据集名称</param>
					/// <returns></returns>
					
					ev_bool clearDatasetDataFromCache(const EVString& datasourceName, const EVString& datasetName);

					/// <summary>
					/// 获取sql语句标准化工具句柄
					/// </summary>
					/// <param name=""></param>
					/// <returns>sql语句标准化工具句柄</returns>
					EarthView::World::Spatial::GeoDataset::CSqlstandardization* getSqlstandardization();
				private:
					EarthView::World::Spatial::GeoDataset::CSqlstandardization* mSqlStd;
					EVString mDbType;
					vector<EarthView::World::Spatial::GeoDataset::IDataset*> mDatasets;
					EarthView::World::Spatial::GeoDataset::EVDataSourceType mType;
					EarthView::World::Core::Database::CSqlDatabase mDB;

					EarthView::World::Spatial3D::Dataset::CPropertyManager* mpPropertyMnger;
					EarthView::World::Spatial3D::Dataset::CUserTypeManager* mpUserTypeMnger;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager*  mpMeshEffectRef;

					EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* mpMeshDataset;
					EarthView::World::Spatial3D::Dataset::CModelOctreeManager* mpOctreeManager;

					// 数据源是否可用	。
					// 在第一次从数据源读取信息是设置 。
					// 初始化为可用。
					ev_bool mbDSIsUseable; 
					EVString mSerializeStr ;

					//特效数据源
					EarthView::World::Spatial3D::Dataset::CEffectDataSource* mpEffectDataSource;


					friend class CModelDataSourceFactory;
					friend class CPropertyManager;
					friend class CUserTypeManager;
					friend class CMeshEffectRefManager;
					friend class CEntityDatasetEditor;
					friend class CEntityDataset;
					friend class CWebEntityDataset;
					friend class CMeshTemplateDataset;
					friend class CResourceDataset;
				};


			}//namespace
		}
	}
}
#endif
