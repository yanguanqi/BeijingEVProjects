package com.earthview.world.spatial.octree;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Dboctreemanager extends com.earthview.world.spatial.octree.BaseOctreeManager {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Octree::CDBOctreeManager", new DboctreemanagerClassFactory());
	}

	/**
	 * 构造函数
	 * @param box 包围盒
	 * @param maxDepth 最大深度
	 */
	public Dboctreemanager(com.earthview.world.core.database.SqlDatabase db, String octreeTable, com.earthview.world.spatial.math.AxisAlignedBox box, long maxDepth) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer dbPtr = new BasePointer(db);
		list.add("db", dbPtr.get());
		BasePointer octreeTablePtr = new BasePointer(octreeTable);
		list.add("octreeTable", octreeTablePtr.get());
		BasePointer boxPtr = new BasePointer(box);
		list.add("box", boxPtr.get());
		BasePointer maxDepthPtr = new BasePointer(maxDepth);
		list.add("maxDepth", maxDepthPtr.get());
		Create("CDBOctreeManager", list);
	}

	public Dboctreemanager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Dboctreemanager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Dboctreemanager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Dboctreemanager obj = null;
 		if(baseObj instanceof Dboctreemanager)
		{
			obj = (Dboctreemanager)baseObj;
		} else {
			obj = new Dboctreemanager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDBOctreeManager");
			obj.increaseCast();
		}

		return obj;
	}
}
