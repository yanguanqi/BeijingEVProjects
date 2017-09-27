package global;

import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///枚举出各种在模板缓冲上得行为
public enum StencilOperation implements INativeEnum<StencilOperation> {
	SOP_KEEP(StencilOperationHelper.ENUM_VALUES[0]),
	SOP_ZERO(StencilOperationHelper.ENUM_VALUES[1]),
	SOP_REPLACE(StencilOperationHelper.ENUM_VALUES[2]),
	SOP_INCREMENT(StencilOperationHelper.ENUM_VALUES[3]),
	SOP_DECREMENT(StencilOperationHelper.ENUM_VALUES[4]),
	SOP_INCREMENT_WRAP(StencilOperationHelper.ENUM_VALUES[5]),
	SOP_DECREMENT_WRAP(StencilOperationHelper.ENUM_VALUES[6]),
	SOP_INVERT(StencilOperationHelper.ENUM_VALUES[7]);
	private int value;
	StencilOperation(int i) {
		this.value = i;
	}
	public StencilOperation getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final StencilOperation toEnum(int retval) {
		if(retval == SOP_KEEP.value){
			return SOP_KEEP;
		}
		else if(retval == SOP_ZERO.value){
			return SOP_ZERO;
		}
		else if(retval == SOP_REPLACE.value){
			return SOP_REPLACE;
		}
		else if(retval == SOP_INCREMENT.value){
			return SOP_INCREMENT;
		}
		else if(retval == SOP_DECREMENT.value){
			return SOP_DECREMENT;
		}
		else if(retval == SOP_INCREMENT_WRAP.value){
			return SOP_INCREMENT_WRAP;
		}
		else if(retval == SOP_DECREMENT_WRAP.value){
			return SOP_DECREMENT_WRAP;
		}
		else if(retval == SOP_INVERT.value){
			return SOP_INVERT;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class StencilOperationHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
