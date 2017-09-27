package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * OGCWMTS服务连接类
 */
public class Ogcwmtsserverconnection extends com.earthview.world.spatial.ServerConnection {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::COGCWMTSServerConnection", new OgcwmtsserverconnectionClassFactory());
	}

	/**
	 * 构造函数
	 */
	public Ogcwmtsserverconnection() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("COGCWMTSServerConnection", null);
	}

	public Ogcwmtsserverconnection(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ogcwmtsserverconnection(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Ogcwmtsserverconnection fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ogcwmtsserverconnection obj = null;
 		if(baseObj instanceof Ogcwmtsserverconnection)
		{
			obj = (Ogcwmtsserverconnection)baseObj;
		} else {
			obj = new Ogcwmtsserverconnection(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "COGCWMTSServerConnection");
			obj.increaseCast();
		}

		return obj;
	}
}
