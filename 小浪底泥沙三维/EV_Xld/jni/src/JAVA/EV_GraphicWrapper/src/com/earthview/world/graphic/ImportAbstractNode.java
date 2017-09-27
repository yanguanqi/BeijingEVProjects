package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ImportAbstractNode extends com.earthview.world.graphic.AbstractNode {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CImportAbstractNode", new ImportAbstractNodeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCImportAbstractNodeProxy", new ImportAbstractNodeClassFactory());
	}

	native private String get_source_void(long pNativeObject);
	public String get_source()
	{
		String jniValue = get_source_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_source_EVString (long pNativeObject, String value);
	public void set_source(String source)
	{
		String sourceParamValue = source;
		
		set_source_EVString(this.nativeObject.pointer, sourceParamValue);
	}
	
	native private String get_target_void(long pNativeObject);
	public String get_target()
	{
		String jniValue = get_target_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_target_EVString (long pNativeObject, String value);
	public void set_target(String target)
	{
		String targetParamValue = target;
		
		set_target_EVString(this.nativeObject.pointer, targetParamValue);
	}
	
	public ImportAbstractNode() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCImportAbstractNodeProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.ImportAbstractNode".equals(this.getClass().getName()))
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

	public ImportAbstractNode(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ImportAbstractNode(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static ImportAbstractNode fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ImportAbstractNode obj = null;
 		if(baseObj instanceof ImportAbstractNode)
		{
			obj = (ImportAbstractNode)baseObj;
		} else {
			obj = new ImportAbstractNode(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CImportAbstractNode");
			obj.increaseCast();
		}

		return obj;
	}
}
