package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * OGCWMS服务连接类
 */
public class Ogcwmsserverconnection extends com.earthview.world.spatial.ServerConnection {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::COGCWMSServerConnection", new OgcwmsserverconnectionClassFactory());
	}

	/**
	 * 构造函数
	 */
	public Ogcwmsserverconnection() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("COGCWMSServerConnection", null);
	}

	public Ogcwmsserverconnection(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ogcwmsserverconnection(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Ogcwmsserverconnection fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ogcwmsserverconnection obj = null;
 		if(baseObj instanceof Ogcwmsserverconnection)
		{
			obj = (Ogcwmsserverconnection)baseObj;
		} else {
			obj = new Ogcwmsserverconnection(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "COGCWMSServerConnection");
			obj.increaseCast();
		}

		return obj;
	}
}
