package global;

import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum GraticalesLabelType implements INativeEnum<GraticalesLabelType> {
	GLT_DMS(GraticalesLabelTypeHelper.ENUM_VALUES[0]),
	GLT_DM(GraticalesLabelTypeHelper.ENUM_VALUES[1]),
	GLT_Degree(GraticalesLabelTypeHelper.ENUM_VALUES[2]);
	private int value;
	GraticalesLabelType(int i) {
		this.value = i;
	}
	public GraticalesLabelType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final GraticalesLabelType toEnum(int retval) {
		if(retval == GLT_DMS.value){
			return GLT_DMS;
		}
		else if(retval == GLT_DM.value){
			return GLT_DM;
		}
		else if(retval == GLT_Degree.value){
			return GLT_Degree;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class GraticalesLabelTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
