package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RibbonTrailObject extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::RibbonTrailObject", new RibbonTrailObjectClassFactory());
	}

	public RibbonTrailObject() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("RibbonTrailObject", null);
	}

	native private long get_mpTrail_void(long pNativeObject);
	public com.earthview.world.graphic.RibbonTrail get_mpTrail()
	{
		long jniValue = get_mpTrail_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RibbonTrail __returnValue = new com.earthview.world.graphic.RibbonTrail(CreatedWhenConstruct.CWC_NotToCreate, "CRibbonTrail");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RibbonTrail)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRibbonTrail");
		}
		return __returnValue;
	}
	
	native private void set_mpTrail_CRibbonTrail (long pNativeObject, long value);
	public void set_mpTrail(com.earthview.world.graphic.RibbonTrail mpTrail)
	{
		long mpTrailParamValue = (mpTrail == null ? 0L : mpTrail.nativeObject.pointer);
		
		set_mpTrail_CRibbonTrail(this.nativeObject.pointer, mpTrailParamValue);
	}
	
	native private long get_mpRefInfo_void(long pNativeObject);
	public com.earthview.world.spatial3d.dataset.MeshEffectRefInfo get_mpRefInfo()
	{
		long jniValue = get_mpRefInfo_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.dataset.MeshEffectRefInfo __returnValue = new com.earthview.world.spatial3d.dataset.MeshEffectRefInfo(CreatedWhenConstruct.CWC_NotToCreate, "CMeshEffectRefInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.MeshEffectRefInfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMeshEffectRefInfo");
		}
		return __returnValue;
	}
	
	native private void set_mpRefInfo_CMeshEffectRefInfo (long pNativeObject, long value);
	public void set_mpRefInfo(com.earthview.world.spatial3d.dataset.MeshEffectRefInfo mpRefInfo)
	{
		long mpRefInfoParamValue = (mpRefInfo == null ? 0L : mpRefInfo.nativeObject.pointer);
		
		set_mpRefInfo_CMeshEffectRefInfo(this.nativeObject.pointer, mpRefInfoParamValue);
	}
	
	public RibbonTrailObject(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RibbonTrailObject(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RibbonTrailObject fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RibbonTrailObject obj = null;
 		if(baseObj instanceof RibbonTrailObject)
		{
			obj = (RibbonTrailObject)baseObj;
		} else {
			obj = new RibbonTrailObject(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "RibbonTrailObject");
			obj.increaseCast();
		}

		return obj;
	}
}
