package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PropertyAbstractNode extends com.earthview.world.graphic.AbstractNode {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CPropertyAbstractNode", new PropertyAbstractNodeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCPropertyAbstractNodeProxy", new PropertyAbstractNodeClassFactory());
	}

	native private String get_name_void(long pNativeObject);
	public String get_name()
	{
		String jniValue = get_name_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_name_EVString (long pNativeObject, String value);
	public void set_name(String name)
	{
		String nameParamValue = name;
		
		set_name_EVString(this.nativeObject.pointer, nameParamValue);
	}
	
	native private long get_id_void(long pNativeObject);
	public long get_id()
	{
		long jniValue = get_id_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_id_ev_uint32 (long pNativeObject, long value);
	public void set_id(long id)
	{
		long idParamValue = id;
		
		set_id_ev_uint32(this.nativeObject.pointer, idParamValue);
	}
	
	native private long get_values_void(long pNativeObject);
	public com.earthview.world.graphic.AbstractNodeList get_values()
	{
		long jniValue = get_values_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.AbstractNodeList __returnValue = new com.earthview.world.graphic.AbstractNodeList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "AbstractNodeList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.AbstractNodeList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "AbstractNodeList");
		}
		return __returnValue;
	}
	
	native private void set_values_AbstractNodeList (long pNativeObject, long value);
	public void set_values(com.earthview.world.graphic.AbstractNodeList values)
	{
		long valuesParamValue = values.nativeObject.pointer;
		
		set_values_AbstractNodeList(this.nativeObject.pointer, valuesParamValue);
	}
	
	public PropertyAbstractNode(com.earthview.world.graphic.AbstractNode ref_ptr) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_ptrPtr = new BasePointer(ref_ptr);
		list.add("ref_ptr", ref_ptrPtr.get());
		Create("JCPropertyAbstractNodeProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.PropertyAbstractNode".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long ev_clone_void(long pNativeObject);
	public com.earthview.world.graphic.AbstractNode ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.AbstractNode __returnValue = new com.earthview.world.graphic.AbstractNode(CreatedWhenConstruct.CWC_NotToCreate, "CAbstractNode");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.AbstractNode)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CAbstractNode");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.AbstractNode ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.AbstractNode __returnValue = new com.earthview.world.graphic.AbstractNode(CreatedWhenConstruct.CWC_NotToCreate, "CAbstractNode");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.AbstractNode)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CAbstractNode");
		}
		return __returnValue;
	}

	native private String getValue_void(long pNativeObject);
	public String getValue()
	{
		String returnValue = getValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getValue_void_NoVirtual(long pNativeObject);
	protected String getValue_NoVirtual()
	{
		String returnValue = getValue_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	public PropertyAbstractNode(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public PropertyAbstractNode(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_ev_clone_void(long pNativeObject, String method);
	native protected void register_getValue_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			this.register_getValue_void(this.nativeObject.pointer, "getValue_void_callback");
		}
	}
	
	public static PropertyAbstractNode fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		PropertyAbstractNode obj = null;
 		if(baseObj instanceof PropertyAbstractNode)
		{
			obj = (PropertyAbstractNode)baseObj;
		} else {
			obj = new PropertyAbstractNode(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CPropertyAbstractNode");
			obj.increaseCast();
		}

		return obj;
	}
}
