package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///描述了我们想要检查的不同硬件的性能
///EV_CAPS_VALUE(a, b)定义每一种性能
///a 是种类（从0到15）
///b 是值（从0到27）
public enum Capabilities implements INativeEnum<Capabilities> {
	RSC_AUTOMIPMAP(CapabilitiesHelper.ENUM_VALUES[0]),
	RSC_BLENDING(CapabilitiesHelper.ENUM_VALUES[1]),
	RSC_ANISOTROPY(CapabilitiesHelper.ENUM_VALUES[2]),
	RSC_DOT3(CapabilitiesHelper.ENUM_VALUES[3]),
	RSC_CUBEMAPPING(CapabilitiesHelper.ENUM_VALUES[4]),
	RSC_HWSTENCIL(CapabilitiesHelper.ENUM_VALUES[5]),
	RSC_VBO(CapabilitiesHelper.ENUM_VALUES[6]),
	RSC_VERTEX_PROGRAM(CapabilitiesHelper.ENUM_VALUES[7]),
	RSC_FRAGMENT_PROGRAM(CapabilitiesHelper.ENUM_VALUES[8]),
	RSC_SCISSOR_TEST(CapabilitiesHelper.ENUM_VALUES[9]),
	RSC_TWO_SIDED_STENCIL(CapabilitiesHelper.ENUM_VALUES[10]),
	RSC_STENCIL_WRAP(CapabilitiesHelper.ENUM_VALUES[11]),
	RSC_HWOCCLUSION(CapabilitiesHelper.ENUM_VALUES[12]),
	RSC_USER_CLIP_PLANES(CapabilitiesHelper.ENUM_VALUES[13]),
	RSC_VERTEX_FORMAT_UBYTE4(CapabilitiesHelper.ENUM_VALUES[14]),
	RSC_INFINITE_FAR_PLANE(CapabilitiesHelper.ENUM_VALUES[15]),
	RSC_HWRENDER_TO_TEXTURE(CapabilitiesHelper.ENUM_VALUES[16]),
	RSC_TEXTURE_FLOAT(CapabilitiesHelper.ENUM_VALUES[17]),
	RSC_NON_POWER_OF_2_TEXTURES(CapabilitiesHelper.ENUM_VALUES[18]),
	RSC_TEXTURE_3D(CapabilitiesHelper.ENUM_VALUES[19]),
	RSC_POINT_SPRITES(CapabilitiesHelper.ENUM_VALUES[20]),
	RSC_POINT_EXTENDED_PARAMETERS(CapabilitiesHelper.ENUM_VALUES[21]),
	RSC_VERTEX_TEXTURE_FETCH(CapabilitiesHelper.ENUM_VALUES[22]),
	RSC_MIPMAP_LOD_BIAS(CapabilitiesHelper.ENUM_VALUES[23]),
	RSC_GEOMETRY_PROGRAM(CapabilitiesHelper.ENUM_VALUES[24]),
	RSC_HWRENDER_TO_VERTEX_BUFFER(CapabilitiesHelper.ENUM_VALUES[25]),
	RSC_TEXTURE_COMPRESSION(CapabilitiesHelper.ENUM_VALUES[26]),
	RSC_TEXTURE_COMPRESSION_DXT(CapabilitiesHelper.ENUM_VALUES[27]),
	RSC_TEXTURE_COMPRESSION_VTC(CapabilitiesHelper.ENUM_VALUES[28]),
	RSC_TEXTURE_COMPRESSION_PVRTC(CapabilitiesHelper.ENUM_VALUES[29]),
	RSC_FIXED_FUNCTION(CapabilitiesHelper.ENUM_VALUES[30]),
	RSC_MRT_DIFFERENT_BIT_DEPTHS(CapabilitiesHelper.ENUM_VALUES[31]),
	RSC_ALPHA_TO_COVERAGE(CapabilitiesHelper.ENUM_VALUES[32]),
	RSC_ADVANCED_BLEND_OPERATIONS(CapabilitiesHelper.ENUM_VALUES[33]),
	RSC_RTT_SEPARATE_DEPTHBUFFER(CapabilitiesHelper.ENUM_VALUES[34]),
	RSC_RTT_MAIN_DEPTHBUFFER_ATTACHABLE(CapabilitiesHelper.ENUM_VALUES[35]),
	RSC_RTT_DEPTHBUFFER_RESOLUTION_LESSEQUAL(CapabilitiesHelper.ENUM_VALUES[36]),
	RSC_VERTEX_BUFFER_INSTANCE_DATA(CapabilitiesHelper.ENUM_VALUES[37]),
	RSC_CAN_GET_COMPILED_SHADER_BUFFER(CapabilitiesHelper.ENUM_VALUES[38]),
	RSC_PERSTAGECONSTANT(CapabilitiesHelper.ENUM_VALUES[39]),
	RSC_GL1_5_NOVBO(CapabilitiesHelper.ENUM_VALUES[40]),
	RSC_FBO(CapabilitiesHelper.ENUM_VALUES[41]),
	RSC_FBO_ARB(CapabilitiesHelper.ENUM_VALUES[42]),
	RSC_FBO_ATI(CapabilitiesHelper.ENUM_VALUES[43]),
	RSC_PBUFFER(CapabilitiesHelper.ENUM_VALUES[44]),
	RSC_GL1_5_NOHWOCCLUSION(CapabilitiesHelper.ENUM_VALUES[45]),
	RSC_POINT_EXTENDED_PARAMETERS_ARB(CapabilitiesHelper.ENUM_VALUES[46]),
	RSC_POINT_EXTENDED_PARAMETERS_EXT(CapabilitiesHelper.ENUM_VALUES[47]),
	RSC_SEPARATE_SHADER_OBJECTS(CapabilitiesHelper.ENUM_VALUES[48]);
	private int value;
	Capabilities(int i) {
		this.value = i;
	}
	public Capabilities getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final Capabilities toEnum(int retval) {
		if(retval == RSC_AUTOMIPMAP.value){
			return RSC_AUTOMIPMAP;
		}
		else if(retval == RSC_BLENDING.value){
			return RSC_BLENDING;
		}
		else if(retval == RSC_ANISOTROPY.value){
			return RSC_ANISOTROPY;
		}
		else if(retval == RSC_DOT3.value){
			return RSC_DOT3;
		}
		else if(retval == RSC_CUBEMAPPING.value){
			return RSC_CUBEMAPPING;
		}
		else if(retval == RSC_HWSTENCIL.value){
			return RSC_HWSTENCIL;
		}
		else if(retval == RSC_VBO.value){
			return RSC_VBO;
		}
		else if(retval == RSC_VERTEX_PROGRAM.value){
			return RSC_VERTEX_PROGRAM;
		}
		else if(retval == RSC_FRAGMENT_PROGRAM.value){
			return RSC_FRAGMENT_PROGRAM;
		}
		else if(retval == RSC_SCISSOR_TEST.value){
			return RSC_SCISSOR_TEST;
		}
		else if(retval == RSC_TWO_SIDED_STENCIL.value){
			return RSC_TWO_SIDED_STENCIL;
		}
		else if(retval == RSC_STENCIL_WRAP.value){
			return RSC_STENCIL_WRAP;
		}
		else if(retval == RSC_HWOCCLUSION.value){
			return RSC_HWOCCLUSION;
		}
		else if(retval == RSC_USER_CLIP_PLANES.value){
			return RSC_USER_CLIP_PLANES;
		}
		else if(retval == RSC_VERTEX_FORMAT_UBYTE4.value){
			return RSC_VERTEX_FORMAT_UBYTE4;
		}
		else if(retval == RSC_INFINITE_FAR_PLANE.value){
			return RSC_INFINITE_FAR_PLANE;
		}
		else if(retval == RSC_HWRENDER_TO_TEXTURE.value){
			return RSC_HWRENDER_TO_TEXTURE;
		}
		else if(retval == RSC_TEXTURE_FLOAT.value){
			return RSC_TEXTURE_FLOAT;
		}
		else if(retval == RSC_NON_POWER_OF_2_TEXTURES.value){
			return RSC_NON_POWER_OF_2_TEXTURES;
		}
		else if(retval == RSC_TEXTURE_3D.value){
			return RSC_TEXTURE_3D;
		}
		else if(retval == RSC_POINT_SPRITES.value){
			return RSC_POINT_SPRITES;
		}
		else if(retval == RSC_POINT_EXTENDED_PARAMETERS.value){
			return RSC_POINT_EXTENDED_PARAMETERS;
		}
		else if(retval == RSC_VERTEX_TEXTURE_FETCH.value){
			return RSC_VERTEX_TEXTURE_FETCH;
		}
		else if(retval == RSC_MIPMAP_LOD_BIAS.value){
			return RSC_MIPMAP_LOD_BIAS;
		}
		else if(retval == RSC_GEOMETRY_PROGRAM.value){
			return RSC_GEOMETRY_PROGRAM;
		}
		else if(retval == RSC_HWRENDER_TO_VERTEX_BUFFER.value){
			return RSC_HWRENDER_TO_VERTEX_BUFFER;
		}
		else if(retval == RSC_TEXTURE_COMPRESSION.value){
			return RSC_TEXTURE_COMPRESSION;
		}
		else if(retval == RSC_TEXTURE_COMPRESSION_DXT.value){
			return RSC_TEXTURE_COMPRESSION_DXT;
		}
		else if(retval == RSC_TEXTURE_COMPRESSION_VTC.value){
			return RSC_TEXTURE_COMPRESSION_VTC;
		}
		else if(retval == RSC_TEXTURE_COMPRESSION_PVRTC.value){
			return RSC_TEXTURE_COMPRESSION_PVRTC;
		}
		else if(retval == RSC_FIXED_FUNCTION.value){
			return RSC_FIXED_FUNCTION;
		}
		else if(retval == RSC_MRT_DIFFERENT_BIT_DEPTHS.value){
			return RSC_MRT_DIFFERENT_BIT_DEPTHS;
		}
		else if(retval == RSC_ALPHA_TO_COVERAGE.value){
			return RSC_ALPHA_TO_COVERAGE;
		}
		else if(retval == RSC_ADVANCED_BLEND_OPERATIONS.value){
			return RSC_ADVANCED_BLEND_OPERATIONS;
		}
		else if(retval == RSC_RTT_SEPARATE_DEPTHBUFFER.value){
			return RSC_RTT_SEPARATE_DEPTHBUFFER;
		}
		else if(retval == RSC_RTT_MAIN_DEPTHBUFFER_ATTACHABLE.value){
			return RSC_RTT_MAIN_DEPTHBUFFER_ATTACHABLE;
		}
		else if(retval == RSC_RTT_DEPTHBUFFER_RESOLUTION_LESSEQUAL.value){
			return RSC_RTT_DEPTHBUFFER_RESOLUTION_LESSEQUAL;
		}
		else if(retval == RSC_VERTEX_BUFFER_INSTANCE_DATA.value){
			return RSC_VERTEX_BUFFER_INSTANCE_DATA;
		}
		else if(retval == RSC_CAN_GET_COMPILED_SHADER_BUFFER.value){
			return RSC_CAN_GET_COMPILED_SHADER_BUFFER;
		}
		else if(retval == RSC_PERSTAGECONSTANT.value){
			return RSC_PERSTAGECONSTANT;
		}
		else if(retval == RSC_GL1_5_NOVBO.value){
			return RSC_GL1_5_NOVBO;
		}
		else if(retval == RSC_FBO.value){
			return RSC_FBO;
		}
		else if(retval == RSC_FBO_ARB.value){
			return RSC_FBO_ARB;
		}
		else if(retval == RSC_FBO_ATI.value){
			return RSC_FBO_ATI;
		}
		else if(retval == RSC_PBUFFER.value){
			return RSC_PBUFFER;
		}
		else if(retval == RSC_GL1_5_NOHWOCCLUSION.value){
			return RSC_GL1_5_NOHWOCCLUSION;
		}
		else if(retval == RSC_POINT_EXTENDED_PARAMETERS_ARB.value){
			return RSC_POINT_EXTENDED_PARAMETERS_ARB;
		}
		else if(retval == RSC_POINT_EXTENDED_PARAMETERS_EXT.value){
			return RSC_POINT_EXTENDED_PARAMETERS_EXT;
		}
		else if(retval == RSC_SEPARATE_SHADER_OBJECTS.value){
			return RSC_SEPARATE_SHADER_OBJECTS;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class CapabilitiesHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
