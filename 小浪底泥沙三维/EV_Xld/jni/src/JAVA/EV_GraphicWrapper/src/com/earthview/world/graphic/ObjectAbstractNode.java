package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ObjectAbstractNode extends com.earthview.world.graphic.AbstractNode {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CObjectAbstractNode", new ObjectAbstractNodeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCObjectAbstractNodeProxy", new ObjectAbstractNodeClassFactory());
	}

	native private String get_cls_void(long pNativeObject);
	public String get_cls()
	{
		String jniValue = get_cls_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_cls_EVString (long pNativeObject, String value);
	public void set_cls(String cls)
	{
		String clsParamValue = cls;
		
		set_cls_EVString(this.nativeObject.pointer, clsParamValue);
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
	
	native private long get_bases_void(long pNativeObject);
	public com.earthview.world.core.StringVector get_bases()
	{
		long jniValue = get_bases_void(this.nativeObject.pointer);
		
		com.earthview.world.core.StringVector __returnValue = new com.earthview.world.core.StringVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "StringVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "StringVector");
		}
		return __returnValue;
	}
	
	native private void set_bases_StringVector (long pNativeObject, long value);
	public void set_bases(com.earthview.world.core.StringVector bases)
	{
		long basesParamValue = bases.nativeObject.pointer;
		
		set_bases_StringVector(this.nativeObject.pointer, basesParamValue);
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
	
	native private boolean get_abstract_void(long pNativeObject);
	public boolean get_abstract()
	{
		boolean jniValue = get_abstract_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_abstract_ev_bool (long pNativeObject, boolean value);
	public void set_abstract(boolean ev_abstract)
	{
		boolean ev_abstractParamValue = ev_abstract;
		
		set_abstract_ev_bool(this.nativeObject.pointer, ev_abstractParamValue);
	}
	
	native private long get_children_void(long pNativeObject);
	public com.earthview.world.graphic.AbstractNodeList get_children()
	{
		long jniValue = get_children_void(this.nativeObject.pointer);
		
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
	
	native private void set_children_AbstractNodeList (long pNativeObject, long value);
	public void set_children(com.earthview.world.graphic.AbstractNodeList children)
	{
		long childrenParamValue = children.nativeObject.pointer;
		
		set_children_AbstractNodeList(this.nativeObject.pointer, childrenParamValue);
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
	
	native private long get_overrides_void(long pNativeObject);
	public com.earthview.world.graphic.AbstractNodeList get_overrides()
	{
		long jniValue = get_overrides_void(this.nativeObject.pointer);
		
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
	
	native private void set_overrides_AbstractNodeList (long pNativeObject, long value);
	public void set_overrides(com.earthview.world.graphic.AbstractNodeList overrides)
	{
		long overridesParamValue = overrides.nativeObject.pointer;
		
		set_overrides_AbstractNodeList(this.nativeObject.pointer, overridesParamValue);
	}
	
	/// For use when processing object inheritance and overriding
	public ObjectAbstractNode(com.earthview.world.graphic.AbstractNode ref_ptr) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_ptrPtr = new BasePointer(ref_ptr);
		list.add("ref_ptr", ref_ptrPtr.get());
		Create("JCObjectAbstractNodeProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.ObjectAbstractNode".equals(this.getClass().getName()))
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

	native private void addVariable_EVString(long pNativeObject, String name);
	public void addVariable(String name)
	{
		String nameParamValue = name;
		addVariable_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void setVariable_EVString_EVString(long pNativeObject, String name, String value);
	public void setVariable(String name, String value)
	{
		String nameParamValue = name;
		String valueParamValue = value;
		setVariable_EVString_EVString(this.nativeObject.pointer, nameParamValue, valueParamValue);
	}
	native private long getVariable_EVString(long pNativeObject, String name);
	public com.earthview.world.graphic.AbstractNodePair getVariable(String name)
	{
		String nameParamValue = name;
		long returnValue = getVariable_EVString(this.nativeObject.pointer, nameParamValue);
		com.earthview.world.graphic.AbstractNodePair __returnValue = new com.earthview.world.graphic.AbstractNodePair(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "AbstractNodePair");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.AbstractNodePair)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "AbstractNodePair");
		}
		return __returnValue;
	}
	native private long getVariables_void(long pNativeObject);
	public com.earthview.world.graphic.AbstractNodeMap getVariables()
	{
		long returnValue = getVariables_void(this.nativeObject.pointer);
		com.earthview.world.graphic.AbstractNodeMap __returnValue = new com.earthview.world.graphic.AbstractNodeMap(CreatedWhenConstruct.CWC_NotToCreate, "AbstractNodeMap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.AbstractNodeMap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "AbstractNodeMap");
		}
		return __returnValue;
	}
	public ObjectAbstractNode(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ObjectAbstractNode(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static ObjectAbstractNode fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ObjectAbstractNode obj = null;
 		if(baseObj instanceof ObjectAbstractNode)
		{
			obj = (ObjectAbstractNode)baseObj;
		} else {
			obj = new ObjectAbstractNode(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CObjectAbstractNode");
			obj.increaseCast();
		}

		return obj;
	}
}
