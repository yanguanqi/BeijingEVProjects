package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AssimpToMeshListener extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CAssimpToMeshListener", new AssimpToMeshListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCAssimpToMeshListenerProxy", new AssimpToMeshListenerClassFactory());
	}

	public AssimpToMeshListener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCAssimpToMeshListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.AssimpToMeshListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void beforeWriteToFile_CMeshPtr_callback(long meshPtr)
	{
		com.earthview.world.graphic.MeshPtr meshPtrParamValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		meshPtrParamValue.setDelegate(true);
		meshPtrParamValue.setInstancePointer(new InstancePointer(meshPtr));
		IClassFactory meshPtrParamValueClassFactory = GlobalClassFactoryMap.get(meshPtrParamValue.getCppInstanceTypeName());
		if (meshPtrParamValueClassFactory != null)
		{
			meshPtrParamValue.setDelegate(true);
			meshPtrParamValue = (com.earthview.world.graphic.MeshPtr)meshPtrParamValueClassFactory.create();
			meshPtrParamValue.setDelegate(true);
			meshPtrParamValue.setInstancePointer(new InstancePointer(meshPtr));
		}
		beforeWriteToFile(meshPtrParamValue);
	}

	native private void beforeWriteToFile_CMeshPtr(long pNativeObject, long meshPtr);
	public void beforeWriteToFile(com.earthview.world.graphic.MeshPtr meshPtr)
	{
		long meshPtrParamValue = meshPtr.nativeObject.pointer;
		beforeWriteToFile_CMeshPtr(this.nativeObject.pointer, meshPtrParamValue);
	}
	native private void beforeWriteToFile_CMeshPtr_NoVirtual(long pNativeObject, long meshPtr);
	protected void beforeWriteToFile_NoVirtual(com.earthview.world.graphic.MeshPtr meshPtr)
	{
		long meshPtrParamValue = meshPtr.nativeObject.pointer;
		beforeWriteToFile_CMeshPtr_NoVirtual(this.nativeObject.pointer, meshPtrParamValue);
	}

	protected  void beforeWriteTo7Z_MeshStream_callback(long m7zStream)
	{
		com.earthview.world.spatial.MeshStream m7zStreamParamValue = new com.earthview.world.spatial.MeshStream(CreatedWhenConstruct.CWC_NotToCreate);
		m7zStreamParamValue.setDelegate(true);
		m7zStreamParamValue.setInstancePointer(new InstancePointer(m7zStream));
		IClassFactory m7zStreamParamValueClassFactory = GlobalClassFactoryMap.get(m7zStreamParamValue.getCppInstanceTypeName());
		if (m7zStreamParamValueClassFactory != null)
		{
			m7zStreamParamValue.setDelegate(true);
			m7zStreamParamValue = (com.earthview.world.spatial.MeshStream)m7zStreamParamValueClassFactory.create();
			m7zStreamParamValue.setDelegate(true);
			m7zStreamParamValue.setInstancePointer(new InstancePointer(m7zStream));
		}
		beforeWriteTo7Z(m7zStreamParamValue);
	}

	native private void beforeWriteTo7Z_MeshStream(long pNativeObject, long m7zStream);
	public void beforeWriteTo7Z(com.earthview.world.spatial.MeshStream m7zStream)
	{
		long m7zStreamParamValue = m7zStream.nativeObject.pointer;
		beforeWriteTo7Z_MeshStream(this.nativeObject.pointer, m7zStreamParamValue);
	}
	native private void beforeWriteTo7Z_MeshStream_NoVirtual(long pNativeObject, long m7zStream);
	protected void beforeWriteTo7Z_NoVirtual(com.earthview.world.spatial.MeshStream m7zStream)
	{
		long m7zStreamParamValue = m7zStream.nativeObject.pointer;
		beforeWriteTo7Z_MeshStream_NoVirtual(this.nativeObject.pointer, m7zStreamParamValue);
	}

	public AssimpToMeshListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AssimpToMeshListener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_beforeWriteToFile_CMeshPtr(long pNativeObject, String method);
	native protected void register_beforeWriteTo7Z_MeshStream(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_beforeWriteToFile_CMeshPtr(this.nativeObject.pointer, "beforeWriteToFile_CMeshPtr_callback");
			this.register_beforeWriteTo7Z_MeshStream(this.nativeObject.pointer, "beforeWriteTo7Z_MeshStream_callback");
		}
	}
	
	public static AssimpToMeshListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AssimpToMeshListener obj = null;
 		if(baseObj instanceof AssimpToMeshListener)
		{
			obj = (AssimpToMeshListener)baseObj;
		} else {
			obj = new AssimpToMeshListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CAssimpToMeshListener");
			obj.increaseCast();
		}

		return obj;
	}
}
