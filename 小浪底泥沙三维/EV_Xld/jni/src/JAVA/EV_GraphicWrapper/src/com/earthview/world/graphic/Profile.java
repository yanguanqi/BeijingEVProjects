package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///0x40000000,
//// Rendering
public class Profile extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CProfile", new ProfileClassFactory());
	}

	public Profile(String profileName) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer profileNamePtr = new BasePointer(profileName);
		list.add("profileName", profileNamePtr.get());
		Create("CProfile", list);
	}

	public Profile(String profileName, long groupID) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer profileNamePtr = new BasePointer(profileName);
		list.add("profileName", profileNamePtr.get());
		BasePointer groupIDPtr = new BasePointer(groupID);
		list.add("groupID", groupIDPtr.get());
		Create("CProfile", list);
	}

	public Profile(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Profile(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Profile fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Profile obj = null;
 		if(baseObj instanceof Profile)
		{
			obj = (Profile)baseObj;
		} else {
			obj = new Profile(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CProfile");
			obj.increaseCast();
		}

		return obj;
	}
}
