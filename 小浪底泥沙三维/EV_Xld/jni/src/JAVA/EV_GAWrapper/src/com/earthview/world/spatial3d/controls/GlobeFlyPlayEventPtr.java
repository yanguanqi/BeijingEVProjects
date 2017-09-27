package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeFlyPlayEventPtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEventPtr", new GlobeFlyPlayEventPtrClassFactory());
	}

	/**
	 * 构造函数
	 */
	public GlobeFlyPlayEventPtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CGlobeFlyPlayEventPtr", null);
	}

	public GlobeFlyPlayEventPtr(com.earthview.world.spatial3d.controls.GlobeFlyPlayEvent rep) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer repPtr = new BasePointer(rep);
		list.add("rep", repPtr.get());
		if(rep != null)
		{
		rep.setNoFree(true);
		}
		Create("CGlobeFlyPlayEventPtr", list);
	}

	public GlobeFlyPlayEventPtr(com.earthview.world.spatial3d.controls.GlobeFlyPlayEventPtr tp) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer tpPtr = new BasePointer(tp);
		list.add("tp", tpPtr.get());
		Create("CGlobeFlyPlayEventPtr", list);
	}

	native private long get_void(long pNativeObject);
	public com.earthview.world.spatial3d.controls.GlobeFlyPlayEvent get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.controls.GlobeFlyPlayEvent __returnValue = new com.earthview.world.spatial3d.controls.GlobeFlyPlayEvent(CreatedWhenConstruct.CWC_NotToCreate, "CGlobeFlyPlayEvent");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.GlobeFlyPlayEvent)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGlobeFlyPlayEvent");
		}
		return __returnValue;
	}
	native private void bind_CGlobeFlyPlayEvent(long pNativeObject, long rep);
	public void bind(com.earthview.world.spatial3d.controls.GlobeFlyPlayEvent rep)
	{
		long repParamValue = (rep == null ? 0L : rep.nativeObject.pointer);
		bind_CGlobeFlyPlayEvent(this.nativeObject.pointer, repParamValue);
	}
	native private long OperatorAssign_CGlobeFlyPlayEventPtr(long pNativeObject, long r);
	public com.earthview.world.spatial3d.controls.GlobeFlyPlayEventPtr OperatorAssign(com.earthview.world.spatial3d.controls.GlobeFlyPlayEventPtr r)
	{
		long rParamValue = r.nativeObject.pointer;
		long returnValue = OperatorAssign_CGlobeFlyPlayEventPtr(this.nativeObject.pointer, rParamValue);
		com.earthview.world.spatial3d.controls.GlobeFlyPlayEventPtr __returnValue = new com.earthview.world.spatial3d.controls.GlobeFlyPlayEventPtr(CreatedWhenConstruct.CWC_NotToCreate, "CGlobeFlyPlayEventPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.GlobeFlyPlayEventPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGlobeFlyPlayEventPtr");
		}
		return __returnValue;
	}
	native private long OperatorAssign_CGlobeFlyPlayEvent(long pNativeObject, long rep);
	public com.earthview.world.spatial3d.controls.GlobeFlyPlayEventPtr OperatorAssign(com.earthview.world.spatial3d.controls.GlobeFlyPlayEvent rep)
	{
		long repParamValue = (rep == null ? 0L : rep.nativeObject.pointer);
		long returnValue = OperatorAssign_CGlobeFlyPlayEvent(this.nativeObject.pointer, repParamValue);
		com.earthview.world.spatial3d.controls.GlobeFlyPlayEventPtr __returnValue = new com.earthview.world.spatial3d.controls.GlobeFlyPlayEventPtr(CreatedWhenConstruct.CWC_NotToCreate, "CGlobeFlyPlayEventPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.GlobeFlyPlayEventPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGlobeFlyPlayEventPtr");
		}
		return __returnValue;
	}
	native private long toCGUIEventPtr_void(long pNativeObject);
	/**
	 * 转换为EarthView::World::Spatial::SystemUI::CGUIEventPtr对象
	 */
	public com.earthview.world.spatial.systemui.Guieventptr toCGUIEventPtr()
	{
		long returnValue = toCGUIEventPtr_void(this.nativeObject.pointer);
		com.earthview.world.spatial.systemui.Guieventptr __returnValue = new com.earthview.world.spatial.systemui.Guieventptr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CGUIEventPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.systemui.Guieventptr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CGUIEventPtr");
		}
		return __returnValue;
	}
	native private long OperatorConvertionCGUIEventPtr_void(long pNativeObject);
	public com.earthview.world.spatial.systemui.Guieventptr OperatorConvertionCGUIEventPtr()
	{
		long returnValue = OperatorConvertionCGUIEventPtr_void(this.nativeObject.pointer);
		com.earthview.world.spatial.systemui.Guieventptr __returnValue = new com.earthview.world.spatial.systemui.Guieventptr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CGUIEventPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.systemui.Guieventptr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CGUIEventPtr");
		}
		return __returnValue;
	}
	public GlobeFlyPlayEventPtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GlobeFlyPlayEventPtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GlobeFlyPlayEventPtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GlobeFlyPlayEventPtr obj = null;
 		if(baseObj instanceof GlobeFlyPlayEventPtr)
		{
			obj = (GlobeFlyPlayEventPtr)baseObj;
		} else {
			obj = new GlobeFlyPlayEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGlobeFlyPlayEventPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
