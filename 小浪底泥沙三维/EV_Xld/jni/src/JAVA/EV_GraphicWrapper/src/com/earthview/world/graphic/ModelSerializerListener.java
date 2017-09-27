package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelSerializerListener extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CModelSerializerListener", new ModelSerializerListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCModelSerializerListenerProxy", new ModelSerializerListenerClassFactory());
	}

	public ModelSerializerListener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCModelSerializerListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.ModelSerializerListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void processMaterialName_CMesh_EVString_callback(long mesh, long name)
	{
		com.earthview.world.graphic.Mesh meshParamValue = (mesh == 0L ? null : new com.earthview.world.graphic.Mesh(CreatedWhenConstruct.CWC_NotToCreate));
		if(meshParamValue != null)
		{
		meshParamValue.setDelegate(true);
		meshParamValue.setInstancePointer(new InstancePointer(mesh));
		IClassFactory meshParamValueClassFactory = GlobalClassFactoryMap.get(meshParamValue.getCppInstanceTypeName());
		if (meshParamValueClassFactory != null)
		{
			meshParamValue.setDelegate(true);
			meshParamValue = (com.earthview.world.graphic.Mesh)meshParamValueClassFactory.create();
			meshParamValue.setDelegate(true);
			meshParamValue.setInstancePointer(new InstancePointer(mesh));
		}
		}
		StringPointer nameParamValue = new StringPointer(new InstancePointer(name));
		processMaterialName(meshParamValue, nameParamValue);
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

	protected  void processSkeletonName_CMesh_EVString_callback(long mesh, long name)
	{
		com.earthview.world.graphic.Mesh meshParamValue = (mesh == 0L ? null : new com.earthview.world.graphic.Mesh(CreatedWhenConstruct.CWC_NotToCreate));
		if(meshParamValue != null)
		{
		meshParamValue.setDelegate(true);
		meshParamValue.setInstancePointer(new InstancePointer(mesh));
		IClassFactory meshParamValueClassFactory = GlobalClassFactoryMap.get(meshParamValue.getCppInstanceTypeName());
		if (meshParamValueClassFactory != null)
		{
			meshParamValue.setDelegate(true);
			meshParamValue = (com.earthview.world.graphic.Mesh)meshParamValueClassFactory.create();
			meshParamValue.setDelegate(true);
			meshParamValue.setInstancePointer(new InstancePointer(mesh));
		}
		}
		StringPointer nameParamValue = new StringPointer(new InstancePointer(name));
		processSkeletonName(meshParamValue, nameParamValue);
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

	public ModelSerializerListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelSerializerListener(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static ModelSerializerListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelSerializerListener obj = null;
 		if(baseObj instanceof ModelSerializerListener)
		{
			obj = (ModelSerializerListener)baseObj;
		} else {
			obj = new ModelSerializerListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CModelSerializerListener");
			obj.increaseCast();
		}

		return obj;
	}
}
