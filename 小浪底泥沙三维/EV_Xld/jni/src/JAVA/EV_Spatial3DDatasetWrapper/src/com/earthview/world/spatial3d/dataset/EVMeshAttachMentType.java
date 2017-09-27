package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 特效绑定的类型枚举
 */
public enum EVMeshAttachMentType implements INativeEnum<EVMeshAttachMentType> {
	MAMT_EffectSubMesh(EVMeshAttachMentTypeHelper.ENUM_VALUES[0]),
	MAMT_EffectBone(EVMeshAttachMentTypeHelper.ENUM_VALUES[1]),
	MAMT_ModelSubMesh(EVMeshAttachMentTypeHelper.ENUM_VALUES[2]),
	MAMT_ModelBone(EVMeshAttachMentTypeHelper.ENUM_VALUES[3]),
	MAMT_LightSubMesh(EVMeshAttachMentTypeHelper.ENUM_VALUES[4]),
	MAMT_EffectNode(EVMeshAttachMentTypeHelper.ENUM_VALUES[5]),
	MAMT_ModelNode(EVMeshAttachMentTypeHelper.ENUM_VALUES[6]);
	private int value;
	EVMeshAttachMentType(int i) {
		this.value = i;
	}
	public EVMeshAttachMentType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVMeshAttachMentType toEnum(int retval) {
		if(retval == MAMT_EffectSubMesh.value){
			return MAMT_EffectSubMesh;
		}
		else if(retval == MAMT_EffectBone.value){
			return MAMT_EffectBone;
		}
		else if(retval == MAMT_ModelSubMesh.value){
			return MAMT_ModelSubMesh;
		}
		else if(retval == MAMT_ModelBone.value){
			return MAMT_ModelBone;
		}
		else if(retval == MAMT_LightSubMesh.value){
			return MAMT_LightSubMesh;
		}
		else if(retval == MAMT_EffectNode.value){
			return MAMT_EffectNode;
		}
		else if(retval == MAMT_ModelNode.value){
			return MAMT_ModelNode;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVMeshAttachMentTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
