package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VertexBoneAssignmentPair extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::VertexBoneAssignmentPair", new VertexBoneAssignmentPairClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public VertexBoneAssignmentPair() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("VertexBoneAssignmentPair", null);
	}

	native private long get_first_void(long pNativeObject);
	public long get_first()
	{
		long jniValue = get_first_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_first_ev_size_t (long pNativeObject, long value);
	public void set_first(long first)
	{
		long firstParamValue = first;
		
		set_first_ev_size_t(this.nativeObject.pointer, firstParamValue);
	}
	
	native private long get_second_void(long pNativeObject);
	public com.earthview.world.graphic.VertexBoneAssignment get_second()
	{
		long jniValue = get_second_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.VertexBoneAssignment __returnValue = new com.earthview.world.graphic.VertexBoneAssignment(new InstancePointer(jniValue), false);
		return __returnValue;
	}
	
	native private void set_second_VertexBoneAssignment (long pNativeObject, long value);
	public void set_second(com.earthview.world.graphic.VertexBoneAssignment second)
	{
		long secondParamValue = second.nativeObject.pointer;
		
		set_second_VertexBoneAssignment(this.nativeObject.pointer, secondParamValue);
	}
	
	public VertexBoneAssignmentPair(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public VertexBoneAssignmentPair(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static VertexBoneAssignmentPair fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		VertexBoneAssignmentPair obj = null;
 		if(baseObj instanceof VertexBoneAssignmentPair)
		{
			obj = (VertexBoneAssignmentPair)baseObj;
		} else {
			obj = new VertexBoneAssignmentPair(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "VertexBoneAssignmentPair");
			obj.increaseCast();
		}

		return obj;
	}
}
