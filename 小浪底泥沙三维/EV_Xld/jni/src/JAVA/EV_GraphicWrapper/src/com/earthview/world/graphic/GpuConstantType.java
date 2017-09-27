package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum GpuConstantType implements INativeEnum<GpuConstantType> {
	GCT_FLOAT1(GpuConstantTypeHelper.ENUM_VALUES[0]),
	GCT_FLOAT2(GpuConstantTypeHelper.ENUM_VALUES[1]),
	GCT_FLOAT3(GpuConstantTypeHelper.ENUM_VALUES[2]),
	GCT_FLOAT4(GpuConstantTypeHelper.ENUM_VALUES[3]),
	GCT_SAMPLER1D(GpuConstantTypeHelper.ENUM_VALUES[4]),
	GCT_SAMPLER2D(GpuConstantTypeHelper.ENUM_VALUES[5]),
	GCT_SAMPLER3D(GpuConstantTypeHelper.ENUM_VALUES[6]),
	GCT_SAMPLERCUBE(GpuConstantTypeHelper.ENUM_VALUES[7]),
	GCT_SAMPLER1DSHADOW(GpuConstantTypeHelper.ENUM_VALUES[8]),
	GCT_SAMPLER2DSHADOW(GpuConstantTypeHelper.ENUM_VALUES[9]),
	GCT_SAMPLER2DARRAY(GpuConstantTypeHelper.ENUM_VALUES[10]),
	GCT_MATRIX_2X2(GpuConstantTypeHelper.ENUM_VALUES[11]),
	GCT_MATRIX_2X3(GpuConstantTypeHelper.ENUM_VALUES[12]),
	GCT_MATRIX_2X4(GpuConstantTypeHelper.ENUM_VALUES[13]),
	GCT_MATRIX_3X2(GpuConstantTypeHelper.ENUM_VALUES[14]),
	GCT_MATRIX_3X3(GpuConstantTypeHelper.ENUM_VALUES[15]),
	GCT_MATRIX_3X4(GpuConstantTypeHelper.ENUM_VALUES[16]),
	GCT_MATRIX_4X2(GpuConstantTypeHelper.ENUM_VALUES[17]),
	GCT_MATRIX_4X3(GpuConstantTypeHelper.ENUM_VALUES[18]),
	GCT_MATRIX_4X4(GpuConstantTypeHelper.ENUM_VALUES[19]),
	GCT_INT1(GpuConstantTypeHelper.ENUM_VALUES[20]),
	GCT_INT2(GpuConstantTypeHelper.ENUM_VALUES[21]),
	GCT_INT3(GpuConstantTypeHelper.ENUM_VALUES[22]),
	GCT_INT4(GpuConstantTypeHelper.ENUM_VALUES[23]),
	GCT_UNKNOWN(GpuConstantTypeHelper.ENUM_VALUES[24]);
	private int value;
	GpuConstantType(int i) {
		this.value = i;
	}
	public GpuConstantType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final GpuConstantType toEnum(int retval) {
		if(retval == GCT_FLOAT1.value){
			return GCT_FLOAT1;
		}
		else if(retval == GCT_FLOAT2.value){
			return GCT_FLOAT2;
		}
		else if(retval == GCT_FLOAT3.value){
			return GCT_FLOAT3;
		}
		else if(retval == GCT_FLOAT4.value){
			return GCT_FLOAT4;
		}
		else if(retval == GCT_SAMPLER1D.value){
			return GCT_SAMPLER1D;
		}
		else if(retval == GCT_SAMPLER2D.value){
			return GCT_SAMPLER2D;
		}
		else if(retval == GCT_SAMPLER3D.value){
			return GCT_SAMPLER3D;
		}
		else if(retval == GCT_SAMPLERCUBE.value){
			return GCT_SAMPLERCUBE;
		}
		else if(retval == GCT_SAMPLER1DSHADOW.value){
			return GCT_SAMPLER1DSHADOW;
		}
		else if(retval == GCT_SAMPLER2DSHADOW.value){
			return GCT_SAMPLER2DSHADOW;
		}
		else if(retval == GCT_SAMPLER2DARRAY.value){
			return GCT_SAMPLER2DARRAY;
		}
		else if(retval == GCT_MATRIX_2X2.value){
			return GCT_MATRIX_2X2;
		}
		else if(retval == GCT_MATRIX_2X3.value){
			return GCT_MATRIX_2X3;
		}
		else if(retval == GCT_MATRIX_2X4.value){
			return GCT_MATRIX_2X4;
		}
		else if(retval == GCT_MATRIX_3X2.value){
			return GCT_MATRIX_3X2;
		}
		else if(retval == GCT_MATRIX_3X3.value){
			return GCT_MATRIX_3X3;
		}
		else if(retval == GCT_MATRIX_3X4.value){
			return GCT_MATRIX_3X4;
		}
		else if(retval == GCT_MATRIX_4X2.value){
			return GCT_MATRIX_4X2;
		}
		else if(retval == GCT_MATRIX_4X3.value){
			return GCT_MATRIX_4X3;
		}
		else if(retval == GCT_MATRIX_4X4.value){
			return GCT_MATRIX_4X4;
		}
		else if(retval == GCT_INT1.value){
			return GCT_INT1;
		}
		else if(retval == GCT_INT2.value){
			return GCT_INT2;
		}
		else if(retval == GCT_INT3.value){
			return GCT_INT3;
		}
		else if(retval == GCT_INT4.value){
			return GCT_INT4;
		}
		else if(retval == GCT_UNKNOWN.value){
			return GCT_UNKNOWN;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class GpuConstantTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
