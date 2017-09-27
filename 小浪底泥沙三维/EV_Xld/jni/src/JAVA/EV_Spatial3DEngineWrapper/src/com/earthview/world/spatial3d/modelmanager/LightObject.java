package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LightObject extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::LightObject", new LightObjectClassFactory());
	}

	public LightObject() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("LightObject", null);
	}

	native private long get_mpLight_void(long pNativeObject);
	public com.earthview.world.graphic.Light get_mpLight()
	{
		long jniValue = get_mpLight_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Light __returnValue = new com.earthview.world.graphic.Light(CreatedWhenConstruct.CWC_NotToCreate, "CLight");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Light)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLight");
		}
		return __returnValue;
	}
	
	native private void set_mpLight_CLight (long pNativeObject, long value);
	public void set_mpLight(com.earthview.world.graphic.Light mpLight)
	{
		long mpLightParamValue = (mpLight == null ? 0L : mpLight.nativeObject.pointer);
		
		set_mpLight_CLight(this.nativeObject.pointer, mpLightParamValue);
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
	
	public LightObject(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LightObject(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static LightObject fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LightObject obj = null;
 		if(baseObj instanceof LightObject)
		{
			obj = (LightObject)baseObj;
		} else {
			obj = new LightObject(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "LightObject");
			obj.increaseCast();
		}

		return obj;
	}
}
