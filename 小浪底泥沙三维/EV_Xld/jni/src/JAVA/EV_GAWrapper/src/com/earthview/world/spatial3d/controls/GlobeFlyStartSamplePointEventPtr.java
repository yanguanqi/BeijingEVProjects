package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeFlyStartSamplePointEventPtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEventPtr", new GlobeFlyStartSamplePointEventPtrClassFactory());
	}

	/**
	 * 构造函数
	 */
	public GlobeFlyStartSamplePointEventPtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CGlobeFlyStartSamplePointEventPtr", null);
	}

	public GlobeFlyStartSamplePointEventPtr(com.earthview.world.spatial3d.controls.GlobeFlyStartSamplePointEvent rep) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer repPtr = new BasePointer(rep);
		list.add("rep", repPtr.get());
		if(rep != null)
		{
		rep.setNoFree(true);
		}
		Create("CGlobeFlyStartSamplePointEventPtr", list);
	}

	public GlobeFlyStartSamplePointEventPtr(com.earthview.world.spatial3d.controls.GlobeFlyStartSamplePointEventPtr tp) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer tpPtr = new BasePointer(tp);
		list.add("tp", tpPtr.get());
		Create("CGlobeFlyStartSamplePointEventPtr", list);
	}

	native private long get_void(long pNativeObject);
	public com.earthview.world.spatial3d.controls.GlobeFlyStartSamplePointEvent get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.controls.GlobeFlyStartSamplePointEvent __returnValue = new com.earthview.world.spatial3d.controls.GlobeFlyStartSamplePointEvent(CreatedWhenConstruct.CWC_NotToCreate, "CGlobeFlyStartSamplePointEvent");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.GlobeFlyStartSamplePointEvent)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGlobeFlyStartSamplePointEvent");
		}
		return __returnValue;
	}
	native private long OperatorAssign_CGlobeFlyStartSamplePointEventPtr(long pNativeObject, long r);
	public com.earthview.world.spatial3d.controls.GlobeFlyStartSamplePointEventPtr OperatorAssign(com.earthview.world.spatial3d.controls.GlobeFlyStartSamplePointEventPtr r)
	{
		long rParamValue = r.nativeObject.pointer;
		long returnValue = OperatorAssign_CGlobeFlyStartSamplePointEventPtr(this.nativeObject.pointer, rParamValue);
		com.earthview.world.spatial3d.controls.GlobeFlyStartSamplePointEventPtr __returnValue = new com.earthview.world.spatial3d.controls.GlobeFlyStartSamplePointEventPtr(CreatedWhenConstruct.CWC_NotToCreate, "CGlobeFlyStartSamplePointEventPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.GlobeFlyStartSamplePointEventPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGlobeFlyStartSamplePointEventPtr");
		}
		return __returnValue;
	}
	native private long OperatorAssign_CGlobeFlyStartSamplePointEvent(long pNativeObject, long rep);
	public com.earthview.world.spatial3d.controls.GlobeFlyStartSamplePointEventPtr OperatorAssign(com.earthview.world.spatial3d.controls.GlobeFlyStartSamplePointEvent rep)
	{
		long repParamValue = (rep == null ? 0L : rep.nativeObject.pointer);
		long returnValue = OperatorAssign_CGlobeFlyStartSamplePointEvent(this.nativeObject.pointer, repParamValue);
		com.earthview.world.spatial3d.controls.GlobeFlyStartSamplePointEventPtr __returnValue = new com.earthview.world.spatial3d.controls.GlobeFlyStartSamplePointEventPtr(CreatedWhenConstruct.CWC_NotToCreate, "CGlobeFlyStartSamplePointEventPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.GlobeFlyStartSamplePointEventPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGlobeFlyStartSamplePointEventPtr");
		}
		return __returnValue;
	}
	native private void bind_CGlobeFlyStartSamplePointEvent(long pNativeObject, long rep);
	public void bind(com.earthview.world.spatial3d.controls.GlobeFlyStartSamplePointEvent rep)
	{
		long repParamValue = (rep == null ? 0L : rep.nativeObject.pointer);
		bind_CGlobeFlyStartSamplePointEvent(this.nativeObject.pointer, repParamValue);
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
	public GlobeFlyStartSamplePointEventPtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GlobeFlyStartSamplePointEventPtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GlobeFlyStartSamplePointEventPtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GlobeFlyStartSamplePointEventPtr obj = null;
 		if(baseObj instanceof GlobeFlyStartSamplePointEventPtr)
		{
			obj = (GlobeFlyStartSamplePointEventPtr)baseObj;
		} else {
			obj = new GlobeFlyStartSamplePointEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGlobeFlyStartSamplePointEventPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
