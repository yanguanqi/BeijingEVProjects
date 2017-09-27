package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AbstractNodePair extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::AbstractNodePair", new AbstractNodePairClassFactory());
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
	
	native private String get_second_void(long pNativeObject);
	public String get_second()
	{
		String jniValue = get_second_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_second_EVString (long pNativeObject, String value);
	public void set_second(String second)
	{
		String secondParamValue = second;
		
		set_second_EVString(this.nativeObject.pointer, secondParamValue);
	}
	
	public AbstractNodePair() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("AbstractNodePair", null);
	}

	public AbstractNodePair(boolean fir, String sec) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer firPtr = new BasePointer(fir);
		list.add("fir", firPtr.get());
		BasePointer secPtr = new BasePointer(sec);
		list.add("sec", secPtr.get());
		Create("AbstractNodePair", list);
	}

	native private long OperatorAssign_AbstractNodePair(long pNativeObject, long other);
	public com.earthview.world.graphic.AbstractNodePair OperatorAssign(com.earthview.world.graphic.AbstractNodePair other)
	{
		long otherParamValue = other.nativeObject.pointer;
		long returnValue = OperatorAssign_AbstractNodePair(this.nativeObject.pointer, otherParamValue);
		com.earthview.world.graphic.AbstractNodePair __returnValue = new com.earthview.world.graphic.AbstractNodePair(CreatedWhenConstruct.CWC_NotToCreate, "AbstractNodePair");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.AbstractNodePair)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "AbstractNodePair");
		}
		return __returnValue;
	}
	public AbstractNodePair(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AbstractNodePair(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static AbstractNodePair fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AbstractNodePair obj = null;
 		if(baseObj instanceof AbstractNodePair)
		{
			obj = (AbstractNodePair)baseObj;
		} else {
			obj = new AbstractNodePair(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "AbstractNodePair");
			obj.increaseCast();
		}

		return obj;
	}
}
