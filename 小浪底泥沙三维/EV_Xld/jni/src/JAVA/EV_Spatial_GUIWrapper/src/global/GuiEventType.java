package global;

import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///1001-2000
public enum GuiEventType implements INativeEnum<GuiEventType> {
	FET_PopUpMenu(GuiEventTypeHelper.ENUM_VALUES[0]),
	FET_2D3DChange(GuiEventTypeHelper.ENUM_VALUES[1]),
	FET_CameraChange(GuiEventTypeHelper.ENUM_VALUES[2]),
	FET_StartEdit3D(GuiEventTypeHelper.ENUM_VALUES[3]),
	FET_StopEdit3D(GuiEventTypeHelper.ENUM_VALUES[4]),
	FET_SaveEdit3D(GuiEventTypeHelper.ENUM_VALUES[5]),
	FET_Undo3D(GuiEventTypeHelper.ENUM_VALUES[6]),
	FET_Redo3D(GuiEventTypeHelper.ENUM_VALUES[7]),
	FET_Editing3DLayerChanged(GuiEventTypeHelper.ENUM_VALUES[8]),
	FET_ModelEdit3DCommand(GuiEventTypeHelper.ENUM_VALUES[9]),
	FET_EffectEdit3DCommand(GuiEventTypeHelper.ENUM_VALUES[10]),
	FET_PointSelect3D(GuiEventTypeHelper.ENUM_VALUES[11]),
	FET_PointSelectSubmesh(GuiEventTypeHelper.ENUM_VALUES[12]),
	FET_RectSelect3D(GuiEventTypeHelper.ENUM_VALUES[13]),
	FET_Measurearea3D(GuiEventTypeHelper.ENUM_VALUES[14]),
	FET_MeasureLength3D(GuiEventTypeHelper.ENUM_VALUES[15]),
	FET_MeasurePoint3D(GuiEventTypeHelper.ENUM_VALUES[16]),
	FET_MeasureVertical(GuiEventTypeHelper.ENUM_VALUES[17]),
	FET_MeasureAzimuth3D(GuiEventTypeHelper.ENUM_VALUES[18]),
	FET_AnalysisFlood3D(GuiEventTypeHelper.ENUM_VALUES[19]),
	FET_AnalysisSection(GuiEventTypeHelper.ENUM_VALUES[20]),
	FET_AnalysisSlope(GuiEventTypeHelper.ENUM_VALUES[21]),
	FET_AnalysisVisibility(GuiEventTypeHelper.ENUM_VALUES[22]),
	FET_AnalysisVolume(GuiEventTypeHelper.ENUM_VALUES[23]),
	FET_StopAnalysisMeasure3D(GuiEventTypeHelper.ENUM_VALUES[24]),
	FET_AnalysisMeasureFinished3DAsyn(GuiEventTypeHelper.ENUM_VALUES[25]),
	FET_AnalysisMeasureFinished3D(GuiEventTypeHelper.ENUM_VALUES[26]),
	FET_CloseEditSelector3D(GuiEventTypeHelper.ENUM_VALUES[27]),
	FET_Information3D(GuiEventTypeHelper.ENUM_VALUES[28]),
	FET_NewRoute(GuiEventTypeHelper.ENUM_VALUES[29]),
	FET_DeleteRoute(GuiEventTypeHelper.ENUM_VALUES[30]),
	FET_DeleteRefresh(GuiEventTypeHelper.ENUM_VALUES[31]),
	FET_ShowRoutePropety(GuiEventTypeHelper.ENUM_VALUES[32]),
	FET_ShowRoutePropetyRefresh(GuiEventTypeHelper.ENUM_VALUES[33]),
	FET_ChangeRoute(GuiEventTypeHelper.ENUM_VALUES[34]),
	FET_StartAddControlPoint(GuiEventTypeHelper.ENUM_VALUES[35]),
	FET_StartAddControlPointRefresh(GuiEventTypeHelper.ENUM_VALUES[36]),
	FET_EndAddControlPoint(GuiEventTypeHelper.ENUM_VALUES[37]),
	FET_RecordCameraPostion(GuiEventTypeHelper.ENUM_VALUES[38]),
	FET_RecordCameraPostionRefresh(GuiEventTypeHelper.ENUM_VALUES[39]),
	FET_EndAddControlPointRefresh(GuiEventTypeHelper.ENUM_VALUES[40]),
	FET_StartFly(GuiEventTypeHelper.ENUM_VALUES[41]),
	FET_PauseFly(GuiEventTypeHelper.ENUM_VALUES[42]),
	FET_EndFly(GuiEventTypeHelper.ENUM_VALUES[43]),
	FET_StartFlyRefresh(GuiEventTypeHelper.ENUM_VALUES[44]),
	FET_PauseFlyRefresh(GuiEventTypeHelper.ENUM_VALUES[45]),
	FET_EndFlyRefresh(GuiEventTypeHelper.ENUM_VALUES[46]),
	FET_Exit(GuiEventTypeHelper.ENUM_VALUES[47]),
	FET_EventTypeStart_AtlasManager(GuiEventTypeHelper.ENUM_VALUES[48]),
	FET_ActiveMap(GuiEventTypeHelper.ENUM_VALUES[49]),
	FET_ActiveScene(GuiEventTypeHelper.ENUM_VALUES[50]),
	FET_CreateMap(GuiEventTypeHelper.ENUM_VALUES[51]),
	FET_CreateScene(GuiEventTypeHelper.ENUM_VALUES[52]),
	FET_SetAsCurrentMap(GuiEventTypeHelper.ENUM_VALUES[53]),
	FET_SetAsCurrentScene(GuiEventTypeHelper.ENUM_VALUES[54]),
	FET_RemoveMap(GuiEventTypeHelper.ENUM_VALUES[55]),
	FET_RemoveScene(GuiEventTypeHelper.ENUM_VALUES[56]),
	FET_OpenMap(GuiEventTypeHelper.ENUM_VALUES[57]),
	FET_OpenScene(GuiEventTypeHelper.ENUM_VALUES[58]),
	FET_CloseMap(GuiEventTypeHelper.ENUM_VALUES[59]),
	FET_CloseScene(GuiEventTypeHelper.ENUM_VALUES[60]),
	FET_CreateMapLayer(GuiEventTypeHelper.ENUM_VALUES[61]),
	FET_CreateSceneLayer(GuiEventTypeHelper.ENUM_VALUES[62]),
	FET_CreateMapGroupLayer(GuiEventTypeHelper.ENUM_VALUES[63]),
	FET_CreateSceneGroupLayer(GuiEventTypeHelper.ENUM_VALUES[64]),
	FET_MapLayersAdded(GuiEventTypeHelper.ENUM_VALUES[65]),
	FET_MoveMapLayer(GuiEventTypeHelper.ENUM_VALUES[66]),
	FET_MoveSceneLayer(GuiEventTypeHelper.ENUM_VALUES[67]),
	FET_SwitchSceneLayer(GuiEventTypeHelper.ENUM_VALUES[68]),
	FET_RemoveMapLayer(GuiEventTypeHelper.ENUM_VALUES[69]),
	FET_RemoveSceneLayer(GuiEventTypeHelper.ENUM_VALUES[70]),
	FET_LayerCanEdit(GuiEventTypeHelper.ENUM_VALUES[71]),
	FET_LayerNameChanged(GuiEventTypeHelper.ENUM_VALUES[72]),
	FET_MapNameChanged(GuiEventTypeHelper.ENUM_VALUES[73]),
	FET_SceneNameChanged(GuiEventTypeHelper.ENUM_VALUES[74]),
	FET_LayerThemeChanged(GuiEventTypeHelper.ENUM_VALUES[75]),
	FET_MapLayerVisibilityChanging(GuiEventTypeHelper.ENUM_VALUES[76]),
	FET_MapLayerVisibilityChanged(GuiEventTypeHelper.ENUM_VALUES[77]),
	FET_SceneLayerVisibilityChanging(GuiEventTypeHelper.ENUM_VALUES[78]),
	FET_SceneLayerVisibilityChanged(GuiEventTypeHelper.ENUM_VALUES[79]),
	FET_SceneLayerThemeChanged(GuiEventTypeHelper.ENUM_VALUES[80]),
	FET_EventTypeEnd_AtlasManager(GuiEventTypeHelper.ENUM_VALUES[81]),
	FET_3DCurrentToolChanged(GuiEventTypeHelper.ENUM_VALUES[82]),
	FET_EventTypeStart_MapOperation(GuiEventTypeHelper.ENUM_VALUES[83]),
	FET_DrawOver(GuiEventTypeHelper.ENUM_VALUES[84]),
	FET_ViewportChanged(GuiEventTypeHelper.ENUM_VALUES[85]),
	FET_SelectionChanged(GuiEventTypeHelper.ENUM_VALUES[86]),
	FET_MapChanged(GuiEventTypeHelper.ENUM_VALUES[87]),
	FET_TrackingLayerRepaint(GuiEventTypeHelper.ENUM_VALUES[88]),
	FET_LayerChanged(GuiEventTypeHelper.ENUM_VALUES[89]),
	FET_CurrentToolChanged(GuiEventTypeHelper.ENUM_VALUES[90]),
	FET_StartEditing(GuiEventTypeHelper.ENUM_VALUES[91]),
	FET_StopEditing(GuiEventTypeHelper.ENUM_VALUES[92]),
	FET_SaveEdits(GuiEventTypeHelper.ENUM_VALUES[93]),
	FET_CurrentTaskChanged(GuiEventTypeHelper.ENUM_VALUES[94]),
	FET_EditingLayerChanged(GuiEventTypeHelper.ENUM_VALUES[95]),
	FET_SketchChanged(GuiEventTypeHelper.ENUM_VALUES[96]),
	FET_SketchFinished(GuiEventTypeHelper.ENUM_VALUES[97]),
	FET_SketchReset(GuiEventTypeHelper.ENUM_VALUES[98]),
	FET_FieldValueChanged(GuiEventTypeHelper.ENUM_VALUES[99]),
	FET_FieldChanged(GuiEventTypeHelper.ENUM_VALUES[100]),
	FET_EditingAttributeChanged(GuiEventTypeHelper.ENUM_VALUES[101]),
	FET_DatasetChanged(GuiEventTypeHelper.ENUM_VALUES[102]),
	FET_ModelDatasetChanged(GuiEventTypeHelper.ENUM_VALUES[103]),
	FET_EventTypeEnd_MapOperation(GuiEventTypeHelper.ENUM_VALUES[104]),
	FET_NetworkAnalystNew(GuiEventTypeHelper.ENUM_VALUES[105]),
	FET_NetworkAnalystTMP(GuiEventTypeHelper.ENUM_VALUES[106]),
	FET_NetworkAnalystStop(GuiEventTypeHelper.ENUM_VALUES[107]),
	FET_NetworkAnalystBarriar(GuiEventTypeHelper.ENUM_VALUES[108]),
	FET_NetworkAnalystAdjust(GuiEventTypeHelper.ENUM_VALUES[109]),
	FET_NetworkAnalystSolve(GuiEventTypeHelper.ENUM_VALUES[110]),
	FET_ScreenShotUpdate(GuiEventTypeHelper.ENUM_VALUES[111]),
	FET_ScreenShot(GuiEventTypeHelper.ENUM_VALUES[112]),
	FET_ProgramExit(GuiEventTypeHelper.ENUM_VALUES[113]),
	FET_ActiveLayout(GuiEventTypeHelper.ENUM_VALUES[114]),
	FET_CreateLayout(GuiEventTypeHelper.ENUM_VALUES[115]),
	FET_RemoveLayout(GuiEventTypeHelper.ENUM_VALUES[116]),
	FET_OpenLayout(GuiEventTypeHelper.ENUM_VALUES[117]),
	FET_CloseLayout(GuiEventTypeHelper.ENUM_VALUES[118]),
	FET_AddElement(GuiEventTypeHelper.ENUM_VALUES[119]),
	FET_DeleteElement(GuiEventTypeHelper.ENUM_VALUES[120]),
	FET_ElementSelectionChanged(GuiEventTypeHelper.ENUM_VALUES[121]),
	FET_LayoutNameChanged(GuiEventTypeHelper.ENUM_VALUES[122]),
	FET_FrameEnvelopeChange(GuiEventTypeHelper.ENUM_VALUES[123]),
	FET_MeshxgEdit(GuiEventTypeHelper.ENUM_VALUES[124]),
	FET_ChartShowChange(GuiEventTypeHelper.ENUM_VALUES[125]);
	private int value;
	GuiEventType(int i) {
		this.value = i;
	}
	public GuiEventType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final GuiEventType toEnum(int retval) {
		if(retval == FET_PopUpMenu.value){
			return FET_PopUpMenu;
		}
		else if(retval == FET_2D3DChange.value){
			return FET_2D3DChange;
		}
		else if(retval == FET_CameraChange.value){
			return FET_CameraChange;
		}
		else if(retval == FET_StartEdit3D.value){
			return FET_StartEdit3D;
		}
		else if(retval == FET_StopEdit3D.value){
			return FET_StopEdit3D;
		}
		else if(retval == FET_SaveEdit3D.value){
			return FET_SaveEdit3D;
		}
		else if(retval == FET_Undo3D.value){
			return FET_Undo3D;
		}
		else if(retval == FET_Redo3D.value){
			return FET_Redo3D;
		}
		else if(retval == FET_Editing3DLayerChanged.value){
			return FET_Editing3DLayerChanged;
		}
		else if(retval == FET_ModelEdit3DCommand.value){
			return FET_ModelEdit3DCommand;
		}
		else if(retval == FET_EffectEdit3DCommand.value){
			return FET_EffectEdit3DCommand;
		}
		else if(retval == FET_PointSelect3D.value){
			return FET_PointSelect3D;
		}
		else if(retval == FET_PointSelectSubmesh.value){
			return FET_PointSelectSubmesh;
		}
		else if(retval == FET_RectSelect3D.value){
			return FET_RectSelect3D;
		}
		else if(retval == FET_Measurearea3D.value){
			return FET_Measurearea3D;
		}
		else if(retval == FET_MeasureLength3D.value){
			return FET_MeasureLength3D;
		}
		else if(retval == FET_MeasurePoint3D.value){
			return FET_MeasurePoint3D;
		}
		else if(retval == FET_MeasureVertical.value){
			return FET_MeasureVertical;
		}
		else if(retval == FET_MeasureAzimuth3D.value){
			return FET_MeasureAzimuth3D;
		}
		else if(retval == FET_AnalysisFlood3D.value){
			return FET_AnalysisFlood3D;
		}
		else if(retval == FET_AnalysisSection.value){
			return FET_AnalysisSection;
		}
		else if(retval == FET_AnalysisSlope.value){
			return FET_AnalysisSlope;
		}
		else if(retval == FET_AnalysisVisibility.value){
			return FET_AnalysisVisibility;
		}
		else if(retval == FET_AnalysisVolume.value){
			return FET_AnalysisVolume;
		}
		else if(retval == FET_StopAnalysisMeasure3D.value){
			return FET_StopAnalysisMeasure3D;
		}
		else if(retval == FET_AnalysisMeasureFinished3DAsyn.value){
			return FET_AnalysisMeasureFinished3DAsyn;
		}
		else if(retval == FET_AnalysisMeasureFinished3D.value){
			return FET_AnalysisMeasureFinished3D;
		}
		else if(retval == FET_CloseEditSelector3D.value){
			return FET_CloseEditSelector3D;
		}
		else if(retval == FET_Information3D.value){
			return FET_Information3D;
		}
		else if(retval == FET_NewRoute.value){
			return FET_NewRoute;
		}
		else if(retval == FET_DeleteRoute.value){
			return FET_DeleteRoute;
		}
		else if(retval == FET_DeleteRefresh.value){
			return FET_DeleteRefresh;
		}
		else if(retval == FET_ShowRoutePropety.value){
			return FET_ShowRoutePropety;
		}
		else if(retval == FET_ShowRoutePropetyRefresh.value){
			return FET_ShowRoutePropetyRefresh;
		}
		else if(retval == FET_ChangeRoute.value){
			return FET_ChangeRoute;
		}
		else if(retval == FET_StartAddControlPoint.value){
			return FET_StartAddControlPoint;
		}
		else if(retval == FET_StartAddControlPointRefresh.value){
			return FET_StartAddControlPointRefresh;
		}
		else if(retval == FET_EndAddControlPoint.value){
			return FET_EndAddControlPoint;
		}
		else if(retval == FET_RecordCameraPostion.value){
			return FET_RecordCameraPostion;
		}
		else if(retval == FET_RecordCameraPostionRefresh.value){
			return FET_RecordCameraPostionRefresh;
		}
		else if(retval == FET_EndAddControlPointRefresh.value){
			return FET_EndAddControlPointRefresh;
		}
		else if(retval == FET_StartFly.value){
			return FET_StartFly;
		}
		else if(retval == FET_PauseFly.value){
			return FET_PauseFly;
		}
		else if(retval == FET_EndFly.value){
			return FET_EndFly;
		}
		else if(retval == FET_StartFlyRefresh.value){
			return FET_StartFlyRefresh;
		}
		else if(retval == FET_PauseFlyRefresh.value){
			return FET_PauseFlyRefresh;
		}
		else if(retval == FET_EndFlyRefresh.value){
			return FET_EndFlyRefresh;
		}
		else if(retval == FET_Exit.value){
			return FET_Exit;
		}
		else if(retval == FET_EventTypeStart_AtlasManager.value){
			return FET_EventTypeStart_AtlasManager;
		}
		else if(retval == FET_ActiveMap.value){
			return FET_ActiveMap;
		}
		else if(retval == FET_ActiveScene.value){
			return FET_ActiveScene;
		}
		else if(retval == FET_CreateMap.value){
			return FET_CreateMap;
		}
		else if(retval == FET_CreateScene.value){
			return FET_CreateScene;
		}
		else if(retval == FET_SetAsCurrentMap.value){
			return FET_SetAsCurrentMap;
		}
		else if(retval == FET_SetAsCurrentScene.value){
			return FET_SetAsCurrentScene;
		}
		else if(retval == FET_RemoveMap.value){
			return FET_RemoveMap;
		}
		else if(retval == FET_RemoveScene.value){
			return FET_RemoveScene;
		}
		else if(retval == FET_OpenMap.value){
			return FET_OpenMap;
		}
		else if(retval == FET_OpenScene.value){
			return FET_OpenScene;
		}
		else if(retval == FET_CloseMap.value){
			return FET_CloseMap;
		}
		else if(retval == FET_CloseScene.value){
			return FET_CloseScene;
		}
		else if(retval == FET_CreateMapLayer.value){
			return FET_CreateMapLayer;
		}
		else if(retval == FET_CreateSceneLayer.value){
			return FET_CreateSceneLayer;
		}
		else if(retval == FET_CreateMapGroupLayer.value){
			return FET_CreateMapGroupLayer;
		}
		else if(retval == FET_CreateSceneGroupLayer.value){
			return FET_CreateSceneGroupLayer;
		}
		else if(retval == FET_MapLayersAdded.value){
			return FET_MapLayersAdded;
		}
		else if(retval == FET_MoveMapLayer.value){
			return FET_MoveMapLayer;
		}
		else if(retval == FET_MoveSceneLayer.value){
			return FET_MoveSceneLayer;
		}
		else if(retval == FET_SwitchSceneLayer.value){
			return FET_SwitchSceneLayer;
		}
		else if(retval == FET_RemoveMapLayer.value){
			return FET_RemoveMapLayer;
		}
		else if(retval == FET_RemoveSceneLayer.value){
			return FET_RemoveSceneLayer;
		}
		else if(retval == FET_LayerCanEdit.value){
			return FET_LayerCanEdit;
		}
		else if(retval == FET_LayerNameChanged.value){
			return FET_LayerNameChanged;
		}
		else if(retval == FET_MapNameChanged.value){
			return FET_MapNameChanged;
		}
		else if(retval == FET_SceneNameChanged.value){
			return FET_SceneNameChanged;
		}
		else if(retval == FET_LayerThemeChanged.value){
			return FET_LayerThemeChanged;
		}
		else if(retval == FET_MapLayerVisibilityChanging.value){
			return FET_MapLayerVisibilityChanging;
		}
		else if(retval == FET_MapLayerVisibilityChanged.value){
			return FET_MapLayerVisibilityChanged;
		}
		else if(retval == FET_SceneLayerVisibilityChanging.value){
			return FET_SceneLayerVisibilityChanging;
		}
		else if(retval == FET_SceneLayerVisibilityChanged.value){
			return FET_SceneLayerVisibilityChanged;
		}
		else if(retval == FET_SceneLayerThemeChanged.value){
			return FET_SceneLayerThemeChanged;
		}
		else if(retval == FET_EventTypeEnd_AtlasManager.value){
			return FET_EventTypeEnd_AtlasManager;
		}
		else if(retval == FET_3DCurrentToolChanged.value){
			return FET_3DCurrentToolChanged;
		}
		else if(retval == FET_EventTypeStart_MapOperation.value){
			return FET_EventTypeStart_MapOperation;
		}
		else if(retval == FET_DrawOver.value){
			return FET_DrawOver;
		}
		else if(retval == FET_ViewportChanged.value){
			return FET_ViewportChanged;
		}
		else if(retval == FET_SelectionChanged.value){
			return FET_SelectionChanged;
		}
		else if(retval == FET_MapChanged.value){
			return FET_MapChanged;
		}
		else if(retval == FET_TrackingLayerRepaint.value){
			return FET_TrackingLayerRepaint;
		}
		else if(retval == FET_LayerChanged.value){
			return FET_LayerChanged;
		}
		else if(retval == FET_CurrentToolChanged.value){
			return FET_CurrentToolChanged;
		}
		else if(retval == FET_StartEditing.value){
			return FET_StartEditing;
		}
		else if(retval == FET_StopEditing.value){
			return FET_StopEditing;
		}
		else if(retval == FET_SaveEdits.value){
			return FET_SaveEdits;
		}
		else if(retval == FET_CurrentTaskChanged.value){
			return FET_CurrentTaskChanged;
		}
		else if(retval == FET_EditingLayerChanged.value){
			return FET_EditingLayerChanged;
		}
		else if(retval == FET_SketchChanged.value){
			return FET_SketchChanged;
		}
		else if(retval == FET_SketchFinished.value){
			return FET_SketchFinished;
		}
		else if(retval == FET_SketchReset.value){
			return FET_SketchReset;
		}
		else if(retval == FET_FieldValueChanged.value){
			return FET_FieldValueChanged;
		}
		else if(retval == FET_FieldChanged.value){
			return FET_FieldChanged;
		}
		else if(retval == FET_EditingAttributeChanged.value){
			return FET_EditingAttributeChanged;
		}
		else if(retval == FET_DatasetChanged.value){
			return FET_DatasetChanged;
		}
		else if(retval == FET_ModelDatasetChanged.value){
			return FET_ModelDatasetChanged;
		}
		else if(retval == FET_EventTypeEnd_MapOperation.value){
			return FET_EventTypeEnd_MapOperation;
		}
		else if(retval == FET_NetworkAnalystNew.value){
			return FET_NetworkAnalystNew;
		}
		else if(retval == FET_NetworkAnalystTMP.value){
			return FET_NetworkAnalystTMP;
		}
		else if(retval == FET_NetworkAnalystStop.value){
			return FET_NetworkAnalystStop;
		}
		else if(retval == FET_NetworkAnalystBarriar.value){
			return FET_NetworkAnalystBarriar;
		}
		else if(retval == FET_NetworkAnalystAdjust.value){
			return FET_NetworkAnalystAdjust;
		}
		else if(retval == FET_NetworkAnalystSolve.value){
			return FET_NetworkAnalystSolve;
		}
		else if(retval == FET_ScreenShotUpdate.value){
			return FET_ScreenShotUpdate;
		}
		else if(retval == FET_ScreenShot.value){
			return FET_ScreenShot;
		}
		else if(retval == FET_ProgramExit.value){
			return FET_ProgramExit;
		}
		else if(retval == FET_ActiveLayout.value){
			return FET_ActiveLayout;
		}
		else if(retval == FET_CreateLayout.value){
			return FET_CreateLayout;
		}
		else if(retval == FET_RemoveLayout.value){
			return FET_RemoveLayout;
		}
		else if(retval == FET_OpenLayout.value){
			return FET_OpenLayout;
		}
		else if(retval == FET_CloseLayout.value){
			return FET_CloseLayout;
		}
		else if(retval == FET_AddElement.value){
			return FET_AddElement;
		}
		else if(retval == FET_DeleteElement.value){
			return FET_DeleteElement;
		}
		else if(retval == FET_ElementSelectionChanged.value){
			return FET_ElementSelectionChanged;
		}
		else if(retval == FET_LayoutNameChanged.value){
			return FET_LayoutNameChanged;
		}
		else if(retval == FET_FrameEnvelopeChange.value){
			return FET_FrameEnvelopeChange;
		}
		else if(retval == FET_MeshxgEdit.value){
			return FET_MeshxgEdit;
		}
		else if(retval == FET_ChartShowChange.value){
			return FET_ChartShowChange;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class GuiEventTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
