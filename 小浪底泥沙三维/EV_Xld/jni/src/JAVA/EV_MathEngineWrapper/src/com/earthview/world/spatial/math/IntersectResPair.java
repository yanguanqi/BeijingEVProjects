package com.earthview.world.spatial.math;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 几何体相交结果键值对类
 */
public class IntersectResPair extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::IntersectResPair", new IntersectResPairClassFactory());
	}

	native private boolean get_first_void(long pNativeObject);
	public boolean get_first()
	{
		boolean jniValue = get_first_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_first_ev_bool (long pNativeObject, boolean value);
	public void set_first(boolean first)
	{
		boolean firstParamValue = first;
		
		set_first_ev_bool(this.nativeObject.pointer, firstParamValue);
	}
	
	native private double get_second_void(long pNativeObject);
	public double get_second()
	{
		double jniValue = get_second_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_second_Real (long pNativeObject, double value);
	public void set_second(double second)
	{
		double secondParamValue = second;
		
		set_second_Real(this.nativeObject.pointer, secondParamValue);
	}
	
	public IntersectResPair() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("IntersectResPair", null);
	}

	/**
	 * 构造函数
	 * @param fir 键
	 * @param sec 值
	 */
	public IntersectResPair(boolean fir, double sec) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer firPtr = new BasePointer(fir);
		list.add("fir", firPtr.get());
		BasePointer secPtr = new BasePointer(sec);
		list.add("sec", secPtr.get());
		Create("IntersectResPair", list);
	}

	native private long OperatorAssign_IntersectResPair(long pNativeObject, long other);
	/**
	 * 重载"="操作符
	 * @param other 其它对象
	 */
	public com.earthview.world.spatial.math.IntersectResPair OperatorAssign(com.earthview.world.spatial.math.IntersectResPair other)
	{
		long otherParamValue = other.nativeObject.pointer;
		long returnValue = OperatorAssign_IntersectResPair(this.nativeObject.pointer, otherParamValue);
		com.earthview.world.spatial.math.IntersectResPair __returnValue = new com.earthview.world.spatial.math.IntersectResPair(CreatedWhenConstruct.CWC_NotToCreate, "IntersectResPair");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.IntersectResPair)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IntersectResPair");
		}
		return __returnValue;
	}
	public IntersectResPair(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public IntersectResPair(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static IntersectResPair fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		IntersectResPair obj = null;
 		if(baseObj instanceof IntersectResPair)
		{
			obj = (IntersectResPair)baseObj;
		} else {
			obj = new IntersectResPair(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IntersectResPair");
			obj.increaseCast();
		}

		return obj;
	}
}
