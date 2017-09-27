package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVCommandType implements INativeEnum<EVCommandType> {
	CT_Unknown(EVCommandTypeHelper.ENUM_VALUES[0]),
	CT_Separator(EVCommandTypeHelper.ENUM_VALUES[1]),
	CT_FullExtent(EVCommandTypeHelper.ENUM_VALUES[2]),
	CT_Refresh(EVCommandTypeHelper.ENUM_VALUES[3]),
	CT_ClearSelection(EVCommandTypeHelper.ENUM_VALUES[4]),
	CT_PreviousView(EVCommandTypeHelper.ENUM_VALUES[5]),
	CT_NextView(EVCommandTypeHelper.ENUM_VALUES[6]),
	CT_LocateCenter(EVCommandTypeHelper.ENUM_VALUES[7]),
	CT_BeginBufferAnalysis(EVCommandTypeHelper.ENUM_VALUES[8]),
	CT_CreateBuffer(EVCommandTypeHelper.ENUM_VALUES[9]),
	CT_SelectInBuffer(EVCommandTypeHelper.ENUM_VALUES[10]),
	CT_ClearBuffer(EVCommandTypeHelper.ENUM_VALUES[11]),
	CT_Editor(EVCommandTypeHelper.ENUM_VALUES[12]),
	CT_TaskBox(EVCommandTypeHelper.ENUM_VALUES[13]),
	CT_EditingLayerBox(EVCommandTypeHelper.ENUM_VALUES[14]),
	CT_StartEditing(EVCommandTypeHelper.ENUM_VALUES[15]),
	CT_StopEditing(EVCommandTypeHelper.ENUM_VALUES[16]),
	CT_SaveEdits(EVCommandTypeHelper.ENUM_VALUES[17]),
	CT_Undo(EVCommandTypeHelper.ENUM_VALUES[18]),
	CT_Redo(EVCommandTypeHelper.ENUM_VALUES[19]),
	CT_AddVertex(EVCommandTypeHelper.ENUM_VALUES[20]),
	CT_DeleteVertex(EVCommandTypeHelper.ENUM_VALUES[21]),
	CT_FinishPart(EVCommandTypeHelper.ENUM_VALUES[22]),
	CT_DeletePart(EVCommandTypeHelper.ENUM_VALUES[23]),
	CT_FinishSketch(EVCommandTypeHelper.ENUM_VALUES[24]),
	CT_DeleteFeature(EVCommandTypeHelper.ENUM_VALUES[25]),
	CT_SketchProperty(EVCommandTypeHelper.ENUM_VALUES[26]),
	CT_BaseView(EVCommandTypeHelper.ENUM_VALUES[27]),
	CT_Standard(EVCommandTypeHelper.ENUM_VALUES[28]),
	CT_All(EVCommandTypeHelper.ENUM_VALUES[29]),
	CT_EnglishLabel(EVCommandTypeHelper.ENUM_VALUES[30]),
	CT_ChineseLabel(EVCommandTypeHelper.ENUM_VALUES[31]),
	CT_BrightDay(EVCommandTypeHelper.ENUM_VALUES[32]),
	CT_BlackBack(EVCommandTypeHelper.ENUM_VALUES[33]),
	CT_WhiteBack(EVCommandTypeHelper.ENUM_VALUES[34]),
	CT_Night(EVCommandTypeHelper.ENUM_VALUES[35]),
	CT_Dusk(EVCommandTypeHelper.ENUM_VALUES[36]),
	CT_BlurRelationship(EVCommandTypeHelper.ENUM_VALUES[37]),
	CT_SpecificRelationship(EVCommandTypeHelper.ENUM_VALUES[38]),
	CT_SaftyContour5m(EVCommandTypeHelper.ENUM_VALUES[39]),
	CT_SaftyContour10m(EVCommandTypeHelper.ENUM_VALUES[40]),
	CT_SaftyContour20m(EVCommandTypeHelper.ENUM_VALUES[41]),
	CT_SaftyContour30m(EVCommandTypeHelper.ENUM_VALUES[42]),
	CT_SimpleSymbol(EVCommandTypeHelper.ENUM_VALUES[43]),
	CT_Traditional(EVCommandTypeHelper.ENUM_VALUES[44]),
	CT_ViewCategoryEntryBox(EVCommandTypeHelper.ENUM_VALUES[45]),
	CT_ColorModeEntryBox(EVCommandTypeHelper.ENUM_VALUES[46]),
	CT_SymbolTypeEntryBox(EVCommandTypeHelper.ENUM_VALUES[47]),
	CT_SaftyContourEntryBox(EVCommandTypeHelper.ENUM_VALUES[48]),
	CT_LabelTypeEntryBox(EVCommandTypeHelper.ENUM_VALUES[49]),
	CT_LayerConfigEntryBox(EVCommandTypeHelper.ENUM_VALUES[50]),
	CT_QueryModeEntryBox(EVCommandTypeHelper.ENUM_VALUES[51]),
	CT_NetworkAnalystNewBtn(EVCommandTypeHelper.ENUM_VALUES[52]),
	CT_NetworkAnalystNewRoute(EVCommandTypeHelper.ENUM_VALUES[53]),
	CT_NetworkAnalystLayerBox(EVCommandTypeHelper.ENUM_VALUES[54]),
	CT_NetworkAnalystDatasetBox(EVCommandTypeHelper.ENUM_VALUES[55]),
	CT_NetworkAnalystSolve(EVCommandTypeHelper.ENUM_VALUES[56]),
	CT_StartEditing3D(EVCommandTypeHelper.ENUM_VALUES[57]),
	CT_StopEditing3D(EVCommandTypeHelper.ENUM_VALUES[58]),
	CT_SaveEditing3D(EVCommandTypeHelper.ENUM_VALUES[59]),
	CT_Undo3D(EVCommandTypeHelper.ENUM_VALUES[60]),
	CT_Redo3D(EVCommandTypeHelper.ENUM_VALUES[61]),
	CT_LayerEditing3D(EVCommandTypeHelper.ENUM_VALUES[62]),
	CT_ModleEditing3D(EVCommandTypeHelper.ENUM_VALUES[63]),
	CT_EffectEditing3D(EVCommandTypeHelper.ENUM_VALUES[64]),
	CT_RegionFlood3D(EVCommandTypeHelper.ENUM_VALUES[65]),
	CT_Section3D(EVCommandTypeHelper.ENUM_VALUES[66]),
	CT_Volume3D(EVCommandTypeHelper.ENUM_VALUES[67]),
	CT_Visibility3D(EVCommandTypeHelper.ENUM_VALUES[68]),
	CT_Slope3D(EVCommandTypeHelper.ENUM_VALUES[69]),
	CT_MeasureVertical3D(EVCommandTypeHelper.ENUM_VALUES[70]),
	CT_MeasurePoint3D(EVCommandTypeHelper.ENUM_VALUES[71]),
	CT_MeasureArea3D(EVCommandTypeHelper.ENUM_VALUES[72]),
	CT_MeasureLength3D(EVCommandTypeHelper.ENUM_VALUES[73]),
	CT_MeasureAzimuth3D(EVCommandTypeHelper.ENUM_VALUES[74]),
	CT_ClearMeasureAnalysis(EVCommandTypeHelper.ENUM_VALUES[75]),
	CT_SelectionSubmesh(EVCommandTypeHelper.ENUM_VALUES[76]),
	CT_SelectionByPoint3D(EVCommandTypeHelper.ENUM_VALUES[77]),
	CT_SelectionByCircle3D(EVCommandTypeHelper.ENUM_VALUES[78]),
	CT_SelectionByPolygon3D(EVCommandTypeHelper.ENUM_VALUES[79]),
	CT_SelectionByTrangle3D(EVCommandTypeHelper.ENUM_VALUES[80]),
	CT_SelectionBySql3D(EVCommandTypeHelper.ENUM_VALUES[81]),
	CT_SelectionClear3D(EVCommandTypeHelper.ENUM_VALUES[82]),
	CT_Information3D(EVCommandTypeHelper.ENUM_VALUES[83]),
	CT_NewRoute(EVCommandTypeHelper.ENUM_VALUES[84]),
	CT_DeleteRoute(EVCommandTypeHelper.ENUM_VALUES[85]),
	CT_RouteProperty(EVCommandTypeHelper.ENUM_VALUES[86]),
	CT_Start(EVCommandTypeHelper.ENUM_VALUES[87]),
	CT_Pause(EVCommandTypeHelper.ENUM_VALUES[88]),
	CT_Stop(EVCommandTypeHelper.ENUM_VALUES[89]),
	CT_Exit(EVCommandTypeHelper.ENUM_VALUES[90]),
	CT_RouteNames(EVCommandTypeHelper.ENUM_VALUES[91]),
	CT_StartSample(EVCommandTypeHelper.ENUM_VALUES[92]),
	CT_StopSample(EVCommandTypeHelper.ENUM_VALUES[93]),
	CT_StartEdit(EVCommandTypeHelper.ENUM_VALUES[94]),
	CT_StopEdit(EVCommandTypeHelper.ENUM_VALUES[95]),
	CT_PageFullExtent(EVCommandTypeHelper.ENUM_VALUES[96]),
	CT_PageNormal(EVCommandTypeHelper.ENUM_VALUES[97]),
	CT_InsertMap(EVCommandTypeHelper.ENUM_VALUES[98]),
	CT_SquareGrid(EVCommandTypeHelper.ENUM_VALUES[99]),
	CT_InsertNorthArrow(EVCommandTypeHelper.ENUM_VALUES[100]),
	CT_InsertLegend(EVCommandTypeHelper.ENUM_VALUES[101]),
	CT_InsertScaleText(EVCommandTypeHelper.ENUM_VALUES[102]),
	CT_InsertText(EVCommandTypeHelper.ENUM_VALUES[103]),
	CT_InsertScaleBar(EVCommandTypeHelper.ENUM_VALUES[104]),
	CT_InsertMapTitle(EVCommandTypeHelper.ENUM_VALUES[105]),
	CT_InsertPicture(EVCommandTypeHelper.ENUM_VALUES[106]),
	CT_DeleteElement(EVCommandTypeHelper.ENUM_VALUES[107]),
	CT_PageSetting(EVCommandTypeHelper.ENUM_VALUES[108]),
	CT_AlignLeft(EVCommandTypeHelper.ENUM_VALUES[109]),
	CT_AlignTop(EVCommandTypeHelper.ENUM_VALUES[110]),
	CT_ALignRight(EVCommandTypeHelper.ENUM_VALUES[111]),
	CT_AlignBottom(EVCommandTypeHelper.ENUM_VALUES[112]),
	CT_AlignMid(EVCommandTypeHelper.ENUM_VALUES[113]),
	CT_AlignHorMid(EVCommandTypeHelper.ENUM_VALUES[114]),
	CT_AlignVerMid(EVCommandTypeHelper.ENUM_VALUES[115]);
	private int value;
	EVCommandType(int i) {
		this.value = i;
	}
	public EVCommandType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVCommandType toEnum(int retval) {
		if(retval == CT_Unknown.value){
			return CT_Unknown;
		}
		else if(retval == CT_Separator.value){
			return CT_Separator;
		}
		else if(retval == CT_FullExtent.value){
			return CT_FullExtent;
		}
		else if(retval == CT_Refresh.value){
			return CT_Refresh;
		}
		else if(retval == CT_ClearSelection.value){
			return CT_ClearSelection;
		}
		else if(retval == CT_PreviousView.value){
			return CT_PreviousView;
		}
		else if(retval == CT_NextView.value){
			return CT_NextView;
		}
		else if(retval == CT_LocateCenter.value){
			return CT_LocateCenter;
		}
		else if(retval == CT_BeginBufferAnalysis.value){
			return CT_BeginBufferAnalysis;
		}
		else if(retval == CT_CreateBuffer.value){
			return CT_CreateBuffer;
		}
		else if(retval == CT_SelectInBuffer.value){
			return CT_SelectInBuffer;
		}
		else if(retval == CT_ClearBuffer.value){
			return CT_ClearBuffer;
		}
		else if(retval == CT_Editor.value){
			return CT_Editor;
		}
		else if(retval == CT_TaskBox.value){
			return CT_TaskBox;
		}
		else if(retval == CT_EditingLayerBox.value){
			return CT_EditingLayerBox;
		}
		else if(retval == CT_StartEditing.value){
			return CT_StartEditing;
		}
		else if(retval == CT_StopEditing.value){
			return CT_StopEditing;
		}
		else if(retval == CT_SaveEdits.value){
			return CT_SaveEdits;
		}
		else if(retval == CT_Undo.value){
			return CT_Undo;
		}
		else if(retval == CT_Redo.value){
			return CT_Redo;
		}
		else if(retval == CT_AddVertex.value){
			return CT_AddVertex;
		}
		else if(retval == CT_DeleteVertex.value){
			return CT_DeleteVertex;
		}
		else if(retval == CT_FinishPart.value){
			return CT_FinishPart;
		}
		else if(retval == CT_DeletePart.value){
			return CT_DeletePart;
		}
		else if(retval == CT_FinishSketch.value){
			return CT_FinishSketch;
		}
		else if(retval == CT_DeleteFeature.value){
			return CT_DeleteFeature;
		}
		else if(retval == CT_SketchProperty.value){
			return CT_SketchProperty;
		}
		else if(retval == CT_BaseView.value){
			return CT_BaseView;
		}
		else if(retval == CT_Standard.value){
			return CT_Standard;
		}
		else if(retval == CT_All.value){
			return CT_All;
		}
		else if(retval == CT_EnglishLabel.value){
			return CT_EnglishLabel;
		}
		else if(retval == CT_ChineseLabel.value){
			return CT_ChineseLabel;
		}
		else if(retval == CT_BrightDay.value){
			return CT_BrightDay;
		}
		else if(retval == CT_BlackBack.value){
			return CT_BlackBack;
		}
		else if(retval == CT_WhiteBack.value){
			return CT_WhiteBack;
		}
		else if(retval == CT_Night.value){
			return CT_Night;
		}
		else if(retval == CT_Dusk.value){
			return CT_Dusk;
		}
		else if(retval == CT_BlurRelationship.value){
			return CT_BlurRelationship;
		}
		else if(retval == CT_SpecificRelationship.value){
			return CT_SpecificRelationship;
		}
		else if(retval == CT_SaftyContour5m.value){
			return CT_SaftyContour5m;
		}
		else if(retval == CT_SaftyContour10m.value){
			return CT_SaftyContour10m;
		}
		else if(retval == CT_SaftyContour20m.value){
			return CT_SaftyContour20m;
		}
		else if(retval == CT_SaftyContour30m.value){
			return CT_SaftyContour30m;
		}
		else if(retval == CT_SimpleSymbol.value){
			return CT_SimpleSymbol;
		}
		else if(retval == CT_Traditional.value){
			return CT_Traditional;
		}
		else if(retval == CT_ViewCategoryEntryBox.value){
			return CT_ViewCategoryEntryBox;
		}
		else if(retval == CT_ColorModeEntryBox.value){
			return CT_ColorModeEntryBox;
		}
		else if(retval == CT_SymbolTypeEntryBox.value){
			return CT_SymbolTypeEntryBox;
		}
		else if(retval == CT_SaftyContourEntryBox.value){
			return CT_SaftyContourEntryBox;
		}
		else if(retval == CT_LabelTypeEntryBox.value){
			return CT_LabelTypeEntryBox;
		}
		else if(retval == CT_LayerConfigEntryBox.value){
			return CT_LayerConfigEntryBox;
		}
		else if(retval == CT_QueryModeEntryBox.value){
			return CT_QueryModeEntryBox;
		}
		else if(retval == CT_NetworkAnalystNewBtn.value){
			return CT_NetworkAnalystNewBtn;
		}
		else if(retval == CT_NetworkAnalystNewRoute.value){
			return CT_NetworkAnalystNewRoute;
		}
		else if(retval == CT_NetworkAnalystLayerBox.value){
			return CT_NetworkAnalystLayerBox;
		}
		else if(retval == CT_NetworkAnalystDatasetBox.value){
			return CT_NetworkAnalystDatasetBox;
		}
		else if(retval == CT_NetworkAnalystSolve.value){
			return CT_NetworkAnalystSolve;
		}
		else if(retval == CT_StartEditing3D.value){
			return CT_StartEditing3D;
		}
		else if(retval == CT_StopEditing3D.value){
			return CT_StopEditing3D;
		}
		else if(retval == CT_SaveEditing3D.value){
			return CT_SaveEditing3D;
		}
		else if(retval == CT_Undo3D.value){
			return CT_Undo3D;
		}
		else if(retval == CT_Redo3D.value){
			return CT_Redo3D;
		}
		else if(retval == CT_LayerEditing3D.value){
			return CT_LayerEditing3D;
		}
		else if(retval == CT_ModleEditing3D.value){
			return CT_ModleEditing3D;
		}
		else if(retval == CT_EffectEditing3D.value){
			return CT_EffectEditing3D;
		}
		else if(retval == CT_RegionFlood3D.value){
			return CT_RegionFlood3D;
		}
		else if(retval == CT_Section3D.value){
			return CT_Section3D;
		}
		else if(retval == CT_Volume3D.value){
			return CT_Volume3D;
		}
		else if(retval == CT_Visibility3D.value){
			return CT_Visibility3D;
		}
		else if(retval == CT_Slope3D.value){
			return CT_Slope3D;
		}
		else if(retval == CT_MeasureVertical3D.value){
			return CT_MeasureVertical3D;
		}
		else if(retval == CT_MeasurePoint3D.value){
			return CT_MeasurePoint3D;
		}
		else if(retval == CT_MeasureArea3D.value){
			return CT_MeasureArea3D;
		}
		else if(retval == CT_MeasureLength3D.value){
			return CT_MeasureLength3D;
		}
		else if(retval == CT_MeasureAzimuth3D.value){
			return CT_MeasureAzimuth3D;
		}
		else if(retval == CT_ClearMeasureAnalysis.value){
			return CT_ClearMeasureAnalysis;
		}
		else if(retval == CT_SelectionSubmesh.value){
			return CT_SelectionSubmesh;
		}
		else if(retval == CT_SelectionByPoint3D.value){
			return CT_SelectionByPoint3D;
		}
		else if(retval == CT_SelectionByCircle3D.value){
			return CT_SelectionByCircle3D;
		}
		else if(retval == CT_SelectionByPolygon3D.value){
			return CT_SelectionByPolygon3D;
		}
		else if(retval == CT_SelectionByTrangle3D.value){
			return CT_SelectionByTrangle3D;
		}
		else if(retval == CT_SelectionBySql3D.value){
			return CT_SelectionBySql3D;
		}
		else if(retval == CT_SelectionClear3D.value){
			return CT_SelectionClear3D;
		}
		else if(retval == CT_Information3D.value){
			return CT_Information3D;
		}
		else if(retval == CT_NewRoute.value){
			return CT_NewRoute;
		}
		else if(retval == CT_DeleteRoute.value){
			return CT_DeleteRoute;
		}
		else if(retval == CT_RouteProperty.value){
			return CT_RouteProperty;
		}
		else if(retval == CT_Start.value){
			return CT_Start;
		}
		else if(retval == CT_Pause.value){
			return CT_Pause;
		}
		else if(retval == CT_Stop.value){
			return CT_Stop;
		}
		else if(retval == CT_Exit.value){
			return CT_Exit;
		}
		else if(retval == CT_RouteNames.value){
			return CT_RouteNames;
		}
		else if(retval == CT_StartSample.value){
			return CT_StartSample;
		}
		else if(retval == CT_StopSample.value){
			return CT_StopSample;
		}
		else if(retval == CT_StartEdit.value){
			return CT_StartEdit;
		}
		else if(retval == CT_StopEdit.value){
			return CT_StopEdit;
		}
		else if(retval == CT_PageFullExtent.value){
			return CT_PageFullExtent;
		}
		else if(retval == CT_PageNormal.value){
			return CT_PageNormal;
		}
		else if(retval == CT_InsertMap.value){
			return CT_InsertMap;
		}
		else if(retval == CT_SquareGrid.value){
			return CT_SquareGrid;
		}
		else if(retval == CT_InsertNorthArrow.value){
			return CT_InsertNorthArrow;
		}
		else if(retval == CT_InsertLegend.value){
			return CT_InsertLegend;
		}
		else if(retval == CT_InsertScaleText.value){
			return CT_InsertScaleText;
		}
		else if(retval == CT_InsertText.value){
			return CT_InsertText;
		}
		else if(retval == CT_InsertScaleBar.value){
			return CT_InsertScaleBar;
		}
		else if(retval == CT_InsertMapTitle.value){
			return CT_InsertMapTitle;
		}
		else if(retval == CT_InsertPicture.value){
			return CT_InsertPicture;
		}
		else if(retval == CT_DeleteElement.value){
			return CT_DeleteElement;
		}
		else if(retval == CT_PageSetting.value){
			return CT_PageSetting;
		}
		else if(retval == CT_AlignLeft.value){
			return CT_AlignLeft;
		}
		else if(retval == CT_AlignTop.value){
			return CT_AlignTop;
		}
		else if(retval == CT_ALignRight.value){
			return CT_ALignRight;
		}
		else if(retval == CT_AlignBottom.value){
			return CT_AlignBottom;
		}
		else if(retval == CT_AlignMid.value){
			return CT_AlignMid;
		}
		else if(retval == CT_AlignHorMid.value){
			return CT_AlignHorMid;
		}
		else if(retval == CT_AlignVerMid.value){
			return CT_AlignVerMid;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVCommandTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
