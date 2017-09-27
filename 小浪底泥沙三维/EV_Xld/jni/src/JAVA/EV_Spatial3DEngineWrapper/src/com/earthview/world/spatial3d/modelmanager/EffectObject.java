package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EffectObject extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::EffectObject", new EffectObjectClassFactory());
	}

	public EffectObject() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("EffectObject", null);
	}

	native private long get_mpEffect_void(long pNativeObject);
	public com.earthview.world.spatial3d.effectmanager.Effect get_mpEffect()
	{
		long jniValue = get_mpEffect_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.effectmanager.Effect __returnValue = new com.earthview.world.spatial3d.effectmanager.Effect(CreatedWhenConstruct.CWC_NotToCreate, "CEffect");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.effectmanager.Effect)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEffect");
		}
		return __returnValue;
	}
	
	native private void set_mpEffect_CEffect (long pNativeObject, long value);
	public void set_mpEffect(com.earthview.world.spatial3d.effectmanager.Effect mpEffect)
	{
		long mpEffectParamValue = (mpEffect == null ? 0L : mpEffect.nativeObject.pointer);
		
		set_mpEffect_CEffect(this.nativeObject.pointer, mpEffectParamValue);
	}
	
	native private long get_mRefInfo_void(long pNativeObject);
	public com.earthview.world.spatial3d.dataset.MeshEffectRefInfo get_mRefInfo()
	{
		long jniValue = get_mRefInfo_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial3d.dataset.MeshEffectRefInfo __returnValue = new com.earthview.world.spatial3d.dataset.MeshEffectRefInfo(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshEffectRefInfo");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.MeshEffectRefInfo)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshEffectRefInfo");
		}
		return __returnValue;
	}
	
	native private void set_mRefInfo_CMeshEffectRefInfo (long pNativeObject, long value);
	public void set_mRefInfo(com.earthview.world.spatial3d.dataset.MeshEffectRefInfo mRefInfo)
	{
		long mRefInfoParamValue = mRefInfo.nativeObject.pointer;
		
		set_mRefInfo_CMeshEffectRefInfo(this.nativeObject.pointer, mRefInfoParamValue);
	}
	
	public EffectObject(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EffectObject(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static EffectObject fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EffectObject obj = null;
 		if(baseObj instanceof EffectObject)
		{
			obj = (EffectObject)baseObj;
		} else {
			obj = new EffectObject(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "EffectObject");
			obj.increaseCast();
		}

		return obj;
	}
}
