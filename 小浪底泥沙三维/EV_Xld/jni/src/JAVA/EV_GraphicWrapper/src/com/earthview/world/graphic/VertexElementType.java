package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

//// Vertex element type, used to identify the base types of the vertex contents
public enum VertexElementType implements INativeEnum<VertexElementType> {
	VET_FLOAT1(VertexElementTypeHelper.ENUM_VALUES[0]),
	VET_FLOAT2(VertexElementTypeHelper.ENUM_VALUES[1]),
	VET_FLOAT3(VertexElementTypeHelper.ENUM_VALUES[2]),
	VET_FLOAT4(VertexElementTypeHelper.ENUM_VALUES[3]),
	VET_COLOUR(VertexElementTypeHelper.ENUM_VALUES[4]),
	VET_SHORT1(VertexElementTypeHelper.ENUM_VALUES[5]),
	VET_SHORT2(VertexElementTypeHelper.ENUM_VALUES[6]),
	VET_SHORT3(VertexElementTypeHelper.ENUM_VALUES[7]),
	VET_SHORT4(VertexElementTypeHelper.ENUM_VALUES[8]),
	VET_UBYTE4(VertexElementTypeHelper.ENUM_VALUES[9]),
	VET_COLOUR_ARGB(VertexElementTypeHelper.ENUM_VALUES[10]),
	VET_COLOUR_ABGR(VertexElementTypeHelper.ENUM_VALUES[11]);
	private int value;
	VertexElementType(int i) {
		this.value = i;
	}
	public VertexElementType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final VertexElementType toEnum(int retval) {
		if(retval == VET_FLOAT1.value){
			return VET_FLOAT1;
		}
		else if(retval == VET_FLOAT2.value){
			return VET_FLOAT2;
		}
		else if(retval == VET_FLOAT3.value){
			return VET_FLOAT3;
		}
		else if(retval == VET_FLOAT4.value){
			return VET_FLOAT4;
		}
		else if(retval == VET_COLOUR.value){
			return VET_COLOUR;
		}
		else if(retval == VET_SHORT1.value){
			return VET_SHORT1;
		}
		else if(retval == VET_SHORT2.value){
			return VET_SHORT2;
		}
		else if(retval == VET_SHORT3.value){
			return VET_SHORT3;
		}
		else if(retval == VET_SHORT4.value){
			return VET_SHORT4;
		}
		else if(retval == VET_UBYTE4.value){
			return VET_UBYTE4;
		}
		else if(retval == VET_COLOUR_ARGB.value){
			return VET_COLOUR_ARGB;
		}
		else if(retval == VET_COLOUR_ABGR.value){
			return VET_COLOUR_ABGR;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class VertexElementTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
