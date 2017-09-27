package global;

import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum ModelDatasetRefreshState implements INativeEnum<ModelDatasetRefreshState> {
	MODEL_DATASET_NO_NEED_REFRESH(ModelDatasetRefreshStateHelper.ENUM_VALUES[0]),
	MODEL_DATASET_REFRESH_OK(ModelDatasetRefreshStateHelper.ENUM_VALUES[1]),
	MODEL_DATASET_REFRESH_FAILD(ModelDatasetRefreshStateHelper.ENUM_VALUES[2]);
	private int value;
	ModelDatasetRefreshState(int i) {
		this.value = i;
	}
	public ModelDatasetRefreshState getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final ModelDatasetRefreshState toEnum(int retval) {
		if(retval == MODEL_DATASET_NO_NEED_REFRESH.value){
			return MODEL_DATASET_NO_NEED_REFRESH;
		}
		else if(retval == MODEL_DATASET_REFRESH_OK.value){
			return MODEL_DATASET_REFRESH_OK;
		}
		else if(retval == MODEL_DATASET_REFRESH_FAILD.value){
			return MODEL_DATASET_REFRESH_FAILD;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class ModelDatasetRefreshStateHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
