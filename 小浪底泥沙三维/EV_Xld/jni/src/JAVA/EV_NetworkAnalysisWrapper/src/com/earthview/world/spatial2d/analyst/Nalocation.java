package com.earthview.world.spatial2d.analyst;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 网络点类
 */
public class Nalocation extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Analyst::CNALocation", new NalocationClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public Nalocation() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CNALocation", null);
	}

	native private long get_pt_void(long pNativeObject);
	public com.earthview.world.spatial.geometry.Point get_pt()
	{
		long jniValue = get_pt_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Point __returnValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate, "CPoint");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Point)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPoint");
		}
		return __returnValue;
	}
	
	native private void set_pt_CPoint (long pNativeObject, long value);
	public void set_pt(com.earthview.world.spatial.geometry.Point pt)
	{
		long ptParamValue = (pt == null ? 0L : pt.nativeObject.pointer);
		
		set_pt_CPoint(this.nativeObject.pointer, ptParamValue);
	}
	
	native private int get_id_void(long pNativeObject);
	public int get_id()
	{
		int jniValue = get_id_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_id_ev_int32 (long pNativeObject, int value);
	public void set_id(int id)
	{
		int idParamValue = id;
		
		set_id_ev_int32(this.nativeObject.pointer, idParamValue);
	}
	
	native private boolean get_bSelected_void(long pNativeObject);
	public boolean get_bSelected()
	{
		boolean jniValue = get_bSelected_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_bSelected_ev_bool (long pNativeObject, boolean value);
	public void set_bSelected(boolean bSelected)
	{
		boolean bSelectedParamValue = bSelected;
		
		set_bSelected_ev_bool(this.nativeObject.pointer, bSelectedParamValue);
	}
	
	public Nalocation(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Nalocation(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Nalocation fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Nalocation obj = null;
 		if(baseObj instanceof Nalocation)
		{
			obj = (Nalocation)baseObj;
		} else {
			obj = new Nalocation(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CNALocation");
			obj.increaseCast();
		}

		return obj;
	}
}
