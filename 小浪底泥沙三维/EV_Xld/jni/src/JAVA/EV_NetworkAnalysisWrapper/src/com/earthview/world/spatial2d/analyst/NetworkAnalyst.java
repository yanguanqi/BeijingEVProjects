package com.earthview.world.spatial2d.analyst;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 网络分析类
 */
public class NetworkAnalyst extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Analyst::CNetworkAnalyst", new NetworkAnalystClassFactory());
	}

	/**
	 * 构造函数
	 * @param pND 网络数据集
	 */
	public NetworkAnalyst(com.earthview.world.spatial2d.geodataset.NetworkDataset ref_pND) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_pNDPtr = new BasePointer(ref_pND);
		list.add("ref_pND", ref_pNDPtr.get());
		Create("CNetworkAnalyst", list);
	}

	public NetworkAnalyst(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public NetworkAnalyst(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static NetworkAnalyst fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		NetworkAnalyst obj = null;
 		if(baseObj instanceof NetworkAnalyst)
		{
			obj = (NetworkAnalyst)baseObj;
		} else {
			obj = new NetworkAnalyst(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CNetworkAnalyst");
			obj.increaseCast();
		}

		return obj;
	}
}
