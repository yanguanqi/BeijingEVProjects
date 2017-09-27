package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AtomAbstractNode extends com.earthview.world.graphic.AbstractNode {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CAtomAbstractNode", new AtomAbstractNodeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCAtomAbstractNodeProxy", new AtomAbstractNodeClassFactory());
	}

	native private String get_value_void(long pNativeObject);
	public String get_value()
	{
		String jniValue = get_value_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_value_EVString (long pNativeObject, String value);
	public void set_value(String value)
	{
		String valueParamValue = value;
		
		set_value_EVString(this.nativeObject.pointer, valueParamValue);
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

	public AtomAbstractNode(com.earthview.world.graphic.AbstractNode ref_ptr) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_ptrPtr = new BasePointer(ref_ptr);
		list.add("ref_ptr", ref_ptrPtr.get());
		Create("JCAtomAbstractNodeProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.AtomAbstractNode".equals(this.getClass().getName()))
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

	public AtomAbstractNode(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AtomAbstractNode(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static AtomAbstractNode fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AtomAbstractNode obj = null;
 		if(baseObj instanceof AtomAbstractNode)
		{
			obj = (AtomAbstractNode)baseObj;
		} else {
			obj = new AtomAbstractNode(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CAtomAbstractNode");
			obj.increaseCast();
		}

		return obj;
	}
}
