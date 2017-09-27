package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVSymbolType implements INativeEnum<EVSymbolType> {
	ST_UNKNOWN(EVSymbolTypeHelper.ENUM_VALUES[0]),
	ST_MULTIMARKER(EVSymbolTypeHelper.ENUM_VALUES[1]),
	ST_SIMPLEMARKER(EVSymbolTypeHelper.ENUM_VALUES[2]),
	ST_ARROWMARKER(EVSymbolTypeHelper.ENUM_VALUES[3]),
	ST_FONTMARKER(EVSymbolTypeHelper.ENUM_VALUES[4]),
	ST_SVGMARKER(EVSymbolTypeHelper.ENUM_VALUES[5]),
	ST_PICTUREMARKER(EVSymbolTypeHelper.ENUM_VALUES[6]),
	ST_MULTILINE(EVSymbolTypeHelper.ENUM_VALUES[7]),
	ST_SIMPLELINE(EVSymbolTypeHelper.ENUM_VALUES[8]),
	ST_CARTOGRAPHICLINE(EVSymbolTypeHelper.ENUM_VALUES[9]),
	ST_MULTIFILL(EVSymbolTypeHelper.ENUM_VALUES[10]),
	ST_SIMPLEFILL(EVSymbolTypeHelper.ENUM_VALUES[11]),
	ST_MARKERFILL(EVSymbolTypeHelper.ENUM_VALUES[12]),
	ST_LINEFILL(EVSymbolTypeHelper.ENUM_VALUES[13]),
	ST_GRADIENTFILL(EVSymbolTypeHelper.ENUM_VALUES[14]),
	ST_PICTUREFILL(EVSymbolTypeHelper.ENUM_VALUES[15]),
	ST_SIMPLETEXT(EVSymbolTypeHelper.ENUM_VALUES[16]),
	ST_FORMATTEDTEXT(EVSymbolTypeHelper.ENUM_VALUES[17]),
	ST_BARSTATISTICS(EVSymbolTypeHelper.ENUM_VALUES[18]),
	ST_PIESTATISTICS(EVSymbolTypeHelper.ENUM_VALUES[19]),
	ST_STACKEDSTATISTICS(EVSymbolTypeHelper.ENUM_VALUES[20]),
	ST_PHOTO3D(EVSymbolTypeHelper.ENUM_VALUES[21]),
	ST_ICON3D(EVSymbolTypeHelper.ENUM_VALUES[22]),
	ST_BILLBOARD3D(EVSymbolTypeHelper.ENUM_VALUES[23]),
	ST_MODEL3D(EVSymbolTypeHelper.ENUM_VALUES[24]),
	ST_SIMPLELINE3D(EVSymbolTypeHelper.ENUM_VALUES[25]),
	ST_TEXTURELINE3D(EVSymbolTypeHelper.ENUM_VALUES[26]),
	ST_SIMPLEFILL3D(EVSymbolTypeHelper.ENUM_VALUES[27]),
	ST_TEXTUREFILL3D(EVSymbolTypeHelper.ENUM_VALUES[28]),
	ST_FRESNELSURFACE3D(EVSymbolTypeHelper.ENUM_VALUES[29]),
	ST_3DBARSTATISTICS(EVSymbolTypeHelper.ENUM_VALUES[30]),
	ST_3DPIESTATISTICS(EVSymbolTypeHelper.ENUM_VALUES[31]),
	ST_3DSTACKEDSTATISTICS(EVSymbolTypeHelper.ENUM_VALUES[32]);
	private int value;
	EVSymbolType(int i) {
		this.value = i;
	}
	public EVSymbolType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVSymbolType toEnum(int retval) {
		if(retval == ST_UNKNOWN.value){
			return ST_UNKNOWN;
		}
		else if(retval == ST_MULTIMARKER.value){
			return ST_MULTIMARKER;
		}
		else if(retval == ST_SIMPLEMARKER.value){
			return ST_SIMPLEMARKER;
		}
		else if(retval == ST_ARROWMARKER.value){
			return ST_ARROWMARKER;
		}
		else if(retval == ST_FONTMARKER.value){
			return ST_FONTMARKER;
		}
		else if(retval == ST_SVGMARKER.value){
			return ST_SVGMARKER;
		}
		else if(retval == ST_PICTUREMARKER.value){
			return ST_PICTUREMARKER;
		}
		else if(retval == ST_MULTILINE.value){
			return ST_MULTILINE;
		}
		else if(retval == ST_SIMPLELINE.value){
			return ST_SIMPLELINE;
		}
		else if(retval == ST_CARTOGRAPHICLINE.value){
			return ST_CARTOGRAPHICLINE;
		}
		else if(retval == ST_MULTIFILL.value){
			return ST_MULTIFILL;
		}
		else if(retval == ST_SIMPLEFILL.value){
			return ST_SIMPLEFILL;
		}
		else if(retval == ST_MARKERFILL.value){
			return ST_MARKERFILL;
		}
		else if(retval == ST_LINEFILL.value){
			return ST_LINEFILL;
		}
		else if(retval == ST_GRADIENTFILL.value){
			return ST_GRADIENTFILL;
		}
		else if(retval == ST_PICTUREFILL.value){
			return ST_PICTUREFILL;
		}
		else if(retval == ST_SIMPLETEXT.value){
			return ST_SIMPLETEXT;
		}
		else if(retval == ST_FORMATTEDTEXT.value){
			return ST_FORMATTEDTEXT;
		}
		else if(retval == ST_BARSTATISTICS.value){
			return ST_BARSTATISTICS;
		}
		else if(retval == ST_PIESTATISTICS.value){
			return ST_PIESTATISTICS;
		}
		else if(retval == ST_STACKEDSTATISTICS.value){
			return ST_STACKEDSTATISTICS;
		}
		else if(retval == ST_PHOTO3D.value){
			return ST_PHOTO3D;
		}
		else if(retval == ST_ICON3D.value){
			return ST_ICON3D;
		}
		else if(retval == ST_BILLBOARD3D.value){
			return ST_BILLBOARD3D;
		}
		else if(retval == ST_MODEL3D.value){
			return ST_MODEL3D;
		}
		else if(retval == ST_SIMPLELINE3D.value){
			return ST_SIMPLELINE3D;
		}
		else if(retval == ST_TEXTURELINE3D.value){
			return ST_TEXTURELINE3D;
		}
		else if(retval == ST_SIMPLEFILL3D.value){
			return ST_SIMPLEFILL3D;
		}
		else if(retval == ST_TEXTUREFILL3D.value){
			return ST_TEXTUREFILL3D;
		}
		else if(retval == ST_FRESNELSURFACE3D.value){
			return ST_FRESNELSURFACE3D;
		}
		else if(retval == ST_3DBARSTATISTICS.value){
			return ST_3DBARSTATISTICS;
		}
		else if(retval == ST_3DPIESTATISTICS.value){
			return ST_3DPIESTATISTICS;
		}
		else if(retval == ST_3DSTACKEDSTATISTICS.value){
			return ST_3DSTACKEDSTATISTICS;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVSymbolTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
