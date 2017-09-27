package com.earthview.world.spatial.octree;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 八叉树基类，负责基本的对象管理
 */
public class BaseOctreeManager extends com.earthview.world.spatial.octree.OctreeManager {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Octree::CBaseOctreeManager", new BaseOctreeManagerClassFactory());
	}

	/**
	 * 
	 * @param  
	 */
	public BaseOctreeManager() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CBaseOctreeManager", null);
	}

	/**
	 * 构造函数
	 * @param box 包围盒
	 * @param maxDepth 最大深度
	 */
	public BaseOctreeManager(com.earthview.world.spatial.math.AxisAlignedBox box, long maxDepth) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer boxPtr = new BasePointer(box);
		list.add("box", boxPtr.get());
		BasePointer maxDepthPtr = new BasePointer(maxDepth);
		list.add("maxDepth", maxDepthPtr.get());
		Create("CBaseOctreeManager", list);
	}

	public BaseOctreeManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public BaseOctreeManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static BaseOctreeManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		BaseOctreeManager obj = null;
 		if(baseObj instanceof BaseOctreeManager)
		{
			obj = (BaseOctreeManager)baseObj;
		} else {
			obj = new BaseOctreeManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CBaseOctreeManager");
			obj.increaseCast();
		}

		return obj;
	}
}
