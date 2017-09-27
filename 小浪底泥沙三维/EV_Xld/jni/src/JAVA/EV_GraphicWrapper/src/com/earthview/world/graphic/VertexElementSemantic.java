package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

//// Vertex element semantics, used to identify the meaning of vertex buffer contents
public enum VertexElementSemantic implements INativeEnum<VertexElementSemantic> {
	VES_POSITION(VertexElementSemanticHelper.ENUM_VALUES[0]),
	VES_BLEND_WEIGHTS(VertexElementSemanticHelper.ENUM_VALUES[1]),
	VES_BLEND_INDICES(VertexElementSemanticHelper.ENUM_VALUES[2]),
	VES_NORMAL(VertexElementSemanticHelper.ENUM_VALUES[3]),
	VES_DIFFUSE(VertexElementSemanticHelper.ENUM_VALUES[4]),
	VES_SPECULAR(VertexElementSemanticHelper.ENUM_VALUES[5]),
	VES_TEXTURE_COORDINATES(VertexElementSemanticHelper.ENUM_VALUES[6]),
	VES_BINORMAL(VertexElementSemanticHelper.ENUM_VALUES[7]),
	VES_TANGENT(VertexElementSemanticHelper.ENUM_VALUES[8]),
	VES_COUNT(VertexElementSemanticHelper.ENUM_VALUES[9]);
	private int value;
	VertexElementSemantic(int i) {
		this.value = i;
	}
	public VertexElementSemantic getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final VertexElementSemantic toEnum(int retval) {
		if(retval == VES_POSITION.value){
			return VES_POSITION;
		}
		else if(retval == VES_BLEND_WEIGHTS.value){
			return VES_BLEND_WEIGHTS;
		}
		else if(retval == VES_BLEND_INDICES.value){
			return VES_BLEND_INDICES;
		}
		else if(retval == VES_NORMAL.value){
			return VES_NORMAL;
		}
		else if(retval == VES_DIFFUSE.value){
			return VES_DIFFUSE;
		}
		else if(retval == VES_SPECULAR.value){
			return VES_SPECULAR;
		}
		else if(retval == VES_TEXTURE_COORDINATES.value){
			return VES_TEXTURE_COORDINATES;
		}
		else if(retval == VES_BINORMAL.value){
			return VES_BINORMAL;
		}
		else if(retval == VES_TANGENT.value){
			return VES_TANGENT;
		}
		else if(retval == VES_COUNT.value){
			return VES_COUNT;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class VertexElementSemanticHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
