#ifndef  EARTHVIEW_WORLD_SPATIAL_CONVERTOR_CDATAEXCHANGE2D_H
#define  EARTHVIEW_WORLD_SPATIAL_CONVERTOR_CDATAEXCHANGE2D_H

#include "spatial2ddataexchange/dataexchange.h"
#include "spatialinterface/idatasource.h"
#include "spatialinterface/ipropertyset.h"
#include "spatialinterface/ispatialreference.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Convertor
			{
				/// <summary>
				/// 矢量数据交换类
				/// </summary>
				class EV_SPATIAL2DDATAEXCHANGE_DLL CDataExchange2D
					:public EarthView::World::Spatial::Convertor::CDataExchange
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <returns></returns>
					CDataExchange2D();

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns>析构函数</returns>
					virtual ~CDataExchange2D();
					
					/// <summary>
					/// 数据转换
					/// </summary>
					/// <returns>转换结果，0 OK</returns>
					///1 Error_DataPath;2 Error_DataFormat_Or_NotSupport;3 Error_DataExists;4 Error_DataNotExists;5 Error_Data;6 Error_DataCannotRead
					///7 Error_DataCannotWrite;8 Error_ReadData;9 Error_WriteData;10 Error_OperateMode;11 Error_FeatureIndex;12 Error_DriverParamNotEnough
					///13 Error_DriverParam;14 Error_DataSource;20 Error_NotSupportSuchProjection;21 Error_DataStructure;100 Error_Other
					virtual ev_int32 exchange();
					
					//-----------计划被setSrcSource(EarthView::World::Spatial::GeoDataset::IPropertySet* pPropettySet)替换---------------//
					//ev_void setSrcSource(const EVString& value);//path=XXX/;name=xxx;username=xxx;password=xxx;tablename=xxx;tablename=xxx;
					//ev_void setSrcFormat(const EVString& value);//设置源文件格式，如果输入为文件夹，则传入空值
					
					/// <summary>
					/// 设置源数据源
					/// </summary>
					/// <param name="pDataSource">数据源</param>
					/// <param name="datasetName">要转换的数据集名称</param>
					/// <returns></returns>
					ev_void setSrcSource(_in EarthView::World::Spatial::GeoDataset::IDataSource* ref_dataSource,_in const EVString& datasetName);//EarthView::World::Spatial::GeoDataset::IDataSource应该可以获取除dataname外的相关属性
					/// <summary>
					/// 设置源数据源
					/// </summary>
					/// <param name="pPropettySet">参数，key值全部小写，包括path,name,dataname,username,keyword,format,url;</param>
					/// <returns>对应名称</returns>
					ev_void setSrcSource(_in EarthView::World::Spatial::GeoDataset::IPropertySet* pPropettySet);

					/*	setDestSource中的DatasetName可以不设，此时为原始数据集名称	*/
					//导出时都有关键字 ToDimension
					//导出时可有选择性条件 QueryClause，目前只支持设置范围，选择字段导出输出dbf文件时需要处理
					//其中文件格式用到 Path + DatasetName + DataFormat;
					//sqlite库 Path + DatabaseName(库名) + DatasetName(表名) + DataFormat
					//odbc	: DatabaseName (EVString), Host (EVString), Port (ev_int32), User (EVString), Password (EVString), Option (EVString),DataFormat(enum),DatasetName
					//const EVString getSrcSource() const;

					/// <summary>
					/// 获取原始数据集格式
					/// </summary>
					/// <returns>数据集格式</returns>
					const EVString getSrcFormat() const;

					/// <summary>
					/// 设置目标数据源
					/// </summary>
					/// <param name="pDataSource">数据源</param>
					/// <param name="dataName">目标数据集名称</param>
					/// <returns></returns>
					ev_void setDestSource(_in EarthView::World::Spatial::GeoDataset::IDataSource* ref_dataSource,_in const EVString& dataName);

					/// <summary>
					/// 设置目标数据源
					/// </summary>
					/// <param name="pPropettySet">参数，key值全部小写，包括path,name,dataname,username,keyword,format,url;</param>
					/// <returns></returns>
					ev_void setDestSource(_in EarthView::World::Spatial::GeoDataset::IPropertySet* pPropettySet);
					
					//ev_void setDestSource(const EVString& value);//path=xxx;name=xxx;username=xxx;password=xxx;tablename=xxx;当目标只含有一个文件时，才可以设置名称
					//ev_void setDestFormat(const EVString& value);
					//const EVString getDestSource() const;

					/// <summary>
					/// 获取目标数据格式
					/// </summary>
					/// <returns>目标数据格式</returns>
					const EVString getDestFormat() const;

					/// <summary>
					/// 获取源数据源名称
					/// </summary>
					/// <returns>源数据源名称</returns>
					const EVString getSrcName() const;

					/// <summary>
					/// 获取目标数据源名称
					/// </summary>
					/// <returns>目标数据源名称</returns>
					const EVString getDestname() const;

					/// <summary>
					/// 获取源数据源路径
					/// </summary>
					/// <returns>源数据源路径</returns>
					const EVString getSrcPath() const;

					/// <summary>
					/// 获取目标数据源路径
					/// </summary>
					/// <returns>目标数据源路径</returns>
					const EVString getDestPath() const;

					/// <summary>
					/// 获取源数据集名称
					/// </summary>
					/// <returns>源数据集名称</returns>
					const EVString getSrcDataName() const;

					/// <summary>
					/// 获取目标数据集名称
					/// </summary>
					/// <returns>目标数据集名称</returns>
					const EVString getDestDataName() const;

					/// <summary>
					/// 设置转换参数
					/// </summary>
					/// <param name="param">转换参数</param>
					void setDataExchangeParam(EarthView::World::Spatial::Convertor::CDataExchangeParam* param);

					/// <summary>
					/// 获取转换参数
					/// </summary>
					/// <returns>转换参数指针，不释放</returns>
					EarthView::World::Spatial::Convertor::CDataExchangeParam* getDataExchangeParam();
				ev_private:
					CDataExchange2D(_in EarthView::World::Core::CNameValuePairList* pList);
				private:
					ev_int32 getNewFormat(EarthView::World::Core::CBufferDataStream** ppStream);
					ev_void prepareExit();
					EarthView::World::Spatial::Convertor::CDataExchangeParam* mpDataExchangeParam;
					
					/*EVString mstrSrcSource;
					EVString mstrSrcFormat;
					EVString mstrDestSource;
					EVString mstrDestFormat;*/
					EarthView::World::Spatial::GeoDataset::IPropertySet* mpSrcPropertySet;
					EarthView::World::Spatial::GeoDataset::IPropertySet* mpDestPropertySet;
					EarthView::World::Spatial::GeoDataset::IDataSource* mpSrcDataSource;
					EarthView::World::Spatial::GeoDataset::IDataSource* mpDestDataSource;
					EarthView::World::Spatial::Geometry::ISpatialReference* mpSrcSRS;
					ev_bool mbProject;
					EVString mstrSrcDataName;
					EVString mstrDestDataName;
				};
			}
		}
	}
}
#endif


