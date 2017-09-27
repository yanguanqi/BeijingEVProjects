package global;

import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///枚举出产生纹理坐标的方式
public enum TexCoordCalcMethod implements INativeEnum<TexCoordCalcMethod> {
	TEXCALC_NONE(TexCoordCalcMethodHelper.ENUM_VALUES[0]),
	TEXCALC_ENVIRONMENT_MAP(TexCoordCalcMethodHelper.ENUM_VALUES[1]),
	TEXCALC_ENVIRONMENT_MAP_PLANAR(TexCoordCalcMethodHelper.ENUM_VALUES[2]),
	TEXCALC_ENVIRONMENT_MAP_REFLECTION(TexCoordCalcMethodHelper.ENUM_VALUES[3]),
	TEXCALC_ENVIRONMENT_MAP_NORMAL(TexCoordCalcMethodHelper.ENUM_VALUES[4]),
	TEXCALC_PROJECTIVE_TEXTURE(TexCoordCalcMethodHelper.ENUM_VALUES[5]);
	private int value;
	TexCoordCalcMethod(int i) {
		this.value = i;
	}
	public TexCoordCalcMethod getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final TexCoordCalcMethod toEnum(int retval) {
		if(retval == TEXCALC_NONE.value){
			return TEXCALC_NONE;
		}
		else if(retval == TEXCALC_ENVIRONMENT_MAP.value){
			return TEXCALC_ENVIRONMENT_MAP;
		}
		else if(retval == TEXCALC_ENVIRONMENT_MAP_PLANAR.value){
			return TEXCALC_ENVIRONMENT_MAP_PLANAR;
		}
		else if(retval == TEXCALC_ENVIRONMENT_MAP_REFLECTION.value){
			return TEXCALC_ENVIRONMENT_MAP_REFLECTION;
		}
		else if(retval == TEXCALC_ENVIRONMENT_MAP_NORMAL.value){
			return TEXCALC_ENVIRONMENT_MAP_NORMAL;
		}
		else if(retval == TEXCALC_PROJECTIVE_TEXTURE.value){
			return TEXCALC_PROJECTIVE_TEXTURE;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class TexCoordCalcMethodHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
