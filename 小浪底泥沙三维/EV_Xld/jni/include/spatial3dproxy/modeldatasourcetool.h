#ifndef EV_MODELDATASOURCE_TOOL_H__
#define EV_MODELDATASOURCE_TOOL_H__
#include "modeldatasourcetool_config.h"

namespace EarthView
{
	namespace World
	{ 
		namespace Spatial3DProxy 
		{
			class ModelDataSetAccessor;
			class ModelScene;

			/// <summary>
			/// 错误码
			/// </summary>
			/// <param name=""></param>
			/// <returns></returns>
			/// <memo></memo>
			enum ModelErrorID
			{
				modelerror_noerror,
				modelerror_initscenefile,
				modelerror_savescenefile,
				modelerror_opendatasource_src,
				modelerror_opendataset_src,
				modelerror_opendatasource_des,
				modelerror_opendataset_des,
				modelerror_createdatasource,
				modelerror_createdataset,
				modelerror_isrunning,
				modelerror_parametererror,
				modelerror_desdataseterror,
				modelerror_loaddataseterror,
				modelerrorcount
			};

			/// <summary>
			/// 错误码描述对象
			/// </summary>
			/// <param name=""></param>
			/// <returns></returns>
			/// <memo></memo>
			class ModelToolError
			{
			  public:
				ev_int32 id ;
				EVString error;
			};

			class EV_SPATIAL3DPROXY_DLL ModelDataSourceTool : public EarthView::World::Core::CAllocatedObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				ModelDataSourceTool(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				ModelDataSourceTool();

				/// <summary>
				///  析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				~ModelDataSourceTool();

				/// <summary>
				///  操作类别
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				enum WorkType
				{
					WT_Export,
					WT_Import,
					WT_Copy
				};

				/// <summary>
				///  初始工作环境
				/// </summary>
				/// <param name=""></param>
				/// <returns>true初始化成功,false初始化失败</returns>
				/// <memo></memo>
				ev_bool initEnvironment(EarthView::World::Spatial3DProxy::ModelDataSourceTool::WorkType worktype);


				/// <summary>
				///  重置工作状态
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				ev_void reset();

				/// <summary>
				///  是否正在工作
				/// </summary>
				/// <param name=""></param>
				/// <returns>true正在工作,false停止工作</returns>
				/// <memo></memo>
				ev_bool isRun();

				/// <summary>
				///  设置是否工作
				/// </summary>
				/// <param name=""runable>true工作，false停止工作</param>
				/// <returns></returns>
				/// <memo></memo>
				ev_void setRunable(ev_bool runable);

				/// <summary>
				///  导出模型数据集
				/// </summary>
				/// <param name="datasourceurl">数据源路径</param>
				/// <param name="datasetname">数据集名称</param>
				/// <param name="exportfolder">导出目录</param>
				/// <returns>true成功，false失败</returns>
				/// <memo></memo>
				ev_bool exportModelDataSet(const EVString& datasourceurl, const EVString& datasetname, const EVString& exportfolder);

				/// <summary>
				/// 百分比
				/// </summary>
				/// <returns>返回当前百分比</returns>
				/// <memo></memo>
				ev_int32 percentage();

				/// <summary>
				/// 设置百分比
				/// </summary>
				/// <param name="percentage">百分比</param>
				/// <returns></returns>
				/// <memo></memo>
				ev_void setPercentage(ev_int32 percentage);

				/// <summary>
				///  获取错误码
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回错误描述</returns>
				/// <memo></memo>
				static EVString getLastError()
				{
					return ModelDataSourceTool::g_modelToolErrorMsgs[g_lasstErrorID].error;
				}

				/// <summary>
				///  设置错误码
				/// </summary>
				/// <param name="errorid">设置错误号</param>
				/// <returns></returns>
				/// <memo></memo>
				static ev_void setLastErrorID(ev_int32 errorid)
				{
					g_lasstErrorID = errorid;
				}

			protected:
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				ev_bool openSrcDataSource(const EVString& datasourcefile);
				ev_bool openDesDataSource(const EVString& datasourcefile);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				EarthView::World::Spatial::GeoDataset::IDataset* getSrcDataSet(const EVString& datasetname);
				EarthView::World::Spatial::GeoDataset::IDataset* getDesDataSet(const EVString& datasetname);
				EarthView::World::Spatial::GeoDataset::IDataset* createDesDataSet(const EVString& datasetname, EarthView::World::Spatial::GeoDataset::IFields* attrFields,ev_bool istempl,ev_int32 srID);
			private:
				friend class ModelDataSetAccessor;
				friend class ModelScene;

				EarthView::World::Spatial3D::Dataset::CModelDataSource* mpSrcDataSource;
				EarthView::World::Spatial::GeoDataset::IDataset* mpSrcDataSet;

				EarthView::World::Spatial3D::Dataset::CModelDataSource* mpDesDataSource;
				EarthView::World::Spatial::GeoDataset::IDataset* mpDesDataSet;


				ModelDataSetAccessor* mpDataSetAccessorSrc;
				ModelDataSetAccessor* mpDataSetAccessorDes;
				ModelScene* mpModelScene;

				ev_bool mbRunable;
				ev_bool mbIsRuning;

				ev_int32 mPercentage;

				static ModelToolError g_modelToolErrorMsgs[modelerrorcount];
				static ev_int32 g_lasstErrorID;

				/// 运行环境
				EarthView::World::Spatial::CacheManager* mpCacheManager;

			};
		}
	}
}

#endif
