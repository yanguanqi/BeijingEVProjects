package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AbstractNode extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CAbstractNode", new AbstractNodeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCAbstractNodeProxy", new AbstractNodeClassFactory());
	}

	native private String get_file_void(long pNativeObject);
	public String get_file()
	{
		String jniValue = get_file_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_file_EVString (long pNativeObject, String value);
	public void set_file(String file)
	{
		String fileParamValue = file;
		
		set_file_EVString(this.nativeObject.pointer, fileParamValue);
	}
	
	native private long get_line_void(long pNativeObject);
	public long get_line()
	{
		long jniValue = get_line_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_line_ev_uint32 (long pNativeObject, long value);
	public void set_line(long line)
	{
		long lineParamValue = line;
		
		set_line_ev_uint32(this.nativeObject.pointer, lineParamValue);
	}
	
	native private int get_type_void(long pNativeObject);
	public com.earthview.world.graphic.AbstractNodeType get_type()
	{
		int jniValue = get_type_void(this.nativeObject.pointer);
		
		return com.earthview.world.graphic.AbstractNodeType.toEnum(jniValue);
	}
	
	native private void set_type_AbstractNodeType (long pNativeObject, int value);
	public void set_type(com.earthview.world.graphic.AbstractNodeType type)
	{
		int typeParamValue = type.getValue();
		
		set_type_AbstractNodeType(this.nativeObject.pointer, typeParamValue);
	}
	
	native private long get_parent_void(long pNativeObject);
	public com.earthview.world.graphic.AbstractNode get_parent()
	{
		long jniValue = get_parent_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.AbstractNode __returnValue = new com.earthview.world.graphic.AbstractNode(CreatedWhenConstruct.CWC_NotToCreate, "CAbstractNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.AbstractNode)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAbstractNode");
		}
		return __returnValue;
	}
	
	native private void set_parent_CAbstractNode (long pNativeObject, long value);
	public void set_parent(com.earthview.world.graphic.AbstractNode parent)
	{
		long parentParamValue = (parent == null ? 0L : parent.nativeObject.pointer);
		
		set_parent_CAbstractNode(this.nativeObject.pointer, parentParamValue);
	}
	
	public AbstractNode(com.earthview.world.graphic.AbstractNode ref_ptr) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_ptrPtr = new BasePointer(ref_ptr);
		list.add("ref_ptr", ref_ptrPtr.get());
		Create("JCAbstractNodeProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.AbstractNode".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  long ev_clone_void_callback()
	{
		com.earthview.world.graphic.AbstractNode returnValue = ev_clone();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long ev_clone_void(long pNativeObject);
	//// Returns a new EarthView::World::Graphic::CAbstractNode which is a replica of this one.
	public com.earthview.world.graphic.AbstractNode ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.AbstractNode __returnValue = new com.earthview.world.graphic.AbstractNode(CreatedWhenConstruct.CWC_NotToCreate, "CAbstractNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.AbstractNode)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
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
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.AbstractNode)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAbstractNode");
		}
		return __returnValue;
	}

	protected  String getValue_void_callback()
	{
		String returnValue = getValue();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getValue_void(long pNativeObject);
	//// Returns a string value depending on the type of the EarthView::World::Graphic::CAbstractNode.
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

	public AbstractNode(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AbstractNode(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static AbstractNode fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AbstractNode obj = null;
 		if(baseObj instanceof AbstractNode)
		{
			obj = (AbstractNode)baseObj;
		} else {
			obj = new AbstractNode(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CAbstractNode");
			obj.increaseCast();
		}

		return obj;
	}
}
