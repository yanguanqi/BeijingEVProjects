package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum ShadowTechnique implements INativeEnum<ShadowTechnique> {
	SHADOWTYPE_NONE(ShadowTechniqueHelper.ENUM_VALUES[0]),
	SHADOWDETAILTYPE_ADDITIVE(ShadowTechniqueHelper.ENUM_VALUES[1]),
	SHADOWDETAILTYPE_MODULATIVE(ShadowTechniqueHelper.ENUM_VALUES[2]),
	SHADOWDETAILTYPE_INTEGRATED(ShadowTechniqueHelper.ENUM_VALUES[3]),
	SHADOWDETAILTYPE_STENCIL(ShadowTechniqueHelper.ENUM_VALUES[4]),
	SHADOWDETAILTYPE_TEXTURE(ShadowTechniqueHelper.ENUM_VALUES[5]),
	SHADOWTYPE_STENCIL_MODULATIVE(ShadowTechniqueHelper.ENUM_VALUES[6]),
	SHADOWTYPE_STENCIL_ADDITIVE(ShadowTechniqueHelper.ENUM_VALUES[7]),
	SHADOWTYPE_TEXTURE_MODULATIVE(ShadowTechniqueHelper.ENUM_VALUES[8]),
	SHADOWTYPE_TEXTURE_ADDITIVE(ShadowTechniqueHelper.ENUM_VALUES[9]),
	SHADOWTYPE_TEXTURE_ADDITIVE_INTEGRATED(ShadowTechniqueHelper.ENUM_VALUES[10]),
	SHADOWTYPE_TEXTURE_MODULATIVE_INTEGRATED(ShadowTechniqueHelper.ENUM_VALUES[11]);
	private int value;
	ShadowTechnique(int i) {
		this.value = i;
	}
	public ShadowTechnique getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final ShadowTechnique toEnum(int retval) {
		if(retval == SHADOWTYPE_NONE.value){
			return SHADOWTYPE_NONE;
		}
		else if(retval == SHADOWDETAILTYPE_ADDITIVE.value){
			return SHADOWDETAILTYPE_ADDITIVE;
		}
		else if(retval == SHADOWDETAILTYPE_MODULATIVE.value){
			return SHADOWDETAILTYPE_MODULATIVE;
		}
		else if(retval == SHADOWDETAILTYPE_INTEGRATED.value){
			return SHADOWDETAILTYPE_INTEGRATED;
		}
		else if(retval == SHADOWDETAILTYPE_STENCIL.value){
			return SHADOWDETAILTYPE_STENCIL;
		}
		else if(retval == SHADOWDETAILTYPE_TEXTURE.value){
			return SHADOWDETAILTYPE_TEXTURE;
		}
		else if(retval == SHADOWTYPE_STENCIL_MODULATIVE.value){
			return SHADOWTYPE_STENCIL_MODULATIVE;
		}
		else if(retval == SHADOWTYPE_STENCIL_ADDITIVE.value){
			return SHADOWTYPE_STENCIL_ADDITIVE;
		}
		else if(retval == SHADOWTYPE_TEXTURE_MODULATIVE.value){
			return SHADOWTYPE_TEXTURE_MODULATIVE;
		}
		else if(retval == SHADOWTYPE_TEXTURE_ADDITIVE.value){
			return SHADOWTYPE_TEXTURE_ADDITIVE;
		}
		else if(retval == SHADOWTYPE_TEXTURE_ADDITIVE_INTEGRATED.value){
			return SHADOWTYPE_TEXTURE_ADDITIVE_INTEGRATED;
		}
		else if(retval == SHADOWTYPE_TEXTURE_MODULATIVE_INTEGRATED.value){
			return SHADOWTYPE_TEXTURE_MODULATIVE_INTEGRATED;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class ShadowTechniqueHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
