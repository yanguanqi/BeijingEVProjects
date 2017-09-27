package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum PixelFormat implements INativeEnum<PixelFormat> {
	PF_UNKNOWN(PixelFormatHelper.ENUM_VALUES[0]),
	PF_L8(PixelFormatHelper.ENUM_VALUES[1]),
	PF_BYTE_L(PixelFormatHelper.ENUM_VALUES[2]),
	PF_L16(PixelFormatHelper.ENUM_VALUES[3]),
	PF_SHORT_L(PixelFormatHelper.ENUM_VALUES[4]),
	PF_A8(PixelFormatHelper.ENUM_VALUES[5]),
	PF_BYTE_A(PixelFormatHelper.ENUM_VALUES[6]),
	PF_A4L4(PixelFormatHelper.ENUM_VALUES[7]),
	PF_BYTE_LA(PixelFormatHelper.ENUM_VALUES[8]),
	PF_R5G6B5(PixelFormatHelper.ENUM_VALUES[9]),
	PF_B5G6R5(PixelFormatHelper.ENUM_VALUES[10]),
	PF_R3G3B2(PixelFormatHelper.ENUM_VALUES[11]),
	PF_A4R4G4B4(PixelFormatHelper.ENUM_VALUES[12]),
	PF_A1R5G5B5(PixelFormatHelper.ENUM_VALUES[13]),
	PF_R8G8B8(PixelFormatHelper.ENUM_VALUES[14]),
	PF_B8G8R8(PixelFormatHelper.ENUM_VALUES[15]),
	PF_A8R8G8B8(PixelFormatHelper.ENUM_VALUES[16]),
	PF_A8B8G8R8(PixelFormatHelper.ENUM_VALUES[17]),
	PF_B8G8R8A8(PixelFormatHelper.ENUM_VALUES[18]),
	PF_R8G8B8A8(PixelFormatHelper.ENUM_VALUES[19]),
	PF_X8R8G8B8(PixelFormatHelper.ENUM_VALUES[20]),
	PF_X8B8G8R8(PixelFormatHelper.ENUM_VALUES[21]),
	PF_A2R10G10B10(PixelFormatHelper.ENUM_VALUES[22]),
	PF_A2B10G10R10(PixelFormatHelper.ENUM_VALUES[23]),
	PF_DXT1(PixelFormatHelper.ENUM_VALUES[24]),
	PF_DXT2(PixelFormatHelper.ENUM_VALUES[25]),
	PF_DXT3(PixelFormatHelper.ENUM_VALUES[26]),
	PF_DXT4(PixelFormatHelper.ENUM_VALUES[27]),
	PF_DXT5(PixelFormatHelper.ENUM_VALUES[28]),
	PF_FLOAT16_R(PixelFormatHelper.ENUM_VALUES[29]),
	PF_FLOAT16_RGB(PixelFormatHelper.ENUM_VALUES[30]),
	PF_FLOAT16_RGBA(PixelFormatHelper.ENUM_VALUES[31]),
	PF_FLOAT32_R(PixelFormatHelper.ENUM_VALUES[32]),
	PF_FLOAT32_RGB(PixelFormatHelper.ENUM_VALUES[33]),
	PF_FLOAT32_RGBA(PixelFormatHelper.ENUM_VALUES[34]),
	PF_FLOAT16_GR(PixelFormatHelper.ENUM_VALUES[35]),
	PF_FLOAT32_GR(PixelFormatHelper.ENUM_VALUES[36]),
	PF_DEPTH(PixelFormatHelper.ENUM_VALUES[37]),
	PF_SHORT_RGBA(PixelFormatHelper.ENUM_VALUES[38]),
	PF_SHORT_GR(PixelFormatHelper.ENUM_VALUES[39]),
	PF_SHORT_RGB(PixelFormatHelper.ENUM_VALUES[40]),
	PF_PVRTC_RGB2(PixelFormatHelper.ENUM_VALUES[41]),
	PF_PVRTC_RGBA2(PixelFormatHelper.ENUM_VALUES[42]),
	PF_PVRTC_RGB4(PixelFormatHelper.ENUM_VALUES[43]),
	PF_PVRTC_RGBA4(PixelFormatHelper.ENUM_VALUES[44]),
	PF_R8(PixelFormatHelper.ENUM_VALUES[45]),
	PF_RG8(PixelFormatHelper.ENUM_VALUES[46]),
	PF_COUNT(PixelFormatHelper.ENUM_VALUES[47]);
	private int value;
	PixelFormat(int i) {
		this.value = i;
	}
	public PixelFormat getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final PixelFormat toEnum(int retval) {
		if(retval == PF_UNKNOWN.value){
			return PF_UNKNOWN;
		}
		else if(retval == PF_L8.value){
			return PF_L8;
		}
		else if(retval == PF_BYTE_L.value){
			return PF_BYTE_L;
		}
		else if(retval == PF_L16.value){
			return PF_L16;
		}
		else if(retval == PF_SHORT_L.value){
			return PF_SHORT_L;
		}
		else if(retval == PF_A8.value){
			return PF_A8;
		}
		else if(retval == PF_BYTE_A.value){
			return PF_BYTE_A;
		}
		else if(retval == PF_A4L4.value){
			return PF_A4L4;
		}
		else if(retval == PF_BYTE_LA.value){
			return PF_BYTE_LA;
		}
		else if(retval == PF_R5G6B5.value){
			return PF_R5G6B5;
		}
		else if(retval == PF_B5G6R5.value){
			return PF_B5G6R5;
		}
		else if(retval == PF_R3G3B2.value){
			return PF_R3G3B2;
		}
		else if(retval == PF_A4R4G4B4.value){
			return PF_A4R4G4B4;
		}
		else if(retval == PF_A1R5G5B5.value){
			return PF_A1R5G5B5;
		}
		else if(retval == PF_R8G8B8.value){
			return PF_R8G8B8;
		}
		else if(retval == PF_B8G8R8.value){
			return PF_B8G8R8;
		}
		else if(retval == PF_A8R8G8B8.value){
			return PF_A8R8G8B8;
		}
		else if(retval == PF_A8B8G8R8.value){
			return PF_A8B8G8R8;
		}
		else if(retval == PF_B8G8R8A8.value){
			return PF_B8G8R8A8;
		}
		else if(retval == PF_R8G8B8A8.value){
			return PF_R8G8B8A8;
		}
		else if(retval == PF_X8R8G8B8.value){
			return PF_X8R8G8B8;
		}
		else if(retval == PF_X8B8G8R8.value){
			return PF_X8B8G8R8;
		}
		else if(retval == PF_A2R10G10B10.value){
			return PF_A2R10G10B10;
		}
		else if(retval == PF_A2B10G10R10.value){
			return PF_A2B10G10R10;
		}
		else if(retval == PF_DXT1.value){
			return PF_DXT1;
		}
		else if(retval == PF_DXT2.value){
			return PF_DXT2;
		}
		else if(retval == PF_DXT3.value){
			return PF_DXT3;
		}
		else if(retval == PF_DXT4.value){
			return PF_DXT4;
		}
		else if(retval == PF_DXT5.value){
			return PF_DXT5;
		}
		else if(retval == PF_FLOAT16_R.value){
			return PF_FLOAT16_R;
		}
		else if(retval == PF_FLOAT16_RGB.value){
			return PF_FLOAT16_RGB;
		}
		else if(retval == PF_FLOAT16_RGBA.value){
			return PF_FLOAT16_RGBA;
		}
		else if(retval == PF_FLOAT32_R.value){
			return PF_FLOAT32_R;
		}
		else if(retval == PF_FLOAT32_RGB.value){
			return PF_FLOAT32_RGB;
		}
		else if(retval == PF_FLOAT32_RGBA.value){
			return PF_FLOAT32_RGBA;
		}
		else if(retval == PF_FLOAT16_GR.value){
			return PF_FLOAT16_GR;
		}
		else if(retval == PF_FLOAT32_GR.value){
			return PF_FLOAT32_GR;
		}
		else if(retval == PF_DEPTH.value){
			return PF_DEPTH;
		}
		else if(retval == PF_SHORT_RGBA.value){
			return PF_SHORT_RGBA;
		}
		else if(retval == PF_SHORT_GR.value){
			return PF_SHORT_GR;
		}
		else if(retval == PF_SHORT_RGB.value){
			return PF_SHORT_RGB;
		}
		else if(retval == PF_PVRTC_RGB2.value){
			return PF_PVRTC_RGB2;
		}
		else if(retval == PF_PVRTC_RGBA2.value){
			return PF_PVRTC_RGBA2;
		}
		else if(retval == PF_PVRTC_RGB4.value){
			return PF_PVRTC_RGB4;
		}
		else if(retval == PF_PVRTC_RGBA4.value){
			return PF_PVRTC_RGBA4;
		}
		else if(retval == PF_R8.value){
			return PF_R8;
		}
		else if(retval == PF_RG8.value){
			return PF_RG8;
		}
		else if(retval == PF_COUNT.value){
			return PF_COUNT;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class PixelFormatHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
