package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeFlyPathPtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CGlobeFlyPathPtr", new GlobeFlyPathPtrClassFactory());
	}

	public GlobeFlyPathPtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CGlobeFlyPathPtr", null);
	}

	public GlobeFlyPathPtr(com.earthview.world.spatial3d.GlobeFlyPath rep) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer repPtr = new BasePointer(rep);
		list.add("rep", repPtr.get());
		if(rep != null)
		{
		rep.setNoFree(true);
		}
		Create("CGlobeFlyPathPtr", list);
	}

	public GlobeFlyPathPtr(com.earthview.world.spatial3d.GlobeFlyPathPtr tp) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer tpPtr = new BasePointer(tp);
		list.add("tp", tpPtr.get());
		Create("CGlobeFlyPathPtr", list);
	}

	native private long get_void(long pNativeObject);
	public com.earthview.world.spatial3d.GlobeFlyPath get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.GlobeFlyPath __returnValue = new com.earthview.world.spatial3d.GlobeFlyPath(CreatedWhenConstruct.CWC_NotToCreate, "CGlobeFlyPath");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.GlobeFlyPath)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGlobeFlyPath");
		}
		return __returnValue;
	}
	native private void setGlobeFlyPath_CGlobeFlyPath(long pNativeObject, long rep);
	public void setGlobeFlyPath(com.earthview.world.spatial3d.GlobeFlyPath rep)
	{
		long repParamValue = (rep == null ? 0L : rep.nativeObject.pointer);
		setGlobeFlyPath_CGlobeFlyPath(this.nativeObject.pointer, repParamValue);
	}
	native private long OperatorAssign_CGlobeFlyPathPtr(long pNativeObject, long r);
	public com.earthview.world.spatial3d.GlobeFlyPathPtr OperatorAssign(com.earthview.world.spatial3d.GlobeFlyPathPtr r)
	{
		long rParamValue = r.nativeObject.pointer;
		long returnValue = OperatorAssign_CGlobeFlyPathPtr(this.nativeObject.pointer, rParamValue);
		com.earthview.world.spatial3d.GlobeFlyPathPtr __returnValue = new com.earthview.world.spatial3d.GlobeFlyPathPtr(CreatedWhenConstruct.CWC_NotToCreate, "CGlobeFlyPathPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.GlobeFlyPathPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGlobeFlyPathPtr");
		}
		return __returnValue;
	}
	public GlobeFlyPathPtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GlobeFlyPathPtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GlobeFlyPathPtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GlobeFlyPathPtr obj = null;
 		if(baseObj instanceof GlobeFlyPathPtr)
		{
			obj = (GlobeFlyPathPtr)baseObj;
		} else {
			obj = new GlobeFlyPathPtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGlobeFlyPathPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
