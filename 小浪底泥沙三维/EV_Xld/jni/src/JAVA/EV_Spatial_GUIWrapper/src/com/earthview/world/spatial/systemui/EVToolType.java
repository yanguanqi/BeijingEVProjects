package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVToolType implements INativeEnum<EVToolType> {
	TT_None(EVToolTypeHelper.ENUM_VALUES[0]),
	TT_ZoomIn(EVToolTypeHelper.ENUM_VALUES[1]),
	TT_ZoomOut(EVToolTypeHelper.ENUM_VALUES[2]),
	TT_ZoomFree(EVToolTypeHelper.ENUM_VALUES[3]),
	TT_Pan(EVToolTypeHelper.ENUM_VALUES[4]),
	TT_PointSelect(EVToolTypeHelper.ENUM_VALUES[5]),
	TT_RectangleSelect(EVToolTypeHelper.ENUM_VALUES[6]),
	TT_PolygonSelect(EVToolTypeHelper.ENUM_VALUES[7]),
	TT_Measure(EVToolTypeHelper.ENUM_VALUES[8]),
	CT_DefaultTool(EVToolTypeHelper.ENUM_VALUES[9]),
	TT_SketchFeature(EVToolTypeHelper.ENUM_VALUES[10]),
	TT_ModifyFeatures(EVToolTypeHelper.ENUM_VALUES[11]),
	TT_MidPoint(EVToolTypeHelper.ENUM_VALUES[12]),
	TT_RightAngle(EVToolTypeHelper.ENUM_VALUES[13]),
	TT_RightAngleRestrain(EVToolTypeHelper.ENUM_VALUES[14]),
	TT_ParallelRestrain(EVToolTypeHelper.ENUM_VALUES[15]),
	TT_GeometryTracking(EVToolTypeHelper.ENUM_VALUES[16]),
	TT_TangentCurve(EVToolTypeHelper.ENUM_VALUES[17]),
	TT_ThreePointsArc1(EVToolTypeHelper.ENUM_VALUES[18]),
	TT_ThreePointsArc2(EVToolTypeHelper.ENUM_VALUES[19]),
	TT_AngleArc(EVToolTypeHelper.ENUM_VALUES[20]),
	TT_EllipticArc(EVToolTypeHelper.ENUM_VALUES[21]),
	TT_BezierCurve(EVToolTypeHelper.ENUM_VALUES[22]),
	TT_Parallel(EVToolTypeHelper.ENUM_VALUES[23]),
	TT_ConcentricCircle(EVToolTypeHelper.ENUM_VALUES[24]),
	TT_TwoPointsCircle(EVToolTypeHelper.ENUM_VALUES[25]),
	TT_ThreePointsCircle(EVToolTypeHelper.ENUM_VALUES[26]),
	TT_CircleChord(EVToolTypeHelper.ENUM_VALUES[27]),
	TT_CircleSector(EVToolTypeHelper.ENUM_VALUES[28]),
	TT_Ellipse(EVToolTypeHelper.ENUM_VALUES[29]),
	TT_EllipticChord(EVToolTypeHelper.ENUM_VALUES[30]),
	TT_EllipticSector(EVToolTypeHelper.ENUM_VALUES[31]),
	TT_Rectangle(EVToolTypeHelper.ENUM_VALUES[32]),
	TT_RoundRectangle(EVToolTypeHelper.ENUM_VALUES[33]),
	TT_Parallelogram(EVToolTypeHelper.ENUM_VALUES[34]),
	TT_RotateFeatures(EVToolTypeHelper.ENUM_VALUES[35]),
	TT_EditSelect(EVToolTypeHelper.ENUM_VALUES[36]),
	TT_CopyFeature(EVToolTypeHelper.ENUM_VALUES[37]),
	TT_CircularAngle(EVToolTypeHelper.ENUM_VALUES[38]),
	TT_StretchLine(EVToolTypeHelper.ENUM_VALUES[39]),
	TT_BreakLine(EVToolTypeHelper.ENUM_VALUES[40]),
	TT_TrimLine(EVToolTypeHelper.ENUM_VALUES[41]),
	TT_IntersectionLine(EVToolTypeHelper.ENUM_VALUES[42]),
	TT_CombineParts(EVToolTypeHelper.ENUM_VALUES[43]),
	TT_SplitParts(EVToolTypeHelper.ENUM_VALUES[44]),
	TT_LineSimplify(EVToolTypeHelper.ENUM_VALUES[45]),
	TT_LineSmooth(EVToolTypeHelper.ENUM_VALUES[46]),
	TT_ClipFeature(EVToolTypeHelper.ENUM_VALUES[47]),
	TT_GeometryUnion(EVToolTypeHelper.ENUM_VALUES[48]),
	TT_SplitObject(EVToolTypeHelper.ENUM_VALUES[49]),
	TT_OffsetObject(EVToolTypeHelper.ENUM_VALUES[50]),
	TT_Mirror(EVToolTypeHelper.ENUM_VALUES[51]),
	TT_Recondition(EVToolTypeHelper.ENUM_VALUES[52]),
	TT_NetworkAnalysis(EVToolTypeHelper.ENUM_VALUES[53]),
	TT_NetworkAnalyst_Stop(EVToolTypeHelper.ENUM_VALUES[54]),
	TT_NetworkAnalyst_Barriar(EVToolTypeHelper.ENUM_VALUES[55]),
	TT_NetworkAnalyst_Adjust(EVToolTypeHelper.ENUM_VALUES[56]),
	TT_Rectification(EVToolTypeHelper.ENUM_VALUES[57]),
	TT_Unknown3D(EVToolTypeHelper.ENUM_VALUES[58]),
	TT_RaySelect(EVToolTypeHelper.ENUM_VALUES[59]),
	TT_ComponentSelect(EVToolTypeHelper.ENUM_VALUES[60]),
	TT_RectSelect3D(EVToolTypeHelper.ENUM_VALUES[61]),
	TT_TerrainQuery(EVToolTypeHelper.ENUM_VALUES[62]),
	TT_RegionQuery(EVToolTypeHelper.ENUM_VALUES[63]),
	TT_CurtainEdit(EVToolTypeHelper.ENUM_VALUES[64]),
	TT_CommonRaySelect(EVToolTypeHelper.ENUM_VALUES[65]),
	TT_Visibibility(EVToolTypeHelper.ENUM_VALUES[66]),
	TT_Section(EVToolTypeHelper.ENUM_VALUES[67]),
	TT_Slope(EVToolTypeHelper.ENUM_VALUES[68]),
	TT_Volume(EVToolTypeHelper.ENUM_VALUES[69]),
	TT_RegionFlood(EVToolTypeHelper.ENUM_VALUES[70]),
	TT_Measure3DLength(EVToolTypeHelper.ENUM_VALUES[71]),
	TT_Measure3DArea(EVToolTypeHelper.ENUM_VALUES[72]),
	TT_Measure3DVertical(EVToolTypeHelper.ENUM_VALUES[73]),
	TT_Measure3DPoint(EVToolTypeHelper.ENUM_VALUES[74]),
	TT_Measure3DAzimuth(EVToolTypeHelper.ENUM_VALUES[75]),
	TT_PlaceMarkEditor(EVToolTypeHelper.ENUM_VALUES[76]),
	TT_LineStringEditor(EVToolTypeHelper.ENUM_VALUES[77]),
	TT_PolygonEditor(EVToolTypeHelper.ENUM_VALUES[78]),
	TT_ImageOverlayerEditor(EVToolTypeHelper.ENUM_VALUES[79]),
	TT_PolygonExEditor(EVToolTypeHelper.ENUM_VALUES[80]),
	TT_ModelEditor(EVToolTypeHelper.ENUM_VALUES[81]),
	TT_PhotoEditor(EVToolTypeHelper.ENUM_VALUES[82]),
	TT_VectorMovableEditor(EVToolTypeHelper.ENUM_VALUES[83]),
	TT_ArrowEditor(EVToolTypeHelper.ENUM_VALUES[84]),
	TT_RegionLodEditor(EVToolTypeHelper.ENUM_VALUES[85]),
	TT_LAYER3DEDITOR(EVToolTypeHelper.ENUM_VALUES[86]),
	TT_PAGEPAN(EVToolTypeHelper.ENUM_VALUES[87]),
	TT_PAGEZOOMIN(EVToolTypeHelper.ENUM_VALUES[88]),
	TT_PAGEZOOMOUT(EVToolTypeHelper.ENUM_VALUES[89]),
	TT_ELEMENTSELECTION(EVToolTypeHelper.ENUM_VALUES[90]);
	private int value;
	EVToolType(int i) {
		this.value = i;
	}
	public EVToolType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVToolType toEnum(int retval) {
		if(retval == TT_None.value){
			return TT_None;
		}
		else if(retval == TT_ZoomIn.value){
			return TT_ZoomIn;
		}
		else if(retval == TT_ZoomOut.value){
			return TT_ZoomOut;
		}
		else if(retval == TT_ZoomFree.value){
			return TT_ZoomFree;
		}
		else if(retval == TT_Pan.value){
			return TT_Pan;
		}
		else if(retval == TT_PointSelect.value){
			return TT_PointSelect;
		}
		else if(retval == TT_RectangleSelect.value){
			return TT_RectangleSelect;
		}
		else if(retval == TT_PolygonSelect.value){
			return TT_PolygonSelect;
		}
		else if(retval == TT_Measure.value){
			return TT_Measure;
		}
		else if(retval == CT_DefaultTool.value){
			return CT_DefaultTool;
		}
		else if(retval == TT_SketchFeature.value){
			return TT_SketchFeature;
		}
		else if(retval == TT_ModifyFeatures.value){
			return TT_ModifyFeatures;
		}
		else if(retval == TT_MidPoint.value){
			return TT_MidPoint;
		}
		else if(retval == TT_RightAngle.value){
			return TT_RightAngle;
		}
		else if(retval == TT_RightAngleRestrain.value){
			return TT_RightAngleRestrain;
		}
		else if(retval == TT_ParallelRestrain.value){
			return TT_ParallelRestrain;
		}
		else if(retval == TT_GeometryTracking.value){
			return TT_GeometryTracking;
		}
		else if(retval == TT_TangentCurve.value){
			return TT_TangentCurve;
		}
		else if(retval == TT_ThreePointsArc1.value){
			return TT_ThreePointsArc1;
		}
		else if(retval == TT_ThreePointsArc2.value){
			return TT_ThreePointsArc2;
		}
		else if(retval == TT_AngleArc.value){
			return TT_AngleArc;
		}
		else if(retval == TT_EllipticArc.value){
			return TT_EllipticArc;
		}
		else if(retval == TT_BezierCurve.value){
			return TT_BezierCurve;
		}
		else if(retval == TT_Parallel.value){
			return TT_Parallel;
		}
		else if(retval == TT_ConcentricCircle.value){
			return TT_ConcentricCircle;
		}
		else if(retval == TT_TwoPointsCircle.value){
			return TT_TwoPointsCircle;
		}
		else if(retval == TT_ThreePointsCircle.value){
			return TT_ThreePointsCircle;
		}
		else if(retval == TT_CircleChord.value){
			return TT_CircleChord;
		}
		else if(retval == TT_CircleSector.value){
			return TT_CircleSector;
		}
		else if(retval == TT_Ellipse.value){
			return TT_Ellipse;
		}
		else if(retval == TT_EllipticChord.value){
			return TT_EllipticChord;
		}
		else if(retval == TT_EllipticSector.value){
			return TT_EllipticSector;
		}
		else if(retval == TT_Rectangle.value){
			return TT_Rectangle;
		}
		else if(retval == TT_RoundRectangle.value){
			return TT_RoundRectangle;
		}
		else if(retval == TT_Parallelogram.value){
			return TT_Parallelogram;
		}
		else if(retval == TT_RotateFeatures.value){
			return TT_RotateFeatures;
		}
		else if(retval == TT_EditSelect.value){
			return TT_EditSelect;
		}
		else if(retval == TT_CopyFeature.value){
			return TT_CopyFeature;
		}
		else if(retval == TT_CircularAngle.value){
			return TT_CircularAngle;
		}
		else if(retval == TT_StretchLine.value){
			return TT_StretchLine;
		}
		else if(retval == TT_BreakLine.value){
			return TT_BreakLine;
		}
		else if(retval == TT_TrimLine.value){
			return TT_TrimLine;
		}
		else if(retval == TT_IntersectionLine.value){
			return TT_IntersectionLine;
		}
		else if(retval == TT_CombineParts.value){
			return TT_CombineParts;
		}
		else if(retval == TT_SplitParts.value){
			return TT_SplitParts;
		}
		else if(retval == TT_LineSimplify.value){
			return TT_LineSimplify;
		}
		else if(retval == TT_LineSmooth.value){
			return TT_LineSmooth;
		}
		else if(retval == TT_ClipFeature.value){
			return TT_ClipFeature;
		}
		else if(retval == TT_GeometryUnion.value){
			return TT_GeometryUnion;
		}
		else if(retval == TT_SplitObject.value){
			return TT_SplitObject;
		}
		else if(retval == TT_OffsetObject.value){
			return TT_OffsetObject;
		}
		else if(retval == TT_Mirror.value){
			return TT_Mirror;
		}
		else if(retval == TT_Recondition.value){
			return TT_Recondition;
		}
		else if(retval == TT_NetworkAnalysis.value){
			return TT_NetworkAnalysis;
		}
		else if(retval == TT_NetworkAnalyst_Stop.value){
			return TT_NetworkAnalyst_Stop;
		}
		else if(retval == TT_NetworkAnalyst_Barriar.value){
			return TT_NetworkAnalyst_Barriar;
		}
		else if(retval == TT_NetworkAnalyst_Adjust.value){
			return TT_NetworkAnalyst_Adjust;
		}
		else if(retval == TT_Rectification.value){
			return TT_Rectification;
		}
		else if(retval == TT_Unknown3D.value){
			return TT_Unknown3D;
		}
		else if(retval == TT_RaySelect.value){
			return TT_RaySelect;
		}
		else if(retval == TT_ComponentSelect.value){
			return TT_ComponentSelect;
		}
		else if(retval == TT_RectSelect3D.value){
			return TT_RectSelect3D;
		}
		else if(retval == TT_TerrainQuery.value){
			return TT_TerrainQuery;
		}
		else if(retval == TT_RegionQuery.value){
			return TT_RegionQuery;
		}
		else if(retval == TT_CurtainEdit.value){
			return TT_CurtainEdit;
		}
		else if(retval == TT_CommonRaySelect.value){
			return TT_CommonRaySelect;
		}
		else if(retval == TT_Visibibility.value){
			return TT_Visibibility;
		}
		else if(retval == TT_Section.value){
			return TT_Section;
		}
		else if(retval == TT_Slope.value){
			return TT_Slope;
		}
		else if(retval == TT_Volume.value){
			return TT_Volume;
		}
		else if(retval == TT_RegionFlood.value){
			return TT_RegionFlood;
		}
		else if(retval == TT_Measure3DLength.value){
			return TT_Measure3DLength;
		}
		else if(retval == TT_Measure3DArea.value){
			return TT_Measure3DArea;
		}
		else if(retval == TT_Measure3DVertical.value){
			return TT_Measure3DVertical;
		}
		else if(retval == TT_Measure3DPoint.value){
			return TT_Measure3DPoint;
		}
		else if(retval == TT_Measure3DAzimuth.value){
			return TT_Measure3DAzimuth;
		}
		else if(retval == TT_PlaceMarkEditor.value){
			return TT_PlaceMarkEditor;
		}
		else if(retval == TT_LineStringEditor.value){
			return TT_LineStringEditor;
		}
		else if(retval == TT_PolygonEditor.value){
			return TT_PolygonEditor;
		}
		else if(retval == TT_ImageOverlayerEditor.value){
			return TT_ImageOverlayerEditor;
		}
		else if(retval == TT_PolygonExEditor.value){
			return TT_PolygonExEditor;
		}
		else if(retval == TT_ModelEditor.value){
			return TT_ModelEditor;
		}
		else if(retval == TT_PhotoEditor.value){
			return TT_PhotoEditor;
		}
		else if(retval == TT_VectorMovableEditor.value){
			return TT_VectorMovableEditor;
		}
		else if(retval == TT_ArrowEditor.value){
			return TT_ArrowEditor;
		}
		else if(retval == TT_RegionLodEditor.value){
			return TT_RegionLodEditor;
		}
		else if(retval == TT_LAYER3DEDITOR.value){
			return TT_LAYER3DEDITOR;
		}
		else if(retval == TT_PAGEPAN.value){
			return TT_PAGEPAN;
		}
		else if(retval == TT_PAGEZOOMIN.value){
			return TT_PAGEZOOMIN;
		}
		else if(retval == TT_PAGEZOOMOUT.value){
			return TT_PAGEZOOMOUT;
		}
		else if(retval == TT_ELEMENTSELECTION.value){
			return TT_ELEMENTSELECTION;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVToolTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
