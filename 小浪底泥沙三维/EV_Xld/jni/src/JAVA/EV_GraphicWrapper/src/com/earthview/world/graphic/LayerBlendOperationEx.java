package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

//// Blend based on texture alpha
public enum LayerBlendOperationEx implements INativeEnum<LayerBlendOperationEx> {
	LBX_SOURCE1(LayerBlendOperationExHelper.ENUM_VALUES[0]),
	LBX_SOURCE2(LayerBlendOperationExHelper.ENUM_VALUES[1]),
	LBX_MODULATE(LayerBlendOperationExHelper.ENUM_VALUES[2]),
	LBX_MODULATE_X2(LayerBlendOperationExHelper.ENUM_VALUES[3]),
	LBX_MODULATE_X4(LayerBlendOperationExHelper.ENUM_VALUES[4]),
	LBX_ADD(LayerBlendOperationExHelper.ENUM_VALUES[5]),
	LBX_ADD_SIGNED(LayerBlendOperationExHelper.ENUM_VALUES[6]),
	LBX_ADD_SMOOTH(LayerBlendOperationExHelper.ENUM_VALUES[7]),
	LBX_SUBTRACT(LayerBlendOperationExHelper.ENUM_VALUES[8]),
	LBX_BLEND_DIFFUSE_ALPHA(LayerBlendOperationExHelper.ENUM_VALUES[9]),
	LBX_BLEND_TEXTURE_ALPHA(LayerBlendOperationExHelper.ENUM_VALUES[10]),
	LBX_BLEND_CURRENT_ALPHA(LayerBlendOperationExHelper.ENUM_VALUES[11]),
	LBX_BLEND_MANUAL(LayerBlendOperationExHelper.ENUM_VALUES[12]),
	LBX_DOTPRODUCT(LayerBlendOperationExHelper.ENUM_VALUES[13]),
	LBX_BLEND_DIFFUSE_COLOUR(LayerBlendOperationExHelper.ENUM_VALUES[14]);
	private int value;
	LayerBlendOperationEx(int i) {
		this.value = i;
	}
	public LayerBlendOperationEx getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final LayerBlendOperationEx toEnum(int retval) {
		if(retval == LBX_SOURCE1.value){
			return LBX_SOURCE1;
		}
		else if(retval == LBX_SOURCE2.value){
			return LBX_SOURCE2;
		}
		else if(retval == LBX_MODULATE.value){
			return LBX_MODULATE;
		}
		else if(retval == LBX_MODULATE_X2.value){
			return LBX_MODULATE_X2;
		}
		else if(retval == LBX_MODULATE_X4.value){
			return LBX_MODULATE_X4;
		}
		else if(retval == LBX_ADD.value){
			return LBX_ADD;
		}
		else if(retval == LBX_ADD_SIGNED.value){
			return LBX_ADD_SIGNED;
		}
		else if(retval == LBX_ADD_SMOOTH.value){
			return LBX_ADD_SMOOTH;
		}
		else if(retval == LBX_SUBTRACT.value){
			return LBX_SUBTRACT;
		}
		else if(retval == LBX_BLEND_DIFFUSE_ALPHA.value){
			return LBX_BLEND_DIFFUSE_ALPHA;
		}
		else if(retval == LBX_BLEND_TEXTURE_ALPHA.value){
			return LBX_BLEND_TEXTURE_ALPHA;
		}
		else if(retval == LBX_BLEND_CURRENT_ALPHA.value){
			return LBX_BLEND_CURRENT_ALPHA;
		}
		else if(retval == LBX_BLEND_MANUAL.value){
			return LBX_BLEND_MANUAL;
		}
		else if(retval == LBX_DOTPRODUCT.value){
			return LBX_DOTPRODUCT;
		}
		else if(retval == LBX_BLEND_DIFFUSE_COLOUR.value){
			return LBX_BLEND_DIFFUSE_COLOUR;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class LayerBlendOperationExHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
