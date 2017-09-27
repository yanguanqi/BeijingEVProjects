package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 通视分析点结构体
 */
public final class VisibilityPoint extends RemoteNativeObject {

	public VisibilityPoint(InstancePointer pointer, boolean remote) {
		super(pointer, remote);
	}
	
	public VisibilityPoint(InstancePointer pInstance) {
		super(pInstance);
	}
	
	native private static long Create();
	public VisibilityPoint() {
		super(new InstancePointer(Create()),false);
	}
	native private boolean get_IsVisibility_void(long pNativeObject);
	public boolean get_IsVisibility()
	{
		boolean jniValue = get_IsVisibility_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_IsVisibility_ev_bool (long pNativeObject, boolean value);
	public void set_IsVisibility(boolean IsVisibility)
	{
		boolean IsVisibilityParamValue = IsVisibility;
		
		set_IsVisibility_ev_bool(this.nativeObject.pointer, IsVisibilityParamValue);
	}
	
	native private long get_Position_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_Position()
	{
		long jniValue = get_Position_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	native private void set_Position_CVector3 (long pNativeObject, long value);
	public void set_Position(com.earthview.world.spatial.math.Vector3 Position)
	{
		long PositionParamValue = Position.nativeObject.pointer;
		
		set_Position_CVector3(this.nativeObject.pointer, PositionParamValue);
	}
	
	
	native private static void Destroy(long pNativeObject);
	public void destroyNativeObject() {
		Destroy(this.nativeObject.pointer);
	}
}
