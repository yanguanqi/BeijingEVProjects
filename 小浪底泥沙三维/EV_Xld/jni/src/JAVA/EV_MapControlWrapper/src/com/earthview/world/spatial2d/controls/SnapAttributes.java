package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 捕捉属性类
 */
public class SnapAttributes extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::CSnapAttributes", new SnapAttributesClassFactory());
	}

	/**
	 * 构造函数
	 * @param mnTolerance 捕捉容差
	 * @param mbSnapVertex 是否捕捉结点
	 * @param mbSnapEdge 是否捕捉边
	 */
	public SnapAttributes() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CSnapAttributes", null);
	}

	native private long get_mnTolerance_void(long pNativeObject);
	public long get_mnTolerance()
	{
		long jniValue = get_mnTolerance_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mnTolerance_ev_uint32 (long pNativeObject, long value);
	public void set_mnTolerance(long mnTolerance)
	{
		long mnToleranceParamValue = mnTolerance;
		
		set_mnTolerance_ev_uint32(this.nativeObject.pointer, mnToleranceParamValue);
	}
	
	native private boolean get_mbSnapVertex_void(long pNativeObject);
	public boolean get_mbSnapVertex()
	{
		boolean jniValue = get_mbSnapVertex_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mbSnapVertex_ev_bool (long pNativeObject, boolean value);
	public void set_mbSnapVertex(boolean mbSnapVertex)
	{
		boolean mbSnapVertexParamValue = mbSnapVertex;
		
		set_mbSnapVertex_ev_bool(this.nativeObject.pointer, mbSnapVertexParamValue);
	}
	
	native private boolean get_mbSnapEdge_void(long pNativeObject);
	public boolean get_mbSnapEdge()
	{
		boolean jniValue = get_mbSnapEdge_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mbSnapEdge_ev_bool (long pNativeObject, boolean value);
	public void set_mbSnapEdge(boolean mbSnapEdge)
	{
		boolean mbSnapEdgeParamValue = mbSnapEdge;
		
		set_mbSnapEdge_ev_bool(this.nativeObject.pointer, mbSnapEdgeParamValue);
	}
	
	public SnapAttributes(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SnapAttributes(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SnapAttributes fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SnapAttributes obj = null;
 		if(baseObj instanceof SnapAttributes)
		{
			obj = (SnapAttributes)baseObj;
		} else {
			obj = new SnapAttributes(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSnapAttributes");
			obj.increaseCast();
		}

		return obj;
	}
}
