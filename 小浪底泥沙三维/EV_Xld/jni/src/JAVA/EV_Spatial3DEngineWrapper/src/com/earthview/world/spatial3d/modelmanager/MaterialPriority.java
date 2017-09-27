package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;
import com.earthview.world.graphic.*;

public class MaterialPriority extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::CMaterialPriority", new MaterialPriorityClassFactory());
	}

	public MaterialPriority() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CMaterialPriority", null);
	}

	native private void addItem_ev_uint32(long pNativeObject, long id);
	/**
	 * 添加一组数据
	 */
	public void addItem(long id)
	{
		long idParamValue = id;
		addItem_ev_uint32(this.nativeObject.pointer, idParamValue);
	}
	native private void removeItem_ev_uint32(long pNativeObject, long id);
	/**
	 * 移除一组数据
	 */
	public void removeItem(long id)
	{
		long idParamValue = id;
		removeItem_ev_uint32(this.nativeObject.pointer, idParamValue);
	}
	native private long getPriorityItem_void(long pNativeObject);
	/**
	 * 获取时间最久没更新的一模型iD
	 */
	public long getPriorityItem()
	{
		long returnValue = getPriorityItem_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void updatePriority_ev_uint32(long pNativeObject, long id);
	/**
	 * 更新模型的优先级
	 */
	public void updatePriority(long id)
	{
		long idParamValue = id;
		updatePriority_ev_uint32(this.nativeObject.pointer, idParamValue);
	}
	public MaterialPriority(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MaterialPriority(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MaterialPriority fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MaterialPriority obj = null;
 		if(baseObj instanceof MaterialPriority)
		{
			obj = (MaterialPriority)baseObj;
		} else {
			obj = new MaterialPriority(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMaterialPriority");
			obj.increaseCast();
		}

		return obj;
	}
}
