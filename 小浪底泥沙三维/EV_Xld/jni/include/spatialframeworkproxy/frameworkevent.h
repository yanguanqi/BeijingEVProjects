#ifndef EV_FRAMEWORK_EVENT_H__
#define EV_FRAMEWORK_EVENT_H__

	enum FrameworkEventType
	{
		/////////////////////////////////////////////////////////////////////////////
		//2001-3000
		FET_EventTypeStart_DataSourceManager = 2001,                ///数据源管理 事件类型 起始值

		FET_CreateDataSourceRequest				,
		FET_CreateDataSourceResponse			,
		FET_DeleteDataSourceRequest				,
		FET_DeleteDataSourceResponse			,
		FET_OpenDataSourceRequest				,
		FET_OpenDataSourceResponse				,
		FET_CloseDataSourceRequest				,
		FET_CloseDataSourceResponse				,
		FET_GetOpenedDataSourceArrResponse		,

		FET_OpenDataSetRequest					,
		FET_OpenDataSetResponse					,
		FET_CreateDataSetRequest				,
		FET_CreateDataSetResponse				,
		FET_CloseDataSetRequest					,
		FET_CloseDataSetResponse				,

		FET_RemoveDataSourceRequest				,
		FET_RemoveDataSourceResponse			,

		FET_ImportDataSourceRequest				,
		FET_ImportDataSourceResponse			,
		FET_ExportDataSourceRequest				,
		FET_ExportDataSourceResponse			,

		FET_EventTypeEnd_DataSourceManager		,     /// 数据源管理 事件类型 结束值（共使用25个事件值）
	
	};
#endif
