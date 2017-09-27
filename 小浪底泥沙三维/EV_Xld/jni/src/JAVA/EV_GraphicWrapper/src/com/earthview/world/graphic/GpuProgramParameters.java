package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GpuProgramParameters extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CGpuProgramParameters", new GpuProgramParametersClassFactory());
	}

	public enum AutoConstantType implements INativeEnum<AutoConstantType> {
		ACT_WORLD_MATRIX(AutoConstantTypeHelper.ENUM_VALUES[0]),
		ACT_INVERSE_WORLD_MATRIX(AutoConstantTypeHelper.ENUM_VALUES[1]),
		ACT_TRANSPOSE_WORLD_MATRIX(AutoConstantTypeHelper.ENUM_VALUES[2]),
		ACT_INVERSE_TRANSPOSE_WORLD_MATRIX(AutoConstantTypeHelper.ENUM_VALUES[3]),
		ACT_WORLD_MATRIX_ARRAY_3x4(AutoConstantTypeHelper.ENUM_VALUES[4]),
		ACT_WORLD_MATRIX_ARRAY(AutoConstantTypeHelper.ENUM_VALUES[5]),
		ACT_WORLD_DUALQUATERNION_ARRAY_2x4(AutoConstantTypeHelper.ENUM_VALUES[6]),
		ACT_WORLD_SCALE_SHEAR_MATRIX_ARRAY_3x4(AutoConstantTypeHelper.ENUM_VALUES[7]),
		ACT_VIEW_MATRIX(AutoConstantTypeHelper.ENUM_VALUES[8]),
		ACT_INVERSE_VIEW_MATRIX(AutoConstantTypeHelper.ENUM_VALUES[9]),
		ACT_TRANSPOSE_VIEW_MATRIX(AutoConstantTypeHelper.ENUM_VALUES[10]),
		ACT_INVERSE_TRANSPOSE_VIEW_MATRIX(AutoConstantTypeHelper.ENUM_VALUES[11]),
		ACT_PROJECTION_MATRIX(AutoConstantTypeHelper.ENUM_VALUES[12]),
		ACT_INVERSE_PROJECTION_MATRIX(AutoConstantTypeHelper.ENUM_VALUES[13]),
		ACT_TRANSPOSE_PROJECTION_MATRIX(AutoConstantTypeHelper.ENUM_VALUES[14]),
		ACT_INVERSE_TRANSPOSE_PROJECTION_MATRIX(AutoConstantTypeHelper.ENUM_VALUES[15]),
		ACT_VIEWPROJ_MATRIX(AutoConstantTypeHelper.ENUM_VALUES[16]),
		ACT_INVERSE_VIEWPROJ_MATRIX(AutoConstantTypeHelper.ENUM_VALUES[17]),
		ACT_TRANSPOSE_VIEWPROJ_MATRIX(AutoConstantTypeHelper.ENUM_VALUES[18]),
		ACT_INVERSE_TRANSPOSE_VIEWPROJ_MATRIX(AutoConstantTypeHelper.ENUM_VALUES[19]),
		ACT_WORLDVIEW_MATRIX(AutoConstantTypeHelper.ENUM_VALUES[20]),
		ACT_INVERSE_WORLDVIEW_MATRIX(AutoConstantTypeHelper.ENUM_VALUES[21]),
		ACT_TRANSPOSE_WORLDVIEW_MATRIX(AutoConstantTypeHelper.ENUM_VALUES[22]),
		ACT_INVERSE_TRANSPOSE_WORLDVIEW_MATRIX(AutoConstantTypeHelper.ENUM_VALUES[23]),
		ACT_WORLDVIEWPROJ_MATRIX(AutoConstantTypeHelper.ENUM_VALUES[24]),
		ACT_INVERSE_WORLDVIEWPROJ_MATRIX(AutoConstantTypeHelper.ENUM_VALUES[25]),
		ACT_TRANSPOSE_WORLDVIEWPROJ_MATRIX(AutoConstantTypeHelper.ENUM_VALUES[26]),
		ACT_INVERSE_TRANSPOSE_WORLDVIEWPROJ_MATRIX(AutoConstantTypeHelper.ENUM_VALUES[27]),
		ACT_RENDER_TARGET_FLIPPING(AutoConstantTypeHelper.ENUM_VALUES[28]),
		ACT_VERTEX_WINDING(AutoConstantTypeHelper.ENUM_VALUES[29]),
		ACT_FOG_COLOUR(AutoConstantTypeHelper.ENUM_VALUES[30]),
		ACT_FOG_PARAMS(AutoConstantTypeHelper.ENUM_VALUES[31]),
		ACT_SURFACE_AMBIENT_COLOUR(AutoConstantTypeHelper.ENUM_VALUES[32]),
		ACT_SURFACE_DIFFUSE_COLOUR(AutoConstantTypeHelper.ENUM_VALUES[33]),
		ACT_SURFACE_SPECULAR_COLOUR(AutoConstantTypeHelper.ENUM_VALUES[34]),
		ACT_SURFACE_EMISSIVE_COLOUR(AutoConstantTypeHelper.ENUM_VALUES[35]),
		ACT_SURFACE_SHININESS(AutoConstantTypeHelper.ENUM_VALUES[36]),
		ACT_VERTEX_COLOUR_TRACKING(AutoConstantTypeHelper.ENUM_VALUES[37]),
		ACT_LIGHT_ENABLED(AutoConstantTypeHelper.ENUM_VALUES[38]),
		ACT_LIGHT_COUNT(AutoConstantTypeHelper.ENUM_VALUES[39]),
		ACT_AMBIENT_LIGHT_COLOUR(AutoConstantTypeHelper.ENUM_VALUES[40]),
		ACT_LIGHT_DIFFUSE_COLOUR(AutoConstantTypeHelper.ENUM_VALUES[41]),
		ACT_LIGHT_SPECULAR_COLOUR(AutoConstantTypeHelper.ENUM_VALUES[42]),
		ACT_LIGHT_ATTENUATION(AutoConstantTypeHelper.ENUM_VALUES[43]),
		ACT_SPOTLIGHT_PARAMS(AutoConstantTypeHelper.ENUM_VALUES[44]),
		ACT_LIGHT_POSITION(AutoConstantTypeHelper.ENUM_VALUES[45]),
		ACT_LIGHT_POSITION_OBJECT_SPACE(AutoConstantTypeHelper.ENUM_VALUES[46]),
		ACT_LIGHT_POSITION_VIEW_SPACE(AutoConstantTypeHelper.ENUM_VALUES[47]),
		ACT_LIGHT_DIRECTION(AutoConstantTypeHelper.ENUM_VALUES[48]),
		ACT_LIGHT_DIRECTION_OBJECT_SPACE(AutoConstantTypeHelper.ENUM_VALUES[49]),
		ACT_LIGHT_DIRECTION_VIEW_SPACE(AutoConstantTypeHelper.ENUM_VALUES[50]),
		ACT_LIGHT_DISTANCE_OBJECT_SPACE(AutoConstantTypeHelper.ENUM_VALUES[51]),
		ACT_LIGHT_POWER_SCALE(AutoConstantTypeHelper.ENUM_VALUES[52]),
		ACT_LIGHT_DIFFUSE_COLOUR_POWER_SCALED(AutoConstantTypeHelper.ENUM_VALUES[53]),
		ACT_LIGHT_SPECULAR_COLOUR_POWER_SCALED(AutoConstantTypeHelper.ENUM_VALUES[54]),
		ACT_LIGHT_DIFFUSE_COLOUR_ARRAY(AutoConstantTypeHelper.ENUM_VALUES[55]),
		ACT_LIGHT_SPECULAR_COLOUR_ARRAY(AutoConstantTypeHelper.ENUM_VALUES[56]),
		ACT_LIGHT_DIFFUSE_COLOUR_POWER_SCALED_ARRAY(AutoConstantTypeHelper.ENUM_VALUES[57]),
		ACT_LIGHT_SPECULAR_COLOUR_POWER_SCALED_ARRAY(AutoConstantTypeHelper.ENUM_VALUES[58]),
		ACT_LIGHT_ATTENUATION_ARRAY(AutoConstantTypeHelper.ENUM_VALUES[59]),
		ACT_LIGHT_POSITION_ARRAY(AutoConstantTypeHelper.ENUM_VALUES[60]),
		ACT_LIGHT_POSITION_OBJECT_SPACE_ARRAY(AutoConstantTypeHelper.ENUM_VALUES[61]),
		ACT_LIGHT_POSITION_VIEW_SPACE_ARRAY(AutoConstantTypeHelper.ENUM_VALUES[62]),
		ACT_LIGHT_DIRECTION_ARRAY(AutoConstantTypeHelper.ENUM_VALUES[63]),
		ACT_LIGHT_DIRECTION_OBJECT_SPACE_ARRAY(AutoConstantTypeHelper.ENUM_VALUES[64]),
		ACT_LIGHT_DIRECTION_VIEW_SPACE_ARRAY(AutoConstantTypeHelper.ENUM_VALUES[65]),
		ACT_LIGHT_DISTANCE_OBJECT_SPACE_ARRAY(AutoConstantTypeHelper.ENUM_VALUES[66]),
		ACT_LIGHT_POWER_SCALE_ARRAY(AutoConstantTypeHelper.ENUM_VALUES[67]),
		ACT_SPOTLIGHT_PARAMS_ARRAY(AutoConstantTypeHelper.ENUM_VALUES[68]),
		ACT_DERIVED_AMBIENT_LIGHT_COLOUR(AutoConstantTypeHelper.ENUM_VALUES[69]),
		ACT_DERIVED_SCENE_COLOUR(AutoConstantTypeHelper.ENUM_VALUES[70]),
		ACT_DERIVED_LIGHT_DIFFUSE_COLOUR(AutoConstantTypeHelper.ENUM_VALUES[71]),
		ACT_DERIVED_LIGHT_SPECULAR_COLOUR(AutoConstantTypeHelper.ENUM_VALUES[72]),
		ACT_DERIVED_LIGHT_DIFFUSE_COLOUR_ARRAY(AutoConstantTypeHelper.ENUM_VALUES[73]),
		ACT_DERIVED_LIGHT_SPECULAR_COLOUR_ARRAY(AutoConstantTypeHelper.ENUM_VALUES[74]),
		ACT_LIGHT_NUMBER(AutoConstantTypeHelper.ENUM_VALUES[75]),
		ACT_LIGHT_CASTS_SHADOWS(AutoConstantTypeHelper.ENUM_VALUES[76]),
		ACT_SHADOW_EXTRUSION_DISTANCE(AutoConstantTypeHelper.ENUM_VALUES[77]),
		ACT_CAMERA_POSITION(AutoConstantTypeHelper.ENUM_VALUES[78]),
		ACT_CAMERA_RELATIVE_POSITION(AutoConstantTypeHelper.ENUM_VALUES[79]),
		ACT_CAMERA_POSITION_OBJECT_SPACE(AutoConstantTypeHelper.ENUM_VALUES[80]),
		ACT_TEXTURE_VIEW_MATRIX(AutoConstantTypeHelper.ENUM_VALUES[81]),
		ACT_TEXTURE_VIEWPROJ_MATRIX(AutoConstantTypeHelper.ENUM_VALUES[82]),
		ACT_TEXTURE_VIEWPROJ_MATRIX_ARRAY(AutoConstantTypeHelper.ENUM_VALUES[83]),
		ACT_TEXTURE_WORLDVIEWPROJ_MATRIX(AutoConstantTypeHelper.ENUM_VALUES[84]),
		ACT_TEXTURE_WORLDVIEWPROJ_MATRIX_ARRAY(AutoConstantTypeHelper.ENUM_VALUES[85]),
		ACT_SPOTLIGHT_VIEWPROJ_MATRIX(AutoConstantTypeHelper.ENUM_VALUES[86]),
		ACT_SPOTLIGHT_VIEWPROJ_MATRIX_ARRAY(AutoConstantTypeHelper.ENUM_VALUES[87]),
		ACT_SPOTLIGHT_WORLDVIEWPROJ_MATRIX(AutoConstantTypeHelper.ENUM_VALUES[88]),
		ACT_CUSTOM(AutoConstantTypeHelper.ENUM_VALUES[89]),
		ACT_TIME(AutoConstantTypeHelper.ENUM_VALUES[90]),
		ACT_TIME_0_X(AutoConstantTypeHelper.ENUM_VALUES[91]),
		ACT_COSTIME_0_X(AutoConstantTypeHelper.ENUM_VALUES[92]),
		ACT_SINTIME_0_X(AutoConstantTypeHelper.ENUM_VALUES[93]),
		ACT_TANTIME_0_X(AutoConstantTypeHelper.ENUM_VALUES[94]),
		ACT_TIME_0_X_PACKED(AutoConstantTypeHelper.ENUM_VALUES[95]),
		ACT_TIME_0_1(AutoConstantTypeHelper.ENUM_VALUES[96]),
		ACT_COSTIME_0_1(AutoConstantTypeHelper.ENUM_VALUES[97]),
		ACT_SINTIME_0_1(AutoConstantTypeHelper.ENUM_VALUES[98]),
		ACT_TANTIME_0_1(AutoConstantTypeHelper.ENUM_VALUES[99]),
		ACT_TIME_0_1_PACKED(AutoConstantTypeHelper.ENUM_VALUES[100]),
		ACT_TIME_0_2PI(AutoConstantTypeHelper.ENUM_VALUES[101]),
		ACT_COSTIME_0_2PI(AutoConstantTypeHelper.ENUM_VALUES[102]),
		ACT_SINTIME_0_2PI(AutoConstantTypeHelper.ENUM_VALUES[103]),
		ACT_TANTIME_0_2PI(AutoConstantTypeHelper.ENUM_VALUES[104]),
		ACT_TIME_0_2PI_PACKED(AutoConstantTypeHelper.ENUM_VALUES[105]),
		ACT_FRAME_TIME(AutoConstantTypeHelper.ENUM_VALUES[106]),
		ACT_FPS(AutoConstantTypeHelper.ENUM_VALUES[107]),
		ACT_VIEWPORT_WIDTH(AutoConstantTypeHelper.ENUM_VALUES[108]),
		ACT_VIEWPORT_HEIGHT(AutoConstantTypeHelper.ENUM_VALUES[109]),
		ACT_INVERSE_VIEWPORT_WIDTH(AutoConstantTypeHelper.ENUM_VALUES[110]),
		ACT_INVERSE_VIEWPORT_HEIGHT(AutoConstantTypeHelper.ENUM_VALUES[111]),
		ACT_VIEWPORT_SIZE(AutoConstantTypeHelper.ENUM_VALUES[112]),
		ACT_VIEW_DIRECTION(AutoConstantTypeHelper.ENUM_VALUES[113]),
		ACT_VIEW_SIDE_VECTOR(AutoConstantTypeHelper.ENUM_VALUES[114]),
		ACT_VIEW_UP_VECTOR(AutoConstantTypeHelper.ENUM_VALUES[115]),
		ACT_FOV(AutoConstantTypeHelper.ENUM_VALUES[116]),
		ACT_NEAR_CLIP_DISTANCE(AutoConstantTypeHelper.ENUM_VALUES[117]),
		ACT_FAR_CLIP_DISTANCE(AutoConstantTypeHelper.ENUM_VALUES[118]),
		ACT_PASS_NUMBER(AutoConstantTypeHelper.ENUM_VALUES[119]),
		ACT_PASS_ITERATION_NUMBER(AutoConstantTypeHelper.ENUM_VALUES[120]),
		ACT_ANIMATION_PARAMETRIC(AutoConstantTypeHelper.ENUM_VALUES[121]),
		ACT_TEXEL_OFFSETS(AutoConstantTypeHelper.ENUM_VALUES[122]),
		ACT_SCENE_DEPTH_RANGE(AutoConstantTypeHelper.ENUM_VALUES[123]),
		ACT_SHADOW_SCENE_DEPTH_RANGE(AutoConstantTypeHelper.ENUM_VALUES[124]),
		ACT_SHADOW_COLOUR(AutoConstantTypeHelper.ENUM_VALUES[125]),
		ACT_TEXTURE_SIZE(AutoConstantTypeHelper.ENUM_VALUES[126]),
		ACT_INVERSE_TEXTURE_SIZE(AutoConstantTypeHelper.ENUM_VALUES[127]),
		ACT_PACKED_TEXTURE_SIZE(AutoConstantTypeHelper.ENUM_VALUES[128]),
		ACT_TEXTURE_MATRIX(AutoConstantTypeHelper.ENUM_VALUES[129]),
		ACT_LOD_CAMERA_POSITION(AutoConstantTypeHelper.ENUM_VALUES[130]),
		ACT_LOD_CAMERA_POSITION_OBJECT_SPACE(AutoConstantTypeHelper.ENUM_VALUES[131]),
		ACT_LIGHT_CUSTOM(AutoConstantTypeHelper.ENUM_VALUES[132]),
		ACT_SOFTSHADOW_TEXTURE_VIEWPROJ_MATRIX_0(AutoConstantTypeHelper.ENUM_VALUES[133]),
		ACT_SOFTSHADOW_TEXTURE_VIEWPROJ_MATRIX_1(AutoConstantTypeHelper.ENUM_VALUES[134]),
		ACT_SOFTSHADOW_TEXTURE_VIEWPROJ_MATRIX_2(AutoConstantTypeHelper.ENUM_VALUES[135]),
		ACT_SOFTSHADOW_CASCADE_DEPTH(AutoConstantTypeHelper.ENUM_VALUES[136]),
		ACT_SOFTSHADOW_VIEWPROJ_MATRIX_0(AutoConstantTypeHelper.ENUM_VALUES[137]),
		ACT_SOFTSHADOW_VIEWPROJ_MATRIX_1(AutoConstantTypeHelper.ENUM_VALUES[138]),
		ACT_SOFTSHADOW_VIEWPROJ_MATRIX_2(AutoConstantTypeHelper.ENUM_VALUES[139]),
		ACT_SOFTSHADOW_ISOPEN_FLAG(AutoConstantTypeHelper.ENUM_VALUES[140]),
		ACT_SOFTSHADOW_LIGHT_BLEED_POWER(AutoConstantTypeHelper.ENUM_VALUES[141]),
		ACT_SOFTSHADOW_DEPTH_OFFSET(AutoConstantTypeHelper.ENUM_VALUES[142]),
		ACT_SOFTSHADOW_NORMAL_FACTOR(AutoConstantTypeHelper.ENUM_VALUES[143]),
		ACT_SOFTSHADOW_NEARCLIP(AutoConstantTypeHelper.ENUM_VALUES[144]),
		ACT_SOFTSHADOW_FARCLIP(AutoConstantTypeHelper.ENUM_VALUES[145]),
		ACT_SOFTSHADOW_NEARCLIP_0(AutoConstantTypeHelper.ENUM_VALUES[146]),
		ACT_SOFTSHADOW_FARCLIP_0(AutoConstantTypeHelper.ENUM_VALUES[147]),
		ACT_SOFTSHADOW_NEARCLIP_1(AutoConstantTypeHelper.ENUM_VALUES[148]),
		ACT_SOFTSHADOW_FARCLIP_1(AutoConstantTypeHelper.ENUM_VALUES[149]),
		ACT_SOFTSHADOW_NEARCLIP_2(AutoConstantTypeHelper.ENUM_VALUES[150]),
		ACT_SOFTSHADOW_FARCLIP_2(AutoConstantTypeHelper.ENUM_VALUES[151]),
		ACT_SOFTSHADOW_COLOR_R_RATIO(AutoConstantTypeHelper.ENUM_VALUES[152]),
		ACT_SOFTSHADOW_COLOR_G_RATIO(AutoConstantTypeHelper.ENUM_VALUES[153]),
		ACT_SOFTSHADOW_COLOR_B_RATIO(AutoConstantTypeHelper.ENUM_VALUES[154]);
		private int value;
		AutoConstantType(int i) {
			this.value = i;
		}
		public AutoConstantType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final AutoConstantType toEnum(int retval) {
			if(retval == ACT_WORLD_MATRIX.value){
				return ACT_WORLD_MATRIX;
			}
			else if(retval == ACT_INVERSE_WORLD_MATRIX.value){
				return ACT_INVERSE_WORLD_MATRIX;
			}
			else if(retval == ACT_TRANSPOSE_WORLD_MATRIX.value){
				return ACT_TRANSPOSE_WORLD_MATRIX;
			}
			else if(retval == ACT_INVERSE_TRANSPOSE_WORLD_MATRIX.value){
				return ACT_INVERSE_TRANSPOSE_WORLD_MATRIX;
			}
			else if(retval == ACT_WORLD_MATRIX_ARRAY_3x4.value){
				return ACT_WORLD_MATRIX_ARRAY_3x4;
			}
			else if(retval == ACT_WORLD_MATRIX_ARRAY.value){
				return ACT_WORLD_MATRIX_ARRAY;
			}
			else if(retval == ACT_WORLD_DUALQUATERNION_ARRAY_2x4.value){
				return ACT_WORLD_DUALQUATERNION_ARRAY_2x4;
			}
			else if(retval == ACT_WORLD_SCALE_SHEAR_MATRIX_ARRAY_3x4.value){
				return ACT_WORLD_SCALE_SHEAR_MATRIX_ARRAY_3x4;
			}
			else if(retval == ACT_VIEW_MATRIX.value){
				return ACT_VIEW_MATRIX;
			}
			else if(retval == ACT_INVERSE_VIEW_MATRIX.value){
				return ACT_INVERSE_VIEW_MATRIX;
			}
			else if(retval == ACT_TRANSPOSE_VIEW_MATRIX.value){
				return ACT_TRANSPOSE_VIEW_MATRIX;
			}
			else if(retval == ACT_INVERSE_TRANSPOSE_VIEW_MATRIX.value){
				return ACT_INVERSE_TRANSPOSE_VIEW_MATRIX;
			}
			else if(retval == ACT_PROJECTION_MATRIX.value){
				return ACT_PROJECTION_MATRIX;
			}
			else if(retval == ACT_INVERSE_PROJECTION_MATRIX.value){
				return ACT_INVERSE_PROJECTION_MATRIX;
			}
			else if(retval == ACT_TRANSPOSE_PROJECTION_MATRIX.value){
				return ACT_TRANSPOSE_PROJECTION_MATRIX;
			}
			else if(retval == ACT_INVERSE_TRANSPOSE_PROJECTION_MATRIX.value){
				return ACT_INVERSE_TRANSPOSE_PROJECTION_MATRIX;
			}
			else if(retval == ACT_VIEWPROJ_MATRIX.value){
				return ACT_VIEWPROJ_MATRIX;
			}
			else if(retval == ACT_INVERSE_VIEWPROJ_MATRIX.value){
				return ACT_INVERSE_VIEWPROJ_MATRIX;
			}
			else if(retval == ACT_TRANSPOSE_VIEWPROJ_MATRIX.value){
				return ACT_TRANSPOSE_VIEWPROJ_MATRIX;
			}
			else if(retval == ACT_INVERSE_TRANSPOSE_VIEWPROJ_MATRIX.value){
				return ACT_INVERSE_TRANSPOSE_VIEWPROJ_MATRIX;
			}
			else if(retval == ACT_WORLDVIEW_MATRIX.value){
				return ACT_WORLDVIEW_MATRIX;
			}
			else if(retval == ACT_INVERSE_WORLDVIEW_MATRIX.value){
				return ACT_INVERSE_WORLDVIEW_MATRIX;
			}
			else if(retval == ACT_TRANSPOSE_WORLDVIEW_MATRIX.value){
				return ACT_TRANSPOSE_WORLDVIEW_MATRIX;
			}
			else if(retval == ACT_INVERSE_TRANSPOSE_WORLDVIEW_MATRIX.value){
				return ACT_INVERSE_TRANSPOSE_WORLDVIEW_MATRIX;
			}
			else if(retval == ACT_WORLDVIEWPROJ_MATRIX.value){
				return ACT_WORLDVIEWPROJ_MATRIX;
			}
			else if(retval == ACT_INVERSE_WORLDVIEWPROJ_MATRIX.value){
				return ACT_INVERSE_WORLDVIEWPROJ_MATRIX;
			}
			else if(retval == ACT_TRANSPOSE_WORLDVIEWPROJ_MATRIX.value){
				return ACT_TRANSPOSE_WORLDVIEWPROJ_MATRIX;
			}
			else if(retval == ACT_INVERSE_TRANSPOSE_WORLDVIEWPROJ_MATRIX.value){
				return ACT_INVERSE_TRANSPOSE_WORLDVIEWPROJ_MATRIX;
			}
			else if(retval == ACT_RENDER_TARGET_FLIPPING.value){
				return ACT_RENDER_TARGET_FLIPPING;
			}
			else if(retval == ACT_VERTEX_WINDING.value){
				return ACT_VERTEX_WINDING;
			}
			else if(retval == ACT_FOG_COLOUR.value){
				return ACT_FOG_COLOUR;
			}
			else if(retval == ACT_FOG_PARAMS.value){
				return ACT_FOG_PARAMS;
			}
			else if(retval == ACT_SURFACE_AMBIENT_COLOUR.value){
				return ACT_SURFACE_AMBIENT_COLOUR;
			}
			else if(retval == ACT_SURFACE_DIFFUSE_COLOUR.value){
				return ACT_SURFACE_DIFFUSE_COLOUR;
			}
			else if(retval == ACT_SURFACE_SPECULAR_COLOUR.value){
				return ACT_SURFACE_SPECULAR_COLOUR;
			}
			else if(retval == ACT_SURFACE_EMISSIVE_COLOUR.value){
				return ACT_SURFACE_EMISSIVE_COLOUR;
			}
			else if(retval == ACT_SURFACE_SHININESS.value){
				return ACT_SURFACE_SHININESS;
			}
			else if(retval == ACT_VERTEX_COLOUR_TRACKING.value){
				return ACT_VERTEX_COLOUR_TRACKING;
			}
			else if(retval == ACT_LIGHT_ENABLED.value){
				return ACT_LIGHT_ENABLED;
			}
			else if(retval == ACT_LIGHT_COUNT.value){
				return ACT_LIGHT_COUNT;
			}
			else if(retval == ACT_AMBIENT_LIGHT_COLOUR.value){
				return ACT_AMBIENT_LIGHT_COLOUR;
			}
			else if(retval == ACT_LIGHT_DIFFUSE_COLOUR.value){
				return ACT_LIGHT_DIFFUSE_COLOUR;
			}
			else if(retval == ACT_LIGHT_SPECULAR_COLOUR.value){
				return ACT_LIGHT_SPECULAR_COLOUR;
			}
			else if(retval == ACT_LIGHT_ATTENUATION.value){
				return ACT_LIGHT_ATTENUATION;
			}
			else if(retval == ACT_SPOTLIGHT_PARAMS.value){
				return ACT_SPOTLIGHT_PARAMS;
			}
			else if(retval == ACT_LIGHT_POSITION.value){
				return ACT_LIGHT_POSITION;
			}
			else if(retval == ACT_LIGHT_POSITION_OBJECT_SPACE.value){
				return ACT_LIGHT_POSITION_OBJECT_SPACE;
			}
			else if(retval == ACT_LIGHT_POSITION_VIEW_SPACE.value){
				return ACT_LIGHT_POSITION_VIEW_SPACE;
			}
			else if(retval == ACT_LIGHT_DIRECTION.value){
				return ACT_LIGHT_DIRECTION;
			}
			else if(retval == ACT_LIGHT_DIRECTION_OBJECT_SPACE.value){
				return ACT_LIGHT_DIRECTION_OBJECT_SPACE;
			}
			else if(retval == ACT_LIGHT_DIRECTION_VIEW_SPACE.value){
				return ACT_LIGHT_DIRECTION_VIEW_SPACE;
			}
			else if(retval == ACT_LIGHT_DISTANCE_OBJECT_SPACE.value){
				return ACT_LIGHT_DISTANCE_OBJECT_SPACE;
			}
			else if(retval == ACT_LIGHT_POWER_SCALE.value){
				return ACT_LIGHT_POWER_SCALE;
			}
			else if(retval == ACT_LIGHT_DIFFUSE_COLOUR_POWER_SCALED.value){
				return ACT_LIGHT_DIFFUSE_COLOUR_POWER_SCALED;
			}
			else if(retval == ACT_LIGHT_SPECULAR_COLOUR_POWER_SCALED.value){
				return ACT_LIGHT_SPECULAR_COLOUR_POWER_SCALED;
			}
			else if(retval == ACT_LIGHT_DIFFUSE_COLOUR_ARRAY.value){
				return ACT_LIGHT_DIFFUSE_COLOUR_ARRAY;
			}
			else if(retval == ACT_LIGHT_SPECULAR_COLOUR_ARRAY.value){
				return ACT_LIGHT_SPECULAR_COLOUR_ARRAY;
			}
			else if(retval == ACT_LIGHT_DIFFUSE_COLOUR_POWER_SCALED_ARRAY.value){
				return ACT_LIGHT_DIFFUSE_COLOUR_POWER_SCALED_ARRAY;
			}
			else if(retval == ACT_LIGHT_SPECULAR_COLOUR_POWER_SCALED_ARRAY.value){
				return ACT_LIGHT_SPECULAR_COLOUR_POWER_SCALED_ARRAY;
			}
			else if(retval == ACT_LIGHT_ATTENUATION_ARRAY.value){
				return ACT_LIGHT_ATTENUATION_ARRAY;
			}
			else if(retval == ACT_LIGHT_POSITION_ARRAY.value){
				return ACT_LIGHT_POSITION_ARRAY;
			}
			else if(retval == ACT_LIGHT_POSITION_OBJECT_SPACE_ARRAY.value){
				return ACT_LIGHT_POSITION_OBJECT_SPACE_ARRAY;
			}
			else if(retval == ACT_LIGHT_POSITION_VIEW_SPACE_ARRAY.value){
				return ACT_LIGHT_POSITION_VIEW_SPACE_ARRAY;
			}
			else if(retval == ACT_LIGHT_DIRECTION_ARRAY.value){
				return ACT_LIGHT_DIRECTION_ARRAY;
			}
			else if(retval == ACT_LIGHT_DIRECTION_OBJECT_SPACE_ARRAY.value){
				return ACT_LIGHT_DIRECTION_OBJECT_SPACE_ARRAY;
			}
			else if(retval == ACT_LIGHT_DIRECTION_VIEW_SPACE_ARRAY.value){
				return ACT_LIGHT_DIRECTION_VIEW_SPACE_ARRAY;
			}
			else if(retval == ACT_LIGHT_DISTANCE_OBJECT_SPACE_ARRAY.value){
				return ACT_LIGHT_DISTANCE_OBJECT_SPACE_ARRAY;
			}
			else if(retval == ACT_LIGHT_POWER_SCALE_ARRAY.value){
				return ACT_LIGHT_POWER_SCALE_ARRAY;
			}
			else if(retval == ACT_SPOTLIGHT_PARAMS_ARRAY.value){
				return ACT_SPOTLIGHT_PARAMS_ARRAY;
			}
			else if(retval == ACT_DERIVED_AMBIENT_LIGHT_COLOUR.value){
				return ACT_DERIVED_AMBIENT_LIGHT_COLOUR;
			}
			else if(retval == ACT_DERIVED_SCENE_COLOUR.value){
				return ACT_DERIVED_SCENE_COLOUR;
			}
			else if(retval == ACT_DERIVED_LIGHT_DIFFUSE_COLOUR.value){
				return ACT_DERIVED_LIGHT_DIFFUSE_COLOUR;
			}
			else if(retval == ACT_DERIVED_LIGHT_SPECULAR_COLOUR.value){
				return ACT_DERIVED_LIGHT_SPECULAR_COLOUR;
			}
			else if(retval == ACT_DERIVED_LIGHT_DIFFUSE_COLOUR_ARRAY.value){
				return ACT_DERIVED_LIGHT_DIFFUSE_COLOUR_ARRAY;
			}
			else if(retval == ACT_DERIVED_LIGHT_SPECULAR_COLOUR_ARRAY.value){
				return ACT_DERIVED_LIGHT_SPECULAR_COLOUR_ARRAY;
			}
			else if(retval == ACT_LIGHT_NUMBER.value){
				return ACT_LIGHT_NUMBER;
			}
			else if(retval == ACT_LIGHT_CASTS_SHADOWS.value){
				return ACT_LIGHT_CASTS_SHADOWS;
			}
			else if(retval == ACT_SHADOW_EXTRUSION_DISTANCE.value){
				return ACT_SHADOW_EXTRUSION_DISTANCE;
			}
			else if(retval == ACT_CAMERA_POSITION.value){
				return ACT_CAMERA_POSITION;
			}
			else if(retval == ACT_CAMERA_RELATIVE_POSITION.value){
				return ACT_CAMERA_RELATIVE_POSITION;
			}
			else if(retval == ACT_CAMERA_POSITION_OBJECT_SPACE.value){
				return ACT_CAMERA_POSITION_OBJECT_SPACE;
			}
			else if(retval == ACT_TEXTURE_VIEW_MATRIX.value){
				return ACT_TEXTURE_VIEW_MATRIX;
			}
			else if(retval == ACT_TEXTURE_VIEWPROJ_MATRIX.value){
				return ACT_TEXTURE_VIEWPROJ_MATRIX;
			}
			else if(retval == ACT_TEXTURE_VIEWPROJ_MATRIX_ARRAY.value){
				return ACT_TEXTURE_VIEWPROJ_MATRIX_ARRAY;
			}
			else if(retval == ACT_TEXTURE_WORLDVIEWPROJ_MATRIX.value){
				return ACT_TEXTURE_WORLDVIEWPROJ_MATRIX;
			}
			else if(retval == ACT_TEXTURE_WORLDVIEWPROJ_MATRIX_ARRAY.value){
				return ACT_TEXTURE_WORLDVIEWPROJ_MATRIX_ARRAY;
			}
			else if(retval == ACT_SPOTLIGHT_VIEWPROJ_MATRIX.value){
				return ACT_SPOTLIGHT_VIEWPROJ_MATRIX;
			}
			else if(retval == ACT_SPOTLIGHT_VIEWPROJ_MATRIX_ARRAY.value){
				return ACT_SPOTLIGHT_VIEWPROJ_MATRIX_ARRAY;
			}
			else if(retval == ACT_SPOTLIGHT_WORLDVIEWPROJ_MATRIX.value){
				return ACT_SPOTLIGHT_WORLDVIEWPROJ_MATRIX;
			}
			else if(retval == ACT_CUSTOM.value){
				return ACT_CUSTOM;
			}
			else if(retval == ACT_TIME.value){
				return ACT_TIME;
			}
			else if(retval == ACT_TIME_0_X.value){
				return ACT_TIME_0_X;
			}
			else if(retval == ACT_COSTIME_0_X.value){
				return ACT_COSTIME_0_X;
			}
			else if(retval == ACT_SINTIME_0_X.value){
				return ACT_SINTIME_0_X;
			}
			else if(retval == ACT_TANTIME_0_X.value){
				return ACT_TANTIME_0_X;
			}
			else if(retval == ACT_TIME_0_X_PACKED.value){
				return ACT_TIME_0_X_PACKED;
			}
			else if(retval == ACT_TIME_0_1.value){
				return ACT_TIME_0_1;
			}
			else if(retval == ACT_COSTIME_0_1.value){
				return ACT_COSTIME_0_1;
			}
			else if(retval == ACT_SINTIME_0_1.value){
				return ACT_SINTIME_0_1;
			}
			else if(retval == ACT_TANTIME_0_1.value){
				return ACT_TANTIME_0_1;
			}
			else if(retval == ACT_TIME_0_1_PACKED.value){
				return ACT_TIME_0_1_PACKED;
			}
			else if(retval == ACT_TIME_0_2PI.value){
				return ACT_TIME_0_2PI;
			}
			else if(retval == ACT_COSTIME_0_2PI.value){
				return ACT_COSTIME_0_2PI;
			}
			else if(retval == ACT_SINTIME_0_2PI.value){
				return ACT_SINTIME_0_2PI;
			}
			else if(retval == ACT_TANTIME_0_2PI.value){
				return ACT_TANTIME_0_2PI;
			}
			else if(retval == ACT_TIME_0_2PI_PACKED.value){
				return ACT_TIME_0_2PI_PACKED;
			}
			else if(retval == ACT_FRAME_TIME.value){
				return ACT_FRAME_TIME;
			}
			else if(retval == ACT_FPS.value){
				return ACT_FPS;
			}
			else if(retval == ACT_VIEWPORT_WIDTH.value){
				return ACT_VIEWPORT_WIDTH;
			}
			else if(retval == ACT_VIEWPORT_HEIGHT.value){
				return ACT_VIEWPORT_HEIGHT;
			}
			else if(retval == ACT_INVERSE_VIEWPORT_WIDTH.value){
				return ACT_INVERSE_VIEWPORT_WIDTH;
			}
			else if(retval == ACT_INVERSE_VIEWPORT_HEIGHT.value){
				return ACT_INVERSE_VIEWPORT_HEIGHT;
			}
			else if(retval == ACT_VIEWPORT_SIZE.value){
				return ACT_VIEWPORT_SIZE;
			}
			else if(retval == ACT_VIEW_DIRECTION.value){
				return ACT_VIEW_DIRECTION;
			}
			else if(retval == ACT_VIEW_SIDE_VECTOR.value){
				return ACT_VIEW_SIDE_VECTOR;
			}
			else if(retval == ACT_VIEW_UP_VECTOR.value){
				return ACT_VIEW_UP_VECTOR;
			}
			else if(retval == ACT_FOV.value){
				return ACT_FOV;
			}
			else if(retval == ACT_NEAR_CLIP_DISTANCE.value){
				return ACT_NEAR_CLIP_DISTANCE;
			}
			else if(retval == ACT_FAR_CLIP_DISTANCE.value){
				return ACT_FAR_CLIP_DISTANCE;
			}
			else if(retval == ACT_PASS_NUMBER.value){
				return ACT_PASS_NUMBER;
			}
			else if(retval == ACT_PASS_ITERATION_NUMBER.value){
				return ACT_PASS_ITERATION_NUMBER;
			}
			else if(retval == ACT_ANIMATION_PARAMETRIC.value){
				return ACT_ANIMATION_PARAMETRIC;
			}
			else if(retval == ACT_TEXEL_OFFSETS.value){
				return ACT_TEXEL_OFFSETS;
			}
			else if(retval == ACT_SCENE_DEPTH_RANGE.value){
				return ACT_SCENE_DEPTH_RANGE;
			}
			else if(retval == ACT_SHADOW_SCENE_DEPTH_RANGE.value){
				return ACT_SHADOW_SCENE_DEPTH_RANGE;
			}
			else if(retval == ACT_SHADOW_COLOUR.value){
				return ACT_SHADOW_COLOUR;
			}
			else if(retval == ACT_TEXTURE_SIZE.value){
				return ACT_TEXTURE_SIZE;
			}
			else if(retval == ACT_INVERSE_TEXTURE_SIZE.value){
				return ACT_INVERSE_TEXTURE_SIZE;
			}
			else if(retval == ACT_PACKED_TEXTURE_SIZE.value){
				return ACT_PACKED_TEXTURE_SIZE;
			}
			else if(retval == ACT_TEXTURE_MATRIX.value){
				return ACT_TEXTURE_MATRIX;
			}
			else if(retval == ACT_LOD_CAMERA_POSITION.value){
				return ACT_LOD_CAMERA_POSITION;
			}
			else if(retval == ACT_LOD_CAMERA_POSITION_OBJECT_SPACE.value){
				return ACT_LOD_CAMERA_POSITION_OBJECT_SPACE;
			}
			else if(retval == ACT_LIGHT_CUSTOM.value){
				return ACT_LIGHT_CUSTOM;
			}
			else if(retval == ACT_SOFTSHADOW_TEXTURE_VIEWPROJ_MATRIX_0.value){
				return ACT_SOFTSHADOW_TEXTURE_VIEWPROJ_MATRIX_0;
			}
			else if(retval == ACT_SOFTSHADOW_TEXTURE_VIEWPROJ_MATRIX_1.value){
				return ACT_SOFTSHADOW_TEXTURE_VIEWPROJ_MATRIX_1;
			}
			else if(retval == ACT_SOFTSHADOW_TEXTURE_VIEWPROJ_MATRIX_2.value){
				return ACT_SOFTSHADOW_TEXTURE_VIEWPROJ_MATRIX_2;
			}
			else if(retval == ACT_SOFTSHADOW_CASCADE_DEPTH.value){
				return ACT_SOFTSHADOW_CASCADE_DEPTH;
			}
			else if(retval == ACT_SOFTSHADOW_VIEWPROJ_MATRIX_0.value){
				return ACT_SOFTSHADOW_VIEWPROJ_MATRIX_0;
			}
			else if(retval == ACT_SOFTSHADOW_VIEWPROJ_MATRIX_1.value){
				return ACT_SOFTSHADOW_VIEWPROJ_MATRIX_1;
			}
			else if(retval == ACT_SOFTSHADOW_VIEWPROJ_MATRIX_2.value){
				return ACT_SOFTSHADOW_VIEWPROJ_MATRIX_2;
			}
			else if(retval == ACT_SOFTSHADOW_ISOPEN_FLAG.value){
				return ACT_SOFTSHADOW_ISOPEN_FLAG;
			}
			else if(retval == ACT_SOFTSHADOW_LIGHT_BLEED_POWER.value){
				return ACT_SOFTSHADOW_LIGHT_BLEED_POWER;
			}
			else if(retval == ACT_SOFTSHADOW_DEPTH_OFFSET.value){
				return ACT_SOFTSHADOW_DEPTH_OFFSET;
			}
			else if(retval == ACT_SOFTSHADOW_NORMAL_FACTOR.value){
				return ACT_SOFTSHADOW_NORMAL_FACTOR;
			}
			else if(retval == ACT_SOFTSHADOW_NEARCLIP.value){
				return ACT_SOFTSHADOW_NEARCLIP;
			}
			else if(retval == ACT_SOFTSHADOW_FARCLIP.value){
				return ACT_SOFTSHADOW_FARCLIP;
			}
			else if(retval == ACT_SOFTSHADOW_NEARCLIP_0.value){
				return ACT_SOFTSHADOW_NEARCLIP_0;
			}
			else if(retval == ACT_SOFTSHADOW_FARCLIP_0.value){
				return ACT_SOFTSHADOW_FARCLIP_0;
			}
			else if(retval == ACT_SOFTSHADOW_NEARCLIP_1.value){
				return ACT_SOFTSHADOW_NEARCLIP_1;
			}
			else if(retval == ACT_SOFTSHADOW_FARCLIP_1.value){
				return ACT_SOFTSHADOW_FARCLIP_1;
			}
			else if(retval == ACT_SOFTSHADOW_NEARCLIP_2.value){
				return ACT_SOFTSHADOW_NEARCLIP_2;
			}
			else if(retval == ACT_SOFTSHADOW_FARCLIP_2.value){
				return ACT_SOFTSHADOW_FARCLIP_2;
			}
			else if(retval == ACT_SOFTSHADOW_COLOR_R_RATIO.value){
				return ACT_SOFTSHADOW_COLOR_R_RATIO;
			}
			else if(retval == ACT_SOFTSHADOW_COLOR_G_RATIO.value){
				return ACT_SOFTSHADOW_COLOR_G_RATIO;
			}
			else if(retval == ACT_SOFTSHADOW_COLOR_B_RATIO.value){
				return ACT_SOFTSHADOW_COLOR_B_RATIO;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class AutoConstantTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	//// view parameters
	public enum ACDataType implements INativeEnum<ACDataType> {
		ACDT_NONE(ACDataTypeHelper.ENUM_VALUES[0]),
		ACDT_INT(ACDataTypeHelper.ENUM_VALUES[1]),
		ACDT_REAL(ACDataTypeHelper.ENUM_VALUES[2]);
		private int value;
		ACDataType(int i) {
			this.value = i;
		}
		public ACDataType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final ACDataType toEnum(int retval) {
			if(retval == ACDT_NONE.value){
				return ACDT_NONE;
			}
			else if(retval == ACDT_INT.value){
				return ACDT_INT;
			}
			else if(retval == ACDT_REAL.value){
				return ACDT_REAL;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class ACDataTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	//// the auto constant requires data of type real
	public enum ElementType implements INativeEnum<ElementType> {
		ET_INT(ElementTypeHelper.ENUM_VALUES[0]),
		ET_REAL(ElementTypeHelper.ENUM_VALUES[1]);
		private int value;
		ElementType(int i) {
			this.value = i;
		}
		public ElementType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final ElementType toEnum(int retval) {
			if(retval == ET_INT.value){
				return ET_INT;
			}
			else if(retval == ET_REAL.value){
				return ET_REAL;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class ElementTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	public static class AutoConstantDefinition extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CGpuProgramParameters::AutoConstantDefinition", new AutoConstantDefinitionClassFactory());
		}

		native private int get_acType_void(long pNativeObject);
		public com.earthview.world.graphic.GpuProgramParameters.AutoConstantType get_acType()
		{
			int jniValue = get_acType_void(this.nativeObject.pointer);
			
			return com.earthview.world.graphic.GpuProgramParameters.AutoConstantType.toEnum(jniValue);
		}
		
		native private void set_acType_AutoConstantType (long pNativeObject, int value);
		public void set_acType(com.earthview.world.graphic.GpuProgramParameters.AutoConstantType acType)
		{
			int acTypeParamValue = acType.getValue();
			
			set_acType_AutoConstantType(this.nativeObject.pointer, acTypeParamValue);
		}
		
		native private String get_name_void(long pNativeObject);
		public String get_name()
		{
			String jniValue = get_name_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_name_EVString (long pNativeObject, String value);
		public void set_name(String name)
		{
			String nameParamValue = name;
			
			set_name_EVString(this.nativeObject.pointer, nameParamValue);
		}
		
		native private long get_elementCount_void(long pNativeObject);
		public long get_elementCount()
		{
			long jniValue = get_elementCount_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_elementCount_ev_size_t (long pNativeObject, long value);
		public void set_elementCount(long elementCount)
		{
			long elementCountParamValue = elementCount;
			
			set_elementCount_ev_size_t(this.nativeObject.pointer, elementCountParamValue);
		}
		
		native private int get_elementType_void(long pNativeObject);
		public com.earthview.world.graphic.GpuProgramParameters.ElementType get_elementType()
		{
			int jniValue = get_elementType_void(this.nativeObject.pointer);
			
			return com.earthview.world.graphic.GpuProgramParameters.ElementType.toEnum(jniValue);
		}
		
		native private void set_elementType_ElementType (long pNativeObject, int value);
		public void set_elementType(com.earthview.world.graphic.GpuProgramParameters.ElementType elementType)
		{
			int elementTypeParamValue = elementType.getValue();
			
			set_elementType_ElementType(this.nativeObject.pointer, elementTypeParamValue);
		}
		
		native private int get_dataType_void(long pNativeObject);
		public com.earthview.world.graphic.GpuProgramParameters.ACDataType get_dataType()
		{
			int jniValue = get_dataType_void(this.nativeObject.pointer);
			
			return com.earthview.world.graphic.GpuProgramParameters.ACDataType.toEnum(jniValue);
		}
		
		native private void set_dataType_ACDataType (long pNativeObject, int value);
		public void set_dataType(com.earthview.world.graphic.GpuProgramParameters.ACDataType dataType)
		{
			int dataTypeParamValue = dataType.getValue();
			
			set_dataType_ACDataType(this.nativeObject.pointer, dataTypeParamValue);
		}
		
		public AutoConstantDefinition(com.earthview.world.graphic.GpuProgramParameters.AutoConstantType _acType, String _name, long _elementCount, com.earthview.world.graphic.GpuProgramParameters.ElementType _elementType, com.earthview.world.graphic.GpuProgramParameters.ACDataType _dataType) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer _acTypePtr = new BasePointer(_acType);
			list.add("_acType", _acTypePtr.get());
			BasePointer _namePtr = new BasePointer(_name);
			list.add("_name", _namePtr.get());
			BasePointer _elementCountPtr = new BasePointer(_elementCount);
			list.add("_elementCount", _elementCountPtr.get());
			BasePointer _elementTypePtr = new BasePointer(_elementType);
			list.add("_elementType", _elementTypePtr.get());
			BasePointer _dataTypePtr = new BasePointer(_dataType);
			list.add("_dataType", _dataTypePtr.get());
			Create("AutoConstantDefinition", list);
		}

		public AutoConstantDefinition(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public AutoConstantDefinition(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static AutoConstantDefinition fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			AutoConstantDefinition obj = null;
 			if(baseObj instanceof AutoConstantDefinition)
			{
				obj = (AutoConstantDefinition)baseObj;
			} else {
				obj = new AutoConstantDefinition(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "AutoConstantDefinition");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class AutoConstantDefinitionClassFactory implements IClassFactory {
		public BaseObject create()
		{
			AutoConstantDefinition emptyInstance = new AutoConstantDefinition(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class AutoConstantEntry extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry", new AutoConstantEntryClassFactory());
		}

		native private int get_paramType_void(long pNativeObject);
		public com.earthview.world.graphic.GpuProgramParameters.AutoConstantType get_paramType()
		{
			int jniValue = get_paramType_void(this.nativeObject.pointer);
			
			return com.earthview.world.graphic.GpuProgramParameters.AutoConstantType.toEnum(jniValue);
		}
		
		native private void set_paramType_AutoConstantType (long pNativeObject, int value);
		public void set_paramType(com.earthview.world.graphic.GpuProgramParameters.AutoConstantType paramType)
		{
			int paramTypeParamValue = paramType.getValue();
			
			set_paramType_AutoConstantType(this.nativeObject.pointer, paramTypeParamValue);
		}
		
		native private long get_physicalIndex_void(long pNativeObject);
		public long get_physicalIndex()
		{
			long jniValue = get_physicalIndex_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_physicalIndex_ev_size_t (long pNativeObject, long value);
		public void set_physicalIndex(long physicalIndex)
		{
			long physicalIndexParamValue = physicalIndex;
			
			set_physicalIndex_ev_size_t(this.nativeObject.pointer, physicalIndexParamValue);
		}
		
		native private long get_elementCount_void(long pNativeObject);
		public long get_elementCount()
		{
			long jniValue = get_elementCount_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_elementCount_ev_size_t (long pNativeObject, long value);
		public void set_elementCount(long elementCount)
		{
			long elementCountParamValue = elementCount;
			
			set_elementCount_ev_size_t(this.nativeObject.pointer, elementCountParamValue);
		}
		
		native private int get_variability_void(long pNativeObject);
		public int get_variability()
		{
			int jniValue = get_variability_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_variability_ev_uint16 (long pNativeObject, int value);
		public void set_variability(int variability)
		{
			int variabilityParamValue = variability;
			
			set_variability_ev_uint16(this.nativeObject.pointer, variabilityParamValue);
		}
		
		public AutoConstantEntry(com.earthview.world.graphic.GpuProgramParameters.AutoConstantType theType, long theIndex, long theiData, int theVariability, long theElemCount) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer theTypePtr = new BasePointer(theType);
			list.add("theType", theTypePtr.get());
			BasePointer theIndexPtr = new BasePointer(theIndex);
			list.add("theIndex", theIndexPtr.get());
			BasePointer theiDataPtr = new BasePointer(theiData);
			list.add("theiData", theiDataPtr.get());
			BasePointer theVariabilityPtr = new BasePointer(theVariability);
			list.add("theVariability", theVariabilityPtr.get());
			BasePointer theElemCountPtr = new BasePointer(theElemCount);
			list.add("theElemCount", theElemCountPtr.get());
			Create("CAutoConstantEntry", list);
		}

		public AutoConstantEntry(com.earthview.world.graphic.GpuProgramParameters.AutoConstantType theType, long theIndex, long theiData, int theVariability) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer theTypePtr = new BasePointer(theType);
			list.add("theType", theTypePtr.get());
			BasePointer theIndexPtr = new BasePointer(theIndex);
			list.add("theIndex", theIndexPtr.get());
			BasePointer theiDataPtr = new BasePointer(theiData);
			list.add("theiData", theiDataPtr.get());
			BasePointer theVariabilityPtr = new BasePointer(theVariability);
			list.add("theVariability", theVariabilityPtr.get());
			Create("CAutoConstantEntry", list);
		}

		public AutoConstantEntry(com.earthview.world.graphic.GpuProgramParameters.AutoConstantType theType, long theIndex, double thefData, int theVariability, long theElemCount) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer theTypePtr = new BasePointer(theType);
			list.add("theType", theTypePtr.get());
			BasePointer theIndexPtr = new BasePointer(theIndex);
			list.add("theIndex", theIndexPtr.get());
			BasePointer thefDataPtr = new BasePointer(thefData);
			list.add("thefData", thefDataPtr.get());
			BasePointer theVariabilityPtr = new BasePointer(theVariability);
			list.add("theVariability", theVariabilityPtr.get());
			BasePointer theElemCountPtr = new BasePointer(theElemCount);
			list.add("theElemCount", theElemCountPtr.get());
			Create("CAutoConstantEntry", list);
		}

		public AutoConstantEntry(com.earthview.world.graphic.GpuProgramParameters.AutoConstantType theType, long theIndex, double thefData, int theVariability) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer theTypePtr = new BasePointer(theType);
			list.add("theType", theTypePtr.get());
			BasePointer theIndexPtr = new BasePointer(theIndex);
			list.add("theIndex", theIndexPtr.get());
			BasePointer thefDataPtr = new BasePointer(thefData);
			list.add("thefData", thefDataPtr.get());
			BasePointer theVariabilityPtr = new BasePointer(theVariability);
			list.add("theVariability", theVariabilityPtr.get());
			Create("CAutoConstantEntry", list);
		}

		public AutoConstantEntry() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("CAutoConstantEntry", null);
		}

		public AutoConstantEntry(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public AutoConstantEntry(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static AutoConstantEntry fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			AutoConstantEntry obj = null;
 			if(baseObj instanceof AutoConstantEntry)
			{
				obj = (AutoConstantEntry)baseObj;
			} else {
				obj = new AutoConstantEntry(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CAutoConstantEntry");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class AutoConstantEntryClassFactory implements IClassFactory {
		public BaseObject create()
		{
			AutoConstantEntry emptyInstance = new AutoConstantEntry(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/// Auto parameter storage
	public static class AutoConstantList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList", new AutoConstantListClassFactory());
		}

		public AutoConstantList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("AutoConstantList", null);
		}

		native private void push_back_CAutoConstantEntry(long pNativeObject, long t);
		public void push_back(com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry t)
		{
			long tParamValue = t.nativeObject.pointer;
			push_back_CAutoConstantEntry(this.nativeObject.pointer, tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		public com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry __returnValue = new com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry(CreatedWhenConstruct.CWC_NotToCreate, "CAutoConstantEntry");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CAutoConstantEntry");
			}
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		public com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry __returnValue = new com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry(CreatedWhenConstruct.CWC_NotToCreate, "CAutoConstantEntry");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CAutoConstantEntry");
			}
			return __returnValue;
		}
		native private void insert_ev_uint32_CAutoConstantEntry(long pNativeObject, long pos, long t);
		public void insert(long pos, com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry t)
		{
			long posParamValue = pos;
			long tParamValue = t.nativeObject.pointer;
			insert_ev_uint32_CAutoConstantEntry(this.nativeObject.pointer, posParamValue, tParamValue);
		}
		native private void remove_ev_size_t(long pNativeObject, long pos);
		public void remove(long pos)
		{
			long posParamValue = pos;
			remove_ev_size_t(this.nativeObject.pointer, posParamValue);
		}
		native private boolean empty_void(long pNativeObject);
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long OperatorIndex_ev_size_t(long pNativeObject, long n);
		public com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry __returnValue = new com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry(CreatedWhenConstruct.CWC_NotToCreate, "CAutoConstantEntry");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CAutoConstantEntry");
			}
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		public com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry __returnValue = new com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry(CreatedWhenConstruct.CWC_NotToCreate, "CAutoConstantEntry");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CAutoConstantEntry");
			}
			return __returnValue;
		}
		native private long size_void(long pNativeObject);
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void resize_ev_size_t(long pNativeObject, long newSize);
		public void resize(long newSize)
		{
			long newSizeParamValue = newSize;
			resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
		}
		native private void reserve_ev_size_t(long pNativeObject, long count);
		public void reserve(long count)
		{
			long countParamValue = count;
			reserve_ev_size_t(this.nativeObject.pointer, countParamValue);
		}
		native private void clear_void(long pNativeObject);
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		public AutoConstantList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public AutoConstantList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static AutoConstantList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			AutoConstantList obj = null;
 			if(baseObj instanceof AutoConstantList)
			{
				obj = (AutoConstantList)baseObj;
			} else {
				obj = new AutoConstantList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "AutoConstantList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class AutoConstantListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			AutoConstantList emptyInstance = new AutoConstantList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class GpuSharedParamUsageList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList", new GpuSharedParamUsageListClassFactory());
		}

		public GpuSharedParamUsageList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("GpuSharedParamUsageList", null);
		}

		native private void push_back_CGpuSharedParametersUsage(long pNativeObject, long t);
		public void push_back(com.earthview.world.graphic.GpuSharedParametersUsage t)
		{
			long tParamValue = t.nativeObject.pointer;
			push_back_CGpuSharedParametersUsage(this.nativeObject.pointer, tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		public com.earthview.world.graphic.GpuSharedParametersUsage front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			com.earthview.world.graphic.GpuSharedParametersUsage __returnValue = new com.earthview.world.graphic.GpuSharedParametersUsage(CreatedWhenConstruct.CWC_NotToCreate, "CGpuSharedParametersUsage");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.GpuSharedParametersUsage)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CGpuSharedParametersUsage");
			}
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		public com.earthview.world.graphic.GpuSharedParametersUsage back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			com.earthview.world.graphic.GpuSharedParametersUsage __returnValue = new com.earthview.world.graphic.GpuSharedParametersUsage(CreatedWhenConstruct.CWC_NotToCreate, "CGpuSharedParametersUsage");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.GpuSharedParametersUsage)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CGpuSharedParametersUsage");
			}
			return __returnValue;
		}
		native private void insert_ev_uint32_CGpuSharedParametersUsage(long pNativeObject, long pos, long t);
		public void insert(long pos, com.earthview.world.graphic.GpuSharedParametersUsage t)
		{
			long posParamValue = pos;
			long tParamValue = t.nativeObject.pointer;
			insert_ev_uint32_CGpuSharedParametersUsage(this.nativeObject.pointer, posParamValue, tParamValue);
		}
		native private void remove_ev_size_t(long pNativeObject, long pos);
		public void remove(long pos)
		{
			long posParamValue = pos;
			remove_ev_size_t(this.nativeObject.pointer, posParamValue);
		}
		native private boolean empty_void(long pNativeObject);
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long OperatorIndex_ev_size_t(long pNativeObject, long n);
		public com.earthview.world.graphic.GpuSharedParametersUsage OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			com.earthview.world.graphic.GpuSharedParametersUsage __returnValue = new com.earthview.world.graphic.GpuSharedParametersUsage(CreatedWhenConstruct.CWC_NotToCreate, "CGpuSharedParametersUsage");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.GpuSharedParametersUsage)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CGpuSharedParametersUsage");
			}
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		public com.earthview.world.graphic.GpuSharedParametersUsage at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			com.earthview.world.graphic.GpuSharedParametersUsage __returnValue = new com.earthview.world.graphic.GpuSharedParametersUsage(CreatedWhenConstruct.CWC_NotToCreate, "CGpuSharedParametersUsage");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.GpuSharedParametersUsage)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CGpuSharedParametersUsage");
			}
			return __returnValue;
		}
		native private long size_void(long pNativeObject);
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void resize_ev_size_t(long pNativeObject, long newSize);
		public void resize(long newSize)
		{
			long newSizeParamValue = newSize;
			resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
		}
		native private void reserve_ev_size_t(long pNativeObject, long count);
		public void reserve(long count)
		{
			long countParamValue = count;
			reserve_ev_size_t(this.nativeObject.pointer, countParamValue);
		}
		native private void clear_void(long pNativeObject);
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		public GpuSharedParamUsageList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public GpuSharedParamUsageList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static GpuSharedParamUsageList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			GpuSharedParamUsageList obj = null;
 			if(baseObj instanceof GpuSharedParamUsageList)
			{
				obj = (GpuSharedParamUsageList)baseObj;
			} else {
				obj = new GpuSharedParamUsageList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "GpuSharedParamUsageList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class GpuSharedParamUsageListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			GpuSharedParamUsageList emptyInstance = new GpuSharedParamUsageList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public GpuProgramParameters() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CGpuProgramParameters", null);
	}

	//// Copy constructor
	public GpuProgramParameters(com.earthview.world.graphic.GpuProgramParameters oth) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer othPtr = new BasePointer(oth);
		list.add("oth", othPtr.get());
		Create("CGpuProgramParameters", list);
	}

	native private long OperatorAssign_CGpuProgramParameters(long pNativeObject, long oth);
	//// Operator = overload
	public com.earthview.world.graphic.GpuProgramParameters OperatorAssign(com.earthview.world.graphic.GpuProgramParameters oth)
	{
		long othParamValue = oth.nativeObject.pointer;
		long returnValue = OperatorAssign_CGpuProgramParameters(this.nativeObject.pointer, othParamValue);
		com.earthview.world.graphic.GpuProgramParameters __returnValue = new com.earthview.world.graphic.GpuProgramParameters(CreatedWhenConstruct.CWC_NotToCreate, "CGpuProgramParameters");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramParameters)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGpuProgramParameters");
		}
		return __returnValue;
	}
	native private void _setNamedConstants_GpuNamedConstantsPtr(long pNativeObject, long constantmap);
	public void _setNamedConstants(com.earthview.world.graphic.GpuNamedConstantsPtr constantmap)
	{
		long constantmapParamValue = constantmap.nativeObject.pointer;
		_setNamedConstants_GpuNamedConstantsPtr(this.nativeObject.pointer, constantmapParamValue);
	}
	native private void _setLogicalIndexes_GpuLogicalBufferStructPtr_GpuLogicalBufferStructPtr(long pNativeObject, long floatIndexMap, long intIndexMap);
	public void _setLogicalIndexes(com.earthview.world.graphic.GpuLogicalBufferStructPtr floatIndexMap, com.earthview.world.graphic.GpuLogicalBufferStructPtr intIndexMap)
	{
		long floatIndexMapParamValue = floatIndexMap.nativeObject.pointer;
		long intIndexMapParamValue = intIndexMap.nativeObject.pointer;
		_setLogicalIndexes_GpuLogicalBufferStructPtr_GpuLogicalBufferStructPtr(this.nativeObject.pointer, floatIndexMapParamValue, intIndexMapParamValue);
	}
	native private boolean hasNamedParameters_void(long pNativeObject);
	//// Does this parameter set include named parameters?
	public boolean hasNamedParameters()
	{
		boolean returnValue = hasNamedParameters_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasLogicalIndexedParameters_void(long pNativeObject);
	public boolean hasLogicalIndexedParameters()
	{
		boolean returnValue = hasLogicalIndexedParameters_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setConstant_ev_size_t_CVector4(long pNativeObject, long index, long vec);
	public void setConstant(long index, com.earthview.world.spatial.math.Vector4 vec)
	{
		long indexParamValue = index;
		long vecParamValue = vec.nativeObject.pointer;
		setConstant_ev_size_t_CVector4(this.nativeObject.pointer, indexParamValue, vecParamValue);
	}
	native private void setConstant_ev_size_t_Real(long pNativeObject, long index, double val);
	public void setConstant(long index, double val)
	{
		long indexParamValue = index;
		double valParamValue = val;
		setConstant_ev_size_t_Real(this.nativeObject.pointer, indexParamValue, valParamValue);
	}
	native private void setConstant_ev_size_t_CVector3(long pNativeObject, long index, long vec);
	public void setConstant(long index, com.earthview.world.spatial.math.Vector3 vec)
	{
		long indexParamValue = index;
		long vecParamValue = vec.nativeObject.pointer;
		setConstant_ev_size_t_CVector3(this.nativeObject.pointer, indexParamValue, vecParamValue);
	}
	native private void setConstant_ev_size_t_CMatrix4(long pNativeObject, long index, long m);
	public void setConstant(long index, com.earthview.world.spatial.math.Matrix4 m)
	{
		long indexParamValue = index;
		long mParamValue = m.nativeObject.pointer;
		setConstant_ev_size_t_CMatrix4(this.nativeObject.pointer, indexParamValue, mParamValue);
	}
	native private void setConstant_ev_size_t_CMatrix4_ev_size_t(long pNativeObject, long index, long m, long numEntries);
	public void setConstant(long index, NativeObjectPointer<com.earthview.world.spatial.math.Matrix4> m, long numEntries)
	{
		long indexParamValue = index;
		long mParamValue = (m == null ? 0L : m.nativeObject.pointer);
		long numEntriesParamValue = numEntries;
		setConstant_ev_size_t_CMatrix4_ev_size_t(this.nativeObject.pointer, indexParamValue, mParamValue, numEntriesParamValue);
	}
	native private void setConstant_ev_size_t_ev_real32_ev_size_t(long pNativeObject, long index, long val, long count);
	public void setConstant(long index, FloatPointer val, long count)
	{
		long indexParamValue = index;
		long valParamValue = (val == null ? 0L : val.nativeObject.pointer);
		long countParamValue = count;
		setConstant_ev_size_t_ev_real32_ev_size_t(this.nativeObject.pointer, indexParamValue, valParamValue, countParamValue);
	}
	native private void setConstant_ev_size_t_ev_real64_ev_size_t(long pNativeObject, long index, long val, long count);
	public void setConstant(long index, DoublePointer val, long count)
	{
		long indexParamValue = index;
		long valParamValue = (val == null ? 0L : val.nativeObject.pointer);
		long countParamValue = count;
		setConstant_ev_size_t_ev_real64_ev_size_t(this.nativeObject.pointer, indexParamValue, valParamValue, countParamValue);
	}
	native private void setConstant_ev_size_t_CColourValue(long pNativeObject, long index, long colour);
	public void setConstant(long index, com.earthview.world.graphic.ColourValue colour)
	{
		long indexParamValue = index;
		long colourParamValue = colour.nativeObject.pointer;
		setConstant_ev_size_t_CColourValue(this.nativeObject.pointer, indexParamValue, colourParamValue);
	}
	native private void setConstant_ev_size_t_ev_int32_ev_size_t(long pNativeObject, long index, long val, long count);
	public void setConstant(long index, IntegerPointer val, long count)
	{
		long indexParamValue = index;
		long valParamValue = (val == null ? 0L : val.nativeObject.pointer);
		long countParamValue = count;
		setConstant_ev_size_t_ev_int32_ev_size_t(this.nativeObject.pointer, indexParamValue, valParamValue, countParamValue);
	}
	native private void _writeRawConstants_ev_size_t_ev_real32_ev_size_t(long pNativeObject, long physicalIndex, long val, long count);
	public void _writeRawConstants(long physicalIndex, FloatPointer val, long count)
	{
		long physicalIndexParamValue = physicalIndex;
		long valParamValue = (val == null ? 0L : val.nativeObject.pointer);
		long countParamValue = count;
		_writeRawConstants_ev_size_t_ev_real32_ev_size_t(this.nativeObject.pointer, physicalIndexParamValue, valParamValue, countParamValue);
	}
	native private void _writeRawConstants_ev_size_t_ev_real64_ev_size_t(long pNativeObject, long physicalIndex, long val, long count);
	public void _writeRawConstants(long physicalIndex, DoublePointer val, long count)
	{
		long physicalIndexParamValue = physicalIndex;
		long valParamValue = (val == null ? 0L : val.nativeObject.pointer);
		long countParamValue = count;
		_writeRawConstants_ev_size_t_ev_real64_ev_size_t(this.nativeObject.pointer, physicalIndexParamValue, valParamValue, countParamValue);
	}
	native private void _writeRawConstants_ev_size_t_ev_int32_ev_size_t(long pNativeObject, long physicalIndex, long val, long count);
	public void _writeRawConstants(long physicalIndex, IntegerPointer val, long count)
	{
		long physicalIndexParamValue = physicalIndex;
		long valParamValue = (val == null ? 0L : val.nativeObject.pointer);
		long countParamValue = count;
		_writeRawConstants_ev_size_t_ev_int32_ev_size_t(this.nativeObject.pointer, physicalIndexParamValue, valParamValue, countParamValue);
	}
	native private void _readRawConstants_ev_size_t_ev_size_t_ev_real32(long pNativeObject, long physicalIndex, long count, long dest);
	public void _readRawConstants(long physicalIndex, long count, FloatPointer dest)
	{
		long physicalIndexParamValue = physicalIndex;
		long countParamValue = count;
		long destParamValue = (dest == null ? 0L : dest.nativeObject.pointer);
		_readRawConstants_ev_size_t_ev_size_t_ev_real32(this.nativeObject.pointer, physicalIndexParamValue, countParamValue, destParamValue);
	}
	native private void _readRawConstants_ev_size_t_ev_size_t_ev_int32(long pNativeObject, long physicalIndex, long count, long dest);
	public void _readRawConstants(long physicalIndex, long count, IntegerPointer dest)
	{
		long physicalIndexParamValue = physicalIndex;
		long countParamValue = count;
		long destParamValue = (dest == null ? 0L : dest.nativeObject.pointer);
		_readRawConstants_ev_size_t_ev_size_t_ev_int32(this.nativeObject.pointer, physicalIndexParamValue, countParamValue, destParamValue);
	}
	native private void _writeRawConstant_ev_size_t_CVector4_ev_size_t(long pNativeObject, long physicalIndex, long vec, long count);
	public void _writeRawConstant(long physicalIndex, com.earthview.world.spatial.math.Vector4 vec, long count)
	{
		long physicalIndexParamValue = physicalIndex;
		long vecParamValue = vec.nativeObject.pointer;
		long countParamValue = count;
		_writeRawConstant_ev_size_t_CVector4_ev_size_t(this.nativeObject.pointer, physicalIndexParamValue, vecParamValue, countParamValue);
	}
	native private void _writeRawConstant_ev_size_t_CVector4(long pNativeObject, long physicalIndex, long vec);
	public void _writeRawConstant(long physicalIndex, com.earthview.world.spatial.math.Vector4 vec)
	{
		long physicalIndexParamValue = physicalIndex;
		long vecParamValue = vec.nativeObject.pointer;
		_writeRawConstant_ev_size_t_CVector4(this.nativeObject.pointer, physicalIndexParamValue, vecParamValue);
	}
	native private void _writeRawConstant_ev_size_t_Real(long pNativeObject, long physicalIndex, double val);
	public void _writeRawConstant(long physicalIndex, double val)
	{
		long physicalIndexParamValue = physicalIndex;
		double valParamValue = val;
		_writeRawConstant_ev_size_t_Real(this.nativeObject.pointer, physicalIndexParamValue, valParamValue);
	}
	native private void _writeRawConstant_ev_size_t_ev_int32(long pNativeObject, long physicalIndex, int val);
	public void _writeRawConstant(long physicalIndex, int val)
	{
		long physicalIndexParamValue = physicalIndex;
		int valParamValue = val;
		_writeRawConstant_ev_size_t_ev_int32(this.nativeObject.pointer, physicalIndexParamValue, valParamValue);
	}
	native private void _writeRawConstant_ev_size_t_CVector3(long pNativeObject, long physicalIndex, long vec);
	public void _writeRawConstant(long physicalIndex, com.earthview.world.spatial.math.Vector3 vec)
	{
		long physicalIndexParamValue = physicalIndex;
		long vecParamValue = vec.nativeObject.pointer;
		_writeRawConstant_ev_size_t_CVector3(this.nativeObject.pointer, physicalIndexParamValue, vecParamValue);
	}
	native private void _writeRawConstant_ev_size_t_CMatrix4_ev_size_t(long pNativeObject, long physicalIndex, long m, long elementCount);
	public void _writeRawConstant(long physicalIndex, com.earthview.world.spatial.math.Matrix4 m, long elementCount)
	{
		long physicalIndexParamValue = physicalIndex;
		long mParamValue = m.nativeObject.pointer;
		long elementCountParamValue = elementCount;
		_writeRawConstant_ev_size_t_CMatrix4_ev_size_t(this.nativeObject.pointer, physicalIndexParamValue, mParamValue, elementCountParamValue);
	}
	native private void _writeRawConstant_ev_size_t_CMatrix4_ev_uint32(long pNativeObject, long physicalIndex, long m, long numEntries);
	public void _writeRawConstant(long physicalIndex, NativeObjectPointer<com.earthview.world.spatial.math.Matrix4> m, long numEntries)
	{
		long physicalIndexParamValue = physicalIndex;
		long mParamValue = (m == null ? 0L : m.nativeObject.pointer);
		long numEntriesParamValue = numEntries;
		_writeRawConstant_ev_size_t_CMatrix4_ev_uint32(this.nativeObject.pointer, physicalIndexParamValue, mParamValue, numEntriesParamValue);
	}
	native private void _writeRawConstant_ev_size_t_CColourValue_ev_size_t(long pNativeObject, long physicalIndex, long colour, long count);
	public void _writeRawConstant(long physicalIndex, com.earthview.world.graphic.ColourValue colour, long count)
	{
		long physicalIndexParamValue = physicalIndex;
		long colourParamValue = colour.nativeObject.pointer;
		long countParamValue = count;
		_writeRawConstant_ev_size_t_CColourValue_ev_size_t(this.nativeObject.pointer, physicalIndexParamValue, colourParamValue, countParamValue);
	}
	native private void _writeRawConstant_ev_size_t_CColourValue(long pNativeObject, long physicalIndex, long colour);
	public void _writeRawConstant(long physicalIndex, com.earthview.world.graphic.ColourValue colour)
	{
		long physicalIndexParamValue = physicalIndex;
		long colourParamValue = colour.nativeObject.pointer;
		_writeRawConstant_ev_size_t_CColourValue(this.nativeObject.pointer, physicalIndexParamValue, colourParamValue);
	}
	native private long getConstantDefinitionIterator_void(long pNativeObject);
	public com.earthview.world.graphic.GpuConstantDefinitionIterator getConstantDefinitionIterator()
	{
		long returnValue = getConstantDefinitionIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuConstantDefinitionIterator __returnValue = new com.earthview.world.graphic.GpuConstantDefinitionIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "GpuConstantDefinitionIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuConstantDefinitionIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "GpuConstantDefinitionIterator");
		}
		return __returnValue;
	}
	native private long getConstantDefinition_EVString(long pNativeObject, String name);
	public com.earthview.world.graphic.GpuConstantDefinition getConstantDefinition(String name)
	{
		String nameParamValue = name;
		long returnValue = getConstantDefinition_EVString(this.nativeObject.pointer, nameParamValue);
		com.earthview.world.graphic.GpuConstantDefinition __returnValue = new com.earthview.world.graphic.GpuConstantDefinition(CreatedWhenConstruct.CWC_NotToCreate, "GpuConstantDefinition");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuConstantDefinition)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "GpuConstantDefinition");
		}
		return __returnValue;
	}
	native private long getConstantDefinitions_void(long pNativeObject);
	public com.earthview.world.graphic.GpuNamedConstants getConstantDefinitions()
	{
		long returnValue = getConstantDefinitions_void(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuNamedConstants __returnValue = new com.earthview.world.graphic.GpuNamedConstants(CreatedWhenConstruct.CWC_NotToCreate, "GpuNamedConstants");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuNamedConstants)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "GpuNamedConstants");
		}
		return __returnValue;
	}
	native private long getFloatLogicalBufferStruct_void(long pNativeObject);
	public com.earthview.world.graphic.GpuLogicalBufferStructPtr getFloatLogicalBufferStruct()
	{
		long returnValue = getFloatLogicalBufferStruct_void(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuLogicalBufferStructPtr __returnValue = new com.earthview.world.graphic.GpuLogicalBufferStructPtr(CreatedWhenConstruct.CWC_NotToCreate, "GpuLogicalBufferStructPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuLogicalBufferStructPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "GpuLogicalBufferStructPtr");
		}
		return __returnValue;
	}
	native private long getFloatLogicalIndexForPhysicalIndex_ev_size_t(long pNativeObject, long physicalIndex);
	public long getFloatLogicalIndexForPhysicalIndex(long physicalIndex)
	{
		long physicalIndexParamValue = physicalIndex;
		long returnValue = getFloatLogicalIndexForPhysicalIndex_ev_size_t(this.nativeObject.pointer, physicalIndexParamValue);
		return returnValue;
	}
	native private long getIntLogicalIndexForPhysicalIndex_ev_size_t(long pNativeObject, long physicalIndex);
	public long getIntLogicalIndexForPhysicalIndex(long physicalIndex)
	{
		long physicalIndexParamValue = physicalIndex;
		long returnValue = getIntLogicalIndexForPhysicalIndex_ev_size_t(this.nativeObject.pointer, physicalIndexParamValue);
		return returnValue;
	}
	native private long getIntLogicalBufferStruct_void(long pNativeObject);
	public com.earthview.world.graphic.GpuLogicalBufferStructPtr getIntLogicalBufferStruct()
	{
		long returnValue = getIntLogicalBufferStruct_void(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuLogicalBufferStructPtr __returnValue = new com.earthview.world.graphic.GpuLogicalBufferStructPtr(CreatedWhenConstruct.CWC_NotToCreate, "GpuLogicalBufferStructPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuLogicalBufferStructPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "GpuLogicalBufferStructPtr");
		}
		return __returnValue;
	}
	native private long getFloatConstantList_void(long pNativeObject);
	//// Get a reference to the list of ev_real32 constants
	public com.earthview.world.graphic.FloatConstantList getFloatConstantList()
	{
		long returnValue = getFloatConstantList_void(this.nativeObject.pointer);
		com.earthview.world.graphic.FloatConstantList __returnValue = new com.earthview.world.graphic.FloatConstantList(CreatedWhenConstruct.CWC_NotToCreate, "FloatConstantList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.FloatConstantList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "FloatConstantList");
		}
		return __returnValue;
	}
	native private long getFloatPointer_ev_size_t(long pNativeObject, long pos);
	//// Get a pointer to the 'nth' item in the ev_real32 buffer
	public FloatPointer getFloatPointer(long pos)
	{
		long posParamValue = pos;
		long returnValue = getFloatPointer_ev_size_t(this.nativeObject.pointer, posParamValue);
		if(returnValue == 0L) {
			return null;
		}
		FloatPointer __returnValue = new FloatPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getIntConstantList_void(long pNativeObject);
	//// Get a reference to the list of ev_int32 constants
	public com.earthview.world.graphic.IntConstantList getIntConstantList()
	{
		long returnValue = getIntConstantList_void(this.nativeObject.pointer);
		com.earthview.world.graphic.IntConstantList __returnValue = new com.earthview.world.graphic.IntConstantList(CreatedWhenConstruct.CWC_NotToCreate, "IntConstantList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.IntConstantList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IntConstantList");
		}
		return __returnValue;
	}
	native private long getIntPointer_ev_size_t(long pNativeObject, long pos);
	//// Get a pointer to the 'nth' item in the ev_int32 buffer
	public IntegerPointer getIntPointer(long pos)
	{
		long posParamValue = pos;
		long returnValue = getIntPointer_ev_size_t(this.nativeObject.pointer, posParamValue);
		if(returnValue == 0L) {
			return null;
		}
		IntegerPointer __returnValue = new IntegerPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getAutoConstantList_void(long pNativeObject);
	//// Get a reference to the list of auto constant bindings
	public com.earthview.world.graphic.GpuProgramParameters.AutoConstantList getAutoConstantList()
	{
		long returnValue = getAutoConstantList_void(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuProgramParameters.AutoConstantList __returnValue = new com.earthview.world.graphic.GpuProgramParameters.AutoConstantList(CreatedWhenConstruct.CWC_NotToCreate, "AutoConstantList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramParameters.AutoConstantList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "AutoConstantList");
		}
		return __returnValue;
	}
	native private void setAutoConstant_ev_size_t_AutoConstantType_ev_size_t(long pNativeObject, long index, int acType, long extraInfo);
	public void setAutoConstant(long index, com.earthview.world.graphic.GpuProgramParameters.AutoConstantType acType, long extraInfo)
	{
		long indexParamValue = index;
		int acTypeParamValue = acType.getValue();
		long extraInfoParamValue = extraInfo;
		setAutoConstant_ev_size_t_AutoConstantType_ev_size_t(this.nativeObject.pointer, indexParamValue, acTypeParamValue, extraInfoParamValue);
	}
	native private void setAutoConstant_ev_size_t_AutoConstantType(long pNativeObject, long index, int acType);
	public void setAutoConstant(long index, com.earthview.world.graphic.GpuProgramParameters.AutoConstantType acType)
	{
		long indexParamValue = index;
		int acTypeParamValue = acType.getValue();
		setAutoConstant_ev_size_t_AutoConstantType(this.nativeObject.pointer, indexParamValue, acTypeParamValue);
	}
	native private void setAutoConstantReal_ev_size_t_AutoConstantType_Real(long pNativeObject, long index, int acType, double rData);
	public void setAutoConstantReal(long index, com.earthview.world.graphic.GpuProgramParameters.AutoConstantType acType, double rData)
	{
		long indexParamValue = index;
		int acTypeParamValue = acType.getValue();
		double rDataParamValue = rData;
		setAutoConstantReal_ev_size_t_AutoConstantType_Real(this.nativeObject.pointer, indexParamValue, acTypeParamValue, rDataParamValue);
	}
	native private void setAutoConstant_ev_size_t_AutoConstantType_ev_uint16_ev_uint16(long pNativeObject, long index, int acType, int extraInfo1, int extraInfo2);
	public void setAutoConstant(long index, com.earthview.world.graphic.GpuProgramParameters.AutoConstantType acType, int extraInfo1, int extraInfo2)
	{
		long indexParamValue = index;
		int acTypeParamValue = acType.getValue();
		int extraInfo1ParamValue = extraInfo1;
		int extraInfo2ParamValue = extraInfo2;
		setAutoConstant_ev_size_t_AutoConstantType_ev_uint16_ev_uint16(this.nativeObject.pointer, indexParamValue, acTypeParamValue, extraInfo1ParamValue, extraInfo2ParamValue);
	}
	native private void _setRawAutoConstant_ev_size_t_AutoConstantType_ev_size_t_ev_uint16_ev_size_t(long pNativeObject, long physicalIndex, int acType, long extraInfo, int variability, long elementSize);
	public void _setRawAutoConstant(long physicalIndex, com.earthview.world.graphic.GpuProgramParameters.AutoConstantType acType, long extraInfo, int variability, long elementSize)
	{
		long physicalIndexParamValue = physicalIndex;
		int acTypeParamValue = acType.getValue();
		long extraInfoParamValue = extraInfo;
		int variabilityParamValue = variability;
		long elementSizeParamValue = elementSize;
		_setRawAutoConstant_ev_size_t_AutoConstantType_ev_size_t_ev_uint16_ev_size_t(this.nativeObject.pointer, physicalIndexParamValue, acTypeParamValue, extraInfoParamValue, variabilityParamValue, elementSizeParamValue);
	}
	native private void _setRawAutoConstant_ev_size_t_AutoConstantType_ev_size_t_ev_uint16(long pNativeObject, long physicalIndex, int acType, long extraInfo, int variability);
	public void _setRawAutoConstant(long physicalIndex, com.earthview.world.graphic.GpuProgramParameters.AutoConstantType acType, long extraInfo, int variability)
	{
		long physicalIndexParamValue = physicalIndex;
		int acTypeParamValue = acType.getValue();
		long extraInfoParamValue = extraInfo;
		int variabilityParamValue = variability;
		_setRawAutoConstant_ev_size_t_AutoConstantType_ev_size_t_ev_uint16(this.nativeObject.pointer, physicalIndexParamValue, acTypeParamValue, extraInfoParamValue, variabilityParamValue);
	}
	native private void _setRawAutoConstantReal_ev_size_t_AutoConstantType_Real_ev_uint16_ev_size_t(long pNativeObject, long physicalIndex, int acType, double rData, int variability, long elementSize);
	public void _setRawAutoConstantReal(long physicalIndex, com.earthview.world.graphic.GpuProgramParameters.AutoConstantType acType, double rData, int variability, long elementSize)
	{
		long physicalIndexParamValue = physicalIndex;
		int acTypeParamValue = acType.getValue();
		double rDataParamValue = rData;
		int variabilityParamValue = variability;
		long elementSizeParamValue = elementSize;
		_setRawAutoConstantReal_ev_size_t_AutoConstantType_Real_ev_uint16_ev_size_t(this.nativeObject.pointer, physicalIndexParamValue, acTypeParamValue, rDataParamValue, variabilityParamValue, elementSizeParamValue);
	}
	native private void _setRawAutoConstantReal_ev_size_t_AutoConstantType_Real_ev_uint16(long pNativeObject, long physicalIndex, int acType, double rData, int variability);
	public void _setRawAutoConstantReal(long physicalIndex, com.earthview.world.graphic.GpuProgramParameters.AutoConstantType acType, double rData, int variability)
	{
		long physicalIndexParamValue = physicalIndex;
		int acTypeParamValue = acType.getValue();
		double rDataParamValue = rData;
		int variabilityParamValue = variability;
		_setRawAutoConstantReal_ev_size_t_AutoConstantType_Real_ev_uint16(this.nativeObject.pointer, physicalIndexParamValue, acTypeParamValue, rDataParamValue, variabilityParamValue);
	}
	native private void clearAutoConstant_ev_size_t(long pNativeObject, long index);
	public void clearAutoConstant(long index)
	{
		long indexParamValue = index;
		clearAutoConstant_ev_size_t(this.nativeObject.pointer, indexParamValue);
	}
	native private void setConstantFromTime_ev_size_t_Real(long pNativeObject, long index, double factor);
	public void setConstantFromTime(long index, double factor)
	{
		long indexParamValue = index;
		double factorParamValue = factor;
		setConstantFromTime_ev_size_t_Real(this.nativeObject.pointer, indexParamValue, factorParamValue);
	}
	native private void clearAutoConstants_void(long pNativeObject);
	public void clearAutoConstants()
	{
		clearAutoConstants_void(this.nativeObject.pointer);
	}
	///typedef EarthView::World::Core::CConstVectorIterator<EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList> EarthView::World::Graphic::CGpuProgramParameters::AutoConstantIterator;
	public static class AutoConstantIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CGpuProgramParameters::AutoConstantIterator", new AutoConstantIteratorClassFactory());
		}

		/**
		 * 构造函数
		 * @param vec 迭代器对应集合
		 */
		public AutoConstantIterator(com.earthview.world.graphic.GpuProgramParameters.AutoConstantList vec) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer vecPtr = new BasePointer(vec);
			list.add("vec", vecPtr.get());
			Create("AutoConstantIterator", list);
		}

		/**
		 * 复制构造函数
		 * @param rhs 其它迭代器
		 */
		public AutoConstantIterator(com.earthview.world.graphic.GpuProgramParameters.AutoConstantIterator rhs) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer rhsPtr = new BasePointer(rhs);
			list.add("rhs", rhsPtr.get());
			Create("AutoConstantIterator", list);
		}

		native private boolean hasMoreElements_void(long pNativeObject);
		/**
		 * 判断迭代器是否到达容器末尾
		 * @param  
		 * @return 是返回true，否则false
		 */
		public boolean hasMoreElements()
		{
			boolean returnValue = hasMoreElements_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void moveNext_void(long pNativeObject);
		/**
		 * 迭代器位置后移
		 * @param  
		 */
		public void moveNext()
		{
			moveNext_void(this.nativeObject.pointer);
		}
		native private long getCurrent_void(long pNativeObject);
		/**
		 * 返回容器当前元素值
		 * @param  
		 * @return 当前元素值
		 */
		public com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry __returnValue = new com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "CAutoConstantEntry");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "CAutoConstantEntry");
			}
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		/**
		 * 返回容器下一元素值
		 * @param  
		 * @return 下一元素值
		 */
		public com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry __returnValue = new com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "CAutoConstantEntry");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "CAutoConstantEntry");
			}
			return __returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		/**
		 * 返回容器头部元素值
		 * @param  
		 * @return 头部元素值
		 */
		public com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry __returnValue = new com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "CAutoConstantEntry");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "CAutoConstantEntry");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		/**
		 * 返回容器尾部元素值
		 * @param  
		 * @return 尾部元素值
		 */
		public com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry __returnValue = new com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "CAutoConstantEntry");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "CAutoConstantEntry");
			}
			return __returnValue;
		}
		public AutoConstantIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public AutoConstantIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static AutoConstantIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			AutoConstantIterator obj = null;
 			if(baseObj instanceof AutoConstantIterator)
			{
				obj = (AutoConstantIterator)baseObj;
			} else {
				obj = new AutoConstantIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "AutoConstantIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class AutoConstantIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			AutoConstantIterator emptyInstance = new AutoConstantIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private long getAutoConstantIterator_void(long pNativeObject);
	public com.earthview.world.graphic.GpuProgramParameters.AutoConstantIterator getAutoConstantIterator()
	{
		long returnValue = getAutoConstantIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuProgramParameters.AutoConstantIterator __returnValue = new com.earthview.world.graphic.GpuProgramParameters.AutoConstantIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "AutoConstantIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramParameters.AutoConstantIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "AutoConstantIterator");
		}
		return __returnValue;
	}
	native private long getAutoConstantCount_void(long pNativeObject);
	//// Gets the number of ev_int32 constants that have been set
	public long getAutoConstantCount()
	{
		long returnValue = getAutoConstantCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getAutoConstantEntry_ev_size_t(long pNativeObject, long index);
	public com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry getAutoConstantEntry(long index)
	{
		long indexParamValue = index;
		long returnValue = getAutoConstantEntry_ev_size_t(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry __returnValue = new com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry(CreatedWhenConstruct.CWC_NotToCreate, "CAutoConstantEntry");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAutoConstantEntry");
		}
		return __returnValue;
	}
	native private boolean hasAutoConstants_void(long pNativeObject);
	public boolean hasAutoConstants()
	{
		boolean returnValue = hasAutoConstants_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long findFloatAutoConstantEntry_ev_size_t(long pNativeObject, long logicalIndex);
	public com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry findFloatAutoConstantEntry(long logicalIndex)
	{
		long logicalIndexParamValue = logicalIndex;
		long returnValue = findFloatAutoConstantEntry_ev_size_t(this.nativeObject.pointer, logicalIndexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry __returnValue = new com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry(CreatedWhenConstruct.CWC_NotToCreate, "CAutoConstantEntry");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAutoConstantEntry");
		}
		return __returnValue;
	}
	native private long findIntAutoConstantEntry_ev_size_t(long pNativeObject, long logicalIndex);
	public com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry findIntAutoConstantEntry(long logicalIndex)
	{
		long logicalIndexParamValue = logicalIndex;
		long returnValue = findIntAutoConstantEntry_ev_size_t(this.nativeObject.pointer, logicalIndexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry __returnValue = new com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry(CreatedWhenConstruct.CWC_NotToCreate, "CAutoConstantEntry");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAutoConstantEntry");
		}
		return __returnValue;
	}
	native private long findAutoConstantEntry_EVString(long pNativeObject, String paramName);
	public com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry findAutoConstantEntry(String paramName)
	{
		String paramNameParamValue = paramName;
		long returnValue = findAutoConstantEntry_EVString(this.nativeObject.pointer, paramNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry __returnValue = new com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry(CreatedWhenConstruct.CWC_NotToCreate, "CAutoConstantEntry");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAutoConstantEntry");
		}
		return __returnValue;
	}
	native private long _findRawAutoConstantEntryFloat_ev_size_t(long pNativeObject, long physicalIndex);
	public com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry _findRawAutoConstantEntryFloat(long physicalIndex)
	{
		long physicalIndexParamValue = physicalIndex;
		long returnValue = _findRawAutoConstantEntryFloat_ev_size_t(this.nativeObject.pointer, physicalIndexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry __returnValue = new com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry(CreatedWhenConstruct.CWC_NotToCreate, "CAutoConstantEntry");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAutoConstantEntry");
		}
		return __returnValue;
	}
	native private long _findRawAutoConstantEntryInt_ev_size_t(long pNativeObject, long physicalIndex);
	public com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry _findRawAutoConstantEntryInt(long physicalIndex)
	{
		long physicalIndexParamValue = physicalIndex;
		long returnValue = _findRawAutoConstantEntryInt_ev_size_t(this.nativeObject.pointer, physicalIndexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry __returnValue = new com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry(CreatedWhenConstruct.CWC_NotToCreate, "CAutoConstantEntry");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAutoConstantEntry");
		}
		return __returnValue;
	}
	native private void _updateAutoParams_CAutoParamDataSource_ev_uint16(long pNativeObject, long source, int variabilityMask);
	public void _updateAutoParams(com.earthview.world.graphic.AutoParamDataSource source, int variabilityMask)
	{
		long sourceParamValue = (source == null ? 0L : source.nativeObject.pointer);
		int variabilityMaskParamValue = variabilityMask;
		_updateAutoParams_CAutoParamDataSource_ev_uint16(this.nativeObject.pointer, sourceParamValue, variabilityMaskParamValue);
	}
	native private void setIgnoreMissingParams_ev_bool(long pNativeObject, boolean state);
	public void setIgnoreMissingParams(boolean state)
	{
		boolean stateParamValue = state;
		setIgnoreMissingParams_ev_bool(this.nativeObject.pointer, stateParamValue);
	}
	native private void setNamedConstant_EVString_Real(long pNativeObject, String name, double val);
	public void setNamedConstant(String name, double val)
	{
		String nameParamValue = name;
		double valParamValue = val;
		setNamedConstant_EVString_Real(this.nativeObject.pointer, nameParamValue, valParamValue);
	}
	native private void setNamedConstant_EVString_ev_int32(long pNativeObject, String name, int val);
	public void setNamedConstant(String name, int val)
	{
		String nameParamValue = name;
		int valParamValue = val;
		setNamedConstant_EVString_ev_int32(this.nativeObject.pointer, nameParamValue, valParamValue);
	}
	native private void setNamedConstant_EVString_CVector4(long pNativeObject, String name, long vec);
	public void setNamedConstant(String name, com.earthview.world.spatial.math.Vector4 vec)
	{
		String nameParamValue = name;
		long vecParamValue = vec.nativeObject.pointer;
		setNamedConstant_EVString_CVector4(this.nativeObject.pointer, nameParamValue, vecParamValue);
	}
	native private void setNamedConstant_EVString_CVector3(long pNativeObject, String name, long vec);
	public void setNamedConstant(String name, com.earthview.world.spatial.math.Vector3 vec)
	{
		String nameParamValue = name;
		long vecParamValue = vec.nativeObject.pointer;
		setNamedConstant_EVString_CVector3(this.nativeObject.pointer, nameParamValue, vecParamValue);
	}
	native private void setNamedConstant_EVString_CMatrix4(long pNativeObject, String name, long m);
	public void setNamedConstant(String name, com.earthview.world.spatial.math.Matrix4 m)
	{
		String nameParamValue = name;
		long mParamValue = m.nativeObject.pointer;
		setNamedConstant_EVString_CMatrix4(this.nativeObject.pointer, nameParamValue, mParamValue);
	}
	native private void setNamedConstant_EVString_CMatrix4_ev_size_t(long pNativeObject, String name, long m, long numEntries);
	public void setNamedConstant(String name, com.earthview.world.spatial.math.Matrix4 m, long numEntries)
	{
		String nameParamValue = name;
		long mParamValue = (m == null ? 0L : m.nativeObject.pointer);
		long numEntriesParamValue = numEntries;
		setNamedConstant_EVString_CMatrix4_ev_size_t(this.nativeObject.pointer, nameParamValue, mParamValue, numEntriesParamValue);
	}
	native private void setNamedConstant_EVString_ev_real32_ev_size_t_ev_size_t(long pNativeObject, String name, long val, long count, long multiple);
	public void setNamedConstant(String name, FloatPointer val, long count, long multiple)
	{
		String nameParamValue = name;
		long valParamValue = (val == null ? 0L : val.nativeObject.pointer);
		long countParamValue = count;
		long multipleParamValue = multiple;
		setNamedConstant_EVString_ev_real32_ev_size_t_ev_size_t(this.nativeObject.pointer, nameParamValue, valParamValue, countParamValue, multipleParamValue);
	}
	native private void setNamedConstant_EVString_ev_real32_ev_size_t(long pNativeObject, String name, long val, long count);
	public void setNamedConstant(String name, FloatPointer val, long count)
	{
		String nameParamValue = name;
		long valParamValue = (val == null ? 0L : val.nativeObject.pointer);
		long countParamValue = count;
		setNamedConstant_EVString_ev_real32_ev_size_t(this.nativeObject.pointer, nameParamValue, valParamValue, countParamValue);
	}
	native private void setNamedConstant_EVString_ev_real64_ev_size_t_ev_size_t(long pNativeObject, String name, long val, long count, long multiple);
	public void setNamedConstant(String name, DoublePointer val, long count, long multiple)
	{
		String nameParamValue = name;
		long valParamValue = (val == null ? 0L : val.nativeObject.pointer);
		long countParamValue = count;
		long multipleParamValue = multiple;
		setNamedConstant_EVString_ev_real64_ev_size_t_ev_size_t(this.nativeObject.pointer, nameParamValue, valParamValue, countParamValue, multipleParamValue);
	}
	native private void setNamedConstant_EVString_ev_real64_ev_size_t(long pNativeObject, String name, long val, long count);
	public void setNamedConstant(String name, DoublePointer val, long count)
	{
		String nameParamValue = name;
		long valParamValue = (val == null ? 0L : val.nativeObject.pointer);
		long countParamValue = count;
		setNamedConstant_EVString_ev_real64_ev_size_t(this.nativeObject.pointer, nameParamValue, valParamValue, countParamValue);
	}
	native private void setNamedConstant_EVString_CColourValue(long pNativeObject, String name, long colour);
	public void setNamedConstant(String name, com.earthview.world.graphic.ColourValue colour)
	{
		String nameParamValue = name;
		long colourParamValue = colour.nativeObject.pointer;
		setNamedConstant_EVString_CColourValue(this.nativeObject.pointer, nameParamValue, colourParamValue);
	}
	native private void setNamedConstant_EVString_ev_int32_ev_size_t_ev_size_t(long pNativeObject, String name, long val, long count, long multiple);
	public void setNamedConstant(String name, IntegerPointer val, long count, long multiple)
	{
		String nameParamValue = name;
		long valParamValue = (val == null ? 0L : val.nativeObject.pointer);
		long countParamValue = count;
		long multipleParamValue = multiple;
		setNamedConstant_EVString_ev_int32_ev_size_t_ev_size_t(this.nativeObject.pointer, nameParamValue, valParamValue, countParamValue, multipleParamValue);
	}
	native private void setNamedConstant_EVString_ev_int32_ev_size_t(long pNativeObject, String name, long val, long count);
	public void setNamedConstant(String name, IntegerPointer val, long count)
	{
		String nameParamValue = name;
		long valParamValue = (val == null ? 0L : val.nativeObject.pointer);
		long countParamValue = count;
		setNamedConstant_EVString_ev_int32_ev_size_t(this.nativeObject.pointer, nameParamValue, valParamValue, countParamValue);
	}
	native private void setNamedAutoConstant_EVString_AutoConstantType_ev_size_t(long pNativeObject, String name, int acType, long extraInfo);
	public void setNamedAutoConstant(String name, com.earthview.world.graphic.GpuProgramParameters.AutoConstantType acType, long extraInfo)
	{
		String nameParamValue = name;
		int acTypeParamValue = acType.getValue();
		long extraInfoParamValue = extraInfo;
		setNamedAutoConstant_EVString_AutoConstantType_ev_size_t(this.nativeObject.pointer, nameParamValue, acTypeParamValue, extraInfoParamValue);
	}
	native private void setNamedAutoConstant_EVString_AutoConstantType(long pNativeObject, String name, int acType);
	public void setNamedAutoConstant(String name, com.earthview.world.graphic.GpuProgramParameters.AutoConstantType acType)
	{
		String nameParamValue = name;
		int acTypeParamValue = acType.getValue();
		setNamedAutoConstant_EVString_AutoConstantType(this.nativeObject.pointer, nameParamValue, acTypeParamValue);
	}
	native private void setNamedAutoConstantReal_EVString_AutoConstantType_Real(long pNativeObject, String name, int acType, double rData);
	public void setNamedAutoConstantReal(String name, com.earthview.world.graphic.GpuProgramParameters.AutoConstantType acType, double rData)
	{
		String nameParamValue = name;
		int acTypeParamValue = acType.getValue();
		double rDataParamValue = rData;
		setNamedAutoConstantReal_EVString_AutoConstantType_Real(this.nativeObject.pointer, nameParamValue, acTypeParamValue, rDataParamValue);
	}
	native private void setNamedAutoConstant_EVString_AutoConstantType_ev_uint16_ev_uint16(long pNativeObject, String name, int acType, int extraInfo1, int extraInfo2);
	public void setNamedAutoConstant(String name, com.earthview.world.graphic.GpuProgramParameters.AutoConstantType acType, int extraInfo1, int extraInfo2)
	{
		String nameParamValue = name;
		int acTypeParamValue = acType.getValue();
		int extraInfo1ParamValue = extraInfo1;
		int extraInfo2ParamValue = extraInfo2;
		setNamedAutoConstant_EVString_AutoConstantType_ev_uint16_ev_uint16(this.nativeObject.pointer, nameParamValue, acTypeParamValue, extraInfo1ParamValue, extraInfo2ParamValue);
	}
	native private void setNamedConstantFromTime_EVString_Real(long pNativeObject, String name, double factor);
	public void setNamedConstantFromTime(String name, double factor)
	{
		String nameParamValue = name;
		double factorParamValue = factor;
		setNamedConstantFromTime_EVString_Real(this.nativeObject.pointer, nameParamValue, factorParamValue);
	}
	native private void clearNamedAutoConstant_EVString(long pNativeObject, String name);
	public void clearNamedAutoConstant(String name)
	{
		String nameParamValue = name;
		clearNamedAutoConstant_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private long _findNamedConstantDefinition_EVString_ev_bool(long pNativeObject, String name, boolean throwExceptionIfMissing);
	public com.earthview.world.graphic.GpuConstantDefinition _findNamedConstantDefinition(String name, boolean throwExceptionIfMissing)
	{
		String nameParamValue = name;
		boolean throwExceptionIfMissingParamValue = throwExceptionIfMissing;
		long returnValue = _findNamedConstantDefinition_EVString_ev_bool(this.nativeObject.pointer, nameParamValue, throwExceptionIfMissingParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.GpuConstantDefinition __returnValue = new com.earthview.world.graphic.GpuConstantDefinition(CreatedWhenConstruct.CWC_NotToCreate, "GpuConstantDefinition");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuConstantDefinition)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "GpuConstantDefinition");
		}
		return __returnValue;
	}
	native private long _findNamedConstantDefinition_EVString(long pNativeObject, String name);
	public com.earthview.world.graphic.GpuConstantDefinition _findNamedConstantDefinition(String name)
	{
		String nameParamValue = name;
		long returnValue = _findNamedConstantDefinition_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.GpuConstantDefinition __returnValue = new com.earthview.world.graphic.GpuConstantDefinition(CreatedWhenConstruct.CWC_NotToCreate, "GpuConstantDefinition");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuConstantDefinition)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "GpuConstantDefinition");
		}
		return __returnValue;
	}
	native private long _getFloatConstantPhysicalIndex_ev_size_t_ev_size_t_ev_uint16(long pNativeObject, long logicalIndex, long requestedSize, int variability);
	public long _getFloatConstantPhysicalIndex(long logicalIndex, long requestedSize, int variability)
	{
		long logicalIndexParamValue = logicalIndex;
		long requestedSizeParamValue = requestedSize;
		int variabilityParamValue = variability;
		long returnValue = _getFloatConstantPhysicalIndex_ev_size_t_ev_size_t_ev_uint16(this.nativeObject.pointer, logicalIndexParamValue, requestedSizeParamValue, variabilityParamValue);
		return returnValue;
	}
	native private long _getIntConstantPhysicalIndex_ev_size_t_ev_size_t_ev_uint16(long pNativeObject, long logicalIndex, long requestedSize, int variability);
	public long _getIntConstantPhysicalIndex(long logicalIndex, long requestedSize, int variability)
	{
		long logicalIndexParamValue = logicalIndex;
		long requestedSizeParamValue = requestedSize;
		int variabilityParamValue = variability;
		long returnValue = _getIntConstantPhysicalIndex_ev_size_t_ev_size_t_ev_uint16(this.nativeObject.pointer, logicalIndexParamValue, requestedSizeParamValue, variabilityParamValue);
		return returnValue;
	}
	native private void setTransposeMatrices_ev_bool(long pNativeObject, boolean val);
	public void setTransposeMatrices(boolean val)
	{
		boolean valParamValue = val;
		setTransposeMatrices_ev_bool(this.nativeObject.pointer, valParamValue);
	}
	native private boolean getTransposeMatrices_void(long pNativeObject);
	//// Gets whether or not matrices are to be transposed when set
	public boolean getTransposeMatrices()
	{
		boolean returnValue = getTransposeMatrices_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void copyConstantsFrom_CGpuProgramParameters(long pNativeObject, long source);
	public void copyConstantsFrom(com.earthview.world.graphic.GpuProgramParameters source)
	{
		long sourceParamValue = source.nativeObject.pointer;
		copyConstantsFrom_CGpuProgramParameters(this.nativeObject.pointer, sourceParamValue);
	}
	native private void copyMatchingNamedConstantsFrom_CGpuProgramParameters(long pNativeObject, long source);
	public void copyMatchingNamedConstantsFrom(com.earthview.world.graphic.GpuProgramParameters source)
	{
		long sourceParamValue = source.nativeObject.pointer;
		copyMatchingNamedConstantsFrom_CGpuProgramParameters(this.nativeObject.pointer, sourceParamValue);
	}
	native private static long getAutoConstantDefinition_EVString(String name);
	public static com.earthview.world.graphic.GpuProgramParameters.AutoConstantDefinition getAutoConstantDefinition(String name)
	{
		String nameParamValue = name;
		long returnValue = getAutoConstantDefinition_EVString(nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.GpuProgramParameters.AutoConstantDefinition __returnValue = new com.earthview.world.graphic.GpuProgramParameters.AutoConstantDefinition(CreatedWhenConstruct.CWC_NotToCreate, "AutoConstantDefinition");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramParameters.AutoConstantDefinition)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "AutoConstantDefinition");
		}
		return __returnValue;
	}
	native private static long getAutoConstantDefinition_ev_size_t(long idx);
	public static com.earthview.world.graphic.GpuProgramParameters.AutoConstantDefinition getAutoConstantDefinition(long idx)
	{
		long idxParamValue = idx;
		long returnValue = getAutoConstantDefinition_ev_size_t(idxParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.GpuProgramParameters.AutoConstantDefinition __returnValue = new com.earthview.world.graphic.GpuProgramParameters.AutoConstantDefinition(CreatedWhenConstruct.CWC_NotToCreate, "AutoConstantDefinition");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramParameters.AutoConstantDefinition)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "AutoConstantDefinition");
		}
		return __returnValue;
	}
	native private static long getNumAutoConstantDefinitions_void();
	public static long getNumAutoConstantDefinitions()
	{
		long returnValue = getNumAutoConstantDefinitions_void();
		return returnValue;
	}
	native private void incPassIterationNumber_void(long pNativeObject);
	public void incPassIterationNumber()
	{
		incPassIterationNumber_void(this.nativeObject.pointer);
	}
	native private boolean hasPassIterationNumber_void(long pNativeObject);
	public boolean hasPassIterationNumber()
	{
		boolean returnValue = hasPassIterationNumber_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getPassIterationNumberIndex_void(long pNativeObject);
	public long getPassIterationNumberIndex()
	{
		long returnValue = getPassIterationNumberIndex_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void addSharedParameters_GpuSharedParametersPtr(long pNativeObject, long sharedParams);
	public void addSharedParameters(com.earthview.world.graphic.GpuSharedParametersPtr sharedParams)
	{
		long sharedParamsParamValue = sharedParams.nativeObject.pointer;
		addSharedParameters_GpuSharedParametersPtr(this.nativeObject.pointer, sharedParamsParamValue);
	}
	native private void addSharedParameters_EVString(long pNativeObject, String sharedParamsName);
	public void addSharedParameters(String sharedParamsName)
	{
		String sharedParamsNameParamValue = sharedParamsName;
		addSharedParameters_EVString(this.nativeObject.pointer, sharedParamsNameParamValue);
	}
	native private boolean isUsingSharedParameters_EVString(long pNativeObject, String sharedParamsName);
	public boolean isUsingSharedParameters(String sharedParamsName)
	{
		String sharedParamsNameParamValue = sharedParamsName;
		boolean returnValue = isUsingSharedParameters_EVString(this.nativeObject.pointer, sharedParamsNameParamValue);
		return returnValue;
	}
	native private void removeSharedParameters_EVString(long pNativeObject, String sharedParamsName);
	public void removeSharedParameters(String sharedParamsName)
	{
		String sharedParamsNameParamValue = sharedParamsName;
		removeSharedParameters_EVString(this.nativeObject.pointer, sharedParamsNameParamValue);
	}
	native private void removeAllSharedParameters_void(long pNativeObject);
	public void removeAllSharedParameters()
	{
		removeAllSharedParameters_void(this.nativeObject.pointer);
	}
	native private long getSharedParameters_void(long pNativeObject);
	public com.earthview.world.graphic.GpuProgramParameters.GpuSharedParamUsageList getSharedParameters()
	{
		long returnValue = getSharedParameters_void(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuProgramParameters.GpuSharedParamUsageList __returnValue = new com.earthview.world.graphic.GpuProgramParameters.GpuSharedParamUsageList(CreatedWhenConstruct.CWC_NotToCreate, "GpuSharedParamUsageList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramParameters.GpuSharedParamUsageList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "GpuSharedParamUsageList");
		}
		return __returnValue;
	}
	native private void _copySharedParams_void(long pNativeObject);
	public void _copySharedParams()
	{
		_copySharedParams_void(this.nativeObject.pointer);
	}
	public GpuProgramParameters(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GpuProgramParameters(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GpuProgramParameters fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GpuProgramParameters obj = null;
 		if(baseObj instanceof GpuProgramParameters)
		{
			obj = (GpuProgramParameters)baseObj;
		} else {
			obj = new GpuProgramParameters(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGpuProgramParameters");
			obj.increaseCast();
		}

		return obj;
	}
}
