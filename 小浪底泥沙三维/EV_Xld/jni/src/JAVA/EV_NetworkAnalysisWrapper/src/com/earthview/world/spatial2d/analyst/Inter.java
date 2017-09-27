package com.earthview.world.spatial2d.analyst;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public final class Inter extends RemoteNativeObject {

	public Inter(InstancePointer pointer, boolean remote) {
		super(pointer, remote);
	}
	
	public Inter(InstancePointer pInstance) {
		super(pInstance);
	}
	
	native private static long Create();
	public Inter() {
		super(new InstancePointer(Create()),false);
	}
	native private int get_lastNum_void(long pNativeObject);
	public int get_lastNum()
	{
		int jniValue = get_lastNum_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_lastNum_ev_int32 (long pNativeObject, int value);
	public void set_lastNum(int lastNum)
	{
		int lastNumParamValue = lastNum;
		
		set_lastNum_ev_int32(this.nativeObject.pointer, lastNumParamValue);
	}
	
	native private long get_inter_void(long pNativeObject);
	public com.earthview.world.spatial.geometry.Point get_inter()
	{
		long jniValue = get_inter_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.geometry.Point __returnValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CPoint");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Point)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPoint");
		}
		return __returnValue;
	}
	
	native private void set_inter_CPoint (long pNativeObject, long value);
	public void set_inter(com.earthview.world.spatial.geometry.Point inter)
	{
		long interParamValue = inter.nativeObject.pointer;
		
		set_inter_CPoint(this.nativeObject.pointer, interParamValue);
	}
	
	
	native private static void Destroy(long pNativeObject);
	public void destroyNativeObject() {
		Destroy(this.nativeObject.pointer);
	}
}
