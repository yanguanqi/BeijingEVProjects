package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Bilcache extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::CBILCache", new BilcacheClassFactory());
	}

	public Bilcache(int pointPerSide) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer pointPerSidePtr = new BasePointer(pointPerSide);
		list.add("pointPerSide", pointPerSidePtr.get());
		Create("CBILCache", list);
	}

	native private boolean getBILStruct_EVString_BILStruct(long pNativeObject, String bilName, long bil);
	public boolean getBILStruct(String bilName, com.earthview.world.spatial3d.modelmanager.Bilstruct bil)
	{
		String bilNameParamValue = bilName;
		long bilParamValue = (bil == null ? 0L : bil.nativeObject.pointer);
		boolean returnValue = getBILStruct_EVString_BILStruct(this.nativeObject.pointer, bilNameParamValue, bilParamValue);
		return returnValue;
	}
	native private void addCache_EVString_BILStruct(long pNativeObject, String bilName, long bil);
	public void addCache(String bilName, com.earthview.world.spatial3d.modelmanager.Bilstruct bil)
	{
		String bilNameParamValue = bilName;
		long bilParamValue = (bil == null ? 0L : bil.nativeObject.pointer);
		addCache_EVString_BILStruct(this.nativeObject.pointer, bilNameParamValue, bilParamValue);
	}
	public Bilcache(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Bilcache(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Bilcache fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Bilcache obj = null;
 		if(baseObj instanceof Bilcache)
		{
			obj = (Bilcache)baseObj;
		} else {
			obj = new Bilcache(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CBILCache");
			obj.increaseCast();
		}

		return obj;
	}
}
