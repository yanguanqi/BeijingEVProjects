package global;

import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum PositionSetting implements INativeEnum<PositionSetting> {
	PS_PosUnchange(PositionSettingHelper.ENUM_VALUES[0]),
	PS_PosChange(PositionSettingHelper.ENUM_VALUES[1]);
	private int value;
	PositionSetting(int i) {
		this.value = i;
	}
	public PositionSetting getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final PositionSetting toEnum(int retval) {
		if(retval == PS_PosUnchange.value){
			return PS_PosUnchange;
		}
		else if(retval == PS_PosChange.value){
			return PS_PosChange;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class PositionSettingHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
