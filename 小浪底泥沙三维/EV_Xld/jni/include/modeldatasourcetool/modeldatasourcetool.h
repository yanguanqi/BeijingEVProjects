#ifndef EV_MODELDATASOURCE_TOOL_H__
#define EV_MODELDATASOURCE_TOOL_H__
#include "modeldatasourcetool_config.h"

BEGIN_MODEL_TOOL_NAMESPACE
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
typedef struct  
{
	ev_int32 id;
	String error;
}ModelToolError;

	class ModelDataSetAccessor;
	class ModelScene;
class EV_MODELDATASOURCE_TOOL_DLL ModelDataSourceTool : public CAllocatedObject
{
public:
	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	ModelDataSourceTool();

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	~ModelDataSourceTool();


	enum WorkType
	{
		WT_Export,
		WT_Import,
		WT_Copy
	};

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	ev_bool initEnvironment(WorkType worktype);


	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	ev_void reset();

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	ev_bool isRun();

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	ev_void setRunable(ev_bool runable);

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	ev_bool exportModelDataSet(const String& datasourcefile, const String& datasetname, const String& exportfolder);

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	ev_bool importModelDataSet(const String& modelfolder, const String& datasourcefile, const String& datasetname);

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	ev_bool copyModelDataSet(const String& datasourcefile_src, 
		const String& datasetname_src,
		const String& datasourcefile_des, 
		const String& datasetname_des);

	/// <summary>
	/// 百分比
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	ev_int32 percentage();

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	ev_void setPercentage(ev_int32 percentage);

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	static String getLastError()
	{
		return ModelDataSourceTool::g_modelToolErrorMsgs[g_lasstErrorID].error;
	}
	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
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
	ev_bool openSrcDataSource(const String& datasourceurl);
	ev_bool openDesDataSource(const String& datasourcefile);

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	IDataset* getSrcDataSet(const String& datasetname);
	IDataset* getDesDataSet(const String& datasetname);
	IDataset* createDesDataSet(const String& datasetname, IFields* attrFields,ev_bool istempl,ev_int32 srID);
private:
	friend class ModelDataSetAccessor;
	friend class ModelScene;

	CSpatialDataSource3D* mpSrcDataSource;
	IDataset* mpSrcDataSet;

	CSpatialDataSource3D* mpDesDataSource;
	IDataset* mpDesDataSet;


	ModelDataSetAccessor* mpDataSetAccessorSrc;
	ModelDataSetAccessor* mpDataSetAccessorDes;
	ModelScene* mpModelScene;

	ev_bool mbRunable;
	ev_bool mbIsRuning;

	ev_int32 mPercentage;

	static ModelToolError g_modelToolErrorMsgs[modelerrorcount];
	static ev_int32 g_lasstErrorID;

	/// 运行环境
	CacheManager* mpCacheManager;

};




END_MODEL_TOOL_NAMESPACE
#endif