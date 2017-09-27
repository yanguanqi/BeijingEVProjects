package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LightPointSystem extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::CLightPointSystem", new LightPointSystemClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::JCLightPointSystemProxy", new LightPointSystemClassFactory());
	}

	public LightPointSystem() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCLightPointSystemProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.modelmanager.LightPointSystem".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public enum EVAnimationState implements INativeEnum<EVAnimationState> {
		AS_ANIMATION_ON(EVAnimationStateHelper.ENUM_VALUES[0]),
		AS_ANIMATION_OFF(EVAnimationStateHelper.ENUM_VALUES[1]),
		AS_ANIMATION_RANDOM(EVAnimationStateHelper.ENUM_VALUES[2]);
		private int value;
		EVAnimationState(int i) {
			this.value = i;
		}
		public EVAnimationState getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final EVAnimationState toEnum(int retval) {
			if(retval == AS_ANIMATION_ON.value){
				return AS_ANIMATION_ON;
			}
			else if(retval == AS_ANIMATION_OFF.value){
				return AS_ANIMATION_OFF;
			}
			else if(retval == AS_ANIMATION_RANDOM.value){
				return AS_ANIMATION_RANDOM;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class EVAnimationStateHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	native private void setIntensity_ev_real32(long pNativeObject, float intensity);
	public void setIntensity(float intensity)
	{
		float intensityParamValue = intensity;
		setIntensity_ev_real32(this.nativeObject.pointer, intensityParamValue);
	}
	native private float getIntensity_void(long pNativeObject);
	public float getIntensity()
	{
		float returnValue = getIntensity_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setAnimationState_EVAnimationState(long pNativeObject, int state);
	public void setAnimationState(com.earthview.world.spatial3d.modelmanager.LightPointSystem.EVAnimationState state)
	{
		int stateParamValue = state.getValue();
		setAnimationState_EVAnimationState(this.nativeObject.pointer, stateParamValue);
	}
	native private int getAnimationState_void(long pNativeObject);
	public com.earthview.world.spatial3d.modelmanager.LightPointSystem.EVAnimationState getAnimationState()
	{
		int returnValue = getAnimationState_void(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.modelmanager.LightPointSystem.EVAnimationState.toEnum(returnValue);
	}
	protected  long serializerAttributes_EVString_CSceneManager_CommonStringPairList_callback(String name, long ref_creator, long attributes)
	{
		String nameParamValue = name;
		com.earthview.world.graphic.SceneManager ref_creatorParamValue = (ref_creator == 0L ? null : new com.earthview.world.graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_creatorParamValue != null)
		{
		ref_creatorParamValue.setDelegate(true);
		ref_creatorParamValue.setInstancePointer(new InstancePointer(ref_creator));
		IClassFactory ref_creatorParamValueClassFactory = GlobalClassFactoryMap.get(ref_creatorParamValue.getCppInstanceTypeName());
		if (ref_creatorParamValueClassFactory != null)
		{
			ref_creatorParamValue.setDelegate(true);
			ref_creatorParamValue = (com.earthview.world.graphic.SceneManager)ref_creatorParamValueClassFactory.create();
			ref_creatorParamValue.setDelegate(true);
			ref_creatorParamValue.setInstancePointer(new InstancePointer(ref_creator));
		}
		}
		com.earthview.world.core.CommonStringPairList attributesParamValue = new com.earthview.world.core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate);
		attributesParamValue.setDelegate(true);
		attributesParamValue.setInstancePointer(new InstancePointer(attributes));
		IClassFactory attributesParamValueClassFactory = GlobalClassFactoryMap.get(attributesParamValue.getCppInstanceTypeName());
		if (attributesParamValueClassFactory != null)
		{
			attributesParamValue.setDelegate(true);
			attributesParamValue = (com.earthview.world.core.CommonStringPairList)attributesParamValueClassFactory.create();
			attributesParamValue.setDelegate(true);
			attributesParamValue.setInstancePointer(new InstancePointer(attributes));
		}
		com.earthview.world.graphic.Node returnValue = serializerAttributes(nameParamValue, ref_creatorParamValue, attributesParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long serializerAttributes_EVString_CSceneManager_CommonStringPairList(long pNativeObject, String name, long ref_creator, long attributes);
	public com.earthview.world.graphic.Node serializerAttributes(String name, com.earthview.world.graphic.SceneManager ref_creator, com.earthview.world.core.CommonStringPairList attributes)
	{
		String nameParamValue = name;
		long ref_creatorParamValue = (ref_creator == null ? 0L : ref_creator.nativeObject.pointer);
		long attributesParamValue = attributes.nativeObject.pointer;
		long returnValue = serializerAttributes_EVString_CSceneManager_CommonStringPairList(this.nativeObject.pointer, nameParamValue, ref_creatorParamValue, attributesParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Node __returnValue = new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate, "CNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Node)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNode");
		}
		return __returnValue;
	}
	native private long serializerAttributes_EVString_CSceneManager_CommonStringPairList_NoVirtual(long pNativeObject, String name, long ref_creator, long attributes);
	protected com.earthview.world.graphic.Node serializerAttributes_NoVirtual(String name, com.earthview.world.graphic.SceneManager ref_creator, com.earthview.world.core.CommonStringPairList attributes)
	{
		String nameParamValue = name;
		long ref_creatorParamValue = (ref_creator == null ? 0L : ref_creator.nativeObject.pointer);
		long attributesParamValue = attributes.nativeObject.pointer;
		long returnValue = serializerAttributes_EVString_CSceneManager_CommonStringPairList_NoVirtual(this.nativeObject.pointer, nameParamValue, ref_creatorParamValue, attributesParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Node __returnValue = new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate, "CNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Node)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNode");
		}
		return __returnValue;
	}

	public LightPointSystem(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LightPointSystem(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_serializerAttributes_EVString_CSceneManager_CommonStringPairList(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_serializerAttributes_EVString_CSceneManager_CommonStringPairList(this.nativeObject.pointer, "serializerAttributes_EVString_CSceneManager_CommonStringPairList_callback");
		}
	}
	
	public static LightPointSystem fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LightPointSystem obj = null;
 		if(baseObj instanceof LightPointSystem)
		{
			obj = (LightPointSystem)baseObj;
		} else {
			obj = new LightPointSystem(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLightPointSystem");
			obj.increaseCast();
		}

		return obj;
	}
}
