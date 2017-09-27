package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshxUserData extends com.earthview.world.spatial3d.FeatureUserData {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::CMeshxUserData", new MeshxUserDataClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::JCMeshxUserDataProxy", new MeshxUserDataClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public MeshxUserData() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCMeshxUserDataProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.modelmanager.MeshxUserData".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private String get_mObjectHandle_void(long pNativeObject);
	public ULongPointer get_mObjectHandle()
	{
		String jniValue = get_mObjectHandle_void(this.nativeObject.pointer);
		
		ULongPointer __returnValue = new ULongPointer(jniValue);
		return __returnValue;
	}
	
	native private void set_mObjectHandle_ev_uint64 (long pNativeObject, long value);
	public void set_mObjectHandle(ULongPointer mObjectHandle)
	{
		long mObjectHandleParamValue = mObjectHandle.nativeObject.pointer;
		
		set_mObjectHandle_ev_uint64(this.nativeObject.pointer, mObjectHandleParamValue);
	}
	
	public MeshxUserData(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MeshxUserData(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public com.earthview.world.graphic.MovableObject.UserData ev_clone()
	{
		return super.ev_clone_NoVirtual();
	}
	
	native protected void register_ev_clone_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
		}
	}
	
	public static MeshxUserData fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MeshxUserData obj = null;
 		if(baseObj instanceof MeshxUserData)
		{
			obj = (MeshxUserData)baseObj;
		} else {
			obj = new MeshxUserData(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMeshxUserData");
			obj.increaseCast();
		}

		return obj;
	}
}
