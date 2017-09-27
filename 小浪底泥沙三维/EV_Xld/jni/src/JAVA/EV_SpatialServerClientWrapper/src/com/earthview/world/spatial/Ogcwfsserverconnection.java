package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * OGCWFS服务连接类
 */
public class Ogcwfsserverconnection extends com.earthview.world.spatial.ServerConnection {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::COGCWFSServerConnection", new OgcwfsserverconnectionClassFactory());
	}

	/**
	 * 构造函数
	 */
	public Ogcwfsserverconnection() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("COGCWFSServerConnection", null);
	}

	public Ogcwfsserverconnection(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ogcwfsserverconnection(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Ogcwfsserverconnection fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ogcwfsserverconnection obj = null;
 		if(baseObj instanceof Ogcwfsserverconnection)
		{
			obj = (Ogcwfsserverconnection)baseObj;
		} else {
			obj = new Ogcwfsserverconnection(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "COGCWFSServerConnection");
			obj.increaseCast();
		}

		return obj;
	}
}
