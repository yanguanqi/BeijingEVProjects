#ifndef EARTHVIEW_WORLD_SPATIAL3D_DATAEXCHANGE_H
#define  EARTHVIEW_WORLD_SPATIAL3D_DATAEXCHANGE_H

#include "spatial3ddataexchange/spatial3ddataexchange_config.h"
#include "spatialinterface/idataexchange.h"
#include "spatial3ddataexchange/meshparams.h"

namespace EarthView{
	namespace World{
		namespace Graphic{
			class CSceneManager;
		}
	}       
}

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Dataset{
				class CModelDataSource;
			}
		}
	}
}
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{
				class IDataset;
			}}}}
// using namespace EarthView::World::Spatial::Convertor;
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace DataExchange
			{
				/// <summary>
				/// 数据交换驱动类
				/// </summary>
                class CDataImport;
				class CModelDataDriver;
				class CModelDataExchangeListener;
				/// <summary>
				/// 数据交换类
				/// </summary>
				class EV_Spatial3DDataExchange_DLL CModelDataExchange:
					public EarthView::World::Spatial::Convertor::IDataExchange
				{
				public:
					/// <summary>
					/// 默认构造函数 ImOrEx 判断导入导出 ImOrEx true为导入，false为导出
					/// </summary>
					/// <returns></returns>
					CModelDataExchange();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CModelDataExchange();

				protected:
					// <summary>
					// 创建线程类
					// </summary>
					class WorkerFunc : public EarthView::World::Core::CThreadFunc
					{
						public:
							CModelDataExchange *dataExchange;
							WorkerFunc(CModelDataExchange *ref_q)
								: dataExchange(ref_q) {}
							ev_void run();
					};

				public:
					/// <summary>
					/// 数据转换
					/// </summary>
					/// <returns>转换结果，0 OK</returns>
					///1 Error_DataPath;2 Error_DataFormat_Or_NotSupport;3 Error_DataExists;4 Error_DataNotExists;5 Error_Data;6 Error_DataCannotRead
					///7 Error_DataCannotWrite;8 Error_ReadData;9 Error_WriteData;10 Error_OperateMode;11 Error_FeatureIndex;12 Error_DriverParamNotEnough
					///13 Error_DriverParam;14 Error_DataSource;20 Error_NotSupportSuchProjection;21 Error_DataStructure;100 Error_Other
					virtual ev_int32 exchange();

					/// <summary>
					/// 设置源数据转换驱动
					/// </summary>
					/// <param name="driver">驱动对象</param>
					/// <returns></returns>
					virtual ev_void setSrcDataDriver(_in const CModelDataDriver* ref_driver);

					/// <summary>
					/// 设置目标数据转换驱动
					/// </summary>
					/// <param name="driver">驱动对象</param>
					/// <returns></returns>
					virtual ev_void setDestDataDriver(_in const CModelDataDriver* ref_driver);
					ev_void setSource(EarthView::World::Spatial3D::Dataset::CModelDataSource* pSource, const EVString& dSetName);
					ev_void setPath(const EVString& path);
					ev_void setParams(const CMeshParams& params);
					/// <summary>
					/// 获取数据转换类型
					/// </summary>
					/// <returns>数据转换类型，2维还是3维</returns>
					virtual EarthView::World::Spatial::Convertor::EVDataExchangeType getType() const;
					/// <summary>
					/// 设置监听（内部保存引用）
					/// </summary>
					/// <param name="listener">监听对象，程序结束需外部删除</param>
					/// <returns></returns>
					ev_void addListener(_in EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener* ref_listener);
					/// <summary>
					/// 关闭线程
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void shutdown();
					/// <summary>
					/// 判断导入动作是否在进行
					/// </summary>
					/// <returns>true正在进行，false没有工作</returns>
					ev_bool IsStart();
					/// <summary>
					/// 创建线程
					/// </summary>
					/// <param name="">bool forceRestart = true</param>
					/// <returns></returns>
					virtual ev_bool startup();
					/// <summary>
					/// 停止模型数据导入，该函数会有调用延迟
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void stop();
					ev_int32 getExportPercentage();
                    ev_void resetImportIndex();
				ev_private:
					CModelDataExchange(_in EarthView::World::Core::CNameValuePairList* pList );
				protected:
					/// <summary>
					/// 线程开启
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void _threadMain();
					ev_void refreshDsetByName(EVString datasetName);
					ev_void processLog(const EVString& outInfo, ev_uint32 current, ev_uint32 count );
					EarthView::World::Spatial::Convertor::EVDataExchangeType            mDataExchangeType;      //数据交换类型
					EarthView::World::Spatial3D::Dataset::CModelDataSource*             mpDataSource;
					EarthView::World::Spatial3D::DataExchange::CModelDataDriver*             mpSrcDriver;             //源驱动
					EarthView::World::Spatial3D::DataExchange::CModelDataDriver*             mpDestDriver;            //目标驱动 
					EVString                        mPath;                   //外面传进来的scene文件路径/文件夹目录 
					EarthView::World::Spatial3D::DataExchange::CMeshParams                   mParse;                  //设置的参数
			          
				private:
					EarthView::World::Core::CThread *                     mpThread;
					EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener*   mpListener;              //监听
					WorkerFunc*                   mpWorkerFunc;
					EV_MUTEX(mInitMutex)                                   //EV_MUTEX据说此宏的作用是定义个
						EV_THREAD_SYNCHRONISER(mInitSync)

		            EVString                        mDatasetName; 

                    EarthView::World::Spatial3D::DataExchange::CDataImport*                  mpImportTool;    
                    ev_bool                       mIsImOrExport;            //mIsImOrExport为真表示导入，假表示导出
					EarthView::World::Graphic::CSceneManager*                mpScemgr;
					ev_int32 currentExportPercentage;
				};
			}
		}
	}
}
#endif
