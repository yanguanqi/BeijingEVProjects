package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FltSerializerListener extends com.earthview.world.graphic.ModelSerializerListener {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CFltSerializerListener", new FltSerializerListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCFltSerializerListenerProxy", new FltSerializerListenerClassFactory());
	}

	public FltSerializerListener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCFltSerializerListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.FltSerializerListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void processMaterialName_CMesh_EVString(long pNativeObject, long mesh, long name);
	//// Called to override the loading of the given named material
	public void processMaterialName(com.earthview.world.graphic.Mesh mesh, StringPointer name)
	{
		long meshParamValue = (mesh == null ? 0L : mesh.nativeObject.pointer);
		long nameParamValue = name.nativeObject.pointer;
		processMaterialName_CMesh_EVString(this.nativeObject.pointer, meshParamValue, nameParamValue);
	}
	native private void processMaterialName_CMesh_EVString_NoVirtual(long pNativeObject, long mesh, long name);
	protected void processMaterialName_NoVirtual(com.earthview.world.graphic.Mesh mesh, StringPointer name)
	{
		long meshParamValue = (mesh == null ? 0L : mesh.nativeObject.pointer);
		long nameParamValue = name.nativeObject.pointer;
		processMaterialName_CMesh_EVString_NoVirtual(this.nativeObject.pointer, meshParamValue, nameParamValue);
	}

	native private void processSkeletonName_CMesh_EVString(long pNativeObject, long mesh, long name);
	//// Called to override the reference to a skeleton
	public void processSkeletonName(com.earthview.world.graphic.Mesh mesh, StringPointer name)
	{
		long meshParamValue = (mesh == null ? 0L : mesh.nativeObject.pointer);
		long nameParamValue = name.nativeObject.pointer;
		processSkeletonName_CMesh_EVString(this.nativeObject.pointer, meshParamValue, nameParamValue);
	}
	native private void processSkeletonName_CMesh_EVString_NoVirtual(long pNativeObject, long mesh, long name);
	protected void processSkeletonName_NoVirtual(com.earthview.world.graphic.Mesh mesh, StringPointer name)
	{
		long meshParamValue = (mesh == null ? 0L : mesh.nativeObject.pointer);
		long nameParamValue = name.nativeObject.pointer;
		processSkeletonName_CMesh_EVString_NoVirtual(this.nativeObject.pointer, meshParamValue, nameParamValue);
	}

	public FltSerializerListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public FltSerializerListener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_processMaterialName_CMesh_EVString(long pNativeObject, String method);
	native protected void register_processSkeletonName_CMesh_EVString(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_processMaterialName_CMesh_EVString(this.nativeObject.pointer, "processMaterialName_CMesh_EVString_callback");
			this.register_processSkeletonName_CMesh_EVString(this.nativeObject.pointer, "processSkeletonName_CMesh_EVString_callback");
		}
	}
	
	public static FltSerializerListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		FltSerializerListener obj = null;
 		if(baseObj instanceof FltSerializerListener)
		{
			obj = (FltSerializerListener)baseObj;
		} else {
			obj = new FltSerializerListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CFltSerializerListener");
			obj.increaseCast();
		}

		return obj;
	}
}
