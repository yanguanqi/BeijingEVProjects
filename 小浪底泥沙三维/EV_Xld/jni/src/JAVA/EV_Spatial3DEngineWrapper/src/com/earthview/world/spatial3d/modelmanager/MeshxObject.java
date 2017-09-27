package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshxObject extends com.earthview.world.spatial3d.modelmanager.LodObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::CMeshxObject", new MeshxObjectClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::JCMeshxObjectProxy", new MeshxObjectClassFactory());
	}

	public MeshxObject(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MeshxObject(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 是否挂接
	 * @param  
	 */
	public boolean isAttached()
	{
		return super.isAttached_NoVirtual();
	}
	/**
	 * 获取接节点
	 * @param  
	 */
	public com.earthview.world.graphic.Node getNode()
	{
		return super.getNode_NoVirtual();
	}
	/**
	 * 挂接节点
	 * @param  
	 */
	public boolean attachToNode(com.earthview.world.graphic.Node n)
	{
		return super.attachToNode_NoVirtual(n);
	}
	/**
	 * 反挂接节点
	 * @param  
	 */
	public com.earthview.world.graphic.Node detachFromNode()
	{
		return super.detachFromNode_NoVirtual();
	}
	/**
	 * 应用meshx中存储的位置
	 * @param  
	 */
	public boolean applyScenePosition()
	{
		return super.applyScenePosition_NoVirtual();
	}
	
	native protected void register_isAttached_void(long pNativeObject, String method);
	native protected void register_getNode_void(long pNativeObject, String method);
	native protected void register_attachToNode_CNode(long pNativeObject, String method);
	native protected void register_detachFromNode_void(long pNativeObject, String method);
	native protected void register_applyScenePosition_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_isAttached_void(this.nativeObject.pointer, "isAttached_void_callback");
			this.register_getNode_void(this.nativeObject.pointer, "getNode_void_callback");
			this.register_attachToNode_CNode(this.nativeObject.pointer, "attachToNode_CNode_callback");
			this.register_detachFromNode_void(this.nativeObject.pointer, "detachFromNode_void_callback");
			this.register_applyScenePosition_void(this.nativeObject.pointer, "applyScenePosition_void_callback");
		}
	}
	
	public static MeshxObject fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MeshxObject obj = null;
 		if(baseObj instanceof MeshxObject)
		{
			obj = (MeshxObject)baseObj;
		} else {
			obj = new MeshxObject(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMeshxObject");
			obj.increaseCast();
		}

		return obj;
	}
}
