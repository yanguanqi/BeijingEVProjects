package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EV_ToolBarType implements INativeEnum<EV_ToolBarType> {
	TBT_Roam_2D(EV_ToolBarTypeHelper.ENUM_VALUES[0]),
	TBT_Query_2D(EV_ToolBarTypeHelper.ENUM_VALUES[1]),
	TBT_Attribute_2D(EV_ToolBarTypeHelper.ENUM_VALUES[2]),
	TBT_Measure_2D(EV_ToolBarTypeHelper.ENUM_VALUES[3]),
	TBT_Editing_2D(EV_ToolBarTypeHelper.ENUM_VALUES[4]),
	TBT_NewGeometry_2D(EV_ToolBarTypeHelper.ENUM_VALUES[5]),
	TBT_AdvancedEditing_2D(EV_ToolBarTypeHelper.ENUM_VALUES[6]),
	TBT_NetworkAnalyst_2D(EV_ToolBarTypeHelper.ENUM_VALUES[7]),
	TBT_GeoCorrection_2D(EV_ToolBarTypeHelper.ENUM_VALUES[8]),
	TBT_ChartTool(EV_ToolBarTypeHelper.ENUM_VALUES[9]),
	TBT_Measure_3d(EV_ToolBarTypeHelper.ENUM_VALUES[10]),
	TBT_Query_3d(EV_ToolBarTypeHelper.ENUM_VALUES[11]),
	TBT_Attribute_3d(EV_ToolBarTypeHelper.ENUM_VALUES[12]),
	TBT_ModelLayerSelection(EV_ToolBarTypeHelper.ENUM_VALUES[13]),
	TBT_Analyse_3d(EV_ToolBarTypeHelper.ENUM_VALUES[14]),
	TBT_Editing_3d(EV_ToolBarTypeHelper.ENUM_VALUES[15]),
	TBT_FlyProperty_3d(EV_ToolBarTypeHelper.ENUM_VALUES[16]),
	TBT_ChartTool_3d(EV_ToolBarTypeHelper.ENUM_VALUES[17]),
	TBT_Custom(EV_ToolBarTypeHelper.ENUM_VALUES[18]),
	TBT_Roam_2D_InPage(EV_ToolBarTypeHelper.ENUM_VALUES[19]),
	TBT_Skim_Layout(EV_ToolBarTypeHelper.ENUM_VALUES[20]),
	TBT_Element_Layout(EV_ToolBarTypeHelper.ENUM_VALUES[21]),
	TBT_Element_Operation(EV_ToolBarTypeHelper.ENUM_VALUES[22]),
	TBT_Output_Layout(EV_ToolBarTypeHelper.ENUM_VALUES[23]);
	private int value;
	EV_ToolBarType(int i) {
		this.value = i;
	}
	public EV_ToolBarType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EV_ToolBarType toEnum(int retval) {
		if(retval == TBT_Roam_2D.value){
			return TBT_Roam_2D;
		}
		else if(retval == TBT_Query_2D.value){
			return TBT_Query_2D;
		}
		else if(retval == TBT_Attribute_2D.value){
			return TBT_Attribute_2D;
		}
		else if(retval == TBT_Measure_2D.value){
			return TBT_Measure_2D;
		}
		else if(retval == TBT_Editing_2D.value){
			return TBT_Editing_2D;
		}
		else if(retval == TBT_NewGeometry_2D.value){
			return TBT_NewGeometry_2D;
		}
		else if(retval == TBT_AdvancedEditing_2D.value){
			return TBT_AdvancedEditing_2D;
		}
		else if(retval == TBT_NetworkAnalyst_2D.value){
			return TBT_NetworkAnalyst_2D;
		}
		else if(retval == TBT_GeoCorrection_2D.value){
			return TBT_GeoCorrection_2D;
		}
		else if(retval == TBT_ChartTool.value){
			return TBT_ChartTool;
		}
		else if(retval == TBT_Measure_3d.value){
			return TBT_Measure_3d;
		}
		else if(retval == TBT_Query_3d.value){
			return TBT_Query_3d;
		}
		else if(retval == TBT_Attribute_3d.value){
			return TBT_Attribute_3d;
		}
		else if(retval == TBT_ModelLayerSelection.value){
			return TBT_ModelLayerSelection;
		}
		else if(retval == TBT_Analyse_3d.value){
			return TBT_Analyse_3d;
		}
		else if(retval == TBT_Editing_3d.value){
			return TBT_Editing_3d;
		}
		else if(retval == TBT_FlyProperty_3d.value){
			return TBT_FlyProperty_3d;
		}
		else if(retval == TBT_ChartTool_3d.value){
			return TBT_ChartTool_3d;
		}
		else if(retval == TBT_Custom.value){
			return TBT_Custom;
		}
		else if(retval == TBT_Roam_2D_InPage.value){
			return TBT_Roam_2D_InPage;
		}
		else if(retval == TBT_Skim_Layout.value){
			return TBT_Skim_Layout;
		}
		else if(retval == TBT_Element_Layout.value){
			return TBT_Element_Layout;
		}
		else if(retval == TBT_Element_Operation.value){
			return TBT_Element_Operation;
		}
		else if(retval == TBT_Output_Layout.value){
			return TBT_Output_Layout;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EV_ToolBarTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
