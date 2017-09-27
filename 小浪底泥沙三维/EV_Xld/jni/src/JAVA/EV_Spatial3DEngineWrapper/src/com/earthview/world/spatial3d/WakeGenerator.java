package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WakeGenerator extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::WakeGenerator", new WakeGeneratorClassFactory());
	}

	public WakeGenerator(com.earthview.world.graphic.SceneManager sceneManager, com.earthview.world.spatial3d.WakeGeneratorParameters parameters) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer sceneManagerPtr = new BasePointer(sceneManager);
		list.add("sceneManager", sceneManagerPtr.get());
		BasePointer parametersPtr = new BasePointer(parameters);
		list.add("parameters", parametersPtr.get());
		Create("WakeGenerator", list);
	}

	native private void Update_CVector3_CVector3_double(long pNativeObject, long pPosition, long pDir, double pVelocity);
	public void Update(com.earthview.world.spatial.math.Vector3 pPosition, com.earthview.world.spatial.math.Vector3 pDir, double pVelocity)
	{
		long pPositionParamValue = pPosition.nativeObject.pointer;
		long pDirParamValue = pDir.nativeObject.pointer;
		double pVelocityParamValue = pVelocity;
		Update_CVector3_CVector3_double(this.nativeObject.pointer, pPositionParamValue, pDirParamValue, pVelocityParamValue);
	}
	native private void ClearWakes_void(long pNativeObject);
	public void ClearWakes()
	{
		ClearWakes_void(this.nativeObject.pointer);
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
	native private long GetSternPosition_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 GetSternPosition()
	{
		long returnValue = GetSternPosition_void(this.nativeObject.pointer);
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
	native private boolean HasPropWash_void(long pNativeObject);
	public boolean HasPropWash()
	{
		boolean returnValue = HasPropWash_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void SetLODDistance_double(long pNativeObject, double distance);
	public void SetLODDistance(double distance)
	{
		double distanceParamValue = distance;
		SetLODDistance_double(this.nativeObject.pointer, distanceParamValue);
	}
	native private double GetLODDistance_void(long pNativeObject);
	public double GetLODDistance()
	{
		double returnValue = GetLODDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long GetParameters_void(long pNativeObject);
	public com.earthview.world.spatial3d.WakeGeneratorParameters GetParameters()
	{
		long returnValue = GetParameters_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.WakeGeneratorParameters __returnValue = new com.earthview.world.spatial3d.WakeGeneratorParameters(CreatedWhenConstruct.CWC_NotToCreate, "WakeGeneratorParameters");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.WakeGeneratorParameters)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "WakeGeneratorParameters");
		}
		return __returnValue;
	}
	native private void SetParameters_WakeGeneratorParameters(long pNativeObject, long parameters);
	public void SetParameters(com.earthview.world.spatial3d.WakeGeneratorParameters parameters)
	{
		long parametersParamValue = parameters.nativeObject.pointer;
		SetParameters_WakeGeneratorParameters(this.nativeObject.pointer, parametersParamValue);
	}
	native private void OceanDestroyed_void(long pNativeObject);
	public void OceanDestroyed()
	{
		OceanDestroyed_void(this.nativeObject.pointer);
	}
	native private void WakeManagerDestroyed_void(long pNativeObject);
	public void WakeManagerDestroyed()
	{
		WakeManagerDestroyed_void(this.nativeObject.pointer);
	}
	native private int GetMaxWakeNumber_void(long pNativeObject);
	public int GetMaxWakeNumber()
	{
		int returnValue = GetMaxWakeNumber_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double GetDistanceTravelled_void(long pNativeObject);
	public double GetDistanceTravelled()
	{
		double returnValue = GetDistanceTravelled_void(this.nativeObject.pointer);
		return returnValue;
	}
	public WakeGenerator(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public WakeGenerator(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static WakeGenerator fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		WakeGenerator obj = null;
 		if(baseObj instanceof WakeGenerator)
		{
			obj = (WakeGenerator)baseObj;
		} else {
			obj = new WakeGenerator(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "WakeGenerator");
			obj.increaseCast();
		}

		return obj;
	}
}
