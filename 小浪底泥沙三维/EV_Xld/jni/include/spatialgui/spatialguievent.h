#ifndef EV_SPATIAL_GUI_EVENT_H
#define EV_SPATIAL_GUI_EVENT_H


//1001-2000
enum GuiEventType
{
	FET_PopUpMenu=1001,
	FET_2D3DChange,	
	FET_CameraChange,
	
	FET_StartEdit3D,
	FET_StopEdit3D,
	FET_SaveEdit3D,
	FET_Undo3D,
	FET_Redo3D,
	FET_Editing3DLayerChanged					,
	FET_ModelEdit3DCommand,
	FET_EffectEdit3DCommand,
	FET_PointSelect3D,
	FET_PointSelectSubmesh,
	FET_RectSelect3D,
	FET_Measurearea3D,
	FET_MeasureLength3D,
	FET_MeasurePoint3D,
	FET_MeasureVertical,
	FET_MeasureAzimuth3D,
	FET_AnalysisFlood3D,
	FET_AnalysisSection,
	FET_AnalysisSlope,
	FET_AnalysisVisibility,
	FET_AnalysisVolume,
	FET_StopAnalysisMeasure3D,
	FET_AnalysisMeasureFinished3DAsyn,     // 三维分析或测量子线程中计算完成时发送的异步事件
	FET_AnalysisMeasureFinished3D,
	FET_CloseEditSelector3D,
	FET_Information3D,

    //飞行工具条
	///////////////////////////////////////////////////////////////////////////
	FET_NewRoute,
	FET_DeleteRoute,
	FET_DeleteRefresh,
	FET_ShowRoutePropety,
	FET_ShowRoutePropetyRefresh,
	FET_ChangeRoute,
	FET_StartAddControlPoint,
	FET_StartAddControlPointRefresh,
	FET_EndAddControlPoint,
    FET_RecordCameraPostion,
	FET_RecordCameraPostionRefresh,
	FET_EndAddControlPointRefresh,
	FET_StartFly,
	FET_PauseFly,
	FET_EndFly,
	FET_StartFlyRefresh,
	FET_PauseFlyRefresh,
	FET_EndFlyRefresh,
	FET_Exit,
	
	///////////////////////////////////////////////////////////////////////////
	FET_EventTypeStart_AtlasManager,	// 地图及场景管理 事件类型
	FET_ActiveMap,						// 地图激活事件。（打开地图时也会发送此事件）
	FET_ActiveScene,					// 场景激活事件。（打开场景时也会发送此事件）

	FET_CreateMap,
	FET_CreateScene,

	FET_SetAsCurrentMap,
	FET_SetAsCurrentScene,					
	FET_RemoveMap,		// 在地图树上移除地图节点（和渲染窗体无关）
	FET_RemoveScene,	// 在场景树上移除地图节点（和渲染窗体无关）

	FET_OpenMap,
	FET_OpenScene,

	// 下面这两个事件分别在CViewManager::closeMap()和CViewManager::closeGlobe()中发送，发送之后将会销毁对应的ISpatialControl。
	// 但是不会销毁关联的窗口，这意味着你需要在接收到这两个事件后手动销毁渲染窗口。
	// 处理流程为：
	// (1) 调用CViewManager::closeMap()或者CViewManager::closeGlobe()
	// (2) 处理FET_CloseMap或FET_CloseScene，销毁渲染窗口。
	FET_CloseMap,		// 关闭地图渲染窗体，关联的数据类为CMapActiveEvent。
	FET_CloseScene,		// 关闭场景渲染窗体，关联的数据类为CSceneActiveEvent。

	FET_CreateMapLayer,
	FET_CreateSceneLayer,
	FET_CreateMapGroupLayer,
	FET_CreateSceneGroupLayer,	
	FET_MapLayersAdded,
	FET_MoveMapLayer,
	FET_MoveSceneLayer,
	FET_SwitchSceneLayer,
	FET_RemoveMapLayer,
	FET_RemoveSceneLayer,
	FET_LayerCanEdit,
	FET_LayerNameChanged,
	FET_MapNameChanged,
	FET_SceneNameChanged,
	FET_LayerThemeChanged,
	FET_MapLayerVisibilityChanging,
	FET_MapLayerVisibilityChanged,

	FET_SceneLayerVisibilityChanging,
	FET_SceneLayerVisibilityChanged,					
	FET_SceneLayerThemeChanged,

	FET_EventTypeEnd_AtlasManager,

	FET_3DCurrentToolChanged,

	////////////////二维操作///////////
	FET_EventTypeStart_MapOperation,
	FET_DrawOver,
	FET_ViewportChanged,
	FET_SelectionChanged,
	FET_MapChanged,
	FET_TrackingLayerRepaint,
	FET_LayerChanged,
	FET_CurrentToolChanged,
	FET_StartEditing,
	FET_StopEditing,
	FET_SaveEdits,
	FET_CurrentTaskChanged,
	FET_EditingLayerChanged,
	FET_SketchChanged,
	FET_SketchFinished,
	FET_SketchReset,
	FET_FieldValueChanged,
	FET_FieldChanged,
	FET_EditingAttributeChanged,
	FET_DatasetChanged,
	FET_ModelDatasetChanged,
	FET_EventTypeEnd_MapOperation,
	// 网络分析
	FET_NetworkAnalystNew,
	FET_NetworkAnalystTMP,
	FET_NetworkAnalystStop,
	FET_NetworkAnalystBarriar,
	FET_NetworkAnalystAdjust,
	FET_NetworkAnalystSolve,
	
	FET_ScreenShotUpdate,
	FET_ScreenShot,

	FET_ProgramExit,	// 程序开始退出
	//布局相关事件
	FET_ActiveLayout,	//布局激活事件(打开布局时发送此事件）
	FET_CreateLayout,
	FET_RemoveLayout,
	FET_OpenLayout,
	FET_CloseLayout,
	FET_AddElement,
	FET_DeleteElement,
	FET_ElementSelectionChanged,
	FET_LayoutNameChanged,
	FET_FrameEnvelopeChange,
	FET_MeshxgEdit,
	//海图相关事件
	FET_ChartShowChange,
};
#endif
