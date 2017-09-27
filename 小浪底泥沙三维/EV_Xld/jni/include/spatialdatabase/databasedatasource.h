#ifndef _DATABASE_DATASOURCE_H_H_
#define _DATABASE_DATASOURCE_H_H_

#include "spatialdatabase/spatialdatabaseconfig.h"
#include "spatialinterface/idatasource.h"
#include "databaseutility/sqldatabase.h"
#include "core/unicodestring.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{

				class CSqlstandardization;
				///<summary>
				///根据给定连接创建数据源
				///</summary>
				class EV_SPATIALDATABASE_DLL CDatabaseDataSource : public EarthView::World::Spatial::GeoDataset::IDataSource
				{
				public:
					///<summary>
					///析构函数
					///</summary>
					virtual ~CDatabaseDataSource();
					///<summary>
					///获取数据库类型
					/// </summary>
					/// <param name=""></param>
					///<returns>数据库类型</returns>
					const EVString& getdbType() const;
					///<summary>
					///获取驱动类型类型
					/// </summary>
					/// <param name=""></param>
					///<returns>驱动类型</returns>
					EVString getDriver() const;
					///<summary>
					///获取数据库名
					/// </summary>
					/// <param name=""></param>
					///<returns>数据库名</returns>
					EVString getDatabaseName() const;
					///<summary>
					///获取主机名
					/// </summary>
					/// <param name=""></param>
					///<returns>主机名</returns>
					EVString getHostName() const;
					///<summary>
					///获取端口号
					/// </summary>
					/// <param name=""></param>
					///<returns>端口号</returns>
					ev_int32 getPort() const;
					///<summary>
					///获取用户名
					/// </summary>
					/// <param name=""></param>
					///<returns>用户名</returns>
					EVString getUserName() const;
					///<summary>
					///获取密码
					/// </summary>
					/// <param name=""></param>
					///<returns>密码</returns>
					EVString getPassword() const;
					///<summary>
					///获取连接选项
					/// </summary>
					/// <param name=""></param>
					///<returns>连接选项</returns>
					EVString getConnectOptions() const;
				ev_private:
					///<summary>
					///初始化数据源
					/// </summary>
					/// <param name=""></param>
					///<returns>成功返回0，否则返回-2</returns>
					virtual ev_int32 initialize();
				protected:
					ev_int32 createTableInfoTable();
					ev_int32 createVersionTable();
					ev_int32 createSpatialRefSysTable();
					ev_int32 createSpatialIndexTable();
					ev_int32 createGeometryColumnsTable();
					ev_int32 createDatasetInfoTable();
					ev_int32 createFieldInfoTable();
					ev_int32 createFeatureClassesInfo();
					ev_int32 createVectorDatasetTable();
					ev_int32 createRasterDatasetInfo();
					ev_int32 createDataDictionaryTable();
					ev_int32 createDatasetLockTable();
					ev_int32 createTable(const EarthView::World::Core::ev_wstring& sql);

					//创建特效和模型绑定相关的表
					ev_int32 createMeshEffectRef();
					ev_int32 createEntityEffectRef();

					//模型独自需要的表格
					virtual ev_int32 createEntityDataSetOctree(){return 0;}
					virtual ev_int32 createMaterialResource(){return 0;}
					virtual ev_int32 createMeshDefaultTTR(){return 0;}
					virtual ev_int32 createMeshInstance(){return 0;}
					virtual ev_int32 createMeshInstanceRef(){return 0;}
					virtual ev_int32 createMeshTemplate(){return 0;}
					virtual ev_int32 createMeshUserType(){return 0;}


					virtual ev_int32 createEffectTables(){return 0;}
					virtual ev_int32 createParticleTemplateTables(){return 0;}
					
					//根据要素集名称返回相应的八位字符串,若要素不存在，返回""
				public:
					///<summary>
					///获取数据集别名
					/// </summary>
					/// <param name="datasetName">数据集名</param>
					///<returns>别名</returns>
					EVString getDatasetAliasName (const EVString& datasetName);
					///<summary>
					///获取数据集别名
					/// </summary>
					/// <param name="datasetID">数据集id号</param>
					///<returns>别名</returns>
					EVString getDatasetAliasName (ev_uint32 datasetID);
					///<summary>
					///获取模型版本号
					/// </summary>
					/// <param name="model_name">模型名</param>
					///<returns>版本号</returns>
					EVString getVersion(const EVString& model_name);
ev_private:
					CDatabaseDataSource(EarthView::World::Core::CNameValuePairList *pList);

				protected:
					CDatabaseDataSource(const EarthView::World::Core::Database::CSqlDatabase &db);
					CDatabaseDataSource(const EarthView::World::Core::Database::CSqlDatabase &db, const EVString& dbType);

					EarthView::World::Core::Database::CSqlDatabase		m_ddb;
					EVString				m_dbType;
					CSqlstandardization *sqlStd;
				};

			}}}} // End of Namespace



#endif //_DATABASE_DATASOURCE_H_H_

