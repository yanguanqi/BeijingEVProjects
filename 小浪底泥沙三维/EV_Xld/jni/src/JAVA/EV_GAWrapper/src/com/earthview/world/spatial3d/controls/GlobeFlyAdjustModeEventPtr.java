package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeFlyAdjustModeEventPtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEventPtr", new GlobeFlyAdjustModeEventPtrClassFactory());
	}

	/**
	 * 构造函数
	 */
	public GlobeFlyAdjustModeEventPtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CGlobeFlyAdjustModeEventPtr", null);
	}

	public GlobeFlyAdjustModeEventPtr(com.earthview.world.spatial3d.controls.GlobeFlyAdjustModeEvent rep) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer repPtr = new BasePointer(rep);
		list.add("rep", repPtr.get());
		if(rep != null)
		{
		rep.setNoFree(true);
		}
		Create("CGlobeFlyAdjustModeEventPtr", list);
	}

	public GlobeFlyAdjustModeEventPtr(com.earthview.world.spatial3d.controls.GlobeFlyAdjustModeEventPtr tp) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer tpPtr = new BasePointer(tp);
		list.add("tp", tpPtr.get());
		Create("CGlobeFlyAdjustModeEventPtr", list);
	}

	native private long get_void(long pNativeObject);
	public com.earthview.world.spatial3d.controls.GlobeFlyAdjustModeEvent get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.controls.GlobeFlyAdjustModeEvent __returnValue = new com.earthview.world.spatial3d.controls.GlobeFlyAdjustModeEvent(CreatedWhenConstruct.CWC_NotToCreate, "CGlobeFlyAdjustModeEvent");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.GlobeFlyAdjustModeEvent)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGlobeFlyAdjustModeEvent");
		}
		return __returnValue;
	}
	native private long OperatorAssign_CGlobeFlyAdjustModeEventPtr(long pNativeObject, long r);
	public com.earthview.world.spatial3d.controls.GlobeFlyAdjustModeEventPtr OperatorAssign(com.earthview.world.spatial3d.controls.GlobeFlyAdjustModeEventPtr r)
	{
		long rParamValue = r.nativeObject.pointer;
		long returnValue = OperatorAssign_CGlobeFlyAdjustModeEventPtr(this.nativeObject.pointer, rParamValue);
		com.earthview.world.spatial3d.controls.GlobeFlyAdjustModeEventPtr __returnValue = new com.earthview.world.spatial3d.controls.GlobeFlyAdjustModeEventPtr(CreatedWhenConstruct.CWC_NotToCreate, "CGlobeFlyAdjustModeEventPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.GlobeFlyAdjustModeEventPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGlobeFlyAdjustModeEventPtr");
		}
		return __returnValue;
	}
	native private long OperatorAssign_CGlobeFlyAdjustModeEvent(long pNativeObject, long rep);
	public com.earthview.world.spatial3d.controls.GlobeFlyAdjustModeEventPtr OperatorAssign(com.earthview.world.spatial3d.controls.GlobeFlyAdjustModeEvent rep)
	{
		long repParamValue = (rep == null ? 0L : rep.nativeObject.pointer);
		long returnValue = OperatorAssign_CGlobeFlyAdjustModeEvent(this.nativeObject.pointer, repParamValue);
		com.earthview.world.spatial3d.controls.GlobeFlyAdjustModeEventPtr __returnValue = new com.earthview.world.spatial3d.controls.GlobeFlyAdjustModeEventPtr(CreatedWhenConstruct.CWC_NotToCreate, "CGlobeFlyAdjustModeEventPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.GlobeFlyAdjustModeEventPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGlobeFlyAdjustModeEventPtr");
		}
		return __returnValue;
	}
	native private void bind_CGlobeFlyAdjustModeEvent(long pNativeObject, long rep);
	public void bind(com.earthview.world.spatial3d.controls.GlobeFlyAdjustModeEvent rep)
	{
		long repParamValue = (rep == null ? 0L : rep.nativeObject.pointer);
		bind_CGlobeFlyAdjustModeEvent(this.nativeObject.pointer, repParamValue);
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
	public GlobeFlyAdjustModeEventPtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GlobeFlyAdjustModeEventPtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GlobeFlyAdjustModeEventPtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GlobeFlyAdjustModeEventPtr obj = null;
 		if(baseObj instanceof GlobeFlyAdjustModeEventPtr)
		{
			obj = (GlobeFlyAdjustModeEventPtr)baseObj;
		} else {
			obj = new GlobeFlyAdjustModeEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGlobeFlyAdjustModeEventPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
