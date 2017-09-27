package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PrefabFactory extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CPrefabFactory", new PrefabFactoryClassFactory());
	}

	public PrefabFactory() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CPrefabFactory", null);
	}

	native private static boolean createPrefab_CMesh(long mesh);
	public static boolean createPrefab(com.earthview.world.graphic.Mesh mesh)
	{
		long meshParamValue = (mesh == null ? 0L : mesh.nativeObject.pointer);
		boolean returnValue = createPrefab_CMesh(meshParamValue);
		return returnValue;
	}
	public PrefabFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public PrefabFactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static PrefabFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		PrefabFactory obj = null;
 		if(baseObj instanceof PrefabFactory)
		{
			obj = (PrefabFactory)baseObj;
		} else {
			obj = new PrefabFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CPrefabFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
