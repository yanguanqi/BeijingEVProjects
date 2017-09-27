#ifndef EARTHVIEW_WORLD_SPATIAL3D_EFFECTDATASOURCE_H
#define EARTHVIEW_WORLD_SPATIAL3D_EFFECTDATASOURCE_H
#include "spatial3ddataset/spatial3ddatasetcomdef.h"
#include "spatial3ddataset/spatial3ddatasetconfig.h"
#include "spatialdatabase/databasedatasource.h"
#include "spatial3ddataset/effecttabledef.h"
#include "databaseutility/sqlquery.h"
#include "spatial3ddataset/modeldatasource.h"
#include "spatialdatabase/fields.h"
#include "spatialinterface/igeometryfield.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			class EffectCacheAccessor;
			namespace GeoDataset{
				class IFields;
				class CDataMetaInfo;
				class CDataMetaInfos;		

				class CSqlstandardization;
			}
		}
		namespace Spatial3D{
			namespace Dataset
			{
				class CEffectInfo;
			}
		};
	}
}


namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Dataset{
				class CEffectDataSet;				
				class CEffectDataSourceFactory;
				class CEffectDataSetIterator;

				class EV_Spatial3DDataset_DLL CEffectGeometryField : public EarthView::World::Spatial::GeoDataset::IGeometryField
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CEffectGeometryField(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					CEffectGeometryField();

					virtual ~CEffectGeometryField();
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
				};

				/// <summary>
				/// 特效数据源类
				/// </summary>
				class EV_Spatial3DDataset_DLL CEffectDataSource : public EarthView::World::Spatial::GeoDataset::CDatabaseDataSource
				{
					friend class EarthView::World::Spatial3D::Dataset::CModelDataSource;

ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CEffectDataSource(EarthView::World::Core::CNameValuePairList *pList);

				public:

					/// <summary>
					///析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CEffectDataSource();
					/// <summary>
					/// 获取EV_EFFECT表里所有的特效信息。
					/// </summary>
					/// <param name="vec">传出的特效信息集合</param>
					/// <returns>操作是否成功</returns>
					ev_bool getEffectInfos(_out EarthView::World::Spatial3D::Dataset::CEffectInfoVector& vec);

					/// <summary>
					/// 获取某个分类下的特效集合
					/// </summary>
					/// <param name="userTypeCode">用户分类号</param>
					/// <param name="vec">传出的特效信息集合</param>
					/// <returns>操作是否成功</returns>
					ev_bool getEffectInfos(const EVString& userTypeCode,_out EarthView::World::Spatial3D::Dataset::CEffectInfoVector& vec);

					/// <summary>
					/// 判断是否有特效数据源在编辑状态
					/// </summary>				
					/// <returns>是否在编辑</returns>					
					ev_bool isInEdit();

					/// <summary>
					/// 判断数据集是不是在编辑状态
					/// </summary>
					/// <param name="datasetname">数据集名称</param>
					/// <returns>是否在编辑</returns>					
					ev_bool isInEdit(const EVString& datasetname);
				public:
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
					/// 获取数据源类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据源类型</returns>
					virtual ev_int32 getType() const;

					/// <summary>
					/// 获取指定数据集类型的数据元信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>EarthView::World::Spatial::GeoDataset::IDataMetaInfos*,数据元信息集合对象</returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::IDataMetaInfos* getDatasetInfos(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type);

					
					/// <summary>
					/// 打开指定数据集名称的数据集，用完后通过closedataset来释放资源
					/// </summary>
					/// <param name="name">指定名称</param>
					/// <returns>EarthView::World::Spatial::GeoDataset::IDataset*,数据集对象指针，如果名字不存在，这返回null</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataset* openDataset(const EVString& name);

					/// <summary>
					/// 删除指定数据集名称的数据集
					/// </summary>
					/// <param name="name">数据集名称</param>
					/// <returns>ev_bool,成功删除，返回true;否则，返回false</returns>
					virtual ev_bool deleteDataset(const EVString& name);

					/// <summary>
					/// 序列化字符串
					/// </summary>
					/// <param name=""></param>
					/// <returns>EVString,XML</returns>
					virtual EVString toXML() const;

					/// <summary>
					/// 获取数据库句柄
					/// </summary>
					/// <returns>EarthView::World::Core::Database::CSqlDatabase&,数据库句柄</returns>
					virtual EarthView::World::Core::Database::CSqlDatabase& getDatabase();
					
					/// <summary>
					/// 关闭数据集，释放数据集内存
					/// </summary>
					/// <param name="dataset">数据集句柄，此处主指实体数据集</param>
					/// <returns>ev_bool,关闭成功，返回true;关闭失败，返回false</returns>
					virtual ev_bool closeDataset(EarthView::World::Spatial::GeoDataset::IDataset* dataset);

					/// <summary>
					/// 判断实体数据集是否存在
					/// </summary>
					/// <param name=""></param>
					/// <returns>ev_bool,存在，返回true;不存在，返回false</returns>
					virtual ev_bool existDataset(const EVString& name);


					/// <summary>
					/// 创建指定类别数据集，对于返回的指针需要通过closedataset来释放资源
					/// </summary>
					/// <param name="name">指定名称</param>					
					/// <returns>ev_bool,创建成功，返回true;创建失败，返回false</returns>
					virtual ev_bool createDataset(const EVString& name,ev_int32 srid = 0);

					/// <summary>
					/// 创建FeatureClass数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns>EarthView::World::Spatial::GeoDataset::IFeatureClass的指针</returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::IFeatureClass* createFeatureClass(const EVString &name,EarthView::World::Spatial::GeoDataset::IGeometryField &geofield,const EarthView::World::Spatial::GeoDataset::IFields &fields);

					/// <summary>
					/// 插入数据集元数据信息
					/// </summary>
					/// <param name="info">元数据信息</param>
					/// <returns>ev_uint32,返回最后一个添加的数据的ID</returns>
					virtual ev_uint32 insertDatasetInfo(EarthView::World::Spatial::GeoDataset::CDataMetaInfo* info);

					/// <summary>
					/// 更新数据集元数据信息
					/// </summary>
					/// <param name="info">元数据信息</param>
					/// <returns>ev_bool,更新成功，返回true;更新失败，返回false</returns>
					virtual ev_bool updateDatasetInfo(EarthView::World::Spatial::GeoDataset::CDataMetaInfo* info);

					/// <summary>
					/// 删除数据集元数据信息
					/// </summary>
					/// <param name="datasetName">数据集名称</param>
					/// <param name="dsType">数据集类型</param>
					/// <returns>ev_bool,删除成功，返回true;删除失败，返回false</returns>
					virtual ev_bool deleteDatasetInfo(EVString datasetName,EarthView::World::Spatial::GeoDataset::EVDatasetType dsType);

					/// <summary>
					/// 根据数据集名称获取数据集元数据信息
					/// </summary>
					/// <param name="datasetName">数据集名称</param>
					/// <param name="dsType">数据集类型</param>
					/// <returns>EarthView::World::Spatial::GeoDataset::IDataMetaInfo*,数据元信息集合对象</returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getDatasetInfo(const EVString& datasetName,EarthView::World::Spatial::GeoDataset::EVDatasetType dsType);

					/// <summary>
					/// 根据数据集名称获取数据集元数据信息
					/// </summary>
					/// <param name="datasetName">数据集名称</param>
					/// <returns>EarthView::World::Spatial::GeoDataset::IDataMetaInfo*,数据元信息集合对象</returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getDatasetInfo( const EVString& datasetName);
				protected:

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="db">数据源</param>
					/// <returns></returns>
					CEffectDataSource(const EarthView::World::Core::Database::CSqlDatabase &db);

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="db">数据源</param>
					/// <param name="dbType">数据源类型</param>
					/// <returns></returns>
					CEffectDataSource(const EarthView::World::Core::Database::CSqlDatabase &db, const EVString& dbType);

					/// <summary>
					/// 特效数据源中表格的建立
					/// </summary>
					/// <returns>创建的是否成功的标示</returns>
					virtual ev_int32 createEffectTables();
					/***************************************************************************
					自定义函数
					****************************************************************************/

ev_private:

#pragma region  数据库相关操作
					/// <summary>
					/// 删除模型挂接的特效
					/// </summary>
					/// <param name="effectId">特效ID</param>
					/// <returns>删除是否成功</returns>
					ev_bool deleteModelAttach(ev_uint32 effectId);

					/// <summary>
					/// 添加一条新特效数据，包含一个默认的材质和纹理
					/// </summary>
					/// <param name="info">特效信息</param>
					/// <param name="materialName">材质名称</param>
					/// <param name="materialData">材质内容</param>
					/// <param name="textureName">纹理名称</param>
					/// <param name="textureData">纹理内容</param>
					/// <returns>ev_uint32,特效ID</returns>
					ev_uint32 addEffect(EarthView::World::Spatial3D::Dataset::CEffectInfo& info,const EVString& materialName,const EarthView::World::Core::MemoryDataStreamPtr& materialData,const EVString& textureName,const EarthView::World::Core::MemoryDataStreamPtr& textureData);

					/// <summary>
					/// EV_EFFECT表中增加一条特效信息记录
					/// </summary>
					/// <param name="info">特效信息</param>
					/// <returns>ev_uint32,增加的特效信息在表中ID</returns>
					ev_uint32 addEffectInfo(EarthView::World::Spatial3D::Dataset::CEffectInfo& info);
					

					/// <summary>
					/// EV_EFFECT表中更新一条特效信息记录
					/// </summary>
					/// <param name="info">特效信息</param>
					/// <returns>ev_bool,更新EV_EFFECT表中特效信息，true成功，false失败</returns>
					ev_bool updateEffectInfo(EarthView::World::Spatial3D::Dataset::CEffectInfo& info);

					/// <summary>
					/// 通过NAME在EV_EFFECT表中查询，返回与名字相对应的特效信息。
					/// </summary>
					/// <param name="effectInfo">CEffectInfo初参</param>
					/// <param name="name">特效名称</param>
					/// <returns></returns>
					ev_bool getEffectInfoByName(EVString name,_out CEffectInfo& effectInfo);

					/// <summary>
					/// 通过EffectID在EV_EFFECT表中查询，返回与ID相对应的特效信息。
					/// </summary>
					/// <param name="id">特效ID</param>
					/// <returns>CEffectInfo*,返回与ID相对应的特效信息</returns>
					ev_bool getEffectInfoById(ev_uint32 id,_out EarthView::World::Spatial3D::Dataset::CEffectInfo& val);

				

					/// <summary>
					/// 通过复合特效的ID查找并获取EV_EFFECT表里该复合特效子特效信息集合。
					/// </summary>
					/// <param name="userTypeCode">复合特效ID</param>
					/// <returns>EarthView::World::Spatial3D::Dataset::CEffectInfoVector,返回包含所有复合特效子特效信息的集合</returns>
					ev_bool getBlendEffectInfos(ev_uint32 effectId,_out EarthView::World::Spatial3D::Dataset::CEffectInfoVector& vec);

					//CSqlQuery CEffectDataSetgetParticleTemplateName();
					/// <summary>
					/// 在表EV_EFFECT_REF中，增加一条特效对象--资源关联信息记录。
					/// </summary>
					/// <param name="info">特效资源关联信息</param>
					/// <returns>ev_uint32,返回新增特效资源关联记录编号</returns>
					ev_uint32 addEffectRefInfo(CEffectRefInfo& info);

					/// <summary>
					/// 在表EV_EFFECT_REF中，删除与传入特效ID对应的所有关联记录。
					/// </summary>
					/// <param name="id">特效ID</param>
					/// <returns>ev_bool,删除成功返回true,失败返回false</returns>
					ev_bool deleteEffectRefInfo(ev_uint32 id);
				

					/// <summary>
					/// 通过特效ID删除该特效以及与其有关的特效
					/// </summary>
					/// <param name="id">特效ID</param>
					/// <returns>ev_bool,删除成功返回true,失败返回false</returns>
					ev_bool deleteEffectById(ev_uint32 effectId);

					/// <summary>
					///将effectid相关的记录，资源关系表，资源全部在库中新插入，返回新的特效信息
					/// </summary>
					/// <param name="info">原特效信息</param>
					/// <param name="newInfo">返回新的特效信息</param>
					/// <returns>操作是否成功</returns>
					ev_bool copyEffect(_in EarthView::World::Spatial3D::Dataset::CEffectInfo& info,_out CEffectInfo& newInfo);

					/// <summary>
					///更新特效资源关系信息记录
					/// </summary>
					/// <param name="info">特效资源关系信息</param>
					/// <returns>ev_bool,更新成功返回true,失败返回false</returns>
					ev_bool updateEffectRefInfo(CEffectRefInfo& info);

					/// <summary>
					///通过EffectRefID获取特效资源关系特效信息
					/// </summary>
					/// <param name="id">特效资源关系编号</param>
					/// <param name="val">传出特效资源关系表信息</param>
					/// <returns>操作是否成功</returns>
					ev_bool getEffectRefInfoById(ev_uint32 id,_out CEffectRefInfo& val);

					/// <summary>
					///通过特效ID获取同特效ID下资源ID的集合
					/// </summary>
					/// <param name="id">特效ID</param>
					/// <param name="resouceIds">返回的资源ID集合</param>
					/// <returns></returns>
					ev_void getResourceIdsByEffectID(ev_uint32 effectId,_out EarthView::World::Core::CStringArray& resouceIds);

					/// <summary>
					///通过特效ID获取同特效ID下特效关系ID以及资源ID两个集合
					/// </summary>
					/// <param name="id">特效ID</param>
					/// <param name="refIds">返回的特效关系ID集合</param>
					/// <param name="resouceIds">返回的资源ID集合</param>
					/// <returns></returns>
					ev_void getEffectRefIdsByEffectID(ev_uint32 effectId,_out EarthView::World::Core::CStringArray& refIds,EarthView::World::Core::CStringArray& resouceIds);

					/// <summary>
					///获取所有用户分类的查询
					/// </summary>
					/// <returns>CSqlQuery,返回满足条件的查询对象</returns>
					EarthView::World::Core::Database::CSqlQuery getAllEffectUserType();
				

					/// <summary>
					///获取所有用户分类及特效的查询
					/// </summary>
					/// <returns>CSqlQuery,返回满足条件的查询对象</returns>
					ev_bool getAllEffectUserTypeAndEffect( _out CEffectUserTypeInfoVector& userTypeInfoVect,_out EarthView::World::Spatial3D::Dataset::CEffectInfoVector& effectInfoVec);
					
					/// <summary>
					///获得所有用户自定义特效分类信息
					/// </summary>
					/// <param name="vec">返回特效分类的集合</param>
					/// <returns>操作是否成功</returns>
					ev_bool getEffectUserTypeInfos(_out CEffectUserTypeInfoVector& vec);


					/// <summary>
					///通过分类名获得分类对象的集合
					/// </summary>
					/// <param name="typeName">分类名称</param>
					/// <param name="userTypeInfo">分类对象集合</param>
					/// <returns>操作是否成功</returns>
					ev_bool getUserTypeByName(const EVString& typeName,_out CEffectUserTypeInfo& userTypeInfo);


					/// <summary>
					///得到传入用户分类号下所有特效用户分类信息
					/// </summary>
					/// <param name="userTypeCode">用户分类号</param>
					/// <param name="vec">分类对象结合</param>
					/// <returns>操作是否成功</returns>
					ev_bool getEffectUserTypeInfos(const EVString& userTypeCode,_out CEffectUserTypeInfoVector& vec);

					/// <summary>
					///得到用户自定义特效分类的子分类信息
					/// </summary>
					/// <param name="userTypeCode">用户自定义特效分类编码</param>
					/// <param name="vec">分类对象结合</param>
					/// <returns>操作是否成功</returns>
					 ev_bool getEffectUserTypeChildInfos(const EVString& userTypeCode,_out CEffectUserTypeInfoVector& vec);

					/// <summary>
					///通过数据库类型返回数据库名称的查询
					/// </summary>
					/// <param name="type">数据库类型</param>
					/// <returns>CSqlQuery,返回符合条件的查询对象</returns>
					EarthView::World::Core::Database::CSqlQuery getDatasetNameByType(int type);

					/// <summary>
					///删除与传入EffectID相应的特效数据集特效对象
					/// </summary>
					/// <param name="instanceName">数据集名称</param>
					/// <param name="effectID">特效ID</param>
					/// <returns>ev_bool,删除成功，返回true;删除失败，返回false</returns>
					ev_bool deleteInstanceInfoByEffectID( EVString instanceName,int effectID );

					/// <summary>
					///向资源表中添加资源信息
					/// </summary>
					/// <param name="val">资源信息</param>
					/// <returns>ev_uint32,资源信息ID</returns>
					ev_uint32 addResource(CEffectResourceInfo& val);

					/// <summary>
					///更新资源信息
					/// </summary>
					/// <param name="val">资源信息</param>
					/// <returns>ev_bool,更新成功，返回true;更新失败，返回false</returns>
					ev_bool updateResource(CEffectResourceInfo& val);

					/// <summary>
					///删除资源信息
					/// </summary>
					/// <param name="val">资源ID</param>
					/// <returns>ev_bool,删除成功，返回true;删除失败，返回false</returns>
					ev_bool deleteResource(ev_uint32 id);

					/// <summary>
					///传入资源ID等到相应的资源记录
					/// </summary>
					/// <param name="val">资源ID</param>
					/// <returns>CEffectResourceInfo,资源信息</returns>
					ev_bool getResourceByID(ev_uint32 id,_out CEffectResourceInfo& val);

					/// <summary>
					/// 向数据库插入节点信息
					/// </summary>
					/// <param name="typeInfo">节点信息</param>
					/// <returns>ev_bool,插入成功，返回true;插入失败，返回false</returns>
					ev_bool addEffectUserType(CEffectUserTypeInfo& typeInfo);

					/// <summary>
					/// 更新数据库节点信息
					/// </summary>
					/// <param name="typeInfo">节点信息</param>
					/// <returns>ev_bool,成功返回true，否则返回false</returns>
					ev_bool updateEffectUserType( CEffectUserTypeInfo& typeInfo);

					/// <summary>
					/// 更新用户分类信息名称
					/// </summary>
					/// <param name="typeInfo">用户分类信息</param>
					/// <returns>ev_bool,成功返回true，否则返回false</returns>
					ev_bool updateEffectUserTypeName(CEffectUserTypeInfo& typeInfo);

					/// <summary>
					/// 更新所有用户自定义特效分类编码前缀
					/// </summary>
					/// <param name="newUserTypeCode">新的用户自定义分类编码</param>
					/// <returns></returns>
					ev_bool updateAllUserTypePrefix(EVString newUserTypeCode);

					/// <summary>
					/// 更新复合特效的名称
					/// </summary>
					/// <param name="info">含有新名称的复合特效信息</param>
					/// <returns>ev_bool,更新成功，返回true;更新失败，返回false</returns>
					ev_bool updateBlendEffectName(EarthView::World::Spatial3D::Dataset::CEffectInfo& info);

					/// <summary>
					/// 更新复合特效子特效的名称
					/// </summary>
					/// <param name="info">含有新名称的复合特效子特效信息</param>
					/// <returns>ev_bool,更新成功，返回true;更新失败，返回false</returns>
					ev_bool updateBEChildName(EarthView::World::Spatial3D::Dataset::CEffectInfo& effectInfo);

					/// <summary>
					/// 更新独立特效的名称
					/// </summary>
					/// <param name="info">含有新名称的独立特效信息</param>
					/// <returns>ev_bool,更新成功，返回true;更新失败，返回false</returns>
					ev_bool updateSingleEffectName(EarthView::World::Spatial3D::Dataset::CEffectInfo& effectInfo);

					/// <summary>
					/// 删除特效分类
					/// </summary>
					/// <param name="nodeCode">节点的用户自定义分类编码</param>
					/// <returns>ev_bool,删除成功，返回true;删除失败，返回false</returns>
					ev_bool deleteEffectUserType(const EVString& nodeCode);

					/// <summary>
					/// 获取特效分类信息
					/// </summary>
					/// <param name="nodeCode">节点的用户自定义分类编码</param>
					/// <returns>CEffectUserTypeInfo*,特效分类信息</returns>
					ev_bool getEffectUserType(const EVString& nodeCode,_out CEffectUserTypeInfo& val);

					/// <summary>
					/// 增加特效资源
					/// </summary>
					/// <param name="folder">资源所在文件夹</param>
					/// <param name="userTypeCode">分类编码</param>
					/// <param name="particleFileName">粒子脚本文件名</param>
					/// <param name="scriptName">粒子名称</param>
					/// <param name="material">材质文件名</param>
					/// <param name="textures">纹理文件名集合</param>
					/// <param name="gpus">gpu程序文件名集合</param>
					/// <param name="progs">progs程序文件名集合</param>
					/// <returns>操作是否成功</returns>
					ev_bool addResourceFromFile(const EVString& folder,const EVString& userTypeCode,const EVString& particleFileName,const EVString& scriptName,const EVString& material, EarthView::World::Core::CStringArray& textures, EarthView::World::Core::CStringArray& gpus, EarthView::World::Core::CStringArray& progs,_out EVString& msg);



					/// <summary>
					/// 获取传入名称一致的资源记录ID集合
					/// </summary>
					/// <param name="particleName">粒子名称</param>
					/// <param name="resouceIds">资源记录ID集合</param>
					/// <returns></returns>
					ev_void getResourceRefByName(const EVString& particleName,_out EarthView::World::Core::CStringArray& resouceIds);

					/// <summary>
					/// 获取数据源某张表表结构
					/// </summary>
					/// <param name="tab">表名</param>
					/// <param name="flds">传出的字段对象集合</param>
					/// <returns></returns>
					void getTableFields(const EVString& tab, _out EarthView::World::Spatial::GeoDataset::IFields* flds);




					/// <summary>
					/// 通过用户分类获取特效信息
					/// </summary>
					/// <param name="userType">用户自定义分类编码</param>
					/// <param name="effectInfoVec">特效信息集合</param>
					/// <returns></returns>
					void getEffectInfoByUserType(const EVString& userType,vector<EarthView::World::Spatial3D::Dataset::CEffectInfo>& effectInfoVec);

					/// <summary>
					/// 从数据库读取子树节点信息
					/// </summary>
					/// <param name="nodeCode">父节点编码</param>
					/// <param name="typeInfoList">子节点集信息</param>
					/// <returns></returns>
					ev_void readChildNode(EVString& nodeCode, vector<CEffectUserTypeInfo>& typeInfoList);

					/// <summary>
					/// 取得需要导出的特效的总数量
					/// </summary>					
					/// <returns>特效的数量</returns>
					ev_uint32 getImportEffectTotalCount();

					

					/// <summary>
					/// 加载资源文件
					/// </summary>
					/// <param name="resNames">资源名称集合</param>
					/// <param name="resType">资源类型</param>
					/// <param name="file">外部创建的文件对象</param>	
					/// <param name="buf">通过file读取的资源字节数组</param>	
					/// <param name="folder">资源所在的文件夹</param>	
					/// <param name="tableName">要插入的资源表名</param>	
					/// <param name="query">数据库的操作对象</param>	
					/// <param name="currentID">插入资源表后的资源ID</param>	
					/// <param name="effectId">相关的特效ID</param>						
					/// <returns>操作是否成功</returns>
					ev_bool loadResFiles( EarthView::World::Core::CStringArray &resNames,ev_int32 resType, EarthView::World::Core::CFile &file, ev_byte*& buf,const EVString& folder, EVString &tableName, EarthView::World::Core::Database::CSqlQuery &query, ev_uint32 &currentID, ev_uint32 effectId );

					/// <summary>
					/// 判断特效是否存在
					/// </summary>
					/// <param name="effectName">特效名称</param>
					/// <param name="effectId">如果存在则返回特效ID，如果不存在则返回0</param>
					/// <returns>是否存在此特效</returns>
					ev_bool existEffect(const EVString& effectName,_out ev_uint32& effectId);

					/// <summary>
					/// 初始化分类表，插入一条默认记录
					/// </summary>				
					/// <returns></returns>
					void initUserType();
#pragma endregion



				private:
					
					vector<EarthView::World::Spatial::GeoDataset::IDataset*> mDatasets;
					EarthView::World::Spatial::GeoDataset::CSqlstandardization* mSqlStd;
					EarthView::World::Spatial::GeoDataset::CFields mFields;	
					friend class CEffectDataSourceFactory;	
					friend class CEffectDataSet;
				};
			}
		}
	}
}
#endif

