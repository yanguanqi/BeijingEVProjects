package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeFlyShowAxisEventPtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEventPtr", new GlobeFlyShowAxisEventPtrClassFactory());
	}

	/**
	 * 构造函数
	 */
	public GlobeFlyShowAxisEventPtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CGlobeFlyShowAxisEventPtr", null);
	}

	public GlobeFlyShowAxisEventPtr(com.earthview.world.spatial3d.controls.GlobeFlyShowAxisEvent rep) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer repPtr = new BasePointer(rep);
		list.add("rep", repPtr.get());
		if(rep != null)
		{
		rep.setNoFree(true);
		}
		Create("CGlobeFlyShowAxisEventPtr", list);
	}

	public GlobeFlyShowAxisEventPtr(com.earthview.world.spatial3d.controls.GlobeFlyShowAxisEventPtr tp) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer tpPtr = new BasePointer(tp);
		list.add("tp", tpPtr.get());
		Create("CGlobeFlyShowAxisEventPtr", list);
	}

	native private long get_void(long pNativeObject);
	public com.earthview.world.spatial3d.controls.GlobeFlyShowAxisEvent get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.controls.GlobeFlyShowAxisEvent __returnValue = new com.earthview.world.spatial3d.controls.GlobeFlyShowAxisEvent(CreatedWhenConstruct.CWC_NotToCreate, "CGlobeFlyShowAxisEvent");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.GlobeFlyShowAxisEvent)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGlobeFlyShowAxisEvent");
		}
		return __returnValue;
	}
	native private long OperatorAssign_CGlobeFlyShowAxisEventPtr(long pNativeObject, long r);
	public com.earthview.world.spatial3d.controls.GlobeFlyShowAxisEventPtr OperatorAssign(com.earthview.world.spatial3d.controls.GlobeFlyShowAxisEventPtr r)
	{
		long rParamValue = r.nativeObject.pointer;
		long returnValue = OperatorAssign_CGlobeFlyShowAxisEventPtr(this.nativeObject.pointer, rParamValue);
		com.earthview.world.spatial3d.controls.GlobeFlyShowAxisEventPtr __returnValue = new com.earthview.world.spatial3d.controls.GlobeFlyShowAxisEventPtr(CreatedWhenConstruct.CWC_NotToCreate, "CGlobeFlyShowAxisEventPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.GlobeFlyShowAxisEventPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGlobeFlyShowAxisEventPtr");
		}
		return __returnValue;
	}
	native private long OperatorAssign_CGlobeFlyShowAxisEvent(long pNativeObject, long rep);
	public com.earthview.world.spatial3d.controls.GlobeFlyShowAxisEventPtr OperatorAssign(com.earthview.world.spatial3d.controls.GlobeFlyShowAxisEvent rep)
	{
		long repParamValue = (rep == null ? 0L : rep.nativeObject.pointer);
		long returnValue = OperatorAssign_CGlobeFlyShowAxisEvent(this.nativeObject.pointer, repParamValue);
		com.earthview.world.spatial3d.controls.GlobeFlyShowAxisEventPtr __returnValue = new com.earthview.world.spatial3d.controls.GlobeFlyShowAxisEventPtr(CreatedWhenConstruct.CWC_NotToCreate, "CGlobeFlyShowAxisEventPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.GlobeFlyShowAxisEventPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGlobeFlyShowAxisEventPtr");
		}
		return __returnValue;
	}
	native private void bind_CGlobeFlyShowAxisEvent(long pNativeObject, long rep);
	public void bind(com.earthview.world.spatial3d.controls.GlobeFlyShowAxisEvent rep)
	{
		long repParamValue = (rep == null ? 0L : rep.nativeObject.pointer);
		bind_CGlobeFlyShowAxisEvent(this.nativeObject.pointer, repParamValue);
	}
	native private long toCGUIEventPtr_void(long pNativeObject);
	/**
	 * 转换为EarthView::World::Spatial::SystemUI::CGUIEventPtr
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
	public GlobeFlyShowAxisEventPtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GlobeFlyShowAxisEventPtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GlobeFlyShowAxisEventPtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GlobeFlyShowAxisEventPtr obj = null;
 		if(baseObj instanceof GlobeFlyShowAxisEventPtr)
		{
			obj = (GlobeFlyShowAxisEventPtr)baseObj;
		} else {
			obj = new GlobeFlyShowAxisEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGlobeFlyShowAxisEventPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
