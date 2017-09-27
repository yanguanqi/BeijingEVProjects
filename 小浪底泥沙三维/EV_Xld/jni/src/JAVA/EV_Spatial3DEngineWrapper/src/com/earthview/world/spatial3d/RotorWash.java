package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RotorWash extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::RotorWash", new RotorWashClassFactory());
	}

	public RotorWash(com.earthview.world.graphic.SceneManager sceneManager, double pRotorDiameter, boolean pUseDecals) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer sceneManagerPtr = new BasePointer(sceneManager);
		list.add("sceneManager", sceneManagerPtr.get());
		BasePointer pRotorDiameterPtr = new BasePointer(pRotorDiameter);
		list.add("pRotorDiameter", pRotorDiameterPtr.get());
		BasePointer pUseDecalsPtr = new BasePointer(pUseDecals);
		list.add("pUseDecals", pUseDecalsPtr.get());
		Create("RotorWash", list);
	}

	native private void Update_CVector3_double(long pNativeObject, long pPosition, double pVelocity);
	public void Update(com.earthview.world.spatial.math.Vector3 pPosition, double pVelocity)
	{
		long pPositionParamValue = pPosition.nativeObject.pointer;
		double pVelocityParamValue = pVelocity;
		Update_CVector3_double(this.nativeObject.pointer, pPositionParamValue, pVelocityParamValue);
	}
	native private long GetPosition_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 GetPosition()
	{
		long returnValue = GetPosition_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private double GetVelocity_void(long pNativeObject);
	public double GetVelocity()
	{
		double returnValue = GetVelocity_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void OceanDestroyed_void(long pNativeObject);
	public void OceanDestroyed()
	{
		OceanDestroyed_void(this.nativeObject.pointer);
	}
	public RotorWash(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RotorWash(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RotorWash fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RotorWash obj = null;
 		if(baseObj instanceof RotorWash)
		{
			obj = (RotorWash)baseObj;
		} else {
			obj = new RotorWash(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "RotorWash");
			obj.increaseCast();
		}

		return obj;
	}
}
