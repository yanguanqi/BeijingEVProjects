package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum SkeletonChunkID implements INativeEnum<SkeletonChunkID> {
	SKELETON_HEADER(SkeletonChunkIDHelper.ENUM_VALUES[0]),
	SKELETON_BLENDMODE(SkeletonChunkIDHelper.ENUM_VALUES[1]),
	SKELETON_BONE(SkeletonChunkIDHelper.ENUM_VALUES[2]),
	SKELETON_BONE_PARENT(SkeletonChunkIDHelper.ENUM_VALUES[3]),
	SKELETON_ANIMATION(SkeletonChunkIDHelper.ENUM_VALUES[4]),
	SKELETON_ANIMATION_BASEINFO(SkeletonChunkIDHelper.ENUM_VALUES[5]),
	SKELETON_ANIMATION_TRACK(SkeletonChunkIDHelper.ENUM_VALUES[6]),
	SKELETON_ANIMATION_TRACK_KEYFRAME(SkeletonChunkIDHelper.ENUM_VALUES[7]),
	SKELETON_ANIMATION_LINK(SkeletonChunkIDHelper.ENUM_VALUES[8]);
	private int value;
	SkeletonChunkID(int i) {
		this.value = i;
	}
	public SkeletonChunkID getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final SkeletonChunkID toEnum(int retval) {
		if(retval == SKELETON_HEADER.value){
			return SKELETON_HEADER;
		}
		else if(retval == SKELETON_BLENDMODE.value){
			return SKELETON_BLENDMODE;
		}
		else if(retval == SKELETON_BONE.value){
			return SKELETON_BONE;
		}
		else if(retval == SKELETON_BONE_PARENT.value){
			return SKELETON_BONE_PARENT;
		}
		else if(retval == SKELETON_ANIMATION.value){
			return SKELETON_ANIMATION;
		}
		else if(retval == SKELETON_ANIMATION_BASEINFO.value){
			return SKELETON_ANIMATION_BASEINFO;
		}
		else if(retval == SKELETON_ANIMATION_TRACK.value){
			return SKELETON_ANIMATION_TRACK;
		}
		else if(retval == SKELETON_ANIMATION_TRACK_KEYFRAME.value){
			return SKELETON_ANIMATION_TRACK_KEYFRAME;
		}
		else if(retval == SKELETON_ANIMATION_LINK.value){
			return SKELETON_ANIMATION_LINK;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class SkeletonChunkIDHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
