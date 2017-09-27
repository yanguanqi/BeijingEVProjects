package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 名字的编号按照一定的顺序给名字编号
 */
public class NameGenerator extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CNameGenerator", new NameGeneratorClassFactory());
	}

	/**
	 * 构造函数
	 * @param pList 构造函数参数键值对表
	 */
	public NameGenerator(com.earthview.world.graphic.NameGenerator rhs) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rhsPtr = new BasePointer(rhs);
		list.add("rhs", rhsPtr.get());
		Create("CNameGenerator", list);
	}

	/**
	 * 构造函数
	 * @param prefix EVString类的引用
	 */
	public NameGenerator(String prefix) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer prefixPtr = new BasePointer(prefix);
		list.add("prefix", prefixPtr.get());
		Create("CNameGenerator", list);
	}

	native private String generate_void(long pNativeObject);
	/**
	 * 产生一个名字
	 * @param  
	 * @return 返回那个名字
	 */
	public String generate()
	{
		String returnValue = generate_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void reset_void(long pNativeObject);
	/**
	 * 重置计数
	 * @param  
	 */
	public void reset()
	{
		reset_void(this.nativeObject.pointer);
	}
	native private void setNext_ev_uint64(long pNativeObject, long val);
	/**
	 * 设置计数
	 * @param  
	 */
	public void setNext(ULongPointer val)
	{
		long valParamValue = val.nativeObject.pointer;
		setNext_ev_uint64(this.nativeObject.pointer, valParamValue);
	}
	native private String getNext_void(long pNativeObject);
	/**
	 * 得到计数
	 * @param  
	 */
	public ULongPointer getNext()
	{
		String returnValue = getNext_void(this.nativeObject.pointer);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	public NameGenerator(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public NameGenerator(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static NameGenerator fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		NameGenerator obj = null;
 		if(baseObj instanceof NameGenerator)
		{
			obj = (NameGenerator)baseObj;
		} else {
			obj = new NameGenerator(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CNameGenerator");
			obj.increaseCast();
		}

		return obj;
	}
}
