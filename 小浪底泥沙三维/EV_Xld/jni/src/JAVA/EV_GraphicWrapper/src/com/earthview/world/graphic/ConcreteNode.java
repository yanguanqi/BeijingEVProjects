package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ConcreteNode extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::ConcreteNode", new ConcreteNodeClassFactory());
	}

	public ConcreteNode() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("ConcreteNode", null);
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
	
	native private String get_token_void(long pNativeObject);
	public String get_token()
	{
		String jniValue = get_token_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_token_EVString (long pNativeObject, String value);
	public void set_token(String token)
	{
		String tokenParamValue = token;
		
		set_token_EVString(this.nativeObject.pointer, tokenParamValue);
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
	public com.earthview.world.graphic.ConcreteNodeType get_type()
	{
		int jniValue = get_type_void(this.nativeObject.pointer);
		
		return com.earthview.world.graphic.ConcreteNodeType.toEnum(jniValue);
	}
	
	native private void set_type_ConcreteNodeType (long pNativeObject, int value);
	public void set_type(com.earthview.world.graphic.ConcreteNodeType type)
	{
		int typeParamValue = type.getValue();
		
		set_type_ConcreteNodeType(this.nativeObject.pointer, typeParamValue);
	}
	
	native private long get_children_void(long pNativeObject);
	public com.earthview.world.graphic.ConcreteNodeList get_children()
	{
		long jniValue = get_children_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.ConcreteNodeList __returnValue = new com.earthview.world.graphic.ConcreteNodeList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "ConcreteNodeList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ConcreteNodeList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ConcreteNodeList");
		}
		return __returnValue;
	}
	
	native private void set_children_ConcreteNodeList (long pNativeObject, long value);
	public void set_children(com.earthview.world.graphic.ConcreteNodeList children)
	{
		long childrenParamValue = children.nativeObject.pointer;
		
		set_children_ConcreteNodeList(this.nativeObject.pointer, childrenParamValue);
	}
	
	native private long get_parent_void(long pNativeObject);
	public com.earthview.world.graphic.ConcreteNode get_parent()
	{
		long jniValue = get_parent_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ConcreteNode __returnValue = new com.earthview.world.graphic.ConcreteNode(CreatedWhenConstruct.CWC_NotToCreate, "ConcreteNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ConcreteNode)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ConcreteNode");
		}
		return __returnValue;
	}
	
	native private void set_parent_ConcreteNode (long pNativeObject, long value);
	public void set_parent(com.earthview.world.graphic.ConcreteNode parent)
	{
		long parentParamValue = (parent == null ? 0L : parent.nativeObject.pointer);
		
		set_parent_ConcreteNode(this.nativeObject.pointer, parentParamValue);
	}
	
	public ConcreteNode(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ConcreteNode(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ConcreteNode fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ConcreteNode obj = null;
 		if(baseObj instanceof ConcreteNode)
		{
			obj = (ConcreteNode)baseObj;
		} else {
			obj = new ConcreteNode(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ConcreteNode");
			obj.increaseCast();
		}

		return obj;
	}
}
