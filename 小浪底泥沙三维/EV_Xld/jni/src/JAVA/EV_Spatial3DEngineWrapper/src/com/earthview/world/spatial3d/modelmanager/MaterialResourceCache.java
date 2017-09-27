package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;
import com.earthview.world.graphic.*;

public class MaterialResourceCache extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache", new MaterialResourceCacheClassFactory());
	}

	public MaterialResourceCache(String group) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer groupPtr = new BasePointer(group);
		list.add("group", groupPtr.get());
		Create("CMaterialResourceCache", list);
	}

	native private void lock_void(long pNativeObject);
	/**
	 * 缓存容器加锁
	 */
	public void lock()
	{
		lock_void(this.nativeObject.pointer);
	}
	native private void unlock_void(long pNativeObject);
	/**
	 * 缓存容器解锁
	 */
	public void unlock()
	{
		unlock_void(this.nativeObject.pointer);
	}
	native private void setGroupName_EVString(long pNativeObject, String group);
	/**
	 * 换组名
	 */
	public void setGroupName(String group)
	{
		String groupParamValue = group;
		setGroupName_EVString(this.nativeObject.pointer, groupParamValue);
	}
	native private void setMaterialCacheSize_ev_uint32(long pNativeObject, long size);
	/**
	 * 设置材质缓存对象个数
	 */
	public void setMaterialCacheSize(long size)
	{
		long sizeParamValue = size;
		setMaterialCacheSize_ev_uint32(this.nativeObject.pointer, sizeParamValue);
	}
	native private long getMaterialCacheSize_void(long pNativeObject);
	/**
	 * 获取材质缓存对象个数
	 */
	public long getMaterialCacheSize()
	{
		long returnValue = getMaterialCacheSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasMaterialCache_ev_uint32(long pNativeObject, long modelID);
	/**
	 * 是否缓存了模型对应的材质
	 */
	public boolean hasMaterialCache(long modelID)
	{
		long modelIDParamValue = modelID;
		boolean returnValue = hasMaterialCache_ev_uint32(this.nativeObject.pointer, modelIDParamValue);
		return returnValue;
	}
	native private void addMaterial_ev_uint32_MaterialPtrVector(long pNativeObject, long modelID, long matPtrVec);
	/**
	 * 添模型对应的材质脚本
	 */
	public void addMaterial(long modelID, com.earthview.world.spatial3d.MaterialPtrVector matPtrVec)
	{
		long modelIDParamValue = modelID;
		long matPtrVecParamValue = matPtrVec.nativeObject.pointer;
		addMaterial_ev_uint32_MaterialPtrVector(this.nativeObject.pointer, modelIDParamValue, matPtrVecParamValue);
	}
	native private void removeMaterial_ev_uint32(long pNativeObject, long modelID);
	/**
	 * 移除模型对应的材质
	 */
	public void removeMaterial(long modelID)
	{
		long modelIDParamValue = modelID;
		removeMaterial_ev_uint32(this.nativeObject.pointer, modelIDParamValue);
	}
	native private void removeAllMaterial_void(long pNativeObject);
	/**
	 * 移除所有模型对应的材质
	 */
	public void removeAllMaterial()
	{
		removeAllMaterial_void(this.nativeObject.pointer);
	}
	native private void unloadMaterial_ev_uint32(long pNativeObject, long modelID);
	/**
	 * 卸载模型对应的材质
	 */
	public void unloadMaterial(long modelID)
	{
		long modelIDParamValue = modelID;
		unloadMaterial_ev_uint32(this.nativeObject.pointer, modelIDParamValue);
	}
	public MaterialResourceCache(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MaterialResourceCache(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MaterialResourceCache fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MaterialResourceCache obj = null;
 		if(baseObj instanceof MaterialResourceCache)
		{
			obj = (MaterialResourceCache)baseObj;
		} else {
			obj = new MaterialResourceCache(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMaterialResourceCache");
			obj.increaseCast();
		}

		return obj;
	}
}
