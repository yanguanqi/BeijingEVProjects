package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Itileattachmentptr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::ITileAttachmentPtr", new ItileattachmentptrClassFactory());
	}

	public Itileattachmentptr(com.earthview.world.spatial.Itileattachment instance) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer instancePtr = new BasePointer(instance);
		list.add("instance", instancePtr.get());
		if(instance != null)
		{
		instance.setNoFree(true);
		}
		Create("ITileAttachmentPtr", list);
	}

	public Itileattachmentptr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("ITileAttachmentPtr", null);
	}

	public Itileattachmentptr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Itileattachmentptr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Itileattachmentptr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Itileattachmentptr obj = null;
 		if(baseObj instanceof Itileattachmentptr)
		{
			obj = (Itileattachmentptr)baseObj;
		} else {
			obj = new Itileattachmentptr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ITileAttachmentPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
