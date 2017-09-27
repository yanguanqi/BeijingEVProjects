package com.earthview.world.spatial.octree;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WebOctreeManager extends com.earthview.world.spatial.octree.BaseOctreeManager {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Octree::CWebOctreeManager", new WebOctreeManagerClassFactory());
	}

	/**
	 * 构造函数
	 * @param box 包围盒
	 * @param maxDepth 最大深度
	 */
	public WebOctreeManager(String web, com.earthview.world.spatial.Evspatialserver pNetServer, com.earthview.world.spatial.Evbasemodeldataset pNetDataset, com.earthview.world.spatial.math.AxisAlignedBox box, long maxDepth) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer webPtr = new BasePointer(web);
		list.add("web", webPtr.get());
		BasePointer pNetServerPtr = new BasePointer(pNetServer);
		list.add("pNetServer", pNetServerPtr.get());
		BasePointer pNetDatasetPtr = new BasePointer(pNetDataset);
		list.add("pNetDataset", pNetDatasetPtr.get());
		BasePointer boxPtr = new BasePointer(box);
		list.add("box", boxPtr.get());
		BasePointer maxDepthPtr = new BasePointer(maxDepth);
		list.add("maxDepth", maxDepthPtr.get());
		Create("CWebOctreeManager", list);
	}

	public WebOctreeManager(String web, com.earthview.world.spatial.Evspatialserver pNetServer, com.earthview.world.spatial.Evbasemodeldataset pNetDataset, com.earthview.world.spatial.Evbasemodellayerinfo pNetDatasetInfo, com.earthview.world.spatial.math.AxisAlignedBox box, long maxDepth) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer webPtr = new BasePointer(web);
		list.add("web", webPtr.get());
		BasePointer pNetServerPtr = new BasePointer(pNetServer);
		list.add("pNetServer", pNetServerPtr.get());
		BasePointer pNetDatasetPtr = new BasePointer(pNetDataset);
		list.add("pNetDataset", pNetDatasetPtr.get());
		BasePointer pNetDatasetInfoPtr = new BasePointer(pNetDatasetInfo);
		list.add("pNetDatasetInfo", pNetDatasetInfoPtr.get());
		BasePointer boxPtr = new BasePointer(box);
		list.add("box", boxPtr.get());
		BasePointer maxDepthPtr = new BasePointer(maxDepth);
		list.add("maxDepth", maxDepthPtr.get());
		Create("CWebOctreeManager", list);
	}

	public WebOctreeManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public WebOctreeManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static WebOctreeManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		WebOctreeManager obj = null;
 		if(baseObj instanceof WebOctreeManager)
		{
			obj = (WebOctreeManager)baseObj;
		} else {
			obj = new WebOctreeManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CWebOctreeManager");
			obj.increaseCast();
		}

		return obj;
	}
}
