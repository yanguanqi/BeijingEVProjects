package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum RenderQueueGroupID implements INativeEnum<RenderQueueGroupID> {
	RENDER_QUEUE_BACKGROUND(RenderQueueGroupIDHelper.ENUM_VALUES[0]),
	RENDER_QUEUE_SKIES_EARLY(RenderQueueGroupIDHelper.ENUM_VALUES[1]),
	RENDER_QUEUE_1(RenderQueueGroupIDHelper.ENUM_VALUES[2]),
	RENDER_QUEUE_2(RenderQueueGroupIDHelper.ENUM_VALUES[3]),
	RENDER_QUEUE_WORLD_GEOMETRY_1(RenderQueueGroupIDHelper.ENUM_VALUES[4]),
	RENDER_QUEUE_3(RenderQueueGroupIDHelper.ENUM_VALUES[5]),
	RENDER_QUEUE_4(RenderQueueGroupIDHelper.ENUM_VALUES[6]),
	RENDER_QUEUE_MAIN(RenderQueueGroupIDHelper.ENUM_VALUES[7]),
	RENDER_QUEUE_6(RenderQueueGroupIDHelper.ENUM_VALUES[8]),
	RENDER_QUEUE_7(RenderQueueGroupIDHelper.ENUM_VALUES[9]),
	RENDER_QUEUE_WORLD_GEOMETRY_2(RenderQueueGroupIDHelper.ENUM_VALUES[10]),
	RENDER_QUEUE_8(RenderQueueGroupIDHelper.ENUM_VALUES[11]),
	RENDER_QUEUE_9(RenderQueueGroupIDHelper.ENUM_VALUES[12]),
	RENDER_QUEUE_TRANSPARENT(RenderQueueGroupIDHelper.ENUM_VALUES[13]),
	RENDER_QUEUE_SKIES_LATE(RenderQueueGroupIDHelper.ENUM_VALUES[14]),
	RENDER_QUEUE_OVERLAY(RenderQueueGroupIDHelper.ENUM_VALUES[15]),
	RENDER_QUEUE_MAX(RenderQueueGroupIDHelper.ENUM_VALUES[16]);
	private int value;
	RenderQueueGroupID(int i) {
		this.value = i;
	}
	public RenderQueueGroupID getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final RenderQueueGroupID toEnum(int retval) {
		if(retval == RENDER_QUEUE_BACKGROUND.value){
			return RENDER_QUEUE_BACKGROUND;
		}
		else if(retval == RENDER_QUEUE_SKIES_EARLY.value){
			return RENDER_QUEUE_SKIES_EARLY;
		}
		else if(retval == RENDER_QUEUE_1.value){
			return RENDER_QUEUE_1;
		}
		else if(retval == RENDER_QUEUE_2.value){
			return RENDER_QUEUE_2;
		}
		else if(retval == RENDER_QUEUE_WORLD_GEOMETRY_1.value){
			return RENDER_QUEUE_WORLD_GEOMETRY_1;
		}
		else if(retval == RENDER_QUEUE_3.value){
			return RENDER_QUEUE_3;
		}
		else if(retval == RENDER_QUEUE_4.value){
			return RENDER_QUEUE_4;
		}
		else if(retval == RENDER_QUEUE_MAIN.value){
			return RENDER_QUEUE_MAIN;
		}
		else if(retval == RENDER_QUEUE_6.value){
			return RENDER_QUEUE_6;
		}
		else if(retval == RENDER_QUEUE_7.value){
			return RENDER_QUEUE_7;
		}
		else if(retval == RENDER_QUEUE_WORLD_GEOMETRY_2.value){
			return RENDER_QUEUE_WORLD_GEOMETRY_2;
		}
		else if(retval == RENDER_QUEUE_8.value){
			return RENDER_QUEUE_8;
		}
		else if(retval == RENDER_QUEUE_9.value){
			return RENDER_QUEUE_9;
		}
		else if(retval == RENDER_QUEUE_TRANSPARENT.value){
			return RENDER_QUEUE_TRANSPARENT;
		}
		else if(retval == RENDER_QUEUE_SKIES_LATE.value){
			return RENDER_QUEUE_SKIES_LATE;
		}
		else if(retval == RENDER_QUEUE_OVERLAY.value){
			return RENDER_QUEUE_OVERLAY;
		}
		else if(retval == RENDER_QUEUE_MAX.value){
			return RENDER_QUEUE_MAX;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class RenderQueueGroupIDHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
