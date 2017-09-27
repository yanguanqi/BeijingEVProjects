package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Parameter extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CParameter", new ParameterClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::JCParameterProxy", new ParameterClassFactory());
	}

	/// Shader parameter semantic.
	public enum Semantic implements INativeEnum<Semantic> {
		SPS_UNKNOWN(SemanticHelper.ENUM_VALUES[0]),
		SPS_POSITION(SemanticHelper.ENUM_VALUES[1]),
		SPS_BLEND_WEIGHTS(SemanticHelper.ENUM_VALUES[2]),
		SPS_BLEND_INDICES(SemanticHelper.ENUM_VALUES[3]),
		SPS_NORMAL(SemanticHelper.ENUM_VALUES[4]),
		SPS_COLOR(SemanticHelper.ENUM_VALUES[5]),
		SPS_TEXTURE_COORDINATES(SemanticHelper.ENUM_VALUES[6]),
		SPS_BINORMAL(SemanticHelper.ENUM_VALUES[7]),
		SPS_TANGENT(SemanticHelper.ENUM_VALUES[8]);
		private int value;
		Semantic(int i) {
			this.value = i;
		}
		public Semantic getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final Semantic toEnum(int retval) {
			if(retval == SPS_UNKNOWN.value){
				return SPS_UNKNOWN;
			}
			else if(retval == SPS_POSITION.value){
				return SPS_POSITION;
			}
			else if(retval == SPS_BLEND_WEIGHTS.value){
				return SPS_BLEND_WEIGHTS;
			}
			else if(retval == SPS_BLEND_INDICES.value){
				return SPS_BLEND_INDICES;
			}
			else if(retval == SPS_NORMAL.value){
				return SPS_NORMAL;
			}
			else if(retval == SPS_COLOR.value){
				return SPS_COLOR;
			}
			else if(retval == SPS_TEXTURE_COORDINATES.value){
				return SPS_TEXTURE_COORDINATES;
			}
			else if(retval == SPS_BINORMAL.value){
				return SPS_BINORMAL;
			}
			else if(retval == SPS_TANGENT.value){
				return SPS_TANGENT;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class SemanticHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/// Shader parameter content.
	public enum Content implements INativeEnum<Content> {
		SPC_UNKNOWN(ContentHelper.ENUM_VALUES[0]),
		SPC_POSITION_OBJECT_SPACE(ContentHelper.ENUM_VALUES[1]),
		SPC_POSITION_WORLD_SPACE(ContentHelper.ENUM_VALUES[2]),
		SPC_POSITION_VIEW_SPACE(ContentHelper.ENUM_VALUES[3]),
		SPC_POSITION_PROJECTIVE_SPACE(ContentHelper.ENUM_VALUES[4]),
		SPC_POSITION_LIGHT_SPACE0(ContentHelper.ENUM_VALUES[5]),
		SPC_POSITION_LIGHT_SPACE1(ContentHelper.ENUM_VALUES[6]),
		SPC_POSITION_LIGHT_SPACE2(ContentHelper.ENUM_VALUES[7]),
		SPC_POSITION_LIGHT_SPACE3(ContentHelper.ENUM_VALUES[8]),
		SPC_POSITION_LIGHT_SPACE4(ContentHelper.ENUM_VALUES[9]),
		SPC_POSITION_LIGHT_SPACE5(ContentHelper.ENUM_VALUES[10]),
		SPC_POSITION_LIGHT_SPACE6(ContentHelper.ENUM_VALUES[11]),
		SPC_POSITION_LIGHT_SPACE7(ContentHelper.ENUM_VALUES[12]),
		SPC_NORMAL_OBJECT_SPACE(ContentHelper.ENUM_VALUES[13]),
		SPC_NORMAL_WORLD_SPACE(ContentHelper.ENUM_VALUES[14]),
		SPC_NORMAL_VIEW_SPACE(ContentHelper.ENUM_VALUES[15]),
		SPC_NORMAL_TANGENT_SPACE(ContentHelper.ENUM_VALUES[16]),
		SPC_POSTOCAMERA_OBJECT_SPACE(ContentHelper.ENUM_VALUES[17]),
		SPC_POSTOCAMERA_WORLD_SPACE(ContentHelper.ENUM_VALUES[18]),
		SPC_POSTOCAMERA_VIEW_SPACE(ContentHelper.ENUM_VALUES[19]),
		SPC_POSTOCAMERA_TANGENT_SPACE(ContentHelper.ENUM_VALUES[20]),
		SPC_POSTOLIGHT_OBJECT_SPACE0(ContentHelper.ENUM_VALUES[21]),
		SPC_POSTOLIGHT_OBJECT_SPACE1(ContentHelper.ENUM_VALUES[22]),
		SPC_POSTOLIGHT_OBJECT_SPACE2(ContentHelper.ENUM_VALUES[23]),
		SPC_POSTOLIGHT_OBJECT_SPACE3(ContentHelper.ENUM_VALUES[24]),
		SPC_POSTOLIGHT_OBJECT_SPACE4(ContentHelper.ENUM_VALUES[25]),
		SPC_POSTOLIGHT_OBJECT_SPACE5(ContentHelper.ENUM_VALUES[26]),
		SPC_POSTOLIGHT_OBJECT_SPACE6(ContentHelper.ENUM_VALUES[27]),
		SPC_POSTOLIGHT_OBJECT_SPACE7(ContentHelper.ENUM_VALUES[28]),
		SPC_POSTOLIGHT_WORLD_SPACE0(ContentHelper.ENUM_VALUES[29]),
		SPC_POSTOLIGHT_WORLD_SPACE1(ContentHelper.ENUM_VALUES[30]),
		SPC_POSTOLIGHT_WORLD_SPACE2(ContentHelper.ENUM_VALUES[31]),
		SPC_POSTOLIGHT_WORLD_SPACE3(ContentHelper.ENUM_VALUES[32]),
		SPC_POSTOLIGHT_WORLD_SPACE4(ContentHelper.ENUM_VALUES[33]),
		SPC_POSTOLIGHT_WORLD_SPACE5(ContentHelper.ENUM_VALUES[34]),
		SPC_POSTOLIGHT_WORLD_SPACE6(ContentHelper.ENUM_VALUES[35]),
		SPC_POSTOLIGHT_WORLD_SPACE7(ContentHelper.ENUM_VALUES[36]),
		SPC_POSTOLIGHT_VIEW_SPACE0(ContentHelper.ENUM_VALUES[37]),
		SPC_POSTOLIGHT_VIEW_SPACE1(ContentHelper.ENUM_VALUES[38]),
		SPC_POSTOLIGHT_VIEW_SPACE2(ContentHelper.ENUM_VALUES[39]),
		SPC_POSTOLIGHT_VIEW_SPACE3(ContentHelper.ENUM_VALUES[40]),
		SPC_POSTOLIGHT_VIEW_SPACE4(ContentHelper.ENUM_VALUES[41]),
		SPC_POSTOLIGHT_VIEW_SPACE5(ContentHelper.ENUM_VALUES[42]),
		SPC_POSTOLIGHT_VIEW_SPACE6(ContentHelper.ENUM_VALUES[43]),
		SPC_POSTOLIGHT_VIEW_SPACE7(ContentHelper.ENUM_VALUES[44]),
		SPC_POSTOLIGHT_TANGENT_SPACE0(ContentHelper.ENUM_VALUES[45]),
		SPC_POSTOLIGHT_TANGENT_SPACE1(ContentHelper.ENUM_VALUES[46]),
		SPC_POSTOLIGHT_TANGENT_SPACE2(ContentHelper.ENUM_VALUES[47]),
		SPC_POSTOLIGHT_TANGENT_SPACE3(ContentHelper.ENUM_VALUES[48]),
		SPC_POSTOLIGHT_TANGENT_SPACE4(ContentHelper.ENUM_VALUES[49]),
		SPC_POSTOLIGHT_TANGENT_SPACE5(ContentHelper.ENUM_VALUES[50]),
		SPC_POSTOLIGHT_TANGENT_SPACE6(ContentHelper.ENUM_VALUES[51]),
		SPC_POSTOLIGHT_TANGENT_SPACE7(ContentHelper.ENUM_VALUES[52]),
		SPC_LIGHTDIRECTION_OBJECT_SPACE0(ContentHelper.ENUM_VALUES[53]),
		SPC_LIGHTDIRECTION_OBJECT_SPACE1(ContentHelper.ENUM_VALUES[54]),
		SPC_LIGHTDIRECTION_OBJECT_SPACE2(ContentHelper.ENUM_VALUES[55]),
		SPC_LIGHTDIRECTION_OBJECT_SPACE3(ContentHelper.ENUM_VALUES[56]),
		SPC_LIGHTDIRECTION_OBJECT_SPACE4(ContentHelper.ENUM_VALUES[57]),
		SPC_LIGHTDIRECTION_OBJECT_SPACE5(ContentHelper.ENUM_VALUES[58]),
		SPC_LIGHTDIRECTION_OBJECT_SPACE6(ContentHelper.ENUM_VALUES[59]),
		SPC_LIGHTDIRECTION_OBJECT_SPACE7(ContentHelper.ENUM_VALUES[60]),
		SPC_LIGHTDIRECTION_WORLD_SPACE0(ContentHelper.ENUM_VALUES[61]),
		SPC_LIGHTDIRECTION_WORLD_SPACE1(ContentHelper.ENUM_VALUES[62]),
		SPC_LIGHTDIRECTION_WORLD_SPACE2(ContentHelper.ENUM_VALUES[63]),
		SPC_LIGHTDIRECTION_WORLD_SPACE3(ContentHelper.ENUM_VALUES[64]),
		SPC_LIGHTDIRECTION_WORLD_SPACE4(ContentHelper.ENUM_VALUES[65]),
		SPC_LIGHTDIRECTION_WORLD_SPACE5(ContentHelper.ENUM_VALUES[66]),
		SPC_LIGHTDIRECTION_WORLD_SPACE6(ContentHelper.ENUM_VALUES[67]),
		SPC_LIGHTDIRECTION_WORLD_SPACE7(ContentHelper.ENUM_VALUES[68]),
		SPC_LIGHTDIRECTION_VIEW_SPACE0(ContentHelper.ENUM_VALUES[69]),
		SPC_LIGHTDIRECTION_VIEW_SPACE1(ContentHelper.ENUM_VALUES[70]),
		SPC_LIGHTDIRECTION_VIEW_SPACE2(ContentHelper.ENUM_VALUES[71]),
		SPC_LIGHTDIRECTION_VIEW_SPACE3(ContentHelper.ENUM_VALUES[72]),
		SPC_LIGHTDIRECTION_VIEW_SPACE4(ContentHelper.ENUM_VALUES[73]),
		SPC_LIGHTDIRECTION_VIEW_SPACE5(ContentHelper.ENUM_VALUES[74]),
		SPC_LIGHTDIRECTION_VIEW_SPACE6(ContentHelper.ENUM_VALUES[75]),
		SPC_LIGHTDIRECTION_VIEW_SPACE7(ContentHelper.ENUM_VALUES[76]),
		SPC_LIGHTDIRECTION_TANGENT_SPACE0(ContentHelper.ENUM_VALUES[77]),
		SPC_LIGHTDIRECTION_TANGENT_SPACE1(ContentHelper.ENUM_VALUES[78]),
		SPC_LIGHTDIRECTION_TANGENT_SPACE2(ContentHelper.ENUM_VALUES[79]),
		SPC_LIGHTDIRECTION_TANGENT_SPACE3(ContentHelper.ENUM_VALUES[80]),
		SPC_LIGHTDIRECTION_TANGENT_SPACE4(ContentHelper.ENUM_VALUES[81]),
		SPC_LIGHTDIRECTION_TANGENT_SPACE5(ContentHelper.ENUM_VALUES[82]),
		SPC_LIGHTDIRECTION_TANGENT_SPACE6(ContentHelper.ENUM_VALUES[83]),
		SPC_LIGHTDIRECTION_TANGENT_SPACE7(ContentHelper.ENUM_VALUES[84]),
		SPC_LIGHTPOSITION_OBJECT_SPACE0(ContentHelper.ENUM_VALUES[85]),
		SPC_LIGHTPOSITION_OBJECT_SPACE1(ContentHelper.ENUM_VALUES[86]),
		SPC_LIGHTPOSITION_OBJECT_SPACE2(ContentHelper.ENUM_VALUES[87]),
		SPC_LIGHTPOSITION_OBJECT_SPACE3(ContentHelper.ENUM_VALUES[88]),
		SPC_LIGHTPOSITION_OBJECT_SPACE4(ContentHelper.ENUM_VALUES[89]),
		SPC_LIGHTPOSITION_OBJECT_SPACE5(ContentHelper.ENUM_VALUES[90]),
		SPC_LIGHTPOSITION_OBJECT_SPACE6(ContentHelper.ENUM_VALUES[91]),
		SPC_LIGHTPOSITION_OBJECT_SPACE7(ContentHelper.ENUM_VALUES[92]),
		SPC_LIGHTPOSITION_WORLD_SPACE0(ContentHelper.ENUM_VALUES[93]),
		SPC_LIGHTPOSITION_WORLD_SPACE1(ContentHelper.ENUM_VALUES[94]),
		SPC_LIGHTPOSITION_WORLD_SPACE2(ContentHelper.ENUM_VALUES[95]),
		SPC_LIGHTPOSITION_WORLD_SPACE3(ContentHelper.ENUM_VALUES[96]),
		SPC_LIGHTPOSITION_WORLD_SPACE4(ContentHelper.ENUM_VALUES[97]),
		SPC_LIGHTPOSITION_WORLD_SPACE5(ContentHelper.ENUM_VALUES[98]),
		SPC_LIGHTPOSITION_WORLD_SPACE6(ContentHelper.ENUM_VALUES[99]),
		SPC_LIGHTPOSITION_WORLD_SPACE7(ContentHelper.ENUM_VALUES[100]),
		SPC_LIGHTPOSITIONVIEW_SPACE0(ContentHelper.ENUM_VALUES[101]),
		SPC_LIGHTPOSITIONVIEW_SPACE1(ContentHelper.ENUM_VALUES[102]),
		SPC_LIGHTPOSITIONVIEW_SPACE2(ContentHelper.ENUM_VALUES[103]),
		SPC_LIGHTPOSITIONVIEW_SPACE3(ContentHelper.ENUM_VALUES[104]),
		SPC_LIGHTPOSITIONVIEW_SPACE4(ContentHelper.ENUM_VALUES[105]),
		SPC_LIGHTPOSITIONVIEW_SPACE5(ContentHelper.ENUM_VALUES[106]),
		SPC_LIGHTPOSITIONVIEW_SPACE6(ContentHelper.ENUM_VALUES[107]),
		SPC_LIGHTPOSITIONVIEW_SPACE7(ContentHelper.ENUM_VALUES[108]),
		SPC_LIGHTPOSITION_TANGENT_SPACE(ContentHelper.ENUM_VALUES[109]),
		SPC_BLEND_WEIGHTS(ContentHelper.ENUM_VALUES[110]),
		SPC_BLEND_INDICES(ContentHelper.ENUM_VALUES[111]),
		SPC_TANGENT_OBJECT_SPACE(ContentHelper.ENUM_VALUES[112]),
		SPC_TANGENT_WORLD_SPACE(ContentHelper.ENUM_VALUES[113]),
		SPC_TANGENT_VIEW_SPACE(ContentHelper.ENUM_VALUES[114]),
		SPC_TANGENT_TANGENT_SPACE(ContentHelper.ENUM_VALUES[115]),
		SPC_BINORMAL_OBJECT_SPACE(ContentHelper.ENUM_VALUES[116]),
		SPC_BINORMAL_WORLD_SPACE(ContentHelper.ENUM_VALUES[117]),
		SPC_BINORMAL_VIEW_SPACE(ContentHelper.ENUM_VALUES[118]),
		SPC_BINORMAL_TANGENT_SPACE(ContentHelper.ENUM_VALUES[119]),
		SPC_COLOR_DIFFUSE(ContentHelper.ENUM_VALUES[120]),
		SPC_COLOR_SPECULAR(ContentHelper.ENUM_VALUES[121]),
		SPC_DEPTH_OBJECT_SPACE(ContentHelper.ENUM_VALUES[122]),
		SPC_DEPTH_WORLD_SPACE(ContentHelper.ENUM_VALUES[123]),
		SPC_DEPTH_VIEW_SPACE(ContentHelper.ENUM_VALUES[124]),
		SPC_DEPTH_PROJECTIVE_SPACE(ContentHelper.ENUM_VALUES[125]),
		SPC_TEXTURE_COORDINATE0(ContentHelper.ENUM_VALUES[126]),
		SPC_TEXTURE_COORDINATE1(ContentHelper.ENUM_VALUES[127]),
		SPC_TEXTURE_COORDINATE2(ContentHelper.ENUM_VALUES[128]),
		SPC_TEXTURE_COORDINATE3(ContentHelper.ENUM_VALUES[129]),
		SPC_TEXTURE_COORDINATE4(ContentHelper.ENUM_VALUES[130]),
		SPC_TEXTURE_COORDINATE5(ContentHelper.ENUM_VALUES[131]),
		SPC_TEXTURE_COORDINATE6(ContentHelper.ENUM_VALUES[132]),
		SPC_TEXTURE_COORDINATE7(ContentHelper.ENUM_VALUES[133]),
		SPC_CUSTOM_CONTENT_BEGIN(ContentHelper.ENUM_VALUES[134]),
		SPC_CUSTOM_CONTENT_END(ContentHelper.ENUM_VALUES[135]);
		private int value;
		Content(int i) {
			this.value = i;
		}
		public Content getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final Content toEnum(int retval) {
			if(retval == SPC_UNKNOWN.value){
				return SPC_UNKNOWN;
			}
			else if(retval == SPC_POSITION_OBJECT_SPACE.value){
				return SPC_POSITION_OBJECT_SPACE;
			}
			else if(retval == SPC_POSITION_WORLD_SPACE.value){
				return SPC_POSITION_WORLD_SPACE;
			}
			else if(retval == SPC_POSITION_VIEW_SPACE.value){
				return SPC_POSITION_VIEW_SPACE;
			}
			else if(retval == SPC_POSITION_PROJECTIVE_SPACE.value){
				return SPC_POSITION_PROJECTIVE_SPACE;
			}
			else if(retval == SPC_POSITION_LIGHT_SPACE0.value){
				return SPC_POSITION_LIGHT_SPACE0;
			}
			else if(retval == SPC_POSITION_LIGHT_SPACE1.value){
				return SPC_POSITION_LIGHT_SPACE1;
			}
			else if(retval == SPC_POSITION_LIGHT_SPACE2.value){
				return SPC_POSITION_LIGHT_SPACE2;
			}
			else if(retval == SPC_POSITION_LIGHT_SPACE3.value){
				return SPC_POSITION_LIGHT_SPACE3;
			}
			else if(retval == SPC_POSITION_LIGHT_SPACE4.value){
				return SPC_POSITION_LIGHT_SPACE4;
			}
			else if(retval == SPC_POSITION_LIGHT_SPACE5.value){
				return SPC_POSITION_LIGHT_SPACE5;
			}
			else if(retval == SPC_POSITION_LIGHT_SPACE6.value){
				return SPC_POSITION_LIGHT_SPACE6;
			}
			else if(retval == SPC_POSITION_LIGHT_SPACE7.value){
				return SPC_POSITION_LIGHT_SPACE7;
			}
			else if(retval == SPC_NORMAL_OBJECT_SPACE.value){
				return SPC_NORMAL_OBJECT_SPACE;
			}
			else if(retval == SPC_NORMAL_WORLD_SPACE.value){
				return SPC_NORMAL_WORLD_SPACE;
			}
			else if(retval == SPC_NORMAL_VIEW_SPACE.value){
				return SPC_NORMAL_VIEW_SPACE;
			}
			else if(retval == SPC_NORMAL_TANGENT_SPACE.value){
				return SPC_NORMAL_TANGENT_SPACE;
			}
			else if(retval == SPC_POSTOCAMERA_OBJECT_SPACE.value){
				return SPC_POSTOCAMERA_OBJECT_SPACE;
			}
			else if(retval == SPC_POSTOCAMERA_WORLD_SPACE.value){
				return SPC_POSTOCAMERA_WORLD_SPACE;
			}
			else if(retval == SPC_POSTOCAMERA_VIEW_SPACE.value){
				return SPC_POSTOCAMERA_VIEW_SPACE;
			}
			else if(retval == SPC_POSTOCAMERA_TANGENT_SPACE.value){
				return SPC_POSTOCAMERA_TANGENT_SPACE;
			}
			else if(retval == SPC_POSTOLIGHT_OBJECT_SPACE0.value){
				return SPC_POSTOLIGHT_OBJECT_SPACE0;
			}
			else if(retval == SPC_POSTOLIGHT_OBJECT_SPACE1.value){
				return SPC_POSTOLIGHT_OBJECT_SPACE1;
			}
			else if(retval == SPC_POSTOLIGHT_OBJECT_SPACE2.value){
				return SPC_POSTOLIGHT_OBJECT_SPACE2;
			}
			else if(retval == SPC_POSTOLIGHT_OBJECT_SPACE3.value){
				return SPC_POSTOLIGHT_OBJECT_SPACE3;
			}
			else if(retval == SPC_POSTOLIGHT_OBJECT_SPACE4.value){
				return SPC_POSTOLIGHT_OBJECT_SPACE4;
			}
			else if(retval == SPC_POSTOLIGHT_OBJECT_SPACE5.value){
				return SPC_POSTOLIGHT_OBJECT_SPACE5;
			}
			else if(retval == SPC_POSTOLIGHT_OBJECT_SPACE6.value){
				return SPC_POSTOLIGHT_OBJECT_SPACE6;
			}
			else if(retval == SPC_POSTOLIGHT_OBJECT_SPACE7.value){
				return SPC_POSTOLIGHT_OBJECT_SPACE7;
			}
			else if(retval == SPC_POSTOLIGHT_WORLD_SPACE0.value){
				return SPC_POSTOLIGHT_WORLD_SPACE0;
			}
			else if(retval == SPC_POSTOLIGHT_WORLD_SPACE1.value){
				return SPC_POSTOLIGHT_WORLD_SPACE1;
			}
			else if(retval == SPC_POSTOLIGHT_WORLD_SPACE2.value){
				return SPC_POSTOLIGHT_WORLD_SPACE2;
			}
			else if(retval == SPC_POSTOLIGHT_WORLD_SPACE3.value){
				return SPC_POSTOLIGHT_WORLD_SPACE3;
			}
			else if(retval == SPC_POSTOLIGHT_WORLD_SPACE4.value){
				return SPC_POSTOLIGHT_WORLD_SPACE4;
			}
			else if(retval == SPC_POSTOLIGHT_WORLD_SPACE5.value){
				return SPC_POSTOLIGHT_WORLD_SPACE5;
			}
			else if(retval == SPC_POSTOLIGHT_WORLD_SPACE6.value){
				return SPC_POSTOLIGHT_WORLD_SPACE6;
			}
			else if(retval == SPC_POSTOLIGHT_WORLD_SPACE7.value){
				return SPC_POSTOLIGHT_WORLD_SPACE7;
			}
			else if(retval == SPC_POSTOLIGHT_VIEW_SPACE0.value){
				return SPC_POSTOLIGHT_VIEW_SPACE0;
			}
			else if(retval == SPC_POSTOLIGHT_VIEW_SPACE1.value){
				return SPC_POSTOLIGHT_VIEW_SPACE1;
			}
			else if(retval == SPC_POSTOLIGHT_VIEW_SPACE2.value){
				return SPC_POSTOLIGHT_VIEW_SPACE2;
			}
			else if(retval == SPC_POSTOLIGHT_VIEW_SPACE3.value){
				return SPC_POSTOLIGHT_VIEW_SPACE3;
			}
			else if(retval == SPC_POSTOLIGHT_VIEW_SPACE4.value){
				return SPC_POSTOLIGHT_VIEW_SPACE4;
			}
			else if(retval == SPC_POSTOLIGHT_VIEW_SPACE5.value){
				return SPC_POSTOLIGHT_VIEW_SPACE5;
			}
			else if(retval == SPC_POSTOLIGHT_VIEW_SPACE6.value){
				return SPC_POSTOLIGHT_VIEW_SPACE6;
			}
			else if(retval == SPC_POSTOLIGHT_VIEW_SPACE7.value){
				return SPC_POSTOLIGHT_VIEW_SPACE7;
			}
			else if(retval == SPC_POSTOLIGHT_TANGENT_SPACE0.value){
				return SPC_POSTOLIGHT_TANGENT_SPACE0;
			}
			else if(retval == SPC_POSTOLIGHT_TANGENT_SPACE1.value){
				return SPC_POSTOLIGHT_TANGENT_SPACE1;
			}
			else if(retval == SPC_POSTOLIGHT_TANGENT_SPACE2.value){
				return SPC_POSTOLIGHT_TANGENT_SPACE2;
			}
			else if(retval == SPC_POSTOLIGHT_TANGENT_SPACE3.value){
				return SPC_POSTOLIGHT_TANGENT_SPACE3;
			}
			else if(retval == SPC_POSTOLIGHT_TANGENT_SPACE4.value){
				return SPC_POSTOLIGHT_TANGENT_SPACE4;
			}
			else if(retval == SPC_POSTOLIGHT_TANGENT_SPACE5.value){
				return SPC_POSTOLIGHT_TANGENT_SPACE5;
			}
			else if(retval == SPC_POSTOLIGHT_TANGENT_SPACE6.value){
				return SPC_POSTOLIGHT_TANGENT_SPACE6;
			}
			else if(retval == SPC_POSTOLIGHT_TANGENT_SPACE7.value){
				return SPC_POSTOLIGHT_TANGENT_SPACE7;
			}
			else if(retval == SPC_LIGHTDIRECTION_OBJECT_SPACE0.value){
				return SPC_LIGHTDIRECTION_OBJECT_SPACE0;
			}
			else if(retval == SPC_LIGHTDIRECTION_OBJECT_SPACE1.value){
				return SPC_LIGHTDIRECTION_OBJECT_SPACE1;
			}
			else if(retval == SPC_LIGHTDIRECTION_OBJECT_SPACE2.value){
				return SPC_LIGHTDIRECTION_OBJECT_SPACE2;
			}
			else if(retval == SPC_LIGHTDIRECTION_OBJECT_SPACE3.value){
				return SPC_LIGHTDIRECTION_OBJECT_SPACE3;
			}
			else if(retval == SPC_LIGHTDIRECTION_OBJECT_SPACE4.value){
				return SPC_LIGHTDIRECTION_OBJECT_SPACE4;
			}
			else if(retval == SPC_LIGHTDIRECTION_OBJECT_SPACE5.value){
				return SPC_LIGHTDIRECTION_OBJECT_SPACE5;
			}
			else if(retval == SPC_LIGHTDIRECTION_OBJECT_SPACE6.value){
				return SPC_LIGHTDIRECTION_OBJECT_SPACE6;
			}
			else if(retval == SPC_LIGHTDIRECTION_OBJECT_SPACE7.value){
				return SPC_LIGHTDIRECTION_OBJECT_SPACE7;
			}
			else if(retval == SPC_LIGHTDIRECTION_WORLD_SPACE0.value){
				return SPC_LIGHTDIRECTION_WORLD_SPACE0;
			}
			else if(retval == SPC_LIGHTDIRECTION_WORLD_SPACE1.value){
				return SPC_LIGHTDIRECTION_WORLD_SPACE1;
			}
			else if(retval == SPC_LIGHTDIRECTION_WORLD_SPACE2.value){
				return SPC_LIGHTDIRECTION_WORLD_SPACE2;
			}
			else if(retval == SPC_LIGHTDIRECTION_WORLD_SPACE3.value){
				return SPC_LIGHTDIRECTION_WORLD_SPACE3;
			}
			else if(retval == SPC_LIGHTDIRECTION_WORLD_SPACE4.value){
				return SPC_LIGHTDIRECTION_WORLD_SPACE4;
			}
			else if(retval == SPC_LIGHTDIRECTION_WORLD_SPACE5.value){
				return SPC_LIGHTDIRECTION_WORLD_SPACE5;
			}
			else if(retval == SPC_LIGHTDIRECTION_WORLD_SPACE6.value){
				return SPC_LIGHTDIRECTION_WORLD_SPACE6;
			}
			else if(retval == SPC_LIGHTDIRECTION_WORLD_SPACE7.value){
				return SPC_LIGHTDIRECTION_WORLD_SPACE7;
			}
			else if(retval == SPC_LIGHTDIRECTION_VIEW_SPACE0.value){
				return SPC_LIGHTDIRECTION_VIEW_SPACE0;
			}
			else if(retval == SPC_LIGHTDIRECTION_VIEW_SPACE1.value){
				return SPC_LIGHTDIRECTION_VIEW_SPACE1;
			}
			else if(retval == SPC_LIGHTDIRECTION_VIEW_SPACE2.value){
				return SPC_LIGHTDIRECTION_VIEW_SPACE2;
			}
			else if(retval == SPC_LIGHTDIRECTION_VIEW_SPACE3.value){
				return SPC_LIGHTDIRECTION_VIEW_SPACE3;
			}
			else if(retval == SPC_LIGHTDIRECTION_VIEW_SPACE4.value){
				return SPC_LIGHTDIRECTION_VIEW_SPACE4;
			}
			else if(retval == SPC_LIGHTDIRECTION_VIEW_SPACE5.value){
				return SPC_LIGHTDIRECTION_VIEW_SPACE5;
			}
			else if(retval == SPC_LIGHTDIRECTION_VIEW_SPACE6.value){
				return SPC_LIGHTDIRECTION_VIEW_SPACE6;
			}
			else if(retval == SPC_LIGHTDIRECTION_VIEW_SPACE7.value){
				return SPC_LIGHTDIRECTION_VIEW_SPACE7;
			}
			else if(retval == SPC_LIGHTDIRECTION_TANGENT_SPACE0.value){
				return SPC_LIGHTDIRECTION_TANGENT_SPACE0;
			}
			else if(retval == SPC_LIGHTDIRECTION_TANGENT_SPACE1.value){
				return SPC_LIGHTDIRECTION_TANGENT_SPACE1;
			}
			else if(retval == SPC_LIGHTDIRECTION_TANGENT_SPACE2.value){
				return SPC_LIGHTDIRECTION_TANGENT_SPACE2;
			}
			else if(retval == SPC_LIGHTDIRECTION_TANGENT_SPACE3.value){
				return SPC_LIGHTDIRECTION_TANGENT_SPACE3;
			}
			else if(retval == SPC_LIGHTDIRECTION_TANGENT_SPACE4.value){
				return SPC_LIGHTDIRECTION_TANGENT_SPACE4;
			}
			else if(retval == SPC_LIGHTDIRECTION_TANGENT_SPACE5.value){
				return SPC_LIGHTDIRECTION_TANGENT_SPACE5;
			}
			else if(retval == SPC_LIGHTDIRECTION_TANGENT_SPACE6.value){
				return SPC_LIGHTDIRECTION_TANGENT_SPACE6;
			}
			else if(retval == SPC_LIGHTDIRECTION_TANGENT_SPACE7.value){
				return SPC_LIGHTDIRECTION_TANGENT_SPACE7;
			}
			else if(retval == SPC_LIGHTPOSITION_OBJECT_SPACE0.value){
				return SPC_LIGHTPOSITION_OBJECT_SPACE0;
			}
			else if(retval == SPC_LIGHTPOSITION_OBJECT_SPACE1.value){
				return SPC_LIGHTPOSITION_OBJECT_SPACE1;
			}
			else if(retval == SPC_LIGHTPOSITION_OBJECT_SPACE2.value){
				return SPC_LIGHTPOSITION_OBJECT_SPACE2;
			}
			else if(retval == SPC_LIGHTPOSITION_OBJECT_SPACE3.value){
				return SPC_LIGHTPOSITION_OBJECT_SPACE3;
			}
			else if(retval == SPC_LIGHTPOSITION_OBJECT_SPACE4.value){
				return SPC_LIGHTPOSITION_OBJECT_SPACE4;
			}
			else if(retval == SPC_LIGHTPOSITION_OBJECT_SPACE5.value){
				return SPC_LIGHTPOSITION_OBJECT_SPACE5;
			}
			else if(retval == SPC_LIGHTPOSITION_OBJECT_SPACE6.value){
				return SPC_LIGHTPOSITION_OBJECT_SPACE6;
			}
			else if(retval == SPC_LIGHTPOSITION_OBJECT_SPACE7.value){
				return SPC_LIGHTPOSITION_OBJECT_SPACE7;
			}
			else if(retval == SPC_LIGHTPOSITION_WORLD_SPACE0.value){
				return SPC_LIGHTPOSITION_WORLD_SPACE0;
			}
			else if(retval == SPC_LIGHTPOSITION_WORLD_SPACE1.value){
				return SPC_LIGHTPOSITION_WORLD_SPACE1;
			}
			else if(retval == SPC_LIGHTPOSITION_WORLD_SPACE2.value){
				return SPC_LIGHTPOSITION_WORLD_SPACE2;
			}
			else if(retval == SPC_LIGHTPOSITION_WORLD_SPACE3.value){
				return SPC_LIGHTPOSITION_WORLD_SPACE3;
			}
			else if(retval == SPC_LIGHTPOSITION_WORLD_SPACE4.value){
				return SPC_LIGHTPOSITION_WORLD_SPACE4;
			}
			else if(retval == SPC_LIGHTPOSITION_WORLD_SPACE5.value){
				return SPC_LIGHTPOSITION_WORLD_SPACE5;
			}
			else if(retval == SPC_LIGHTPOSITION_WORLD_SPACE6.value){
				return SPC_LIGHTPOSITION_WORLD_SPACE6;
			}
			else if(retval == SPC_LIGHTPOSITION_WORLD_SPACE7.value){
				return SPC_LIGHTPOSITION_WORLD_SPACE7;
			}
			else if(retval == SPC_LIGHTPOSITIONVIEW_SPACE0.value){
				return SPC_LIGHTPOSITIONVIEW_SPACE0;
			}
			else if(retval == SPC_LIGHTPOSITIONVIEW_SPACE1.value){
				return SPC_LIGHTPOSITIONVIEW_SPACE1;
			}
			else if(retval == SPC_LIGHTPOSITIONVIEW_SPACE2.value){
				return SPC_LIGHTPOSITIONVIEW_SPACE2;
			}
			else if(retval == SPC_LIGHTPOSITIONVIEW_SPACE3.value){
				return SPC_LIGHTPOSITIONVIEW_SPACE3;
			}
			else if(retval == SPC_LIGHTPOSITIONVIEW_SPACE4.value){
				return SPC_LIGHTPOSITIONVIEW_SPACE4;
			}
			else if(retval == SPC_LIGHTPOSITIONVIEW_SPACE5.value){
				return SPC_LIGHTPOSITIONVIEW_SPACE5;
			}
			else if(retval == SPC_LIGHTPOSITIONVIEW_SPACE6.value){
				return SPC_LIGHTPOSITIONVIEW_SPACE6;
			}
			else if(retval == SPC_LIGHTPOSITIONVIEW_SPACE7.value){
				return SPC_LIGHTPOSITIONVIEW_SPACE7;
			}
			else if(retval == SPC_LIGHTPOSITION_TANGENT_SPACE.value){
				return SPC_LIGHTPOSITION_TANGENT_SPACE;
			}
			else if(retval == SPC_BLEND_WEIGHTS.value){
				return SPC_BLEND_WEIGHTS;
			}
			else if(retval == SPC_BLEND_INDICES.value){
				return SPC_BLEND_INDICES;
			}
			else if(retval == SPC_TANGENT_OBJECT_SPACE.value){
				return SPC_TANGENT_OBJECT_SPACE;
			}
			else if(retval == SPC_TANGENT_WORLD_SPACE.value){
				return SPC_TANGENT_WORLD_SPACE;
			}
			else if(retval == SPC_TANGENT_VIEW_SPACE.value){
				return SPC_TANGENT_VIEW_SPACE;
			}
			else if(retval == SPC_TANGENT_TANGENT_SPACE.value){
				return SPC_TANGENT_TANGENT_SPACE;
			}
			else if(retval == SPC_BINORMAL_OBJECT_SPACE.value){
				return SPC_BINORMAL_OBJECT_SPACE;
			}
			else if(retval == SPC_BINORMAL_WORLD_SPACE.value){
				return SPC_BINORMAL_WORLD_SPACE;
			}
			else if(retval == SPC_BINORMAL_VIEW_SPACE.value){
				return SPC_BINORMAL_VIEW_SPACE;
			}
			else if(retval == SPC_BINORMAL_TANGENT_SPACE.value){
				return SPC_BINORMAL_TANGENT_SPACE;
			}
			else if(retval == SPC_COLOR_DIFFUSE.value){
				return SPC_COLOR_DIFFUSE;
			}
			else if(retval == SPC_COLOR_SPECULAR.value){
				return SPC_COLOR_SPECULAR;
			}
			else if(retval == SPC_DEPTH_OBJECT_SPACE.value){
				return SPC_DEPTH_OBJECT_SPACE;
			}
			else if(retval == SPC_DEPTH_WORLD_SPACE.value){
				return SPC_DEPTH_WORLD_SPACE;
			}
			else if(retval == SPC_DEPTH_VIEW_SPACE.value){
				return SPC_DEPTH_VIEW_SPACE;
			}
			else if(retval == SPC_DEPTH_PROJECTIVE_SPACE.value){
				return SPC_DEPTH_PROJECTIVE_SPACE;
			}
			else if(retval == SPC_TEXTURE_COORDINATE0.value){
				return SPC_TEXTURE_COORDINATE0;
			}
			else if(retval == SPC_TEXTURE_COORDINATE1.value){
				return SPC_TEXTURE_COORDINATE1;
			}
			else if(retval == SPC_TEXTURE_COORDINATE2.value){
				return SPC_TEXTURE_COORDINATE2;
			}
			else if(retval == SPC_TEXTURE_COORDINATE3.value){
				return SPC_TEXTURE_COORDINATE3;
			}
			else if(retval == SPC_TEXTURE_COORDINATE4.value){
				return SPC_TEXTURE_COORDINATE4;
			}
			else if(retval == SPC_TEXTURE_COORDINATE5.value){
				return SPC_TEXTURE_COORDINATE5;
			}
			else if(retval == SPC_TEXTURE_COORDINATE6.value){
				return SPC_TEXTURE_COORDINATE6;
			}
			else if(retval == SPC_TEXTURE_COORDINATE7.value){
				return SPC_TEXTURE_COORDINATE7;
			}
			else if(retval == SPC_CUSTOM_CONTENT_BEGIN.value){
				return SPC_CUSTOM_CONTENT_BEGIN;
			}
			else if(retval == SPC_CUSTOM_CONTENT_END.value){
				return SPC_CUSTOM_CONTENT_END;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class ContentHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	//// Reserved custom content range to be used by user custom shader extensions.
	public Parameter() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCParameterProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.rtshadersystem.Parameter".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public Parameter(com.earthview.world.graphic.GpuConstantType type, String name, com.earthview.world.graphic.rtshadersystem.Parameter.Semantic semantic, int index, com.earthview.world.graphic.rtshadersystem.Parameter.Content content, long size) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer semanticPtr = new BasePointer(semantic);
		list.add("semantic", semanticPtr.get());
		BasePointer indexPtr = new BasePointer(index);
		list.add("index", indexPtr.get());
		BasePointer contentPtr = new BasePointer(content);
		list.add("content", contentPtr.get());
		BasePointer sizePtr = new BasePointer(size);
		list.add("size", sizePtr.get());
		Create("JCParameterProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.rtshadersystem.Parameter".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public Parameter(com.earthview.world.graphic.GpuConstantType type, String name, com.earthview.world.graphic.rtshadersystem.Parameter.Semantic semantic, int index, com.earthview.world.graphic.rtshadersystem.Parameter.Content content) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer semanticPtr = new BasePointer(semantic);
		list.add("semantic", semanticPtr.get());
		BasePointer indexPtr = new BasePointer(index);
		list.add("index", indexPtr.get());
		BasePointer contentPtr = new BasePointer(content);
		list.add("content", contentPtr.get());
		Create("JCParameterProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.rtshadersystem.Parameter".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getName_void(long pNativeObject);
	public StringPointer getName()
	{
		long returnValue = getName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private int getType_void(long pNativeObject);
	public com.earthview.world.graphic.GpuConstantType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.GpuConstantType.toEnum(returnValue);
	}
	native private long getSemantic_void(long pNativeObject);
	public EnumPointer getSemantic()
	{
		long returnValue = getSemantic_void(this.nativeObject.pointer);
		EnumPointer __returnValue = new EnumPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private int getIndex_void(long pNativeObject);
	public int getIndex()
	{
		int returnValue = getIndex_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getContent_void(long pNativeObject);
	public com.earthview.world.graphic.rtshadersystem.Parameter.Content getContent()
	{
		int returnValue = getContent_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.rtshadersystem.Parameter.Content.toEnum(returnValue);
	}
	protected  boolean isConstParameter_void_callback()
	{
		boolean returnValue = isConstParameter();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isConstParameter_void(long pNativeObject);
	public boolean isConstParameter()
	{
		boolean returnValue = isConstParameter_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isConstParameter_void_NoVirtual(long pNativeObject);
	protected boolean isConstParameter_NoVirtual()
	{
		boolean returnValue = isConstParameter_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  String ev_toString_void_callback()
	{
		String returnValue = ev_toString();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String ev_toString_void(long pNativeObject);
	public String ev_toString()
	{
		String returnValue = ev_toString_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String ev_toString_void_NoVirtual(long pNativeObject);
	protected String ev_toString_NoVirtual()
	{
		String returnValue = ev_toString_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean isArray_void(long pNativeObject);
	public boolean isArray()
	{
		boolean returnValue = isArray_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSize_void(long pNativeObject);
	public long getSize()
	{
		long returnValue = getSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setSize_ev_size_t(long pNativeObject, long size);
	public void setSize(long size)
	{
		long sizeParamValue = size;
		setSize_ev_size_t(this.nativeObject.pointer, sizeParamValue);
	}
	public Parameter(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Parameter(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_isConstParameter_void(long pNativeObject, String method);
	native protected void register_ev_toString_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_isConstParameter_void(this.nativeObject.pointer, "isConstParameter_void_callback");
			this.register_ev_toString_void(this.nativeObject.pointer, "ev_toString_void_callback");
		}
	}
	
	public static Parameter fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Parameter obj = null;
 		if(baseObj instanceof Parameter)
		{
			obj = (Parameter)baseObj;
		} else {
			obj = new Parameter(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CParameter");
			obj.increaseCast();
		}

		return obj;
	}
}
